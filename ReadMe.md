# StringInt-Benchmarks
Here's a few benchmarks on a few common operating system/compiler platforms. Although feel free to try it out on more and let me know if you do/what scores you get! Cheers! (Click each of the badges below to be taken to the respective benchmarks). Also I will add some instructions for building below.

### The Libraries
- [void-numerics](https://github.com/nihilai-collective/void-numerics)
- [jeaiii_itoa](https://github.com/jeaiii/itoa)
- [fmt](https://github.com/fmtlib/fmt)
- std Library

### By OS/Compiler:
----

#### Linux/Clang:
----
[![Linux/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Linux-Clang-int-to-str.md)

- [int-to-str](./Linux-Clang-int-to-str.md)
- [str-to-int](./Linux-Clang-str-to-int.md)
- [str-to-int (leading zeros)](./Linux-Clang-str-to-int-leading-zeros.md)

#### Linux/GCC:
----
[![Linux/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Linux-GCC-int-to-str.md)

- [int-to-str](./Linux-GCC-int-to-str.md)
- [str-to-int](./Linux-GCC-str-to-int.md)
- [str-to-int (leading zeros)](./Linux-GCC-str-to-int-leading-zeros.md)

#### Windows/MSVC:
----
[![Windows/MSVC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=Microsoft&logoColor=green&label=MSVC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Windows-MSVC-int-to-str.md)

- [int-to-str](./Windows-MSVC-int-to-str.md)
- [str-to-int](./Windows-MSVC-str-to-int.md)
- [str-to-int (leading zeros)](./Windows-MSVC-str-to-int-leading-zeros.md)

#### macOS/Clang:
----
[![macOS/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)](./macOS-Clang-int-to-str.md)

- [int-to-str](./macOS-Clang-int-to-str.md)
- [str-to-int](./macOS-Clang-str-to-int.md)
- [str-to-int (leading zeros)](./macOS-Clang-str-to-int-leading-zeros.md)

#### macOS/GCC:
----
[![macOS/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./macOS-GCC-int-to-str.md)

- [int-to-str](./macOS-GCC-int-to-str.md)
- [str-to-int](./macOS-GCC-str-to-int.md)
- [str-to-int (leading zeros)](./macOS-GCC-str-to-int-leading-zeros.md)

### Pre-requisites:
---
1. CMake 3.28 or later.
2. A C++20 compliant compiler.
3. Python3 and Seaborn for generating the graphs.

### Build Instructions:
---
1. Clone the repo.
2. Cd into the repo's folder and enter `cmake -S . -B ./Build -DCMAKE_BUILD_TYPE=RELEASE_OR_DEBUG -DCMAKE_CXX_COMPILER=PATH_TO_COMPILER_EXECUTABLE` (NOTE: Optionally set a manual installation path by setting `-DCMAKE_INSTALL_PREFIX=CUSTOM_INSTALLATION_PATH`)
3. Then enter `cmake --build ./Build --config=RELEASE_OR_DEBUG`
4. Then enter `cmake --install ./Build`
5. Run the executable from wherever it was installed to!

#### Note:
These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite)

> *"Anytime someone comes to you with one benchmark? They have gamed that benchmark."*
> — Matt Kulukundis, CppCon 2017: "Designing a Fast, Efficient, Cache-friendly Hash Table, Step by Step"