# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-1017-azure using the Clang 24.0.0 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (INTEL(R) XEON(R) PLATINUM 8573C-AVX512): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 87.3261 | 1.33115 | 1.40225ms | 100 | 48 | 10143.9 | 1092.08 | 1.08763 | 24.3738 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 70.3196 | 1.83648 | 1.59413ms | 100 | 30 | 18609.7 | 1356.2 | 5.42326 | 30.4593 | -(Loss) | false |
| strtoll/strtoull | 48.7788 | 1.1204 | 2.39397ms | 100 | 30 | 14394.7 | 1955.1 | 0.263252 | 44.2313 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 91.0911 | 0.676129 | 12.9751ms | 1000 | 48 | 240519 | 10469.5 | 0.505339 | 23.9848 | 1(Win) | true |
| std::from_chars | 74.6536 | 0.2562 | 15.6908ms | 1000 | 30 | 32135.1 | 12774.7 | 0.00156557 | 29.2899 | 2(Loss) | true |
| strtoll/strtoull | 51.3778 | 0.232591 | 22.8483ms | 1000 | 48 | 89469.5 | 18562 | 0.662181 | 42.6211 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 90.497 | 0.524845 | 129.71ms | 10000 | 30 | 9.1773e+06 | 105382 | 0.548962 | 24.2237 | 1(Win) | true |
| std::from_chars | 75.2487 | 0.363803 | 152.658ms | 10000 | 48 | 1.02041e+07 | 126736 | 0.266052 | 29.135 | 2(Loss) | true |
| strtoll/strtoull | 51.2259 | 0.350738 | 223.87ms | 10000 | 30 | 1.27911e+07 | 186170 | 0.15178 | 42.8092 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 92.7169 | 0.122618 | 1237.93ms | 100000 | 30 | 4.77215e+07 | 1.02859e+06 | 0.189229 | 23.6548 | 1(Win) | true |
| std::from_chars | 77.7252 | 0.111537 | 1477.83ms | 100000 | 30 | 5.61867e+07 | 1.22698e+06 | 0.0704566 | 28.2158 | 2(Loss) | true |
| strtoll/strtoull | 50.489 | 0.148678 | 2260.6ms | 100000 | 30 | 2.36605e+08 | 1.88888e+06 | 0.045941 | 43.4415 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 137.914 | 3.23674 | 0.888878ms | 100 | 30 | 15028.7 | 691.5 | 3.96542 | 15.16 | 1(Win) | true |
| std::from_chars | 113.031 | 2.02003 | 1.09538ms | 100 | 48 | 13943.3 | 843.729 | 0.201397 | 18.6479 | 2(Loss) | true |
| strtoll/strtoull | 65.7117 | 1.34641 | 1.81501ms | 100 | 30 | 11454.9 | 1451.3 | 2.6191 | 32.6487 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 151.642 | 0.613191 | 7.94756ms | 1000 | 30 | 44614.5 | 6289 | 2.25808 | 14.3726 | 1(Win) | true |
| std::from_chars | 125.337 | 0.799014 | 9.37426ms | 1000 | 30 | 110885 | 7608.9 | 1.04289 | 17.4087 | 2(Loss) | true |
| strtoll/strtoull | 71.2637 | 0.723972 | 16.5592ms | 1000 | 30 | 281597 | 13382.3 | 0.767963 | 30.7055 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 151.328 | 0.849196 | 77.0202ms | 10000 | 30 | 8.59203e+06 | 63020.2 | 0.967484 | 14.4809 | 1(Win) | true |
| std::from_chars | 124.856 | 0.772869 | 92.1224ms | 10000 | 48 | 1.67277e+07 | 76382.1 | 0.162655 | 17.553 | 2(Loss) | true |
| strtoll/strtoull | 71.8635 | 0.396587 | 160.453ms | 10000 | 30 | 8.30964e+06 | 132706 | 0.887084 | 30.5115 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 152.091 | 0.337619 | 751.024ms | 100000 | 30 | 1.34453e+08 | 627043 | 0.20613 | 14.4193 | 1(Win) | true |
| std::from_chars | 128.303 | 0.215915 | 895.367ms | 100000 | 48 | 1.23632e+08 | 743298 | 0.0934594 | 17.092 | 2(Loss) | true |
| strtoll/strtoull | 70.7016 | 0.230295 | 1634.87ms | 100000 | 30 | 2.89488e+08 | 1.34887e+06 | 0.265723 | 31.0215 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 130.041 | 2.6934 | 0.882646ms | 100 | 30 | 11704.9 | 733.367 | 1.2611 | 16.138 | 1(Win) | true |
| std::from_chars | 119.095 | 1.96575 | 1.03447ms | 100 | 30 | 7433.43 | 800.767 | 1.24913 | 17.6873 | 2(Loss) | true |
| strtoll/strtoull | 68.2887 | 1.44101 | 1.74706ms | 100 | 30 | 12149.4 | 1396.53 | 2.2392 | 31.3667 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 162.585 | 0.56367 | 7.15914ms | 1000 | 30 | 32795.2 | 5865.7 | 0.255808 | 13.3997 | 1(Win) | true |
| std::from_chars | 128.532 | 0.557934 | 9.33665ms | 1000 | 30 | 51412.3 | 7419.77 | 0.267485 | 16.9729 | 2(Loss) | true |
| strtoll/strtoull | 77.0065 | 0.410389 | 15.0898ms | 1000 | 30 | 77492 | 12384.3 | 1.22183 | 28.4122 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 161.278 | 1.01977 | 71.5626ms | 10000 | 48 | 1.74542e+07 | 59132.5 | 0.191911 | 13.5864 | 1(Win) | true |
| std::from_chars | 126.063 | 0.909629 | 91.1142ms | 10000 | 30 | 1.4206e+07 | 75650.3 | 0.64431 | 17.3853 | 2(Loss) | true |
| strtoll/strtoull | 77.4491 | 0.532087 | 148.221ms | 10000 | 30 | 1.28782e+07 | 123136 | 1.28018 | 28.3091 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 161.923 | 0.276346 | 709.767ms | 100000 | 48 | 1.27155e+08 | 588968 | 0.151443 | 13.5437 | 1(Win) | true |
| std::from_chars | 128.495 | 0.282619 | 891.34ms | 100000 | 30 | 1.31992e+08 | 742187 | 0.0405903 | 17.0666 | 2(Loss) | true |
| strtoll/strtoull | 78.6452 | 0.283396 | 1462.12ms | 100000 | 30 | 3.54295e+08 | 1.21263e+06 | 0.47302 | 27.8883 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 123.52 | 2.20418 | 1.00542ms | 100 | 48 | 13901.6 | 772.083 | 3.22749 | 17.0208 | 1(Win) | true |
| std::from_chars | 101.315 | 2.35336 | 1.10479ms | 100 | 30 | 14721.6 | 941.3 | 3.78933 | 20.9193 | 2(Loss) | true |
| strtoll/strtoull | 61.2744 | 1.47079 | 1.95611ms | 100 | 30 | 15720.4 | 1556.4 | 0.0299927 | 35.0547 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 132.939 | 0.462906 | 8.95717ms | 1000 | 30 | 33083 | 7173.8 | 2.35565 | 16.4086 | 1(Win) | true |
| std::from_chars | 129.494 | 0.789246 | 9.14371ms | 1000 | 30 | 101355 | 7364.6 | 1.14542 | 16.8461 | 2(Loss) | true |
| strtoll/strtoull | 65.1641 | 2.12654 | 17.5788ms | 1000 | 30 | 2.90571e+06 | 14635 | 0.466328 | 33.5824 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 130.546 | 0.790284 | 87.9561ms | 10000 | 48 | 1.59986e+07 | 73052.8 | 0.519918 | 16.7887 | 1(Win) | true |
| std::from_chars | 124.694 | 0.866809 | 91.102ms | 10000 | 30 | 1.3185e+07 | 76481.4 | 0.0291925 | 17.5761 | 2(Loss) | true |
| strtoll/strtoull | 62.9867 | 0.371296 | 181.456ms | 10000 | 30 | 9.48122e+06 | 151409 | 0.183711 | 34.8119 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 131.021 | 0.244716 | 882.088ms | 100000 | 30 | 9.51834e+07 | 727878 | 0.406094 | 16.7386 | 1(Win) | true |
| std::from_chars | 121.363 | 0.31979 | 941.028ms | 100000 | 30 | 1.89444e+08 | 785806 | 0.173482 | 18.0697 | 2(Loss) | true |
| strtoll/strtoull | 65.1255 | 0.277277 | 1755.48ms | 100000 | 30 | 4.9459e+08 | 1.46436e+06 | 0.162856 | 33.6768 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 141.804 | 1.39151 | 1.6765ms | 200 | 48 | 16815 | 1345.06 | 2.18769 | 15.1037 | 1(Win) | true |
| std::from_chars | 124.457 | 1.17795 | 1.92865ms | 200 | 48 | 15643.1 | 1532.54 | 1.72187 | 17.2392 | 2(Loss) | true |
| strtoll/strtoull | 80.9903 | 0.640666 | 2.91919ms | 200 | 30 | 6829.34 | 2355.03 | 1.68791 | 26.7173 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 158.275 | 0.323319 | 14.9993ms | 2000 | 30 | 45542.9 | 12050.9 | 0.720104 | 13.8112 | 1(Win) | true |
| std::from_chars | 129.875 | 0.520783 | 17.8737ms | 2000 | 30 | 175486 | 14686 | 1.07016 | 16.8427 | 2(Loss) | true |
| strtoll/strtoull | 83.1771 | 0.214969 | 27.9506ms | 2000 | 30 | 72899.9 | 22931.2 | 0.104407 | 26.3343 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 153.943 | 0.576885 | 149.809ms | 20000 | 30 | 1.53264e+07 | 123900 | 0.441546 | 14.2407 | 1(Win) | true |
| std::from_chars | 128.011 | 0.676444 | 176.936ms | 20000 | 48 | 4.8761e+07 | 148999 | 0.923832 | 17.1243 | 2(Loss) | true |
| strtoll/strtoull | 84.9559 | 0.260423 | 271.031ms | 20000 | 30 | 1.02554e+07 | 224510 | 0.518089 | 25.8136 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 151.612 | 0.241428 | 1503.25ms | 200000 | 30 | 2.76752e+08 | 1.25805e+06 | 0.104527 | 14.4638 | 1(Win) | true |
| std::from_chars | 124.249 | 0.324297 | 1831.22ms | 200000 | 30 | 7.43506e+08 | 1.53511e+06 | 0.300262 | 17.6509 | 2(Loss) | true |
| strtoll/strtoull | 82.814 | 0.121865 | 2769.46ms | 200000 | 30 | 2.36338e+08 | 2.30317e+06 | 0.0999896 | 26.484 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 197.974 | 3.06962 | 1.22736ms | 200 | 30 | 26238.3 | 963.433 | 0.808301 | 10.699 | 1(Win) | true |
| std::from_chars | 178.524 | 2.13469 | 1.34221ms | 200 | 30 | 15604.9 | 1068.4 | 2.32491 | 11.9153 | 2(Loss) | true |
| strtoll/strtoull | 102.837 | 0.758332 | 2.31692ms | 200 | 30 | 5934.75 | 1854.73 | 1.12483 | 20.9497 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 241.319 | 1.24439 | 9.58896ms | 2000 | 30 | 290209 | 7903.83 | 1.36975 | 9.0431 | 1(Win) | true |
| std::from_chars | 218.625 | 0.45756 | 10.9549ms | 2000 | 30 | 47805.6 | 8724.3 | 2.1486 | 9.98463 | 2(Loss) | true |
| strtoll/strtoull | 107.78 | 0.220118 | 21.1001ms | 2000 | 30 | 45521.9 | 17696.7 | 0.407757 | 20.3071 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 236.461 | 1.18603 | 96.9792ms | 20000 | 30 | 2.7457e+07 | 80662.3 | 0.0165946 | 9.26934 | 1(Win) | true |
| std::from_chars | 202.245 | 0.974149 | 112.518ms | 20000 | 30 | 2.53208e+07 | 94308.9 | 0.0271389 | 10.8378 | 2(Loss) | true |
| strtoll/strtoull | 109.334 | 0.357752 | 209.733ms | 20000 | 30 | 1.16852e+07 | 174452 | 0.173798 | 20.0551 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 228.405 | 0.534595 | 989.273ms | 200000 | 30 | 5.97886e+08 | 835072 | 0.749471 | 9.6005 | 1(Win) | true |
| std::from_chars | 205.853 | 0.354539 | 1112.49ms | 200000 | 30 | 3.2374e+08 | 926560 | 0.0454558 | 10.6523 | 2(Loss) | true |
| strtoll/strtoull | 110.214 | 0.155033 | 2086.6ms | 200000 | 48 | 3.45518e+08 | 1.73058e+06 | 0.0322402 | 19.8988 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 207.984 | 2.53772 | 1.18399ms | 200 | 30 | 16248.3 | 917.067 | 0.585426 | 10.175 | 1(Win) | true |
| std::from_chars | 173.585 | 3.12544 | 1.35801ms | 200 | 30 | 35382 | 1098.8 | 1.9483 | 12.2683 | 2(Loss) | true |
| strtoll/strtoull | 101.417 | 1.16447 | 2.37781ms | 200 | 30 | 14388.4 | 1880.7 | 1.22061 | 21.2603 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 255.903 | 0.633649 | 9.26607ms | 2000 | 30 | 66915.7 | 7453.4 | 0.151783 | 8.52313 | 1(Win) | true |
| std::from_chars | 214.171 | 0.534863 | 11.0777ms | 2000 | 30 | 68068.5 | 8905.73 | 0.112348 | 10.1943 | 2(Loss) | true |
| strtoll/strtoull | 110.258 | 0.376302 | 20.9541ms | 2000 | 30 | 127127 | 17299 | 0.315661 | 19.8582 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 250.232 | 1.09245 | 91.4536ms | 20000 | 48 | 3.32824e+07 | 76223.1 | 0.221722 | 8.75863 | 1(Win) | true |
| std::from_chars | 204.983 | 0.800547 | 112.306ms | 20000 | 30 | 1.66464e+07 | 93049.2 | 0.487824 | 10.6933 | 2(Loss) | true |
| strtoll/strtoull | 111.207 | 0.249898 | 207.344ms | 20000 | 30 | 5.51118e+06 | 171513 | 0.239407 | 19.7184 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 251.347 | 0.2975 | 912.879ms | 200000 | 30 | 1.52901e+08 | 758851 | 0.139633 | 8.72411 | 1(Win) | true |
| std::from_chars | 207.639 | 0.187191 | 1103.58ms | 200000 | 48 | 1.41922e+08 | 918589 | 0.146109 | 10.5605 | 2(Loss) | true |
| strtoll/strtoull | 108.829 | 0.512558 | 2096.39ms | 200000 | 30 | 2.42089e+09 | 1.7526e+06 | 0.298056 | 20.1524 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 237.085 | 3.87074 | 1.06334ms | 200 | 30 | 29091.2 | 804.5 | 1.36902 | 8.87933 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 218.299 | 2.94564 | 1.09694ms | 200 | 30 | 19871.9 | 873.733 | 0.191596 | 9.683 | 1(Tie) | true |
| strtoll/strtoull | 104.915 | 1.08348 | 2.14047ms | 200 | 30 | 11639.9 | 1818 | 0.423495 | 20.532 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 336.144 | 0.713942 | 7.14395ms | 2000 | 30 | 49233.1 | 5674.2 | 0.364066 | 6.47907 | 1(Win) | true |
| std::from_chars | 291.506 | 0.595546 | 8.18103ms | 2000 | 48 | 72884.8 | 6543.08 | 1.84639 | 7.47744 | 2(Loss) | true |
| strtoll/strtoull | 120.885 | 0.992643 | 18.918ms | 2000 | 48 | 1.17745e+06 | 15778.2 | 0.395109 | 18.1055 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 328.316 | 1.26638 | 70.3064ms | 20000 | 48 | 2.59803e+07 | 58094.8 | 0.575577 | 6.67404 | 1(Win) | true |
| std::from_chars | 290.475 | 0.992122 | 79.6027ms | 20000 | 48 | 2.0371e+07 | 65663 | 1.73992 | 7.5434 | 2(Loss) | true |
| strtoll/strtoull | 123.629 | 0.486832 | 186.663ms | 20000 | 30 | 1.69239e+07 | 154280 | 0.519943 | 17.736 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 325.171 | 0.457479 | 702.015ms | 200000 | 30 | 2.16023e+08 | 586568 | 0.106985 | 6.74171 | 1(Win) | true |
| std::from_chars | 298.274 | 0.556342 | 801.694ms | 200000 | 30 | 3.79695e+08 | 639462 | 0.0731514 | 7.35037 | 2(Loss) | true |
| strtoll/strtoull | 122.196 | 0.578802 | 1893.25ms | 200000 | 30 | 2.44864e+09 | 1.56089e+06 | 0.0787801 | 17.9473 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 234.876 | 1.60286 | 2.01927ms | 400 | 30 | 20330.7 | 1624.13 | 0.0266738 | 9.14983 | 1(Win) | true |
| std::from_chars | 178.493 | 1.13124 | 2.71767ms | 400 | 30 | 17535.2 | 2137.17 | 0.517853 | 12.0712 | 2(Loss) | true |
| strtoll/strtoull | 125.153 | 0.855353 | 3.79252ms | 400 | 30 | 20391.6 | 3048.03 | 1.38932 | 17.3375 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 246.214 | 0.700661 | 18.8561ms | 4000 | 30 | 353535 | 15493.4 | 1.62891 | 8.88702 | 1(Win) | true |
| std::from_chars | 177.443 | 0.386205 | 26.346ms | 4000 | 30 | 206804 | 21498.1 | 1.14301 | 12.3357 | 2(Loss) | true |
| strtoll/strtoull | 136.251 | 0.746567 | 34.6084ms | 4000 | 48 | 2.09709e+06 | 27997.5 | 0.142791 | 16.0768 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 247.675 | 0.716809 | 184.886ms | 40000 | 48 | 5.85063e+07 | 154020 | 0.488616 | 8.85216 | 1(Win) | true |
| std::from_chars | 177.998 | 0.568365 | 258.311ms | 40000 | 30 | 4.45111e+07 | 214312 | 0.137135 | 12.3179 | 2(Loss) | true |
| strtoll/strtoull | 132.491 | 0.663701 | 374.308ms | 40000 | 30 | 1.09551e+08 | 287922 | 2.48743 | 16.5517 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 247.829 | 0.115387 | 1854.19ms | 400000 | 48 | 1.51415e+08 | 1.53925e+06 | 0.16048 | 8.84917 | 1(Win) | true |
| std::from_chars | 173.674 | 0.101227 | 2639.68ms | 400000 | 48 | 2.37292e+08 | 2.19647e+06 | 0.041208 | 12.6284 | 2(Loss) | true |
| strtoll/strtoull | 134.352 | 0.179552 | 3424.86ms | 400000 | 48 | 1.24754e+09 | 2.83934e+06 | 0.203116 | 16.3249 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 290.762 | 2.53689 | 1.5886ms | 400 | 30 | 33232.9 | 1311.97 | 0.175617 | 7.35683 | 1(Win) | true |
| std::from_chars | 220.015 | 1.50799 | 2.09429ms | 400 | 30 | 20508.4 | 1733.83 | 1.51249 | 9.78617 | 2(Loss) | true |
| strtoll/strtoull | 145.638 | 0.948364 | 3.22048ms | 400 | 30 | 18511.5 | 2619.3 | 0.0343721 | 14.8758 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 343.437 | 0.465815 | 13.681ms | 4000 | 30 | 80310.7 | 11107.4 | 5.52388 | 6.36618 | -(Win) | false |
| std::from_chars | 235.268 | 1.81036 | 22.2299ms | 4000 | 48 | 4.13585e+06 | 16214.3 | 0.115377 | 9.29455 | 2(Loss) | true |
| strtoll/strtoull | 163.992 | 0.708394 | 27.6201ms | 4000 | 48 | 1.30337e+06 | 23261.5 | 1.26633 | 13.3543 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 333.57 | 0.916093 | 138.099ms | 40000 | 30 | 3.29266e+07 | 114360 | 0.279657 | 6.57164 | 1(Win) | true |
| std::from_chars | 240.17 | 0.671463 | 191.131ms | 40000 | 48 | 5.45968e+07 | 158833 | 0.218749 | 9.12723 | 2(Loss) | true |
| strtoll/strtoull | 159.513 | 0.848985 | 285.492ms | 40000 | 30 | 1.23665e+08 | 239146 | 0.306541 | 13.7457 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 339.143 | 0.305756 | 1357.63ms | 400000 | 30 | 3.54834e+08 | 1.12481e+06 | 0.25279 | 6.46585 | 1(Win) | true |
| std::from_chars | 235.785 | 0.149048 | 1950.08ms | 400000 | 48 | 2.79111e+08 | 1.61787e+06 | 0.378152 | 9.30114 | 2(Loss) | true |
| strtoll/strtoull | 163.736 | 0.315078 | 2793.02ms | 400000 | 30 | 1.61655e+09 | 2.32979e+06 | 0.260287 | 13.3946 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 315.969 | 2.03049 | 1.45755ms | 400 | 30 | 18028.3 | 1207.3 | 0.748109 | 6.757 | 1(Win) | true |
| std::from_chars | 226.495 | 1.91229 | 2.12493ms | 400 | 30 | 31119.6 | 1684.23 | 3.12263 | 9.49633 | 2(Loss) | true |
| strtoll/strtoull | 150.697 | 3.07973 | 3.03218ms | 400 | 30 | 182329 | 2531.37 | 0.149021 | 14.3637 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 362.704 | 0.440582 | 13.0813ms | 4000 | 48 | 103065 | 10517.4 | 1.26447 | 6.02697 | 1(Win) | true |
| std::from_chars | 229.168 | 0.873161 | 19.7721ms | 4000 | 30 | 633754 | 16645.8 | 0.252752 | 9.54505 | 2(Loss) | true |
| strtoll/strtoull | 173.017 | 0.269365 | 27.5919ms | 4000 | 30 | 105815 | 22048.1 | 2.7643 | 12.6577 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 359.397 | 1.25519 | 126.573ms | 40000 | 30 | 5.32487e+07 | 106142 | 0.86224 | 6.09919 | 1(Win) | true |
| std::from_chars | 240.194 | 0.749133 | 190.913ms | 40000 | 30 | 4.24654e+07 | 158817 | 0.0908366 | 9.12759 | 2(Loss) | true |
| strtoll/strtoull | 166.031 | 0.547533 | 278.904ms | 40000 | 30 | 4.74769e+07 | 229758 | 0.380784 | 13.2072 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 367.61 | 0.232772 | 1246.62ms | 400000 | 30 | 1.75036e+08 | 1.0377e+06 | 0.0101175 | 5.96469 | 1(Win) | true |
| std::from_chars | 233.384 | 0.102902 | 1961.39ms | 400000 | 48 | 1.35789e+08 | 1.63452e+06 | 0.21705 | 9.39696 | 2(Loss) | true |
| strtoll/strtoull | 166.128 | 0.383889 | 2749.68ms | 400000 | 30 | 2.33114e+09 | 2.29624e+06 | 0.889094 | 13.2021 | 3(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 455.033 | 2.21075 | 1.14219ms | 400 | 30 | 10304.6 | 838.333 | 3.65461 | 4.6375 | 1(Win) | true |
| std::from_chars | 248.977 | 1.43271 | 1.91479ms | 400 | 48 | 23129 | 1532.15 | 0.18172 | 8.62375 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 137.808 | 1.39405 | 3.46376ms | 400 | 30 | 44673.4 | 2768.13 | 5.82378 | 15.7355 | -(Loss) | false |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 503.672 | 1.07089 | 9.50476ms | 4000 | 30 | 197348 | 7573.77 | 0.813293 | 4.333 | 1(Win) | true |
| std::from_chars | 310.719 | 0.479586 | 15.2377ms | 4000 | 30 | 104001 | 12277 | 3.47037 | 7.03335 | 2(Loss) | true |
| strtoll/strtoull | 129.529 | 0.864513 | 34.3935ms | 4000 | 30 | 1.94469e+06 | 29450.5 | 0.0136972 | 16.9123 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 507.646 | 0.894094 | 90.7436ms | 40000 | 48 | 2.16673e+07 | 75144.8 | 0.190816 | 4.31742 | 1(Win) | true |
| std::from_chars | 311.119 | 1.15147 | 147.041ms | 40000 | 30 | 5.9799e+07 | 122612 | 0.165483 | 7.04588 | 2(Loss) | true |
| strtoll/strtoull | 148.738 | 2.73834 | 326.766ms | 40000 | 30 | 1.47969e+09 | 256471 | 1.08022 | 14.743 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 505.102 | 0.369338 | 905.089ms | 400000 | 30 | 2.33416e+08 | 755233 | 0.121691 | 4.3405 | 1(Win) | true |
| std::from_chars | 302.148 | 0.249102 | 1515.41ms | 400000 | 30 | 2.96726e+08 | 1.26252e+06 | 0.154421 | 7.25758 | 2(Loss) | true |
| strtoll/strtoull | 143.564 | 1.7239 | 3276.7ms | 400000 | 30 | 6.29469e+10 | 2.65714e+06 | 0.739801 | 15.277 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 465.046 | 1.94521 | 2.03886ms | 800 | 30 | 30552.1 | 1640.57 | 0.875179 | 4.61992 | 1(Win) | true |
| std::from_chars | 308.109 | 1.09998 | 3.02263ms | 800 | 30 | 22256.7 | 2476.2 | 0.835306 | 7.01917 | 2(Loss) | true |
| strtoll/strtoull | 224.016 | 0.859679 | 4.19239ms | 800 | 30 | 25716.7 | 3405.73 | 1.8055 | 9.69992 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 516.754 | 0.849434 | 18.2742ms | 8000 | 30 | 471838 | 14764.1 | 0.00925757 | 4.23137 | 1(Win) | true |
| std::from_chars | 329.714 | 1.1059 | 28.0592ms | 8000 | 48 | 3.14325e+06 | 23139.4 | 0.619728 | 6.63726 | 2(Loss) | true |
| strtoll/strtoull | 218.082 | 0.985758 | 41.8142ms | 8000 | 30 | 3.56781e+06 | 34984 | 1.5755 | 10.0458 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 509.187 | 0.765702 | 180.546ms | 80000 | 48 | 6.3181e+07 | 149835 | 0.159199 | 4.30569 | 1(Win) | true |
| std::from_chars | 325.508 | 0.583458 | 281.226ms | 80000 | 48 | 8.97672e+07 | 234384 | 0.4305 | 6.73549 | 2(Loss) | true |
| strtoll/strtoull | 218.273 | 0.640251 | 418.634ms | 80000 | 48 | 2.40393e+08 | 349535 | 0.426502 | 10.0468 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 514.383 | 0.337215 | 1772ms | 800000 | 30 | 7.50487e+08 | 1.48321e+06 | 0.0845411 | 4.26264 | 1(Win) | true |
| std::from_chars | 290.04 | 0.642 | 3166.32ms | 800000 | 30 | 8.55569e+09 | 2.63046e+06 | 0.107495 | 7.5612 | 2(Loss) | true |
| strtoll/strtoull | 223.173 | 0.310805 | 4112.82ms | 800000 | 30 | 3.38682e+09 | 3.4186e+06 | 0.0259862 | 9.82749 | 3(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 596.435 | 2.37285 | 1.62994ms | 800 | 30 | 27638.5 | 1279.17 | 0.580326 | 3.58108 | 1(Win) | true |
| std::from_chars | 385.297 | 1.56272 | 2.48077ms | 800 | 30 | 28725.8 | 1980.13 | 0.0815777 | 5.59917 | 2(Loss) | true |
| strtoll/strtoull | 271.716 | 0.918693 | 3.56675ms | 800 | 48 | 31939.7 | 2807.85 | 1.55845 | 7.98141 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 727.804 | 0.503204 | 13.1356ms | 8000 | 30 | 83476 | 10482.8 | 4.48142 | 3.00221 | 1(Win) | true |
| std::from_chars | 408.199 | 1.97937 | 22.0077ms | 8000 | 30 | 4.10594e+06 | 18690.4 | 0.771936 | 5.35682 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 280.599 | 1.16433 | 33.9032ms | 8000 | 48 | 4.81063e+06 | 27189.7 | 9.78084 | 7.80514 | -(Loss) | false |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 706.018 | 1.20649 | 129.815ms | 80000 | 30 | 5.0994e+07 | 108062 | 0.547567 | 3.10503 | 1(Win) | true |
| std::from_chars | 420.775 | 0.717626 | 218.816ms | 80000 | 48 | 8.12679e+07 | 181318 | 0.285093 | 5.21058 | 2(Loss) | true |
| strtoll/strtoull | 272.108 | 0.729181 | 341.268ms | 80000 | 48 | 2.00636e+08 | 280381 | 0.253579 | 8.05873 | 3(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 719.24 | 0.307733 | 1283.71ms | 800000 | 30 | 3.19671e+08 | 1.06076e+06 | 0.299428 | 3.04868 | 1(Win) | true |
| std::from_chars | 381.929 | 0.900439 | 2361.5ms | 800000 | 30 | 9.7061e+09 | 1.9976e+06 | 1.65606 | 5.7421 | 2(Loss) | true |
| strtoll/strtoull | 272.179 | 0.544038 | 3356.97ms | 800000 | 48 | 1.11627e+10 | 2.80308e+06 | 0.102627 | 8.05797 | 3(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 584.762 | 2.24538 | 1.48317ms | 800 | 30 | 25746.8 | 1304.7 | 1.19183 | 3.65725 | 1(Win) | true |
| std::from_chars | 383.953 | 1.2951 | 2.47438ms | 800 | 48 | 31788.5 | 1987.06 | 0.444623 | 5.62047 | 2(Loss) | true |
| strtoll/strtoull | 267.867 | 0.971028 | 3.55968ms | 800 | 30 | 22947 | 2848.2 | 0.0269248 | 8.09408 | 3(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 803.015 | 0.400537 | 12.2836ms | 8000 | 30 | 43444.8 | 9500.93 | 0.0115792 | 2.71577 | 1(Win) | true |
| std::from_chars | 420.905 | 1.31125 | 21.9661ms | 8000 | 48 | 2.71158e+06 | 18126.2 | 0.496397 | 5.19532 | 2(Loss) | true |
| strtoll/strtoull | 279.272 | 1.71523 | 32.5917ms | 8000 | 30 | 6.58707e+06 | 27318.9 | 1.18067 | 7.84188 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 801.52 | 1.63911 | 114.317ms | 80000 | 30 | 7.30284e+07 | 95186.6 | 0.170447 | 2.73488 | 1(Win) | true |
| std::from_chars | 420.488 | 0.756171 | 218.141ms | 80000 | 48 | 9.03551e+07 | 181441 | 0.273516 | 5.21424 | 2(Loss) | true |
| strtoll/strtoull | 263.794 | 1.27049 | 345.254ms | 80000 | 30 | 4.05056e+08 | 289218 | 1.08889 | 8.31209 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 796.709 | 0.348108 | 1147.71ms | 800000 | 48 | 5.33395e+08 | 957614 | 0.0304008 | 2.7519 | 1(Win) | true |
| std::from_chars | 390.409 | 0.924622 | 2357.73ms | 800000 | 30 | 9.79469e+09 | 1.95421e+06 | 0.364071 | 5.61727 | 2(Loss) | true |
| strtoll/strtoull | 275.005 | 0.509397 | 3352.49ms | 800000 | 30 | 5.99144e+09 | 2.77427e+06 | 1.28032 | 7.97538 | 3(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 428.61 | 1.97247 | 2.18006ms | 800 | 30 | 36982.8 | 1780.03 | 0.933714 | 5.02408 | 1(Win) | true |
| std::from_chars | 312.942 | 1.06216 | 3.05699ms | 800 | 48 | 32186.6 | 2437.96 | 0.0489036 | 6.89859 | 2(Loss) | true |
| strtoll/strtoull | 144.602 | 0.38306 | 6.28377ms | 800 | 30 | 12254.3 | 5276.13 | 1.04438 | 15.0782 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 488.427 | 2.95721 | 18.721ms | 8000 | 30 | 6.40125e+06 | 15620.3 | 0.0707977 | 4.47748 | 1(Win) | true |
| std::from_chars | 350.081 | 1.06797 | 26.4738ms | 8000 | 48 | 2.60018e+06 | 21793.2 | 1.2367 | 6.24989 | 2(Loss) | true |
| strtoll/strtoull | 167.459 | 0.892681 | 53.407ms | 8000 | 30 | 4.96221e+06 | 45559.7 | 1.67533 | 13.0865 | 3(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 514.268 | 0.862544 | 212.743ms | 80000 | 48 | 7.85969e+07 | 148354 | 0.681739 | 4.26311 | 1(Win) | true |
| std::from_chars | 339.797 | 1.21483 | 270.499ms | 80000 | 30 | 2.23198e+08 | 224528 | 0.139211 | 6.45294 | 2(Loss) | true |
| strtoll/strtoull | 191.886 | 1.73723 | 487.145ms | 80000 | 30 | 1.43129e+09 | 397600 | 0.785779 | 11.4286 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 513.733 | 0.262049 | 1789.5ms | 800000 | 48 | 7.26962e+08 | 1.48509e+06 | 0.217021 | 4.26838 | 1(Win) | true |
| std::from_chars | 340.894 | 0.131967 | 2695.07ms | 800000 | 48 | 4.18713e+08 | 2.23806e+06 | 0.100435 | 6.43334 | 2(Loss) | true |
| strtoll/strtoull | 190.625 | 0.912791 | 4837.98ms | 800000 | 30 | 4.00391e+10 | 4.0023e+06 | 1.25518 | 11.5058 | 3(Loss) | true |
