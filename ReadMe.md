# StringInt-Benchmarks
Here's a few benchmarks on a few common operating system/compiler platforms. Although feel free to try it out on more and let me know if you do/what scores you get! Cheers! (Click each of the badges below to be taken to the respective benchmarks). Also I will add some instructions for building below.

### The Libraries
- [void-numerics](https://github.com/nihilai-collective/void-numerics)
- [jeaiii_itoa](https://github.com/jeaiii/itoa)
- [fmt](https://github.com/fmtlib/fmt)
- std Library

### Building
Full build instructions — including the PGO/LTO pipeline used to produce every result on this page — live in [Compilation Method](./Compilation%20Method.md).

### By OS/Compiler:
----
#### Linux/Clang:
----
[![Linux/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=Clang&labelColor=grey&color=blue&branch=benchmarking-newer)](./Linux-Clang-int-to-str.md)
- [int-to-str](./Linux-Clang-int-to-str.md)
- [str-to-int](./Linux-Clang-str-to-int.md)
- [str-to-int (leading zeros)](./Linux-Clang-str-to-int-leading-zeros.md)
#### Linux/GCC:
----
[![Linux/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=GCC&labelColor=grey&color=blue&branch=benchmarking-newer)](./Linux-GCC-int-to-str.md)
- [int-to-str](./Linux-GCC-int-to-str.md)
- [str-to-int](./Linux-GCC-str-to-int.md)
- [str-to-int (leading zeros)](./Linux-GCC-str-to-int-leading-zeros.md)
#### Windows/MSVC:
----
[![Windows/MSVC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=Microsoft&logoColor=green&label=MSVC&labelColor=grey&color=blue&branch=benchmarking-newer)](./Windows-MSVC-int-to-str.md)
- [int-to-str](./Windows-MSVC-int-to-str.md)
- [str-to-int](./Windows-MSVC-str-to-int.md)
- [str-to-int (leading zeros)](./Windows-MSVC-str-to-int-leading-zeros.md)
#### macOS/Clang:
----
[![macOS/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=Clang&labelColor=grey&color=blue&branch=benchmarking-newer)](./macOS-Clang-int-to-str.md)
- [int-to-str](./macOS-Clang-int-to-str.md)
- [str-to-int](./macOS-Clang-str-to-int.md)
- [str-to-int (leading zeros)](./macOS-Clang-str-to-int-leading-zeros.md)
#### macOS/GCC:
----
[![macOS/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=GCC&labelColor=grey&color=blue&branch=benchmarking-newer)](./macOS-GCC-int-to-str.md)
- [int-to-str](./macOS-GCC-int-to-str.md)
- [str-to-int](./macOS-GCC-str-to-int.md)
- [str-to-int (leading zeros)](./macOS-GCC-str-to-int-leading-zeros.md)

### Pre-requisites:
---
1. CMake 3.28 or later.
2. A C++20 compliant compiler.
3. Python3 and Seaborn for generating the graphs.

[Compilation_Instructions.md](./Compilation_Instructions.md)

#### Note:
Two separate things are doing work here. Timing methodology — adaptive epoch sampling, Welch's t-test for statistical tie detection, Bessel-corrected variance — comes from the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite). Making sure the binaries being timed are a fair fight is this repo's own job: every library under test, including the standard library, is built through the same three-stage PGO/LTO pipeline (instrumented GENERATE build → training run → profile-consuming USE build) before it's ever measured, so no library gets a hand-optimized build going up against everyone else's defaults.

> *"Anytime someone comes to you with one benchmark? They have gamed that benchmark."*
> — Matt Kulukundis, CppCon 2017: "Designing a Fast, Efficient, Cache-friendly Hash Table, Step by Step"