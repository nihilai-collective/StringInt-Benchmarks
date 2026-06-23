# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1473.28 | 2.02179 | 0.122167ms | 279 | 30 | 399.972 | 180.6 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1462.22 | 2.05023 | 0.155625ms | 279 | 30 | 417.551 | 181.967 | 1(Tie) |
| fmt::format_to | 1133.84 | 1.81098 | 0.055458ms | 279 | 30 | 541.816 | 234.667 | 3(Loss) |
| std::to_chars | 992.201 | 1.61865 | 2.885ms | 279 | 30 | 565.247 | 268.167 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1474.7 | 0.155074 | 0.389875ms | 2633 | 30 | 209.168 | 1702.73 | 1(Win) |
| vn::to_chars | 1426.93 | 0.292932 | 0.394459ms | 2633 | 30 | 797.168 | 1759.73 | 2(Loss) |
| fmt::format_to | 1217.45 | 0.232216 | 0.948583ms | 2633 | 30 | 688.189 | 2062.53 | 3(Loss) |
| std::to_chars | 1062.22 | 0.205874 | 0.532166ms | 2633 | 30 | 710.547 | 2363.93 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1414.21 | 0.295629 | 17.229ms | 26305 | 30 | 82501.8 | 17738.8 | 1(Win) |
| vn::to_chars | 1250.41 | 1.17926 | 7.88546ms | 26305 | 30 | 1.67923e+06 | 20062.5 | 2(Loss) |
| std::to_chars | 623.953 | 0.0489178 | 6.81067ms | 26305 | 30 | 11604.5 | 40205.6 | 3(Loss) |
| fmt::format_to | 534.007 | 0.483976 | 8.87808ms | 26305 | 30 | 1.55079e+06 | 46977.7 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 415.2 | 0.268208 | 119.049ms | 265069 | 30 | 7.99958e+07 | 608838 | 1(Win) |
| std::to_chars **STATISTICAL TIE** | 377.661 | 2.00689 | 320.31ms | 265069 | 30 | 5.41356e+09 | 669356 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 363.494 | 1.58409 | 123.509ms | 265069 | 30 | 3.64086e+09 | 695444 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 354.981 | 1.59713 | 134.757ms | 265069 | 30 | 3.88068e+09 | 712121 | 2(Tie) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1610.68 | 2.07277 | 0.311125ms | 312 | 30 | 439.857 | 184.733 | 1(Win) |
| jeaiii::to_text | 1508.6 | 1.73837 | 0.063417ms | 312 | 30 | 352.668 | 197.233 | 2(Loss) |
| std::to_chars | 1272.36 | 1.64057 | 1.62563ms | 312 | 48 | 706.51 | 233.854 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1762.13 | 0.217492 | 0.340458ms | 3154 | 30 | 413.482 | 1706.97 | 1(Win) |
| jeaiii::to_text | 1689.26 | 0.433706 | 0.433583ms | 3154 | 30 | 1789.14 | 1780.6 | 2(Loss) |
| fmt::format_to | 1444.8 | 0.351837 | 0.3995ms | 3154 | 30 | 1609.57 | 2081.87 | 3(Loss) |
| std::to_chars | 1142.24 | 0.19145 | 0.814209ms | 3154 | 30 | 762.506 | 2633.33 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1439.34 | 0.279201 | 3.91575ms | 31363 | 30 | 100987 | 20780.5 | 1(Win) |
| vn::to_chars **STATISTICAL TIE** | 1382.5 | 0.0807594 | 4.08688ms | 31363 | 30 | 9158.28 | 21634.8 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1379.31 | 0.100792 | 4.15067ms | 31363 | 30 | 14331.3 | 21684.8 | 2(Tie) |
| std::to_chars | 1079.09 | 0.534086 | 5.23092ms | 31363 | 30 | 657454 | 27717.9 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars **STATISTICAL TIE** | 841.745 | 1.27928 | 62.6252ms | 314660 | 30 | 6.2399e+08 | 356501 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 823.471 | 0.856412 | 63.6377ms | 314660 | 30 | 2.92195e+08 | 364412 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 812.081 | 0.871342 | 65.9974ms | 314660 | 30 | 3.11016e+08 | 369524 | 1(Tie) |
| fmt::format_to | 701.195 | 0.35683 | 75.8714ms | 314660 | 30 | 6.996e+07 | 427960 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1168.94 | 2.05322 | 0.093959ms | 223 | 30 | 418.616 | 181.933 | 1(Win) |
| vn::to_chars | 1078.26 | 2.24329 | 0.19725ms | 223 | 30 | 587.289 | 197.233 | 2(Loss) |
| fmt::format_to | 1007.28 | 0.91451 | 0.076459ms | 223 | 30 | 111.844 | 211.133 | 3(Loss) |
| std::to_chars | 797.61 | 1.41893 | 0.359708ms | 223 | 30 | 429.413 | 266.633 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1205.58 | 0.112126 | 0.829208ms | 2156 | 30 | 109.707 | 1705.5 | 1(Win) |
| fmt::format_to | 1066.55 | 0.205917 | 0.40425ms | 2156 | 30 | 472.764 | 1927.83 | 2(Loss) |
| std::to_chars | 998.23 | 0.462625 | 0.471667ms | 2156 | 30 | 2724.05 | 2059.77 | 3(Loss) |
| vn::to_chars | 562.033 | 0.329346 | 0.743ms | 2156 | 30 | 4355.14 | 3658.37 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1170.73 | 0.866892 | 18.1075ms | 21514 | 48 | 1.1079e+06 | 17525.2 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1161.35 | 0.300908 | 3.27375ms | 21514 | 30 | 84781.8 | 17666.8 | 1(Tie) |
| std::to_chars **STATISTICAL TIE** | 1132.95 | 2.34114 | 3.844ms | 21514 | 30 | 5.39254e+06 | 18109.6 | 1(Tie) |
| fmt::format_to | 937.996 | 0.149875 | 4.17413ms | 21514 | 30 | 32241.8 | 21873.6 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 585.47 | 1.09704 | 64.0251ms | 215167 | 30 | 4.43512e+08 | 350486 | 1(Tie) |
| std::to_chars **STATISTICAL TIE** | 570.317 | 0.805857 | 63.5329ms | 215167 | 30 | 2.52206e+08 | 359799 | 1(Tie) |
| jeaiii::to_text | 560.073 | 0.10786 | 66.8338ms | 215167 | 30 | 4.68495e+06 | 366379 | 3(Loss) |
| fmt::format_to | 468.961 | 1.25552 | 80.6097ms | 215167 | 30 | 9.05409e+08 | 437561 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1480.32 | 1.13075 | 0.221292ms | 263 | 30 | 110.116 | 169.433 | 1(Win) |
| vn::to_chars **STATISTICAL TIE** | 1289.54 | 1.87052 | 0.086834ms | 263 | 30 | 397.086 | 194.5 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1236.77 | 1.28636 | 0.526ms | 263 | 30 | 204.166 | 202.8 | 2(Tie) |
| std::to_chars | 1187.95 | 1.30507 | 0.112416ms | 263 | 30 | 227.775 | 211.133 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1574.26 | 0.896577 | 2.07217ms | 2549 | 48 | 9200.35 | 1544.17 | 1(Win) |
| vn::to_chars | 1359.98 | 0.407981 | 2.10871ms | 2549 | 30 | 1595.43 | 1787.47 | 2(Loss) |
| fmt::format_to | 1282.26 | 2.11972 | 0.405459ms | 2549 | 30 | 48446.8 | 1895.8 | 3(Loss) |
| std::to_chars | 1140.29 | 1.12003 | 0.55675ms | 2549 | 30 | 17103.7 | 2131.83 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to **STATISTICAL TIE** | 1349.44 | 0.170669 | 3.86775ms | 25802 | 30 | 29055.4 | 18234.7 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1321.95 | 2.17673 | 3.4625ms | 25802 | 30 | 4.92499e+06 | 18613.9 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1298.98 | 0.806281 | 4.40521ms | 25802 | 30 | 699838 | 18943.1 | 1(Tie) |
| std::to_chars | 676.655 | 0.262295 | 17.2239ms | 25802 | 30 | 272944 | 36365.2 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 621.196 | 0.174951 | 409.911ms | 257225 | 48 | 2.29108e+07 | 394898 | 1(Win) |
| std::to_chars **STATISTICAL TIE** | 593.14 | 0.329809 | 448.257ms | 257225 | 48 | 8.93055e+07 | 413576 | 2(Tie) |
| vn::to_chars **STATISTICAL TIE** | 590.41 | 0.276531 | 85.2573ms | 257225 | 30 | 3.9603e+07 | 415489 | 2(Tie) |
| fmt::format_to | 560.491 | 0.429518 | 80.784ms | 257225 | 30 | 1.06017e+08 | 437668 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2593.99 | 2.05715 | 0.118083ms | 510 | 30 | 446.328 | 187.5 | 1(Win) |
| jeaiii::to_text | 2035.89 | 1.66074 | 0.327ms | 510 | 30 | 472.231 | 238.9 | 2(Loss) |
| fmt::format_to | 1659.04 | 1.85595 | 0.144917ms | 510 | 30 | 888.144 | 293.167 | 3(Loss) |
| std::to_chars | 1584.45 | 1.21535 | 0.319208ms | 510 | 30 | 417.551 | 306.967 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2641.22 | 0.205859 | 0.880375ms | 5143 | 30 | 438.414 | 1857 | 1(Win) |
| jeaiii::to_text | 2211.3 | 0.172791 | 0.422792ms | 5143 | 30 | 440.654 | 2218.03 | 2(Loss) |
| std::to_chars | 1845.12 | 0.11612 | 1.23708ms | 5143 | 30 | 285.84 | 2658.23 | 3(Loss) |
| fmt::format_to | 1757.01 | 0.29473 | 0.586334ms | 5143 | 30 | 2030.74 | 2791.53 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1662.45 | 0.183971 | 7.07963ms | 51594 | 30 | 88944.9 | 29597.2 | 1(Win) |
| jeaiii::to_text | 1446.23 | 0.759094 | 6.42483ms | 51594 | 30 | 2.00096e+06 | 34022.2 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 841.648 | 0.428503 | 10.8769ms | 51594 | 30 | 1.88264e+06 | 58461.3 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 835.361 | 0.554618 | 11.055ms | 51594 | 30 | 3.20154e+06 | 58901.3 | 3(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 777.157 | 0.526403 | 114.349ms | 515985 | 30 | 3.33284e+08 | 633182 | 1(Win) |
| std::to_chars | 751.322 | 0.333216 | 122.119ms | 515985 | 30 | 1.42888e+08 | 654954 | 2(Loss) |
| jeaiii::to_text **STATISTICAL TIE** | 656.068 | 1.24939 | 128.035ms | 515985 | 30 | 2.63447e+09 | 750047 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 639.152 | 0.544203 | 333.08ms | 515985 | 30 | 5.26634e+08 | 769897 | 3(Tie) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2934.25 | 2.06011 | 0.756917ms | 577 | 30 | 447.775 | 187.533 | 1(Win) |
| jeaiii::to_text | 2446.01 | 1.6874 | 0.81ms | 577 | 30 | 432.309 | 224.967 | 2(Loss) |
| std::to_chars | 2052.74 | 1.43132 | 0.094833ms | 577 | 30 | 441.651 | 268.067 | 3(Loss) |
| fmt::format_to | 1952 | 1.1596 | 1.15775ms | 577 | 30 | 320.576 | 281.9 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3107.91 | 0.248806 | 1.44883ms | 5685 | 30 | 565.154 | 1744.47 | 1(Win) |
| jeaiii::to_text | 2590.37 | 0.156664 | 1.51988ms | 5685 | 30 | 322.552 | 2093 | 2(Loss) |
| std::to_chars | 2123.86 | 0.589969 | 0.46925ms | 5685 | 30 | 6804.41 | 2552.73 | 3(Loss) |
| fmt::format_to | 2080.79 | 0.14808 | 1.14471ms | 5685 | 30 | 446.599 | 2605.57 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1861.34 | 0.141897 | 5.12546ms | 56609 | 30 | 50814.6 | 29004.1 | 1(Win) |
| jeaiii::to_text | 1826.35 | 0.318021 | 5.63708ms | 56609 | 30 | 265116 | 29559.8 | 2(Loss) |
| fmt::format_to | 1772.06 | 0.662567 | 5.75708ms | 56609 | 30 | 1.22234e+06 | 30465.3 | 3(Loss) |
| std::to_chars | 1531.95 | 0.247741 | 6.39438ms | 56609 | 30 | 228664 | 35240.3 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1300.71 | 0.601455 | 74.1345ms | 565975 | 30 | 1.86879e+08 | 414969 | 1(Win) |
| jeaiii::to_text | 1243.24 | 0.12831 | 78.2465ms | 565975 | 30 | 9.30941e+06 | 434151 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 1136.86 | 0.286182 | 93.2072ms | 565975 | 30 | 5.53842e+07 | 474778 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 1130.92 | 0.344903 | 437.555ms | 565975 | 48 | 1.30067e+08 | 477273 | 3(Tie) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2181.98 | 1.28636 | 1.20479ms | 464 | 30 | 204.166 | 202.8 | 1(Win) |
| jeaiii::to_text | 1830.05 | 2.24088 | 1.07354ms | 464 | 30 | 880.786 | 241.8 | 2(Loss) |
| std::to_chars | 1722.03 | 1.37169 | 0.967375ms | 464 | 30 | 372.723 | 256.967 | 3(Loss) |
| fmt::format_to | 1616.36 | 1.40978 | 0.65825ms | 464 | 30 | 446.875 | 273.767 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2389.62 | 0.231824 | 0.757333ms | 4653 | 30 | 555.964 | 1856.97 | 1(Win) |
| jeaiii::to_text | 1968.58 | 0.727223 | 1.17213ms | 4653 | 30 | 8061.5 | 2254.13 | 2(Loss) |
| fmt::format_to | 1618.46 | 0.198524 | 0.569917ms | 4653 | 30 | 888.806 | 2741.77 | 3(Loss) |
| std::to_chars | 1516.38 | 0.441026 | 0.565458ms | 4653 | 30 | 4996.85 | 2926.33 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2390.84 | 0.181292 | 8.2735ms | 46654 | 30 | 34147.3 | 18609.7 | 1(Win) |
| jeaiii::to_text | 1958.48 | 1.58359 | 4.18179ms | 46654 | 30 | 3.8828e+06 | 22718 | 2(Loss) |
| std::to_chars | 1589.1 | 0.130528 | 5.35987ms | 46654 | 30 | 40068.7 | 27998.6 | 3(Loss) |
| fmt::format_to | 1193.01 | 0.714009 | 7.08079ms | 46654 | 30 | 2.12724e+06 | 37294.5 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1170.04 | 1.30872 | 76.5161ms | 466248 | 30 | 7.42073e+08 | 380028 | 1(Win) |
| std::to_chars | 1078.64 | 0.534959 | 75.5085ms | 466248 | 30 | 1.45895e+08 | 412229 | 2(Loss) |
| jeaiii::to_text | 960.186 | 1.08377 | 79.8769ms | 466248 | 30 | 7.55646e+08 | 463086 | 3(Loss) |
| fmt::format_to | 839.569 | 1.06003 | 93.8909ms | 466248 | 30 | 9.45541e+08 | 529615 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2251.08 | 1.49857 | 1.33737ms | 482 | 30 | 280.924 | 204.2 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2191.69 | 1.77209 | 1.20908ms | 482 | 30 | 414.409 | 209.733 | 1(Tie) |
| std::to_chars **STATISTICAL TIE** | 1935.46 | 1.9061 | 1.55133ms | 482 | 30 | 614.81 | 237.5 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1869.85 | 1.25007 | 0.249917ms | 482 | 30 | 283.316 | 245.833 | 3(Tie) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2586.89 | 0.196144 | 0.506292ms | 4841 | 30 | 367.609 | 1784.67 | 1(Win) |
| vn::to_chars | 2417.52 | 0.490862 | 0.45225ms | 4841 | 30 | 2636.15 | 1909.7 | 2(Loss) |
| std::to_chars | 2089.34 | 0.278817 | 0.572083ms | 4841 | 30 | 1138.71 | 2209.67 | 3(Loss) |
| fmt::format_to | 2049.36 | 0.176249 | 0.802709ms | 4841 | 30 | 472.944 | 2252.77 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2571.94 | 0.0432217 | 3.40933ms | 48319 | 30 | 1799.04 | 17916.7 | 1(Win) |
| jeaiii::to_text | 2352.55 | 0.903145 | 3.73946ms | 48319 | 30 | 938846 | 19587.5 | 2(Loss) |
| fmt::format_to | 2207.16 | 0.0824429 | 3.88762ms | 48319 | 30 | 8887.84 | 20877.8 | 3(Loss) |
| std::to_chars | 1557.51 | 1.08317 | 6.36896ms | 48319 | 30 | 3.08099e+06 | 29586.1 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1785.67 | 1.28911 | 47.806ms | 482970 | 30 | 3.31694e+08 | 257940 | 1(Win) |
| std::to_chars | 1601.48 | 0.371171 | 56.8788ms | 482970 | 30 | 3.41875e+07 | 287607 | 2(Loss) |
| jeaiii::to_text | 1470.26 | 1.4738 | 55.1999ms | 482970 | 30 | 6.39512e+08 | 313275 | 3(Loss) |
| fmt::format_to | 1295.79 | 1.86949 | 63.574ms | 482970 | 30 | 1.32476e+09 | 355456 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4206.16 | 1.68748 | 1.83358ms | 1005 | 30 | 443.568 | 227.867 | 1(Win) |
| jeaiii::to_text | 2729.57 | 1.58199 | 0.470667ms | 1005 | 30 | 925.706 | 351.133 | 2(Loss) |
| std::to_chars | 2574.61 | 1.69095 | 1.30917ms | 1005 | 30 | 1188.75 | 372.267 | 3(Loss) |
| fmt::format_to | 2323.31 | 1.00765 | 1.76775ms | 1005 | 30 | 518.395 | 412.533 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4642.52 | 0.529023 | 2.31721ms | 10034 | 30 | 3567.06 | 2061.2 | 1(Win) |
| jeaiii::to_text | 2945.66 | 0.400415 | 0.62125ms | 10034 | 30 | 5076.05 | 3248.57 | 2(Loss) |
| std::to_chars | 2798.55 | 1.06311 | 0.744334ms | 10034 | 30 | 39642.2 | 3419.33 | 3(Loss) |
| fmt::format_to | 2374.97 | 1.31848 | 2.13417ms | 10034 | 30 | 84663.7 | 4029.17 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2957.1 | 0.0852617 | 14.2808ms | 99973 | 30 | 22670.6 | 32241.7 | 1(Win) |
| jeaiii::to_text | 1652.29 | 0.460194 | 12.5555ms | 99973 | 30 | 2.11542e+06 | 57702.8 | 2(Loss) |
| std::to_chars | 1486.07 | 0.170881 | 12.7851ms | 99973 | 30 | 360577 | 64156.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1254.91 | 0.571193 | 136.233ms | 998634 | 30 | 5.63737e+08 | 758918 | 1(Win) |
| jeaiii::to_text | 1096.75 | 0.974634 | 158.355ms | 998634 | 30 | 2.14881e+09 | 868354 | 2(Loss) |
| fmt::format_to | 937.462 | 1.61328 | 181.6ms | 998634 | 30 | 8.0584e+09 | 1.0159e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4439.45 | 1.89561 | 2.78192ms | 1055 | 30 | 553.689 | 226.633 | 1(Win) |
| jeaiii::to_text | 2979.64 | 0.898866 | 0.596ms | 1055 | 30 | 276.368 | 337.667 | 2(Loss) |
| std::to_chars | 2818.54 | 1.07289 | 1.69667ms | 1055 | 30 | 440.033 | 356.967 | 3(Loss) |
| fmt::format_to | 2455.76 | 0.703643 | 0.709333ms | 1055 | 30 | 249.321 | 409.7 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4917.66 | 0.263506 | 0.501667ms | 10464 | 30 | 857.789 | 2029.27 | 1(Win) |
| jeaiii::to_text | 3214.86 | 0.140163 | 1.88704ms | 10464 | 30 | 567.886 | 3104.1 | 2(Loss) |
| std::to_chars | 2686.95 | 0.206542 | 0.733375ms | 10464 | 30 | 1765.27 | 3713.97 | 3(Loss) |
| fmt::format_to | 2553.26 | 0.172878 | 0.849125ms | 10464 | 30 | 1369.63 | 3908.43 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3515.82 | 0.639135 | 5.28183ms | 104915 | 30 | 992494 | 28458.4 | 1(Win) |
| fmt::format_to | 2607.76 | 0.346469 | 7.10037ms | 104915 | 30 | 530139 | 38368.1 | 2(Loss) |
| vn::to_chars | 2466.43 | 0.603015 | 7.57308ms | 104915 | 30 | 1.79521e+06 | 40566.7 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1863.11 | 0.129979 | 99.3468ms | 1047913 | 30 | 1.45829e+07 | 536397 | 1(Win) |
| std::to_chars | 1761.69 | 0.222837 | 103.043ms | 1047913 | 30 | 4.7939e+07 | 567279 | 2(Loss) |
| jeaiii::to_text | 1716.08 | 0.16534 | 105.232ms | 1047913 | 30 | 2.78134e+07 | 582354 | 3(Loss) |
| fmt::format_to | 1325.92 | 1.72673 | 131.736ms | 1047913 | 30 | 5.08137e+09 | 753714 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3962.31 | 2.43179 | 0.105084ms | 952 | 30 | 931.43 | 229.133 | 1(Win) |
| jeaiii::to_text | 3012.27 | 1.08414 | 0.506959ms | 952 | 30 | 320.317 | 301.4 | 2(Loss) |
| std::to_chars | 2793.53 | 0.95745 | 0.088375ms | 952 | 30 | 290.483 | 325 | 3(Loss) |
| fmt::format_to | 2261.83 | 1.16672 | 0.2335ms | 952 | 30 | 657.972 | 401.4 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4824.07 | 0.257719 | 2.00362ms | 9498 | 30 | 702.506 | 1877.67 | 1(Win) |
| jeaiii::to_text | 3133.97 | 0.128924 | 0.551541ms | 9498 | 30 | 416.547 | 2890.27 | 2(Loss) |
| std::to_chars | 2630.79 | 0.416278 | 0.873667ms | 9498 | 30 | 6162.82 | 3443.07 | 3(Loss) |
| fmt::format_to | 2526.71 | 0.0879201 | 0.676959ms | 9498 | 30 | 298.024 | 3584.9 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4093.61 | 0.301016 | 5.95433ms | 94834 | 30 | 132683 | 22093.1 | 1(Win) |
| std::to_chars | 2067.48 | 0.0513766 | 9.33025ms | 94834 | 30 | 15152.9 | 43744.4 | 2(Loss) |
| jeaiii::to_text | 2044.82 | 0.0337487 | 9.84275ms | 94834 | 30 | 6684.26 | 44229.1 | 3(Loss) |
| fmt::format_to | 1767.67 | 0.461966 | 11.3737ms | 94834 | 30 | 1.67597e+06 | 51163.8 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1684.6 | 0.947248 | 96.5031ms | 948312 | 30 | 7.75817e+08 | 536853 | 1(Win) |
| jeaiii::to_text | 1550.56 | 0.267461 | 106.96ms | 948312 | 30 | 7.30072e+07 | 583260 | 2(Loss) |
| std::to_chars | 1477.57 | 0.935408 | 130.592ms | 948312 | 30 | 9.83398e+08 | 612072 | 3(Loss) |
| fmt::format_to | 1210.7 | 0.354763 | 129.885ms | 948312 | 30 | 2.10682e+08 | 746992 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4453.01 | 1.15846 | 0.098958ms | 979 | 30 | 176.989 | 209.667 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 2860.44 | 1.62838 | 0.432292ms | 979 | 30 | 847.49 | 326.4 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 2778.44 | 1.96771 | 1.24108ms | 979 | 30 | 1311.62 | 336.033 | 2(Tie) |
| fmt::format_to | 2615.26 | 1.07081 | 0.20025ms | 979 | 30 | 438.414 | 357 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4992.82 | 0.212044 | 0.93875ms | 9758 | 30 | 468.602 | 1863.87 | 1(Win) |
| jeaiii::to_text | 3448.44 | 0.120536 | 1.22729ms | 9758 | 30 | 317.421 | 2698.6 | 2(Loss) |
| std::to_chars | 3019.65 | 0.942347 | 0.569416ms | 9758 | 30 | 25301.8 | 3081.8 | 3(Loss) |
| fmt::format_to | 2761.9 | 0.114748 | 1.27563ms | 9758 | 30 | 448.455 | 3369.4 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4464.49 | 0.272213 | 3.99458ms | 97417 | 30 | 96264 | 20809.6 | 1(Win) |
| fmt::format_to | 2794.34 | 0.317131 | 6.39029ms | 97417 | 30 | 333511 | 33247.2 | 2(Loss) |
| jeaiii::to_text | 2530.5 | 0.666973 | 6.74775ms | 97417 | 30 | 1.79885e+06 | 36713.8 | 3(Loss) |
| std::to_chars | 2367.75 | 0.254112 | 7.11121ms | 97417 | 30 | 298243 | 39237.4 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2942.74 | 0.225245 | 57.5476ms | 974130 | 30 | 1.51692e+07 | 315693 | 1(Win) |
| std::to_chars **STATISTICAL TIE** | 2144.02 | 1.13618 | 78.2804ms | 974130 | 30 | 7.27096e+08 | 433299 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2139.53 | 1.31072 | 82.6423ms | 974130 | 30 | 9.71714e+08 | 434208 | 2(Tie) |
| fmt::format_to | 1857.45 | 0.599178 | 92.0699ms | 974130 | 30 | 2.69422e+08 | 500150 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5976.37 | 1.23625 | 0.130834ms | 1941 | 30 | 439.857 | 309.733 | 1(Win) |
| jeaiii::to_text | 2890.96 | 0.960177 | 0.430167ms | 1941 | 30 | 1133.94 | 640.3 | 2(Loss) |
| std::to_chars | 2770.94 | 0.20671 | 0.363584ms | 1941 | 30 | 57.2057 | 668.033 | 3(Loss) |
| fmt::format_to | 2414.45 | 0.494465 | 0.213416ms | 1941 | 30 | 431.126 | 766.667 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5915 | 0.431034 | 1.28737ms | 19374 | 30 | 5438.44 | 3123.67 | 1(Win) |
| jeaiii::to_text | 3071.55 | 0.221269 | 1.15321ms | 19374 | 30 | 5314.79 | 6015.37 | 2(Loss) |
| std::to_chars | 2840.1 | 0.592053 | 1.20633ms | 19374 | 30 | 44505.4 | 6505.57 | 3(Loss) |
| fmt::format_to | 2081.87 | 0.496826 | 1.65975ms | 19374 | 30 | 58325.8 | 8874.93 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5145.12 | 0.477264 | 6.58938ms | 193884 | 30 | 882534 | 35937.4 | 1(Win) |
| std::to_chars | 2369.19 | 1.5283 | 13.9444ms | 193884 | 30 | 4.26798e+07 | 78044.5 | 2(Loss) |
| jeaiii::to_text | 2102.46 | 1.30329 | 15.8429ms | 193884 | 30 | 3.94122e+07 | 87945.8 | 3(Loss) |
| fmt::format_to | 1809.02 | 0.583093 | 19.0594ms | 193884 | 30 | 1.0656e+07 | 102211 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2576.48 | 1.10376 | 131.622ms | 1937760 | 30 | 1.88028e+09 | 717256 | 1(Win) |
| jeaiii::to_text | 2407.08 | 0.663822 | 140.203ms | 1937760 | 30 | 7.79193e+08 | 767733 | 2(Loss) |
| std::to_chars | 1975.76 | 1.12384 | 174.682ms | 1937760 | 30 | 3.31483e+09 | 935331 | 3(Loss) |
| fmt::format_to | 1537.55 | 0.373664 | 527.172ms | 1937760 | 30 | 6.05099e+08 | 1.20191e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5642.05 | 0.818924 | 0.469125ms | 1989 | 30 | 227.407 | 336.2 | 1(Win) |
| jeaiii::to_text | 2881.3 | 1.19057 | 0.322417ms | 1989 | 30 | 1842.99 | 658.333 | 2(Loss) |
| std::to_chars | 2731.65 | 0.725803 | 0.178125ms | 1989 | 30 | 762.041 | 694.4 | 3(Loss) |
| fmt::format_to | 2063.07 | 0.208374 | 0.316125ms | 1989 | 30 | 110.116 | 919.433 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5906.47 | 0.0868458 | 1.52321ms | 19888 | 30 | 233.316 | 3211.17 | 1(Win) |
| jeaiii::to_text | 3155.99 | 0.0639939 | 1.81533ms | 19888 | 30 | 443.72 | 6009.73 | 2(Loss) |
| std::to_chars | 2691.86 | 0.0996504 | 1.33175ms | 19888 | 30 | 1478.96 | 7045.93 | 3(Loss) |
| fmt::format_to | 2146.79 | 0.0528599 | 2.46513ms | 19888 | 30 | 654.3 | 8834.9 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5764.8 | 0.227993 | 5.97883ms | 198800 | 30 | 168667 | 32887.6 | 1(Win) |
| std::to_chars | 3342.28 | 0.265869 | 10.8706ms | 198800 | 30 | 682346 | 56725 | 2(Loss) |
| jeaiii::to_text | 2979.68 | 0.983834 | 11.5636ms | 198800 | 30 | 1.1756e+07 | 63627.7 | 3(Loss) |
| fmt::format_to | 2090.81 | 0.138087 | 16.4041ms | 198800 | 30 | 470359 | 90677.8 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5001.97 | 0.211598 | 68.3453ms | 1987953 | 30 | 1.92963e+07 | 379022 | 1(Win) |
| jeaiii::to_text | 3181.07 | 0.352773 | 108.097ms | 1987953 | 30 | 1.3261e+08 | 595982 | 2(Loss) |
| std::to_chars | 2886.54 | 0.340518 | 119.355ms | 1987953 | 30 | 1.50058e+08 | 656793 | 3(Loss) |
| fmt::format_to | 1976.67 | 0.236053 | 173.397ms | 1987953 | 30 | 1.53774e+08 | 959118 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5899.34 | 1.19365 | 0.548083ms | 1890 | 30 | 399.016 | 305.533 | 1(Win) |
| jeaiii::to_text | 2969.92 | 0.633365 | 0.971292ms | 1890 | 30 | 443.266 | 606.9 | 2(Loss) |
| std::to_chars | 2621.48 | 0.756332 | 0.225083ms | 1890 | 30 | 811.289 | 687.567 | 3(Loss) |
| fmt::format_to | 2040.58 | 0.349012 | 1.40292ms | 1890 | 30 | 285.114 | 883.3 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6032.4 | 0.154358 | 1.51471ms | 18889 | 30 | 637.407 | 2986.2 | 1(Win) |
| jeaiii::to_text | 3096.92 | 0.100748 | 3.42183ms | 18889 | 30 | 1030.27 | 5816.73 | 2(Loss) |
| std::to_chars | 2690.38 | 0.155455 | 1.22142ms | 18889 | 30 | 3250.29 | 6695.7 | 3(Loss) |
| fmt::format_to | 2053.22 | 0.0541625 | 2.19663ms | 18889 | 30 | 677.431 | 8773.5 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5209.81 | 0.0645009 | 6.39308ms | 188781 | 30 | 14904.8 | 34557 | 1(Win) |
| jeaiii::to_text | 3085.67 | 0.744589 | 10.5115ms | 188781 | 30 | 5.66204e+06 | 58345.8 | 2(Loss) |
| std::to_chars | 2900.88 | 0.157963 | 27.1713ms | 188781 | 30 | 288328 | 62062.4 | 3(Loss) |
| fmt::format_to | 1914.39 | 0.307105 | 17.4585ms | 188781 | 30 | 2.50235e+06 | 94043.1 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4829.88 | 0.558424 | 67.0291ms | 1887960 | 30 | 1.30006e+08 | 372783 | 1(Win) |
| jeaiii::to_text | 3242.75 | 0.218219 | 100.64ms | 1887960 | 30 | 4.40419e+07 | 555239 | 2(Loss) |
| std::to_chars | 2931.88 | 0.306075 | 120.129ms | 1887960 | 30 | 1.05991e+08 | 614110 | 3(Loss) |
| fmt::format_to | 1868.97 | 0.420479 | 170.705ms | 1887960 | 30 | 4.92256e+08 | 963364 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6629.16 | 1.27291 | 0.565958ms | 1941 | 30 | 379.013 | 279.233 | 1(Win) |
| jeaiii::to_text | 3315.37 | 0.67679 | 0.799084ms | 1941 | 30 | 428.368 | 558.333 | 2(Loss) |
| std::to_chars | 3008.58 | 0.532534 | 0.142833ms | 1941 | 30 | 322.064 | 615.267 | 3(Loss) |
| fmt::format_to | 2228.88 | 0.336471 | 0.891791ms | 1941 | 30 | 234.259 | 830.5 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6760.61 | 0.133744 | 0.597875ms | 19396 | 30 | 401.72 | 2736.07 | 1(Win) |
| jeaiii::to_text | 3526.06 | 0.288557 | 1.6655ms | 19396 | 30 | 6874.34 | 5245.93 | 2(Loss) |
| std::to_chars | 2870.33 | 0.384167 | 1.26033ms | 19396 | 30 | 18387.5 | 6444.37 | 3(Loss) |
| fmt::format_to | 1472.29 | 2.3052 | 3.58096ms | 19396 | 30 | 2.5164e+06 | 12563.8 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6127.04 | 0.0463828 | 6.198ms | 193891 | 30 | 5878.28 | 30179.2 | 1(Win) |
| jeaiii::to_text | 2686.71 | 0.153667 | 13.1432ms | 193891 | 30 | 335548 | 68823.6 | 2(Loss) |
| std::to_chars | 2488.63 | 0.0221378 | 14.932ms | 193891 | 30 | 8116.81 | 74301.5 | 3(Loss) |
| fmt::format_to | 1237.77 | 0.145958 | 27.9119ms | 193891 | 30 | 1.42631e+06 | 149389 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3191.32 | 0.201185 | 104.78ms | 1939847 | 30 | 4.08045e+07 | 579692 | 1(Win) |
| jeaiii::to_text | 2627.76 | 0.134058 | 126.909ms | 1939847 | 30 | 2.67222e+07 | 704015 | 2(Loss) |
| std::to_chars | 2523.07 | 0.108668 | 134.059ms | 1939847 | 30 | 1.9046e+07 | 733228 | 3(Loss) |
| fmt::format_to | 1160.59 | 0.175733 | 287.274ms | 1939847 | 30 | 2.35399e+08 | 1.594e+06 | 4(Loss) |
