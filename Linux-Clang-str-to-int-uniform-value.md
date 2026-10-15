# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-38-generic using the Clang 24.0.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 149.245 | 1.02458 | 9.54951ms | 100 | 30 | 1285.93 | 639 | 0.577125 | 36.79 | 44.2613 | 10.3327 | 0.855667 | 0.264 | 0.129667 | 1(Win) | true |
| std::from_chars | 127.996 | 0.814084 | 9.7292ms | 100 | 48 | 1765.99 | 745.083 | 0.289393 | 42.4062 | 86.0298 | 16.4469 | 0.841667 | 0.281875 | 0.116458 | 2(Loss) | true |
| strtoll/strtoull | 82.436 | 0.948726 | 10.0606ms | 100 | 30 | 3613.84 | 1156.87 | 0.419548 | 64.892 | 145.457 | 34.894 | 0.815333 | 0.269 | 0.101667 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 151.898 | 0.495309 | 16.3293ms | 1000 | 30 | 29011.6 | 6278.4 | 1.12696 | 33.5204 | 42.1621 | 9.92883 | 0.813933 | 0.267633 | 0.1185 | 1(Win) | true |
| std::from_chars | 136.833 | 0.795554 | 17.2944ms | 1000 | 48 | 147570 | 6969.6 | 0.00711372 | 37.7602 | 83.6905 | 16.0019 | 0.805667 | 0.267729 | 0.115458 | 2(Loss) | true |
| strtoll/strtoull | 85.9573 | 0.501089 | 22.0979ms | 1000 | 48 | 148356 | 11094.8 | 0.639043 | 60.0425 | 143.238 | 34.4573 | 0.808083 | 0.267771 | 0.0929792 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 156.375 | 0.233825 | 82.4429ms | 10000 | 48 | 976079 | 60986.2 | 0.127816 | 32.944 | 41.9633 | 9.88977 | 0.82556 | 0.267046 | 0.113337 | 1(Win) | true |
| std::from_chars | 135.072 | 0.458983 | 94.0685ms | 10000 | 30 | 3.15052e+06 | 70604.7 | 0.126631 | 38.1377 | 83.4608 | 15.954 | 0.80545 | 0.266753 | 0.100123 | 2(Loss) | true |
| strtoll/strtoull | 89.9174 | 0.253446 | 135.398ms | 10000 | 48 | 3.46838e+06 | 106061 | 0.605042 | 56.3733 | 143.003 | 34.4049 | 0.815508 | 0.26685 | 0.0764813 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 153.778 | 0.150372 | 753.364ms | 100000 | 30 | 2.60896e+07 | 620163 | 0.115231 | 33.0114 | 41.9328 | 9.88693 | 0.814294 | 0.267221 | 0.112161 | 1(Win) | true |
| std::from_chars | 133.021 | 0.237979 | 866.524ms | 100000 | 30 | 8.73297e+07 | 716938 | 0.513378 | 38.085 | 83.4334 | 15.9486 | 0.805951 | 0.267005 | 0.101955 | 2(Loss) | true |
| strtoll/strtoull | 91.382 | 0.133777 | 1278.47ms | 100000 | 48 | 9.35585e+07 | 1.04361e+06 | 0.477074 | 55.5655 | 142.966 | 34.3966 | 0.816269 | 0.266977 | 0.0763556 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 248.231 | 1.30683 | 9.27284ms | 100 | 48 | 1209.94 | 384.188 | 0.521103 | 22.4277 | 47.7071 | 10.9896 | 0.333333 | 0.27125 | 0.126042 | 1(Win) | true |
| std::from_chars | 202.784 | 1.04086 | 9.35883ms | 100 | 48 | 1150.17 | 470.292 | 0.5165 | 27.43 | 86.285 | 15.8983 | 0.331458 | 0.272083 | 0.127292 | 2(Loss) | true |
| strtoll/strtoull | 111.746 | 1.15387 | 9.79587ms | 100 | 30 | 2909.22 | 853.433 | 0.392111 | 47.412 | 146.205 | 34.314 | 0.323667 | 0.277 | 0.099 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 262.46 | 0.732012 | 13.2926ms | 1000 | 30 | 21224.2 | 3633.6 | 0.163558 | 19.4808 | 45.5502 | 10.5723 | 0.312867 | 0.268067 | 0.1396 | 1(Win) | true |
| std::from_chars | 218.341 | 0.453083 | 14.1787ms | 1000 | 48 | 18798.6 | 4367.81 | 0.811186 | 23.374 | 84.212 | 15.5056 | 0.309042 | 0.267792 | 0.140771 | 2(Loss) | true |
| strtoll/strtoull | 118.912 | 0.795909 | 18.4698ms | 1000 | 30 | 122236 | 8020.03 | 0.615471 | 42.7386 | 144.209 | 33.9473 | 0.315667 | 0.267267 | 0.0867667 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 271.031 | 0.490605 | 51.865ms | 10000 | 30 | 894018 | 35186.9 | 0.473212 | 18.9344 | 45.3338 | 10.53 | 0.31034 | 0.266863 | 0.13288 | 1(Win) | true |
| std::from_chars | 218.287 | 0.323447 | 61.3979ms | 10000 | 48 | 958498 | 43689 | 0.263567 | 23.2728 | 83.9486 | 15.4535 | 0.30519 | 0.266792 | 0.131202 | 2(Loss) | true |
| strtoll/strtoull | 127.26 | 0.383595 | 99.1958ms | 10000 | 30 | 2.47906e+06 | 74939.3 | 0.698924 | 39.9993 | 143.967 | 33.8979 | 0.324033 | 0.266947 | 0.0822733 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 260.891 | 0.189667 | 449.989ms | 100000 | 48 | 2.30731e+07 | 365546 | 0.212224 | 19.5331 | 45.3241 | 10.5312 | 0.315327 | 0.267083 | 0.135495 | 1(Win) | true |
| std::from_chars | 218.963 | 0.200044 | 532.372ms | 100000 | 30 | 2.27736e+07 | 435542 | 0.0797899 | 23.201 | 83.9279 | 15.4496 | 0.304687 | 0.266819 | 0.133392 | 2(Loss) | true |
| strtoll/strtoull | 125.662 | 0.197365 | 915.166ms | 100000 | 30 | 6.73065e+07 | 758922 | 0.21787 | 40.2968 | 143.953 | 33.8956 | 0.336376 | 0.266881 | 0.081582 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 269.908 | 1.34089 | 9.21026ms | 100 | 30 | 673.402 | 353.333 | 0.331283 | 20.8537 | 41.0043 | 9.71333 | 0.351667 | 0.276 | 0.135667 | 1(Win) | true |
| std::from_chars | 206.527 | 1.18235 | 9.38911ms | 100 | 30 | 894.254 | 461.767 | 0.365009 | 26.694 | 85.1477 | 16.861 | 0.321333 | 0.276 | 0.122 | 2(Loss) | true |
| strtoll/strtoull | 116.911 | 1.04337 | 9.77415ms | 100 | 48 | 3477.05 | 815.729 | 0.597608 | 45.5071 | 144.206 | 35.3033 | 0.343333 | 0.280833 | 0.116042 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 294.964 | 0.512317 | 12.8079ms | 1000 | 48 | 13169.9 | 3233.19 | 1.58923 | 17.683 | 38.8104 | 9.29169 | 0.308917 | 0.267188 | 0.143313 | 1(Win) | true |
| std::from_chars | 218.566 | 0.480272 | 14.076ms | 1000 | 30 | 13174.4 | 4363.33 | 0.798011 | 23.3519 | 83.1364 | 16.4834 | 0.314833 | 0.266333 | 0.1261 | 2(Loss) | true |
| strtoll/strtoull | 123.072 | 0.508718 | 17.995ms | 1000 | 30 | 46618.2 | 7748.9 | 0.81225 | 41.2979 | 142.336 | 34.9786 | 0.319767 | 0.268133 | 0.0891333 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 293.94 | 0.439012 | 48.3121ms | 10000 | 48 | 973815 | 32444.5 | 0.471129 | 17.2455 | 38.5493 | 9.24101 | 0.309906 | 0.266792 | 0.135815 | 1(Win) | true |
| std::from_chars | 220.298 | 0.470788 | 61.0528ms | 10000 | 30 | 1.24609e+06 | 43290.1 | 0.159635 | 23.2827 | 82.9572 | 16.4507 | 0.305133 | 0.266927 | 0.132873 | 2(Loss) | true |
| strtoll/strtoull | 127.595 | 0.437437 | 98.5754ms | 10000 | 48 | 5.131e+06 | 74742.1 | 0.0725575 | 39.9409 | 141.975 | 34.8937 | 0.31341 | 0.266719 | 0.0800187 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 291.469 | 0.235689 | 406.287ms | 100000 | 30 | 1.78409e+07 | 327196 | 0.0921805 | 17.577 | 38.5394 | 9.24221 | 0.311342 | 0.267029 | 0.136726 | 1(Win) | true |
| std::from_chars | 219.28 | 0.249643 | 531.805ms | 100000 | 48 | 5.65825e+07 | 434912 | 0.143177 | 23.2605 | 82.9276 | 16.4447 | 0.304599 | 0.266885 | 0.133154 | 2(Loss) | true |
| strtoll/strtoull | 134.118 | 0.490871 | 865.192ms | 100000 | 30 | 3.65497e+08 | 711072 | 0.362028 | 38.0657 | 141.98 | 34.8976 | 0.324511 | 0.26694 | 0.0832773 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 219.017 | 1.49455 | 9.30671ms | 100 | 30 | 1270.53 | 435.433 | 0.916421 | 25.181 | 45.627 | 10.5807 | 0.450333 | 0.267667 | 0.123333 | 1(Win) | true |
| std::from_chars | 186.934 | 1.16519 | 9.39432ms | 100 | 30 | 1060.07 | 510.167 | 0.932099 | 29.2343 | 74.4887 | 14.189 | 0.472667 | 0.28 | 0.121333 | 2(Loss) | true |
| strtoll/strtoull | 105.705 | 0.891683 | 9.9392ms | 100 | 30 | 1941.54 | 902.2 | 0.396522 | 50.906 | 155.158 | 35.858 | 0.469333 | 0.274333 | 0.119 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 228.924 | 0.525508 | 13.8774ms | 1000 | 30 | 14378 | 4165.9 | 0.118562 | 22.3143 | 43.5077 | 10.1714 | 0.4198 | 0.267033 | 0.126433 | 1(Win) | true |
| std::from_chars | 202.882 | 0.510694 | 14.4766ms | 1000 | 30 | 17288.4 | 4700.63 | 0.315272 | 25.6115 | 72.3191 | 13.7768 | 0.432833 | 0.266767 | 0.119733 | 2(Loss) | true |
| strtoll/strtoull | 112.699 | 0.337599 | 19.1217ms | 1000 | 30 | 24484.1 | 8462.13 | 0.0139327 | 45.9254 | 153.203 | 35.5109 | 0.458167 | 0.267367 | 0.088 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 234.033 | 0.247067 | 58.4218ms | 10000 | 30 | 304086 | 40749.5 | 0.658788 | 22.037 | 43.268 | 10.1244 | 0.41909 | 0.266893 | 0.12986 | 1(Win) | true |
| std::from_chars | 200.244 | 0.416539 | 66.7747ms | 10000 | 30 | 1.18063e+06 | 47625.6 | 0.24973 | 25.7256 | 72.0183 | 13.7176 | 0.43461 | 0.26677 | 0.124527 | 2(Loss) | true |
| strtoll/strtoull | 113.672 | 0.347314 | 110.617ms | 10000 | 30 | 2.54719e+06 | 83897.4 | 0.161454 | 45.2863 | 152.873 | 35.4347 | 0.454407 | 0.26727 | 0.0791667 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 234.57 | 0.122534 | 500.162ms | 100000 | 48 | 1.19127e+07 | 406563 | 0.155757 | 21.9394 | 43.2521 | 10.1215 | 0.416508 | 0.267088 | 0.131651 | 1(Win) | true |
| std::from_chars | 197.964 | 0.315663 | 587.091ms | 100000 | 30 | 6.93744e+07 | 481742 | 0.308395 | 25.7708 | 71.9894 | 13.712 | 0.438757 | 0.266919 | 0.126388 | 2(Loss) | true |
| strtoll/strtoull | 111.349 | 0.193454 | 1048.72ms | 100000 | 48 | 1.31772e+08 | 856473 | 0.346469 | 45.7222 | 152.838 | 35.4262 | 0.468567 | 0.267111 | 0.076966 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 245.94 | 1.07864 | 9.75025ms | 200 | 30 | 2099.29 | 775.533 | 1.82335 | 21.6263 | 39.0807 | 7.76 | 0.4275 | 0.216667 | 0.110333 | 1(Win) | true |
| std::from_chars | 220.328 | 0.49622 | 9.83872ms | 200 | 48 | 885.751 | 865.688 | 0.197429 | 24.469 | 58.1915 | 11.9569 | 0.432188 | 0.207604 | 0.100729 | 2(Loss) | true |
| strtoll/strtoull | 137.897 | 0.599431 | 10.4746ms | 200 | 30 | 2062.28 | 1383.17 | 0.144805 | 37.7712 | 97.299 | 24.9657 | 0.434 | 0.204167 | 0.1135 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 259.022 | 0.345908 | 17.8242ms | 2000 | 30 | 19463.9 | 7363.67 | 0.332003 | 19.6311 | 37.9356 | 7.53525 | 0.410583 | 0.205983 | 0.0961 | 1(Win) | true |
| std::from_chars | 229.898 | 0.457372 | 19.0313ms | 2000 | 30 | 43196.6 | 8296.5 | 0.308053 | 22.5197 | 57.1775 | 11.7621 | 0.407983 | 0.205217 | 0.0850333 | 2(Loss) | true |
| strtoll/strtoull | 147.207 | 0.465423 | 24.5083ms | 2000 | 30 | 109099 | 12956.9 | 0.282958 | 34.4547 | 96.2484 | 24.7551 | 0.428033 | 0.205017 | 0.0621167 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 262.865 | 0.224261 | 96.3339ms | 20000 | 48 | 1.27099e+06 | 72560 | 0.112096 | 19.5825 | 37.819 | 7.5114 | 0.411756 | 0.204214 | 0.0974167 | 1(Win) | true |
| std::from_chars | 227.804 | 0.311245 | 109.472ms | 20000 | 30 | 2.03734e+06 | 83727.6 | 0.232917 | 22.4094 | 57.0543 | 11.7428 | 0.408102 | 0.20414 | 0.0869833 | 2(Loss) | true |
| strtoll/strtoull | 150.542 | 0.270701 | 161.399ms | 20000 | 30 | 3.52895e+06 | 126699 | 0.0449892 | 34.0075 | 96.1155 | 24.7333 | 0.442222 | 0.20415 | 0.0599067 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 272.538 | 0.086175 | 851.581ms | 200000 | 48 | 1.74586e+07 | 699846 | 0.0746993 | 18.8529 | 37.8057 | 7.50867 | 0.409084 | 0.204488 | 0.10033 | 1(Win) | true |
| std::from_chars | 227.808 | 0.139943 | 1031.79ms | 200000 | 30 | 4.11855e+07 | 837263 | 0.59157 | 22.5121 | 57.0462 | 11.7414 | 0.408072 | 0.204276 | 0.0924477 | 2(Loss) | true |
| strtoll/strtoull | 149.857 | 0.123708 | 1542.84ms | 200000 | 48 | 1.18999e+08 | 1.27278e+06 | 0.395582 | 34.3136 | 96.1105 | 24.733 | 0.447374 | 0.204331 | 0.0611941 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 378.718 | 1.68918 | 9.37536ms | 200 | 30 | 2171.21 | 503.633 | 2.71244 | 14.4468 | 40.0732 | 8.25333 | 0.1875 | 0.208167 | 0.102167 | -(Win) | false |
| std::from_chars | 323.316 | 0.913238 | 9.49968ms | 200 | 30 | 870.754 | 589.933 | 1.13143 | 16.6852 | 58.4863 | 11.718 | 0.174167 | 0.203667 | 0.0953333 | 2(Loss) | true |
| strtoll/strtoull | 173.564 | 1.10584 | 10.0991ms | 200 | 30 | 4430.48 | 1098.93 | 0.558182 | 30.6363 | 97.7083 | 24.681 | 0.192 | 0.215167 | 0.103333 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 415.181 | 0.429226 | 14.5611ms | 2000 | 48 | 18663.8 | 4594.02 | 0.689396 | 12.4843 | 38.9099 | 8.02653 | 0.163042 | 0.204729 | 0.106969 | 1(Win) | true |
| std::from_chars | 347.273 | 1.42703 | 15.403ms | 2000 | 30 | 184291 | 5492.37 | 0.00622037 | 14.8412 | 57.4151 | 11.5141 | 0.162017 | 0.206 | 0.117933 | 2(Loss) | true |
| strtoll/strtoull | 181.935 | 0.65963 | 21.3914ms | 2000 | 48 | 229546 | 10483.7 | 0.0493073 | 28.3666 | 96.6926 | 24.4947 | 0.178135 | 0.204635 | 0.0684271 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 408.091 | 0.390093 | 65.2562ms | 20000 | 30 | 997249 | 46738.3 | 0.00941324 | 12.3814 | 38.8304 | 8.01207 | 0.162987 | 0.204277 | 0.103473 | 1(Win) | true |
| std::from_chars | 350.965 | 0.433069 | 74.7697ms | 20000 | 30 | 1.66176e+06 | 54345.9 | 0.465347 | 14.668 | 57.3109 | 11.4943 | 0.161742 | 0.204 | 0.106822 | 2(Loss) | true |
| strtoll/strtoull | 187.395 | 0.636809 | 130.812ms | 20000 | 30 | 1.26033e+07 | 101782 | 0.199121 | 27.4667 | 96.6295 | 24.4875 | 0.1842 | 0.204342 | 0.0615983 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 411.489 | 0.210312 | 587.195ms | 200000 | 30 | 2.85097e+07 | 463524 | 0.30552 | 12.4457 | 38.8161 | 8.00901 | 0.165211 | 0.204552 | 0.108524 | 1(Win) | true |
| std::from_chars | 344.076 | 0.106846 | 674.795ms | 200000 | 48 | 1.68387e+07 | 554340 | 0.0836985 | 14.6837 | 57.2947 | 11.491 | 0.158959 | 0.204191 | 0.106369 | 2(Loss) | true |
| strtoll/strtoull | 192.474 | 0.386635 | 1198.61ms | 200000 | 30 | 4.40394e+08 | 990965 | 0.243807 | 26.69 | 96.6096 | 24.4828 | 0.18589 | 0.204314 | 0.0644538 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 392.674 | 2.10757 | 9.34375ms | 200 | 30 | 3144 | 485.733 | 0.0891327 | 13.941 | 37.9868 | 7.24 | 0.173 | 0.202833 | 0.134333 | 1(Win) | true |
| std::from_chars | 325.172 | 1.21826 | 9.51868ms | 200 | 30 | 1531.91 | 586.567 | 1.33999 | 16.6 | 58.0578 | 12.2345 | 0.1705 | 0.205333 | 0.119 | 2(Loss) | true |
| strtoll/strtoull | 180.87 | 0.575515 | 10.0335ms | 200 | 48 | 1768 | 1054.54 | 0.0750158 | 29.5627 | 96.7425 | 25.1913 | 0.189375 | 0.213021 | 0.105521 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 420.578 | 0.710309 | 14.4543ms | 2000 | 30 | 31130.3 | 4535.07 | 0.154591 | 12.1333 | 36.9054 | 7.0294 | 0.171517 | 0.204433 | 0.107433 | 1(Win) | true |
| std::from_chars | 354.08 | 0.325091 | 15.4347ms | 2000 | 48 | 14720 | 5386.77 | 0.309599 | 14.6582 | 56.9129 | 12.0136 | 0.161906 | 0.204542 | 0.105385 | 2(Loss) | true |
| strtoll/strtoull | 185.518 | 0.692961 | 21.3893ms | 2000 | 30 | 152274 | 10281.2 | 0.769877 | 27.8786 | 95.7122 | 25.0005 | 0.182283 | 0.204017 | 0.0629667 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 432.05 | 0.218415 | 62.2057ms | 20000 | 30 | 278920 | 44146.5 | 0.000613484 | 11.936 | 36.8047 | 7.01005 | 0.166508 | 0.20432 | 0.110458 | 1(Win) | true |
| std::from_chars | 351.585 | 0.318012 | 74.4047ms | 20000 | 30 | 892910 | 54250 | 0.111948 | 14.6662 | 56.8077 | 11.9936 | 0.16359 | 0.203953 | 0.103353 | 2(Loss) | true |
| strtoll/strtoull | 192.48 | 0.737222 | 129.055ms | 20000 | 30 | 1.60106e+07 | 99093.4 | 1.06711 | 26.2462 | 95.6208 | 24.9849 | 0.186473 | 0.204213 | 0.0648917 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 438.902 | 0.224143 | 532.21ms | 200000 | 30 | 2.84641e+07 | 434573 | 0.0307324 | 11.7223 | 36.7982 | 7.00879 | 0.165115 | 0.20446 | 0.110559 | 1(Win) | true |
| std::from_chars | 346.116 | 0.189735 | 674.222ms | 200000 | 48 | 5.24751e+07 | 551072 | 0.104849 | 14.7151 | 56.7978 | 11.9918 | 0.159047 | 0.204174 | 0.107148 | 2(Loss) | true |
| strtoll/strtoull | 202.813 | 0.284271 | 1144.99ms | 200000 | 30 | 2.14415e+08 | 940447 | 0.22858 | 25.3043 | 95.6091 | 24.9826 | 0.190672 | 0.204315 | 0.0668382 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 504.951 | 1.91793 | 9.12935ms | 200 | 48 | 2519.22 | 377.729 | 0.629385 | 11.305 | 39.1845 | 7.5049 | 0.0879167 | 0.197187 | 0.129375 | 1(Win) | true |
| std::from_chars | 252.545 | 0.990679 | 13.6839ms | 200 | 48 | 2687.13 | 755.25 | 0.445538 | 21.9424 | 52.6002 | 10.4922 | 0.0822917 | 0.203854 | 0.101146 | 2(Loss) | true |
| strtoll/strtoull | 201.985 | 0.66631 | 9.82803ms | 200 | 30 | 1187.67 | 944.3 | 2.20251 | 26.5748 | 98.5172 | 24.697 | 0.0993333 | 0.207833 | 0.0983333 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 568.831 | 0.626926 | 12.9595ms | 2000 | 30 | 13257.1 | 3353.1 | 0.902749 | 9.16392 | 38.0224 | 7.27855 | 0.0789 | 0.205233 | 0.117983 | 1(Win) | true |
| std::from_chars | 461.106 | 0.470324 | 13.6953ms | 2000 | 30 | 11354.7 | 4136.47 | 0.120215 | 11.2787 | 51.4499 | 10.2721 | 0.0795167 | 0.204317 | 0.120583 | 2(Loss) | true |
| strtoll/strtoull | 212.89 | 0.711542 | 19.4991ms | 2000 | 30 | 121920 | 8959.33 | 0.282438 | 24.3112 | 97.5311 | 24.5211 | 0.0895333 | 0.204517 | 0.0731333 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 556.937 | 0.539645 | 50.0889ms | 20000 | 48 | 1.63948e+06 | 34247.1 | 0.360345 | 9.24452 | 37.9126 | 7.25711 | 0.0788917 | 0.204266 | 0.114251 | 1(Win) | true |
| std::from_chars | 469.378 | 0.4927 | 57.7807ms | 20000 | 30 | 1.20255e+06 | 40635.7 | 0.0188838 | 10.9741 | 51.3317 | 10.2494 | 0.078925 | 0.20404 | 0.112077 | 2(Loss) | true |
| strtoll/strtoull | 213.783 | 0.324243 | 116.232ms | 20000 | 30 | 2.5106e+06 | 89219 | 0.219816 | 24.0759 | 97.4101 | 24.4964 | 0.0890333 | 0.204023 | 0.066085 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 542.407 | 0.268581 | 486.57ms | 200000 | 30 | 2.67597e+07 | 351646 | 0.530164 | 9.21257 | 37.9006 | 7.25474 | 0.0778367 | 0.204186 | 0.129328 | 1(Win) | true |
| std::from_chars | 467.647 | 0.20894 | 499.91ms | 200000 | 30 | 2.17867e+07 | 407861 | 0.0170236 | 10.9203 | 51.3112 | 10.2452 | 0.0812608 | 0.204255 | 0.113842 | 2(Loss) | true |
| strtoll/strtoull | 214.049 | 0.167323 | 1083.41ms | 200000 | 30 | 6.66904e+07 | 891079 | 0.158552 | 24.0286 | 97.3927 | 24.4923 | 0.111252 | 0.204374 | 0.0684475 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 278.229 | 1.17466 | 10.8371ms | 400 | 48 | 12450.2 | 1371.06 | 1.90743 | 18.9292 | 46.2772 | 10.3401 | 0.264271 | 0.172969 | 0.171667 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 265.975 | 4.02147 | 13.7255ms | 400 | 30 | 99799.8 | 1434.23 | 0.690349 | 19.8638 | 21.0632 | 3.35133 | 0.268833 | 0.170083 | 0.168667 | 1(Tie) | true |
| strtoll/strtoull DID NOT CONVERGE | 152.069 | 1.46464 | 14.3799ms | 400 | 30 | 40496.8 | 2508.53 | 4.4236 | 34.1139 | 72.721 | 19.7031 | 0.284833 | 0.17025 | 0.16975 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 399.956 | 0.665867 | 21.5884ms | 4000 | 30 | 121002 | 9537.8 | 2.19794 | 12.719 | 20.5333 | 3.24247 | 0.262992 | 0.172758 | 0.170183 | 1(Win) | true |
| std::from_chars | 238.938 | 1.13086 | 31.4215ms | 4000 | 30 | 977885 | 15965.2 | 2.02694 | 21.2533 | 45.7396 | 10.2422 | 0.253867 | 0.173367 | 0.166117 | 2(Loss) | true |
| strtoll/strtoull | 211.489 | 1.11502 | 31.1927ms | 4000 | 30 | 1.21347e+06 | 18037.3 | 0.291099 | 23.8426 | 72.2368 | 19.6144 | 0.253442 | 0.17305 | 0.167992 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 329.225 | 0.396987 | 156.499ms | 40000 | 30 | 6.3476e+06 | 115869 | 2.00723 | 15.0285 | 20.4813 | 3.23336 | 0.261833 | 0.173292 | 0.169506 | 1(Win) | true |
| std::from_chars | 285.781 | 1.28401 | 169.589ms | 40000 | 30 | 8.81276e+07 | 133483 | 0.289461 | 17.6275 | 45.6878 | 10.2326 | 0.254182 | 0.172631 | 0.170174 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 224.43 | 0.68355 | 226.269ms | 40000 | 30 | 4.04967e+07 | 169973 | 4.82117 | 22.328 | 72.1654 | 19.5991 | 0.259317 | 0.172914 | 0.167945 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 379.881 | 0.753982 | 1234.09ms | 400000 | 30 | 1.71977e+09 | 1.00418e+06 | 0.868705 | 13.1883 | 20.4711 | 3.23203 | 0.261726 | 0.173088 | 0.17186 | 1(Win) | true |
| std::from_chars | 286.987 | 0.934751 | 1636.03ms | 400000 | 30 | 4.63136e+09 | 1.32922e+06 | 0.663288 | 17.3568 | 45.6825 | 10.2312 | 0.255085 | 0.172774 | 0.168133 | 2(Loss) | true |
| strtoll/strtoull | 212.148 | 1.95455 | 2186.8ms | 400000 | 30 | 3.70562e+10 | 1.79813e+06 | 2.41497 | 23.6091 | 72.1604 | 19.5981 | 0.264336 | 0.173128 | 0.164382 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 514.087 | 2.11325 | 10.2463ms | 400 | 30 | 7376.86 | 742.033 | 13.8173 | 10.3753 | 21.9664 | 3.47567 | 0.139417 | 0.165417 | 0.1645 | -(Win) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 183.696 | 1.87743 | 12.1318ms | 400 | 30 | 45600.3 | 2076.63 | 3.78323 | 28.4347 | 73.0292 | 19.593 | 0.224 | 0.17325 | 0.17125 | -(Tie) | false |
| std::from_chars STATISTICAL TIE | 173.994 | 4.93653 | 14.1664ms | 400 | 30 | 351413 | 2192.43 | 0.361633 | 31.77 | 46.4205 | 10.2243 | 0.137 | 0.17675 | 0.175083 | 2(Tie) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 486.387 | 1.1429 | 19.7799ms | 4000 | 30 | 241044 | 7842.93 | 6.25457 | 10.4752 | 21.4065 | 3.36885 | 0.134475 | 0.17285 | 0.172483 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 375.215 | 1.05735 | 23.2627ms | 4000 | 48 | 554675 | 10166.7 | 7.36737 | 13.5715 | 45.8627 | 10.1163 | 0.132047 | 0.172776 | 0.172495 | -(Loss) | false |
| strtoll/strtoull | 254.957 | 1.82938 | 31.0678ms | 4000 | 30 | 2.24758e+06 | 14962.1 | 0.371557 | 19.7439 | 72.4781 | 19.4869 | 0.134275 | 0.173025 | 0.172658 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 501.177 | 0.573836 | 108.267ms | 40000 | 30 | 5.72313e+06 | 76114.7 | 2.96068 | 10.2517 | 21.351 | 3.35791 | 0.134477 | 0.172911 | 0.172422 | -(Win) | false |
| std::from_chars | 400.719 | 0.43606 | 133.266ms | 40000 | 30 | 5.16957e+06 | 95196.3 | 1.53967 | 12.5841 | 45.8052 | 10.1049 | 0.132695 | 0.172618 | 0.172305 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 272.288 | 0.824932 | 188.476ms | 40000 | 30 | 4.00702e+07 | 140098 | 4.98454 | 18.5053 | 72.4188 | 19.475 | 0.128256 | 0.172782 | 0.172516 | -(Loss) | false |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 418.219 | 0.321183 | 1196.13ms | 400000 | 30 | 2.57477e+08 | 912129 | 0.695778 | 12.0423 | 21.3462 | 3.357 | 0.134888 | 0.172842 | 0.172436 | 1(Win) | true |
| std::from_chars | 321.002 | 1.32568 | 1405.4ms | 400000 | 30 | 7.44569e+09 | 1.18837e+06 | 1.42556 | 15.688 | 45.807 | 10.106 | 0.128223 | 0.172644 | 0.172462 | 2(Loss) | true |
| strtoll/strtoull | 213.401 | 0.731071 | 2124.73ms | 400000 | 48 | 8.19764e+09 | 1.78758e+06 | 1.01137 | 23.6011 | 72.4161 | 19.4748 | 0.14782 | 0.172958 | 0.172275 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 322.153 | 5.57858 | 15.1275ms | 400 | 48 | 209451 | 1184.12 | 1.64802 | 16.7391 | 20.2203 | 3.22307 | 0.141198 | 0.168229 | 0.167292 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 252.246 | 2.9274 | 13.6688ms | 400 | 48 | 94075.8 | 1512.29 | 2.80277 | 21.1302 | 46.2057 | 10.4846 | 0.136615 | 0.172292 | 0.167969 | -(Loss) | false |
| strtoll/strtoull | 194.254 | 1.32046 | 14.2139ms | 400 | 30 | 20172.3 | 1963.77 | 0.0169771 | 27.9137 | 72.5008 | 19.8345 | 0.186833 | 0.17025 | 0.169583 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 396.296 | 2.01279 | 24.452ms | 4000 | 30 | 1.12616e+06 | 9625.87 | 2.51226 | 12.6378 | 19.653 | 3.11995 | 0.137892 | 0.173117 | 0.172633 | -(Win) | false |
| std::from_chars | 299.262 | 0.949878 | 27.7303ms | 4000 | 30 | 439818 | 12747 | 1.64396 | 16.9928 | 45.6026 | 10.3634 | 0.132258 | 0.172925 | 0.17245 | 2(Loss) | true |
| strtoll/strtoull | 212.359 | 1.36923 | 34.7036ms | 4000 | 30 | 1.81489e+06 | 17963.4 | 1.16426 | 23.7483 | 71.9706 | 19.7346 | 0.163092 | 0.17285 | 0.172533 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 390.919 | 0.946662 | 131.588ms | 40000 | 30 | 2.56011e+07 | 97582.8 | 3.16412 | 12.7497 | 19.6025 | 3.10825 | 0.13491 | 0.17281 | 0.172423 | -(Win) | false |
| std::from_chars | 316.005 | 0.663204 | 164.1ms | 40000 | 30 | 1.92286e+07 | 120716 | 1.41678 | 15.9428 | 45.5628 | 10.3571 | 0.127934 | 0.172728 | 0.172382 | 2(Loss) | true |
| strtoll/strtoull | 223.375 | 0.869311 | 228.96ms | 40000 | 30 | 6.61185e+07 | 170776 | 0.156302 | 22.5425 | 71.9196 | 19.7252 | 0.177119 | 0.172915 | 0.172472 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 489.407 | 1.22923 | 960.689ms | 400000 | 30 | 2.75403e+09 | 779452 | 1.53271 | 10.2927 | 19.5969 | 3.10701 | 0.135382 | 0.172949 | 0.172503 | 1(Win) | true |
| std::from_chars | 318.727 | 1.18712 | 1467.7ms | 400000 | 30 | 6.05609e+09 | 1.19685e+06 | 1.1078 | 15.7269 | 45.5538 | 10.3551 | 0.128898 | 0.172688 | 0.17231 | 2(Loss) | true |
| strtoll/strtoull | 187.993 | 1.10002 | 1916.77ms | 400000 | 30 | 1.49473e+10 | 2.02917e+06 | 2.07332 | 26.7033 | 71.9099 | 19.7229 | 0.147552 | 0.17276 | 0.172564 | 3(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 506.04 | 3.1071 | 10.5833ms | 400 | 30 | 16458.2 | 753.833 | 0.797825 | 10.7624 | 20.8432 | 3.16933 | 0.0728333 | 0.16325 | 0.16175 | 1(Win) | true |
| std::from_chars | 368.733 | 1.31522 | 11.1045ms | 400 | 48 | 8886.59 | 1034.54 | 1.40336 | 14.3477 | 50.0347 | 10.488 | 0.0660938 | 0.172969 | 0.17224 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 252.334 | 1.8232 | 13.0797ms | 400 | 30 | 22790.7 | 1511.77 | 2.62485 | 20.7384 | 72.6001 | 19.7195 | 0.07525 | 0.1745 | 0.174083 | -(Loss) | false |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 455.104 | 1.26019 | 19.0095ms | 4000 | 30 | 334728 | 8382.03 | 3.62646 | 11.2059 | 20.2944 | 3.06534 | 0.0656167 | 0.172808 | 0.172567 | -(Win) | false |
| std::from_chars | 401.094 | 1.2123 | 22.4411ms | 4000 | 30 | 398813 | 9510.73 | 2.29569 | 12.6638 | 49.4461 | 10.3728 | 0.0651583 | 0.1729 | 0.1728 | 2(Loss) | true |
| strtoll/strtoull | 284.841 | 1.08081 | 28.0104ms | 4000 | 48 | 1.00566e+06 | 13392.4 | 0.785832 | 17.6891 | 72.0728 | 19.6207 | 0.0765573 | 0.173339 | 0.173057 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 526.061 | 0.626422 | 109.375ms | 40000 | 48 | 9.90431e+06 | 72514.4 | 2.90864 | 9.58943 | 20.2367 | 3.05458 | 0.0663109 | 0.172835 | 0.172303 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 303.714 | 2.90713 | 138.026ms | 40000 | 30 | 3.99984e+08 | 125602 | 9.735 | 16.5175 | 49.4041 | 10.3659 | 0.0622575 | 0.172796 | 0.172459 | -(Loss) | false |
| strtoll/strtoull | 267.629 | 1.49553 | 178.559ms | 40000 | 30 | 1.36323e+08 | 142537 | 1.47771 | 18.8498 | 72.0302 | 19.6141 | 0.0739358 | 0.172872 | 0.172584 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 610.812 | 1.15589 | 807.246ms | 400000 | 30 | 1.56336e+09 | 624529 | 0.76172 | 8.2373 | 20.2305 | 3.05354 | 0.0660249 | 0.172752 | 0.172384 | 1(Win) | true |
| std::from_chars | 318.304 | 2.21623 | 1365.21ms | 400000 | 30 | 2.11634e+10 | 1.19844e+06 | 1.33251 | 15.8011 | 49.3969 | 10.3644 | 0.0618219 | 0.172744 | 0.172464 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 282.859 | 1.01473 | 1746.72ms | 400000 | 30 | 5.61822e+09 | 1.34862e+06 | 3.34959 | 17.8002 | 72.0205 | 19.6117 | 0.0783347 | 0.172787 | 0.172446 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 770.205 | 2.26135 | 11.0366ms | 800 | 30 | 15053 | 990.567 | 0.550257 | 6.90025 | 15.5107 | 1.82458 | 0.0827917 | 0.127917 | 0.126333 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 438.917 | 1.68404 | 11.8797ms | 800 | 30 | 25706.4 | 1738.23 | 2.57964 | 11.9062 | 38.632 | 9.04162 | 0.083625 | 0.126083 | 0.126042 | -(Loss) | false |
| strtoll/strtoull | 286.507 | 2.44364 | 13.8385ms | 800 | 30 | 127030 | 2662.9 | 0.865832 | 17.9805 | 59.8604 | 16.8989 | 0.165125 | 0.127292 | 0.125792 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 758.053 | 1.53815 | 21.7871ms | 8000 | 30 | 718954 | 10064.5 | 0.149148 | 6.65056 | 14.9724 | 1.76878 | 0.0796292 | 0.126238 | 0.125417 | 1(Win) | true |
| std::from_chars | 464.463 | 0.424396 | 30.9823ms | 8000 | 48 | 233271 | 16426.3 | 0.656368 | 10.9173 | 38.364 | 8.99194 | 0.0779401 | 0.125573 | 0.125409 | 2(Loss) | true |
| strtoll/strtoull | 318.517 | 2.64283 | 41.9607ms | 8000 | 30 | 1.2022e+07 | 23952.9 | 1.19596 | 15.8379 | 59.5999 | 16.8522 | 0.142538 | 0.125721 | 0.1253 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 685.76 | 1.46982 | 138.312ms | 80000 | 30 | 8.02207e+07 | 111255 | 0.518852 | 7.33284 | 14.9476 | 1.76409 | 0.0783887 | 0.125875 | 0.125442 | 1(Win) | true |
| std::from_chars | 453.497 | 0.56056 | 226.189ms | 80000 | 30 | 2.66807e+07 | 168235 | 0.765623 | 11.0897 | 38.3389 | 8.98755 | 0.0773496 | 0.125555 | 0.125409 | 2(Loss) | true |
| strtoll/strtoull | 342.482 | 1.55405 | 306.418ms | 80000 | 30 | 3.59548e+08 | 222768 | 0.477656 | 14.7135 | 59.5755 | 16.8471 | 0.12405 | 0.125625 | 0.125413 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 550.194 | 0.959805 | 1628.62ms | 800000 | 30 | 5.31418e+09 | 1.38667e+06 | 1.1868 | 9.13067 | 14.8265 | 1.76356 | 0.0781923 | 0.125975 | 0.125504 | 1(Win) | true |
| std::from_chars | 373.737 | 0.917837 | 2523.86ms | 800000 | 48 | 1.68507e+10 | 2.04138e+06 | 2.3708 | 13.441 | 38.3369 | 8.98728 | 0.077008 | 0.125575 | 0.125343 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 236.194 | 1.11136 | 3811.24ms | 800000 | 30 | 3.86611e+10 | 3.23014e+06 | 2.86747 | 21.2964 | 59.573 | 16.8469 | 0.184497 | 0.125871 | 0.125431 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 720.389 | 1.72545 | 16.2307ms | 800 | 30 | 10017.8 | 1059.07 | 10.7503 | 7.4305 | 15.8885 | 1.94667 | 0.017375 | 0.1265 | 0.125583 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 384.801 | 1.0452 | 15.044ms | 800 | 48 | 20613.5 | 1982.69 | 4.24267 | 13.5466 | 38.8258 | 9.10617 | 0.0172656 | 0.127005 | 0.126693 | -(Loss) | false |
| strtoll/strtoull | 267.761 | 1.67667 | 15.6042ms | 800 | 30 | 68470.5 | 2849.33 | 1.59862 | 19.2911 | 60.0004 | 16.8422 | 0.110417 | 0.128208 | 0.126625 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 727.887 | 1.23472 | 26.3977ms | 8000 | 30 | 502475 | 10481.6 | 4.8901 | 6.98994 | 15.3508 | 1.89476 | 0.0160083 | 0.125754 | 0.125463 | -(Win) | false |
| std::from_chars | 420.279 | 1.31083 | 36.0677ms | 8000 | 30 | 1.69871e+06 | 18153.2 | 0.843909 | 11.9935 | 38.5502 | 9.05402 | 0.0145375 | 0.125713 | 0.123438 | 2(Loss) | true |
| strtoll/strtoull | 256.808 | 1.54781 | 51.9878ms | 8000 | 30 | 6.34331e+06 | 29708.5 | 1.67914 | 19.2939 | 59.7271 | 16.7899 | 0.124333 | 0.125692 | 0.125367 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 744.132 | 0.737701 | 143.776ms | 80000 | 30 | 1.71618e+07 | 102527 | 0.429935 | 6.77957 | 15.3229 | 1.8889 | 0.0152912 | 0.125776 | 0.125257 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 409.83 | 0.518809 | 225.628ms | 80000 | 48 | 4.47743e+07 | 186160 | 5.83907 | 12.286 | 38.5261 | 9.04994 | 0.0137768 | 0.125568 | 0.125269 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 257.402 | 0.917112 | 333.221ms | 80000 | 30 | 2.21678e+08 | 296400 | 7.08123 | 19.3421 | 59.7015 | 16.7851 | 0.12334 | 0.125793 | 0.124911 | -(Loss) | false |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 990.293 | 1.65515 | 986.936ms | 800000 | 30 | 4.87808e+09 | 770418 | 1.90699 | 4.98467 | 15.2081 | 1.88852 | 0.0151881 | 0.125675 | 0.124618 | 1(Win) | true |
| std::from_chars | 433.731 | 0.536568 | 2150.8ms | 800000 | 30 | 2.67245e+09 | 1.75901e+06 | 0.284326 | 11.5252 | 38.5242 | 9.0497 | 0.0136642 | 0.125535 | 0.12539 | 2(Loss) | true |
| strtoll/strtoull | 229.612 | 0.498582 | 3727.29ms | 800000 | 30 | 8.23349e+09 | 3.32273e+06 | 1.89807 | 21.6269 | 59.6988 | 16.7846 | 0.120344 | 0.125802 | 0.123701 | 3(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 878.963 | 2.98883 | 12.4428ms | 800 | 30 | 20191.3 | 868 | 3.32103 | 5.94004 | 15.1285 | 1.69704 | 0.0186667 | 0.124417 | 0.124125 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 570.664 | 0.83334 | 11.3581ms | 800 | 30 | 3723.79 | 1336.93 | 8.98508 | 9.01392 | 38.4562 | 8.98292 | 0.0171667 | 0.126375 | 0.125708 | -(Loss) | false |
| strtoll/strtoull | 263.052 | 3.10677 | 15.3224ms | 800 | 30 | 243577 | 2900.33 | 0.101036 | 19.2532 | 59.7579 | 16.9683 | 0.106542 | 0.127042 | 0.123125 | 3(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 942.742 | 1.64659 | 19.4004ms | 8000 | 30 | 532705 | 8092.77 | 1.51149 | 5.39828 | 14.6 | 1.64448 | 0.0155958 | 0.125787 | 0.1254 | 1(Win) | true |
| std::from_chars | 592.849 | 0.441524 | 27.279ms | 8000 | 30 | 96855.1 | 12869 | 0.529669 | 8.48809 | 38.1759 | 8.92925 | 0.0142833 | 0.125521 | 0.124358 | 2(Loss) | true |
| strtoll/strtoull | 348.473 | 0.450942 | 37.265ms | 8000 | 48 | 467869 | 21893.8 | 0.62009 | 14.4999 | 59.485 | 16.9172 | 0.124289 | 0.125701 | 0.118966 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 781.526 | 1.1227 | 142.026ms | 80000 | 30 | 3.60363e+07 | 97621.7 | 10.8065 | 6.44214 | 14.5732 | 1.63893 | 0.0153217 | 0.125714 | 0.125405 | -(Win) | false |
| std::from_chars | 414.81 | 0.357121 | 227.014ms | 80000 | 30 | 1.2943e+07 | 183925 | 1.46509 | 12.0685 | 38.1543 | 8.926 | 0.0136158 | 0.125565 | 0.123166 | 2(Loss) | true |
| strtoll/strtoull | 255.408 | 1.56861 | 379.758ms | 80000 | 30 | 6.58661e+08 | 298714 | 2.30809 | 19.5287 | 59.4535 | 16.9107 | 0.117313 | 0.125969 | 0.125426 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 767.85 | 0.935249 | 1102.99ms | 800000 | 30 | 2.59061e+09 | 993604 | 0.208983 | 6.41288 | 14.4447 | 1.63852 | 0.0153013 | 0.125681 | 0.124974 | 1(Win) | true |
| std::from_chars | 342.075 | 0.928108 | 2312.76ms | 800000 | 30 | 1.28545e+10 | 2.23032e+06 | 1.25747 | 11.3842 | 38.1492 | 8.92472 | 0.01365 | 0.125589 | 0.118088 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 259.975 | 2.07349 | 3586.5ms | 800000 | 30 | 1.11081e+11 | 2.93466e+06 | 5.94021 | 19.1097 | 59.4487 | 16.9096 | 0.116326 | 0.125687 | 0.123801 | -(Loss) | false |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 500.398 | 2.45309 | 13.3201ms | 800 | 30 | 41965.9 | 1524.67 | 0.378427 | 10.2368 | 16.044 | 1.86854 | 0.070875 | 0.141708 | 0.140458 | 1(Win) | true |
| std::from_chars | 296.525 | 2.52866 | 14.9108ms | 800 | 30 | 126987 | 2572.93 | 0.875819 | 17.1757 | 45.2156 | 9.47875 | 0.0700833 | 0.142417 | 0.142208 | 2(Loss) | true |
| strtoll/strtoull | 263.264 | 1.2697 | 14.7888ms | 800 | 30 | 40618.3 | 2898 | 0.642129 | 19.261 | 59.2497 | 17.107 | 0.12675 | 0.14375 | 0.141667 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 572.09 | 2.44834 | 29.8452ms | 8000 | 30 | 3.19827e+06 | 13336 | 0.149569 | 8.65445 | 15.7671 | 1.81701 | 0.069175 | 0.141929 | 0.141083 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 325.373 | 1.48208 | 43.3327ms | 8000 | 48 | 5.79698e+06 | 23448.2 | 3.64136 | 15.1764 | 44.952 | 9.42982 | 0.0657786 | 0.141258 | 0.141057 | -(Loss) | false |
| strtoll/strtoull | 279.619 | 0.393195 | 44.8444ms | 8000 | 30 | 345291 | 27285 | 0.39604 | 17.7847 | 58.9934 | 17.06 | 0.125167 | 0.141538 | 0.139954 | 3(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 647.628 | 0.627553 | 160.716ms | 80000 | 48 | 2.62343e+07 | 117805 | 0.980299 | 7.63981 | 15.739 | 1.8115 | 0.0683878 | 0.141668 | 0.138389 | 1(Win) | true |
| std::from_chars | 353.525 | 1.53135 | 280.441ms | 80000 | 30 | 3.27651e+08 | 215809 | 1.21844 | 14.0773 | 44.9224 | 9.42398 | 0.0664833 | 0.141416 | 0.139104 | 2(Loss) | true |
| strtoll/strtoull | 255.031 | 1.54131 | 395.27ms | 80000 | 30 | 6.37817e+08 | 299155 | 0.62362 | 19.4278 | 58.9503 | 17.0497 | 0.125166 | 0.141834 | 0.137162 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 707.42 | 1.95238 | 1390.56ms | 800000 | 30 | 1.33008e+10 | 1.07848e+06 | 0.082406 | 7.1055 | 15.7353 | 1.811 | 0.0680983 | 0.141502 | 0.141048 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 505.104 | 2.55766 | 1931.38ms | 800000 | 30 | 4.47738e+10 | 1.51046e+06 | 3.55552 | 9.87569 | 44.919 | 9.42328 | 0.0668195 | 0.141215 | 0.140559 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 245.692 | 1.06406 | 3809.34ms | 800000 | 30 | 3.27528e+10 | 3.10526e+06 | 3.08115 | 20.393 | 58.9446 | 17.0483 | 0.125369 | 0.141464 | 0.139403 | -(Loss) | false |
