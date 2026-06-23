# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1217.94 | 0.310182 | 0.074299ms | 267 | 30 | 12.6161 | 209.067 | 1(Win) |
| jeaiii::to_text | 1084.31 | 0.391181 | 0.078306ms | 267 | 30 | 25.3161 | 234.833 | 2(Loss) |
| std::to_chars | 774.033 | 0.217884 | 0.122978ms | 267 | 30 | 15.4126 | 328.967 | 3(Loss) |
| fmt::format_to | 654.466 | 0.186052 | 0.104905ms | 267 | 30 | 15.7195 | 389.067 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1206.3 | 0.0929382 | 0.449978ms | 2640 | 30 | 112.878 | 2087.13 | 1(Win) |
| jeaiii::to_text | 1193.98 | 0.103534 | 0.430882ms | 2640 | 30 | 142.989 | 2108.67 | 2(Loss) |
| std::to_chars | 767.178 | 0.0821629 | 0.672462ms | 2640 | 30 | 218.116 | 3281.77 | 3(Loss) |
| fmt::format_to | 737.391 | 0.090063 | 0.669347ms | 2640 | 30 | 283.678 | 3414.33 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1212.37 | 1.2771 | 3.98643ms | 26520 | 30 | 2.12934e+06 | 20861.2 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1208.13 | 0.12898 | 4.06558ms | 26520 | 30 | 21872 | 20934.4 | 1(Tie) |
| fmt::format_to | 705.375 | 0.755648 | 6.71128ms | 26520 | 30 | 2.20226e+06 | 35855.3 | 3(Loss) |
| std::to_chars | 385.973 | 1.3051 | 10.9152ms | 26520 | 30 | 2.19401e+07 | 65526.4 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 342.342 | 0.191792 | 133.227ms | 264580 | 30 | 5.99481e+07 | 737050 | 1(Win) |
| jeaiii::to_text | 337.956 | 0.113868 | 134.885ms | 264580 | 30 | 2.16829e+07 | 746615 | 2(Loss) |
| fmt::format_to | 289.699 | 0.274013 | 157.014ms | 264580 | 30 | 1.70877e+08 | 870984 | 3(Loss) |
| std::to_chars | 285.343 | 0.077542 | 159.397ms | 264580 | 30 | 1.41051e+07 | 884281 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1337.21 | 0.296711 | 0.07533ms | 311 | 30 | 12.9931 | 221.8 | 1(Win) |
| jeaiii::to_text | 1205.01 | 0.371004 | 0.079238ms | 311 | 30 | 25.0161 | 246.133 | 2(Loss) |
| std::to_chars | 950.821 | 0.2135 | 0.092602ms | 311 | 30 | 13.3057 | 311.933 | 3(Loss) |
| fmt::format_to | 748.971 | 0.232895 | 0.125434ms | 311 | 30 | 25.5172 | 396 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1610.87 | 0.0873769 | 0.372363ms | 3151 | 30 | 79.7057 | 1865.47 | 1(Win) |
| jeaiii::to_text | 1503.24 | 0.0945646 | 0.402349ms | 3151 | 30 | 107.206 | 1999.03 | 2(Loss) |
| std::to_chars | 1062.75 | 0.0471319 | 0.567707ms | 3151 | 30 | 53.2828 | 2827.6 | 3(Loss) |
| fmt::format_to | 860.916 | 0.0261981 | 0.682201ms | 3151 | 30 | 25.0862 | 3490.5 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1634.28 | 1.47777 | 3.44414ms | 31438 | 30 | 2.20494e+06 | 18345.5 | 1(Win) |
| jeaiii::to_text | 1454.73 | 0.0518117 | 3.87909ms | 31438 | 30 | 3420.75 | 20609.7 | 2(Loss) |
| fmt::format_to | 790.054 | 0.931749 | 6.9371ms | 31438 | 30 | 3.75073e+06 | 37948.8 | 3(Loss) |
| std::to_chars | 704.683 | 0.597404 | 7.43466ms | 31438 | 30 | 1.93812e+06 | 42546.2 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 709.296 | 0.574146 | 73.9032ms | 314328 | 30 | 1.76635e+08 | 422625 | 1(Win) |
| jeaiii::to_text | 667.834 | 0.196517 | 81.1919ms | 314328 | 30 | 2.33427e+07 | 448864 | 2(Loss) |
| std::to_chars | 570.949 | 0.180443 | 94.7512ms | 314328 | 30 | 2.69261e+07 | 525032 | 3(Loss) |
| fmt::format_to | 520.596 | 0.512262 | 103.087ms | 314328 | 30 | 2.61018e+08 | 575814 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 885.021 | 0.376459 | 0.079318ms | 217 | 30 | 23.2471 | 233.833 | 1(Win) |
| vn::to_chars | 804.095 | 1.09289 | 0.099115ms | 217 | 30 | 237.344 | 257.367 | 2(Loss) |
| std::to_chars | 643.56 | 0.177478 | 0.093754ms | 217 | 30 | 9.77126 | 321.567 | 3(Loss) |
| fmt::format_to | 496.952 | 0.218662 | 0.111097ms | 217 | 30 | 24.8747 | 416.433 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1167.73 | 0.204244 | 0.378074ms | 2179 | 30 | 396.323 | 1779.57 | 1(Win) |
| jeaiii::to_text | 1086.41 | 0.162366 | 0.386019ms | 2179 | 30 | 289.357 | 1912.77 | 2(Loss) |
| std::to_chars | 696.719 | 0.0361417 | 0.59595ms | 2179 | 30 | 34.8609 | 2982.63 | 3(Loss) |
| fmt::format_to | 587.376 | 0.0629233 | 1.54414ms | 2179 | 30 | 148.671 | 3537.87 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 869.633 | 1.69927 | 4.34895ms | 21445 | 30 | 4.79099e+06 | 23517.4 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 858.737 | 1.72035 | 4.38754ms | 21445 | 30 | 5.03601e+06 | 23815.8 | 1(Tie) |
| fmt::format_to | 587.1 | 0.805344 | 6.47385ms | 21445 | 30 | 2.36109e+06 | 34834.8 | 3(Loss) |
| std::to_chars | 505.894 | 0.629117 | 7.46989ms | 21445 | 30 | 1.94052e+06 | 40426.5 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 497.018 | 0.217349 | 75.2016ms | 215333 | 30 | 2.41944e+07 | 413179 | 1(Win) |
| jeaiii::to_text | 471.961 | 0.251763 | 78.6404ms | 215333 | 30 | 3.60009e+07 | 435116 | 2(Loss) |
| std::to_chars | 381.049 | 0.24667 | 97.178ms | 215333 | 30 | 5.3017e+07 | 538927 | 3(Loss) |
| fmt::format_to | 368.555 | 0.24477 | 100.507ms | 215333 | 30 | 5.58026e+07 | 557196 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1288.11 | 0.314675 | 0.070872ms | 256 | 30 | 10.6713 | 189.533 | 1(Win) |
| jeaiii::to_text | 1136.95 | 0.429455 | 0.0748ms | 256 | 30 | 25.5126 | 214.733 | 2(Loss) |
| std::to_chars | 987.757 | 0.361395 | 0.099285ms | 256 | 30 | 23.9368 | 247.167 | 3(Loss) |
| fmt::format_to | 704.93 | 0.269276 | 0.099114ms | 256 | 30 | 26.092 | 346.333 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1508.71 | 0.331963 | 0.343249ms | 2567 | 30 | 870.447 | 1622.63 | 1(Win) |
| jeaiii::to_text | 1367.21 | 0.274184 | 0.366162ms | 2567 | 30 | 723.082 | 1790.57 | 2(Loss) |
| std::to_chars | 1157.12 | 0.165115 | 0.422216ms | 2567 | 30 | 366.092 | 2115.67 | 3(Loss) |
| fmt::format_to | 794.548 | 0.0741964 | 0.603343ms | 2567 | 30 | 156.783 | 3081.1 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1529.45 | 1.71899 | 2.97415ms | 25674 | 30 | 2.27187e+06 | 16008.8 | 1(Win) |
| jeaiii::to_text | 1400.9 | 1.49396 | 3.27235ms | 25674 | 30 | 2.04537e+06 | 17477.7 | 2(Loss) |
| std::to_chars | 1096.45 | 1.88196 | 4.09938ms | 25674 | 30 | 5.29847e+06 | 22330.8 | 3(Loss) |
| fmt::format_to | 811.244 | 0.882102 | 5.58395ms | 25674 | 30 | 2.12639e+06 | 30181.6 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 529.998 | 0.265376 | 83.1725ms | 257294 | 30 | 4.52851e+07 | 462973 | 1(Win) |
| jeaiii::to_text | 508.569 | 0.378327 | 86.8063ms | 257294 | 30 | 9.99575e+07 | 482481 | 2(Loss) |
| std::to_chars | 476.788 | 0.214838 | 92.8443ms | 257294 | 30 | 3.66735e+07 | 514641 | 3(Loss) |
| fmt::format_to | 432.834 | 0.204903 | 102.379ms | 257294 | 30 | 4.04793e+07 | 566902 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1967.73 | 0.368184 | 0.085088ms | 541 | 30 | 27.9586 | 262.2 | 1(Win) |
| jeaiii::to_text | 1532.19 | 0.337229 | 0.09663ms | 541 | 30 | 38.6851 | 336.733 | 2(Loss) |
| fmt::format_to | 1035.33 | 0.318135 | 0.125524ms | 541 | 30 | 75.4023 | 498.333 | 3(Loss) |
| std::to_chars | 996.789 | 0.172703 | 0.130293ms | 541 | 30 | 23.9724 | 517.6 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2197.49 | 0.167465 | 0.458874ms | 5171 | 30 | 423.706 | 2244.13 | 1(Win) |
| jeaiii::to_text | 1722.84 | 0.106659 | 0.583306ms | 5171 | 30 | 279.628 | 2862.4 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 1063.61 | 0.0975333 | 0.900987ms | 5171 | 30 | 613.499 | 4636.53 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 1062.5 | 0.0504013 | 0.900667ms | 5171 | 30 | 164.171 | 4641.37 | 3(Tie) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2266.42 | 0.105077 | 4.2375ms | 51600 | 30 | 15615.4 | 21712.5 | 1(Win) |
| jeaiii::to_text | 1697.35 | 0.959889 | 5.52899ms | 51600 | 30 | 2.32337e+06 | 28992 | 2(Loss) |
| fmt::format_to | 999.768 | 1.54231 | 9.25224ms | 51600 | 30 | 1.72887e+07 | 49221 | 3(Loss) |
| std::to_chars | 525.678 | 0.482242 | 17.0199ms | 51600 | 30 | 6.11381e+06 | 93611.7 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 638.696 | 0.262313 | 140.257ms | 516030 | 30 | 1.22552e+08 | 770514 | 1(Win) |
| jeaiii::to_text | 587.064 | 0.184767 | 150.518ms | 516030 | 30 | 7.19694e+07 | 838282 | 2(Loss) |
| fmt::format_to | 555.794 | 0.0671801 | 159.745ms | 516030 | 30 | 1.06151e+07 | 885444 | 3(Loss) |
| std::to_chars | 445.667 | 0.121129 | 197.397ms | 516030 | 30 | 5.3672e+07 | 1.10424e+06 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1968.16 | 0.234715 | 0.085669ms | 561 | 30 | 12.2126 | 271.833 | 1(Win) |
| jeaiii::to_text | 1619.77 | 0.110693 | 0.096239ms | 561 | 30 | 4.01034 | 330.3 | 2(Loss) |
| fmt::format_to | 1079.38 | 0.251004 | 0.126195ms | 561 | 30 | 46.4368 | 495.667 | 3(Loss) |
| std::to_chars | 1060.13 | 0.177316 | 0.143898ms | 561 | 30 | 24.023 | 504.667 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2293.66 | 0.178388 | 0.500272ms | 5686 | 30 | 533.592 | 2364.17 | 1(Win) |
| jeaiii::to_text | 1827.55 | 0.0826921 | 0.578989ms | 5686 | 30 | 180.602 | 2967.13 | 2(Loss) |
| fmt::format_to | 1132.4 | 0.0653555 | 0.899205ms | 5686 | 30 | 293.834 | 4788.6 | 3(Loss) |
| std::to_chars | 1110.02 | 0.025551 | 0.953766ms | 5686 | 30 | 46.7402 | 4885.13 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2185.52 | 1.60102 | 4.55105ms | 56593 | 30 | 4.68955e+06 | 24694.9 | 1(Win) |
| jeaiii::to_text | 1799.75 | 0.925423 | 5.5461ms | 56593 | 30 | 2.31048e+06 | 29988.2 | 2(Loss) |
| fmt::format_to | 1003.62 | 0.820379 | 9.88233ms | 56593 | 30 | 5.83896e+06 | 53776.5 | 3(Loss) |
| std::to_chars | 824.998 | 0.775953 | 11.8111ms | 56593 | 30 | 7.73058e+06 | 65419.9 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1122.08 | 0.27015 | 86.705ms | 565671 | 30 | 5.06073e+07 | 480774 | 1(Win) |
| jeaiii::to_text | 973.217 | 0.184068 | 99.967ms | 565671 | 30 | 3.12309e+07 | 554312 | 2(Loss) |
| fmt::format_to | 800.614 | 0.160517 | 121.421ms | 565671 | 30 | 3.50949e+07 | 673815 | 3(Loss) |
| std::to_chars | 749.469 | 0.179587 | 129.599ms | 565671 | 30 | 5.01292e+07 | 719797 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1860.02 | 0.625373 | 0.079318ms | 469 | 30 | 67.8437 | 240.467 | 1(Win) |
| jeaiii::to_text | 1388.76 | 0.26293 | 0.093955ms | 469 | 30 | 21.5126 | 322.067 | 2(Loss) |
| std::to_chars | 867.986 | 0.321667 | 0.12853ms | 469 | 30 | 82.4241 | 515.3 | 3(Loss) |
| fmt::format_to | 848.716 | 0.285102 | 0.132176ms | 469 | 30 | 67.7241 | 527 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2125.33 | 0.183848 | 0.426344ms | 4652 | 30 | 441.84 | 2087.43 | 1(Win) |
| jeaiii::to_text | 1603.67 | 0.0977294 | 0.540206ms | 4652 | 30 | 219.292 | 2766.47 | 2(Loss) |
| fmt::format_to | 948.915 | 0.162936 | 0.900787ms | 4652 | 30 | 1740.92 | 4675.33 | 3(Loss) |
| std::to_chars | 939.782 | 0.0680308 | 2.0623ms | 4652 | 30 | 309.426 | 4720.77 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2206.6 | 1.3175 | 3.77022ms | 46634 | 30 | 2.11535e+06 | 20154.8 | 1(Win) |
| jeaiii::to_text | 1324.43 | 0.835938 | 6.19972ms | 46634 | 30 | 2.36383e+06 | 33579.4 | 2(Loss) |
| fmt::format_to | 827.251 | 1.02874 | 9.76198ms | 46634 | 30 | 9.17615e+06 | 53760.8 | 3(Loss) |
| std::to_chars | 640.62 | 0.542854 | 12.5627ms | 46634 | 30 | 4.26081e+06 | 69422.9 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1030.99 | 0.237552 | 77.8621ms | 466155 | 30 | 3.14765e+07 | 431196 | 1(Win) |
| jeaiii::to_text | 846.264 | 0.192692 | 94.3872ms | 466155 | 30 | 3.07396e+07 | 525321 | 2(Loss) |
| fmt::format_to | 666.652 | 0.153746 | 120.197ms | 466155 | 30 | 3.15348e+07 | 666855 | 3(Loss) |
| std::to_chars | 621.492 | 0.111923 | 128.967ms | 466155 | 30 | 1.92286e+07 | 715311 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2049.37 | 0.3874 | 0.078115ms | 481 | 30 | 22.5575 | 223.833 | 1(Win) |
| jeaiii::to_text | 1669.28 | 0.336248 | 0.085229ms | 481 | 30 | 25.6138 | 274.8 | 2(Loss) |
| fmt::format_to | 1156.24 | 0.232758 | 0.10748ms | 481 | 30 | 25.5816 | 396.733 | 3(Loss) |
| std::to_chars | 1006.25 | 0.204414 | 0.117439ms | 481 | 30 | 26.0506 | 455.867 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2235.73 | 0.19042 | 0.420734ms | 4818 | 30 | 459.454 | 2055.17 | 1(Win) |
| jeaiii::to_text | 1924.01 | 0.172833 | 0.509239ms | 4818 | 30 | 511.085 | 2388.13 | 2(Loss) |
| fmt::format_to | 1239.73 | 0.177708 | 3.42857ms | 4818 | 48 | 2082.25 | 3706.29 | 3(Loss) |
| std::to_chars | 1090.58 | 0.136144 | 0.796114ms | 4818 | 30 | 987.04 | 4213.17 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2137.13 | 1.20838 | 3.97944ms | 48336 | 30 | 2.03801e+06 | 21569.5 | 1(Win) |
| jeaiii::to_text | 1630.28 | 1.08863 | 5.2092ms | 48336 | 30 | 2.8425e+06 | 28275.4 | 2(Loss) |
| fmt::format_to | 1157.72 | 0.911102 | 7.25921ms | 48336 | 30 | 3.94813e+06 | 39816.9 | 3(Loss) |
| std::to_chars | 996.201 | 1.52834 | 8.35887ms | 48336 | 30 | 1.50041e+07 | 46272.6 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1487.15 | 0.286151 | 55.987ms | 482981 | 30 | 2.35648e+07 | 309725 | 1(Win) |
| jeaiii::to_text | 1294.86 | 0.248601 | 64.1506ms | 482981 | 30 | 2.34607e+07 | 355719 | 2(Loss) |
| fmt::format_to | 982.647 | 0.332857 | 84.0952ms | 482981 | 30 | 7.30302e+07 | 468741 | 3(Loss) |
| std::to_chars | 886.788 | 0.261183 | 93.6756ms | 482981 | 30 | 5.52119e+07 | 519410 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2488.06 | 0.236265 | 0.250246ms | 1008 | 30 | 24.9989 | 386.367 | 1(Win) |
| jeaiii::to_text | 1809.57 | 0.249091 | 0.131916ms | 1008 | 30 | 52.5299 | 531.233 | 2(Loss) |
| fmt::format_to | 1360.34 | 0.13284 | 0.163906ms | 1008 | 30 | 26.4368 | 706.667 | 3(Loss) |
| std::to_chars | 1155.27 | 0.0599783 | 0.187769ms | 1008 | 30 | 7.47241 | 832.1 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2720.49 | 0.0649248 | 0.725451ms | 9981 | 30 | 154.809 | 3498.87 | 1(Win) |
| jeaiii::to_text | 1955.98 | 0.104328 | 0.969696ms | 9981 | 30 | 773.289 | 4866.43 | 2(Loss) |
| fmt::format_to | 1437.2 | 0.0596069 | 1.2694ms | 9981 | 30 | 467.551 | 6623.03 | 3(Loss) |
| std::to_chars | 1222.38 | 0.0540297 | 3.40007ms | 9981 | 30 | 531.03 | 7786.93 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2465.68 | 2.08466 | 7.93953ms | 99867 | 30 | 1.94519e+07 | 38626.5 | 1(Win) |
| jeaiii::to_text | 1627.39 | 0.703359 | 12.4098ms | 99867 | 30 | 5.08319e+06 | 58523.5 | 2(Loss) |
| fmt::format_to | 1296.42 | 0.985503 | 14.4199ms | 99867 | 30 | 1.57249e+07 | 73464.1 | 3(Loss) |
| std::to_chars | 672.371 | 0.557054 | 25.6503ms | 99867 | 30 | 1.86785e+07 | 141649 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 912.309 | 0.063255 | 188.143ms | 998110 | 30 | 1.30672e+07 | 1.04337e+06 | 1(Win) |
| jeaiii::to_text | 891.409 | 0.0962983 | 191.931ms | 998110 | 30 | 3.1722e+07 | 1.06783e+06 | 2(Loss) |
| fmt::format_to | 764.632 | 0.0697069 | 224.425ms | 998110 | 30 | 2.25905e+07 | 1.24488e+06 | 3(Loss) |
| std::to_chars | 589.804 | 0.177999 | 289.866ms | 998110 | 30 | 2.47569e+08 | 1.61388e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2656.92 | 0.244918 | 0.10722ms | 1057 | 30 | 25.9034 | 379.4 | 1(Win) |
| jeaiii::to_text | 1833.23 | 0.133023 | 0.136844ms | 1057 | 30 | 16.0506 | 549.867 | 2(Loss) |
| fmt::format_to | 1425.79 | 0.127776 | 0.164186ms | 1057 | 30 | 24.4828 | 707 | 3(Loss) |
| std::to_chars | 1196.24 | 0.0692977 | 0.18831ms | 1057 | 30 | 10.2299 | 842.667 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2882.57 | 0.0571578 | 1.54845ms | 10487 | 30 | 117.982 | 3469.53 | 1(Win) |
| jeaiii::to_text | 1978.73 | 0.0882181 | 0.968083ms | 10487 | 30 | 596.437 | 5054.33 | 2(Loss) |
| fmt::format_to | 1497.61 | 0.076315 | 1.26664ms | 10487 | 30 | 779.197 | 6678.1 | 3(Loss) |
| std::to_chars | 1208.3 | 1.93883 | 7.47147ms | 10487 | 48 | 1.23616e+06 | 8277.06 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1955.72 | 0.924977 | 9.46817ms | 104754 | 30 | 6.69745e+06 | 51081.5 | 1(Win) |
| jeaiii::to_text | 1448.14 | 0.588139 | 12.7629ms | 104754 | 30 | 4.93857e+06 | 68985.9 | 2(Loss) |
| fmt::format_to | 1293.07 | 1.20681 | 13.9595ms | 104754 | 30 | 2.60791e+07 | 77258.9 | 3(Loss) |
| std::to_chars | 902.013 | 0.541577 | 20.023ms | 104754 | 30 | 1.07934e+07 | 110754 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1416.35 | 0.169707 | 127.378ms | 1048459 | 30 | 4.30609e+07 | 705961 | 1(Win) |
| jeaiii::to_text | 1295.13 | 0.10293 | 139.579ms | 1048459 | 30 | 1.89444e+07 | 772037 | 2(Loss) |
| fmt::format_to | 1020.89 | 0.160627 | 176.421ms | 1048459 | 30 | 7.42515e+07 | 979429 | 3(Loss) |
| std::to_chars | 803.119 | 0.0650814 | 224.635ms | 1048459 | 30 | 1.9696e+07 | 1.24501e+06 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2210.5 | 0.265882 | 0.111167ms | 945 | 30 | 35.2517 | 407.7 | 1(Win) |
| jeaiii::to_text | 1765.26 | 0.115684 | 0.12864ms | 945 | 30 | 10.4644 | 510.533 | 2(Loss) |
| fmt::format_to | 1278.27 | 0.129297 | 0.163514ms | 945 | 30 | 24.9299 | 705.033 | 3(Loss) |
| std::to_chars | 1090.5 | 0.115112 | 0.185896ms | 945 | 30 | 27.1506 | 826.433 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2550.02 | 0.0922117 | 0.696437ms | 9516 | 30 | 323.085 | 3558.87 | 1(Win) |
| jeaiii::to_text | 1936.78 | 0.0774643 | 0.905817ms | 9516 | 30 | 395.252 | 4685.7 | 2(Loss) |
| fmt::format_to | 1367.39 | 0.0652495 | 2.8784ms | 9516 | 30 | 562.602 | 6636.87 | 3(Loss) |
| std::to_chars | 1129.51 | 0.0362968 | 1.50173ms | 9516 | 30 | 255.145 | 8034.6 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2297.39 | 0.896628 | 7.44216ms | 94830 | 30 | 3.73739e+06 | 39365.1 | 1(Win) |
| jeaiii::to_text | 1454.47 | 0.8812 | 11.4357ms | 94830 | 30 | 9.00648e+06 | 62178.8 | 2(Loss) |
| fmt::format_to | 1174.62 | 0.613959 | 14.2113ms | 94830 | 30 | 6.70347e+06 | 76992.7 | 3(Loss) |
| std::to_chars | 799.303 | 0.515477 | 20.4285ms | 94830 | 30 | 1.02049e+07 | 113145 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1206.19 | 0.165014 | 135.121ms | 947964 | 30 | 4.58898e+07 | 749510 | 1(Win) |
| jeaiii::to_text | 1149.36 | 0.130114 | 142.675ms | 947964 | 30 | 3.14225e+07 | 786568 | 2(Loss) |
| fmt::format_to | 929.525 | 0.0417809 | 175.474ms | 947964 | 30 | 4.95381e+06 | 972592 | 3(Loss) |
| std::to_chars | 739.784 | 0.0761905 | 220.366ms | 947964 | 30 | 2.60073e+07 | 1.22204e+06 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2888.9 | 0.272005 | 0.15581ms | 974 | 30 | 22.9471 | 321.533 | 1(Win) |
| jeaiii::to_text | 2077.56 | 0.199288 | 0.117509ms | 974 | 30 | 23.8172 | 447.1 | 2(Loss) |
| fmt::format_to | 1475.97 | 0.118844 | 0.15031ms | 974 | 30 | 16.7816 | 629.333 | 3(Loss) |
| std::to_chars | 1181.68 | 0.1206 | 0.177841ms | 974 | 30 | 26.9609 | 786.067 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3222.81 | 0.0744811 | 0.590249ms | 9733 | 30 | 138.051 | 2880.13 | 1(Win) |
| jeaiii::to_text | 2255.68 | 0.111758 | 0.799629ms | 9733 | 30 | 634.483 | 4115 | 2(Loss) |
| fmt::format_to | 1550.9 | 0.0538849 | 5.59585ms | 9733 | 48 | 499.234 | 5985 | 3(Loss) |
| std::to_chars | 1137.34 | 0.0219086 | 1.55502ms | 9733 | 30 | 95.9092 | 8161.23 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3132.57 | 1.11906 | 5.4717ms | 97479 | 30 | 3.30862e+06 | 29676.3 | 1(Win) |
| jeaiii::to_text | 2089.95 | 0.614049 | 8.15764ms | 97479 | 30 | 2.2381e+06 | 44481.2 | 2(Loss) |
| fmt::format_to | 1502.21 | 0.692359 | 11.289ms | 97479 | 30 | 5.50739e+06 | 61884.3 | 3(Loss) |
| std::to_chars | 1019.88 | 1.16004 | 16.4307ms | 97479 | 30 | 3.35424e+07 | 91151.1 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2041.73 | 0.260085 | 82.1597ms | 974470 | 30 | 4.20426e+07 | 455165 | 1(Win) |
| jeaiii::to_text | 1731.6 | 0.275757 | 96.7557ms | 974470 | 30 | 6.57075e+07 | 536686 | 2(Loss) |
| fmt::format_to | 1200.82 | 0.151343 | 139.525ms | 974470 | 30 | 4.11549e+07 | 773907 | 3(Loss) |
| std::to_chars | 985.117 | 0.0908596 | 170.205ms | 974470 | 30 | 2.20407e+07 | 943368 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3061.21 | 0.13996 | 0.175848ms | 1939 | 30 | 21.4437 | 604.067 | 1(Win) |
| jeaiii::to_text | 1801.32 | 0.0896799 | 0.222946ms | 1939 | 30 | 25.4264 | 1026.57 | 2(Loss) |
| fmt::format_to | 1174.58 | 0.0400959 | 0.344953ms | 1939 | 30 | 11.954 | 1574.33 | 3(Loss) |
| std::to_chars | 906.947 | 0.0618313 | 0.403251ms | 1939 | 30 | 47.6793 | 2038.9 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3127.51 | 0.0539169 | 1.13041ms | 19400 | 30 | 305.195 | 5915.67 | 1(Win) |
| jeaiii::to_text | 1856.5 | 0.0340143 | 1.87829ms | 19400 | 30 | 344.713 | 9965.67 | 2(Loss) |
| fmt::format_to | 1248.18 | 0.0490761 | 2.75994ms | 19400 | 30 | 1587.49 | 14822.6 | 3(Loss) |
| std::to_chars | 861.476 | 0.0264467 | 3.96979ms | 19400 | 30 | 967.789 | 21476.3 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3198.64 | 1.5918 | 10.6032ms | 193844 | 30 | 2.53907e+07 | 57794.5 | 1(Win) |
| jeaiii::to_text | 1639.96 | 0.868788 | 20.6268ms | 193844 | 30 | 2.87731e+07 | 112725 | 2(Loss) |
| fmt::format_to | 1035.27 | 0.385628 | 32.39ms | 193844 | 30 | 1.42252e+07 | 178566 | 3(Loss) |
| std::to_chars | 797.028 | 0.461276 | 41.6778ms | 193844 | 30 | 3.434e+07 | 231942 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1921.74 | 0.147423 | 173.223ms | 1937767 | 30 | 6.02927e+07 | 961629 | 1(Win) |
| jeaiii::to_text | 1579.15 | 0.0665017 | 211.006ms | 1937767 | 30 | 1.81695e+07 | 1.17025e+06 | 2(Loss) |
| fmt::format_to | 1009.87 | 0.055977 | 329.604ms | 1937767 | 30 | 3.14785e+07 | 1.82994e+06 | 3(Loss) |
| std::to_chars | 794.198 | 0.0660358 | 419.301ms | 1937767 | 30 | 7.08313e+07 | 2.32687e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3065.11 | 0.146776 | 0.150931ms | 1993 | 30 | 24.8517 | 620.1 | 1(Win) |
| jeaiii::to_text | 1809.82 | 0.0773975 | 0.225901ms | 1993 | 30 | 19.8207 | 1050.2 | 2(Loss) |
| fmt::format_to | 1180.66 | 0.0558852 | 0.326168ms | 1993 | 30 | 24.2816 | 1609.83 | 3(Loss) |
| std::to_chars | 979.56 | 0.0451147 | 0.387272ms | 1993 | 30 | 22.9885 | 1940.33 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3125.31 | 0.0465947 | 1.15677ms | 19875 | 30 | 239.564 | 6064.77 | 1(Win) |
| jeaiii::to_text | 1871.21 | 0.0426809 | 4.35651ms | 19875 | 30 | 560.737 | 10129.4 | 2(Loss) |
| fmt::format_to | 1201.18 | 0.0355232 | 2.92558ms | 19875 | 30 | 942.631 | 15779.7 | 3(Loss) |
| std::to_chars | 979.612 | 0.0185713 | 3.55948ms | 19875 | 30 | 387.357 | 19348.8 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3170.02 | 0.977407 | 10.8277ms | 198820 | 30 | 1.02534e+07 | 59813.4 | 1(Win) |
| jeaiii::to_text | 1736.51 | 0.658711 | 19.787ms | 198820 | 30 | 1.55195e+07 | 109190 | 2(Loss) |
| fmt::format_to | 1145.99 | 0.465845 | 29.9627ms | 198820 | 30 | 1.78221e+07 | 165454 | 3(Loss) |
| std::to_chars | 983.883 | 0.381532 | 34.815ms | 198820 | 30 | 1.62187e+07 | 192716 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2850.47 | 0.153108 | 120.038ms | 1988042 | 30 | 3.11125e+07 | 665134 | 1(Win) |
| jeaiii::to_text | 1934.87 | 0.0614888 | 176.754ms | 1988042 | 30 | 1.08909e+07 | 979885 | 2(Loss) |
| fmt::format_to | 1134.6 | 0.240012 | 300.588ms | 1988042 | 30 | 4.82562e+08 | 1.67103e+06 | 3(Loss) |
| std::to_chars | 978.623 | 0.416993 | 347.676ms | 1988042 | 30 | 1.95794e+09 | 1.93736e+06 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3025.42 | 0.208419 | 0.146713ms | 1890 | 30 | 46.254 | 595.767 | 1(Win) |
| jeaiii::to_text | 1763.76 | 0.0649992 | 0.236981ms | 1890 | 30 | 13.2368 | 1021.93 | 2(Loss) |
| fmt::format_to | 1062.66 | 0.0508094 | 0.358097ms | 1890 | 30 | 22.2816 | 1696.17 | 3(Loss) |
| std::to_chars | 917.383 | 0.0446438 | 0.480675ms | 1890 | 30 | 23.0816 | 1964.77 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3152.32 | 0.0743948 | 1.09372ms | 18874 | 30 | 541.344 | 5709.97 | 1(Win) |
| jeaiii::to_text | 1830.78 | 0.0467081 | 1.81743ms | 18874 | 30 | 632.644 | 9831.67 | 2(Loss) |
| fmt::format_to | 1139.26 | 0.0348971 | 2.9283ms | 18874 | 30 | 911.972 | 15799.4 | 3(Loss) |
| std::to_chars | 941.306 | 0.0141507 | 3.50734ms | 18874 | 30 | 219.655 | 19122 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2953.95 | 1.45299 | 11.0268ms | 188791 | 30 | 2.3529e+07 | 60950.7 | 1(Win) |
| jeaiii::to_text | 1643.29 | 0.78261 | 19.7421ms | 188791 | 30 | 2.20569e+07 | 109564 | 2(Loss) |
| fmt::format_to | 1033.25 | 0.349994 | 31.4954ms | 188791 | 30 | 1.11583e+07 | 174252 | 3(Loss) |
| std::to_chars | 933.413 | 0.539726 | 34.8085ms | 188791 | 30 | 3.25149e+07 | 192889 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2812.69 | 0.18134 | 115.406ms | 1887820 | 30 | 4.04188e+07 | 640086 | 1(Win) |
| jeaiii::to_text | 1756.96 | 0.0809448 | 184.4ms | 1887820 | 30 | 2.06393e+07 | 1.0247e+06 | 2(Loss) |
| fmt::format_to | 1029.06 | 0.0659794 | 315.028ms | 1887820 | 30 | 3.99743e+07 | 1.74953e+06 | 3(Loss) |
| std::to_chars | 932.359 | 0.152904 | 347.756ms | 1887820 | 30 | 2.61527e+08 | 1.93098e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3378.09 | 0.198273 | 0.168073ms | 1941 | 30 | 35.4126 | 547.967 | 1(Win) |
| jeaiii::to_text | 2086.27 | 0.106708 | 0.196466ms | 1941 | 30 | 26.892 | 887.267 | 2(Loss) |
| fmt::format_to | 1081.3 | 0.0617027 | 0.370069ms | 1941 | 30 | 33.4724 | 1711.9 | 3(Loss) |
| std::to_chars | 926.777 | 0.0441547 | 0.396148ms | 1941 | 30 | 23.3333 | 1997.33 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3583.92 | 0.0664198 | 1.00847ms | 19395 | 30 | 352.516 | 5160.97 | 1(Win) |
| jeaiii::to_text | 2099.42 | 0.0592091 | 1.69259ms | 19395 | 30 | 816.355 | 8810.3 | 2(Loss) |
| fmt::format_to | 872.898 | 2.25706 | 8.87715ms | 19395 | 30 | 6.86213e+06 | 21189.8 | 3(Loss) |
| std::to_chars | 804.855 | 0.440234 | 9.78923ms | 19395 | 30 | 307067 | 22981.2 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3139.33 | 1.51203 | 10.849ms | 193963 | 30 | 2.38127e+07 | 58922.7 | 1(Win) |
| jeaiii::to_text | 2025.48 | 0.579207 | 16.6644ms | 193963 | 30 | 8.39406e+06 | 91325.4 | 2(Loss) |
| fmt::format_to | 866.927 | 0.309567 | 38.6109ms | 193963 | 30 | 1.30889e+07 | 213371 | 3(Loss) |
| std::to_chars | 799.614 | 0.339042 | 41.8144ms | 193963 | 30 | 1.84547e+07 | 231334 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2441.99 | 0.148275 | 136.69ms | 1939261 | 30 | 3.78304e+07 | 757341 | 1(Win) |
| jeaiii::to_text | 1699.09 | 0.14376 | 196.075ms | 1939261 | 30 | 7.34572e+07 | 1.08848e+06 | 2(Loss) |
| fmt::format_to | 858.452 | 0.092124 | 387.558ms | 1939261 | 30 | 1.1817e+08 | 2.15437e+06 | 3(Loss) |
| std::to_chars | 799.462 | 0.0735568 | 417.014ms | 1939261 | 30 | 8.68646e+07 | 2.31333e+06 | 4(Loss) |
