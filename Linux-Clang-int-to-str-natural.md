# int-to-str-natural  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 593.667 | 1.72914 | 0.085228ms | 265 | 120 | 6504.1 | 425.767 | 4.87162 | 1(Win) |
| jeaiii::to_text | 448.832 | 0.732244 | 0.303359ms | 265 | 240 | 4087.45 | 563.592 | 6.55045 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 606.511 | 2.33036 | 0.747857ms | 2643 | 120 | 1.12589e+06 | 4156.56 | 4.983 | 1(Win) |
| jeaiii::to_text | 466.092 | 0.409858 | 0.998508ms | 2643 | 120 | 58972.4 | 5408.8 | 6.49392 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 655.234 | 0.605704 | 7.15285ms | 26480 | 120 | 6.53973e+06 | 38541.6 | 4.63276 | 1(Win) |
| jeaiii::to_text | 462.516 | 1.63983 | 9.87198ms | 26480 | 120 | 9.62007e+07 | 54600.9 | 6.56063 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 659.512 | 0.464641 | 68.6921ms | 264812 | 120 | 3.79881e+08 | 382927 | 4.60552 | 1(Win) |
| jeaiii::to_text | 486.298 | 0.376517 | 93.8245ms | 264812 | 120 | 4.588e+08 | 519321 | 6.24554 | 2(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1342.7 | 1.90553 | 0.22751ms | 314 | 480 | 8714.42 | 223.606 | 2.07443 | 1(Win) |
| jeaiii::to_text | 828.838 | 2.03696 | 0.079474ms | 314 | 120 | 6507.91 | 361.533 | 3.46188 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1878.78 | 1.96155 | 0.313869ms | 3146 | 120 | 117746 | 1596.92 | 1.59889 | 1(Win) |
| jeaiii::to_text | 1127.35 | 0.261661 | 1.23339ms | 3146 | 240 | 11640.2 | 2661.55 | 2.6726 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2145.21 | 0.914372 | 2.5849ms | 31448 | 120 | 1.96106e+06 | 13980.8 | 1.41087 | 1(Win) |
| jeaiii::to_text | 1104.3 | 1.08508 | 4.96899ms | 31448 | 120 | 1.04214e+07 | 27158.9 | 2.74515 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1962.93 | 1.36848 | 27.2511ms | 314466 | 120 | 5.24567e+08 | 152781 | 1.54614 | 1(Win) |
| jeaiii::to_text | 1062.59 | 0.646509 | 50.2861ms | 314466 | 120 | 3.9953e+08 | 282234 | 2.85712 | 2(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1023.21 | 2.43147 | 0.278353ms | 215 | 300 | 7127.83 | 200.47 | 2.68399 | 1(Win) |
| jeaiii::to_text | 589.542 | 2.16954 | 0.074867ms | 214 | 120 | 6830.16 | 347.742 | 4.877 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1181.11 | 1.61341 | 0.336981ms | 2147 | 120 | 93883.8 | 1733.64 | 2.53115 | 1(Win) |
| jeaiii::to_text | 771.037 | 0.23961 | 1.24777ms | 2147 | 240 | 9723.02 | 2656.38 | 3.90785 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1625.58 | 1.02494 | 2.33475ms | 21489 | 120 | 2.00365e+06 | 12607.2 | 1.85841 | 1(Win) |
| jeaiii::to_text | 768.573 | 0.925688 | 4.91646ms | 21489 | 120 | 7.31134e+06 | 26665.1 | 3.94384 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1416.96 | 1.97545 | 26.67ms | 214832 | 120 | 9.79022e+08 | 144591 | 2.14064 | 1(Win) |
| jeaiii::to_text | 725.493 | 1.32988 | 50.9276ms | 214832 | 120 | 1.69253e+09 | 282401 | 4.185 | 2(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1572.75 | 2.02041 | 0.182232ms | 256 | 480 | 4746.99 | 155.65 | 1.58667 | 1(Win) |
| jeaiii::to_text | 606.639 | 1.74084 | 0.086765ms | 257 | 120 | 5941.95 | 404.217 | 4.74046 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1551.86 | 1.95942 | 0.309156ms | 2570 | 120 | 114961 | 1579.63 | 1.9341 | 1(Win) |
| jeaiii::to_text | 704.682 | 0.614758 | 0.702377ms | 2570 | 120 | 54880.8 | 3478.68 | 4.28437 | 2(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1945.95 | 1.03538 | 2.37305ms | 25698 | 120 | 2.0405e+06 | 12594.5 | 1.55387 | 1(Win) |
| jeaiii::to_text | 717.145 | 0.742984 | 6.22665ms | 25698 | 120 | 7.73657e+06 | 34174.7 | 4.2306 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1565.81 | 0.719686 | 62.4644ms | 257023 | 240 | 3.04622e+08 | 156542 | 1.93875 | 1(Win) |
| jeaiii::to_text | 695.766 | 0.506592 | 62.8019ms | 257049 | 120 | 3.823e+08 | 352333 | 4.36594 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 784.687 | 0.66162 | 0.28708ms | 516 | 240 | 4139.9 | 627.742 | 3.75146 | 1(Win) |
| vn::to_chars | 741.28 | 0.767273 | 0.312643ms | 516 | 240 | 6238.8 | 664.5 | 3.97249 | 2(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 906.706 | 0.93949 | 2.40538ms | 5160 | 240 | 624162 | 5428.13 | 3.33035 | 1(Win) |
| jeaiii::to_text | 830.827 | 0.368451 | 1.08208ms | 5160 | 120 | 57159.2 | 5923.42 | 3.64384 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 888.864 | 1.07893 | 10.0168ms | 51612 | 120 | 4.28368e+07 | 55376.2 | 3.41625 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 880.022 | 0.507162 | 10.1715ms | 51612 | 120 | 9.65613e+06 | 55932.5 | 3.44987 | 1(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 809.389 | 0.423436 | 107.487ms | 516112 | 120 | 7.95668e+08 | 608117 | 3.75295 | 1(Win) |
| jeaiii::to_text | 788.276 | 0.451113 | 110.037ms | 516112 | 120 | 9.52108e+08 | 624405 | 3.85358 | 2(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1527.33 | 1.51501 | 0.082073ms | 566 | 120 | 3441.7 | 353.492 | 1.8808 | 1(Win) |
| jeaiii::to_text | 1383.71 | 1.17863 | 0.083885ms | 566 | 120 | 2537.92 | 390.183 | 2.08251 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1592.39 | 1.09805 | 0.626355ms | 5664 | 120 | 166500 | 3392.31 | 1.89265 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1573.46 | 2.34748 | 1.52767ms | 5659 | 240 | 1.55638e+06 | 3430.44 | 1.91595 | 1(Tie) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1791.59 | 0.667285 | 5.51873ms | 56610 | 120 | 4.85199e+06 | 30134.1 | 1.69282 | 1(Win) |
| jeaiii::to_text | 1602.18 | 1.52092 | 6.12518ms | 56610 | 120 | 3.15185e+07 | 33696.6 | 1.89343 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1382.14 | 0.758193 | 67.8288ms | 566133 | 120 | 1.05263e+09 | 390633 | 2.19762 | 1(Win) |
| vn::to_chars | 1343.02 | 1.00447 | 69.1326ms | 566133 | 120 | 1.9567e+09 | 402009 | 2.26029 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1220.6 | 1.39544 | 0.080372ms | 466 | 120 | 3100.15 | 364.242 | 2.34398 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1214.02 | 1.55072 | 0.087541ms | 466 | 120 | 3870.14 | 366.217 | 2.37519 | 1(Tie) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1450.02 | 0.751332 | 1.4158ms | 4661 | 240 | 127341 | 3065.82 | 2.06936 | 1(Win) |
| jeaiii::to_text | 1207.55 | 2.43484 | 0.676293ms | 4663 | 120 | 964986 | 3682.98 | 2.49209 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1406.09 | 0.648133 | 13.509ms | 46610 | 240 | 1.00758e+07 | 31613.2 | 2.15638 | 1(Win) |
| jeaiii::to_text | 1378.25 | 0.692642 | 6.00174ms | 46614 | 120 | 5.98938e+06 | 32254.6 | 2.20032 | 2(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1240.72 | 0.835393 | 61.9075ms | 466096 | 120 | 1.07489e+09 | 358262 | 2.44679 | 1(Win) |
| jeaiii::to_text | 1158.77 | 0.856782 | 65.8931ms | 466096 | 120 | 1.29622e+09 | 383600 | 2.61994 | 2(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1833.75 | 1.26529 | 0.126585ms | 482 | 240 | 2422.63 | 251.1 | 1.52731 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1809.81 | 1.70308 | 0.131777ms | 482 | 240 | 4505.95 | 254.421 | 1.55355 | 1(Tie) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2000.14 | 0.681929 | 1.06103ms | 4831 | 240 | 59224.1 | 2303.59 | 1.49737 | 1(Win) |
| jeaiii::to_text | 1864.66 | 1.40976 | 0.458993ms | 4830 | 120 | 145563 | 2470.53 | 1.61528 | 2(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2083.01 | 0.554525 | 4.08594ms | 48307 | 120 | 1.80501e+06 | 22117.1 | 1.45454 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2051.84 | 0.834337 | 4.10832ms | 48307 | 120 | 4.21128e+06 | 22453 | 1.47687 | 1(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1700.76 | 1.17711 | 45.8744ms | 483046 | 120 | 1.21987e+09 | 270862 | 1.78458 | 1(Win) |
| vn::to_chars | 1599.15 | 1.095 | 48.9413ms | 483046 | 120 | 1.19402e+09 | 288071 | 1.89849 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1272.46 | 0.900411 | 0.152275ms | 998 | 120 | 5444.44 | 748.075 | 2.32858 | 1(Win) |
| jeaiii::to_text | 1210.05 | 0.939007 | 0.154005ms | 998 | 120 | 6547.74 | 786.658 | 2.44838 | 2(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1384.54 | 0.50843 | 1.41015ms | 9978 | 120 | 146533 | 6873 | 2.18565 | 1(Win) |
| jeaiii::to_text | 1268.26 | 1.92256 | 1.4038ms | 9978 | 120 | 2.49705e+06 | 7503.15 | 2.38685 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1372.46 | 0.487727 | 12.7062ms | 99818 | 120 | 1.37327e+07 | 69360.1 | 2.21229 | 1(Win) |
| jeaiii::to_text | 1322.12 | 0.557203 | 13.082ms | 99818 | 120 | 1.93145e+07 | 72000.9 | 2.29495 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1389.68 | 0.209694 | 123.594ms | 998279 | 120 | 2.47643e+08 | 685073 | 2.18526 | 1(Win) |
| jeaiii::to_text | 1292.89 | 0.33291 | 132.184ms | 998279 | 120 | 7.21133e+08 | 736360 | 2.34768 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1980.01 | 0.99146 | 0.236789ms | 1048 | 240 | 6013.13 | 504.858 | 1.47718 | 1(Win) |
| jeaiii::to_text | 1818.94 | 1.43049 | 0.11035ms | 1047 | 120 | 7403.34 | 549.083 | 1.61318 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2126.44 | 1.38483 | 2.10852ms | 10482 | 240 | 1.01726e+06 | 4701.25 | 1.41619 | 1(Win) |
| jeaiii::to_text | 1919.96 | 0.612526 | 0.987635ms | 10483 | 120 | 122080 | 5207.24 | 1.57291 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2029.83 | 1.35944 | 8.9503ms | 104844 | 120 | 5.38106e+07 | 49258.9 | 1.49419 | 1(Win) |
| jeaiii::to_text | 1952.37 | 0.630161 | 9.33431ms | 104844 | 120 | 1.24982e+07 | 51213.2 | 1.55445 | 2(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1820.75 | 0.478906 | 99.3936ms | 1048279 | 120 | 8.29725e+08 | 549068 | 1.66698 | 1(Win) |
| jeaiii::to_text | 1698.47 | 0.556732 | 105.888ms | 1048279 | 120 | 1.28858e+09 | 588598 | 1.78816 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1743.74 | 1.35424 | 0.11113ms | 948 | 120 | 5927.63 | 518.983 | 1.67295 | 1(Win) |
| jeaiii::to_text | 1678.03 | 1.36977 | 0.115095ms | 948 | 120 | 6548.6 | 539.308 | 1.74733 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1892.62 | 2.25531 | 0.922112ms | 9485 | 120 | 1.39445e+06 | 4779.76 | 1.59535 | 1(Win) |
| jeaiii::to_text | 1695.81 | 1.81554 | 1.0209ms | 9485 | 120 | 1.12558e+06 | 5334.48 | 1.77945 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1926.02 | 0.456098 | 8.4968ms | 94835 | 120 | 5.50447e+06 | 46957.9 | 1.57577 | 1(Win) |
| jeaiii::to_text | 1828.16 | 0.60843 | 8.94617ms | 94835 | 120 | 1.0872e+07 | 49471.4 | 1.65936 | 2(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1582 | 1.53225 | 103.26ms | 948247 | 120 | 9.20599e+09 | 571630 | 1.91915 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1576.58 | 0.526842 | 104.721ms | 948247 | 120 | 1.09585e+09 | 573594 | 1.92598 | 1(Tie) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2540.6 | 1.87443 | 0.079154ms | 973 | 120 | 5632.91 | 365.517 | 1.13387 | 1(Win) |
| jeaiii::to_text | 2170.63 | 2.09027 | 0.089168ms | 973 | 120 | 9596.29 | 427.817 | 1.33341 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2730.19 | 1.06913 | 1.49017ms | 9742 | 240 | 317735 | 3403.27 | 1.10255 | 1(Win) |
| jeaiii::to_text | 2439.1 | 0.772297 | 3.70454ms | 9741 | 480 | 415302 | 3808.71 | 1.23489 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2700.62 | 0.818026 | 6.27341ms | 97421 | 120 | 9.50379e+06 | 34402.5 | 1.12207 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2644 | 0.754255 | 6.46145ms | 97421 | 120 | 8.42952e+06 | 35139.2 | 1.14696 | 1(Tie) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2206.87 | 1.29226 | 76.9836ms | 974115 | 120 | 3.551e+09 | 420952 | 1.37549 | 1(Win) |
| jeaiii::to_text | 2032.84 | 1.98523 | 80.7263ms | 974115 | 120 | 9.87676e+09 | 456989 | 1.49328 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2906.26 | 1.0213 | 0.134175ms | 1937 | 120 | 5059.35 | 635.775 | 1.0132 | 1(Win) |
| jeaiii::to_text | 2394.15 | 0.966464 | 0.154115ms | 1937 | 120 | 6676.13 | 771.767 | 1.23777 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3039.02 | 2.24508 | 1.16596ms | 19377 | 120 | 2.23647e+06 | 6080.77 | 0.99156 | 1(Win) |
| jeaiii::to_text | 2436.87 | 2.47845 | 1.4731ms | 19377 | 120 | 4.23898e+06 | 7583.32 | 1.24157 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3053.81 | 0.469125 | 10.96ms | 193800 | 120 | 9.67354e+06 | 60522 | 0.993688 | 1(Win) |
| jeaiii::to_text | 2513.44 | 0.385893 | 13.3579ms | 193800 | 120 | 9.66249e+06 | 73533.8 | 1.20782 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2783.51 | 0.520225 | 120.764ms | 1937954 | 120 | 1.43175e+09 | 663975 | 1.09017 | 1(Win) |
| jeaiii::to_text | 2373.42 | 0.432263 | 142.796ms | 1937954 | 120 | 1.35961e+09 | 778697 | 1.27851 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3770.69 | 2.08207 | 0.109237ms | 1987 | 120 | 13149 | 502.758 | 0.772826 | 1(Win) |
| jeaiii::to_text | 3158.35 | 2.1156 | 0.127638ms | 1987 | 120 | 19350.3 | 600.233 | 0.930662 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4204.62 | 0.609962 | 0.911508ms | 19880 | 120 | 90780.1 | 4509.23 | 0.715409 | 1(Win) |
| jeaiii::to_text | 3310.82 | 0.682656 | 1.10177ms | 19880 | 120 | 183388 | 5726.55 | 0.910933 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4168.65 | 0.665333 | 8.38066ms | 198791 | 120 | 1.09866e+07 | 45478.1 | 0.727562 | 1(Win) |
| jeaiii::to_text | 3421.6 | 0.515703 | 10.005ms | 198791 | 120 | 9.79752e+06 | 55407.4 | 0.88465 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3656.01 | 0.757327 | 97.1348ms | 1987946 | 120 | 1.85073e+09 | 518558 | 0.830215 | 1(Win) |
| jeaiii::to_text | 3322.43 | 0.608667 | 103.916ms | 1987946 | 120 | 1.44756e+09 | 570622 | 0.913667 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3872.83 | 1.84444 | 0.112006ms | 1888 | 120 | 8829.01 | 465.05 | 0.750929 | 1(Win) |
| jeaiii::to_text | 3314.94 | 1.53061 | 0.115466ms | 1888 | 120 | 8298.77 | 543.317 | 0.885181 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3443.93 | 1.02852 | 2.16173ms | 18880 | 240 | 693955 | 5228.16 | 0.875824 | 1(Win) |
| jeaiii::to_text | 2942.04 | 1.44117 | 1.14908ms | 18878 | 120 | 933355 | 6119.52 | 1.02696 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3196.13 | 1.22629 | 10.1488ms | 188796 | 120 | 5.72674e+07 | 56333.8 | 0.9486 | 1(Win) |
| jeaiii::to_text | 2808.24 | 1.16236 | 11.6849ms | 188796 | 120 | 6.66477e+07 | 64115 | 1.07843 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3111.14 | 0.661596 | 104.778ms | 1887977 | 120 | 1.75922e+09 | 578731 | 0.975569 | 1(Win) |
| jeaiii::to_text | 2922.14 | 0.733334 | 110.4ms | 1887977 | 120 | 2.45006e+09 | 616164 | 1.0394 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2789.74 | 1.6214 | 0.147505ms | 1939 | 120 | 13872.7 | 663.133 | 1.05177 | 1(Win) |
| jeaiii::to_text | 2459.66 | 1.57009 | 0.159095ms | 1939 | 120 | 16734.3 | 752.125 | 1.20225 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2948.45 | 1.43171 | 2.7594ms | 19397 | 240 | 1.93656e+06 | 6274.15 | 1.02318 | 1(Win) |
| jeaiii::to_text | 2626.78 | 0.436283 | 1.34982ms | 19394 | 120 | 113244 | 7041.23 | 1.15175 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2844.82 | 0.732987 | 11.8019ms | 193976 | 120 | 2.72624e+07 | 65027.3 | 1.06608 | 1(Win) |
| jeaiii::to_text | 2599.24 | 0.483594 | 13.0017ms | 193976 | 120 | 1.42151e+07 | 71171 | 1.16796 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-natural/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2417.26 | 0.720968 | 140.501ms | 1939777 | 120 | 3.65318e+09 | 765295 | 1.25552 | 1(Win) |
| jeaiii::to_text | 2308.56 | 0.540864 | 147.494ms | 1939777 | 120 | 2.25413e+09 | 801329 | 1.31472 | 2(Loss) |
