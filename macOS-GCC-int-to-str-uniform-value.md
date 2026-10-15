# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 507.472 | 14.659 | 0.621056ms | 267 | 48 | 259239 | 501.333 | 8.7963 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 360.717 | 12.2706 | 3.87994ms | 265 | 30 | 221165 | 699.733 | 3.79747 | -(Tie) | false |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 534.562 | 1.80955 | 6.01114ms | 2655 | 30 | 220337 | 4736 | 2.20994 | 1(Win) | true |
| jeaiii::to_text | 416.859 | 0.969076 | 7.47392ms | 2648 | 48 | 165467 | 6058.67 | 0.140647 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 499.047 | 1.11794 | 58.8531ms | 26488 | 48 | 1.5371e+07 | 50618.7 | 0.506184 | 1(Win) | true |
| jeaiii::to_text | 411.495 | 0.201704 | 74.3872ms | 26466 | 30 | 459204 | 61337.6 | 0.0417537 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 513.623 | 0.442851 | 579.988ms | 264866 | 30 | 1.42299e+08 | 491793 | 0.0659791 | 1(Win) | true |
| jeaiii::to_text | 400.719 | 0.28972 | 1053.04ms | 264967 | 30 | 1.00134e+08 | 630596 | 1.77579 | 2(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2004.87 | 35.3016 | 0.229888ms | 314 | 48 | 133396 | 149.333 | 7.89474 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 801.949 | 18.9292 | 0.515072ms | 314 | 48 | 239718 | 373.333 | 6.91489 | -(Loss) | false |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2434.86 | 5.05121 | 1.59206ms | 3145 | 48 | 185889 | 1232 | 5.01645 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 789.745 | 4.76244 | 4.96ms | 3145 | 30 | 981157 | 3797.33 | 8.01034 | -(Loss) | false |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2693.1 | 0.548345 | 13.4249ms | 31447 | 30 | 111863 | 11136 | 0.616808 | 1(Win) | true |
| jeaiii::to_text | 941.667 | 0.367471 | 39.305ms | 31439 | 48 | 657103 | 31840 | 0.28728 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2107.23 | 1.51683 | 157.419ms | 314429 | 30 | 1.39771e+08 | 142302 | 3.56792 | 1(Win) | true |
| jeaiii::to_text | 771.671 | 1.41758 | 502.457ms | 314486 | 30 | 9.10658e+08 | 388659 | 0.383773 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1502.46 | 47.3432 | 0.184832ms | 215 | 30 | 125347 | 136.533 | 15.7895 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 511.474 | 22.8371 | 0.507904ms | 215 | 30 | 251673 | 401.067 | 6.81818 | -(Loss) | false |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1663.46 | 8.5428 | 1.49606ms | 2149 | 48 | 531696 | 1232 | 2.39362 | 1(Win) | true |
| jeaiii::to_text | 673.629 | 1.384 | 3.8039ms | 2146 | 30 | 53031.4 | 3037.87 | 1.11111 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2026.36 | 0.566093 | 12.522ms | 21486 | 30 | 98304 | 10112 | 1.09546 | 1(Win) | true |
| jeaiii::to_text | 658.234 | 0.260354 | 38.3729ms | 21486 | 30 | 197060 | 31129.6 | 1.38875 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1841.87 | 0.833695 | 141.03ms | 214817 | 48 | 4.12737e+07 | 111227 | 5.5928 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 649.184 | 0.770158 | 459.503ms | 214833 | 30 | 1.77234e+08 | 315597 | 6.87503 | -(Loss) | false |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1636.2 | 35.3016 | 0.193024ms | 256 | 48 | 133396 | 149.333 | 16.6667 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 488.834 | 18.6441 | 0.63104ms | 258 | 30 | 264329 | 503.467 | 7.27273 | -(Loss) | false |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2298.36 | 3.46808 | 1.33094ms | 2571 | 30 | 41054.2 | 1066.67 | 0 | 1(Win) | true |
| jeaiii::to_text | 524.285 | 1.96224 | 5.64915ms | 2566 | 30 | 251673 | 4667.73 | 0 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2410.51 | 0.846694 | 12.9208ms | 25689 | 30 | 222144 | 10163.2 | 1.97531 | 1(Win) | true |
| jeaiii::to_text | 599.982 | 0.333047 | 49.3939ms | 25689 | 30 | 554796 | 40832 | 0.251414 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1373.74 | 2.67444 | 192.054ms | 256977 | 30 | 6.82916e+08 | 178398 | 2.74733 | 1(Win) | true |
| jeaiii::to_text | 618.301 | 0.719264 | 517.133ms | 256977 | 30 | 2.43831e+08 | 396365 | 0.185493 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 656.769 | 8.53081 | 1.0089ms | 514 | 48 | 194749 | 746.667 | 1.74419 | 1(Win) | true |
| jeaiii::to_text | 499.715 | 7.1751 | 1.21805ms | 514 | 48 | 237975 | 981.333 | 1.76991 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 706.291 | 0.518797 | 8.768ms | 5163 | 30 | 39246.3 | 6971.73 | 1.3285 | 1(Win) | true |
| jeaiii::to_text | 555.38 | 2.30195 | 10.55ms | 5163 | 30 | 1.24963e+06 | 8866.13 | 1.16845 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 677.392 | 1.03542 | 87.297ms | 51611 | 30 | 1.6981e+07 | 72661.3 | 0.438468 | 1(Win) | true |
| jeaiii::to_text | 634.133 | 1.2453 | 96.9308ms | 51600 | 30 | 2.80166e+07 | 77602.1 | 0.865129 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 293.2 | 3.27305 | 5467.24ms | 516114 | 30 | 9.05715e+10 | 1.67874e+06 | 9.1194 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 69.019 | 18.1302 | 6645.15ms | 516053 | 30 | 5.01394e+13 | 7.1306e+06 | 14.1964 | -(Loss) | false |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1241.33 | 21.3213 | 0.551168ms | 566 | 30 | 258302 | 435.2 | 2 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1073.33 | 18.6441 | 0.64896ms | 567 | 30 | 264329 | 503.467 | 4.88889 | -(Tie) | false |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1340.88 | 2.74156 | 5.01606ms | 5663 | 30 | 365796 | 4027.73 | 1.28755 | 1(Win) | true |
| jeaiii::to_text | 1122.54 | 3.64625 | 5.82989ms | 5655 | 30 | 920592 | 4804.27 | 2.48009 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1345.96 | 0.301932 | 49.74ms | 56604 | 30 | 439920 | 40106.7 | 1.16967 | 1(Win) | true |
| vn (unchecked core) | 1127.09 | 5.52569 | 61.238ms | 56607 | 30 | 2.10146e+08 | 47897.6 | 4.50568 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1203.78 | 0.724448 | 1598.07ms | 566082 | 30 | 3.16666e+08 | 448469 | 43.1143 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 271.015 | 2.05506 | 2236.61ms | 566115 | 30 | 5.02795e+10 | 1.9921e+06 | 6.0806 | -(Loss) | false |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1015.98 | 21.3213 | 0.512ms | 464 | 30 | 258302 | 435.2 | 1.68675 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 880.81 | 18.6441 | 0.562176ms | 465 | 30 | 264329 | 503.467 | 1.72414 | -(Tie) | false |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1225.8 | 2.60148 | 4.4329ms | 4662 | 30 | 267040 | 3626.67 | 1.16279 | 1(Win) | true |
| jeaiii::to_text | 1084.28 | 1.64133 | 5.11104ms | 4657 | 30 | 135592 | 4096 | 0 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1117.91 | 1.08312 | 48.7012ms | 46613 | 30 | 5.56529e+06 | 39765.3 | 0.998513 | 1(Win) | true |
| vn (unchecked core) | 957.973 | 3.2208 | 57.655ms | 46613 | 30 | 6.70136e+07 | 46404.3 | 0.421168 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 291.933 | 4.56294 | 1920.62ms | 466077 | 48 | 2.31675e+11 | 1.52256e+06 | 42.0909 | -(Win) | false |
| vn (unchecked core) | 238.205 | 2.17207 | 1983.13ms | 466131 | 30 | 4.92926e+10 | 1.8662e+06 | 0.489997 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 2060.09 | 26.9284 | 0.344064ms | 484 | 48 | 174646 | 224 | 15.3226 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1310.96 | 28.0357 | 0.52992ms | 484 | 48 | 467467 | 352 | 12.234 | -(Tie) | false |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1798.78 | 5.20842 | 3.13114ms | 4829 | 48 | 853362 | 2560 | 2.38908 | 1(Win) | true |
| jeaiii::to_text | 1546.23 | 1.2692 | 3.73018ms | 4829 | 30 | 42862.1 | 2978.13 | 0.612613 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1887.95 | 1.61242 | 31.4089ms | 48297 | 30 | 4.64243e+06 | 24396.8 | 6.03122 | -(Win) | false |
| jeaiii::to_text | 1672.13 | 1.37314 | 36.3799ms | 48297 | 30 | 4.29193e+06 | 27545.6 | 0.48249 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1204.01 | 1.13029 | 994.679ms | 483033 | 30 | 5.61041e+08 | 382601 | 2.46258 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 217.964 | 9.14518 | 3162.61ms | 483045 | 30 | 1.12076e+12 | 2.1135e+06 | 13.4339 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1023.57 | 5.19257 | 1.17299ms | 998 | 30 | 69980.4 | 930.133 | 3.53982 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 953.133 | 1.42843 | 1.25594ms | 998 | 30 | 6101.63 | 998.4 | 0 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1053.64 | 0.410857 | 11.0991ms | 9984 | 30 | 41355.5 | 9036.8 | 0.749766 | 1(Win) | true |
| vn (unchecked core) | 1027.45 | 0.921445 | 11.2689ms | 9984 | 30 | 218755 | 9267.2 | 0 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1022.87 | 1.2168 | 114.409ms | 99831 | 48 | 6.15699e+07 | 93077.3 | 1.87261 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 997.825 | 1.09489 | 116.491ms | 99831 | 48 | 5.23841e+07 | 95413.3 | 2.23324 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 186.574 | 6.95838 | 4664.09ms | 998299 | 30 | 3.78232e+12 | 5.10282e+06 | 0.557788 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 171.956 | 16.4083 | 4515.73ms | 998291 | 30 | 2.47589e+13 | 5.53656e+06 | 11.897 | -(Tie) | false |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1674.2 | 15.2852 | 0.78592ms | 1049 | 30 | 250091 | 597.333 | 0 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1500.05 | 13.2467 | 0.920064ms | 1047 | 30 | 233218 | 665.6 | 0 | -(Tie) | false |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1415.25 | 4.86288 | 10.0531ms | 10485 | 30 | 3.54166e+06 | 7065.6 | 0.480769 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1388.43 | 4.65711 | 9.36781ms | 10485 | 30 | 3.37503e+06 | 7202.13 | 1.44231 | 1(Tie) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1697.88 | 0.266015 | 71.0339ms | 104858 | 30 | 736414 | 58897.1 | 0.447137 | 1(Win) | true |
| jeaiii::to_text | 1621.04 | 0.752468 | 77.513ms | 104826 | 30 | 6.46027e+06 | 61670.4 | 0.89172 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 503.372 | 8.69287 | 3708.83ms | 1048274 | 30 | 8.9417e+11 | 1.98603e+06 | 2.31395 | 1(Win) | true |
| vn (unchecked core) | 346.242 | 1.18986 | 4391.38ms | 1048292 | 30 | 3.54097e+10 | 2.88737e+06 | 0.369306 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1615.82 | 12.9597 | 0.847872ms | 949 | 48 | 252819 | 560 | 0.568182 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1491.74 | 15.2257 | 0.81024ms | 948 | 30 | 255289 | 605.867 | 4.22018 | -(Tie) | false |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1457.36 | 1.72124 | 7.86816ms | 9480 | 30 | 342068 | 6203.73 | 0.0687285 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 1409.18 | 1.13582 | 7.84ms | 9481 | 48 | 254911 | 6416 | 0.413907 | 1(Tie) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1651.07 | 1.04424 | 70.933ms | 94817 | 30 | 9.81202e+06 | 54766.9 | 2.37298 | 1(Win) | true |
| jeaiii::to_text | 1563.86 | 0.609759 | 70.497ms | 94832 | 30 | 3.73035e+06 | 57830.4 | 1.39138 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 509.454 | 4.77672 | 4362.94ms | 948258 | 30 | 2.15687e+11 | 1.7751e+06 | 10.3321 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 192.369 | 10.7791 | 6018.96ms | 948228 | 48 | 1.23242e+13 | 4.70085e+06 | 3.91123 | -(Loss) | false |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1777.19 | 14.0606 | 0.756992ms | 974 | 48 | 259239 | 522.667 | 3.81356 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 853.749 | 18.1137 | 1.50912ms | 974 | 48 | 1.86429e+06 | 1088 | 2 | -(Loss) | false |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2253.48 | 1.29737 | 5.05805ms | 9742 | 48 | 137318 | 4122.67 | 0.386598 | 1(Win) | true |
| jeaiii::to_text | 2091.16 | 1.65891 | 5.51987ms | 9742 | 48 | 260721 | 4442.67 | 0.313102 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2632 | 0.431201 | 43.017ms | 97406 | 30 | 694832 | 35293.9 | 0.559203 | 1(Win) | true |
| jeaiii::to_text | 2284.09 | 0.76573 | 55.0241ms | 97406 | 30 | 2.9095e+06 | 40669.9 | 0.0629063 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 643.705 | 3.81781 | 4414.63ms | 974111 | 30 | 9.10735e+10 | 1.44318e+06 | 18.8755 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 153.231 | 10.4215 | 6009.93ms | 974127 | 48 | 1.91619e+13 | 6.06273e+06 | 12.2311 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 2042.48 | 6.32607 | 1.11514ms | 1937 | 30 | 98228.7 | 904.533 | 1.39535 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 910.254 | 17.0826 | 2.54515ms | 1938 | 30 | 3.61096e+06 | 2030.93 | 0.847458 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2545.4 | 1.12732 | 8.99302ms | 19382 | 30 | 201052 | 7261.87 | 0.467836 | 1(Win) | true |
| jeaiii::to_text | 1924.96 | 1.63612 | 11.6211ms | 19377 | 30 | 740105 | 9600 | 1.40228 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2616.59 | 0.766286 | 85.109ms | 193788 | 30 | 8.78793e+06 | 70630.4 | 0.0392809 | 1(Win) | true |
| jeaiii::to_text | 2117.06 | 0.938901 | 107.249ms | 193788 | 30 | 2.01534e+07 | 87296 | 1.14032 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 784.192 | 2.81358 | 8854.89ms | 1937853 | 30 | 1.31898e+11 | 2.35667e+06 | 6.403 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 350.005 | 3.56662 | 7816.62ms | 1937947 | 48 | 1.70251e+12 | 5.28042e+06 | 10.5172 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 4038.89 | 19.9315 | 0.585984ms | 1988 | 30 | 262521 | 469.333 | 2.22222 | -(Win) | false |
| jeaiii::to_text | 2468.42 | 8.06299 | 0.914176ms | 1988 | 48 | 184059 | 768 | 1.1236 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4515.3 | 2.01704 | 5.4039ms | 19878 | 30 | 215139 | 4198.4 | 0.280255 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 2859.11 | 2.21643 | 9.01402ms | 19878 | 30 | 647902 | 6630.4 | 27.2131 | -(Loss) | false |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4790.19 | 0.247329 | 48.2432ms | 198794 | 30 | 287454 | 39577.6 | 0.215146 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 2946.98 | 1.49494 | 81.7219ms | 198790 | 48 | 4.43942e+07 | 64330.7 | 5.80095 | -(Loss) | false |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1543.66 | 3.0789 | 5273.92ms | 1987947 | 30 | 4.2896e+10 | 1.22815e+06 | 21.6119 | -(Win) | false |
| vn (unchecked core) | 352.07 | 1.53608 | 7134.68ms | 1987927 | 48 | 3.28406e+11 | 5.38482e+06 | 1.52955 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 4136.9 | 21.3213 | 0.568064ms | 1888 | 30 | 258302 | 435.2 | 0 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 2453.28 | 11.3108 | 0.962048ms | 1888 | 30 | 206702 | 733.867 | 8.51064 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3827.59 | 3.72204 | 6.00602ms | 18880 | 48 | 1.47142e+06 | 4704 | 2.08703 | 1(Win) | true |
| jeaiii::to_text | 2950.75 | 1.06609 | 7.52512ms | 18878 | 30 | 126929 | 6101.33 | 0.615655 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4273.89 | 1.54214 | 50.7978ms | 188801 | 30 | 1.26628e+07 | 42129.1 | 1.60527 | 1(Win) | true |
| jeaiii::to_text | 2905.51 | 3.1716 | 79.3669ms | 188798 | 30 | 1.15885e+08 | 61969.1 | 0.355847 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 478.45 | 1.35394 | 4612.89ms | 1887974 | 30 | 7.78824e+10 | 3.76322e+06 | 3.11455 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 300.223 | 19.1761 | 4915.55ms | 1887974 | 30 | 3.96779e+13 | 5.99725e+06 | 6.41428 | -(Tie) | false |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 2223.04 | 6.63807 | 1.10797ms | 1939 | 48 | 146410 | 832 | 0.510204 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 2208.88 | 13.2773 | 1.43795ms | 1939 | 48 | 593281 | 837.333 | 10.7955 | -(Tie) | false |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2500.37 | 1.2673 | 9.30202ms | 19397 | 30 | 263726 | 7398.4 | 1.33713 | 1(Win) | true |
| jeaiii::to_text | 2260.13 | 1.65113 | 10.7492ms | 19402 | 48 | 877038 | 8186.67 | 1.50154 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2784.35 | 1.08158 | 80.287ms | 193955 | 30 | 1.5488e+07 | 66432 | 0.435414 | 1(Win) | true |
| jeaiii::to_text | 2354.62 | 0.465207 | 101.796ms | 193977 | 48 | 6.41204e+06 | 78565.3 | 1.05454 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1538.48 | 3.71864 | 5655.8ms | 1939749 | 30 | 5.99789e+10 | 1.20241e+06 | 0.164376 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 429.123 | 1.26433 | 8288.36ms | 1939729 | 30 | 8.91169e+10 | 4.31082e+06 | 20.5437 | -(Loss) | false |
