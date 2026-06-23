# Compilation Method

This document describes how to build StringInt-Benchmarks locally with LTO and PGO enabled across the three supported compiler toolchains. The build is a three-stage process: an instrumented build, a training run that produces profile data, and a final optimized build that consumes that profile data.

Two helper scripts in the repository root handle this end-to-end: `pgo-build.sh` for Unix-like systems (Linux, macOS, WSL) and `pgo-build.ps1` for Windows PowerShell. Both scripts clean any prior build directories, run the GENERATE configure and build, execute the training run, merge profiles where required, run the USE configure and build, and report the path to the final optimized binary.

`PGO_DATA_DIR` is always set to an absolute path by both scripts. Clang in particular bakes the path into the instrumented binary at compile time, and relative paths resolved from different working directories between the two configure invocations will silently fail to find profiles during the USE stage.

PGO and AddressSanitizer are mutually exclusive. Do not pass `-DASAN_ENABLED=TRUE` alongside `-DPGO_MODE=GENERATE` or `-DPGO_MODE=USE`.

The training run should exercise the same input distributions you intend to benchmark on. Profile data only helps the code paths it actually observed; un-trained paths will be left un-optimized and may regress on the cases that matter most. The scripts use the benchmark binary itself as the training workload, which is appropriate when the benchmark inputs match the production distribution. If you need to train on a different workload, modify the training-run section of the script.

## Clang

```bash
chmod +x pgo-build.sh
CXX_BIN=clang++-23 LLVM_PROFDATA_BIN=llvm-profdata-23 ./pgo-build.sh
```

The script sets `LLVM_PROFILE_FILE` before the training run so profiles land in `$WORKSPACE/pgo-data/` with unique names per module and PID, then invokes `llvm-profdata merge` to produce the `default.profdata` file that the USE configure expects.

The merge step is mandatory on Clang. The instrumented binary writes one or more `.profraw` files (named `default_<module>_<pid>.profraw` by default), and the USE build looks for a single `default.profdata` file at the path specified by `-fprofile-use`. Skipping the merge produces a build error: `Error in reading profile ... No such file or directory`.

On versioned toolchains, use matching binaries — `clang++-23` pairs with `llvm-profdata-23`. Mismatched versions can produce profile format errors. The script will exit with a clear error if `LLVM_PROFDATA_BIN` is set to a binary that isn't on PATH.

## GCC

```bash
chmod +x pgo-build.sh
CXX_BIN=g++-16 ./pgo-build.sh
```

The script auto-detects GCC from `$CXX_BIN --version` and skips the profile-merge step. GCC has no merge step: the instrumented binary writes `.gcda` files directly into `PGO_DATA_DIR` (alongside `.gcno` files left by the compiler), and the USE build reads them in place.

The `-fprofile-correction` flag is included in the CMake configuration for GCC USE builds. This tolerates minor profile inconsistencies that can occur from threading or interrupted runs. Without it, GCC will error out on any profile mismatch.

If auto-detection picks the wrong path (for example, if you've aliased `g++` to clang), override it explicitly:

```bash
CXX_BIN=g++-16 COMPILER_KIND=gcc ./pgo-build.sh
```

## MSVC

From a Developer PowerShell prompt (or a regular PowerShell after running `Enter-VsDevShell`):

```powershell
.\pgo-build.ps1
```

The script defaults to `Visual Studio 17 2022` with `x64` architecture. Override either if needed:

```powershell
.\pgo-build.ps1 -Generator "Visual Studio 17 2022" -Architecture x64
.\pgo-build.ps1 -Workspace "C:\src\stringint-benchmarks"
```

If you get "running scripts is disabled on this system," PowerShell's execution policy is blocking the script. Either run it once with a bypass:

```powershell
powershell -ExecutionPolicy Bypass -File .\pgo-build.ps1
```

or set the policy permanently for your user:

```powershell
Set-ExecutionPolicy -Scope CurrentUser RemoteSigned
```

MSVC also has no explicit merge step, but the mechanism differs from GCC. The linker creates a `.pgd` file during the GENERATE link, and the instrumented binary writes `.pgc` files next to it on each run. The USE link automatically consumes all matching `.pgc` files. Running the instrumented binary multiple times against different input distributions produces multiple `.pgc` files (`!1`, `!2`, and so on), all merged at link time.

Several MSVC-specific points:

The instrumented binary depends on `pgort140.dll`, which ships with Visual Studio and is on PATH inside a Developer PowerShell. Running the instrumented binary outside a dev environment fails with a missing DLL error. Either launch the script from the dev prompt or copy `pgort140.dll` next to the executable.

The Visual Studio generator is multi-config, so binaries land in `Build-Gen\Release\` rather than `Build-Gen\` directly. The script handles this automatically when locating the binary for the training run. For a single-config layout that matches Unix builds, pass `-Generator Ninja` (Ninja must be installed separately, e.g. via `winget install Ninja-build.Ninja`).

To verify the USE link consumed the profile data, look for a line like the following in the linker output, which the script emits via `cmake --build ... -v`:

```
N of M (XX.X%) original invocation sets were matched
N of M (XX.X%) profiled functions will be compiled for speed
```

A result of `0 of 0 matched` indicates the linker did not find the `.pgd`/`.pgc` files, almost always a `PGO_DATA_DIR` path mismatch between the GENERATE and USE configures — though the script's use of `$PWD` and consistent absolute paths makes this unlikely barring manual modification.

## Script Behavior Notes

Both scripts are idempotent: they remove `Build-Gen/`, `Build/`, and `pgo-data/` before starting, so re-running after a failed attempt is safe and starts from a clean state.

Both scripts use `set -euo pipefail` (bash) or `$ErrorActionPreference = "Stop"` (PowerShell), so any step failure halts the script immediately rather than proceeding to a USE build that would silently produce a non-PGO binary.

If you edit `pgo-build.sh` on Windows and the script fails on Linux with `/usr/bin/env: 'bash\r': No such file or directory`, the file has CRLF line endings. Convert with:

```bash
sed -i 's/\r$//' pgo-build.sh
```

or add `*.sh text eol=lf` to `.gitattributes` to enforce LF on checkout.

## Verifying the Build

After a successful USE build, run the fuzzer and the LLVM test suite against the PGO-optimized binary, not just the unoptimized build. PGO combined with LTO is the configuration most likely to expose latent undefined behavior, because the optimizer trusts the profile and will elide checks it believes are cold or dead. Any divergence from the reference `std::from_chars` output on adversarial inputs needs to be caught before publishing benchmark numbers.

When publishing comparative benchmarks, the standard library and competing implementations should be built with the same `-O3 -flto` and PGO treatment, trained on the same input distribution. Comparing a PGO'd build against non-PGO'd competitors will produce numbers that don't survive review.