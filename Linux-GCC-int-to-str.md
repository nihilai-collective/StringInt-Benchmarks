# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2367.93 | 0.106762 | 0.046944ms | 267 | 30 | 0.395402 | 107.533 | 1(Win) |
| fmt::format_to | 1738.49 | 0.0910332 | 0.051413ms | 267 | 30 | 0.533333 | 146.467 | 2(Loss) |
| jeaiii::to_text | 1653.45 | 0.161777 | 0.08366ms | 267 | 30 | 1.86207 | 154 | 3(Loss) |
| std::to_chars | 1097.71 | 0.0526295 | 0.116974ms | 267 | 30 | 0.447126 | 231.967 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2737.19 | 0.110477 | 0.448821ms | 2659 | 30 | 31.4264 | 926.433 | 1(Win) |
| fmt::format_to | 2096.3 | 0.0751343 | 0.336334ms | 2659 | 30 | 24.7816 | 1209.67 | 2(Loss) |
| jeaiii::to_text | 1794.17 | 0.267167 | 0.297504ms | 2659 | 30 | 427.757 | 1413.37 | 3(Loss) |
| std::to_chars | 1164 | 0.0415101 | 0.526264ms | 2659 | 30 | 24.5333 | 2178.53 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1363.24 | 1.72645 | 4.45998ms | 26241 | 30 | 3.01333e+06 | 18357.3 | 1(Win) |
| jeaiii::to_text | 797.463 | 0.809065 | 5.90692ms | 26241 | 30 | 1.93387e+06 | 31381.2 | 2(Loss) |
| fmt::format_to | 668.05 | 0.648454 | 7.45542ms | 26241 | 30 | 1.7702e+06 | 37460.3 | 3(Loss) |
| std::to_chars | 497.606 | 2.291 | 8.69134ms | 26241 | 30 | 3.98254e+07 | 50291.6 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 521.236 | 0.726152 | 92.2558ms | 264712 | 30 | 3.71069e+08 | 484328 | 1(Win) |
| vn::to_chars | 489.246 | 2.04774 | 95.5921ms | 264712 | 30 | 3.34939e+09 | 515996 | 2(Loss) |
| fmt::format_to | 453.581 | 2.29846 | 101.795ms | 264712 | 30 | 4.90943e+09 | 556568 | 3(Loss) |
| std::to_chars | 408.924 | 2.49421 | 536.971ms | 264712 | 48 | 1.13807e+10 | 617349 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2209.42 | 0.0897888 | 0.047428ms | 315 | 30 | 0.447126 | 135.967 | 1(Win) |
| jeaiii::to_text | 2053.37 | 0.10441 | 0.050022ms | 315 | 30 | 0.7 | 146.3 | 2(Loss) |
| fmt::format_to | 1624.41 | 0.0631524 | 0.059907ms | 315 | 30 | 0.409195 | 184.933 | 3(Loss) |
| std::to_chars | 1108.79 | 0.0431065 | 0.069913ms | 315 | 30 | 0.409195 | 270.933 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3419.29 | 0.041573 | 0.213819ms | 3169 | 30 | 4.05057 | 883.867 | 1(Win) |
| jeaiii::to_text | 3144.19 | 0.0371276 | 0.504652ms | 3169 | 30 | 3.82069 | 961.2 | 2(Loss) |
| fmt::format_to | 1892.3 | 1.87412 | 0.302278ms | 3169 | 30 | 26876.9 | 1597.1 | 3(Loss) |
| std::to_chars | 1470.77 | 0.0406888 | 0.418442ms | 3169 | 30 | 20.9713 | 2054.83 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3349.31 | 1.22497 | 2.6311ms | 31422 | 30 | 360357 | 8947.03 | 1(Win) |
| jeaiii::to_text | 2981.94 | 0.156606 | 4.79323ms | 31422 | 30 | 7430.34 | 10049.3 | 2(Loss) |
| fmt::format_to | 2366.14 | 0.0539087 | 2.7048ms | 31422 | 30 | 1398.38 | 12664.6 | 3(Loss) |
| std::to_chars | 1235.75 | 0.0477591 | 4.79217ms | 31422 | 30 | 4023.84 | 24249.6 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1153.6 | 1.29895 | 115.744ms | 314341 | 30 | 3.41816e+08 | 259863 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1145.44 | 1.86215 | 50.2264ms | 314341 | 30 | 7.12532e+08 | 261715 | 1(Tie) |
| fmt::format_to | 1058.93 | 0.504515 | 54.0353ms | 314341 | 30 | 6.11977e+07 | 283095 | 3(Loss) |
| std::to_chars | 916.894 | 1.0722 | 144.065ms | 314341 | 30 | 3.68669e+08 | 326951 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1612.39 | 1.15621 | 0.046003ms | 207 | 30 | 60.1161 | 122.433 | 1(Win) |
| jeaiii::to_text | 1366.79 | 0.0791388 | 0.050568ms | 207 | 30 | 0.391954 | 144.433 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 779.252 | 1.60464 | 0.130352ms | 207 | 30 | 495.747 | 253.333 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 775.375 | 0.0583489 | 0.070787ms | 207 | 30 | 0.662069 | 254.6 | 3(Tie) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2116.54 | 0.203153 | 0.237822ms | 2151 | 30 | 116.303 | 969.2 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2115.38 | 0.221663 | 0.198843ms | 2151 | 30 | 138.616 | 969.733 | 1(Tie) |
| fmt::format_to | 1646.92 | 0.143498 | 0.649548ms | 2151 | 30 | 95.8402 | 1245.57 | 3(Loss) |
| std::to_chars | 1033.18 | 0.0778671 | 0.466618ms | 2151 | 30 | 71.7057 | 1985.47 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1462.68 | 1.14499 | 2.8437ms | 21552 | 30 | 776615 | 14052 | 1(Win) |
| jeaiii::to_text | 1276.81 | 2.29635 | 15.1752ms | 21552 | 48 | 6.55903e+06 | 16097.6 | 2(Loss) |
| fmt::format_to | 1162.81 | 2.45667 | 3.1912ms | 21552 | 30 | 5.65684e+06 | 17675.8 | 3(Loss) |
| std::to_chars | 821.706 | 0.0521414 | 5.26813ms | 21552 | 30 | 5103.04 | 25013.3 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 805.351 | 0.800188 | 48.7024ms | 215449 | 30 | 1.25033e+08 | 255129 | 1(Win) |
| jeaiii::to_text | 764.477 | 1.14784 | 50.3249ms | 215449 | 30 | 2.85526e+08 | 268770 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 669.536 | 2.32479 | 125.329ms | 215449 | 30 | 1.52697e+09 | 306881 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 640.222 | 1.69924 | 60.5731ms | 215449 | 30 | 8.92195e+08 | 320933 | 3(Tie) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2226.48 | 0.100814 | 0.051236ms | 260 | 30 | 0.378161 | 111.367 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2168.71 | 2.19004 | 0.051241ms | 260 | 30 | 188.092 | 114.333 | 1(Tie) |
| fmt::format_to | 1307.32 | 0.14595 | 0.059357ms | 260 | 30 | 2.29885 | 189.667 | 3(Loss) |
| std::to_chars | 923.484 | 0.0497121 | 0.098236ms | 260 | 30 | 0.534483 | 268.5 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2560.46 | 0.0525121 | 0.192234ms | 2565 | 30 | 7.55057 | 955.367 | 1(Win) |
| fmt::format_to | 1567.22 | 0.0755001 | 0.286847ms | 2565 | 30 | 41.6609 | 1560.83 | 2(Loss) |
| std::to_chars | 1174.65 | 0.0289161 | 0.405458ms | 2565 | 30 | 10.8782 | 2082.47 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2525.28 | 0.547 | 4.74271ms | 25652 | 30 | 84240.3 | 9687.5 | 1(Win) |
| vn::to_chars | 1221.59 | 0.124371 | 18.0809ms | 25652 | 48 | 29776 | 20026 | 2(Loss) |
| fmt::format_to | 1014.61 | 0.565816 | 4.53306ms | 25652 | 30 | 558363 | 24111.4 | 3(Loss) |
| std::to_chars | 954.777 | 0.404385 | 5.79458ms | 25652 | 30 | 322070 | 25622.4 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 815.65 | 0.818079 | 59.4491ms | 257356 | 30 | 1.81791e+08 | 300906 | 1(Win) |
| fmt::format_to | 756.861 | 0.413363 | 147.555ms | 257356 | 30 | 5.39039e+07 | 324279 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3661.09 | 0.0865537 | 0.101768ms | 518 | 30 | 0.409195 | 134.933 | 1(Win) |
| jeaiii::to_text | 2487.43 | 0.261806 | 0.060457ms | 518 | 30 | 8.11034 | 198.6 | 2(Loss) |
| fmt::format_to | 1904.16 | 0.0604064 | 0.073665ms | 518 | 30 | 0.736782 | 259.433 | 3(Loss) |
| std::to_chars | 1510.1 | 0.0651075 | 0.087936ms | 518 | 30 | 1.36092 | 327.133 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4746.37 | 0.205309 | 0.232891ms | 5141 | 30 | 134.93 | 1032.97 | 1(Win) |
| jeaiii::to_text | 3573.93 | 0.56367 | 0.31153ms | 5141 | 30 | 1793.8 | 1371.83 | 2(Loss) |
| fmt::format_to | 2459.21 | 0.0648589 | 0.417844ms | 5141 | 30 | 50.1609 | 1993.67 | 3(Loss) |
| std::to_chars | 2007.63 | 0.082046 | 0.554886ms | 5141 | 30 | 120.438 | 2442.1 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1500.81 | 1.16829 | 17.1156ms | 51674 | 30 | 4.41488e+06 | 32835.8 | 1(Win) |
| jeaiii::to_text | 1198.38 | 0.985471 | 7.67479ms | 51674 | 30 | 4.92679e+06 | 41122.3 | 2(Loss) |
| fmt::format_to | 903.302 | 0.477975 | 53.3639ms | 51674 | 48 | 3.26385e+06 | 54555.6 | 3(Loss) |
| std::to_chars | 856.244 | 0.839803 | 10.9726ms | 51674 | 30 | 7.0085e+06 | 57553.9 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 904.433 | 1.91523 | 226.8ms | 516169 | 30 | 3.25984e+09 | 544271 | 1(Win) |
| jeaiii::to_text | 837.529 | 2.08255 | 250.682ms | 516169 | 30 | 4.49464e+09 | 587749 | 2(Loss) |
| fmt::format_to | 744.078 | 1.96217 | 279.183ms | 516169 | 30 | 5.05526e+09 | 661567 | 3(Loss) |
| std::to_chars | 693.275 | 2.25235 | 311.31ms | 516169 | 30 | 7.67302e+09 | 710046 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4319.81 | 0.0984729 | 0.08243ms | 573 | 30 | 0.465517 | 126.5 | 1(Win) |
| jeaiii::to_text | 2869.03 | 0.0700035 | 0.0602ms | 573 | 30 | 0.533333 | 190.467 | 2(Loss) |
| fmt::format_to | 2001.91 | 0.0620599 | 0.083634ms | 573 | 30 | 0.86092 | 272.967 | 3(Loss) |
| std::to_chars | 1620.89 | 0.0507487 | 0.082109ms | 573 | 30 | 0.878161 | 337.133 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4502.27 | 0.157546 | 0.239186ms | 5651 | 30 | 106.69 | 1197 | 1(Win) |
| jeaiii::to_text | 4130.83 | 0.0949483 | 0.299872ms | 5651 | 30 | 46.0333 | 1304.63 | 2(Loss) |
| fmt::format_to | 2508.94 | 0.293363 | 0.458799ms | 5651 | 30 | 1191.24 | 2148 | 3(Loss) |
| std::to_chars | 1929.22 | 0.113706 | 0.5625ms | 5651 | 30 | 302.671 | 2793.47 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4145.61 | 0.962159 | 8.22565ms | 56721 | 30 | 472852 | 13048.3 | 1(Win) |
| jeaiii::to_text | 2371.2 | 1.09606 | 4.33706ms | 56721 | 30 | 1.87559e+06 | 22812.6 | 2(Loss) |
| std::to_chars | 1908.66 | 0.714687 | 12.9523ms | 56721 | 30 | 1.23079e+06 | 28341 | 3(Loss) |
| fmt::format_to | 1615.27 | 0.12044 | 6.52524ms | 56721 | 30 | 48804.7 | 33488.8 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2009.29 | 0.474549 | 123.146ms | 566195 | 30 | 4.87902e+07 | 268735 | 1(Win) |
| jeaiii::to_text | 1686.09 | 0.672989 | 143.703ms | 566195 | 30 | 1.39351e+08 | 320248 | 2(Loss) |
| fmt::format_to | 1333.75 | 0.523677 | 176.368ms | 566195 | 30 | 1.34844e+08 | 404849 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3171.35 | 0.0661093 | 0.053423ms | 466 | 30 | 0.257471 | 140.133 | 1(Win) |
| jeaiii::to_text | 2233.6 | 0.0564284 | 0.060822ms | 466 | 30 | 0.378161 | 198.967 | 2(Loss) |
| fmt::format_to | 1763.77 | 0.0672322 | 0.074701ms | 466 | 30 | 0.86092 | 251.967 | 3(Loss) |
| std::to_chars | 1352.17 | 0.0552298 | 0.079802ms | 466 | 30 | 0.988506 | 328.667 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3056.8 | 0.253575 | 0.332244ms | 4670 | 30 | 409.482 | 1456.97 | 1(Win) |
| fmt::format_to | 2255.85 | 1.91902 | 0.407939ms | 4670 | 30 | 43061.8 | 1974.27 | 2(Loss) |
| vn::to_chars | 2145.1 | 0.054717 | 0.444714ms | 4670 | 30 | 38.7172 | 2076.2 | 3(Loss) |
| std::to_chars | 1803.37 | 0.0903233 | 0.513544ms | 4670 | 30 | 149.275 | 2469.63 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2146.11 | 2.03063 | 10.3306ms | 46627 | 30 | 5.31073e+06 | 20719.8 | 1(Win) |
| jeaiii::to_text | 1850.77 | 0.874822 | 4.63096ms | 46627 | 30 | 1.32535e+06 | 24026.2 | 2(Loss) |
| fmt::format_to | 1677.1 | 0.153136 | 5.08414ms | 46627 | 30 | 49457.7 | 26514.3 | 3(Loss) |
| std::to_chars | 1414.48 | 0.646202 | 5.98098ms | 46627 | 30 | 1.23806e+06 | 31437 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1486.4 | 0.723672 | 280.827ms | 466199 | 48 | 2.24903e+08 | 299113 | 1(Win) |
| jeaiii::to_text | 1349.45 | 0.865069 | 62.4822ms | 466199 | 30 | 2.43699e+08 | 329470 | 2(Loss) |
| fmt::format_to | 1117.22 | 2.38274 | 356.608ms | 466199 | 48 | 4.31579e+09 | 397954 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3245.24 | 0.103481 | 0.068754ms | 473 | 30 | 0.62069 | 139 | 1(Win) |
| vn::to_chars | 3109.52 | 0.109286 | 0.062274ms | 473 | 30 | 0.754023 | 145.067 | 2(Loss) |
| fmt::format_to | 2075.56 | 0.0673981 | 0.067343ms | 473 | 30 | 0.643678 | 217.333 | 3(Loss) |
| std::to_chars | 1374.43 | 0.0554368 | 0.123623ms | 473 | 30 | 0.993103 | 328.2 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3954.65 | 0.381819 | 0.234315ms | 4834 | 30 | 594.34 | 1165.73 | 1(Win) |
| vn::to_chars | 3472.65 | 0.444483 | 0.263604ms | 4834 | 30 | 1044.53 | 1327.53 | 2(Loss) |
| fmt::format_to | 2323.15 | 2.46033 | 0.422661ms | 4834 | 30 | 71509.8 | 1984.4 | 3(Loss) |
| std::to_chars | 1835.73 | 0.593978 | 0.564627ms | 4834 | 30 | 6675.11 | 2511.3 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4195.93 | 2.44451 | 2.13253ms | 48323 | 30 | 2.1625e+06 | 10983.1 | 1(Win) |
| jeaiii::to_text | 3632.63 | 0.860301 | 2.36087ms | 48323 | 30 | 357345 | 12686.2 | 2(Loss) |
| fmt::format_to | 2169.23 | 1.13381 | 3.95028ms | 48323 | 30 | 1.7406e+06 | 21244.6 | 3(Loss) |
| std::to_chars | 1530.94 | 1.15657 | 15.2106ms | 48323 | 30 | 3.63624e+06 | 30102 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2362.64 | 0.946663 | 36.7758ms | 483056 | 30 | 1.02214e+08 | 194984 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2294.43 | 2.0834 | 37.1982ms | 483056 | 30 | 5.2494e+08 | 200781 | 1(Tie) |
| fmt::format_to | 1624.18 | 1.38087 | 54.9424ms | 483056 | 30 | 4.60203e+08 | 283637 | 3(Loss) |
| std::to_chars | 1384.83 | 0.744949 | 321.194ms | 483056 | 48 | 2.94779e+08 | 332661 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4063.93 | 0.0566906 | 0.072269ms | 999 | 30 | 0.529885 | 234.433 | 1(Win) |
| jeaiii::to_text | 3277.33 | 0.160885 | 0.083434ms | 999 | 30 | 6.56207 | 290.7 | 2(Loss) |
| fmt::format_to | 1679.39 | 0.0350005 | 0.710396ms | 999 | 30 | 1.18276 | 567.3 | 3(Loss) |
| std::to_chars | 1651.26 | 0.0305143 | 0.125494ms | 999 | 30 | 0.929885 | 576.967 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4535.7 | 0.0275357 | 0.990847ms | 9906 | 30 | 9.86782 | 2082.83 | 1(Win) |
| vn::to_chars | 4313.02 | 1.99945 | 0.409091ms | 9906 | 30 | 57540.8 | 2190.37 | 2(Loss) |
| fmt::format_to | 3424.6 | 0.042913 | 0.560762ms | 9906 | 30 | 42.0414 | 2758.6 | 3(Loss) |
| std::to_chars | 1858.41 | 0.0869355 | 3.24328ms | 9906 | 30 | 585.909 | 5083.43 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1871.56 | 1.39476 | 10.069ms | 99759 | 30 | 1.50805e+07 | 50833.2 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1823.21 | 0.60369 | 54.6278ms | 99759 | 48 | 4.76321e+06 | 52181.3 | 1(Tie) |
| fmt::format_to | 1452.05 | 1.36018 | 12.5262ms | 99759 | 30 | 2.38261e+07 | 65519.3 | 3(Loss) |
| std::to_chars | 1049.93 | 0.818158 | 40.9521ms | 99759 | 30 | 1.64883e+07 | 90612.9 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1330.86 | 1.70998 | 133.04ms | 998412 | 30 | 4.49009e+09 | 715445 | 1(Win) |
| jeaiii::to_text | 1244.51 | 2.27058 | 140.807ms | 998412 | 30 | 9.05344e+09 | 765085 | 2(Loss) |
| fmt::format_to | 1108.46 | 2.12324 | 158.849ms | 998412 | 30 | 9.97923e+09 | 858993 | 3(Loss) |
| std::to_chars | 890.737 | 2.01924 | 461.393ms | 998412 | 30 | 1.39771e+10 | 1.06896e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4277.17 | 0.0595735 | 0.068442ms | 1042 | 30 | 0.574713 | 232.333 | 1(Win) |
| jeaiii::to_text | 3571.57 | 0.0938864 | 0.07575ms | 1042 | 30 | 2.04713 | 278.233 | 2(Loss) |
| fmt::format_to | 2558.08 | 0.0834676 | 0.094184ms | 1042 | 30 | 3.15402 | 388.467 | 3(Loss) |
| std::to_chars | 1969.73 | 0.0432916 | 0.12406ms | 1042 | 30 | 1.43103 | 504.5 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5649.37 | 0.0856932 | 0.882475ms | 10478 | 30 | 68.9241 | 1768.8 | 1(Win) |
| jeaiii::to_text | 4856.28 | 0.0890443 | 0.461872ms | 10478 | 30 | 100.713 | 2057.67 | 2(Loss) |
| fmt::format_to | 3262.96 | 0.0922351 | 0.626956ms | 10478 | 30 | 239.357 | 3062.43 | 3(Loss) |
| std::to_chars | 2217.26 | 0.0242092 | 4.35693ms | 10478 | 48 | 57.1379 | 4506.73 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2629.39 | 0.525607 | 16.3666ms | 104940 | 30 | 1.20065e+06 | 38061.5 | 1(Win) |
| jeaiii::to_text | 2345.97 | 2.14399 | 8.63544ms | 104940 | 30 | 2.50961e+07 | 42659.9 | 2(Loss) |
| fmt::format_to | 1726.98 | 0.57567 | 11.9563ms | 104940 | 30 | 3.3387e+06 | 57950.2 | 3(Loss) |
| std::to_chars | 1372.2 | 1.92733 | 14.0185ms | 104940 | 30 | 5.92759e+07 | 72932.8 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1837.21 | 2.31321 | 99.2424ms | 1048440 | 30 | 4.7547e+09 | 544234 | 1(Win) |
| fmt::format_to | 1468.5 | 2.27283 | 125.824ms | 1048440 | 30 | 7.18446e+09 | 680877 | 2(Loss) |
| std::to_chars | 1237.06 | 2.17836 | 147.833ms | 1048440 | 30 | 9.30001e+09 | 808262 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5258.37 | 0.189178 | 0.061172ms | 939 | 30 | 3.11379 | 170.3 | 1(Win) |
| jeaiii::to_text | 3381.8 | 0.160323 | 0.071332ms | 939 | 30 | 5.4069 | 264.8 | 2(Loss) |
| fmt::format_to | 2404.89 | 0.0756117 | 0.091827ms | 939 | 30 | 2.37816 | 372.367 | 3(Loss) |
| std::to_chars | 1719.69 | 0.143215 | 0.118139ms | 939 | 30 | 16.6851 | 520.733 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4577.85 | 2.20921 | 0.388705ms | 9499 | 30 | 57336 | 1978.87 | 1(Win) |
| jeaiii::to_text | 4286.57 | 0.0526397 | 1.53767ms | 9499 | 30 | 37.1264 | 2113.33 | 2(Loss) |
| fmt::format_to | 2975.64 | 0.0493401 | 0.594399ms | 9499 | 30 | 67.6885 | 3044.37 | 3(Loss) |
| std::to_chars | 1953.24 | 0.0285812 | 0.934976ms | 9499 | 30 | 52.7138 | 4637.9 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2340.49 | 1.52522 | 7.59882ms | 94778 | 30 | 1.04085e+07 | 38619 | 1(Win) |
| jeaiii::to_text | 2128.66 | 0.457528 | 7.8701ms | 94778 | 30 | 1.13229e+06 | 42462 | 2(Loss) |
| fmt::format_to | 1634.1 | 0.450252 | 10.4627ms | 94778 | 30 | 1.86076e+06 | 55313.2 | 3(Loss) |
| std::to_chars | 1280.39 | 1.36934 | 12.9208ms | 94778 | 30 | 2.80335e+07 | 70593.7 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1912.55 | 2.41665 | 86.0126ms | 948478 | 30 | 3.91903e+09 | 472949 | 1(Win) |
| jeaiii::to_text | 1720.5 | 0.788752 | 98.661ms | 948478 | 30 | 5.15876e+08 | 525741 | 2(Loss) |
| fmt::format_to | 1354.72 | 1.44738 | 615.648ms | 948478 | 48 | 4.48295e+09 | 667695 | 3(Loss) |
| std::to_chars | 1133.42 | 1.66821 | 737.039ms | 948478 | 48 | 8.50786e+09 | 798064 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5281.48 | 0.116965 | 0.075887ms | 983 | 30 | 1.2931 | 177.5 | 1(Win) |
| jeaiii::to_text | 4252.17 | 0.0604778 | 0.063595ms | 983 | 30 | 0.533333 | 220.467 | 2(Loss) |
| fmt::format_to | 1634.54 | 0.0415756 | 0.153507ms | 983 | 30 | 1.70575 | 573.533 | 3(Loss) |
| std::to_chars | 1589.19 | 0.0409229 | 0.134012ms | 983 | 30 | 1.74828 | 589.9 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6419.05 | 0.0990094 | 0.705748ms | 9740 | 30 | 61.5816 | 1447.07 | 1(Win) |
| jeaiii::to_text | 5470.11 | 0.315154 | 0.59388ms | 9740 | 30 | 859.197 | 1698.1 | 2(Loss) |
| fmt::format_to | 3313.2 | 0.0517791 | 0.668001ms | 9740 | 30 | 63.2195 | 2803.57 | 3(Loss) |
| std::to_chars | 1943.64 | 0.0440855 | 0.963533ms | 9740 | 30 | 133.168 | 4779.07 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5363.39 | 0.228178 | 8.00115ms | 97393 | 30 | 46843.2 | 17317.6 | 1(Win) |
| jeaiii::to_text | 5076.36 | 0.648587 | 8.74155ms | 97393 | 30 | 422481 | 18296.8 | 2(Loss) |
| fmt::format_to | 2288.36 | 0.394711 | 7.47894ms | 97393 | 30 | 769996 | 40588.6 | 3(Loss) |
| std::to_chars | 1690.01 | 0.479633 | 10.6544ms | 97393 | 30 | 2.08456e+06 | 54958.9 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3497.61 | 2.19003 | 116.101ms | 974054 | 30 | 1.01495e+09 | 265590 | 1(Win) |
| jeaiii::to_text | 3169.34 | 0.982402 | 55.7252ms | 974054 | 30 | 2.48729e+08 | 293099 | 2(Loss) |
| fmt::format_to | 1985.75 | 1.80723 | 86.1763ms | 974054 | 30 | 2.14422e+09 | 467799 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4658.93 | 0.0680875 | 0.09922ms | 1944 | 30 | 2.2023 | 397.933 | 1(Win) |
| jeaiii::to_text | 3328.04 | 0.329538 | 0.120767ms | 1944 | 30 | 101.099 | 557.067 | 2(Loss) |
| fmt::format_to | 2275.71 | 0.0623778 | 0.166292ms | 1944 | 30 | 7.74713 | 814.667 | 3(Loss) |
| std::to_chars | 1664.32 | 0.0605558 | 0.214337ms | 1944 | 30 | 13.6506 | 1113.93 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7417.11 | 0.0545806 | 0.530474ms | 19366 | 30 | 55.4126 | 2490.03 | 1(Win) |
| jeaiii::to_text | 4293.98 | 0.0523141 | 0.845706ms | 19366 | 30 | 151.886 | 4301.1 | 2(Loss) |
| fmt::format_to | 2868.19 | 0.0384275 | 1.24906ms | 19366 | 30 | 183.683 | 6439.2 | 3(Loss) |
| std::to_chars | 2082.99 | 0.05404 | 1.68214ms | 19366 | 30 | 688.741 | 8866.5 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3780.09 | 0.574956 | 9.30107ms | 193831 | 30 | 2.37155e+06 | 48901.4 | 1(Win) |
| jeaiii::to_text | 2777.41 | 1.58703 | 12.8575ms | 193831 | 30 | 3.34702e+07 | 66555.5 | 2(Loss) |
| fmt::format_to | 2142.95 | 0.831215 | 15.4906ms | 193831 | 30 | 1.5423e+07 | 86260.3 | 3(Loss) |
| std::to_chars | 1539.66 | 0.641457 | 52.3778ms | 193831 | 30 | 1.77932e+07 | 120060 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2738.48 | 2.19545 | 586.568ms | 1937894 | 48 | 1.05373e+10 | 674870 | 1(Win) |
| jeaiii::to_text | 2314.26 | 2.19999 | 145.839ms | 1937894 | 30 | 9.25972e+09 | 798580 | 2(Loss) |
| fmt::format_to | 1894.69 | 2.2224 | 426.773ms | 1937894 | 30 | 1.40977e+10 | 975420 | 3(Loss) |
| std::to_chars | 1366.85 | 2.4288 | 575.525ms | 1937894 | 30 | 3.23536e+10 | 1.3521e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6026.08 | 0.235416 | 0.08497ms | 1986 | 30 | 16.4241 | 314.3 | 1(Win) |
| jeaiii::to_text | 3256.53 | 0.046342 | 0.123755ms | 1986 | 30 | 2.17931 | 581.6 | 2(Loss) |
| fmt::format_to | 2163.58 | 0.0497782 | 0.174246ms | 1986 | 30 | 5.69655 | 875.4 | 3(Loss) |
| std::to_chars | 1591.51 | 0.162006 | 0.232218ms | 1986 | 30 | 111.513 | 1190.07 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7164.8 | 0.19115 | 0.580319ms | 19893 | 30 | 768.533 | 2647.87 | 1(Win) |
| jeaiii::to_text | 4284.2 | 0.237554 | 0.938295ms | 19893 | 30 | 3319.77 | 4428.23 | 2(Loss) |
| fmt::format_to | 2723.73 | 0.62792 | 1.32522ms | 19893 | 30 | 57385.4 | 6965.23 | 3(Loss) |
| std::to_chars | 2046.12 | 0.420593 | 1.71612ms | 19893 | 30 | 45623.2 | 9271.93 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6424.95 | 0.956383 | 5.5021ms | 198755 | 30 | 2.38826e+06 | 29501.8 | 1(Win) |
| jeaiii::to_text | 4076.72 | 1.07703 | 8.49402ms | 198755 | 30 | 7.52305e+06 | 46495.1 | 2(Loss) |
| fmt::format_to | 2676.94 | 0.593623 | 13.4619ms | 198755 | 30 | 5.30032e+06 | 70807.5 | 3(Loss) |
| std::to_chars | 1971.11 | 0.906653 | 19.3594ms | 198755 | 30 | 2.28043e+07 | 96162.7 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6089.23 | 0.721659 | 138.29ms | 1987853 | 30 | 1.51436e+08 | 311331 | 1(Win) |
| jeaiii::to_text | 3903.88 | 0.511041 | 92.0381ms | 1987853 | 30 | 1.84761e+08 | 485611 | 2(Loss) |
| fmt::format_to | 2390.34 | 2.19685 | 711.695ms | 1987853 | 48 | 1.45711e+10 | 793094 | 3(Loss) |
| std::to_chars | 1931.53 | 2.04358 | 898.651ms | 1987853 | 48 | 1.93103e+10 | 981484 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6105.33 | 0.413207 | 0.081573ms | 1886 | 30 | 44.4552 | 294.6 | 1(Win) |
| jeaiii::to_text | 3960.29 | 0.0518082 | 0.115295ms | 1886 | 30 | 1.66092 | 454.167 | 2(Loss) |
| fmt::format_to | 2143.69 | 0.0483146 | 0.168229ms | 1886 | 30 | 4.92989 | 839.033 | 3(Loss) |
| std::to_chars | 1764.75 | 0.142098 | 0.241503ms | 1886 | 30 | 62.9241 | 1019.2 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6998.78 | 0.0794532 | 1.19111ms | 18865 | 30 | 125.145 | 2570.6 | 1(Win) |
| jeaiii::to_text | 4393.99 | 0.0379761 | 0.82256ms | 18865 | 30 | 72.5333 | 4094.47 | 2(Loss) |
| fmt::format_to | 2652.12 | 0.0478186 | 2.97563ms | 18865 | 30 | 315.678 | 6783.67 | 3(Loss) |
| std::to_chars | 1954.62 | 0.660144 | 1.80828ms | 18865 | 30 | 110761 | 9204.37 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6450.74 | 0.190632 | 5.23997ms | 188776 | 30 | 84916 | 27908.6 | 1(Win) |
| jeaiii::to_text | 4129.48 | 0.963984 | 8.04073ms | 188776 | 30 | 5.29864e+06 | 43596.5 | 2(Loss) |
| fmt::format_to | 2448.08 | 1.4422 | 13.9097ms | 188776 | 30 | 3.37456e+07 | 73539.7 | 3(Loss) |
| std::to_chars | 1935.21 | 0.568706 | 18.3321ms | 188776 | 30 | 8.39718e+06 | 93029.1 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5988.74 | 0.821734 | 133.089ms | 1887876 | 30 | 1.83088e+08 | 300634 | 1(Win) |
| jeaiii::to_text | 3765.52 | 1.75885 | 208.389ms | 1887876 | 30 | 2.12168e+09 | 478133 | 2(Loss) |
| fmt::format_to | 2288.96 | 1.75562 | 705.389ms | 1887876 | 48 | 9.15316e+09 | 786567 | 3(Loss) |
| std::to_chars | 1884.87 | 2.21729 | 175.816ms | 1887876 | 30 | 1.34571e+10 | 955197 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6160.54 | 0.712617 | 0.08326ms | 1936 | 30 | 136.838 | 299.7 | 1(Win) |
| jeaiii::to_text | 4591.3 | 0.0529646 | 0.232756ms | 1936 | 30 | 1.36092 | 402.133 | 2(Loss) |
| fmt::format_to | 2339.57 | 0.0692943 | 0.161226ms | 1936 | 30 | 8.97126 | 789.167 | 3(Loss) |
| std::to_chars | 1711.24 | 0.0536832 | 0.209723ms | 1936 | 30 | 10.0644 | 1078.93 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6710.72 | 0.819322 | 0.568441ms | 19418 | 30 | 15335.6 | 2759.53 | 1(Win) |
| jeaiii::to_text | 4646.46 | 0.0360254 | 1.7665ms | 19418 | 30 | 61.8448 | 3985.5 | 2(Loss) |
| fmt::format_to | 2807.53 | 0.0453192 | 1.31949ms | 19418 | 30 | 268.069 | 6596 | 3(Loss) |
| std::to_chars | 1873.7 | 0.574384 | 1.91033ms | 19418 | 30 | 96679.2 | 9883.33 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4106.98 | 0.681456 | 8.37911ms | 193945 | 30 | 2.82559e+06 | 45035.6 | 1(Win) |
| jeaiii::to_text | 3408.22 | 0.530679 | 24.7802ms | 193945 | 30 | 2.48821e+06 | 54268.9 | 2(Loss) |
| fmt::format_to | 1833.27 | 0.182565 | 19.2303ms | 193945 | 30 | 1.0178e+06 | 100891 | 3(Loss) |
| std::to_chars | 1528.89 | 0.461812 | 23.3884ms | 193945 | 30 | 9.36392e+06 | 120977 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3425.5 | 0.649054 | 99.8293ms | 1939654 | 30 | 3.68539e+08 | 540008 | 1(Win) |
| fmt::format_to | 1620.96 | 1.96607 | 497.926ms | 1939654 | 30 | 1.51015e+10 | 1.14117e+06 | 2(Loss) |
| std::to_chars | 1359.32 | 2.07441 | 1199.86ms | 1939654 | 48 | 3.82501e+10 | 1.36082e+06 | 3(Loss) |
