# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.3 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 358.092 | 0.979723 | 0.89375ms | 265 | 48 | 2300.25 | 706.583 | 1.78613 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 353.247 | 1.75049 | 5.25417ms | 265 | 30 | 4720.59 | 716.6 | 0.189194 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 351.076 | 1.98155 | 11.5145ms | 2653 | 48 | 978832 | 7206.58 | 12.4274 | -(Win) | false |
| jeaiii::to_text | 271.57 | 3.74159 | 10.4245ms | 2652 | 30 | 3.64219e+06 | 9312.47 | 2.17055 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 307.282 | 2.39987 | 93.6954ms | 26477 | 30 | 1.16674e+08 | 82174.9 | 2.86127 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 297.158 | 3.56596 | 112.912ms | 26467 | 30 | 2.75234e+08 | 84940.2 | 4.21394 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 366.556 | 0.670174 | 1011.8ms | 264619 | 30 | 6.38641e+08 | 688462 | 1.41072 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 226.155 | 6.37877 | 1491.48ms | 264611 | 30 | 1.51983e+11 | 1.11584e+06 | 17.3591 | -(Loss) | false |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 765.011 | 1.6611 | 0.51475ms | 315 | 30 | 1278.06 | 392.933 | 0.0254431 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 748.258 | 1.53359 | 0.542625ms | 315 | 30 | 1137.01 | 401.433 | 0.316535 | 1(Tie) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 796.553 | 0.636723 | 4.73625ms | 3142 | 30 | 17205.5 | 3761.17 | 1.38439 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 660.089 | 5.44974 | 5.01375ms | 3142 | 30 | 1.83545e+06 | 4538.73 | 6.20647 | -(Loss) | false |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 817.09 | 0.313788 | 45.0215ms | 31436 | 48 | 636254 | 36690.9 | 1.09148 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 800.663 | 1.87791 | 47.0165ms | 31436 | 48 | 2.37327e+07 | 37443.7 | 1.72283 | 1(Tie) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 787.765 | 0.667595 | 718.646ms | 314478 | 30 | 1.93792e+08 | 380710 | 0.922685 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 370.853 | 4.4704 | 1244.74ms | 314478 | 30 | 3.92096e+10 | 808703 | 44.1057 | -(Loss) | false |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 556.317 | 1.297 | 0.495458ms | 215 | 30 | 688.516 | 369.367 | 0.404458 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 521.242 | 3.20046 | 0.546875ms | 215 | 48 | 7604.93 | 393.292 | 7.4753 | -(Tie) | false |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE | 508.959 | 1.91489 | 4.70317ms | 2145 | 30 | 177721 | 4019.43 | 0.520178 | 1(Tie) | true |
| vn (unchecked core) STATISTICAL TIE | 499 | 2.22906 | 4.67196ms | 2149 | 48 | 402227 | 4106.71 | 4.962 | 1(Tie) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 629.923 | 0.261969 | 43.0214ms | 21498 | 30 | 218095 | 32547.1 | 1.2725 | 1(Win) | true |
| jeaiii::to_text | 535.101 | 1.55301 | 52.4252ms | 21483 | 30 | 1.06068e+07 | 38287.6 | 2.72761 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 586.74 | 0.703962 | 435.298ms | 214843 | 30 | 1.81289e+08 | 349201 | 3.35011 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 436.772 | 3.96139 | 631.524ms | 214900 | 30 | 1.03652e+10 | 469225 | 11.7553 | -(Loss) | false |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 540.097 | 2.26631 | 0.634417ms | 257 | 48 | 5063.79 | 453.208 | 2.58472 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 535.922 | 1.5695 | 0.606ms | 258 | 30 | 1552.87 | 458.4 | 2.5631 | 1(Tie) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 601.457 | 0.561174 | 5.17021ms | 2571 | 48 | 25130 | 4077.35 | 5.05784 | -(Win) | false |
| jeaiii::to_text | 572.497 | 0.855518 | 5.255ms | 2567 | 30 | 40154 | 4276.37 | 0.0662118 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 500.376 | 4.05487 | 60.2352ms | 25711 | 48 | 1.89511e+08 | 49002.6 | 4.23306 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 475.273 | 3.56363 | 62.3077ms | 25707 | 30 | 1.01374e+08 | 51583.3 | 1.01973 | 1(Tie) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 552.203 | 0.390941 | 820.463ms | 256995 | 30 | 9.03223e+07 | 443839 | 12.3408 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 233.708 | 14.087 | 1345.35ms | 257048 | 30 | 6.55003e+11 | 1.04892e+06 | 18.1885 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 676.684 | 1.39021 | 1.06121ms | 516 | 30 | 3070.62 | 727.733 | 1.61334 | 1(Win) | true |
| jeaiii::to_text | 610.268 | 3.39977 | 1.17813ms | 516 | 30 | 22578.5 | 806.933 | 3.40052 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 712.984 | 0.482888 | 8.82367ms | 5164 | 30 | 33371.6 | 6906.87 | 0.286949 | 1(Win) | true |
| jeaiii::to_text | 509.612 | 3.98022 | 11.4942ms | 5159 | 30 | 4.42954e+06 | 9654.1 | 3.71534 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 715.731 | 1.21265 | 88.1465ms | 51620 | 30 | 2.08702e+07 | 68780.5 | 0.285841 | 1(Win) | true |
| jeaiii::to_text | 668.625 | 0.443747 | 92.9044ms | 51620 | 30 | 3.20228e+06 | 73626.3 | 4.41755 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 127.764 | 5.80482 | 8263.24ms | 516106 | 30 | 1.50025e+12 | 3.8524e+06 | 5.81138 | -(Tie) | false |
| vn (unchecked core) STATISTICAL TIE | 113.466 | 3.95278 | 5190.75ms | 516111 | 30 | 8.82029e+11 | 4.33789e+06 | 2.38909 | 1(Tie) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1115.26 | 2.41659 | 0.682583ms | 568 | 48 | 6602.22 | 485.312 | 0.701169 | 1(Win) | true |
| jeaiii::to_text | 903.652 | 1.7768 | 1.02083ms | 568 | 48 | 5436.42 | 598.958 | 0.288832 | 2(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1313.55 | 0.682255 | 6.27442ms | 5662 | 48 | 37759.8 | 4111 | 1.59657 | 1(Win) | true |
| jeaiii::to_text | 1244.01 | 0.454982 | 5.28346ms | 5660 | 30 | 11692 | 4339 | 0.167289 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1230.09 | 0.942796 | 54.0836ms | 56617 | 30 | 5.1378e+06 | 43894.5 | 0.697977 | 1(Win) | true |
| jeaiii::to_text | 956.012 | 3.70697 | 65.4019ms | 56595 | 30 | 1.31399e+08 | 56456.9 | 0.323974 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1276.82 | 0.438314 | 637.744ms | 566093 | 30 | 1.0304e+08 | 422822 | 8.66178 | -(Win) | false |
| jeaiii::to_text | 1010.75 | 2.74361 | 750.354ms | 566091 | 48 | 1.0308e+10 | 534126 | 1.66498 | 2(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1028.83 | 1.75653 | 0.590541ms | 465 | 30 | 1715.98 | 430.567 | 0.341801 | 1(Win) | true |
| jeaiii::to_text | 959.225 | 1.47618 | 0.654834ms | 467 | 30 | 1406.85 | 463.9 | 0.827506 | 2(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1045.22 | 0.470413 | 5.43879ms | 4660 | 30 | 11999.4 | 4251.47 | 0.258125 | 1(Win) | true |
| vn (unchecked core) | 588.263 | 0.426723 | 8.65704ms | 4661 | 30 | 31184.3 | 7555.47 | 0.802633 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1064.77 | 1.64551 | 54.1196ms | 46618 | 30 | 1.41619e+07 | 41754.2 | 4.13254 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 781.027 | 1.89175 | 71.3476ms | 46606 | 48 | 5.56307e+07 | 56908 | 10.2337 | -(Loss) | false |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 518.903 | 5.0894 | 1099.64ms | 466117 | 30 | 5.70257e+10 | 856660 | 17.1804 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 439.298 | 15.4516 | 932.529ms | 466052 | 30 | 7.33189e+11 | 1.01175e+06 | 0.587782 | -(Tie) | false |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1608.05 | 2.28496 | 0.483375ms | 482 | 30 | 1281.48 | 286.033 | 0.988584 | 1(Win) | true |
| jeaiii::to_text | 1233.9 | 3.04645 | 0.585583ms | 483 | 30 | 3885.5 | 373.567 | 3.90682 | 2(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1761.34 | 0.501473 | 3.20992ms | 4828 | 30 | 5154.86 | 2613.97 | 0.00510106 | 1(Win) | true |
| jeaiii::to_text | 1609.12 | 0.479375 | 3.54079ms | 4834 | 48 | 9052.17 | 2864.71 | 0.0741236 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1808.39 | 0.587599 | 31.5475ms | 48304 | 30 | 672153 | 25473.7 | 0.162909 | 1(Win) | true |
| jeaiii::to_text | 1623.57 | 0.183819 | 34.468ms | 48300 | 30 | 81592.1 | 28370.9 | 0.866879 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1411.04 | 1.90633 | 898.915ms | 483023 | 30 | 1.16192e+09 | 326460 | 13.2441 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 800.064 | 12.643 | 1284.88ms | 483018 | 30 | 1.58963e+11 | 575756 | 36.3646 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1598.24 | 0.861125 | 0.875541ms | 999 | 48 | 1265.85 | 596.354 | 0.531721 | 1(Win) | true |
| jeaiii::to_text | 1026.43 | 0.706272 | 1.19504ms | 997 | 30 | 1284.01 | 926.3 | 0.282834 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1681.34 | 0.354475 | 7.07888ms | 9985 | 30 | 12092.4 | 5663.83 | 0.294864 | 1(Win) | true |
| jeaiii::to_text | 1014.51 | 1.119 | 11.4832ms | 9980 | 30 | 330638 | 9381.8 | 0.237838 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 1560.48 | 1.42331 | 74.0896ms | 99835 | 48 | 3.61982e+07 | 61013.1 | 1.20011 | 1(Win) | true |
| jeaiii::to_text | 1089.96 | 0.511792 | 104.737ms | 99829 | 30 | 5.99522e+06 | 87347.2 | 0.0843612 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 331.552 | 7.0449 | 7923.84ms | 998304 | 30 | 1.2277e+12 | 2.87152e+06 | 10.1112 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 108.651 | 4.05507 | 12072.7ms | 998240 | 48 | 6.05955e+12 | 8.76195e+06 | 8.2986 | -(Loss) | false |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1433.84 | 26.7979 | 0.977084ms | 1048 | 30 | 1.04742e+06 | 697.267 | 13.058 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE DID NOT CONVERGE | 1263.9 | 2.75328 | 0.997167ms | 1047 | 30 | 14202.6 | 790.267 | 5.96541 | -(Tie) | false |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3733.93 | 0.31631 | 3.32837ms | 10484 | 30 | 2152.2 | 2677.73 | 0.363411 | 1(Win) | true |
| jeaiii::to_text | 1386.25 | 1.9459 | 9.00662ms | 10484 | 30 | 590946 | 7212.6 | 1.40738 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2934.63 | 4.87302 | 40.1541ms | 104830 | 48 | 1.32282e+08 | 34066.9 | 6.76014 | -(Win) | false |
| jeaiii::to_text | 1309.73 | 0.508704 | 91.4791ms | 104830 | 48 | 7.23735e+06 | 76331.6 | 0.995607 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 383.77 | 8.35591 | 8417.29ms | 1048302 | 30 | 1.42147e+12 | 2.60504e+06 | 9.48731 | -(Win) | false |
| vn (unchecked core) | 105.387 | 7.97652 | 9467.86ms | 1048252 | 30 | 1.71754e+13 | 9.48591e+06 | 1.70868 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3538.86 | 1.87711 | 0.451208ms | 948 | 30 | 690.052 | 255.5 | 1.58093 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1026.65 | 2.20462 | 1.23942ms | 949 | 48 | 18111 | 881.083 | 6.29099 | -(Loss) | false |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3692.2 | 1.45025 | 3.12833ms | 9485 | 30 | 37871.6 | 2449.93 | 1.0921 | 1(Win) | true |
| jeaiii::to_text | 958.352 | 3.99422 | 12.7628ms | 9480 | 30 | 4.25908e+06 | 9433.33 | 3.71087 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3255.21 | 1.50332 | 34.5766ms | 94829 | 30 | 5.23297e+06 | 27781.9 | 0.698172 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1145.08 | 5.08876 | 199.542ms | 94829 | 30 | 4.84567e+08 | 78977.7 | 10.5578 | -(Loss) | false |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 923.04 | 2.16832 | 4861.06ms | 948285 | 30 | 1.35396e+10 | 979757 | 18.4074 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 367.028 | 1.289 | 4302.32ms | 948246 | 48 | 4.84167e+10 | 2.46389e+06 | 15.5816 | -(Loss) | false |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2815.63 | 23.6921 | 0.494833ms | 976 | 30 | 183975 | 330.533 | 2.14256 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 1122.34 | 13.1346 | 1.14717ms | 974 | 48 | 566721 | 827.271 | 3.15634 | -(Loss) | false |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 3651.14 | 2.49209 | 3.61708ms | 9741 | 30 | 120623 | 2544.43 | 12.0446 | -(Win) | false |
| jeaiii::to_text | 1931.55 | 1.36104 | 6.51596ms | 9741 | 30 | 128556 | 4809.67 | 1.43552 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2700.45 | 3.71112 | 40.7224ms | 97424 | 30 | 4.8909e+07 | 34405.6 | 9.65376 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 1511.96 | 5.24343 | 73.7732ms | 97423 | 30 | 3.11455e+08 | 61449.9 | 9.56329 | -(Loss) | false |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 869.707 | 4.54726 | 6033.36ms | 974124 | 30 | 7.07788e+10 | 1.06817e+06 | 28.1064 | -(Win) | false |
| vn (unchecked core) | 83.7673 | 7.99335 | 11671.9ms | 974124 | 30 | 2.35753e+13 | 1.10902e+07 | 1.00378 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2474.11 | 3.05818 | 1.00825ms | 1938 | 30 | 15663.3 | 747.167 | 7.10349 | -(Win) | false |
| jeaiii::to_text DID NOT CONVERGE | 847.72 | 11.7664 | 3.18929ms | 1938 | 30 | 1.97497e+06 | 2180.6 | 8.11837 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1907.96 | 0.776944 | 16.6089ms | 19381 | 30 | 169948 | 9687.4 | 2.38084 | 1(Win) | true |
| vn (unchecked core) | 872.189 | 9.45188 | 40.5192ms | 19377 | 30 | 1.20314e+08 | 21187.5 | 1.35021 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1748.93 | 1.07928 | 137.262ms | 193800 | 48 | 6.24411e+07 | 105677 | 1.16679 | 1(Win) | true |
| vn (unchecked core) | 1476.53 | 6.45567 | 148.874ms | 193805 | 30 | 1.95906e+09 | 125176 | 2.76266 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text | 1119.16 | 4.97847 | 15918.2ms | 1937963 | 30 | 2.02779e+11 | 1.65141e+06 | 1.02769 | 1(Win) | true |
| vn (unchecked core) DID NOT CONVERGE | 297.951 | 2.92327 | 11678.5ms | 1937946 | 48 | 1.57823e+12 | 6.20292e+06 | 25.3811 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4626.55 | 1.82994 | 0.570834ms | 1988 | 30 | 1686.55 | 409.733 | 0.0111874 | 1(Win) | true |
| jeaiii::to_text | 2779.27 | 1.5389 | 0.894708ms | 1988 | 30 | 3305.17 | 682.067 | 2.17908 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4778.92 | 1.5481 | 5.1465ms | 19878 | 30 | 113135 | 3966.77 | 0.168767 | 1(Win) | true |
| jeaiii::to_text | 2546.4 | 1.79715 | 11.5538ms | 19878 | 30 | 536995 | 7444.57 | 4.9832 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4564.6 | 1.5135 | 54.372ms | 198798 | 30 | 1.18551e+07 | 41534.6 | 0.290268 | 1(Win) | true |
| jeaiii::to_text | 2268.96 | 2.49704 | 120.246ms | 198786 | 30 | 1.30585e+08 | 83552.8 | 3.39622 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1129.88 | 5.65791 | 7568.08ms | 1987969 | 30 | 2.70389e+11 | 1.67795e+06 | 18.1062 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 142.874 | 8.56688 | 10809ms | 1987957 | 30 | 3.87681e+13 | 1.32695e+07 | 7.36958 | -(Loss) | false |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4366.8 | 2.95192 | 0.630917ms | 1888 | 48 | 7111.25 | 412.333 | 4.84615 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 752.248 | 8.55239 | 3.29663ms | 1887 | 30 | 1.25526e+06 | 2391.77 | 9.07444 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 4093.73 | 10.7156 | 7.23183ms | 18876 | 30 | 6.66097e+06 | 4397.37 | 12.0358 | -(Win) | false |
| jeaiii::to_text | 2695.6 | 1.2243 | 14.8055ms | 18880 | 48 | 321006 | 6679.56 | 1.76107 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 4621.67 | 0.715667 | 66.2387ms | 188799 | 30 | 2.3321e+06 | 38958.5 | 4.88269 | 1(Win) | true |
| jeaiii::to_text | 2755.74 | 1.08598 | 86.3653ms | 188799 | 30 | 1.51038e+07 | 65337.4 | 0.0468047 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 1004.28 | 4.60142 | 5310.6ms | 1887963 | 30 | 2.04166e+11 | 1.79283e+06 | 18.1852 | -(Win) | false |
| vn (unchecked core) | 447.217 | 5.69921 | 5782.23ms | 1887936 | 30 | 1.57939e+12 | 4.02596e+06 | 0.193591 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 5012.43 | 1.46989 | 0.510917ms | 1939 | 48 | 1410.98 | 368.854 | 0.195808 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1996.16 | 0.948976 | 1.19479ms | 1939 | 48 | 3708.25 | 926.208 | 6.46565 | -(Loss) | false |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 3391.35 | 4.88164 | 7.95737ms | 19401 | 48 | 3.40472e+06 | 5455.75 | 3.34111 | 1(Win) | true |
| jeaiii::to_text | 2082.26 | 2.06732 | 10.9687ms | 19393 | 30 | 1.01144e+06 | 8881.83 | 0.787524 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn (unchecked core) | 2630.37 | 4.97455 | 92.9028ms | 193981 | 30 | 3.6721e+08 | 70330.4 | 2.59258 | 1(Win) | true |
| jeaiii::to_text | 1931.14 | 1.35805 | 132.428ms | 193981 | 30 | 5.07746e+07 | 95795.8 | 1.77234 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| jeaiii::to_text DID NOT CONVERGE | 630.906 | 5.7026 | 13899.6ms | 1939723 | 30 | 8.38722e+11 | 2.93208e+06 | 8.49363 | -(Win) | false |
| vn (unchecked core) DID NOT CONVERGE | 136.37 | 7.02158 | 24616.7ms | 1939695 | 30 | 2.72157e+13 | 1.35648e+07 | 48.4236 | -(Loss) | false |
