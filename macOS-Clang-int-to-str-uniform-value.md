# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.3 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 416.715 | 1.76545 | 0.780833ms | 265 | 30 | 3445.17 | 607 | 9.68606 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 161.426 | 11.333 | 10.9301ms | 265 | 30 | 947495 | 1568.13 | 0.00425152 | -(Loss) | false |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 509.622 | 1.99158 | 8.64821ms | 2640 | 30 | 290405 | 4940.2 | 0.818351 | 1(Win) | true |
| jeaiii::to_text | 339.016 | 2.73149 | 8.94388ms | 2647 | 30 | 1.24136e+06 | 7447.13 | 1.72855 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 527.354 | 1.60016 | 71.2853ms | 26460 | 30 | 1.75888e+07 | 47851.4 | 9.20527 | -(Win) | false |
| jeaiii::to_text | 327.639 | 1.75755 | 90.1441ms | 26460 | 30 | 5.49717e+07 | 77019.5 | 1.55868 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 238.903 | 1.12389 | 1996.04ms | 264655 | 30 | 4.22942e+09 | 1.05647e+06 | 10.3713 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 107.079 | 10.1278 | 2572.79ms | 264610 | 30 | 1.70905e+12 | 2.35669e+06 | 0.746939 | -(Loss) | false |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1539.61 | 6.27576 | 0.290625ms | 314 | 30 | 4469.84 | 194.5 | 3.36204 | 1(Win) | true |
| jeaiii::to_text | 745.997 | 1.88954 | 0.662125ms | 314 | 48 | 2769.53 | 402 | 0.141161 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2121.93 | 2.58327 | 1.82008ms | 3140 | 30 | 39871 | 1411.23 | 1.90882 | 1(Win) | true |
| jeaiii::to_text | 667.885 | 1.99022 | 5.17938ms | 3147 | 30 | 239884 | 4493.03 | 4.99786 | 2(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2255.21 | 1.39331 | 18.977ms | 31445 | 30 | 1.02978e+06 | 13297.3 | 9.21607 | -(Win) | false |
| jeaiii::to_text | 798.652 | 1.35623 | 45.6156ms | 31446 | 30 | 7.78051e+06 | 37550.1 | 3.20687 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 701.209 | 1.63907 | 1092.64ms | 314488 | 30 | 1.47444e+09 | 427717 | 19.7604 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 176.244 | 12.5493 | 1925.91ms | 314488 | 30 | 1.36818e+12 | 1.70172e+06 | 0.9775 | -(Loss) | false |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1210.58 | 4.39888 | 0.235959ms | 215 | 30 | 1665.83 | 169.4 | 7.89809 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 517.094 | 2.74708 | 0.580834ms | 215 | 30 | 3571.75 | 397.2 | 9.77427 | -(Loss) | false |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1829.32 | 1.02494 | 1.50137ms | 2148 | 48 | 6322.89 | 1119.79 | 1.68067 | 1(Win) | true |
| jeaiii::to_text | 605.234 | 0.468549 | 4.17179ms | 2148 | 48 | 12071.4 | 3384.56 | 0.124062 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1625.35 | 0.516118 | 15.1343ms | 21472 | 30 | 126843 | 12598.6 | 0.280145 | 1(Win) | true |
| jeaiii::to_text | 542.357 | 1.72548 | 45.6895ms | 21485 | 30 | 1.2748e+07 | 37779.1 | 1.38511 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 705.11 | 10.9768 | 404.82ms | 214850 | 48 | 4.88369e+10 | 290589 | 48.2332 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 140.908 | 15.2309 | 1112.66ms | 214846 | 30 | 1.47148e+12 | 1.45409e+06 | 18.793 | -(Loss) | false |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 777.52 | 24.8743 | 0.372708ms | 256 | 48 | 293249 | 314.229 | 8.7549 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE | 530.194 | 1.88271 | 0.680708ms | 256 | 30 | 2261.22 | 461.133 | 4.07764 | 1(Tie) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 941.423 | 7.12173 | 3.26683ms | 2574 | 48 | 1.65545e+06 | 2607.67 | 1.3891 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 433.701 | 4.62586 | 6.61383ms | 2571 | 30 | 2.0513e+06 | 5652.77 | 5.35985 | -(Loss) | false |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1209.15 | 3.66196 | 73.4691ms | 25705 | 30 | 1.65351e+07 | 20273.5 | 10.3115 | -(Win) | false |
| jeaiii::to_text | 447.062 | 4.22753 | 62.1753ms | 25711 | 48 | 2.58061e+08 | 54847.1 | 2.45814 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 324.368 | 1.31454 | 1291.45ms | 257057 | 30 | 2.9611e+09 | 755774 | 27.576 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 168.008 | 12.3913 | 1986.37ms | 257057 | 30 | 9.80753e+11 | 1.45915e+06 | 6.84038 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 675.078 | 1.15076 | 1.34163ms | 518 | 30 | 2127.91 | 731.867 | 2.52608 | 1(Win) | true |
| vn (unchecked core) | 560.27 | 1.06469 | 1.042ms | 516 | 48 | 4197.85 | 878.354 | 0.567431 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 609.779 | 2.40959 | 10.0762ms | 5161 | 48 | 1.81547e+06 | 8071.08 | 0.589706 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 267.136 | 16.8767 | 17.9133ms | 5160 | 30 | 2.89949e+08 | 18420.9 | 0.997127 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 627.708 | 1.44096 | 104.779ms | 51618 | 30 | 3.83104e+07 | 78423.5 | 1.01177 | 1(Win) | true |
| jeaiii::to_text | 414.11 | 3.96844 | 129.363ms | 51619 | 48 | 1.06824e+09 | 118876 | 1.22485 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 281.759 | 3.36579 | 3121.82ms | 516121 | 30 | 1.03716e+11 | 1.74692e+06 | 15.5383 | -(Win) | false |
| jeaiii::to_text | 101.093 | 7.94678 | 5863.29ms | 516121 | 30 | 4.49122e+12 | 4.86889e+06 | 0.258303 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 989.402 | 2.60194 | 0.683542ms | 568 | 30 | 6081.48 | 547.2 | 2.47591 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 594.706 | 18.5746 | 1.0405ms | 566 | 30 | 851477 | 907 | 15.365 | -(Loss) | false |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1131.54 | 3.24997 | 5.77925ms | 5669 | 30 | 723320 | 4777.77 | 2.13704 | 1(Win) | true |
| jeaiii::to_text | 1009.46 | 1.59918 | 6.66617ms | 5669 | 30 | 220056 | 5355.6 | 3.90615 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1250.87 | 3.64796 | 66.1002ms | 56606 | 30 | 7.43573e+07 | 43157 | 2.07032 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1212.97 | 0.586558 | 54.3015ms | 56606 | 30 | 2.04443e+06 | 44505.6 | 1.08524 | 1(Tie) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 240.245 | 6.39381 | 2827.57ms | 566085 | 48 | 9.90864e+11 | 2.24712e+06 | 8.87981 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 196.795 | 6.68333 | 2815.75ms | 566085 | 48 | 1.61348e+12 | 2.74326e+06 | 9.49915 | -(Loss) | false |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 807.698 | 1.37736 | 0.723709ms | 466 | 30 | 1720.81 | 549.867 | 5.58707 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 463.801 | 19.3049 | 1.14075ms | 466 | 30 | 1.02681e+06 | 958.333 | 3.5924 | -(Loss) | false |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1243.45 | 0.431968 | 4.40283ms | 4660 | 30 | 7149.13 | 3573.67 | 0.119067 | 1(Win) | true |
| jeaiii::to_text | 897.011 | 1.76583 | 6.20838ms | 4660 | 48 | 367455 | 4954.88 | 2.72081 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1246.76 | 1.0273 | 48.1792ms | 46602 | 30 | 4.02314e+06 | 35647.2 | 1.0792 | 1(Win) | true |
| jeaiii::to_text | 1079.62 | 0.196101 | 57.4123ms | 46621 | 30 | 195657 | 41182 | 4.24725 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 233.682 | 11.2673 | 2929.27ms | 466074 | 30 | 1.3779e+12 | 1.90208e+06 | 18.8525 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 141.56 | 8.64427 | 2879.55ms | 466072 | 48 | 3.53607e+12 | 3.13987e+06 | 6.10881 | -(Loss) | false |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1266.09 | 2.31604 | 0.460917ms | 482 | 48 | 3389.22 | 362.812 | 1.03314 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 763.944 | 21.6442 | 0.737209ms | 482 | 30 | 508200 | 601.333 | 7.09172 | -(Tie) | false |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1761.16 | 0.700664 | 3.30971ms | 4827 | 30 | 10062.5 | 2613.87 | 1.34278 | 1(Win) | true |
| jeaiii::to_text | 958.72 | 7.98552 | 5.59421ms | 4832 | 30 | 4.42036e+06 | 4806.9 | 1.46634 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1597.6 | 1.49419 | 42.2242ms | 48304 | 30 | 5.56882e+06 | 28834.8 | 7.92304 | -(Win) | false |
| jeaiii::to_text | 1469.71 | 1.5919 | 44.146ms | 48299 | 30 | 7.46724e+06 | 31340.4 | 0.608058 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 236.555 | 10.0873 | 2888.18ms | 483045 | 30 | 1.15767e+12 | 1.94741e+06 | 5.34546 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE | 208.155 | 8.14689 | 2782.69ms | 483064 | 48 | 1.56049e+12 | 2.21319e+06 | 3.13319 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 968.617 | 8.04184 | 1.46808ms | 998 | 48 | 299715 | 982.604 | 4.78027 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 836.167 | 2.10383 | 1.41554ms | 1001 | 30 | 17305.9 | 1141.63 | 2.42971 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1036.35 | 1.92828 | 12.9524ms | 9987 | 30 | 942144 | 9190.27 | 17.0069 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE | 1024.57 | 0.24621 | 12.8241ms | 9981 | 48 | 25111.7 | 9289.94 | 1.01011 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 776.595 | 5.21907 | 177.344ms | 99839 | 30 | 1.22834e+09 | 122604 | 19.2503 | -(Win) | false |
| vn (unchecked core) | 554.924 | 3.91784 | 197.201ms | 99832 | 30 | 1.35546e+09 | 171568 | 0.252314 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 91.9828 | 8.72717 | 13399.3ms | 998254 | 30 | 2.44758e+13 | 1.03499e+07 | 3.58272 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 82.1722 | 11.894 | 11077.7ms | 998254 | 30 | 5.69647e+13 | 1.15855e+07 | 3.05477 | -(Tie) | false |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1391.52 | 1.59602 | 1.05979ms | 1047 | 48 | 6301.09 | 717.875 | 7.363 | -(Tie) | false |
| vn (unchecked core) STATISTICAL TIE | 1366.04 | 2.47265 | 0.948041ms | 1046 | 30 | 9786.05 | 730.433 | 1.88941 | 1(Tie) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1578.26 | 1.54146 | 7.66613ms | 10483 | 48 | 457610 | 6334.23 | 0.530842 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 711.445 | 6.99971 | 42.9393ms | 10479 | 30 | 2.90043e+07 | 14047.2 | 12.1524 | -(Loss) | false |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1706.26 | 1.28008 | 94.5514ms | 104824 | 30 | 1.68744e+07 | 58588.9 | 3.36694 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1352.95 | 5.04197 | 101.789ms | 104816 | 30 | 4.16308e+08 | 73883.3 | 24.3601 | -(Loss) | false |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 308.789 | 9.57124 | 8412.49ms | 1048289 | 30 | 2.88068e+12 | 3.23757e+06 | 4.7831 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 144.065 | 5.18409 | 9658.43ms | 1048249 | 48 | 6.21155e+12 | 6.93916e+06 | 30.0552 | -(Loss) | false |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1570.7 | 1.52993 | 0.801167ms | 947 | 30 | 2322.2 | 575.067 | 1.87134 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 541.374 | 15.6103 | 1.89062ms | 948 | 30 | 2.04076e+06 | 1670.8 | 0.733498 | -(Loss) | false |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1715.25 | 0.34327 | 6.48692ms | 9485 | 48 | 15729 | 5273.44 | 0.631171 | 1(Win) | true |
| jeaiii::to_text | 1330.62 | 1.72857 | 10.3369ms | 9482 | 30 | 413988 | 6795.9 | 3.37537 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1528.43 | 1.45843 | 94.6663ms | 94826 | 48 | 3.57423e+07 | 59167.6 | 2.20662 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1524.95 | 0.530903 | 85.8415ms | 94818 | 30 | 2.97317e+06 | 59297.2 | 0.681694 | 1(Tie) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 276.18 | 5.89467 | 8896.97ms | 948260 | 30 | 1.11767e+12 | 3.27443e+06 | 2.25725 | 1(Win) | true |
| vn (unchecked core) | 110.283 | 4.23051 | 10067.1ms | 948205 | 48 | 5.77578e+12 | 8.19959e+06 | 1.83708 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2553.45 | 1.62326 | 0.5545ms | 974 | 48 | 1674.07 | 363.812 | 0.416286 | 1(Win) | true |
| jeaiii::to_text | 1425.53 | 1.85585 | 0.722917ms | 974 | 30 | 4385.22 | 651.467 | 0.188959 | 2(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2566.23 | 0.581193 | 4.84254ms | 9739 | 30 | 13274.8 | 3619.37 | 3.62747 | 1(Win) | true |
| jeaiii::to_text | 626.833 | 2.43176 | 17.867ms | 9742 | 48 | 6.23597e+06 | 14822.1 | 2.09388 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2642.8 | 0.324265 | 43.1762ms | 97417 | 48 | 623705 | 35153.6 | 0.0571985 | 1(Win) | true |
| jeaiii::to_text | 1836.9 | 2.26772 | 81.0118ms | 97398 | 30 | 3.94483e+07 | 50566.7 | 2.17834 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1856.62 | 1.88427 | 3371.38ms | 974065 | 30 | 2.66648e+09 | 500339 | 5.09131 | -(Win) | false |
| vn (unchecked core) | 235.216 | 5.67916 | 4464.22ms | 974150 | 30 | 1.50941e+12 | 3.94965e+06 | 1.48288 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 1765.54 | 8.26451 | 1.35838ms | 1939 | 30 | 224749 | 1047.3 | 0.00636598 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1572.35 | 15.0377 | 2.34337ms | 1937 | 30 | 936563 | 1174.97 | 11.0702 | -(Tie) | false |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1743.66 | 4.57866 | 12.7905ms | 19376 | 30 | 7.06289e+06 | 10597.2 | 0.489233 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 588.832 | 3.79594 | 40.0919ms | 19382 | 48 | 6.81563e+07 | 31391.5 | 5.80578 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1727.73 | 2.37822 | 196.689ms | 193787 | 30 | 1.94143e+08 | 106967 | 1.26474 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 391.15 | 13.858 | 541.854ms | 193782 | 48 | 2.05769e+11 | 472464 | 23.7424 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 241.041 | 3.81444 | 19566.8ms | 1937955 | 30 | 2.56619e+12 | 7.66749e+06 | 22.9363 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 100.747 | 10.3112 | 19803.6ms | 1937882 | 48 | 1.7173e+14 | 1.8344e+07 | 2.80491 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3740.45 | 4.058 | 0.717833ms | 1988 | 30 | 12693.7 | 506.9 | 1.38676 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1078.71 | 12.5168 | 2.16596ms | 1987 | 30 | 1.45073e+06 | 1756.87 | 2.42254 | -(Loss) | false |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 5078.3 | 0.767075 | 4.70792ms | 19880 | 30 | 24604 | 3733.4 | 0.237044 | 1(Win) | true |
| jeaiii::to_text | 3118.67 | 0.290672 | 7.89108ms | 19880 | 30 | 9367.13 | 6079.1 | 0.0449426 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4137.47 | 1.94902 | 56.2376ms | 198792 | 30 | 2.39267e+07 | 45820.9 | 1.65985 | 1(Win) | true |
| jeaiii::to_text | 2307.8 | 4.64997 | 112.392ms | 198793 | 48 | 7.00407e+08 | 82149.4 | 1.15544 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 516.319 | 6.0191 | 12823ms | 1987912 | 30 | 1.46536e+12 | 3.6718e+06 | 21.8179 | -(Win) | false |
| vn (unchecked core) | 150.201 | 6.51161 | 13899.1ms | 1987937 | 30 | 2.02656e+13 | 1.26221e+07 | 4.01064 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4489.48 | 1.26146 | 0.594667ms | 1889 | 30 | 768.92 | 401.333 | 0.676456 | 1(Win) | true |
| jeaiii::to_text | 2722.61 | 1.03607 | 0.852292ms | 1888 | 30 | 1407.89 | 661.2 | 0.365568 | 2(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4557.08 | 3.25604 | 4.96842ms | 18882 | 30 | 496597 | 3951.4 | 1.96887 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1080.98 | 4.05288 | 19.2315ms | 18879 | 30 | 1.36699e+07 | 16655.6 | 6.37029 | -(Loss) | false |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4366.32 | 1.73372 | 85.2765ms | 188790 | 30 | 1.53323e+07 | 41234.8 | 1.76549 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 442.473 | 19.1228 | 460.53ms | 188790 | 30 | 1.8164e+11 | 406906 | 35.2466 | -(Loss) | false |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 750.202 | 9.1216 | 6969.51ms | 1887970 | 30 | 1.43779e+12 | 2.40003e+06 | 17.2281 | -(Win) | false |
| vn (unchecked core) | 167.203 | 6.89136 | 13203.6ms | 1887979 | 30 | 1.65211e+13 | 1.07684e+07 | 1.60967 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2749.44 | 0.939537 | 0.950459ms | 1939 | 48 | 1917.33 | 672.688 | 0.0526772 | 1(Win) | true |
| jeaiii::to_text | 2069.7 | 1.11288 | 1.17629ms | 1941 | 30 | 2972.46 | 894.433 | 0.355568 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2870.69 | 0.357923 | 8.32975ms | 19399 | 30 | 15961.2 | 6444.4 | 1.33908 | 1(Win) | true |
| jeaiii::to_text | 1830.99 | 4.17022 | 11.9047ms | 19402 | 30 | 5.32809e+06 | 10105.7 | 4.66227 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2443.09 | 2.30046 | 122.396ms | 193986 | 30 | 9.10356e+07 | 75723.5 | 1.78058 | 1(Win) | true |
| jeaiii::to_text | 899.783 | 5.12183 | 145.646ms | 193992 | 30 | 3.32709e+09 | 205611 | 1.48002 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1503.95 | 3.09359 | 6792ms | 1939702 | 30 | 4.34361e+10 | 1.22999e+06 | 17.821 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 110.026 | 6.69122 | 15435.1ms | 1939809 | 48 | 6.07547e+13 | 1.68137e+07 | 6.35506 | -(Loss) | false |
