#!/usr/bin/env bash
set -euo pipefail

: "${CXX_BIN:?CXX_BIN must be set (e.g. clang++-23 or g++-15)}"
: "${WORKSPACE:=$(pwd)}"

COMPILER_KIND="${COMPILER_KIND:-}"
if [[ -z "$COMPILER_KIND" ]]; then
  if "$CXX_BIN" --version 2>&1 | grep -qi clang; then
    COMPILER_KIND="clang"
  else
    COMPILER_KIND="gcc"
  fi
fi
echo "Using compiler: $CXX_BIN ($COMPILER_KIND)"

LLVM_PROFDATA_BIN="${LLVM_PROFDATA_BIN:-llvm-profdata}"

if command -v ninja >/dev/null 2>&1; then
  GEN_ARGS=(-G Ninja)
  echo "Using Ninja generator"
else
  GEN_ARGS=()
  echo "Ninja not found; using default generator (Unix Makefiles)"
fi

PGO_DATA_DIR="$WORKSPACE/pgo-data"
rm -rf "$WORKSPACE/Build-Gen" "$WORKSPACE/Build" "$PGO_DATA_DIR"
mkdir -p "$PGO_DATA_DIR"

build_with_retry() {
  local build_dir="$1"
  local label="$2"
  if cmake --build "$build_dir" --config=Release -v; then
    return 0
  fi
  echo "WARNING: $label build failed on first attempt; retrying single-threaded..." >&2
  if cmake --build "$build_dir" --config=Release -v -j1; then
    return 0
  fi
  echo "ERROR: $label build failed after retry" >&2
  return 1
}

echo "=== Configure - PGO Generate ==="
cmake -S . -B ./Build-Gen "${GEN_ARGS[@]}" \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER="$CXX_BIN" \
  -DPGO_MODE=GENERATE \
  -DPGO_DATA_DIR="$PGO_DATA_DIR"

echo "=== Build - PGO Generate ==="
build_with_retry ./Build-Gen "Generate"

echo "=== Training run ==="
BIN=$(find ./Build-Gen -name StringInt-Benchmarks -type f | head -n1)
if [[ -z "$BIN" ]]; then
  echo "ERROR: StringInt-Benchmarks binary not found under ./Build-Gen" >&2
  exit 1
fi
echo "Found binary: $BIN"
chmod +x "$BIN"

if [[ "$COMPILER_KIND" == "clang" ]]; then
  export LLVM_PROFILE_FILE="$PGO_DATA_DIR/default_%m_%p.profraw"
fi

"$BIN"

echo "Profiles after run:"
ls -la "$PGO_DATA_DIR/" || true
if [[ "$COMPILER_KIND" == "gcc" ]]; then
  GCDA_COUNT=$(find ./Build-Gen -name '*.gcda' | wc -l)
  echo "GCC .gcda files written into build tree: $GCDA_COUNT"
  if [[ "$GCDA_COUNT" -eq 0 ]]; then
    echo "ERROR: No .gcda files were produced by the training run. GCC PGO requires these to exist before the USE build." >&2
    exit 1
  fi
fi

if [[ "$COMPILER_KIND" == "clang" ]]; then
  echo "=== Merge Clang profiles ==="
  if ! command -v "$LLVM_PROFDATA_BIN" >/dev/null 2>&1; then
    echo "ERROR: $LLVM_PROFDATA_BIN not found. Install llvm or set LLVM_PROFDATA_BIN." >&2
    exit 1
  fi
  "$LLVM_PROFDATA_BIN" merge \
    -output="$PGO_DATA_DIR/default.profdata" \
    "$PGO_DATA_DIR"/*.profraw
  echo "Merged profile:"
  ls -la "$PGO_DATA_DIR/default.profdata"
fi

echo "=== Configure - PGO Use ==="
cmake -S . -B ./Build "${GEN_ARGS[@]}" \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER="$CXX_BIN" \
  -DPGO_MODE=USE \
  -DPGO_DATA_DIR="$PGO_DATA_DIR"

echo "=== Build - PGO Use ==="
build_with_retry ./Build "Use"

echo "=== Done ==="
FINAL_BIN=$(find ./Build -name StringInt-Benchmarks -type f | head -n1)
echo "Final PGO-optimized binary: $FINAL_BIN"