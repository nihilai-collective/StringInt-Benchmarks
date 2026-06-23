# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2205.85 | 0.589196 | 0.03056ms | 268 | 30 | 13.9816 | 115.867 | 1.15958 | 1(Win) |
| jeaiii::to_text | 1561.94 | 0.094871 | 0.039672ms | 268 | 30 | 0.722989 | 163.633 | 1.66791 | 2(Loss) |
| fmt::format_to | 1391.32 | 0.0789508 | 0.042829ms | 268 | 30 | 0.631034 | 183.7 | 1.88458 | 3(Loss) |
| std::to_chars | 1082.99 | 0.0537517 | 0.084341ms | 268 | 30 | 0.482759 | 236 | 2.56978 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2360.98 | 0.336833 | 0.228803ms | 2645 | 30 | 388.524 | 1068.4 | 1.26084 | 1(Win) |
| fmt::format_to | 1965.76 | 0.0877393 | 0.613037ms | 2645 | 30 | 38.0276 | 1283.2 | 1.52106 | 2(Loss) |
| jeaiii::to_text | 1889.68 | 0.320696 | 0.240925ms | 2645 | 30 | 549.775 | 1334.87 | 1.57148 | 3(Loss) |
| std::to_chars | 1202.84 | 0.059679 | 0.988819ms | 2645 | 30 | 46.9897 | 2097.1 | 2.50141 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 911.231 | 0.646029 | 5.86623ms | 26367 | 30 | 953432 | 27595.1 | 3.33113 | 1(Win) |
| std::to_chars | 807.891 | 1.05402 | 5.73831ms | 26367 | 30 | 3.22876e+06 | 31124.9 | 3.75773 | 2(Loss) |
| vn::to_chars | 657.772 | 1.1721 | 7.11974ms | 26367 | 30 | 6.02317e+06 | 38228.3 | 4.61577 | 3(Loss) |
| fmt::format_to | 621.156 | 0.61672 | 7.7867ms | 26367 | 30 | 1.8699e+06 | 40481.8 | 4.88793 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 507.093 | 0.655802 | 211.935ms | 264761 | 30 | 3.19889e+08 | 497928 | 5.98976 | 1(Win) |
| vn::to_chars STATISTICAL TIE | 466.134 | 2.39046 | 97.1535ms | 264761 | 30 | 5.03e+09 | 541680 | 6.51765 | 2(Tie) |
| fmt::format_to STATISTICAL TIE | 459.18 | 0.814083 | 101.375ms | 264761 | 30 | 6.01175e+08 | 549884 | 6.61548 | 2(Tie) |
| std::to_chars | 438.74 | 0.201248 | 103.894ms | 264761 | 30 | 4.02421e+07 | 575503 | 6.92645 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2284.49 | 0.083673 | 0.033545ms | 317 | 30 | 0.367816 | 132.333 | 1.08749 | 1(Win) |
| jeaiii::to_text | 1882.41 | 0.0971992 | 0.03595ms | 317 | 30 | 0.731034 | 160.6 | 1.37371 | 2(Loss) |
| fmt::format_to | 1590.57 | 0.0871426 | 0.041145ms | 317 | 30 | 0.822989 | 190.067 | 1.66204 | 3(Loss) |
| std::to_chars | 1092.31 | 0.0374903 | 0.056866ms | 317 | 30 | 0.322989 | 276.767 | 2.53438 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2427.46 | 0.0707349 | 0.220868ms | 3146 | 30 | 22.9299 | 1235.97 | 1.22887 | 1(Win) |
| vn::to_chars | 2222.09 | 0.0756133 | 0.237287ms | 3146 | 30 | 31.269 | 1350.2 | 1.33997 | 2(Loss) |
| fmt::format_to | 1790.56 | 0.0235266 | 0.298234ms | 3146 | 30 | 4.66207 | 1675.6 | 1.6739 | 3(Loss) |
| std::to_chars | 1373.72 | 2.46421 | 0.459426ms | 3146 | 30 | 86895.3 | 2184.03 | 2.19372 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2644.69 | 0.870429 | 5.0972ms | 31463 | 30 | 292575 | 11345.5 | 1.14528 | 1(Win) |
| vn::to_chars | 2491.97 | 0.681185 | 2.40256ms | 31463 | 30 | 201820 | 12040.8 | 1.21581 | 2(Loss) |
| fmt::format_to | 2282.24 | 0.077873 | 3.11025ms | 31463 | 30 | 3144.65 | 13147.4 | 1.32818 | 3(Loss) |
| std::to_chars | 1220.17 | 0.308964 | 4.60146ms | 31463 | 30 | 173180 | 24591.2 | 2.48723 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1117.99 | 1.47107 | 48.0459ms | 314754 | 30 | 4.68007e+08 | 268493 | 2.71664 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1084.79 | 1.37933 | 49.2611ms | 314754 | 30 | 4.37031e+08 | 276711 | 2.79963 | 1(Tie) |
| fmt::format_to | 1017.97 | 0.276157 | 127.614ms | 314754 | 30 | 1.98932e+07 | 294873 | 2.98487 | 3(Loss) |
| std::to_chars | 899.505 | 0.888049 | 322.729ms | 314754 | 48 | 4.21551e+08 | 333709 | 3.37642 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1335.26 | 0.0851762 | 0.038113ms | 225 | 30 | 0.562069 | 160.7 | 1.94119 | 1(Win) |
| vn::to_chars | 1193.64 | 1.1695 | 0.041921ms | 225 | 30 | 132.599 | 179.767 | 2.21556 | 2(Loss) |
| fmt::format_to | 1068.43 | 0.0895926 | 0.044278ms | 225 | 30 | 0.971264 | 200.833 | 2.49793 | 3(Loss) |
| std::to_chars | 759.384 | 0.0367208 | 0.058473ms | 225 | 30 | 0.322989 | 282.567 | 3.6637 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1763.23 | 0.0885679 | 0.207974ms | 2132 | 30 | 31.292 | 1153.13 | 1.6854 | 1(Win) |
| fmt::format_to | 1673.9 | 0.0470925 | 0.267463ms | 2132 | 30 | 9.81609 | 1214.67 | 1.78638 | 2(Loss) |
| vn::to_chars | 1074.55 | 0.043822 | 0.331417ms | 2132 | 30 | 20.6264 | 1892.17 | 2.77839 | 3(Loss) |
| std::to_chars | 1003.88 | 0.0454423 | 0.44299ms | 2132 | 30 | 25.4126 | 2025.37 | 2.99629 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1197.94 | 1.37977 | 3.2918ms | 21559 | 30 | 1.68236e+06 | 17163 | 2.53156 | 1(Win) |
| jeaiii::to_text | 1073.66 | 1.98989 | 8.0884ms | 21559 | 30 | 4.3562e+06 | 19149.8 | 2.82482 | 2(Loss) |
| std::to_chars | 852.167 | 0.0151207 | 10.7866ms | 21559 | 30 | 399.275 | 24127 | 3.56119 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 754.191 | 0.635017 | 49.3709ms | 215190 | 30 | 8.95722e+07 | 272108 | 4.02877 | 1(Win) |
| jeaiii::to_text | 737.773 | 0.56662 | 253.066ms | 215190 | 48 | 1.19241e+08 | 278163 | 4.11647 | 2(Loss) |
| fmt::format_to | 702.756 | 1.15829 | 51.9234ms | 215190 | 30 | 3.43235e+08 | 292023 | 4.31897 | 3(Loss) |
| std::to_chars | 642.625 | 0.841332 | 58.086ms | 215190 | 30 | 2.16563e+08 | 319348 | 4.72739 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1891.65 | 0.151148 | 0.041949ms | 257 | 30 | 1.15057 | 129.567 | 1.32348 | 1(Win) |
| jeaiii::to_text | 1858.18 | 0.411821 | 0.032728ms | 257 | 30 | 8.85172 | 131.9 | 1.34838 | 2(Loss) |
| fmt::format_to | 1398.41 | 0.102114 | 0.043123ms | 257 | 30 | 0.96092 | 175.267 | 1.86018 | 3(Loss) |
| std::to_chars | 857.473 | 0.0558442 | 0.057418ms | 257 | 30 | 0.764368 | 285.833 | 3.22192 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2433.79 | 0.48066 | 0.179348ms | 2592 | 30 | 714.989 | 1015.67 | 1.21915 | 1(Win) |
| jeaiii::to_text | 2401.4 | 0.134473 | 0.183972ms | 2592 | 30 | 57.4816 | 1029.37 | 1.23695 | 2(Loss) |
| fmt::format_to | 1982.19 | 0.615132 | 0.579166ms | 2592 | 30 | 1765.37 | 1247.07 | 1.50792 | 3(Loss) |
| std::to_chars | 1142.56 | 0.0424986 | 0.981905ms | 2592 | 30 | 25.3621 | 2163.5 | 2.63293 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1849.6 | 1.28097 | 6.4291ms | 25687 | 30 | 863520 | 13244.5 | 1.63885 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1841.06 | 1.40957 | 6.78703ms | 25687 | 30 | 1.05533e+06 | 13305.9 | 1.64645 | 1(Tie) |
| fmt::format_to | 1100.02 | 2.21995 | 4.14557ms | 25687 | 30 | 7.33217e+06 | 22269.6 | 2.75715 | 3(Loss) |
| std::to_chars | 952.995 | 1.82089 | 4.66297ms | 25687 | 30 | 6.57255e+06 | 25705.3 | 3.18291 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 830.291 | 0.355582 | 177.236ms | 256901 | 30 | 3.30272e+07 | 295077 | 3.65954 | 1(Win) |
| vn::to_chars | 797.623 | 0.388276 | 55.5665ms | 256901 | 30 | 4.26715e+07 | 307163 | 3.8094 | 2(Loss) |
| fmt::format_to | 755.026 | 0.174871 | 59.3285ms | 256901 | 30 | 9.6597e+06 | 324492 | 4.02446 | 3(Loss) |
| std::to_chars | 687.412 | 0.38067 | 66.9094ms | 256901 | 30 | 5.52223e+07 | 356409 | 4.42033 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3179.6 | 0.0785772 | 0.038055ms | 518 | 30 | 0.447126 | 155.367 | 0.818211 | 1(Win) |
| jeaiii::to_text | 2487.43 | 0.23106 | 0.046574ms | 518 | 30 | 6.31724 | 198.6 | 1.07156 | 2(Loss) |
| fmt::format_to | 1653.84 | 2.02029 | 0.063299ms | 518 | 30 | 1092.49 | 298.7 | 1.68398 | 3(Loss) |
| std::to_chars | 1394.31 | 0.28966 | 0.169853ms | 518 | 30 | 31.5966 | 354.3 | 2.03089 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4547.05 | 0.0859289 | 0.53537ms | 5150 | 30 | 25.8437 | 1080.13 | 0.653152 | 1(Win) |
| jeaiii::to_text | 3746.03 | 0.289947 | 0.697728ms | 5150 | 30 | 433.541 | 1311.1 | 0.795385 | 2(Loss) |
| fmt::format_to | 2544.95 | 0.339339 | 0.421351ms | 5150 | 30 | 1286.6 | 1929.87 | 1.17658 | 3(Loss) |
| std::to_chars | 1920.32 | 0.0613676 | 0.543633ms | 5150 | 30 | 73.9034 | 2557.6 | 1.56603 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1576.49 | 1.43815 | 5.78604ms | 51536 | 30 | 6.03068e+06 | 31175.9 | 1.92542 | 1(Win) |
| jeaiii::to_text | 1293.23 | 1.47271 | 7.04762ms | 51536 | 30 | 9.39777e+06 | 38004.5 | 2.34776 | 2(Loss) |
| fmt::format_to | 889.634 | 1.19433 | 10.0892ms | 51536 | 30 | 1.30607e+07 | 55245.8 | 3.41369 | 3(Loss) |
| std::to_chars | 852.773 | 0.927816 | 10.3919ms | 51536 | 30 | 8.57827e+06 | 57633.8 | 3.56151 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 955.643 | 0.24655 | 93.1416ms | 515995 | 30 | 4.8354e+07 | 514932 | 3.1798 | 1(Win) |
| jeaiii::to_text | 861.314 | 0.27965 | 103.309ms | 515995 | 30 | 7.65803e+07 | 571326 | 3.52781 | 2(Loss) |
| fmt::format_to | 761.327 | 0.182641 | 166.688ms | 515995 | 30 | 4.18087e+07 | 646360 | 3.99099 | 3(Loss) |
| std::to_chars | 651.852 | 1.89463 | 351.294ms | 515995 | 30 | 6.13711e+09 | 754913 | 4.66001 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3704.35 | 0.0898265 | 0.035907ms | 564 | 30 | 0.510345 | 145.2 | 0.67831 | 1(Win) |
| jeaiii::to_text | 2761.62 | 0.10055 | 0.040917ms | 564 | 30 | 1.15057 | 194.767 | 0.958274 | 2(Loss) |
| fmt::format_to | 2423.53 | 0.12756 | 0.273134ms | 564 | 48 | 3.84707 | 221.938 | 1.1455 | 3(Loss) |
| std::to_chars | 1476.59 | 0.145939 | 0.071225ms | 564 | 30 | 8.47816 | 364.267 | 1.92813 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4462.63 | 0.0734816 | 0.220532ms | 5656 | 30 | 23.6655 | 1208.7 | 0.664975 | 1(Win) |
| jeaiii::to_text | 4130.15 | 0.0537055 | 0.603429ms | 5656 | 30 | 14.7586 | 1306 | 0.724917 | 2(Loss) |
| fmt::format_to | 2684.11 | 2.47949 | 0.895316ms | 5656 | 30 | 74484.5 | 2009.6 | 1.11563 | 3(Loss) |
| std::to_chars | 2086.62 | 0.0542177 | 0.528862ms | 5656 | 30 | 58.9299 | 2585.03 | 1.44199 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4496.82 | 0.806595 | 2.43895ms | 56712 | 30 | 282339 | 12027.3 | 0.673893 | 1(Win) |
| jeaiii::to_text | 2407.82 | 1.83378 | 4.24203ms | 56712 | 30 | 5.09003e+06 | 22462.2 | 1.2602 | 2(Loss) |
| std::to_chars | 1918.51 | 1.03353 | 5.56618ms | 56712 | 30 | 2.54675e+06 | 28191 | 1.58219 | 3(Loss) |
| fmt::format_to | 1546.01 | 1.68439 | 6.33424ms | 56712 | 30 | 1.04168e+07 | 34983.5 | 1.96373 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1931.57 | 0.811382 | 51.0188ms | 565870 | 30 | 1.54164e+08 | 279387 | 1.57134 | 1(Win) |
| jeaiii::to_text | 1610.82 | 0.880726 | 61.2529ms | 565870 | 30 | 2.61181e+08 | 335019 | 1.88501 | 2(Loss) |
| fmt::format_to | 1333.95 | 0.312665 | 76.6971ms | 565870 | 30 | 4.79994e+07 | 404556 | 2.27794 | 3(Loss) |
| std::to_chars | 1228.57 | 0.563636 | 78.9973ms | 565870 | 30 | 1.83887e+08 | 439255 | 2.4728 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3134.27 | 0.0796782 | 0.036156ms | 468 | 30 | 0.386207 | 142.4 | 0.802991 | 1(Win) |
| jeaiii::to_text | 2416.89 | 0.241244 | 0.040776ms | 468 | 30 | 5.95402 | 184.667 | 1.08746 | 2(Loss) |
| fmt::format_to | 1743.89 | 0.059044 | 0.051607ms | 468 | 30 | 0.685057 | 255.933 | 1.57336 | 3(Loss) |
| std::to_chars | 1267.23 | 0.0762835 | 0.090141ms | 468 | 30 | 2.16552 | 352.2 | 2.23077 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4907.35 | 0.0834255 | 0.445428ms | 4661 | 30 | 17.131 | 905.8 | 0.604706 | 1(Win) |
| jeaiii::to_text | 3595.07 | 0.170378 | 1.19557ms | 4661 | 48 | 213.017 | 1236.44 | 0.830137 | 2(Loss) |
| fmt::format_to | 2418.61 | 0.329596 | 0.381345ms | 4661 | 30 | 1100.81 | 1837.87 | 1.24368 | 3(Loss) |
| std::to_chars | 1751.34 | 0.0343867 | 0.534116ms | 4661 | 30 | 22.8517 | 2538.1 | 1.71691 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2068.85 | 0.286609 | 3.89259ms | 46639 | 30 | 113905 | 21499.1 | 1.46623 | 1(Win) |
| jeaiii::to_text | 1876.71 | 0.847841 | 4.57932ms | 46639 | 30 | 1.21131e+06 | 23700.2 | 1.61694 | 2(Loss) |
| fmt::format_to | 1629.03 | 0.787095 | 5.08198ms | 46639 | 30 | 1.38554e+06 | 27303.7 | 1.86312 | 3(Loss) |
| std::to_chars | 1345.19 | 1.71362 | 6.10836ms | 46639 | 30 | 9.63122e+06 | 33064.8 | 2.25508 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1487.96 | 0.626535 | 55.1662ms | 466080 | 30 | 1.05087e+08 | 298723 | 2.04188 | 1(Win) |
| jeaiii::to_text | 1298.99 | 0.40524 | 61.3434ms | 466080 | 30 | 5.76839e+07 | 342180 | 2.33856 | 2(Loss) |
| fmt::format_to | 1142.98 | 1.60171 | 68.3348ms | 466080 | 30 | 1.16394e+09 | 388884 | 2.65587 | 3(Loss) |
| std::to_chars | 1007.08 | 1.26245 | 81.0984ms | 466080 | 30 | 9.31418e+08 | 441365 | 3.01716 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2895.8 | 0.0734219 | 0.03701ms | 483 | 30 | 0.409195 | 159.067 | 0.895652 | 1(Win) |
| jeaiii::to_text | 2753.83 | 0.202554 | 0.038664ms | 483 | 30 | 3.44368 | 167.267 | 0.947895 | 2(Loss) |
| std::to_chars | 1687.48 | 0.805018 | 0.061099ms | 483 | 30 | 144.861 | 272.967 | 1.67805 | 3(Loss) |
| fmt::format_to | 1646.07 | 0.0955256 | 0.055155ms | 483 | 30 | 2.14368 | 279.833 | 1.6922 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3304.02 | 0.079869 | 0.256708ms | 4833 | 30 | 37.2414 | 1395 | 0.897855 | 1(Win) |
| jeaiii::to_text | 3101.48 | 0.128946 | 0.261986ms | 4833 | 30 | 110.162 | 1486.1 | 0.961046 | 2(Loss) |
| fmt::format_to | 2434.69 | 0.0398325 | 0.402616ms | 4833 | 30 | 17.0586 | 1893.1 | 1.23502 | 3(Loss) |
| std::to_chars | 1856.79 | 0.0245957 | 0.463178ms | 4833 | 30 | 11.1828 | 2482.3 | 1.61856 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4062.36 | 0.0717888 | 2.18697ms | 48348 | 30 | 1991.75 | 11350.1 | 0.745837 | 1(Win) |
| jeaiii::to_text | 3748.83 | 0.670262 | 2.47788ms | 48348 | 30 | 203881 | 12299.4 | 0.808391 | 2(Loss) |
| fmt::format_to | 2134.65 | 0.787004 | 4.08209ms | 48348 | 30 | 866916 | 21599.9 | 1.42141 | 3(Loss) |
| std::to_chars | 1565.83 | 0.798812 | 12.6571ms | 48348 | 30 | 1.65989e+06 | 29446.6 | 1.93799 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2366.55 | 1.44551 | 34.3878ms | 483127 | 30 | 2.37603e+08 | 194691 | 1.2821 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2325.93 | 0.302645 | 35.9907ms | 483127 | 30 | 1.07825e+07 | 198091 | 1.30599 | 1(Tie) |
| fmt::format_to | 1599.29 | 0.32382 | 51.8955ms | 483127 | 30 | 2.61093e+07 | 288094 | 1.89972 | 3(Loss) |
| std::to_chars | 1409.71 | 0.321994 | 58.9108ms | 483127 | 30 | 3.32261e+07 | 326837 | 2.15538 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 4110.71 | 0.611762 | 0.056073ms | 998 | 30 | 60.1885 | 231.533 | 0.672946 | 1(Win) |
| vn::to_chars | 3486.75 | 0.04805 | 0.059113ms | 998 | 30 | 0.516092 | 272.967 | 0.79342 | 2(Loss) |
| fmt::format_to | 2399.41 | 0.0718492 | 0.079219ms | 998 | 30 | 2.43678 | 396.667 | 1.17916 | 3(Loss) |
| std::to_chars | 1602.12 | 0.205599 | 0.111126ms | 998 | 30 | 44.754 | 594.067 | 1.81757 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4840.27 | 0.208664 | 0.418249ms | 10009 | 30 | 507.995 | 1972.07 | 0.619036 | 1(Win) |
| jeaiii::to_text | 4602.67 | 0.0260268 | 0.457735ms | 10009 | 30 | 8.74023 | 2073.87 | 0.65187 | 2(Loss) |
| fmt::format_to | 3331.31 | 0.0396099 | 0.579901ms | 10009 | 30 | 38.6437 | 2865.33 | 0.902791 | 3(Loss) |
| std::to_chars | 1961.05 | 0.0463254 | 0.949401ms | 10009 | 30 | 152.533 | 4867.47 | 1.54131 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1910.18 | 0.615189 | 9.60334ms | 99902 | 30 | 2.82449e+06 | 49877.1 | 1.58959 | 1(Win) |
| jeaiii::to_text | 1810.87 | 0.595818 | 9.94455ms | 99902 | 30 | 2.94797e+06 | 52612.3 | 1.67657 | 2(Loss) |
| fmt::format_to | 1462.09 | 0.619453 | 12.198ms | 99902 | 30 | 4.88809e+06 | 65162.9 | 2.07737 | 3(Loss) |
| std::to_chars | 1075.85 | 0.871587 | 16.1997ms | 99902 | 30 | 1.78726e+07 | 88557 | 2.82368 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1330.93 | 0.36946 | 129.975ms | 998257 | 30 | 2.09523e+08 | 715299 | 2.28283 | 1(Win) |
| jeaiii::to_text | 1257.25 | 0.779848 | 134.927ms | 998257 | 30 | 1.04612e+09 | 757217 | 2.41555 | 2(Loss) |
| fmt::format_to | 1105.75 | 0.494219 | 154.81ms | 998257 | 30 | 5.43163e+08 | 860963 | 2.74718 | 3(Loss) |
| std::to_chars | 906.605 | 0.424798 | 189.903ms | 998257 | 30 | 5.96945e+08 | 1.05008e+06 | 3.3508 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4211.29 | 0.376884 | 0.054272ms | 1047 | 30 | 23.9552 | 237.1 | 0.641993 | 1(Win) |
| jeaiii::to_text | 3412.11 | 0.0448208 | 0.060054ms | 1047 | 30 | 0.516092 | 292.633 | 0.812257 | 2(Loss) |
| fmt::format_to | 2554.79 | 0.190874 | 0.076777ms | 1047 | 30 | 16.6954 | 390.833 | 1.11028 | 3(Loss) |
| std::to_chars | 1756.58 | 0.0482213 | 0.10833ms | 1047 | 30 | 2.25402 | 568.433 | 1.66937 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4907.05 | 1.02312 | 0.424032ms | 10509 | 30 | 13099.6 | 2042.4 | 0.608669 | 1(Win) |
| jeaiii::to_text | 3735.06 | 0.0517245 | 0.486341ms | 10509 | 30 | 57.7885 | 2683.27 | 0.802112 | 2(Loss) |
| fmt::format_to | 3283.69 | 0.223052 | 1.34284ms | 10509 | 30 | 1390.37 | 3052.1 | 0.916481 | 3(Loss) |
| std::to_chars | 1975.39 | 0.0458001 | 0.971681ms | 10509 | 30 | 161.983 | 5073.5 | 1.52968 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2407.43 | 0.511539 | 7.60241ms | 104772 | 30 | 1.35227e+06 | 41504.2 | 1.26097 | 1(Win) |
| jeaiii::to_text | 2236.33 | 0.918392 | 8.25516ms | 104772 | 30 | 5.05122e+06 | 44679.6 | 1.35759 | 2(Loss) |
| fmt::format_to | 1615.49 | 0.338187 | 11.3017ms | 104772 | 30 | 1.31256e+06 | 61850.4 | 1.88008 | 3(Loss) |
| std::to_chars | 1327.91 | 2.29386 | 13.5479ms | 104772 | 30 | 8.93743e+07 | 75245.1 | 2.28357 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2027.66 | 0.467518 | 91.2987ms | 1047902 | 30 | 1.59283e+08 | 492862 | 1.49863 | 1(Win) |
| jeaiii::to_text | 1913.23 | 0.200906 | 94.7149ms | 1047902 | 30 | 3.3038e+07 | 522339 | 1.58826 | 2(Loss) |
| fmt::format_to | 1500.9 | 0.187963 | 119.934ms | 1047902 | 30 | 4.69899e+07 | 665840 | 2.02462 | 3(Loss) |
| std::to_chars | 1237.34 | 0.595807 | 144.711ms | 1047902 | 30 | 6.94692e+08 | 807663 | 2.4545 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 3404.36 | 0.0780385 | 0.059352ms | 948 | 30 | 1.28851 | 265.567 | 0.802778 | 1(Win) |
| vn::to_chars | 3282.4 | 0.0414993 | 0.057972ms | 948 | 30 | 0.391954 | 275.433 | 0.843003 | 2(Loss) |
| fmt::format_to | 2362.38 | 0.0813384 | 0.07458ms | 948 | 30 | 2.9069 | 382.7 | 1.19863 | 3(Loss) |
| std::to_chars | 1488.37 | 0.132711 | 0.111373ms | 948 | 30 | 19.4954 | 607.433 | 1.95556 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 4441.41 | 0.102376 | 0.412929ms | 9477 | 30 | 130.202 | 2034.93 | 0.675224 | 1(Win) |
| vn::to_chars | 3939.72 | 1.73291 | 0.426206ms | 9477 | 30 | 47411.7 | 2294.07 | 0.75896 | 2(Loss) |
| fmt::format_to | 3025.09 | 0.044193 | 0.610941ms | 9477 | 30 | 52.2989 | 2987.67 | 0.994524 | 3(Loss) |
| std::to_chars | 1898.63 | 0.030748 | 0.916469ms | 9477 | 30 | 64.2713 | 4760.27 | 1.59186 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2382.38 | 0.635584 | 7.00248ms | 94809 | 30 | 1.7456e+06 | 37952.4 | 1.27435 | 1(Win) |
| jeaiii::to_text | 2066.66 | 0.0737634 | 8.02965ms | 94809 | 30 | 31243.8 | 43750.2 | 1.46903 | 2(Loss) |
| fmt::format_to | 1649.12 | 0.322775 | 10.0934ms | 94809 | 30 | 939547 | 54827.5 | 1.84146 | 3(Loss) |
| std::to_chars | 1304.65 | 0.533466 | 12.7272ms | 94809 | 30 | 4.10055e+06 | 69303.3 | 2.32788 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1914.88 | 0.305233 | 86.0623ms | 948473 | 30 | 6.23667e+07 | 472372 | 1.58668 | 1(Win) |
| jeaiii::to_text | 1724.54 | 0.276468 | 144.586ms | 948473 | 30 | 6.3083e+07 | 524507 | 1.76203 | 2(Loss) |
| fmt::format_to | 1374.15 | 0.439783 | 118.143ms | 948473 | 30 | 2.5141e+08 | 658252 | 2.21133 | 3(Loss) |
| std::to_chars | 1145.76 | 0.940241 | 138.77ms | 948473 | 30 | 1.65297e+09 | 789465 | 2.64988 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5088.34 | 0.317302 | 0.042903ms | 978 | 30 | 10.1483 | 183.3 | 0.51152 | 1(Win) |
| jeaiii::to_text | 4135.5 | 0.0591191 | 0.047927ms | 978 | 30 | 0.533333 | 225.533 | 0.650409 | 2(Loss) |
| fmt::format_to | 2593.94 | 0.0620925 | 0.075822ms | 978 | 30 | 1.4954 | 359.567 | 1.08749 | 3(Loss) |
| std::to_chars | 1618.51 | 0.0380672 | 0.106511ms | 978 | 30 | 1.44368 | 576.267 | 1.79506 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 6039.76 | 0.0486362 | 0.705942ms | 9714 | 30 | 16.6954 | 1533.83 | 0.495999 | 1(Win) |
| vn::to_chars | 5022.31 | 1.73162 | 0.358693ms | 9714 | 30 | 30606.7 | 1844.57 | 0.592296 | 2(Loss) |
| fmt::format_to | 3204.72 | 0.0578127 | 0.59136ms | 9714 | 30 | 83.7885 | 2890.73 | 0.938693 | 3(Loss) |
| std::to_chars | 1955.58 | 0.0511839 | 0.920349ms | 9714 | 30 | 176.372 | 4737.2 | 1.54471 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 5471.39 | 0.664981 | 3.2096ms | 97402 | 30 | 382367 | 16977.4 | 0.554308 | 1(Win) |
| vn::to_chars | 5233.39 | 0.241092 | 3.41032ms | 97402 | 30 | 54935.8 | 17749.4 | 0.579522 | 2(Loss) |
| fmt::format_to | 2192.71 | 1.16901 | 7.66825ms | 97402 | 30 | 7.35758e+06 | 42363.1 | 1.38484 | 3(Loss) |
| std::to_chars | 1644.3 | 1.06805 | 10.093ms | 97402 | 30 | 1.09215e+07 | 56492.1 | 1.8471 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3656.18 | 0.310396 | 46.3822ms | 974135 | 30 | 1.86611e+07 | 254092 | 0.830831 | 1(Win) |
| jeaiii::to_text | 3100.63 | 1.3279 | 53.0194ms | 974135 | 30 | 4.74884e+08 | 299619 | 0.979401 | 2(Loss) |
| fmt::format_to | 2057.1 | 0.229163 | 82.1969ms | 974135 | 30 | 3.21322e+07 | 451611 | 1.47715 | 3(Loss) |
| std::to_chars | 1536.5 | 0.443468 | 109.342ms | 974135 | 30 | 2.15685e+08 | 604626 | 1.97753 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5658.11 | 0.114188 | 0.067413ms | 1947 | 30 | 4.21264 | 328.167 | 0.492364 | 1(Win) |
| jeaiii::to_text | 3413.24 | 0.127112 | 0.104053ms | 1947 | 30 | 14.3448 | 544 | 0.845198 | 2(Loss) |
| fmt::format_to | 2193.25 | 0.0781877 | 0.152789ms | 1947 | 30 | 13.1448 | 846.6 | 1.33677 | 3(Loss) |
| std::to_chars | 1663.26 | 0.0589637 | 0.199703ms | 1947 | 30 | 12.9989 | 1116.37 | 1.78998 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7572.41 | 0.0460592 | 0.508502ms | 19393 | 30 | 37.9644 | 2442.37 | 0.395588 | 1(Win) |
| jeaiii::to_text | 4318.68 | 0.040842 | 0.816857ms | 19393 | 30 | 91.7747 | 4282.47 | 0.699323 | 2(Loss) |
| fmt::format_to | 2786.68 | 0.0391875 | 1.28523ms | 19393 | 30 | 202.924 | 6636.8 | 1.08497 | 3(Loss) |
| std::to_chars | 1881.89 | 0.0501062 | 1.8352ms | 19393 | 30 | 727.459 | 9827.7 | 1.60969 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3906.94 | 0.401544 | 8.8747ms | 193756 | 30 | 1.08199e+06 | 47295.4 | 0.777285 | 1(Win) |
| jeaiii::to_text | 2829.38 | 0.327903 | 12.1099ms | 193756 | 30 | 1.37576e+06 | 65307.7 | 1.07356 | 2(Loss) |
| std::to_chars | 1540.57 | 0.406172 | 21.7159ms | 193756 | 30 | 7.12015e+06 | 119943 | 1.9721 | 3(Loss) |
| fmt::format_to | 1138.84 | 1.75104 | 21.0352ms | 193756 | 30 | 2.42158e+08 | 162253 | 2.66698 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3033.87 | 0.605382 | 109.847ms | 1938473 | 30 | 4.08232e+08 | 609345 | 1.00115 | 1(Win) |
| jeaiii::to_text | 2413.22 | 0.290357 | 138.906ms | 1938473 | 30 | 1.48426e+08 | 766059 | 1.259 | 2(Loss) |
| fmt::format_to | 1942.79 | 0.187112 | 173.094ms | 1938473 | 30 | 9.51027e+07 | 951557 | 1.56399 | 3(Loss) |
| std::to_chars | 1450.56 | 0.840206 | 226.722ms | 1938473 | 30 | 3.43986e+09 | 1.27445e+06 | 2.09386 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5124.57 | 0.0631787 | 0.073355ms | 1995 | 30 | 1.65057 | 371.267 | 0.550727 | 1(Win) |
| jeaiii::to_text | 3251.9 | 0.0561424 | 0.110106ms | 1995 | 30 | 3.23678 | 585.067 | 0.889574 | 2(Loss) |
| fmt::format_to | 2118.92 | 0.0573504 | 0.178047ms | 1995 | 30 | 7.95517 | 897.9 | 1.39774 | 3(Loss) |
| std::to_chars | 2052.92 | 0.102389 | 0.258043ms | 1995 | 30 | 27.0126 | 926.767 | 1.45131 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6994.18 | 0.0491608 | 0.584856ms | 19873 | 30 | 53.2368 | 2709.73 | 0.428108 | 1(Win) |
| jeaiii::to_text | 4425.02 | 0.0434141 | 0.847833ms | 19873 | 30 | 103.724 | 4283 | 0.682336 | 2(Loss) |
| std::to_chars | 1984.87 | 0.671538 | 1.81731ms | 19873 | 30 | 123347 | 9548.43 | 1.52642 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6268.79 | 1.89454 | 5.47641ms | 198872 | 30 | 9.85617e+06 | 30254.5 | 0.484177 | 1(Win) |
| jeaiii::to_text | 4100.93 | 1.40843 | 8.33581ms | 198872 | 30 | 1.27284e+07 | 46247.9 | 0.740467 | 2(Loss) |
| fmt::format_to | 2537.78 | 0.823651 | 13.5612ms | 198872 | 30 | 1.1367e+07 | 74734.3 | 1.197 | 3(Loss) |
| std::to_chars | 1937.82 | 0.909797 | 17.7177ms | 198872 | 30 | 2.37866e+07 | 97872.6 | 1.56709 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6090.54 | 0.448496 | 184.966ms | 1988091 | 30 | 5.8479e+07 | 311301 | 0.498754 | 1(Win) |
| jeaiii::to_text | 3889.72 | 0.245218 | 87.9024ms | 1988091 | 30 | 4.28609e+07 | 487436 | 0.781173 | 2(Loss) |
| fmt::format_to | 2499.59 | 0.233324 | 136.879ms | 1988091 | 30 | 9.39674e+07 | 758521 | 1.21559 | 3(Loss) |
| std::to_chars | 1967.56 | 0.189953 | 174.307ms | 1988091 | 30 | 1.00516e+08 | 963628 | 1.54448 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5222.72 | 0.0921334 | 0.072515ms | 1889 | 30 | 3.02989 | 344.933 | 0.542545 | 1(Win) |
| jeaiii::to_text | 3625.22 | 0.0586363 | 0.098476ms | 1889 | 30 | 2.54713 | 496.933 | 0.804112 | 2(Loss) |
| fmt::format_to | 2075.61 | 0.0557734 | 0.155552ms | 1889 | 30 | 7.02989 | 867.933 | 1.42552 | 3(Loss) |
| std::to_chars | 1568.79 | 0.0740257 | 0.212092ms | 1889 | 30 | 21.6782 | 1148.33 | 1.89914 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6809.73 | 0.0802327 | 0.52442ms | 18890 | 30 | 135.154 | 2645.47 | 0.440985 | 1(Win) |
| jeaiii::to_text | 4131.54 | 0.0406605 | 0.867203ms | 18890 | 30 | 94.2989 | 4360.33 | 0.731083 | 2(Loss) |
| fmt::format_to | 2542.29 | 0.0425486 | 1.32487ms | 18890 | 30 | 272.714 | 7086.1 | 1.19072 | 3(Loss) |
| std::to_chars | 1957.27 | 0.0371881 | 3.97045ms | 18890 | 30 | 351.472 | 9204.1 | 1.54849 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6234.62 | 0.54837 | 5.29383ms | 188768 | 30 | 752153 | 28874.8 | 0.486854 | 1(Win) |
| jeaiii::to_text | 3985.05 | 1.43817 | 8.14141ms | 188768 | 30 | 1.26628e+07 | 45174.6 | 0.762014 | 2(Loss) |
| fmt::format_to | 2427.37 | 1.70261 | 13.8909ms | 188768 | 30 | 4.78337e+07 | 74163.8 | 1.25123 | 3(Loss) |
| std::to_chars | 1866.14 | 1.38927 | 17.3432ms | 188768 | 30 | 5.38846e+07 | 96468.4 | 1.62607 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5806.96 | 0.372297 | 56.0516ms | 1887994 | 30 | 3.99764e+07 | 310064 | 0.523197 | 1(Win) |
| jeaiii::to_text | 3808.46 | 0.508031 | 85.9321ms | 1887994 | 30 | 1.73063e+08 | 472772 | 0.797747 | 2(Loss) |
| fmt::format_to | 2326 | 0.883244 | 137.232ms | 1887994 | 30 | 1.40237e+09 | 774088 | 1.30577 | 3(Loss) |
| std::to_chars | 1861.39 | 0.576456 | 175.059ms | 1887994 | 30 | 9.32778e+08 | 967302 | 1.63152 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5863.89 | 0.0661371 | 0.067556ms | 1943 | 30 | 1.31034 | 316 | 0.476205 | 1(Win) |
| jeaiii::to_text | 3526.14 | 0.0453911 | 0.098155ms | 1943 | 30 | 1.7069 | 525.5 | 0.816332 | 2(Loss) |
| fmt::format_to | 2224.92 | 0.0625593 | 0.168701ms | 1943 | 30 | 8.14368 | 832.833 | 1.31554 | 3(Loss) |
| std::to_chars | 1618.14 | 0.146588 | 0.204409ms | 1943 | 30 | 84.5333 | 1145.13 | 1.84068 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7418.81 | 0.0490697 | 0.521152ms | 19393 | 30 | 44.892 | 2492.93 | 0.403231 | 1(Win) |
| jeaiii::to_text | 4541.93 | 0.0267855 | 0.817856ms | 19393 | 30 | 35.6885 | 4071.97 | 0.664216 | 2(Loss) |
| fmt::format_to | 2688.46 | 0.73436 | 1.34652ms | 19393 | 30 | 76563.7 | 6879.27 | 1.12455 | 3(Loss) |
| std::to_chars | 1855.94 | 2.24228 | 1.84941ms | 19393 | 30 | 1.49783e+06 | 9965.1 | 1.63294 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4414.57 | 1.13994 | 7.62692ms | 194005 | 30 | 6.84758e+06 | 41910.7 | 0.687726 | 1(Win) |
| jeaiii::to_text | 3304.09 | 0.443855 | 24.1513ms | 194005 | 30 | 1.85321e+06 | 55996.5 | 0.9192 | 2(Loss) |
| fmt::format_to | 1747.23 | 0.463073 | 19.2222ms | 194005 | 30 | 7.21346e+06 | 105892 | 1.73883 | 3(Loss) |
| std::to_chars | 1500.26 | 0.540405 | 22.2416ms | 194005 | 30 | 1.33246e+07 | 123324 | 2.02501 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3474.39 | 0.333296 | 145.822ms | 1939926 | 30 | 9.44916e+07 | 532484 | 0.874407 | 1(Win) |
| jeaiii::to_text | 2897.17 | 0.326697 | 166.974ms | 1939926 | 30 | 1.30567e+08 | 638573 | 1.04849 | 2(Loss) |
| fmt::format_to | 1624.61 | 0.222451 | 205.384ms | 1939926 | 30 | 1.92514e+08 | 1.13877e+06 | 1.86951 | 3(Loss) |
| std::to_chars | 1406.03 | 0.249561 | 235.133ms | 1939926 | 30 | 3.23487e+08 | 1.3158e+06 | 2.16064 | 4(Loss) |
