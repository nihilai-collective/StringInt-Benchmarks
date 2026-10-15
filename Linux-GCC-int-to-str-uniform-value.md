# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-38-generic using the GCC 16.2.1 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 647.378 | 1.81952 | 9.27771ms | 265 | 30 | 1512.46 | 390.233 | 0.516233 | 8.73311 | 10.6825 | 0.921102 | 0.193784 | 0.0990311 | 0.0518435 | 1(Win) | true |
| jeaiii::to_text | 417.269 | 0.896448 | 18.1262ms | 266 | 48 | 1426.13 | 608.042 | 0.375557 | 12.9392 | 13.2827 | 2.33759 | 0.309005 | 0.105403 | 0.0399374 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 690.441 | 0.502756 | 13.2817ms | 2649 | 30 | 10150.4 | 3658.67 | 0.234507 | 7.41079 | 9.90061 | 0.77167 | 0.191546 | 0.100234 | 0.0558366 | 1(Win) | true |
| jeaiii::to_text | 414.251 | 1.02306 | 16.2237ms | 2641 | 30 | 116058 | 6079.63 | 0.630496 | 12.2181 | 12.5827 | 2.20534 | 0.319419 | 0.101874 | 0.0420196 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 705.038 | 0.360853 | 52.3013ms | 26469 | 30 | 500756 | 35803.2 | 0.0218159 | 7.16923 | 9.82786 | 0.757271 | 0.188961 | 0.100819 | 0.0544088 | 1(Win) | true |
| jeaiii::to_text | 444.516 | 0.341563 | 77.6297ms | 26469 | 30 | 1.12864e+06 | 56786.6 | 0.780236 | 11.3964 | 12.482 | 2.18391 | 0.304281 | 0.100871 | 0.0442018 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 693.346 | 0.111529 | 447.083ms | 264631 | 30 | 4.94397e+06 | 363991 | 0.108197 | 7.27863 | 9.82242 | 0.755938 | 0.188989 | 0.100986 | 0.054595 | 1(Win) | true |
| jeaiii::to_text | 436.551 | 0.217401 | 705.932ms | 264631 | 30 | 4.73864e+07 | 578103 | 0.153094 | 11.5682 | 12.4761 | 2.18326 | 0.309751 | 0.100908 | 0.0444719 | 2(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2530.07 | 2.98563 | 8.96339ms | 315 | 48 | 602.73 | 118.688 | 3.71759 | 2.75116 | 9.61493 | 0.774911 | 0.00846897 | 0.0481673 | 0.0215694 | -(Win) | false |
| jeaiii::to_text | 843.98 | 1.32867 | 9.19071ms | 313 | 30 | 664.189 | 354.133 | 0.950209 | 6.73155 | 11.7326 | 1.98585 | 0.115507 | 0.0822165 | 0.039247 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2715.23 | 1.97092 | 10.2526ms | 3143 | 30 | 14202.7 | 1103.97 | 0.184524 | 1.93687 | 8.97612 | 0.650306 | 0.00207861 | 0.0818186 | 0.0702696 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 742.289 | 0.63237 | 13.0596ms | 3141 | 48 | 31257.6 | 4035.4 | 3.7608 | 6.88648 | 11.0571 | 1.854 | 0.140556 | 0.0849733 | 0.0483202 | -(Loss) | false |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2705.74 | 0.54411 | 22.4318ms | 31455 | 30 | 109171 | 11086.8 | 0.196843 | 1.84214 | 8.90386 | 0.637223 | 0.00133099 | 0.0846367 | 0.0722614 | 1(Win) | true |
| jeaiii::to_text | 976.243 | 0.567481 | 46.3301ms | 31432 | 30 | 910845 | 30705.1 | 0.278019 | 5.27267 | 10.9849 | 1.83964 | 0.101209 | 0.0849259 | 0.0487024 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2712.96 | 0.378918 | 143.202ms | 314472 | 48 | 8.42187e+06 | 110545 | 0.334147 | 1.86036 | 8.89963 | 0.636127 | 0.00124329 | 0.0848935 | 0.0716856 | 1(Win) | true |
| jeaiii::to_text | 947.998 | 0.272652 | 391.908ms | 314472 | 48 | 3.57114e+07 | 316355 | 0.246946 | 5.32146 | 10.9741 | 1.83728 | 0.101392 | 0.0848696 | 0.0479739 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1935.55 | 3.81411 | 9.04246ms | 215 | 48 | 779.964 | 105.688 | 4.87174 | 3.69444 | 12.2564 | 1.13753 | 0.00932401 | 0.0626457 | 0.0259324 | -(Win) | false |
| jeaiii::to_text | 593.044 | 1.3657 | 9.22978ms | 215 | 48 | 1065.21 | 344.938 | 0.066393 | 9.52613 | 15.7575 | 2.89986 | 0.148796 | 0.119561 | 0.0559441 | 2(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2141.77 | 1.56138 | 10.1067ms | 2148 | 48 | 10708.8 | 956.625 | 0.527711 | 2.468 | 11.2786 | 0.951408 | 0.000950321 | 0.117869 | 0.101258 | 1(Win) | true |
| jeaiii::to_text | 655.984 | 0.665176 | 12.6934ms | 2148 | 48 | 20718.4 | 3123.35 | 0.160227 | 7.81609 | 14.7787 | 2.70962 | 0.149346 | 0.12423 | 0.0765106 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2018.66 | 1.32203 | 21.053ms | 21489 | 30 | 540386 | 10152 | 0.767604 | 2.44652 | 11.1793 | 0.932762 | 0.000111686 | 0.123847 | 0.105534 | 1(Win) | true |
| jeaiii::to_text | 662.482 | 0.341147 | 46.5108ms | 21485 | 48 | 534375 | 30928.7 | 0.192059 | 7.64144 | 14.6811 | 2.69125 | 0.147804 | 0.124218 | 0.0698869 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1991.68 | 0.428008 | 132.941ms | 214886 | 48 | 9.30939e+06 | 102894 | 0.25402 | 2.53803 | 11.1698 | 0.930932 | 1.1828e-05 | 0.124244 | 0.103943 | 1(Win) | true |
| jeaiii::to_text | 640.13 | 0.426115 | 395.21ms | 214819 | 30 | 5.57934e+07 | 320040 | 0.0700398 | 7.89426 | 14.6734 | 2.68969 | 0.159591 | 0.124232 | 0.0697502 | 2(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2471.41 | 4.81248 | 8.79753ms | 257 | 30 | 682.809 | 99.1333 | 1.31895 | 2.96224 | 9.06578 | 0.560529 | 0.00778513 | 0.0478786 | 0.0169975 | 1(Win) | true |
| jeaiii::to_text | 608.643 | 1.40485 | 9.26266ms | 257 | 30 | 959.361 | 402.533 | 1.22386 | 9.174 | 13.1032 | 1.88322 | 0.193071 | 0.103412 | 0.0468405 | 2(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2577.36 | 1.82253 | 10.1039ms | 2572 | 30 | 9022.94 | 951.567 | 0.0385181 | 2.05154 | 8.25574 | 0.405962 | 0.000777706 | 0.0979002 | 0.0853791 | 1(Win) | true |
| jeaiii::to_text | 656.455 | 0.930045 | 13.4155ms | 2570 | 30 | 36175 | 3733.7 | 0.20307 | 7.79515 | 12.2925 | 1.72514 | 0.177557 | 0.104161 | 0.0621255 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2172.8 | 1.7776 | 21.8929ms | 25708 | 30 | 1.20697e+06 | 11283.8 | 1.84579 | 2.33637 | 8.17755 | 0.390691 | 9.85415e-05 | 0.103376 | 0.089333 | 1(Win) | true |
| jeaiii::to_text | 656.208 | 0.31649 | 54.1895ms | 25713 | 48 | 671395 | 37368.7 | 0.00653441 | 7.7048 | 12.9838 | 1.70916 | 0.176136 | 0.103817 | 0.0560235 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2429.14 | 0.455485 | 130.854ms | 257009 | 48 | 1.01387e+07 | 100901 | 0.470143 | 2.08002 | 8.17181 | 0.389263 | 1.4753e-05 | 0.103833 | 0.0867148 | 1(Win) | true |
| jeaiii::to_text | 642.168 | 0.140877 | 467.024ms | 257019 | 30 | 8.67429e+06 | 381696 | 0.311459 | 7.85719 | 12.9801 | 1.70846 | 0.176736 | 0.103968 | 0.0562657 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 782.223 | 1.0117 | 9.60253ms | 515 | 30 | 1208.81 | 627.433 | 0.0849302 | 6.91619 | 6.69758 | 1.31589 | 0.170736 | 0.0794741 | 0.0478658 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 761.897 | 1.40973 | 9.60703ms | 516 | 30 | 2490.36 | 646.3 | 0.0670933 | 7.102 | 8.49923 | 1.30529 | 0.172111 | 0.0818593 | 0.0535184 | 1(Tie) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 856.9 | 0.334625 | 15.8988ms | 5150 | 30 | 11036.1 | 5731.77 | 0.208266 | 5.9473 | 6.30656 | 1.24177 | 0.160915 | 0.0793572 | 0.0440571 | 1(Win) | true |
| jeaiii::to_text | 815.413 | 0.314876 | 16.1968ms | 5156 | 48 | 17304.1 | 6029.96 | 0.0592522 | 6.24611 | 8.10376 | 1.23104 | 0.162901 | 0.0791107 | 0.0432204 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 839.934 | 0.208402 | 79.7917ms | 51608 | 30 | 447377 | 58596.7 | 0.0609873 | 6.02673 | 6.25557 | 1.23039 | 0.158584 | 0.0791703 | 0.0425204 | 1(Win) | true |
| jeaiii::to_text | 793.634 | 0.210205 | 83.9548ms | 51620 | 48 | 816058 | 62029.2 | 0.0879523 | 6.36937 | 8.4442 | 1.22175 | 0.162697 | 0.0791346 | 0.0409343 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 825.562 | 0.11606 | 726.1ms | 516099 | 30 | 1.43631e+07 | 596188 | 0.00931946 | 6.11688 | 6.25236 | 1.22984 | 0.158225 | 0.0793168 | 0.0418141 | 1(Win) | true |
| jeaiii::to_text | 793.699 | 0.117339 | 756.852ms | 516112 | 48 | 2.54156e+07 | 620138 | 0.00742296 | 6.35904 | 8.441 | 1.22115 | 0.16261 | 0.0792723 | 0.0415806 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1584.48 | 2.1729 | 9.15802ms | 566 | 30 | 1645.77 | 340.867 | 3.08468 | 3.61883 | 6.22278 | 1.13714 | 0.0608593 | 0.0626251 | 0.0434373 | -(Win) | false |
| jeaiii::to_text | 1414.98 | 2.07778 | 9.24217ms | 566 | 30 | 1886.98 | 381.7 | 0.287356 | 3.95644 | 8.01548 | 1.19005 | 0.0659211 | 0.0618011 | 0.0429076 | 2(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1748.92 | 0.515526 | 12.7213ms | 5659 | 30 | 7592.69 | 3085.93 | 0.0201222 | 2.93266 | 5.85457 | 1.06784 | 0.0588066 | 0.0720357 | 0.0484341 | 1(Win) | true |
| jeaiii::to_text | 1460.34 | 0.762014 | 13.4281ms | 5658 | 30 | 23780.1 | 3694.73 | 1.08515 | 3.43699 | 7.65092 | 1.12197 | 0.0617274 | 0.0718553 | 0.0479055 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1653.54 | 0.293966 | 48.2138ms | 56600 | 48 | 442010 | 32643.6 | 0.438064 | 3.05738 | 5.8189 | 1.06071 | 0.058874 | 0.0722211 | 0.0456606 | 1(Win) | true |
| jeaiii::to_text | 1459.01 | 0.514096 | 53.6191ms | 56613 | 30 | 1.08574e+06 | 37004.7 | 0.205407 | 3.46521 | 7.96399 | 1.11385 | 0.06053 | 0.0720839 | 0.0442651 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1718.89 | 0.266854 | 387.249ms | 566123 | 30 | 2.10764e+07 | 314097 | 0.109294 | 2.94061 | 5.81512 | 1.05978 | 0.0564529 | 0.0723218 | 0.0474302 | 1(Win) | true |
| jeaiii::to_text | 1487.28 | 0.159304 | 446.48ms | 566123 | 30 | 1.00325e+07 | 363009 | 0.242444 | 3.40101 | 7.96035 | 1.11325 | 0.0606436 | 0.0722398 | 0.0447178 | 2(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1186.23 | 1.6783 | 9.29276ms | 466 | 30 | 1183.65 | 374.267 | 0.664639 | 4.73328 | 7.28999 | 1.53279 | 0.0738221 | 0.0874266 | 0.0511242 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1168.44 | 1.68553 | 9.27971ms | 466 | 30 | 1230.52 | 379.967 | 2.41689 | 4.81784 | 9.10339 | 1.44752 | 0.0814836 | 0.0830589 | 0.0598597 | 1(Tie) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1281.13 | 0.576291 | 13.1226ms | 4661 | 30 | 11995.8 | 3469.87 | 0.1925 | 3.99667 | 8.64533 | 1.36073 | 0.075165 | 0.0870787 | 0.0582599 | 1(Win) | true |
| vn (unchecked core) | 1243.2 | 0.709872 | 13.2225ms | 4661 | 30 | 19329.1 | 3575.73 | 0.242027 | 4.11813 | 6.83653 | 1.44604 | 0.0850621 | 0.0872289 | 0.0580453 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1315.61 | 0.419523 | 49.667ms | 46612 | 48 | 964491 | 33788.8 | 0.00484652 | 3.83882 | 6.78744 | 1.43717 | 0.0716053 | 0.0875399 | 0.0550194 | 1(Win) | true |
| jeaiii::to_text | 1259.85 | 0.478409 | 51.5845ms | 46612 | 48 | 1.36775e+06 | 35284.4 | 0.35688 | 4.01982 | 9.02892 | 1.35287 | 0.0737877 | 0.0875493 | 0.0544871 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1256.03 | 0.231501 | 435.82ms | 466102 | 30 | 2.01368e+07 | 353900 | 0.0500738 | 4.05051 | 9.02479 | 1.35216 | 0.0746741 | 0.0877584 | 0.055848 | 1(Win) | true |
| vn (unchecked core) | 1187.55 | 0.279626 | 459.518ms | 466094 | 48 | 5.25821e+07 | 374301 | 0.192817 | 4.25264 | 6.78258 | 1.43631 | 0.0802491 | 0.0877311 | 0.0532917 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1815.81 | 2.87693 | 9.10599ms | 482 | 30 | 1591.45 | 253.167 | 0.0986518 | 3.2441 | 6.67706 | 1.12855 | 0.040177 | 0.0705345 | 0.0518636 | 1(Win) | true |
| jeaiii::to_text | 1656.59 | 2.43432 | 9.14078ms | 482 | 30 | 1370.31 | 277.633 | 0.394642 | 3.54617 | 8.46627 | 1.16111 | 0.0442356 | 0.0757534 | 0.0512856 | 2(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2096.92 | 0.818356 | 11.5831ms | 4830 | 30 | 9696.46 | 2196.87 | 0.130319 | 2.46358 | 6.24952 | 1.04417 | 0.0338134 | 0.0835881 | 0.0667504 | 1(Win) | true |
| jeaiii::to_text | 1841.79 | 0.679736 | 11.9676ms | 4829 | 30 | 8666.74 | 2500.5 | 1.55124 | 2.79323 | 8.02624 | 1.07614 | 0.0381299 | 0.0838251 | 0.0602321 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2070.3 | 0.454874 | 35.6444ms | 48290 | 30 | 307156 | 22244.8 | 0.399284 | 2.44098 | 6.20684 | 1.03623 | 0.0386972 | 0.0845849 | 0.0637843 | 1(Win) | true |
| jeaiii::to_text | 1812.02 | 0.527552 | 39.817ms | 48307 | 48 | 863497 | 25424 | 0.845365 | 2.79221 | 8.395 | 1.06723 | 0.0366063 | 0.0844227 | 0.0580879 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2193.29 | 0.377323 | 262.748ms | 483034 | 30 | 1.88414e+07 | 210031 | 0.175456 | 2.31458 | 6.20259 | 1.03512 | 0.0333948 | 0.0846847 | 0.0665805 | 1(Win) | true |
| jeaiii::to_text | 1774.28 | 0.242087 | 322.186ms | 483088 | 30 | 1.18542e+07 | 259659 | 0.00399225 | 2.84651 | 8.39039 | 1.06632 | 0.0368942 | 0.084651 | 0.0593676 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1213.6 | 0.995893 | 9.81233ms | 997 | 30 | 1828.07 | 783.833 | 0.260084 | 4.39403 | 6.17274 | 0.846144 | 0.101791 | 0.0678385 | 0.0391993 | 1(Win) | true |
| vn (unchecked core) | 1154.76 | 0.838647 | 9.84712ms | 999 | 30 | 1436.34 | 825.067 | 0.459458 | 4.61269 | 4.66918 | 0.826432 | 0.102399 | 0.070368 | 0.0390044 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1258.08 | 0.31281 | 17.9916ms | 9987 | 30 | 16824.5 | 7570.6 | 0.208267 | 4.04388 | 5.95903 | 0.805439 | 0.10114 | 0.0690791 | 0.0394108 | 1(Win) | true |
| vn (unchecked core) | 1207.78 | 0.309682 | 18.5612ms | 9987 | 30 | 17892 | 7885.93 | 0.559458 | 4.21096 | 4.46099 | 0.785734 | 0.0994616 | 0.0690758 | 0.0393007 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1257.42 | 0.293638 | 101.436ms | 99842 | 30 | 1.48326e+06 | 75724.3 | 0.6218 | 4.08605 | 6.13849 | 0.801704 | 0.100971 | 0.0691757 | 0.038295 | 1(Win) | true |
| vn (unchecked core) | 1137.32 | 0.291929 | 109.876ms | 99842 | 30 | 1.79201e+06 | 83720.5 | 0.0677314 | 4.43536 | 4.61447 | 0.80875 | 0.0996444 | 0.0691867 | 0.0373011 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1247.92 | 0.166409 | 927.354ms | 998225 | 30 | 4.83457e+07 | 762856 | 0.0275293 | 4.05431 | 6.13745 | 0.801468 | 0.100163 | 0.069263 | 0.0388336 | 1(Win) | true |
| vn (unchecked core) | 1156.47 | 0.112121 | 999.924ms | 998225 | 30 | 2.55555e+07 | 823178 | 0.0513841 | 4.37267 | 4.61284 | 0.808306 | 0.100031 | 0.069292 | 0.0379919 | 2(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1772.7 | 1.63187 | 9.50964ms | 1047 | 30 | 2534.98 | 563.3 | 0.311912 | 3.06462 | 6.02353 | 0.806061 | 0.0515726 | 0.0647523 | 0.0394754 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1766.78 | 1.59763 | 9.47001ms | 1047 | 30 | 2447.55 | 565.367 | 0.301597 | 3.10174 | 4.59586 | 0.810642 | 0.0527656 | 0.064859 | 0.0404494 | 1(Tie) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1948 | 0.429034 | 15.45ms | 10486 | 30 | 14552.9 | 5133.6 | 0.765484 | 2.61961 | 5.81701 | 0.767118 | 0.0472281 | 0.0655763 | 0.0435597 | 1(Win) | true |
| vn (unchecked core) | 1923.37 | 0.393372 | 15.2708ms | 10485 | 48 | 20076.6 | 5199.02 | 0.236258 | 2.65387 | 4.39378 | 0.774216 | 0.0478364 | 0.0655992 | 0.0440037 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1896.99 | 0.273627 | 72.8752ms | 104830 | 30 | 623852 | 52701.2 | 0.414019 | 2.66491 | 5.98942 | 0.763562 | 0.0472318 | 0.0658465 | 0.0420898 | 1(Win) | true |
| vn (unchecked core) | 1870.15 | 0.61713 | 73.2556ms | 104822 | 30 | 3.26456e+06 | 53453.3 | 0.0435148 | 2.69672 | 4.5156 | 0.770108 | 0.0473654 | 0.0659054 | 0.0429449 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1916.31 | 0.184896 | 637.505ms | 1048253 | 30 | 2.7911e+07 | 521676 | 0.317974 | 2.66121 | 5.98769 | 0.763217 | 0.0474434 | 0.0659423 | 0.0437121 | 1(Win) | true |
| vn (unchecked core) | 1875.43 | 0.175414 | 648.817ms | 1048270 | 30 | 2.62298e+07 | 533055 | 0.226888 | 2.69091 | 4.5136 | 0.769768 | 0.0478315 | 0.0659557 | 0.0421047 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1636.57 | 1.86085 | 9.48751ms | 950 | 48 | 5088.69 | 553.312 | 0.171233 | 3.34206 | 6.32896 | 0.888869 | 0.0551375 | 0.0707374 | 0.0458126 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1633.01 | 1.21479 | 9.5706ms | 951 | 30 | 1364.49 | 555.167 | 0.707462 | 3.27 | 4.75027 | 0.840878 | 0.0534731 | 0.0709352 | 0.0456538 | 1(Tie) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1766.53 | 0.329228 | 15.1932ms | 9483 | 48 | 13635.8 | 5119.46 | 0.117174 | 2.88788 | 6.1163 | 0.848255 | 0.0528995 | 0.0724696 | 0.0472139 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1698.56 | 2.26167 | 15.2434ms | 9482 | 30 | 434886 | 5323.5 | 0.636441 | 2.95385 | 4.53366 | 0.799318 | 0.0529944 | 0.0726538 | 0.0473624 | 1(Tie) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1732.03 | 0.360228 | 72.3382ms | 94833 | 30 | 1.06141e+06 | 52215.9 | 0.772752 | 2.93142 | 6.3043 | 0.844053 | 0.0533225 | 0.0728059 | 0.0465801 | 1(Win) | true |
| vn (unchecked core) | 1638.16 | 0.399119 | 75.102ms | 94833 | 30 | 1.45657e+06 | 55208.1 | 0.658141 | 3.0833 | 4.72451 | 0.851503 | 0.0523475 | 0.072821 | 0.0451436 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| jeaiii::to_text | 1738.57 | 0.125797 | 632.645ms | 948206 | 30 | 1.28434e+07 | 520128 | 0.0549667 | 2.90655 | 6.30299 | 0.843746 | 0.0529545 | 0.072929 | 0.0486764 | 1(Win) | true |
| vn (unchecked core) | 1685.77 | 0.191996 | 654.486ms | 948280 | 30 | 3.18261e+07 | 536462 | 0.101402 | 2.99966 | 4.72236 | 0.850952 | 0.0523109 | 0.0729364 | 0.0464728 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 2568.3 | 1.73927 | 9.32747ms | 974 | 48 | 1901.04 | 361.833 | 1.38094 | 2.20223 | 4.70021 | 0.818891 | 0.0265324 | 0.06585 | 0.0488316 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 2488.21 | 1.84382 | 9.26199ms | 974 | 48 | 2276.21 | 373.479 | 1.22212 | 2.30325 | 5.87245 | 0.763517 | 0.0277511 | 0.06585 | 0.0463088 | 1(Tie) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2817.65 | 2.5729 | 12.9271ms | 9745 | 48 | 345673 | 3298.29 | 0.0729643 | 1.78818 | 4.48473 | 0.778383 | 0.0243269 | 0.0705436 | 0.0578596 | 1(Win) | true |
| jeaiii::to_text | 2559.41 | 0.986327 | 13.3045ms | 9746 | 30 | 38490.3 | 3631.57 | 0.599431 | 1.99903 | 5.65707 | 0.722746 | 0.0245464 | 0.0703695 | 0.0538537 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2714.2 | 0.650387 | 50.2479ms | 97419 | 48 | 2.37895e+06 | 34229.5 | 0.22354 | 1.85969 | 4.7205 | 0.773989 | 0.024195 | 0.0709258 | 0.0556847 | 1(Win) | true |
| jeaiii::to_text | 2530.51 | 0.447895 | 53.692ms | 97406 | 30 | 811007 | 36709.3 | 0.0295932 | 2.0012 | 5.84416 | 0.719095 | 0.0248271 | 0.0709079 | 0.051936 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2669.98 | 0.256606 | 432.113ms | 974130 | 30 | 2.39151e+07 | 347944 | 0.618474 | 1.92674 | 4.7181 | 0.773498 | 0.0258718 | 0.0710423 | 0.05646 | 1(Win) | true |
| jeaiii::to_text | 2490.47 | 0.211928 | 459.329ms | 974130 | 30 | 1.87486e+07 | 373022 | 0.17202 | 2.03482 | 5.84165 | 0.718635 | 0.0247734 | 0.0710171 | 0.0522737 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2549.37 | 1.00891 | 9.72066ms | 1938 | 30 | 1605.71 | 725.133 | 1.27089 | 2.10515 | 3.68557 | 0.544237 | 0.0333603 | 0.0505219 | 0.0413564 | 1(Win) | true |
| jeaiii::to_text | 2328.45 | 0.962547 | 9.76857ms | 1938 | 30 | 1752 | 793.933 | 0.82858 | 2.3 | 5.33881 | 0.397056 | 0.0339793 | 0.0501952 | 0.0345124 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2780.38 | 0.347269 | 17.1307ms | 19383 | 30 | 15990.7 | 6648.23 | 0.157313 | 1.83128 | 3.52565 | 0.523686 | 0.0319205 | 0.051696 | 0.0341957 | 1(Win) | true |
| jeaiii::to_text | 2471.53 | 0.334593 | 18.0633ms | 19383 | 30 | 18786.5 | 7479.03 | 0.0603718 | 2.06525 | 5.23126 | 0.376157 | 0.0322902 | 0.0517579 | 0.0325895 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2836.43 | 0.484055 | 88.7856ms | 193785 | 30 | 2.98404e+06 | 65154.9 | 0.129115 | 1.81157 | 3.51536 | 0.521898 | 0.0320367 | 0.0518598 | 0.0372993 | 1(Win) | true |
| jeaiii::to_text | 2598.25 | 0.580986 | 95.0993ms | 193792 | 30 | 5.12345e+06 | 71130.4 | 0.52105 | 1.97973 | 5.11752 | 0.374209 | 0.0321698 | 0.0518639 | 0.0334089 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2842.11 | 0.131791 | 792.426ms | 1937876 | 30 | 2.20326e+07 | 650256 | 0.0117198 | 1.77449 | 3.51416 | 0.52166 | 0.0320317 | 0.0519117 | 0.0345751 | 1(Win) | true |
| jeaiii::to_text | 2564.69 | 0.0614407 | 876.618ms | 1937948 | 48 | 9.40956e+06 | 720622 | 0.0196158 | 1.96826 | 5.11645 | 0.374077 | 0.0320622 | 0.0518989 | 0.0328492 | 2(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 4281.67 | 3.1261 | 9.39095ms | 1988 | 30 | 5750.92 | 442.9 | 2.98627 | 1.30253 | 3.69226 | 0.530191 | 0.00710765 | 0.0469038 | 0.0385389 | -(Win) | false |
| jeaiii::to_text | 3026.15 | 1.40181 | 9.61619ms | 1988 | 48 | 3702.21 | 626.5 | 0.244148 | 1.79478 | 5.2798 | 0.386133 | 0.00723096 | 0.0482064 | 0.0349601 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4800.44 | 0.635059 | 13.7653ms | 19882 | 30 | 18875.5 | 3949.8 | 1.3793 | 1.06544 | 3.53756 | 0.510562 | 0.00599879 | 0.0502805 | 0.043041 | 1(Win) | true |
| jeaiii::to_text | 3162.96 | 0.56624 | 16.1964ms | 19883 | 30 | 34569 | 5994.9 | 0.811099 | 1.61307 | 5.17499 | 0.366583 | 0.00607899 | 0.050632 | 0.035302 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4727.62 | 0.628187 | 57.4956ms | 198800 | 30 | 1.90391e+06 | 40102.7 | 0.711961 | 1.06942 | 3.52726 | 0.508667 | 0.00596764 | 0.0505086 | 0.0420176 | 1(Win) | true |
| jeaiii::to_text | 3172.95 | 0.446395 | 80.6371ms | 198794 | 30 | 2.13422e+06 | 59750.3 | 0.0681074 | 1.59118 | 5.06432 | 0.364775 | 0.00606775 | 0.0505404 | 0.0340308 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4663.68 | 0.191804 | 505.03ms | 1987941 | 48 | 2.91814e+07 | 406514 | 0.284991 | 1.08507 | 3.52633 | 0.508514 | 0.0060819 | 0.050577 | 0.0423845 | 1(Win) | true |
| jeaiii::to_text | 2921.79 | 0.668181 | 760.057ms | 1987976 | 30 | 5.63941e+08 | 648876 | 1.71099 | 1.70445 | 5.06316 | 0.36459 | 0.00604459 | 0.0505762 | 0.0410412 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4091.29 | 2.13658 | 9.47237ms | 1888 | 30 | 2652.13 | 440.067 | 0.797862 | 1.35909 | 3.67662 | 0.558875 | 0.00753924 | 0.0494376 | 0.0397267 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 2954.77 | 1.08998 | 9.57881ms | 1888 | 30 | 1323.33 | 609.333 | 2.83379 | 1.83002 | 5.39997 | 0.406642 | 0.00766284 | 0.0515741 | 0.0366721 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4389.17 | 0.682936 | 13.9551ms | 18877 | 30 | 23539 | 4101.6 | 0.719703 | 1.16481 | 3.51417 | 0.537964 | 0.00664474 | 0.0528118 | 0.045632 | 1(Win) | true |
| jeaiii::to_text | 3102.78 | 0.430782 | 16.0286ms | 18881 | 48 | 29997.4 | 5803.15 | 0.152916 | 1.67266 | 5.29035 | 0.385986 | 0.00651022 | 0.0531587 | 0.0371094 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4668.78 | 0.472572 | 55.6504ms | 188794 | 48 | 1.59423e+06 | 38564.4 | 0.642193 | 1.08303 | 3.50235 | 0.535658 | 0.00655751 | 0.0531908 | 0.0454907 | 1(Win) | true |
| jeaiii::to_text | 3065.24 | 0.296637 | 80.0579ms | 188802 | 30 | 910873 | 58741.2 | 0.111099 | 1.65154 | 5.17345 | 0.384055 | 0.0063269 | 0.0532088 | 0.0363721 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4498.61 | 0.275501 | 510.432ms | 1887936 | 30 | 3.64742e+07 | 400229 | 1.36071 | 1.12332 | 3.50126 | 0.535454 | 0.00660367 | 0.0532536 | 0.0453028 | 1(Win) | true |
| jeaiii::to_text | 3059.58 | 0.138149 | 720.663ms | 1887938 | 48 | 3.17238e+07 | 588472 | 0.25333 | 1.6611 | 5.1725 | 0.383965 | 0.00634156 | 0.0532589 | 0.036815 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2891.42 | 1.29334 | 9.67902ms | 1940 | 30 | 2055.45 | 640 | 1.30564 | 1.88063 | 3.51965 | 0.538033 | 0.0289459 | 0.0565863 | 0.0439944 | 1(Win) | true |
| jeaiii::to_text | 2472.57 | 1.23681 | 9.74793ms | 1940 | 30 | 2569.67 | 748.3 | 0.613171 | 2.1296 | 5.53425 | 0.410632 | 0.0286927 | 0.0558906 | 0.0392591 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3062.73 | 0.372403 | 16.3659ms | 19395 | 30 | 15174.5 | 6039.27 | 0.212597 | 1.66311 | 3.36229 | 0.517862 | 0.0274313 | 0.0580317 | 0.0438168 | 1(Win) | true |
| jeaiii::to_text | 2589.84 | 0.791244 | 17.5591ms | 19400 | 48 | 153364 | 7143.83 | 0.111859 | 1.96534 | 5.42646 | 0.390229 | 0.0273839 | 0.0582289 | 0.0404627 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3156.83 | 0.270082 | 80.1381ms | 193981 | 30 | 751501 | 58601.4 | 0.553814 | 1.60326 | 3.35061 | 0.515742 | 0.0273642 | 0.0582573 | 0.0433668 | 1(Win) | true |
| jeaiii::to_text | 2646.96 | 0.477199 | 93.7399ms | 193975 | 48 | 5.33872e+06 | 69887.4 | 0.0445936 | 1.90937 | 5.31257 | 0.388361 | 0.027414 | 0.0582825 | 0.0405097 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3107.84 | 0.135666 | 727.127ms | 1939795 | 30 | 1.95638e+07 | 595246 | 0.0962036 | 1.62257 | 3.34948 | 0.515541 | 0.0273206 | 0.0583494 | 0.0434379 | 1(Win) | true |
| jeaiii::to_text | 2672.19 | 0.221602 | 840.884ms | 1939795 | 30 | 7.06065e+07 | 692291 | 0.0755406 | 1.88494 | 5.31143 | 0.388106 | 0.0273297 | 0.0583165 | 0.0398949 | 2(Loss) | true |
