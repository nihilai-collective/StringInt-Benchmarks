# StringInt-Benchmarks
Here's a few benchmarks on a few common operating system/compiler platforms. Although feel free to try it out on more and let us know if you do/what scores you get! Cheers! (Click each of the badges below to be taken to the respective benchmarks). Also we will add some instructions for building below.

### The Libraries
- [void-numerics](https://github.com/nihilai-collective/void-numerics)
- [jeaiii_itoa](https://github.com/jeaiii/itoa)
- std Library

### By OS/Compiler:
----

#### Linux/Clang:
----
[![Linux/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Linux-Clang-int-to-str-natural.md)

- [int-to-str-natural](./Linux-Clang-int-to-str-natural.md)  
- [int-to-str-uniform](./Linux-Clang-int-to-str-uniform.md)  
- [str-to-int-natural](./Linux-Clang-str-to-int-natural.md)  
- [str-to-int-uniform](./Linux-Clang-str-to-int-uniform.md)  

#### Linux/GCC:
----
[![Linux/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Linux-GCC-int-to-str-natural.md)

- [int-to-str-natural](./Linux-GCC-int-to-str-natural.md)  
- [int-to-str-uniform](./Linux-GCC-int-to-str-uniform.md)  
- [str-to-int-natural](./Linux-GCC-str-to-int-natural.md)  
- [str-to-int-uniform](./Linux-GCC-str-to-int-uniform.md)  

#### Windows/MSVC:
----
[![Windows/MSVC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=Microsoft&logoColor=green&label=MSVC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./Windows-MSVC-int-to-str-natural.md)

- [int-to-str-natural](./Windows-MSVC-int-to-str-natural.md)  
- [int-to-str-uniform](./Windows-MSVC-int-to-str-uniform.md)  
- [str-to-int-natural](./Windows-MSVC-str-to-int-natural.md)  
- [str-to-int-uniform](./Windows-MSVC-str-to-int-uniform.md)  

#### macOS/Clang:
----
[![macOS/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)](./macOS-Clang-int-to-str-natural.md)

- [int-to-str-natural](./macOS-Clang-int-to-str-natural.md)  
- [int-to-str-uniform](./macOS-Clang-int-to-str-uniform.md)  
- [str-to-int-natural](./macOS-Clang-str-to-int-natural.md)  
- [str-to-int-uniform](./macOS-Clang-str-to-int-uniform.md)  

#### macOS/GCC:
----
[![macOS/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/StringInt-Benchmarks/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)](./macOS-GCC-int-to-str-natural.md)

- [int-to-str-natural](./macOS-GCC-int-to-str-natural.md)  
- [int-to-str-uniform](./macOS-GCC-int-to-str-uniform.md)  
- [str-to-int-natural](./macOS-GCC-str-to-int-natural.md)  
- [str-to-int-uniform](./macOS-GCC-str-to-int-uniform.md)  

### Pre-requisites:
---
1. CMake 3.28 or later.
2. A C++20 compliant compiler.
3. Python3 and Seaborn for generating the graphs.

[Compilation Method](./Compilation%20Method.md)

#### Note:
These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite)

> *"Anytime someone comes to you with one benchmark? They have gamed that benchmark."*  
> — Matt Kulukundis, CppCon 2017: "Designing a Fast, Efficient, Cache-friendly Hash Table, Step by Step"
