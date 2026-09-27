# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 579.82 | 1.84862 | 3.67903ms | 265 | 48 | 3121.23 | 436.208 | 4.94132 | 1(Win) |
| jeaiii::to_text | 434.761 | 1.26138 | 4.82258ms | 265 | 48 | 2584.66 | 581.75 | 6.70825 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 637.106 | 0.807578 | 8.223ms | 2649 | 30 | 30763.9 | 3965.3 | 4.74089 | 1(Win) |
| jeaiii::to_text | 478.423 | 0.6126 | 9.61267ms | 2649 | 30 | 31392.5 | 5280.5 | 6.32326 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 638.268 | 1.52986 | 51.4808ms | 26483 | 48 | 1.75899e+07 | 39569.5 | 4.75089 | 1(Win) |
| jeaiii::to_text | 446.623 | 1.11487 | 71.8537ms | 26459 | 30 | 1.1902e+07 | 56497 | 6.79774 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 644.961 | 1.15452 | 479.693ms | 264653 | 48 | 9.7979e+08 | 391331 | 4.70656 | 1(Win) |
| jeaiii::to_text | 472.75 | 0.605993 | 634.564ms | 264715 | 30 | 3.14159e+08 | 534007 | 6.42516 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1816.81 | 2.27703 | 5.27943ms | 3148 | 30 | 42465.5 | 1652.3 | 1.65392 | 1(Win) |
| jeaiii::to_text | 948.701 | 0.738274 | 8.31731ms | 3148 | 30 | 16371.7 | 3164.23 | 3.17822 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1836.46 | 0.481901 | 23.3236ms | 31428 | 48 | 296905 | 16320.4 | 1.65091 | 1(Win) |
| jeaiii::to_text | 994.452 | 0.322588 | 40.9404ms | 31447 | 30 | 283935 | 30157.9 | 3.05297 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2183.7 | 0.991791 | 165.563ms | 314457 | 30 | 5.56543e+07 | 137331 | 1.38839 | 1(Win) |
| jeaiii::to_text | 1126.02 | 0.647132 | 330.939ms | 314497 | 30 | 8.91342e+07 | 266360 | 2.69576 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1939.66 | 0.730254 | 17.0149ms | 21473 | 30 | 178316 | 10557.5 | 1.55978 | 1(Win) |
| jeaiii::to_text | 727.266 | 1.03392 | 37.2956ms | 21491 | 30 | 2.54705e+06 | 28182.1 | 4.16961 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1811.74 | 0.871398 | 149.612ms | 214851 | 30 | 2.91366e+07 | 113095 | 1.67039 | 1(Win) |
| jeaiii::to_text | 800.793 | 0.63378 | 334.097ms | 214896 | 48 | 1.2628e+08 | 255922 | 3.78815 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2161.5 | 1.58411 | 4.61549ms | 2571 | 30 | 9686.64 | 1134.33 | 1.37168 | 1(Win) |
| jeaiii::to_text | 747.74 | 1.1129 | 7.21748ms | 2571 | 30 | 39950.9 | 3279.03 | 4.03339 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2181.85 | 0.957317 | 144.58ms | 257037 | 30 | 3.47036e+07 | 112349 | 1.39114 | 1(Win) |
| jeaiii::to_text | 728.755 | 0.673455 | 503.006ms | 257037 | 30 | 1.53946e+08 | 336368 | 4.16753 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 783.496 | 2.42484 | 3.81717ms | 517 | 30 | 6994.49 | 629.7 | 3.73222 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 756.962 | 1.70092 | 4.33163ms | 517 | 30 | 3677.58 | 650.933 | 3.85561 | 1(Tie) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 901.933 | 0.421324 | 9.87383ms | 5161 | 30 | 15858.3 | 5456.97 | 3.3504 | 1(Win) |
| jeaiii::to_text | 879.69 | 0.488676 | 10.2146ms | 5156 | 48 | 35808.5 | 5589.23 | 3.43887 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 816.103 | 0.915296 | 73.6302ms | 51618 | 30 | 9.1446e+06 | 60319.8 | 3.72126 | 1(Win) |
| jeaiii::to_text | 795.467 | 0.223857 | 76.0053ms | 51618 | 30 | 575742 | 61884.6 | 3.81839 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 835.874 | 0.455386 | 776.935ms | 516061 | 48 | 3.45082e+08 | 588790 | 3.63182 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 826.907 | 0.690818 | 731.257ms | 516061 | 48 | 8.11443e+08 | 595175 | 3.67149 | 1(Tie) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1770.63 | 1.0792 | 6.97553ms | 5661 | 30 | 32482.2 | 3049.03 | 1.69863 | 1(Win) |
| jeaiii::to_text | 1683.41 | 0.606387 | 7.24725ms | 5663 | 30 | 11355.3 | 3208.4 | 1.78752 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1718.71 | 0.606594 | 386.312ms | 566065 | 30 | 1.08904e+08 | 314097 | 1.76696 | 1(Win) |
| jeaiii::to_text | 1611.93 | 0.55143 | 413.901ms | 566150 | 30 | 1.02346e+08 | 334953 | 1.88423 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1240.22 | 2.29983 | 3.68555ms | 465 | 30 | 2026.09 | 357.333 | 2.32021 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1218.06 | 2.09099 | 3.56069ms | 464 | 30 | 1730.6 | 363.233 | 2.36413 | 1(Tie) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1462.08 | 0.620857 | 7.18818ms | 4662 | 30 | 10695.1 | 3041.17 | 2.05785 | 1(Win) |
| jeaiii::to_text | 1417.98 | 0.629271 | 7.20231ms | 4663 | 30 | 11682.1 | 3135.9 | 2.12673 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1363.99 | 2.03816 | 43.4506ms | 46611 | 48 | 2.11771e+07 | 32589.3 | 2.22373 | 1(Win) |
| jeaiii::to_text | 1278.08 | 1.44666 | 42.1394ms | 46588 | 30 | 7.58731e+06 | 34763 | 2.37454 | 2(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1411.62 | 1.11157 | 406.977ms | 466101 | 30 | 3.67554e+08 | 314892 | 2.15027 | 1(Win) |
| jeaiii::to_text | 1364.79 | 0.885462 | 417.48ms | 466101 | 30 | 2.49512e+08 | 325698 | 2.22119 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2211.23 | 1.00607 | 5.7176ms | 4828 | 48 | 21067.2 | 2082.35 | 1.35811 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2192.4 | 0.909133 | 6.25894ms | 4828 | 30 | 10934.2 | 2099.93 | 1.36529 | 1(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2193.82 | 0.45358 | 273.306ms | 483047 | 30 | 2.7215e+07 | 209985 | 1.3837 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2152.25 | 1.19479 | 268.803ms | 483047 | 30 | 1.96201e+08 | 214041 | 1.40963 | 1(Tie) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1303.05 | 1.10325 | 4.3079ms | 998 | 30 | 1949.79 | 730.733 | 2.2578 | 1(Win) |
| jeaiii::to_text | 1203.92 | 1.82398 | 4.18867ms | 998 | 30 | 6243.13 | 790.9 | 2.45932 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1387.59 | 1.04586 | 87.112ms | 99819 | 48 | 2.47112e+07 | 68604.7 | 2.18779 | 1(Win) |
| jeaiii::to_text | 1308.67 | 0.778724 | 92.261ms | 99840 | 30 | 9.63028e+06 | 72757.1 | 2.31985 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1861.5 | 3.25396 | 4.88825ms | 1049 | 30 | 9173.63 | 537.4 | 1.56379 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1766.18 | 2.11654 | 4.26715ms | 1048 | 30 | 4307.36 | 566.133 | 1.65044 | 1(Tie) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2146.65 | 1.6207 | 59.4004ms | 104827 | 30 | 1.70905e+07 | 46570.9 | 1.41375 | 1(Win) |
| jeaiii::to_text | 1907.8 | 0.781341 | 68.4648ms | 104827 | 30 | 5.02906e+06 | 52401.3 | 1.59116 | 2(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2112.07 | 0.733383 | 687.032ms | 1048277 | 30 | 3.61509e+08 | 473334 | 1.43595 | 1(Win) |
| jeaiii::to_text | 1786.7 | 1.51347 | 656.76ms | 1048230 | 30 | 2.1512e+09 | 559507 | 1.69794 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1814.98 | 1.97264 | 3.80939ms | 949 | 30 | 2903.32 | 498.7 | 1.59748 | 1(Win) |
| jeaiii::to_text | 1613.62 | 1.56514 | 3.79254ms | 947 | 30 | 2300.81 | 559.533 | 1.80783 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1977.23 | 1.15508 | 9.20957ms | 9481 | 30 | 83694.3 | 4572.73 | 1.52278 | 1(Win) |
| jeaiii::to_text | 1748.8 | 0.49951 | 10.3256ms | 9481 | 30 | 20007.7 | 5170.03 | 1.7285 | 2(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1945.93 | 0.940041 | 684.177ms | 948259 | 30 | 5.72553e+08 | 464729 | 1.55987 | 1(Win) |
| jeaiii::to_text | 1816.54 | 0.660767 | 628.331ms | 948259 | 30 | 3.24626e+08 | 497832 | 1.67071 | 2(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2600.82 | 2.31519 | 3.75998ms | 974 | 30 | 2050.58 | 357.1 | 1.08981 | 1(Win) |
| jeaiii::to_text | 2234.72 | 4.0794 | 3.70189ms | 974 | 30 | 8623.14 | 415.6 | 1.2871 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2628.35 | 0.910407 | 8.35139ms | 9745 | 30 | 31088.5 | 3535.93 | 1.14715 | 1(Win) |
| vn::to_chars | 2184.52 | 0.894362 | 7.65673ms | 9742 | 30 | 43401.5 | 4252.83 | 1.38019 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2836.33 | 0.566733 | 87.4585ms | 193795 | 30 | 4.09122e+06 | 65160.9 | 1.07033 | 1(Win) |
| jeaiii::to_text | 2180.23 | 0.754242 | 105.84ms | 193794 | 30 | 1.22637e+07 | 84769.3 | 1.39302 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3066.34 | 0.797461 | 756.009ms | 1937894 | 30 | 6.93044e+08 | 602713 | 0.990069 | 1(Win) |
| jeaiii::to_text | 2509.3 | 1.12829 | 909.805ms | 1937894 | 30 | 2.07165e+09 | 736507 | 1.20976 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4580.32 | 0.520221 | 533.158ms | 1987941 | 30 | 1.39095e+08 | 413912 | 0.662937 | 1(Win) |
| jeaiii::to_text | 3539.45 | 1.79648 | 656.31ms | 1987923 | 48 | 4.44438e+09 | 535628 | 0.857657 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4426.81 | 0.834909 | 9.14492ms | 18881 | 30 | 34598.9 | 4067.53 | 0.68058 | 1(Win) |
| jeaiii::to_text | 2939.57 | 0.599381 | 10.2218ms | 18880 | 30 | 40434.2 | 6125.07 | 1.02799 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3691.57 | 1.64749 | 67.3067ms | 188799 | 30 | 1.93706e+07 | 48774 | 0.820427 | 1(Win) |
| jeaiii::to_text | 2792.38 | 1.22997 | 75.9251ms | 188798 | 30 | 1.88694e+07 | 64479.7 | 1.08702 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2869.9 | 1.35728 | 3.87563ms | 1940 | 30 | 2297.56 | 644.767 | 1.013 | 1(Win) |
| jeaiii::to_text | 2598.65 | 1.56744 | 4.13162ms | 1940 | 30 | 3737.17 | 712.067 | 1.13737 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2879.08 | 0.65375 | 85.6699ms | 193984 | 30 | 5.29387e+06 | 64256 | 1.05435 | 1(Win) |
| jeaiii::to_text | 2222.32 | 0.706262 | 99.1119ms | 193987 | 30 | 1.03701e+07 | 83246.4 | 1.36642 | 2(Loss) |
