# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the Clang 22.1.8 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1235.01 | 1.54808 | 0.091375ms | 259 | 30 | 287.586 | 200 | 1(Win) |
| jeaiii::to_text | 993.437 | 0.978835 | 0.054875ms | 259 | 30 | 177.689 | 248.633 | 2(Loss) |
| std::to_chars | 956.382 | 1.18885 | 3.76821ms | 259 | 30 | 282.823 | 258.267 | 3(Loss) |
| fmt::format_to | 830.909 | 1.6133 | 0.065625ms | 259 | 30 | 689.995 | 297.267 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1482.18 | 0.215139 | 0.328708ms | 2668 | 30 | 409.195 | 1716.67 | 1(Win) |
| vn::to_chars | 1445.93 | 0.218012 | 0.336958ms | 2668 | 30 | 441.528 | 1759.7 | 2(Loss) |
| fmt::format_to | 1227.82 | 0.191605 | 0.413875ms | 2668 | 30 | 472.976 | 2072.3 | 3(Loss) |
| std::to_chars | 976.488 | 0.331905 | 0.499375ms | 2668 | 30 | 2243.82 | 2605.67 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1354.95 | 0.397255 | 3.55525ms | 26517 | 30 | 164915 | 18663.8 | 1(Win) |
| vn::to_chars | 733.624 | 0.726818 | 6.87767ms | 26517 | 30 | 1.88311e+06 | 34470.8 | 2(Loss) |
| fmt::format_to | 450.076 | 1.05529 | 8.48033ms | 26517 | 30 | 1.05473e+07 | 56187.4 | 3(Loss) |
| std::to_chars | 433.652 | 0.964307 | 12.0927ms | 26517 | 30 | 9.48677e+06 | 58315.4 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 418.95 | 0.349003 | 259.309ms | 264966 | 30 | 1.32934e+08 | 603154 | 1(Win) |
| jeaiii::to_text STATISTICAL TIE | 391.833 | 0.970828 | 298.995ms | 264966 | 30 | 1.17594e+09 | 644896 | 2(Tie) |
| fmt::format_to STATISTICAL TIE | 384.033 | 0.383319 | 119.177ms | 264966 | 30 | 1.90847e+08 | 657993 | 2(Tie) |
| std::to_chars STATISTICAL TIE | 378.686 | 0.927333 | 689.494ms | 264966 | 48 | 1.83795e+09 | 667284 | 2(Tie) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 1506.8 | 1.43922 | 0.047834ms | 318 | 30 | 251.72 | 201.267 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1457.09 | 0.968002 | 0.061334ms | 318 | 30 | 121.775 | 208.133 | 1(Tie) |
| std::to_chars | 1382.26 | 1.56211 | 0.056625ms | 318 | 30 | 352.386 | 219.4 | 3(Loss) |
| fmt::format_to | 1299.72 | 1.62467 | 0.054834ms | 318 | 30 | 431.126 | 233.333 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1765.3 | 0.242877 | 0.325417ms | 3178 | 30 | 521.637 | 1716.87 | 1(Win) |
| jeaiii::to_text | 1698.04 | 0.298439 | 0.389834ms | 3178 | 30 | 851.223 | 1784.87 | 2(Loss) |
| fmt::format_to | 1254.03 | 2.07628 | 0.444875ms | 3178 | 30 | 75541.3 | 2416.83 | 3(Loss) |
| std::to_chars | 1142.47 | 0.137788 | 0.49325ms | 3178 | 30 | 400.833 | 2652.83 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1583.58 | 1.80935 | 3.393ms | 31418 | 30 | 3.51596e+06 | 18920.8 | 1(Win) |
| fmt::format_to | 1451.16 | 0.081408 | 4.6285ms | 31418 | 30 | 8475.79 | 20647.3 | 2(Loss) |
| jeaiii::to_text | 1259.15 | 2.23131 | 5.02529ms | 31418 | 30 | 8.45753e+06 | 23795.8 | 3(Loss) |
| std::to_chars | 992.274 | 0.125168 | 5.95008ms | 31418 | 30 | 42855.3 | 30195.8 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 890.438 | 0.292006 | 61.846ms | 314365 | 30 | 2.89978e+07 | 336690 | 1(Win) |
| vn::to_chars | 855.117 | 0.605664 | 67.9234ms | 314365 | 30 | 1.3527e+08 | 350597 | 2(Loss) |
| jeaiii::to_text STATISTICAL TIE | 778.841 | 2.34068 | 67.5818ms | 314365 | 30 | 2.43543e+09 | 384933 | 3(Tie) |
| fmt::format_to STATISTICAL TIE | 742.033 | 0.985396 | 70.4727ms | 314365 | 30 | 4.75517e+08 | 404028 | 3(Tie) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1010.57 | 1.73122 | 0.046209ms | 209 | 30 | 349.771 | 197.233 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1003.95 | 1.64979 | 0.049959ms | 209 | 30 | 321.844 | 198.533 | 1(Tie) |
| fmt::format_to | 932.263 | 1.2337 | 0.050209ms | 209 | 30 | 208.717 | 213.8 | 3(Loss) |
| std::to_chars | 747.442 | 1.42159 | 0.06125ms | 209 | 30 | 431.126 | 266.667 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1237.02 | 0.221767 | 0.315208ms | 2151 | 30 | 405.734 | 1658.3 | 1(Win) |
| std::to_chars STATISTICAL TIE | 1127.47 | 0.253554 | 0.352333ms | 2151 | 30 | 638.461 | 1819.43 | 2(Tie) |
| vn::to_chars STATISTICAL TIE | 1127.45 | 1.28665 | 0.361875ms | 2151 | 30 | 16441 | 1819.47 | 2(Tie) |
| fmt::format_to | 989.208 | 0.283321 | 0.433583ms | 2151 | 30 | 1035.58 | 2073.73 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 1392.42 | 1.75604 | 7.48471ms | 21613 | 30 | 2.0271e+06 | 14802.8 | 1(Win) |
| vn::to_chars | 1269.17 | 0.0634513 | 3.00004ms | 21613 | 30 | 3185.61 | 16240.3 | 2(Loss) |
| fmt::format_to | 777.921 | 0.0604888 | 4.78079ms | 21613 | 30 | 7706.03 | 26496 | 3(Loss) |
| jeaiii::to_text | 680.006 | 1.79154 | 5.17742ms | 21613 | 30 | 8.84668e+06 | 30311.1 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 657.322 | 0.53312 | 55.4158ms | 215283 | 30 | 8.31832e+07 | 312343 | 1(Win) |
| std::to_chars | 633.974 | 0.2678 | 58.9397ms | 215283 | 30 | 2.25641e+07 | 323846 | 2(Loss) |
| jeaiii::to_text | 564.676 | 1.31084 | 64.4914ms | 215283 | 30 | 6.81464e+08 | 363589 | 3(Loss) |
| fmt::format_to | 541.118 | 0.58683 | 68.5164ms | 215283 | 30 | 1.48724e+08 | 379418 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1528.43 | 1.80647 | 0.072375ms | 256 | 30 | 249.789 | 159.733 | 1(Win) |
| std::to_chars | 1302.08 | 2.06381 | 0.045042ms | 256 | 30 | 449.224 | 187.5 | 2(Loss) |
| vn::to_chars | 1164.42 | 1.15846 | 0.061375ms | 256 | 30 | 176.989 | 209.667 | 3(Loss) |
| fmt::format_to | 982.062 | 0.563154 | 0.058292ms | 256 | 30 | 58.8 | 248.6 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1722.64 | 0.27679 | 0.285333ms | 2579 | 30 | 468.53 | 1427.77 | 1(Win) |
| vn::to_chars | 1485.7 | 0.206137 | 0.312166ms | 2579 | 30 | 349.361 | 1655.47 | 2(Loss) |
| fmt::format_to | 1439.78 | 0.309809 | 0.333458ms | 2579 | 30 | 840.271 | 1708.27 | 3(Loss) |
| std::to_chars | 1237.46 | 1.6767 | 0.425958ms | 2579 | 30 | 33317.7 | 1987.57 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1196.65 | 1.74364 | 3.75813ms | 25688 | 30 | 3.82261e+06 | 20472.1 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 1168.12 | 0.120259 | 3.91412ms | 25688 | 30 | 19082.8 | 20972.1 | 1(Tie) |
| vn::to_chars | 870.825 | 0.329992 | 8.66133ms | 25688 | 30 | 258540 | 28131.9 | 3(Loss) |
| std::to_chars | 665.004 | 0.0310487 | 6.74517ms | 25688 | 30 | 3924.83 | 36838.8 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 672.332 | 0.270408 | 65.8289ms | 257162 | 30 | 2.91883e+07 | 364774 | 1(Win) |
| fmt::format_to | 616.756 | 0.164201 | 72.0062ms | 257162 | 30 | 1.27897e+07 | 397643 | 2(Loss) |
| jeaiii::to_text | 569.364 | 0.988217 | 70.8318ms | 257162 | 30 | 5.43575e+08 | 430742 | 3(Loss) |
| std::to_chars | 473.845 | 2.19032 | 476.922ms | 257162 | 48 | 6.16872e+09 | 517571 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2450.53 | 1.84118 | 0.050083ms | 514 | 30 | 406.93 | 200.033 | 1(Win) |
| jeaiii::to_text | 2218.38 | 1.59767 | 0.052459ms | 514 | 30 | 373.895 | 220.967 | 2(Loss) |
| fmt::format_to | 1763.27 | 1.32251 | 0.08525ms | 514 | 30 | 405.517 | 278 | 3(Loss) |
| std::to_chars | 1589.46 | 2.01783 | 0.067584ms | 514 | 30 | 1161.77 | 308.4 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2812.8 | 0.189206 | 0.333417ms | 5145 | 30 | 326.8 | 1744.4 | 1(Win) |
| jeaiii::to_text | 2377.33 | 0.187045 | 0.401583ms | 5145 | 30 | 447.099 | 2063.93 | 2(Loss) |
| fmt::format_to | 1904.44 | 0.136317 | 0.516083ms | 5145 | 30 | 370.047 | 2576.43 | 3(Loss) |
| std::to_chars | 1763.74 | 0.40429 | 0.5705ms | 5145 | 30 | 3795 | 2781.97 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1560.09 | 1.41937 | 6.09713ms | 51564 | 30 | 6.00491e+06 | 31520.8 | 1(Win) |
| vn::to_chars | 1471.15 | 0.760527 | 6.1435ms | 51564 | 30 | 1.93878e+06 | 33426.3 | 2(Loss) |
| fmt::format_to | 1403.17 | 0.150749 | 6.84771ms | 51564 | 30 | 83734.3 | 35045.8 | 3(Loss) |
| std::to_chars | 898.337 | 1.33789 | 10.29ms | 51564 | 30 | 1.60908e+07 | 54740.3 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 715.517 | 0.166251 | 129.409ms | 516248 | 30 | 3.9258e+07 | 688079 | 1(Win) |
| vn::to_chars | 699.044 | 1.10412 | 122.642ms | 516248 | 30 | 1.81412e+09 | 704294 | 2(Loss) |
| fmt::format_to | 652.79 | 0.808846 | 131.634ms | 516248 | 30 | 1.11641e+09 | 754197 | 3(Loss) |
| jeaiii::to_text | 609.525 | 1.094 | 140.354ms | 516248 | 30 | 2.34257e+09 | 807732 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2590.87 | 0.682351 | 0.050625ms | 562 | 30 | 59.7747 | 206.867 | 1(Win) |
| jeaiii::to_text | 2192.68 | 1.07825 | 0.058375ms | 562 | 30 | 208.392 | 244.433 | 2(Loss) |
| std::to_chars | 1575.13 | 0.84802 | 0.10025ms | 562 | 30 | 249.789 | 340.267 | 3(Loss) |
| fmt::format_to | 1434.47 | 0.365778 | 0.089166ms | 562 | 30 | 56.0333 | 373.633 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 2399.68 | 1.8053 | 0.430875ms | 5665 | 30 | 49558.1 | 2251.37 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2336.18 | 0.269773 | 0.484833ms | 5665 | 30 | 1167.63 | 2312.57 | 1(Tie) |
| fmt::format_to | 2076.84 | 0.147755 | 0.491166ms | 5665 | 30 | 443.195 | 2601.33 | 3(Loss) |
| std::to_chars | 1799.18 | 0.175381 | 0.577417ms | 5665 | 30 | 832.028 | 3002.8 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1755.47 | 1.57185 | 6.89104ms | 56580 | 30 | 7.00297e+06 | 30737.5 | 1(Win) |
| jeaiii::to_text | 1564.09 | 1.67286 | 6.341ms | 56580 | 30 | 9.99185e+06 | 34498.7 | 2(Loss) |
| fmt::format_to | 1444.15 | 0.83416 | 6.51262ms | 56580 | 30 | 2.91423e+06 | 37363.9 | 3(Loss) |
| std::to_chars | 1351.74 | 1.60027 | 20.4827ms | 56580 | 30 | 1.22418e+07 | 39918.1 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1162.19 | 1.42022 | 231.806ms | 566129 | 30 | 1.30591e+09 | 464557 | 1(Win) |
| std::to_chars | 1112.7 | 0.647572 | 84.4703ms | 566129 | 30 | 2.96189e+08 | 485217 | 2(Loss) |
| jeaiii::to_text | 1035.72 | 1.86881 | 102.858ms | 566129 | 30 | 2.84708e+09 | 521285 | 3(Loss) |
| fmt::format_to | 871.117 | 1.65363 | 110.909ms | 566129 | 30 | 3.15119e+09 | 619782 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1875.95 | 1.42643 | 0.059375ms | 470 | 30 | 348.478 | 238.933 | 1(Win) |
| std::to_chars | 1671.86 | 1.43375 | 0.070542ms | 470 | 30 | 443.266 | 268.1 | 2(Loss) |
| fmt::format_to | 1567.04 | 0.918041 | 0.083959ms | 470 | 30 | 206.861 | 286.033 | 3(Loss) |
| vn::to_chars | 840.425 | 0.580484 | 0.350708ms | 470 | 30 | 287.54 | 533.333 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2097.13 | 1.92936 | 0.408667ms | 4636 | 30 | 49634.6 | 2108.23 | 1(Win) |
| jeaiii::to_text | 2009.71 | 0.263063 | 0.427584ms | 4636 | 30 | 1004.75 | 2199.93 | 2(Loss) |
| fmt::format_to | 1434.55 | 2.21414 | 1.35208ms | 4636 | 30 | 139697 | 3081.97 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2581.64 | 0.0308282 | 3.97288ms | 46471 | 30 | 840.217 | 17166.7 | 1(Win) |
| jeaiii::to_text | 1935.05 | 1.3777 | 4.4685ms | 46471 | 30 | 2.98684e+06 | 22902.9 | 2(Loss) |
| fmt::format_to | 1330.49 | 0.239006 | 27.481ms | 46471 | 30 | 190142 | 33309.7 | 3(Loss) |
| std::to_chars | 1230.06 | 1.53734 | 6.66325ms | 46471 | 30 | 9.20394e+06 | 36029.3 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1037.22 | 1.34115 | 80.3274ms | 466272 | 30 | 9.91779e+08 | 428717 | 1(Win) |
| std::to_chars | 985.043 | 1.32917 | 83.2243ms | 466272 | 30 | 1.08006e+09 | 451424 | 2(Loss) |
| jeaiii::to_text STATISTICAL TIE | 858.955 | 1.51229 | 97.6618ms | 466272 | 30 | 1.83877e+09 | 517689 | 3(Tie) |
| fmt::format_to STATISTICAL TIE | 840.276 | 0.715388 | 99.7455ms | 466272 | 30 | 4.29972e+08 | 529197 | 3(Tie) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2342.98 | 1.64679 | 0.047916ms | 488 | 30 | 320.999 | 198.633 | 1(Win) |
| vn::to_chars | 2162.27 | 1.87343 | 0.087625ms | 488 | 30 | 487.771 | 215.233 | 2(Loss) |
| fmt::format_to | 1925.23 | 1.27017 | 0.056958ms | 488 | 30 | 282.823 | 241.733 | 3(Loss) |
| std::to_chars | 1811.81 | 1.35899 | 0.06375ms | 488 | 30 | 365.568 | 256.867 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2442.04 | 0.215187 | 0.394334ms | 4819 | 30 | 491.995 | 1881.93 | 1(Win) |
| jeaiii::to_text | 2041.29 | 1.96775 | 0.390833ms | 4819 | 30 | 58879.8 | 2251.4 | 2(Loss) |
| std::to_chars | 1899.52 | 0.114883 | 0.491125ms | 4819 | 30 | 231.771 | 2419.43 | 3(Loss) |
| fmt::format_to | 1798.31 | 2.14148 | 0.547792ms | 4819 | 30 | 89853.9 | 2555.6 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2459.84 | 0.116583 | 19.1441ms | 48302 | 48 | 22878.8 | 18726.6 | 1(Win) |
| fmt::format_to | 1998.45 | 0.0966717 | 4.40017ms | 48302 | 30 | 14895.7 | 23050 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1779.71 | 0.822661 | 50.8654ms | 483146 | 30 | 1.36089e+08 | 258899 | 1(Win) |
| std::to_chars | 1543.92 | 1.20836 | 145.744ms | 483146 | 30 | 3.90139e+08 | 298438 | 2(Loss) |
| jeaiii::to_text | 1456.67 | 1.24237 | 153.974ms | 483146 | 30 | 4.6329e+08 | 316313 | 3(Loss) |
| fmt::format_to | 1234.94 | 2.09898 | 163.947ms | 483146 | 30 | 1.83994e+09 | 373107 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2754.98 | 0.993984 | 0.131166ms | 995 | 30 | 351.633 | 344.433 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2638.29 | 1.96643 | 0.077792ms | 995 | 30 | 1500.64 | 359.667 | 1(Tie) |
| std::to_chars STATISTICAL TIE | 2568.31 | 1.2923 | 0.080166ms | 995 | 30 | 683.913 | 369.467 | 1(Tie) |
| fmt::format_to | 2331.85 | 0.804135 | 0.089083ms | 995 | 30 | 321.237 | 406.933 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2970.83 | 1.80269 | 1.58971ms | 9964 | 30 | 99740.9 | 3198.57 | 1(Win) |
| fmt::format_to | 2387.16 | 0.780277 | 3.39896ms | 9964 | 30 | 28941.6 | 3980.63 | 2(Loss) |
| std::to_chars | 1821.97 | 1.49762 | 1.70508ms | 9964 | 30 | 183025 | 5215.47 | 3(Loss) |
| jeaiii::to_text | 829.099 | 0.27174 | 2.13675ms | 9964 | 30 | 29099.3 | 11461.1 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3275.03 | 1.89503 | 5.96242ms | 99718 | 30 | 9.08385e+06 | 29037.4 | 1(Win) |
| fmt::format_to | 1415.92 | 1.25129 | 36.9243ms | 99718 | 30 | 2.11888e+07 | 67163.9 | 2(Loss) |
| std::to_chars | 1326.41 | 1.28936 | 17.2974ms | 99718 | 30 | 2.56365e+07 | 71695.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1177.26 | 0.486873 | 147.912ms | 998413 | 30 | 4.65189e+08 | 808796 | 1(Win) |
| std::to_chars | 979.364 | 0.971819 | 916.258ms | 998413 | 48 | 4.28494e+09 | 972224 | 2(Loss) |
| jeaiii::to_text | 880.116 | 1.01111 | 195.503ms | 998413 | 30 | 3.58971e+09 | 1.08186e+06 | 3(Loss) |
| fmt::format_to | 837.805 | 1.27199 | 203.877ms | 998413 | 30 | 6.26937e+09 | 1.13649e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4477.19 | 1.64529 | 0.184792ms | 1043 | 30 | 400.833 | 222.167 | 1(Win) |
| fmt::format_to | 2594.6 | 0.959145 | 0.082ms | 1043 | 30 | 405.62 | 383.367 | 2(Loss) |
| jeaiii::to_text | 2395.09 | 1.95404 | 0.112459ms | 1043 | 30 | 1975.67 | 415.3 | 3(Loss) |
| std::to_chars | 2163.14 | 1.65243 | 0.096834ms | 1043 | 30 | 1732.07 | 459.833 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4899.27 | 0.550303 | 0.452542ms | 10517 | 30 | 3807.54 | 2047.2 | 1(Win) |
| jeaiii::to_text | 3164.57 | 0.356481 | 0.658209ms | 10517 | 30 | 3829.56 | 3169.4 | 2(Loss) |
| std::to_chars | 2650.98 | 0.291513 | 0.723708ms | 10517 | 30 | 3649.29 | 3783.43 | 3(Loss) |
| fmt::format_to | 2579.94 | 0.116472 | 0.771042ms | 10517 | 30 | 615.076 | 3887.6 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3508.84 | 0.447559 | 5.74979ms | 104793 | 30 | 487481 | 28481.9 | 1(Win) |
| vn::to_chars | 3079.1 | 0.985524 | 6.32413ms | 104793 | 30 | 3.06954e+06 | 32457 | 2(Loss) |
| fmt::format_to | 2115.1 | 1.75657 | 10.3975ms | 104793 | 30 | 2.06658e+07 | 47249.9 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1929.97 | 0.310111 | 122.96ms | 1047966 | 30 | 7.73658e+07 | 517842 | 1(Win) |
| std::to_chars STATISTICAL TIE | 1395.02 | 1.44025 | 122.354ms | 1047966 | 30 | 3.194e+09 | 716421 | 2(Tie) |
| fmt::format_to STATISTICAL TIE | 1389.28 | 0.84442 | 137.278ms | 1047966 | 30 | 1.10702e+09 | 719381 | 2(Tie) |
| jeaiii::to_text | 1357.03 | 0.305838 | 129.249ms | 1047966 | 30 | 1.522e+08 | 736472 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4155.09 | 1.42888 | 0.057666ms | 944 | 30 | 287.54 | 216.667 | 1(Win) |
| jeaiii::to_text | 2933.11 | 1.21704 | 0.076209ms | 944 | 30 | 418.616 | 306.933 | 2(Loss) |
| std::to_chars | 2572.44 | 1.22787 | 0.228041ms | 944 | 30 | 553.964 | 349.967 | 3(Loss) |
| fmt::format_to | 2290.37 | 0.976141 | 0.087333ms | 944 | 30 | 441.651 | 393.067 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4311.8 | 0.803963 | 0.412209ms | 9488 | 30 | 8539.36 | 2098.53 | 1(Win) |
| jeaiii::to_text | 3133.67 | 0.122805 | 0.539709ms | 9488 | 30 | 377.224 | 2887.5 | 2(Loss) |
| std::to_chars | 2841.23 | 0.149344 | 0.618542ms | 9488 | 30 | 678.631 | 3184.7 | 3(Loss) |
| fmt::format_to | 2433.76 | 0.139858 | 0.706208ms | 9488 | 30 | 811.128 | 3717.9 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 2137.2 | 1.38892 | 16.6132ms | 94792 | 30 | 1.03545e+07 | 42298.6 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2112.03 | 1.56152 | 7.75892ms | 94792 | 30 | 1.34016e+07 | 42802.7 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 1751.37 | 1.28221 | 68.8243ms | 94792 | 48 | 2.10255e+07 | 51617.2 | 3(Tie) |
| std::to_chars STATISTICAL TIE | 1745.89 | 1.4176 | 9.51954ms | 94792 | 30 | 1.61637e+07 | 51779.1 | 3(Tie) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1905.63 | 0.164112 | 87.462ms | 948091 | 30 | 1.81897e+07 | 474474 | 1(Win) |
| jeaiii::to_text | 1307.34 | 1.50925 | 310.394ms | 948091 | 30 | 3.26864e+09 | 691610 | 2(Loss) |
| fmt::format_to | 1142.3 | 1.28573 | 379.592ms | 948091 | 30 | 3.10714e+09 | 791532 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 3391.46 | 1.41688 | 0.099334ms | 968 | 30 | 446.234 | 272.2 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 3289.94 | 1.22141 | 0.062875ms | 968 | 30 | 352.386 | 280.6 | 1(Tie) |
| std::to_chars | 3106.18 | 0.890138 | 0.065459ms | 968 | 30 | 209.959 | 297.2 | 3(Loss) |
| fmt::format_to | 2746.95 | 1.02015 | 0.082291ms | 968 | 30 | 352.616 | 336.067 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4810.56 | 0.183359 | 0.364833ms | 9731 | 30 | 375.361 | 1929.13 | 1(Win) |
| std::to_chars | 3074.82 | 0.143984 | 0.580667ms | 9731 | 30 | 566.533 | 3018.13 | 2(Loss) |
| jeaiii::to_text | 2943.57 | 1.67103 | 0.693917ms | 9731 | 30 | 83263.9 | 3152.7 | 3(Loss) |
| fmt::format_to | 2720.62 | 0.290873 | 0.7485ms | 9731 | 30 | 2953.31 | 3411.07 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4289.71 | 1.84453 | 4.36733ms | 97403 | 30 | 4.78611e+06 | 21654.3 | 1(Win) |
| fmt::format_to | 2473.94 | 1.61129 | 34.9742ms | 97403 | 48 | 1.75694e+07 | 37547.7 | 2(Loss) |
| jeaiii::to_text STATISTICAL TIE | 2242.16 | 1.94827 | 7.51713ms | 97403 | 30 | 1.95449e+07 | 41429.2 | 3(Tie) |
| std::to_chars STATISTICAL TIE | 2146.52 | 1.51436 | 7.73758ms | 97403 | 30 | 1.28841e+07 | 43275 | 3(Tie) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2476.06 | 0.885272 | 153.698ms | 973941 | 30 | 3.30839e+08 | 375121 | 1(Win) |
| jeaiii::to_text | 2313.52 | 0.501731 | 81.505ms | 973941 | 30 | 1.21726e+08 | 401476 | 2(Loss) |
| std::to_chars | 2049.41 | 1.0371 | 81.8563ms | 973941 | 30 | 6.62781e+08 | 453214 | 3(Loss) |
| fmt::format_to | 1970.48 | 0.438662 | 84.8341ms | 973941 | 30 | 1.28264e+08 | 471369 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6116.3 | 1.08903 | 0.068834ms | 1933 | 30 | 323.214 | 301.4 | 1(Win) |
| jeaiii::to_text | 2879.49 | 1.14709 | 0.132042ms | 1933 | 30 | 1617.89 | 640.2 | 2(Loss) |
| std::to_chars | 2742.14 | 0.395486 | 0.134625ms | 1933 | 30 | 212.064 | 672.267 | 3(Loss) |
| fmt::format_to | 1952.12 | 0.850747 | 0.18475ms | 1933 | 30 | 1936.3 | 944.333 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5599.13 | 1.43968 | 0.6315ms | 19350 | 30 | 67542.4 | 3295.8 | 1(Win) |
| jeaiii::to_text | 2965.69 | 0.512755 | 1.20296ms | 19350 | 30 | 30538.8 | 6222.37 | 2(Loss) |
| std::to_chars | 2723.78 | 0.505018 | 1.29588ms | 19350 | 30 | 35119.9 | 6775 | 3(Loss) |
| fmt::format_to | 2277.45 | 0.141114 | 1.56408ms | 19350 | 30 | 3922.13 | 8102.73 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5188.96 | 1.078 | 37.7472ms | 193798 | 48 | 7.07648e+06 | 35618 | 1(Win) |
| std::to_chars | 2450.2 | 1.36574 | 33.669ms | 193798 | 30 | 3.18383e+07 | 75430.5 | 2(Loss) |
| jeaiii::to_text | 2086.6 | 1.57523 | 15.5915ms | 193798 | 30 | 5.84028e+07 | 88575 | 3(Loss) |
| fmt::format_to | 1641.27 | 1.00616 | 20.8053ms | 193798 | 30 | 3.85121e+07 | 112608 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2493.34 | 0.747516 | 136.767ms | 1938028 | 30 | 9.21131e+08 | 741275 | 1(Win) |
| jeaiii::to_text STATISTICAL TIE | 2091.39 | 0.844048 | 155.789ms | 1938028 | 30 | 1.66919e+09 | 883740 | 2(Tie) |
| std::to_chars STATISTICAL TIE | 2066.76 | 0.753245 | 161.896ms | 1938028 | 30 | 1.36123e+09 | 894272 | 2(Tie) |
| fmt::format_to | 1423.84 | 1.79777 | 1195.7ms | 1938028 | 48 | 2.61402e+10 | 1.29807e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5505.82 | 1.39246 | 0.080208ms | 1981 | 30 | 684.878 | 343.133 | 1(Win) |
| jeaiii::to_text | 2963.96 | 0.895126 | 0.130209ms | 1981 | 30 | 976.593 | 637.4 | 2(Loss) |
| std::to_chars | 2194.14 | 1.35822 | 0.1655ms | 1981 | 30 | 4103 | 861.033 | 3(Loss) |
| fmt::format_to | 1905.23 | 0.650455 | 0.1975ms | 1981 | 30 | 1248.04 | 991.6 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5164.09 | 1.77167 | 0.651166ms | 19877 | 30 | 126883 | 3670.77 | 1(Win) |
| jeaiii::to_text | 3347.63 | 0.0817722 | 1.03533ms | 19877 | 30 | 643.22 | 5662.57 | 2(Loss) |
| std::to_chars | 2897.14 | 0.0481294 | 1.19025ms | 19877 | 30 | 297.513 | 6543.07 | 3(Loss) |
| fmt::format_to | 1643.58 | 1.53511 | 2.10438ms | 19877 | 30 | 940427 | 11533.5 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5594.34 | 0.0369729 | 6.15079ms | 198738 | 30 | 4707.09 | 33879.1 | 1(Win) |
| std::to_chars | 3234.18 | 0.0376115 | 10.5948ms | 198738 | 30 | 14574.6 | 58602.6 | 2(Loss) |
| jeaiii::to_text | 3002.87 | 1.01967 | 11.5422ms | 198738 | 30 | 1.24259e+07 | 63116.7 | 3(Loss) |
| fmt::format_to | 2057.88 | 0.387878 | 16.6493ms | 198738 | 30 | 3.82853e+06 | 92100.1 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5021.59 | 0.135124 | 68.3482ms | 1987845 | 30 | 7.80668e+06 | 377521 | 1(Win) |
| std::to_chars STATISTICAL TIE | 2819.99 | 0.716092 | 119.872ms | 1987845 | 30 | 6.95229e+08 | 672256 | 2(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2802.22 | 1.07577 | 124.46ms | 1987845 | 30 | 1.589e+09 | 676520 | 2(Tie) |
| fmt::format_to | 2060.47 | 0.171365 | 168.888ms | 1987845 | 30 | 7.45756e+07 | 920060 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6067.28 | 0.883036 | 0.066375ms | 1891 | 30 | 206.668 | 297.233 | 1(Win) |
| jeaiii::to_text | 3205.85 | 0.689003 | 0.113375ms | 1891 | 30 | 450.671 | 562.533 | 2(Loss) |
| std::to_chars | 2787.32 | 0.590711 | 0.128625ms | 1891 | 30 | 438.207 | 647 | 3(Loss) |
| fmt::format_to | 2087.51 | 0.395701 | 0.168ms | 1891 | 30 | 350.576 | 863.9 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6453.95 | 0.13319 | 0.516875ms | 18883 | 30 | 414.34 | 2790.27 | 1(Win) |
| jeaiii::to_text | 3310.17 | 0.10199 | 1.01104ms | 18883 | 30 | 923.582 | 5440.27 | 2(Loss) |
| std::to_chars | 2894.78 | 0.107289 | 1.14579ms | 18883 | 30 | 1336.41 | 6220.93 | 3(Loss) |
| fmt::format_to | 2018.04 | 0.143547 | 1.62017ms | 18883 | 30 | 4922.59 | 8923.63 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5294.97 | 2.00579 | 6.05867ms | 188774 | 30 | 1.39524e+07 | 34000 | 1(Win) |
| jeaiii::to_text | 3139.28 | 0.316119 | 10.351ms | 188774 | 30 | 985931 | 57347.2 | 2(Loss) |
| std::to_chars | 2966.3 | 1.34934 | 11.1242ms | 188774 | 30 | 2.01198e+07 | 60691.5 | 3(Loss) |
| fmt::format_to | 1982.91 | 0.411823 | 16.3294ms | 188774 | 30 | 4.19392e+06 | 90790.3 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4997.73 | 0.170576 | 65.9146ms | 1888065 | 30 | 1.13303e+07 | 360283 | 1(Win) |
| std::to_chars | 2811.02 | 0.678593 | 114.953ms | 1888065 | 30 | 5.66822e+08 | 640550 | 2(Loss) |
| jeaiii::to_text | 2649.84 | 0.72056 | 117.682ms | 1888065 | 30 | 7.19212e+08 | 679512 | 3(Loss) |
| fmt::format_to | 1660.76 | 0.581995 | 187.532ms | 1888065 | 30 | 1.19448e+09 | 1.0842e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6142.29 | 1.95044 | 0.106041ms | 1941 | 30 | 1036.52 | 301.367 | 1(Win) |
| jeaiii::to_text | 3434.93 | 0.358581 | 0.109375ms | 1941 | 30 | 112.024 | 538.9 | 2(Loss) |
| std::to_chars | 2981.45 | 0.370899 | 0.15575ms | 1941 | 30 | 159.085 | 620.867 | 3(Loss) |
| fmt::format_to | 2028.51 | 0.254747 | 0.179292ms | 1941 | 30 | 162.12 | 912.533 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7014.07 | 0.13409 | 0.518209ms | 19398 | 30 | 375.223 | 2637.47 | 1(Win) |
| jeaiii::to_text | 3459.68 | 0.0684399 | 1.00137ms | 19398 | 30 | 401.775 | 5347.13 | 2(Loss) |
| std::to_chars | 3045.25 | 0.0764284 | 1.11042ms | 19398 | 30 | 646.695 | 6074.83 | 3(Loss) |
| fmt::format_to | 1761.84 | 0.0503982 | 1.93871ms | 19398 | 30 | 840.102 | 10500 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6187.98 | 0.91347 | 5.49779ms | 193864 | 30 | 2.23464e+06 | 29877.8 | 1(Win) |
| jeaiii::to_text STATISTICAL TIE | 2440.61 | 1.59103 | 13.0354ms | 193864 | 30 | 4.35788e+07 | 75752.7 | 2(Tie) |
| std::to_chars STATISTICAL TIE | 2409.64 | 0.329932 | 13.9217ms | 193864 | 30 | 1.92248e+06 | 76726.5 | 2(Tie) |
| fmt::format_to | 1244.87 | 0.539879 | 26.7143ms | 193864 | 30 | 1.9287e+07 | 148517 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3192.17 | 0.517543 | 103.649ms | 1940015 | 30 | 2.69931e+08 | 579588 | 1(Win) |
| std::to_chars | 2286.85 | 0.580124 | 146.694ms | 1940015 | 30 | 6.6084e+08 | 809035 | 2(Loss) |
| jeaiii::to_text | 2154.41 | 0.786839 | 338.141ms | 1940015 | 30 | 1.36977e+09 | 858769 | 3(Loss) |
| fmt::format_to | 1166.94 | 0.115603 | 286.247ms | 1940015 | 30 | 1.00779e+08 | 1.58546e+06 | 4(Loss) |
