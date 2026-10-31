# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.3 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 134.628 | 1.02075 | 0.97ms | 100 | 48 | 2509.6 | 708.375 | 0.00823413 | 1(Win) | true |
| vn::from_chars | 94.1963 | 1.50449 | 1.14037ms | 100 | 30 | 6960.39 | 1012.43 | 0.371357 | 2(Loss) | true |
| strtoll/strtoull | 67.5237 | 0.60392 | 1.83563ms | 100 | 48 | 3492.11 | 1412.35 | 1.16947 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 142.635 | 0.369536 | 10.9658ms | 1000 | 30 | 18314.1 | 6686.13 | 0.24766 | 1(Win) | true |
| vn::from_chars | 110.019 | 2.06441 | 9.97554ms | 1000 | 30 | 960670 | 8668.23 | 3.98604 | 2(Loss) | true |
| strtoll/strtoull | 69.4912 | 0.221936 | 22.5993ms | 1000 | 30 | 27830.2 | 13723.7 | 0.355174 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 102.569 | 3.29097 | 114.288ms | 10000 | 30 | 2.80892e+08 | 92979.1 | 1.47982 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 93.6671 | 8.12992 | 103.058ms | 10000 | 30 | 2.05551e+09 | 101815 | 13.885 | -(Tie) | false |
| strtoll/strtoull | 61.7121 | 2.54911 | 241.776ms | 10000 | 30 | 4.6554e+08 | 154536 | 2.37172 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 118.128 | 0.65746 | 1084.84ms | 100000 | 30 | 8.45183e+08 | 807319 | 4.0944 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 56.2844 | 12.5052 | 2326.14ms | 100000 | 30 | 1.34687e+12 | 1.69439e+06 | 3.68536 | -(Loss) | false |
| strtoll/strtoull | 28.6239 | 4.14589 | 3464.57ms | 100000 | 48 | 9.15843e+11 | 3.33174e+06 | 4.97275 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 198.475 | 2.45337 | 0.621084ms | 100 | 30 | 4169.02 | 480.5 | 0.00693674 | 1(Win) | true |
| std::from_chars | 134.087 | 1.5603 | 0.952833ms | 100 | 30 | 3694.53 | 711.233 | 1.99742 | 2(Loss) | true |
| strtoll/strtoull | 94.9717 | 1.50706 | 1.28296ms | 100 | 30 | 6870.56 | 1004.17 | 0.00663944 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 194.511 | 2.17116 | 6.01025ms | 1000 | 30 | 339953 | 4902.93 | 0.700084 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 114.275 | 1.46803 | 11.3428ms | 1000 | 48 | 720455 | 8345.42 | 10.8422 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 86.0681 | 3.01789 | 32.773ms | 1000 | 30 | 3.35464e+06 | 11080.5 | 17.9399 | -(Loss) | false |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 219.818 | 0.340787 | 52.4989ms | 10000 | 30 | 655785 | 43384.7 | 0.160143 | 1(Win) | true |
| std::from_chars | 142.419 | 0.301549 | 83.0467ms | 10000 | 30 | 1.2232e+06 | 66962.4 | 1.15234 | 2(Loss) | true |
| strtoll/strtoull | 100.664 | 0.0865291 | 119.064ms | 10000 | 30 | 201605 | 94738.8 | 1.28954 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 164.841 | 4.72673 | 674.101ms | 100000 | 48 | 3.58948e+10 | 578542 | 5.54174 | -(Win) | false |
| std::from_chars | 145.469 | 0.428086 | 843.737ms | 100000 | 30 | 2.3629e+08 | 655588 | 0.0644672 | 2(Loss) | true |
| strtoll/strtoull | 93.8729 | 1.80358 | 1262.71ms | 100000 | 30 | 1.00719e+10 | 1.01592e+06 | 3.61428 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 214.62 | 1.19385 | 0.585917ms | 100 | 48 | 1350.83 | 444.354 | 1.54634 | 1(Win) | true |
| std::from_chars | 134.63 | 1.29392 | 0.933166ms | 100 | 30 | 2520.31 | 708.367 | 0.198029 | 2(Loss) | true |
| strtoll/strtoull | 94.9599 | 0.98266 | 1.28812ms | 100 | 48 | 4674.85 | 1004.29 | 0.0190884 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 223.153 | 0.550232 | 5.28742ms | 1000 | 30 | 16588.5 | 4273.63 | 0.319546 | 1(Win) | true |
| std::from_chars | 125.416 | 1.14725 | 10.5258ms | 1000 | 30 | 228313 | 7604.1 | 0.164989 | 2(Loss) | true |
| strtoll/strtoull | 98.0501 | 0.884063 | 12.9582ms | 1000 | 30 | 221815 | 9726.4 | 1.03546 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 227.573 | 0.139284 | 51.8453ms | 10000 | 48 | 163530 | 41906.3 | 1.44548 | 1(Win) | true |
| std::from_chars | 138.498 | 1.05096 | 90.0863ms | 10000 | 30 | 1.57112e+07 | 68858.4 | 0.745882 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 96.5285 | 1.15243 | 128.203ms | 10000 | 30 | 3.88904e+07 | 98797.2 | 6.34415 | -(Loss) | false |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 200.145 | 2.13206 | 629.518ms | 100000 | 48 | 4.95393e+09 | 476492 | 0.94906 | 1(Win) | true |
| strtoll/strtoull STATISTICAL TIE | 98.676 | 0.344582 | 1254.47ms | 100000 | 30 | 3.32723e+08 | 966471 | 1.5811 | 2(Tie) | true |
| std::from_chars STATISTICAL TIE | 96.7234 | 1.07878 | 970.958ms | 100000 | 30 | 3.39409e+09 | 985980 | 3.3348 | 2(Tie) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 159.228 | 1.2196 | 0.752ms | 100 | 48 | 2561.17 | 598.938 | 0.199261 | 1(Win) | true |
| std::from_chars | 109.162 | 2.25807 | 0.99275ms | 100 | 30 | 11674.9 | 873.633 | 0.645864 | 2(Loss) | true |
| strtoll/strtoull | 71.2246 | 1.74279 | 1.61817ms | 100 | 30 | 16336.1 | 1338.97 | 3.10318 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 171.122 | 0.569263 | 6.86858ms | 1000 | 48 | 48312.1 | 5573.06 | 0.13948 | 1(Win) | true |
| std::from_chars | 129.995 | 1.15663 | 10.0982ms | 1000 | 30 | 216003 | 7336.23 | 4.22143 | 2(Loss) | true |
| strtoll/strtoull | 91.0064 | 0.184718 | 12.82ms | 1000 | 30 | 11240.8 | 10479.2 | 0.507371 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 171.494 | 0.573931 | 68.894ms | 10000 | 30 | 3.05592e+06 | 55609.7 | 0.167376 | 1(Win) | true |
| std::from_chars | 131.93 | 0.469779 | 87.2047ms | 10000 | 30 | 3.45954e+06 | 72286.2 | 1.06387 | 2(Loss) | true |
| strtoll/strtoull | 89.774 | 0.748191 | 128.925ms | 10000 | 30 | 1.89516e+07 | 106231 | 0.279012 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars DID NOT CONVERGE | 118.893 | 2.55734 | 1417.74ms | 100000 | 30 | 1.26236e+10 | 802128 | 9.29361 | -(Win) | false |
| vn::from_chars STATISTICAL TIE | 71.7063 | 9.16729 | 1272.36ms | 100000 | 30 | 4.45952e+11 | 1.32997e+06 | 1.40653 | 2(Tie) | true |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 67.2845 | 1.65486 | 1799.8ms | 100000 | 48 | 2.6408e+10 | 1.41738e+06 | 5.23295 | -(Tie) | false |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 193.136 | 1.01416 | 1.35629ms | 200 | 30 | 3009.29 | 987.567 | 2.96538 | 1(Win) | true |
| vn::from_chars | 181.75 | 1.33036 | 1.34008ms | 200 | 48 | 9356 | 1049.44 | 1.56174 | 2(Loss) | true |
| strtoll/strtoull | 111.285 | 1.74299 | 2.26437ms | 200 | 30 | 26773.2 | 1713.93 | 1.34746 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 204.907 | 0.297974 | 14.768ms | 2000 | 30 | 23079.5 | 9308.37 | 1.65868 | 1(Win) | true |
| vn::from_chars | 187.592 | 1.10306 | 12.4748ms | 2000 | 48 | 603771 | 10167.5 | 2.63742 | 2(Loss) | true |
| strtoll/strtoull | 120.867 | 0.254626 | 19.4255ms | 2000 | 30 | 48436.1 | 15780.5 | 0.362301 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 201.303 | 1.16829 | 114.569ms | 20000 | 30 | 3.67605e+07 | 94750 | 0.68915 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 197.392 | 0.384423 | 118.13ms | 20000 | 48 | 6.62311e+06 | 96627.6 | 0.181128 | 1(Tie) | true |
| strtoll/strtoull | 116.166 | 1.46846 | 223.428ms | 20000 | 30 | 1.74399e+08 | 164192 | 0.076093 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 185.22 | 0.839625 | 1254.14ms | 200000 | 30 | 2.24272e+09 | 1.02977e+06 | 1.45811 | 1(Win) | true |
| strtoll/strtoull DID NOT CONVERGE | 61.8573 | 3.66471 | 3932.05ms | 200000 | 30 | 3.83071e+11 | 3.08347e+06 | 11.9446 | -(Loss) | false |
| std::from_chars | 35.0178 | 3.8873 | 6026.25ms | 200000 | 48 | 2.15188e+12 | 5.44679e+06 | 2.06793 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 214.57 | 7.76511 | 1.27167ms | 200 | 48 | 228696 | 888.917 | 6.96843 | -(Tie) | false |
| std::from_chars STATISTICAL TIE | 188.126 | 2.31826 | 1.28192ms | 200 | 30 | 16573.3 | 1013.87 | 3.10159 | 1(Tie) | true |
| strtoll/strtoull | 146.78 | 1.02209 | 1.69067ms | 200 | 48 | 8467.36 | 1299.46 | 0.151756 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 262.33 | 4.86921 | 8.75917ms | 2000 | 30 | 3.76012e+06 | 7270.8 | 2.56841 | 1(Win) | true |
| std::from_chars | 202.49 | 0.438057 | 12.3302ms | 2000 | 30 | 51078.3 | 9419.47 | 1.95035 | 2(Loss) | true |
| strtoll/strtoull | 148.449 | 2.2031 | 16.0894ms | 2000 | 30 | 2.40379e+06 | 12848.5 | 1.06825 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 205.085 | 1.4853 | 120.025ms | 20000 | 30 | 5.72453e+07 | 93002.9 | 3.74447 | 1(Win) | true |
| strtoll/strtoull DID NOT CONVERGE | 135.654 | 1.35576 | 173.214ms | 20000 | 30 | 1.09014e+08 | 140604 | 6.85584 | -(Loss) | false |
| vn::from_chars | 95.5636 | 7.9325 | 221.407ms | 20000 | 48 | 1.20319e+10 | 199589 | 0.0991558 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 258.158 | 1.433 | 1678.02ms | 200000 | 48 | 5.38045e+09 | 738829 | 2.02826 | 1(Win) | true |
| strtoll/strtoull | 144.164 | 1.09001 | 1802.05ms | 200000 | 30 | 6.23916e+09 | 1.32304e+06 | 2.0976 | 2(Loss) | true |
| std::from_chars | 121.05 | 2.54296 | 1370.82ms | 200000 | 30 | 4.8165e+10 | 1.57567e+06 | 0.123766 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 302.224 | 1.14357 | 0.909125ms | 200 | 48 | 2500.18 | 631.104 | 1.65436 | 1(Win) | true |
| std::from_chars | 162.148 | 1.64404 | 1.37296ms | 200 | 30 | 11219.7 | 1176.3 | 1.5923 | 2(Loss) | true |
| strtoll/strtoull | 150.418 | 0.622336 | 1.75196ms | 200 | 30 | 1868.24 | 1268.03 | 0.218663 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 290.828 | 1.88864 | 10.8511ms | 2000 | 30 | 460262 | 6558.33 | 9.15639 | -(Win) | false |
| std::from_chars | 197.769 | 0.499609 | 17.0347ms | 2000 | 30 | 69650.9 | 9644.33 | 0.560214 | 2(Loss) | true |
| strtoll/strtoull | 115.573 | 1.60562 | 20.6552ms | 2000 | 48 | 3.37036e+06 | 16503.5 | 1.10235 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 299.97 | 1.31573 | 75.6218ms | 20000 | 30 | 2.09972e+07 | 63584.6 | 1.99332 | 1(Win) | true |
| std::from_chars | 190.764 | 1.62076 | 149.794ms | 20000 | 30 | 7.87815e+07 | 99984.8 | 1.954 | 2(Loss) | true |
| strtoll/strtoull | 87.5779 | 1.18407 | 366.991ms | 20000 | 30 | 1.995e+08 | 217789 | 4.99717 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 321.934 | 0.5161 | 755.511ms | 200000 | 30 | 2.80488e+08 | 592465 | 0.0262644 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 194.5 | 0.884153 | 1565.03ms | 200000 | 30 | 2.25526e+09 | 980642 | 7.68968 | -(Loss) | false |
| strtoll/strtoull | 159.62 | 0.156113 | 1621.39ms | 200000 | 30 | 1.04396e+08 | 1.19493e+06 | 2.74369 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 392.408 | 2.78837 | 0.709459ms | 200 | 48 | 8817.12 | 486.062 | 4.13599 | 1(Win) | true |
| std::from_chars | 284.877 | 1.68543 | 0.8995ms | 200 | 30 | 3820.19 | 669.533 | 0.30775 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 149.276 | 1.32916 | 2.25188ms | 200 | 48 | 13844.3 | 1277.73 | 5.74602 | -(Loss) | false |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 437.636 | 0.664308 | 5.79992ms | 2000 | 30 | 25147.5 | 4358.3 | 11.7539 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 246.575 | 11.17 | 8.97008ms | 2000 | 48 | 3.58354e+07 | 7735.38 | 1.48525 | -(Loss) | false |
| strtoll/strtoull | 145.046 | 7.14355 | 17.3114ms | 2000 | 30 | 2.64726e+07 | 13149.9 | 1.45754 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 380.94 | 2.49869 | 86.8441ms | 20000 | 30 | 4.69561e+07 | 50069.5 | 31.6133 | -(Win) | false |
| std::from_chars | 297.262 | 3.13262 | 86.321ms | 20000 | 30 | 1.21204e+08 | 64163.9 | 1.12375 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 120.109 | 8.10416 | 266.366ms | 20000 | 30 | 4.96874e+09 | 158801 | 6.30995 | -(Loss) | false |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 123.654 | 2.24154 | 2602.13ms | 200000 | 30 | 3.58639e+10 | 1.54249e+06 | 8.51194 | -(Win) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 60.6526 | 6.21967 | 3970.85ms | 200000 | 48 | 1.83628e+12 | 3.14471e+06 | 5.73486 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 58.8684 | 12.5149 | 3713.11ms | 200000 | 30 | 4.93251e+12 | 3.24002e+06 | 3.95711 | -(Tie) | false |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 195.835 | 9.08948 | 2.64271ms | 400 | 48 | 1.50473e+06 | 1947.92 | 5.29689 | -(Tie) | false |
| std::from_chars STATISTICAL TIE | 189.666 | 1.20133 | 2.39933ms | 400 | 48 | 28022.6 | 2011.27 | 1.62039 | 1(Tie) | true |
| strtoll/strtoull DID NOT CONVERGE | 155.265 | 1.87327 | 4.25517ms | 400 | 30 | 63547.3 | 2456.9 | 13.1121 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 286.123 | 2.8846 | 17.0532ms | 4000 | 48 | 7.0995e+06 | 13332.4 | 0.517009 | 1(Win) | true |
| std::from_chars | 240.398 | 1.18991 | 23.8257ms | 4000 | 30 | 1.06957e+06 | 15868.3 | 0.0645789 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 95.0246 | 6.94851 | 43.5131ms | 4000 | 30 | 2.33428e+08 | 40144.3 | 18.0718 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 311.833 | 1.66428 | 158.35ms | 40000 | 48 | 1.98962e+08 | 122332 | 0.355464 | 1(Win) | true |
| std::from_chars | 224.966 | 1.14778 | 219.595ms | 40000 | 30 | 1.13639e+08 | 169568 | 2.3186 | 2(Loss) | true |
| strtoll/strtoull | 165.943 | 2.02136 | 292.572ms | 40000 | 30 | 6.47757e+08 | 229881 | 0.288664 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull STATISTICAL TIE | 41.8999 | 5.83095 | 12334.2ms | 400000 | 30 | 8.45461e+12 | 9.10431e+06 | 2.21396 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 35.1048 | 8.95707 | 13888.5ms | 400000 | 30 | 2.84211e+13 | 1.08666e+07 | 0.684052 | 1(Tie) | true |
| std::from_chars DID NOT CONVERGE | 29.4785 | 8.56885 | 12716.9ms | 400000 | 30 | 3.68873e+13 | 1.29406e+07 | 11.7745 | -(Loss) | false |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 450.699 | 0.721165 | 1.11667ms | 400 | 48 | 1788.37 | 846.396 | 0.224492 | 1(Win) | true |
| std::from_chars | 222.93 | 4.80694 | 2.22621ms | 400 | 30 | 202976 | 1711.17 | 1.47262 | 2(Loss) | true |
| strtoll/strtoull | 174.831 | 2.05676 | 2.93808ms | 400 | 30 | 60418.5 | 2181.93 | 0.386083 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 408.228 | 2.22639 | 11.7498ms | 4000 | 30 | 1.29849e+06 | 9344.53 | 2.17257 | 1(Win) | true |
| std::from_chars | 245.079 | 0.7045 | 18.9845ms | 4000 | 30 | 360739 | 15565.2 | 0.790862 | 2(Loss) | true |
| strtoll/strtoull | 184.42 | 6.23499 | 25.28ms | 4000 | 30 | 4.98994e+07 | 20684.8 | 0.034659 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 392.548 | 1.76508 | 124.153ms | 40000 | 30 | 8.82646e+07 | 97177.9 | 4.04001 | 1(Win) | true |
| std::from_chars | 219.79 | 0.737119 | 294.704ms | 40000 | 48 | 7.85631e+07 | 173561 | 1.98781 | 2(Loss) | true |
| strtoll/strtoull | 186.225 | 1.89893 | 294.255ms | 40000 | 30 | 4.53924e+08 | 204843 | 3.50985 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 42.5235 | 5.77386 | 15178.1ms | 400000 | 30 | 8.04852e+12 | 8.97079e+06 | 20.2539 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 38.9164 | 5.27422 | 10733ms | 400000 | 48 | 1.28296e+13 | 9.80229e+06 | 10.1968 | -(Tie) | false |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 34.7392 | 8.23022 | 12683.8ms | 400000 | 30 | 2.45033e+13 | 1.0981e+07 | 8.72256 | -(Tie) | false |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 207.908 | 1.79966 | 2.056ms | 400 | 30 | 32710.1 | 1834.8 | 2.09404 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 192.578 | 3.93048 | 3.1155ms | 400 | 48 | 290963 | 1980.85 | 8.28247 | -(Tie) | false |
| strtoll/strtoull | 186.53 | 4.22378 | 2.55692ms | 400 | 48 | 358150 | 2045.08 | 1.34209 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 433.144 | 1.81466 | 12.2997ms | 4000 | 30 | 766247 | 8807 | 0.610908 | 1(Win) | true |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 194.326 | 1.94319 | 32.6987ms | 4000 | 30 | 4.36528e+06 | 19630.4 | 5.37223 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 181.114 | 8.6687 | 28.6923ms | 4000 | 48 | 1.60017e+08 | 21062.4 | 10.2454 | -(Tie) | false |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 427.351 | 1.92425 | 159.628ms | 40000 | 30 | 8.85109e+07 | 89263.8 | 6.44979 | -(Win) | false |
| std::from_chars | 201.156 | 3.31266 | 293.097ms | 40000 | 48 | 1.89431e+09 | 189639 | 3.42542 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 148.481 | 7.82059 | 335.717ms | 40000 | 30 | 1.2111e+10 | 256915 | 23.5523 | -(Loss) | false |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 59.0359 | 3.84511 | 6399.71ms | 400000 | 30 | 1.85194e+12 | 6.46166e+06 | 7.95955 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE | 55.631 | 8.7159 | 7703.73ms | 400000 | 30 | 1.0716e+13 | 6.85714e+06 | 2.98298 | 1(Tie) | true |
| std::from_chars DID NOT CONVERGE | 51.8091 | 2.83713 | 8434.11ms | 400000 | 30 | 1.30915e+12 | 7.36299e+06 | 10.0188 | -(Loss) | false |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 460.064 | 3.72104 | 1.27525ms | 400 | 30 | 28558.4 | 829.167 | 7.30735 | -(Win) | false |
| std::from_chars | 231.189 | 8.76495 | 2.40771ms | 400 | 30 | 627489 | 1650.03 | 2.59275 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 74.9803 | 2.42643 | 4.51567ms | 400 | 30 | 457174 | 5087.6 | 11.2406 | -(Loss) | false |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 570.794 | 6.69993 | 16.5281ms | 4000 | 48 | 9.62372e+06 | 6683.15 | 1.21143 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 305.887 | 2.74442 | 22.0895ms | 4000 | 30 | 3.51415e+06 | 12470.9 | 10.119 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 193.068 | 7.54974 | 34.5119ms | 4000 | 30 | 6.67553e+07 | 19758.3 | 5.16791 | -(Loss) | false |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 621.934 | 1.89928 | 106.298ms | 40000 | 30 | 4.07128e+07 | 61336.1 | 16.85 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 297.568 | 4.08639 | 210.634ms | 40000 | 30 | 8.23284e+08 | 128196 | 14.437 | -(Loss) | false |
| strtoll/strtoull | 203.187 | 4.69936 | 319.225ms | 40000 | 30 | 2.33521e+09 | 187743 | 1.58527 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 55.5726 | 3.5427 | 10423.3ms | 400000 | 30 | 1.77414e+12 | 6.86434e+06 | 17.4278 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 45.1453 | 4.56094 | 8760.28ms | 400000 | 48 | 7.12925e+12 | 8.44982e+06 | 29.9575 | -(Loss) | false |
| strtoll/strtoull | 32.5644 | 9.06216 | 13114.5ms | 400000 | 48 | 5.40928e+13 | 1.17143e+07 | 2.33011 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 717.206 | 1.09179 | 1.47513ms | 800 | 30 | 4046.6 | 1063.77 | 0.910672 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 301.197 | 5.62682 | 3.13242ms | 800 | 48 | 975091 | 2533.02 | 7.15734 | -(Loss) | false |
| strtoll/strtoull | 215.672 | 2.00331 | 4.33788ms | 800 | 30 | 150665 | 3537.5 | 0.633434 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 700.049 | 1.48075 | 17.0845ms | 8000 | 48 | 1.25006e+06 | 10898.4 | 0.874 | 1(Win) | true |
| std::from_chars | 325.946 | 1.27775 | 30.1508ms | 8000 | 30 | 2.6835e+06 | 23406.9 | 0.603443 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 239.855 | 2.5736 | 52.1838ms | 8000 | 30 | 2.01041e+07 | 31808.4 | 17.3043 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 476.964 | 5.29873 | 177.347ms | 80000 | 48 | 3.44821e+09 | 159958 | 5.91652 | -(Win) | false |
| std::from_chars | 199.288 | 8.44276 | 387.387ms | 80000 | 30 | 3.13405e+10 | 382832 | 1.62892 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 128.164 | 6.02974 | 510.921ms | 80000 | 30 | 3.86515e+10 | 595283 | 19.691 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull DID NOT CONVERGE | 49.6283 | 2.52088 | 35205.1ms | 800000 | 30 | 4.50553e+12 | 1.53731e+07 | 14.6933 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 33.3185 | 7.28808 | 46998.4ms | 800000 | 30 | 8.35519e+13 | 2.28983e+07 | 18.805 | -(Loss) | false |
| vn::from_chars DID NOT CONVERGE | 8.72469 | 4.22314 | 37050.6ms | 800000 | 30 | 4.09141e+14 | 8.7446e+07 | 12.1817 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 293.273 | 9.92667 | 3.31354ms | 800 | 30 | 2.00062e+06 | 2601.47 | 4.1359 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 285.806 | 2.42928 | 3.86875ms | 800 | 30 | 126158 | 2669.43 | 4.11477 | 1(Tie) | true |
| strtoll/strtoull | 87.5828 | 2.65458 | 7.63021ms | 800 | 30 | 1.60419e+06 | 8711.07 | 3.5686 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1125.41 | 0.416125 | 13.5986ms | 8000 | 30 | 23874.3 | 6779.23 | 2.27017 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 319.881 | 1.07532 | 43.7272ms | 8000 | 48 | 3.15731e+06 | 23850.8 | 11.1565 | -(Loss) | false |
| strtoll/strtoull | 104.598 | 0.86238 | 47.6205ms | 8000 | 30 | 1.18701e+07 | 72940.4 | 3.65418 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1089.52 | 1.11315 | 130.429ms | 80000 | 48 | 2.91645e+07 | 70025.2 | 2.08381 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 282.864 | 2.66716 | 399.407ms | 80000 | 30 | 1.55255e+09 | 269719 | 10.3436 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 203.977 | 10.0375 | 608.691ms | 80000 | 30 | 4.2285e+10 | 374032 | 9.7756 | -(Loss) | false |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull | 45.913 | 4.29138 | 43467.7ms | 800000 | 30 | 1.52554e+13 | 1.66171e+07 | 4.57135 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 34.304 | 6.97285 | 40939.4ms | 800000 | 30 | 7.21495e+13 | 2.22405e+07 | 14.879 | -(Loss) | false |
| vn::from_chars DID NOT CONVERGE | 6.29546 | 11.7211 | 37712.4ms | 800000 | 30 | 6.05319e+15 | 1.21189e+08 | 8.43597 | -(Loss) | false |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 1130.39 | 1.04243 | 0.988375ms | 800 | 30 | 1485.03 | 674.933 | 12.4449 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 328.067 | 0.33176 | 4.89417ms | 800 | 48 | 2857.23 | 2325.56 | 5.51231 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 240.291 | 1.5268 | 6.42558ms | 800 | 30 | 70499.9 | 3175.07 | 12.1192 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1167.52 | 0.751685 | 14.4153ms | 8000 | 30 | 72384.4 | 6534.7 | 0.145462 | 1(Win) | true |
| strtoll/strtoull | 276.067 | 2.25948 | 39.6745ms | 8000 | 30 | 1.16974e+07 | 27636 | 0.76864 | 2(Loss) | true |
| std::from_chars DID NOT CONVERGE | 209.009 | 11.3412 | 38.452ms | 8000 | 30 | 5.14153e+08 | 36502.8 | 26.1305 | -(Loss) | false |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 1018.96 | 2.79088 | 118.34ms | 80000 | 48 | 2.09599e+08 | 74874.1 | 7.33354 | -(Win) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 293.305 | 1.38213 | 376.577ms | 80000 | 30 | 3.87757e+08 | 260118 | 5.7899 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 284.259 | 0.995673 | 389.33ms | 80000 | 30 | 2.14243e+08 | 268396 | 7.04456 | -(Tie) | false |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 61.6041 | 8.88042 | 36699.1ms | 800000 | 48 | 5.80589e+13 | 1.23846e+07 | 4.36969 | 1(Win) | true |
| strtoll/strtoull DID NOT CONVERGE | 33.2533 | 11.6408 | 20572.1ms | 800000 | 30 | 2.13992e+14 | 2.29433e+07 | 12.5475 | -(Loss) | false |
| std::from_chars DID NOT CONVERGE | 12.4515 | 4.8311 | 33090.5ms | 800000 | 48 | 4.20603e+14 | 6.12731e+07 | 30.0732 | -(Loss) | false |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 733.082 | 0.949833 | 1.33442ms | 800 | 48 | 4690.41 | 1040.73 | 0.443556 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 127.217 | 0.658334 | 6.33758ms | 800 | 30 | 46762.8 | 5997.13 | 5.61988 | -(Loss) | false |
| strtoll/strtoull | 97.4832 | 1.84566 | 9.15867ms | 800 | 30 | 625960 | 7826.37 | 2.96249 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 318.983 | 4.23567 | 16.7743ms | 8000 | 30 | 3.07902e+07 | 23917.9 | 0.54227 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 293.478 | 5.34651 | 36.4588ms | 8000 | 48 | 9.27281e+07 | 25996.5 | 4.96554 | 1(Tie) | true |
| strtoll/strtoull DID NOT CONVERGE | 251.83 | 1.47992 | 43.9836ms | 8000 | 30 | 6.03062e+06 | 30295.9 | 8.62501 | -(Loss) | false |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 558.465 | 4.97659 | 193.509ms | 80000 | 48 | 2.21868e+09 | 136614 | 8.55937 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 307.27 | 1.79703 | 384.641ms | 80000 | 30 | 5.97271e+08 | 248296 | 7.27068 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 187.193 | 5.85573 | 514.194ms | 80000 | 48 | 2.73403e+10 | 407568 | 10.9346 | -(Loss) | false |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 52.8629 | 3.64705 | 24854.3ms | 800000 | 48 | 1.32985e+13 | 1.44324e+07 | 6.73608 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 48.7959 | 4.80704 | 46466.1ms | 800000 | 30 | 1.69469e+13 | 1.56353e+07 | 6.2683 | -(Tie) | false |
| std::from_chars DID NOT CONVERGE | 21.8015 | 7.67554 | 20912.7ms | 800000 | 30 | 2.16445e+14 | 3.49948e+07 | 37.1175 | -(Loss) | false |
