# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-38-generic using the Clang 24.0.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 621.549 | 1.2952 | 9.32259ms | 264 | 30 | 825.344 | 404.967 | 1.58027 | 8.93395 | 11.6983 | 0.932054 | 0.198914 | 0.100404 | 0.0491286 | 1(Win) | true |
| jeaiii::to_text | 412.479 | 1.28411 | 9.57444ms | 264 | 30 | 1839.29 | 609.767 | 0.169177 | 13.0489 | 12.1878 | 1.90571 | 0.315976 | 0.100607 | 0.0477755 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 679.048 | 0.430934 | 13.4145ms | 2653 | 30 | 7734.02 | 3725.9 | 0.0887141 | 7.52923 | 10.8373 | 0.771212 | 0.191785 | 0.100479 | 0.0553217 | 1(Win) | true |
| jeaiii::to_text | 443.231 | 0.593916 | 15.6325ms | 2642 | 30 | 34195.2 | 5684.57 | 0.0539181 | 11.5033 | 11.3461 | 1.74368 | 0.310034 | 0.101427 | 0.0510226 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 682.155 | 0.331411 | 53.7965ms | 26488 | 48 | 722929 | 37030.5 | 0.00959886 | 7.40878 | 10.7686 | 0.756808 | 0.188816 | 0.100781 | 0.0545743 | 1(Win) | true |
| jeaiii::to_text | 448.346 | 0.295641 | 76.5204ms | 26488 | 48 | 1.33177e+06 | 56341.6 | 0.592561 | 11.2703 | 11.2461 | 1.72096 | 0.308105 | 0.100797 | 0.0444288 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 683.025 | 0.128893 | 452.94ms | 264673 | 30 | 6.80652e+06 | 369551 | 0.0502123 | 7.39357 | 10.7639 | 0.755824 | 0.18872 | 0.100937 | 0.0550987 | 1(Win) | true |
| jeaiii::to_text | 447.138 | 0.218335 | 686.009ms | 264671 | 48 | 7.2915e+07 | 564500 | 0.273478 | 11.2939 | 11.2414 | 1.72119 | 0.308018 | 0.10087 | 0.0448402 | 2(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2262.15 | 3.1681 | 9.03606ms | 315 | 48 | 847.138 | 132.604 | 3.81328 | 2.93271 | 10.955 | 0.78209 | 0.0078156 | 0.0517949 | 0.0237117 | -(Win) | false |
| jeaiii::to_text | 850.276 | 1.03165 | 9.22735ms | 315 | 48 | 635.828 | 352.792 | 0.855251 | 6.65552 | 11.3553 | 1.59796 | 0.106637 | 0.0837197 | 0.0392105 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2571.35 | 1.9727 | 10.3969ms | 3145 | 30 | 15884.2 | 1166.43 | 0.00571576 | 2.0439 | 10.2448 | 0.650556 | 0.00198198 | 0.081664 | 0.0723582 | 1(Win) | true |
| jeaiii::to_text | 934.112 | 0.564532 | 12.9362ms | 3145 | 30 | 9857.96 | 3211.03 | 1.03352 | 5.48577 | 10.6469 | 1.46235 | 0.0983944 | 0.0843305 | 0.0474909 | 2(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2584.93 | 0.551273 | 22.6762ms | 31452 | 30 | 122759 | 11603.8 | 1.51083 | 2.00005 | 10.1737 | 0.637352 | 0.00129933 | 0.0846009 | 0.0719297 | 1(Win) | true |
| jeaiii::to_text | 941.09 | 0.641977 | 47.4014ms | 31452 | 30 | 1.25601e+06 | 31872.6 | 0.312041 | 5.36201 | 10.5747 | 1.4498 | 0.0974236 | 0.0848955 | 0.0467654 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2596.08 | 0.405339 | 148.157ms | 314466 | 48 | 1.05242e+07 | 115520 | 0.132682 | 1.94408 | 10.1681 | 0.636146 | 0.00124815 | 0.0848501 | 0.072739 | 1(Win) | true |
| jeaiii::to_text | 941.635 | 0.374411 | 392.538ms | 314483 | 30 | 4.26625e+07 | 318503 | 0.144428 | 5.36105 | 10.5692 | 1.44836 | 0.0976187 | 0.0848413 | 0.0474028 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1855.5 | 3.77921 | 9.00116ms | 215 | 48 | 834.872 | 110.354 | 6.51947 | 3.75082 | 12.8034 | 1.14574 | 0.00941199 | 0.0507471 | 0.0257132 | -(Win) | false |
| jeaiii::to_text | 619.917 | 1.9584 | 9.23ms | 217 | 30 | 1277.93 | 333.267 | 1.58238 | 9.18341 | 13.2988 | 2.31205 | 0.151562 | 0.100785 | 0.0664718 | 2(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2041.34 | 1.47978 | 10.1079ms | 2151 | 48 | 10617.5 | 1005.06 | 0.205617 | 2.57581 | 11.7364 | 0.951038 | 0.00109428 | 0.116846 | 0.0999187 | 1(Win) | true |
| jeaiii::to_text | 611.071 | 0.639787 | 12.932ms | 2151 | 48 | 22148.5 | 3357.5 | 1.64694 | 8.37731 | 12.3313 | 2.13618 | 0.165837 | 0.123722 | 0.0719031 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1999.53 | 0.968167 | 21.1339ms | 21468 | 30 | 294820 | 10239.2 | 2.24387 | 2.53939 | 11.6567 | 0.933755 | 0.000102477 | 0.123698 | 0.105556 | 1(Win) | true |
| jeaiii::to_text | 648.355 | 0.811384 | 46.8856ms | 21468 | 30 | 1.96942e+06 | 31577.8 | 0.408946 | 7.79685 | 12.242 | 2.12449 | 0.150915 | 0.124128 | 0.0696364 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2005.69 | 0.501192 | 134.025ms | 214827 | 30 | 7.86281e+06 | 102147 | 0.598311 | 2.51851 | 11.6384 | 0.931197 | 1.10166e-05 | 0.124203 | 0.106034 | 1(Win) | true |
| jeaiii::to_text | 648.279 | 0.872869 | 389.992ms | 214827 | 30 | 2.28283e+08 | 316029 | 0.250731 | 7.78665 | 12.2256 | 2.12041 | 0.152048 | 0.124222 | 0.0703528 | 2(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2006.36 | 3.3071 | 8.93762ms | 257 | 48 | 784.041 | 122.208 | 1.89689 | 3.39349 | 8.33125 | 0.567863 | 0.00777895 | 0.0585852 | 0.0302245 | 1(Win) | true |
| jeaiii::to_text | 660.047 | 1.31358 | 9.26219ms | 257 | 48 | 1142.94 | 371.479 | 0.166846 | 8.48732 | 10.3059 | 1.26457 | 0.185884 | 0.10218 | 0.0477271 | 2(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2297.51 | 1.3758 | 10.2031ms | 2568 | 30 | 6450.3 | 1065.8 | 0.102532 | 2.28345 | 7.49406 | 0.407379 | 0.000778927 | 0.100897 | 0.091537 | 1(Win) | true |
| jeaiii::to_text | 717.344 | 0.574032 | 13.0581ms | 2570 | 30 | 11541.2 | 3416.87 | 1.05121 | 7.08386 | 9.45146 | 1.10049 | 0.181949 | 0.103497 | 0.0569491 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2267.08 | 0.650014 | 22.0191ms | 25700 | 30 | 148146 | 10810.9 | 0.0156502 | 2.23909 | 7.40249 | 0.390899 | 7.78218e-05 | 0.103516 | 0.0911722 | 1(Win) | true |
| jeaiii::to_text | 690.149 | 0.638393 | 51.3349ms | 25719 | 30 | 1.54425e+06 | 35539.4 | 0.422437 | 7.3111 | 9.36249 | 1.08199 | 0.178798 | 0.103747 | 0.0556736 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2223.37 | 0.282329 | 141.272ms | 256999 | 48 | 4.64933e+06 | 110235 | 0.0526388 | 2.27005 | 7.39398 | 0.389287 | 1.19164e-05 | 0.1038 | 0.0903373 | 1(Win) | true |
| jeaiii::to_text | 730.757 | 0.303898 | 409.75ms | 256996 | 30 | 3.11663e+07 | 335393 | 0.0530712 | 6.90976 | 9.35714 | 1.08268 | 0.180751 | 0.103865 | 0.0576103 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 749.565 | 1.00564 | 9.63002ms | 515 | 30 | 1300.04 | 654.6 | 0.833207 | 7.15743 | 6.88805 | 1.28325 | 0.169096 | 0.0827988 | 0.0391966 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 728.681 | 1.42103 | 9.60583ms | 515 | 30 | 2753.91 | 674.233 | 0.0345952 | 7.36597 | 8.36519 | 0.989906 | 0.174895 | 0.0815917 | 0.041087 | 1(Tie) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 821.468 | 0.284195 | 16.1248ms | 5161 | 48 | 13915.9 | 5991.27 | 0.255759 | 6.19887 | 7.91784 | 0.901705 | 0.164573 | 0.0790589 | 0.0437924 | 1(Win) | true |
| vn (unchecked core) | 803.99 | 0.457919 | 16.4246ms | 5167 | 30 | 23628.5 | 6128.7 | 0.303788 | 6.33076 | 6.44444 | 1.19665 | 0.157816 | 0.0791856 | 0.0429217 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 820.515 | 0.281932 | 81.8331ms | 51591 | 48 | 1.37186e+06 | 59963.8 | 0.0940793 | 6.15658 | 7.87451 | 0.894034 | 0.162811 | 0.0791151 | 0.040982 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 816.697 | 0.410292 | 81.6474ms | 51630 | 30 | 1.83564e+06 | 60289.3 | 0.348578 | 6.18424 | 6.40638 | 1.18928 | 0.157828 | 0.0792293 | 0.0414805 | 1(Tie) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 808.916 | 0.0933733 | 738.936ms | 516103 | 48 | 1.54936e+07 | 608461 | 0.093412 | 6.25066 | 6.40212 | 1.18908 | 0.158068 | 0.0793053 | 0.0421661 | 1(Win) | true |
| jeaiii::to_text | 803.323 | 0.159973 | 746.048ms | 516093 | 30 | 2.88197e+07 | 612686 | 0.295005 | 6.31098 | 7.86898 | 0.892866 | 0.162858 | 0.0792014 | 0.0419173 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1424.14 | 1.44996 | 9.45254ms | 566 | 30 | 905.651 | 378.933 | 2.47211 | 3.94239 | 6.29559 | 1.19286 | 0.0610862 | 0.0666824 | 0.0434731 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1367.82 | 1.75343 | 9.29406ms | 566 | 30 | 1435.71 | 394.533 | 3.1721 | 4.05885 | 8.05679 | 0.898975 | 0.0676249 | 0.0669769 | 0.0403511 | -(Tie) | false |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1581.51 | 0.511107 | 13.1608ms | 5665 | 30 | 9145.47 | 3416.1 | 0.150495 | 3.23536 | 7.65469 | 0.820778 | 0.0599761 | 0.0719384 | 0.0495437 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1580.14 | 0.536419 | 13.1818ms | 5665 | 30 | 10091.2 | 3419.07 | 0.0204776 | 3.23846 | 5.90506 | 1.11566 | 0.0563045 | 0.0719325 | 0.0477314 | 1(Tie) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1602.59 | 0.361121 | 49.8936ms | 56606 | 30 | 443923 | 33685.3 | 0.189042 | 3.15945 | 7.61983 | 0.814744 | 0.060716 | 0.072014 | 0.0455646 | 1(Win) | true |
| vn (unchecked core) | 1566.83 | 0.438297 | 50.681ms | 56606 | 30 | 684132 | 34454.1 | 0.281994 | 3.23135 | 5.86799 | 1.10916 | 0.0599175 | 0.0720905 | 0.0449639 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1569.09 | 0.22007 | 423.252ms | 566103 | 48 | 2.75207e+07 | 344071 | 0.0436311 | 3.21957 | 7.61533 | 0.813979 | 0.0603449 | 0.0722243 | 0.0457979 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1556.21 | 0.379639 | 428.46ms | 566100 | 30 | 5.20372e+07 | 346917 | 0.0602284 | 3.24383 | 5.86362 | 1.1084 | 0.0606176 | 0.072256 | 0.0452621 | 1(Tie) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1139.52 | 1.30942 | 9.27904ms | 465 | 48 | 1248.97 | 389.562 | 0.206003 | 4.90176 | 8.71732 | 1.09269 | 0.0831133 | 0.0807412 | 0.0586313 | 1(Win) | true |
| vn (unchecked core) | 846.528 | 1.70169 | 12.53ms | 465 | 48 | 3822.24 | 524.396 | 1.30643 | 6.64262 | 7.58546 | 1.38983 | 0.0777425 | 0.0875442 | 0.0652553 | 2(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1357.69 | 0.592652 | 12.7952ms | 4662 | 30 | 11300.6 | 3274.83 | 0.905263 | 3.84036 | 8.22991 | 0.997476 | 0.074886 | 0.0872907 | 0.0577839 | 1(Win) | true |
| vn (unchecked core) | 1330.3 | 0.702475 | 12.8055ms | 4659 | 30 | 16513.6 | 3339.87 | 0.0239473 | 3.92018 | 7.10826 | 1.29777 | 0.0749472 | 0.0872035 | 0.0629127 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1350.79 | 0.815906 | 48.4913ms | 46602 | 30 | 2.16186e+06 | 32901.3 | 0.0894807 | 3.73496 | 8.18285 | 0.989941 | 0.0740441 | 0.0876081 | 0.0551506 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1334.07 | 0.424853 | 49.0594ms | 46625 | 48 | 962515 | 33330.7 | 0.110217 | 3.79178 | 7.05978 | 1.28769 | 0.0736552 | 0.0876278 | 0.0551362 | 1(Tie) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1393.47 | 0.186797 | 397.486ms | 466111 | 30 | 1.06524e+07 | 319002 | 0.126089 | 3.68476 | 7.05537 | 1.28716 | 0.0683074 | 0.0878794 | 0.0566973 | 1(Win) | true |
| jeaiii::to_text | 1312.98 | 0.36799 | 416.401ms | 466078 | 30 | 4.65582e+07 | 338533 | 0.261469 | 3.84962 | 8.17689 | 0.988717 | 0.0737668 | 0.0876933 | 0.055449 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1899.65 | 1.83835 | 9.08407ms | 483 | 48 | 955.248 | 242.667 | 0.99889 | 3.12917 | 7.27187 | 0.779372 | 0.041936 | 0.0687872 | 0.047539 | 1(Win) | true |
| vn (unchecked core) | 1788.92 | 1.73619 | 9.12548ms | 483 | 48 | 960.773 | 257.688 | 0.211372 | 3.32747 | 6.50651 | 1.1315 | 0.0362038 | 0.0736143 | 0.0450823 | 2(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 2139.61 | 1.05911 | 11.5315ms | 4831 | 30 | 15600.2 | 2153.1 | 0.986721 | 2.45429 | 6.81847 | 0.693776 | 0.0354272 | 0.0827646 | 0.0689429 | 1(Win) | true |
| vn (unchecked core) | 1996.73 | 0.752651 | 11.6319ms | 4831 | 30 | 9046.21 | 2307.17 | 0.00632048 | 2.57795 | 6.04529 | 1.0447 | 0.0329706 | 0.0839446 | 0.0654996 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2279.5 | 0.398773 | 33.6387ms | 48294 | 30 | 194752 | 20204.8 | 0.591879 | 2.26462 | 6.00055 | 1.03622 | 0.0324257 | 0.084412 | 0.0664471 | 1(Win) | true |
| jeaiii::to_text | 2225.96 | 0.893398 | 34.0489ms | 48312 | 30 | 1.02587e+06 | 20698.6 | 0.0197036 | 2.31329 | 6.77228 | 0.684543 | 0.03474 | 0.0844575 | 0.0656997 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 2191.23 | 0.228567 | 263.99ms | 483046 | 48 | 1.10833e+07 | 210233 | 0.0170931 | 2.33755 | 5.99555 | 1.0351 | 0.032793 | 0.0847845 | 0.0664374 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 2178.52 | 0.289608 | 264.967ms | 483040 | 30 | 1.12508e+07 | 211456 | 0.0785282 | 2.33049 | 6.7687 | 0.684044 | 0.0355454 | 0.0846707 | 0.066231 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1264.24 | 1.00331 | 9.68399ms | 997 | 30 | 1706.55 | 751.733 | 0.0976476 | 4.22498 | 4.69441 | 0.772478 | 0.105031 | 0.0684038 | 0.0396374 | 1(Win) | true |
| jeaiii::to_text | 1166.59 | 1.15994 | 9.73624ms | 997 | 30 | 2683.48 | 815.367 | 1.28982 | 4.62429 | 6.62249 | 0.848205 | 0.101664 | 0.0685783 | 0.0384667 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1292.42 | 0.241525 | 17.913ms | 9984 | 48 | 15197.8 | 7367.29 | 0.198345 | 3.93502 | 4.46613 | 0.728899 | 0.100059 | 0.0693163 | 0.0412133 | 1(Win) | true |
| jeaiii::to_text | 1215.98 | 0.299716 | 18.3899ms | 9988 | 30 | 16535.1 | 7833.1 | 0.328713 | 4.17969 | 6.39262 | 0.805602 | 0.0998875 | 0.0692327 | 0.039943 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1314.41 | 0.233102 | 95.7654ms | 99823 | 30 | 855089 | 72426.7 | 0.143703 | 3.8444 | 4.4448 | 0.72489 | 0.1004 | 0.0692171 | 0.0385894 | 1(Win) | true |
| jeaiii::to_text | 1210.42 | 0.3381 | 103.78ms | 99823 | 30 | 2.12128e+06 | 78648.9 | 0.704672 | 4.20479 | 6.37263 | 0.801883 | 0.0998421 | 0.0691827 | 0.0379005 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1323.52 | 0.13416 | 874.934ms | 998240 | 48 | 4.46982e+07 | 719288 | 0.0492664 | 3.84579 | 4.44253 | 0.724632 | 0.100117 | 0.0693241 | 0.0396322 | 1(Win) | true |
| jeaiii::to_text | 1213.49 | 0.213966 | 967.557ms | 998296 | 30 | 8.4539e+07 | 784554 | 0.0665073 | 4.19745 | 6.3706 | 0.801412 | 0.100596 | 0.0692442 | 0.0385995 | 2(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2002.81 | 1.45837 | 9.436ms | 1050 | 30 | 1594.07 | 499.833 | 0.609797 | 2.73596 | 4.44737 | 0.7552 | 0.0517926 | 0.0627798 | 0.04071 | 1(Win) | true |
| jeaiii::to_text | 1707.96 | 0.934567 | 9.48522ms | 1048 | 48 | 1434.33 | 584.917 | 1.09069 | 3.16487 | 6.45257 | 0.807605 | 0.0517283 | 0.0635615 | 0.0387614 | 2(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1988.8 | 0.428652 | 14.9674ms | 10481 | 30 | 13924.2 | 5025.97 | 0.983014 | 2.56443 | 4.24049 | 0.716925 | 0.0476345 | 0.0658512 | 0.0448994 | 1(Win) | true |
| jeaiii::to_text | 1839.81 | 0.500402 | 15.5431ms | 10483 | 30 | 22182.7 | 5434.1 | 0.139662 | 2.76968 | 6.23304 | 0.767504 | 0.0484388 | 0.0658569 | 0.0421908 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2073.05 | 0.271584 | 66.6441ms | 104826 | 30 | 514574 | 48223.5 | 0.201491 | 2.43867 | 4.21841 | 0.712666 | 0.0494965 | 0.0659425 | 0.0438695 | 1(Win) | true |
| jeaiii::to_text | 1847.51 | 0.518299 | 74.0726ms | 104829 | 30 | 2.35979e+06 | 54112.3 | 0.701476 | 2.75684 | 6.21178 | 0.763585 | 0.0480082 | 0.0658827 | 0.0418128 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2051.81 | 0.154878 | 596.715ms | 1048286 | 30 | 1.70838e+07 | 487238 | 0.0344613 | 2.47139 | 4.2162 | 0.71222 | 0.0489095 | 0.0660062 | 0.0440748 | 1(Win) | true |
| jeaiii::to_text | 1854.11 | 0.170304 | 658.546ms | 1048275 | 30 | 2.52961e+07 | 539187 | 0.00165679 | 2.73847 | 6.20976 | 0.763203 | 0.0478839 | 0.0659662 | 0.0418396 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1859.01 | 1.3472 | 9.4454ms | 949 | 30 | 1289.41 | 486.633 | 0.0479255 | 2.94395 | 4.95319 | 0.787476 | 0.0558015 | 0.0686977 | 0.0432919 | 1(Win) | true |
| jeaiii::to_text | 1535.72 | 0.913517 | 9.52261ms | 947 | 30 | 866.075 | 588.167 | 0.893431 | 3.52252 | 6.82206 | 0.893222 | 0.0574365 | 0.0703174 | 0.0449074 | 2(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1926.72 | 0.54664 | 14.6384ms | 9481 | 30 | 19742.4 | 4692.87 | 0.230492 | 2.64814 | 4.72086 | 0.743273 | 0.0541151 | 0.0724253 | 0.0493828 | 1(Win) | true |
| jeaiii::to_text | 1664 | 0.505247 | 15.4919ms | 9482 | 30 | 22617.1 | 5434.43 | 0.106226 | 3.06145 | 6.57562 | 0.84854 | 0.0534547 | 0.0726451 | 0.0466982 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1948.1 | 0.342267 | 65.0807ms | 94820 | 48 | 1.21158e+06 | 46418.4 | 0.121381 | 2.59429 | 4.69547 | 0.738736 | 0.0537906 | 0.0728511 | 0.0487508 | 1(Win) | true |
| jeaiii::to_text | 1690.71 | 0.451417 | 73.7251ms | 94828 | 30 | 1.74906e+06 | 53489 | 0.275061 | 3.04348 | 6.55087 | 0.844123 | 0.0528134 | 0.0728234 | 0.0461079 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1940.55 | 0.18228 | 569.114ms | 948226 | 30 | 2.16457e+07 | 466001 | 0.0174029 | 2.61382 | 4.69268 | 0.738271 | 0.0533852 | 0.0729544 | 0.0499692 | 1(Win) | true |
| jeaiii::to_text | 1683.08 | 0.178581 | 657.099ms | 948274 | 30 | 2.76216e+07 | 537314 | 0.0777462 | 3.00907 | 6.54834 | 0.843687 | 0.0528995 | 0.0729034 | 0.0464959 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2652.27 | 1.34995 | 9.34306ms | 974 | 48 | 1073.09 | 350.25 | 2.11012 | 2.13002 | 4.13928 | 0.664214 | 0.026542 | 0.0646334 | 0.0481863 | 1(Win) | true |
| jeaiii::to_text | 2243.56 | 2.34205 | 9.30175ms | 973 | 30 | 2815.89 | 413.667 | 0.471178 | 2.46758 | 6.34537 | 0.76657 | 0.0273334 | 0.0638465 | 0.0544271 | 2(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2868.65 | 0.67194 | 12.8472ms | 9749 | 30 | 14228.2 | 3241.03 | 0.395933 | 1.78594 | 3.90976 | 0.620267 | 0.0238383 | 0.0703557 | 0.0576365 | 1(Win) | true |
| jeaiii::to_text | 2448.71 | 0.667133 | 13.5895ms | 9739 | 48 | 30734.3 | 3792.96 | 0.968007 | 2.08731 | 6.11128 | 0.723481 | 0.0248078 | 0.0701324 | 0.0536459 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2892.5 | 0.403087 | 47.9131ms | 97415 | 48 | 804531 | 32118.2 | 0.93244 | 1.7484 | 3.88944 | 0.616405 | 0.029048 | 0.0709619 | 0.0564478 | 1(Win) | true |
| jeaiii::to_text | 2477.04 | 0.328471 | 54.2116ms | 97411 | 30 | 455265 | 37503.7 | 0.68928 | 2.0441 | 6.08834 | 0.719078 | 0.0245048 | 0.0708655 | 0.0530078 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2957.88 | 0.258029 | 388.916ms | 974132 | 30 | 1.9703e+07 | 314078 | 0.0197232 | 1.71644 | 3.88724 | 0.615982 | 0.0245955 | 0.0710411 | 0.0581188 | 1(Win) | true |
| jeaiii::to_text | 2449.13 | 0.158885 | 465.745ms | 974171 | 48 | 1.74363e+07 | 379335 | 0.0994075 | 2.0613 | 6.08536 | 0.718607 | 0.0244782 | 0.0709775 | 0.0530331 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2547.35 | 1.17594 | 9.77876ms | 1938 | 30 | 2183.77 | 725.533 | 1.2835 | 2.09596 | 3.7318 | 0.445604 | 0.0322675 | 0.0500869 | 0.0340219 | 1(Win) | true |
| jeaiii::to_text | 2279 | 1.19425 | 9.80434ms | 1938 | 30 | 2813.96 | 810.967 | 1.03323 | 2.33291 | 5.68016 | 0.395191 | 0.0336607 | 0.0508953 | 0.041418 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2668.43 | 0.449745 | 17.3392ms | 19383 | 30 | 29120.8 | 6927.47 | 0.789723 | 1.9064 | 3.61733 | 0.423545 | 0.0322183 | 0.0518261 | 0.0339208 | 1(Win) | true |
| jeaiii::to_text | 2488.61 | 0.335586 | 17.8858ms | 19383 | 30 | 18641.3 | 7428.03 | 0.585924 | 2.08136 | 5.56341 | 0.372747 | 0.032306 | 0.0517453 | 0.0327204 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2705.73 | 0.250344 | 91.2674ms | 193799 | 30 | 877263 | 68307.4 | 0.30811 | 1.87255 | 3.60617 | 0.421481 | 0.0320324 | 0.0518724 | 0.0335625 | 1(Win) | true |
| jeaiii::to_text | 2456.18 | 0.329762 | 99.1766ms | 193793 | 48 | 2.95527e+06 | 75244.8 | 0.428748 | 2.06497 | 5.55232 | 0.37047 | 0.0320405 | 0.0518808 | 0.0319708 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2680.87 | 0.184332 | 839.558ms | 1937957 | 30 | 4.84465e+07 | 689397 | 0.0581377 | 1.90021 | 3.60494 | 0.421229 | 0.0320143 | 0.0519203 | 0.033901 | 1(Win) | true |
| jeaiii::to_text | 2460.18 | 0.145452 | 911.54ms | 1937957 | 30 | 3.58193e+07 | 751237 | 0.178784 | 2.06064 | 5.55096 | 0.370304 | 0.0320522 | 0.0518767 | 0.032435 | 2(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4131.46 | 2.18237 | 9.42589ms | 1988 | 30 | 3008.07 | 458.833 | 1.36859 | 1.33195 | 3.71665 | 0.437282 | 0.00754628 | 0.0469882 | 0.0375302 | 1(Win) | true |
| jeaiii::to_text | 3499.23 | 1.52052 | 9.48392ms | 1988 | 30 | 2035.51 | 541.733 | 0.684429 | 1.55306 | 5.61214 | 0.384341 | 0.00739536 | 0.0479776 | 0.0358197 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 3699.18 | 0.813657 | 15.0879ms | 19881 | 30 | 52176 | 5125.47 | 1.18383 | 1.38387 | 5.49937 | 0.363437 | 0.00614993 | 0.0502825 | 0.0378469 | 1(Win) | true |
| vn (unchecked core) | 2744.66 | 0.489818 | 21.3496ms | 19878 | 48 | 54939.1 | 6906.94 | 0.944183 | 1.8926 | 3.60532 | 0.415927 | 0.00643296 | 0.0504838 | 0.0347504 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4502.24 | 0.574452 | 60.3878ms | 198796 | 48 | 2.8087e+06 | 42109.3 | 1.12774 | 1.12823 | 3.59351 | 0.413563 | 0.00623357 | 0.0505361 | 0.0406818 | 1(Win) | true |
| jeaiii::to_text | 3739.04 | 0.585689 | 70.1199ms | 198788 | 30 | 2.64554e+06 | 50702.5 | 0.0646013 | 1.37608 | 5.48784 | 0.361308 | 0.00609176 | 0.0505497 | 0.0371082 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4405.39 | 0.261042 | 531.659ms | 1987935 | 30 | 3.78599e+07 | 430346 | 0.42754 | 1.16493 | 3.59249 | 0.413374 | 0.00627396 | 0.0506053 | 0.0410176 | 1(Win) | true |
| jeaiii::to_text | 3683.3 | 0.205895 | 630.548ms | 1987935 | 30 | 3.36931e+07 | 514712 | 0.0637785 | 1.38928 | 5.48681 | 0.360969 | 0.00608707 | 0.0505656 | 0.0374649 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4028.12 | 2.27275 | 9.4188ms | 1888 | 30 | 3096.28 | 447 | 1.19363 | 1.37162 | 3.74773 | 0.454353 | 0.00778588 | 0.0493988 | 0.0397592 | 1(Win) | true |
| jeaiii::to_text | 3278.3 | 1.61565 | 9.49874ms | 1887 | 48 | 3776.98 | 549.042 | 0.0379593 | 1.65889 | 5.75078 | 0.404899 | 0.00840021 | 0.050622 | 0.0385791 | 2(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4281.66 | 0.844485 | 14.0486ms | 18879 | 30 | 37828.3 | 4204.9 | 0.749803 | 1.21128 | 3.63141 | 0.43209 | 0.00680138 | 0.0529949 | 0.0439035 | 1(Win) | true |
| jeaiii::to_text | 3549.77 | 0.746335 | 15.0644ms | 18879 | 30 | 42985.7 | 5071.87 | 0.0216836 | 1.43575 | 5.6311 | 0.38286 | 0.00660715 | 0.0529967 | 0.0403068 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4304.77 | 0.963603 | 59.173ms | 188797 | 30 | 4.87312e+06 | 41825.8 | 0.438309 | 1.19419 | 3.6192 | 0.429725 | 0.00631049 | 0.0532057 | 0.0438632 | 1(Win) | true |
| jeaiii::to_text | 3652.42 | 0.357127 | 68.6638ms | 188797 | 30 | 929807 | 49296.2 | 0.822871 | 1.41082 | 5.61968 | 0.380184 | 0.00635463 | 0.0531747 | 0.0400676 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4318.41 | 0.263941 | 509.774ms | 1887956 | 30 | 3.63305e+07 | 416935 | 0.0373739 | 1.1688 | 3.61808 | 0.42951 | 0.00641629 | 0.0532692 | 0.0436023 | 1(Win) | true |
| jeaiii::to_text | 3599.79 | 0.191544 | 610.325ms | 1887964 | 48 | 4.40566e+07 | 500169 | 0.081302 | 1.42755 | 5.61851 | 0.380076 | 0.00634034 | 0.0532489 | 0.0403046 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 3041.6 | 1.74212 | 9.57245ms | 1942 | 30 | 3374.25 | 608.767 | 3.23726 | 1.7811 | 3.50392 | 0.436246 | 0.0281216 | 0.055299 | 0.0464745 | -(Win) | false |
| jeaiii::to_text | 2425.54 | 1.19608 | 9.7551ms | 1939 | 30 | 2495.09 | 762.467 | 1.57194 | 2.19288 | 5.63828 | 0.387284 | 0.0289461 | 0.0562593 | 0.0388126 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3333.83 | 0.450164 | 15.691ms | 19394 | 30 | 18711.1 | 5547.77 | 0.794337 | 1.55702 | 3.39677 | 0.414928 | 0.0274883 | 0.0581769 | 0.0461816 | 1(Win) | true |
| jeaiii::to_text | 2642.6 | 0.489689 | 17.472ms | 19394 | 30 | 35238.9 | 6998.9 | 0.00142878 | 1.96111 | 5.52606 | 0.365178 | 0.0275054 | 0.0582628 | 0.0405922 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3419.27 | 0.460846 | 74.3124ms | 193981 | 30 | 1.86503e+06 | 54103.6 | 0.176207 | 1.47718 | 3.38367 | 0.412654 | 0.0273877 | 0.0583224 | 0.0451515 | 1(Win) | true |
| jeaiii::to_text | 2616.84 | 0.363106 | 93.9071ms | 193988 | 48 | 3.16304e+06 | 70696.5 | 0.0789736 | 1.94568 | 5.51275 | 0.36281 | 0.027415 | 0.0582499 | 0.0395218 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3257.47 | 0.130686 | 694.752ms | 1939811 | 48 | 2.64399e+07 | 567910 | 0.115127 | 1.54977 | 3.38271 | 0.412436 | 0.027214 | 0.0583516 | 0.0444748 | 1(Win) | true |
| jeaiii::to_text | 2605.73 | 0.122268 | 863.692ms | 1939733 | 30 | 2.26033e+07 | 709924 | 0.0519492 | 1.9396 | 5.51198 | 0.362621 | 0.0273123 | 0.0582941 | 0.0397805 | 2(Loss) | true |
