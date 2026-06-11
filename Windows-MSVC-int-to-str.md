# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1232.09 | 2.24132 | 0.0494ms | 267 | 30 | 643.678 | 206.667 | 1(Win) |
| std::to_chars | 553.546 | 1.97765 | 0.127ms | 267 | 30 | 2482.76 | 460 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1521.72 | 0.411116 | 0.3277ms | 2686 | 30 | 1436.78 | 1683.33 | 1(Win) |
| vn::to_chars | 976.456 | 0.299391 | 0.503ms | 2686 | 30 | 1850.57 | 2623.33 | 2(Loss) |
| fmt::format_to | 632.486 | 0.229254 | 0.7658ms | 2686 | 30 | 2586.21 | 4050 | 3(Loss) |
| std::to_chars | 582.616 | 0.20353 | 0.8332ms | 2686 | 30 | 2402.3 | 4396.67 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 530.889 | 0.306315 | 9.4896ms | 26457 | 30 | 635816 | 47526.7 | 1(Win) |
| jeaiii::to_text | 471.644 | 0.100397 | 10.373ms | 26457 | 30 | 86540.2 | 53496.7 | 2(Loss) |
| fmt::format_to | 353.067 | 0.273147 | 13.1735ms | 26457 | 30 | 1.14309e+06 | 71463.3 | 3(Loss) |
| std::to_chars | 217.106 | 1.09363 | 21.1504ms | 26457 | 30 | 4.84614e+07 | 116217 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 369.298 | 1.53808 | 123.093ms | 264505 | 30 | 3.31126e+09 | 683057 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 361.063 | 0.82013 | 128.301ms | 264505 | 30 | 9.84893e+08 | 698637 | 1(Tie) |
| fmt::format_to | 303.204 | 1.01962 | 150.197ms | 264505 | 30 | 2.15871e+09 | 831953 | 3(Loss) |
| std::to_chars | 191.994 | 1.96731 | 234.24ms | 264505 | 30 | 2.0043e+10 | 1.31385e+06 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 715.256 | 1.76853 | 0.0916ms | 315 | 30 | 1655.17 | 420 | 1(Win) |
| std::to_chars | 411.517 | 1.1657 | 0.1621ms | 315 | 30 | 2172.41 | 730 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1315.15 | 0.361221 | 0.4331ms | 3135 | 30 | 2022.99 | 2273.33 | 1(Win) |
| jeaiii::to_text | 1225.32 | 0.372835 | 0.4823ms | 3135 | 30 | 2482.76 | 2440 | 2(Loss) |
| fmt::format_to | 715.256 | 0.211504 | 0.7755ms | 3135 | 30 | 2344.83 | 4180 | 3(Loss) |
| std::to_chars | 207.191 | 0.0589718 | 1.9712ms | 3135 | 30 | 2172.41 | 14430 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1050.59 | 0.856936 | 12.8303ms | 31510 | 30 | 1.8024e+06 | 28603.3 | 1(Win) |
| jeaiii::to_text | 879.864 | 0.110302 | 14.5858ms | 31510 | 30 | 42574.7 | 34153.3 | 2(Loss) |
| fmt::format_to | 584.636 | 0.352868 | 9.4284ms | 31510 | 30 | 986897 | 51400 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 762.249 | 0.763098 | 75.3991ms | 314350 | 30 | 2.70219e+08 | 393293 | 1(Win) |
| jeaiii::to_text | 746.917 | 0.471294 | 75.2049ms | 314350 | 30 | 1.07346e+08 | 401367 | 2(Loss) |
| fmt::format_to | 527.6 | 2.17656 | 102.165ms | 314350 | 30 | 4.58858e+09 | 568210 | 3(Loss) |
| std::to_chars | 339.314 | 0.591788 | 406.971ms | 314350 | 30 | 8.20117e+08 | 883510 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 513.168 | 1.76853 | 0.0919ms | 226 | 30 | 1655.17 | 420 | 1(Win) |
| std::to_chars | 303.564 | 0.784628 | 0.1611ms | 226 | 30 | 931.034 | 710 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 977.665 | 0.410333 | 0.405ms | 2187 | 30 | 2298.85 | 2133.33 | 1(Win) |
| jeaiii::to_text | 712.649 | 0.32491 | 0.5473ms | 2187 | 30 | 2712.64 | 2926.67 | 2(Loss) |
| fmt::format_to | 491.907 | 0.214556 | 0.79ms | 2187 | 30 | 2482.76 | 4240 | 3(Loss) |
| std::to_chars | 160.726 | 1.10331 | 4.7888ms | 2187 | 30 | 614954 | 12976.7 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 601.28 | 0.503998 | 30.1472ms | 21497 | 48 | 1.41743e+06 | 34095.8 | 1(Win) |
| jeaiii::to_text | 561.521 | 0.053101 | 6.811ms | 21497 | 30 | 11275.9 | 36510 | 2(Loss) |
| fmt::format_to | 427.82 | 0.300398 | 8.8864ms | 21497 | 30 | 621655 | 47920 | 3(Loss) |
| std::to_chars | 180.579 | 0.335 | 40.7348ms | 21497 | 30 | 4.33941e+06 | 113530 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 522.526 | 1.26198 | 167.457ms | 215085 | 30 | 7.36265e+08 | 392557 | 1(Win) |
| jeaiii::to_text | 497.565 | 0.85963 | 76.46ms | 215085 | 30 | 3.76761e+08 | 412250 | 2(Loss) |
| fmt::format_to | 376.924 | 0.9665 | 98.8775ms | 215085 | 30 | 8.29921e+08 | 544197 | 3(Loss) |
| std::to_chars | 237.83 | 0.276934 | 155.452ms | 215085 | 30 | 1.71144e+08 | 862470 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1267.65 | 2.35033 | 0.2108ms | 252 | 48 | 953.014 | 189.583 | 1(Win) |
| fmt::format_to | 686.646 | 2.08379 | 0.3751ms | 252 | 48 | 2553.19 | 350 | 2(Loss) |
| std::to_chars | 341.696 | 0.473934 | 0.1983ms | 252 | 30 | 333.333 | 703.333 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1347.22 | 0.499197 | 0.3807ms | 2604 | 30 | 2540.23 | 1843.33 | 1(Win) |
| jeaiii::to_text | 930.1 | 0.365821 | 0.5045ms | 2604 | 30 | 2862.07 | 2670 | 2(Loss) |
| fmt::format_to | 539.472 | 0.265205 | 0.8487ms | 2604 | 30 | 4471.26 | 4603.33 | 3(Loss) |
| std::to_chars | 283.813 | 0.119425 | 1.625ms | 2604 | 30 | 3275.86 | 8750 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 748.37 | 0.451994 | 6.0299ms | 25786 | 30 | 661793 | 32860 | 1(Win) |
| jeaiii::to_text | 584.12 | 0.855516 | 7.44ms | 25786 | 30 | 3.89172e+06 | 42100 | 2(Loss) |
| fmt::format_to | 448.34 | 1.92423 | 9.7346ms | 25786 | 30 | 3.34184e+07 | 54850 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 526.556 | 0.227376 | 87.0226ms | 257101 | 30 | 3.36302e+07 | 465650 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 519.96 | 1.46752 | 87.9363ms | 257101 | 30 | 1.43668e+09 | 471557 | 1(Tie) |
| fmt::format_to | 416.142 | 2.18531 | 106.748ms | 257101 | 30 | 4.97362e+09 | 589200 | 3(Loss) |
| std::to_chars | 231.518 | 0.657388 | 199.407ms | 257101 | 30 | 1.45413e+09 | 1.05906e+06 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1444.82 | 2.06284 | 0.3432ms | 505 | 48 | 2269.5 | 333.333 | 1(Win) |
| fmt::format_to | 976.227 | 0.93893 | 0.1269ms | 505 | 30 | 643.678 | 493.333 | 2(Loss) |
| std::to_chars | 525.388 | 0.754959 | 0.2247ms | 505 | 30 | 1436.78 | 916.667 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1799.25 | 0.337286 | 0.5883ms | 5182 | 30 | 2574.71 | 2746.67 | 1(Win) |
| jeaiii::to_text | 1446.42 | 0.20255 | 0.6527ms | 5182 | 30 | 1436.78 | 3416.67 | 2(Loss) |
| fmt::format_to | 1012.69 | 0.152209 | 0.9086ms | 5182 | 30 | 1655.17 | 4880 | 3(Loss) |
| std::to_chars | 468.875 | 0.086311 | 1.9597ms | 5182 | 30 | 2482.76 | 10540 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 738.125 | 0.270071 | 11.1608ms | 51689 | 30 | 975920 | 66783.3 | 1(Win) |
| jeaiii::to_text | 665.332 | 0.665304 | 33.2471ms | 51689 | 30 | 7.28921e+06 | 74090 | 2(Loss) |
| fmt::format_to | 542.433 | 1.25296 | 17.2171ms | 51689 | 30 | 3.88956e+07 | 90876.7 | 3(Loss) |
| std::to_chars | 346.81 | 0.285603 | 61.6323ms | 51689 | 30 | 4.94378e+06 | 142137 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 622.778 | 1.5479 | 140.244ms | 516120 | 30 | 4.48995e+09 | 790347 | 1(Win) |
| jeaiii::to_text | 588.438 | 0.909071 | 150.56ms | 516120 | 30 | 1.73467e+09 | 836470 | 2(Loss) |
| fmt::format_to | 491.601 | 1.04606 | 178.093ms | 516120 | 30 | 3.29089e+09 | 1.00124e+06 | 3(Loss) |
| std::to_chars | 316.86 | 1.20027 | 281.219ms | 516120 | 30 | 1.04291e+10 | 1.5534e+06 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1889.61 | 2.20201 | 0.0675ms | 568 | 30 | 1195.4 | 286.667 | 1(Win) |
| jeaiii::to_text | 1425.49 | 1.95469 | 0.189ms | 568 | 30 | 1655.17 | 380 | 2(Loss) |
| fmt::format_to | 1062.13 | 1.09233 | 0.1096ms | 568 | 30 | 931.034 | 510 | 3(Loss) |
| std::to_chars | 515.892 | 0.884264 | 0.2173ms | 568 | 30 | 2586.21 | 1050 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2071.15 | 0.283504 | 0.5147ms | 5690 | 30 | 1655.17 | 2620 | 1(Win) |
| jeaiii::to_text | 1192.62 | 0.204061 | 0.8404ms | 5690 | 30 | 2586.21 | 4550 | 2(Loss) |
| fmt::format_to | 1007.38 | 0.147157 | 0.9998ms | 5690 | 30 | 1885.06 | 5386.67 | 3(Loss) |
| std::to_chars | 494.208 | 0.0805179 | 2.0098ms | 5690 | 30 | 2344.83 | 10980 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1455.1 | 0.31438 | 6.7832ms | 56637 | 30 | 408552 | 37120 | 1(Win) |
| jeaiii::to_text | 1086.86 | 0.08157 | 9.5793ms | 56637 | 30 | 49298.9 | 49696.7 | 2(Loss) |
| fmt::format_to | 832.382 | 1.54322 | 11.6822ms | 56637 | 30 | 3.00837e+07 | 64890 | 3(Loss) |
| std::to_chars | 469.655 | 0.222113 | 121.464ms | 56637 | 48 | 3.13209e+06 | 115006 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1112.34 | 1.00805 | 87.2471ms | 566002 | 30 | 7.17872e+08 | 485267 | 1(Win) |
| jeaiii::to_text | 1031.3 | 0.979948 | 96.039ms | 566002 | 30 | 7.89204e+08 | 523397 | 2(Loss) |
| fmt::format_to | 764.859 | 1.02776 | 302.395ms | 566002 | 30 | 1.57826e+09 | 705727 | 3(Loss) |
| std::to_chars | 407.057 | 2.06745 | 223.853ms | 566002 | 30 | 2.25484e+10 | 1.32606e+06 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1524.8 | 1.57911 | 0.075ms | 469 | 30 | 643.678 | 293.333 | 1(Win) |
| fmt::format_to | 900.55 | 0.671141 | 0.1125ms | 469 | 30 | 333.333 | 496.667 | 2(Loss) |
| std::to_chars | 445.787 | 0.582009 | 0.2089ms | 469 | 30 | 1022.99 | 1003.33 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1401.96 | 0.258774 | 0.6071ms | 4665 | 30 | 2022.99 | 3173.33 | 1(Win) |
| jeaiii::to_text | 1103.94 | 0.211157 | 0.7534ms | 4665 | 30 | 2172.41 | 4030 | 2(Loss) |
| fmt::format_to | 836.782 | 1.23348 | 1.0695ms | 4665 | 30 | 129023 | 5316.67 | 3(Loss) |
| std::to_chars | 412.444 | 0.0734877 | 5.058ms | 4665 | 30 | 1885.06 | 10786.7 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1000.5 | 0.34111 | 18.6301ms | 46622 | 30 | 689379 | 44440 | 1(Win) |
| jeaiii::to_text | 914.296 | 0.0559038 | 8.8554ms | 46622 | 30 | 22172.4 | 48630 | 2(Loss) |
| fmt::format_to | 702.566 | 0.298523 | 58.6215ms | 46622 | 48 | 1.71319e+06 | 63285.4 | 3(Loss) |
| std::to_chars | 384.632 | 2.16184 | 47.7275ms | 46622 | 30 | 1.87352e+08 | 115597 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 853.83 | 1.5951 | 93.3995ms | 466335 | 30 | 2.07085e+09 | 520867 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 827.423 | 1.35542 | 97.0384ms | 466335 | 30 | 1.59225e+09 | 537490 | 1(Tie) |
| fmt::format_to | 625.106 | 0.925414 | 127.147ms | 466335 | 30 | 1.30042e+09 | 711450 | 3(Loss) |
| std::to_chars | 373.729 | 1.73695 | 208.817ms | 466335 | 30 | 1.28167e+10 | 1.18998e+06 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1244.93 | 2.2999 | 0.0825ms | 483 | 30 | 2172.41 | 370 | 1(Win) |
| fmt::format_to | 1031.25 | 2.07405 | 0.1166ms | 483 | 30 | 2574.71 | 446.667 | 2(Loss) |
| std::to_chars | 468.432 | 0.703775 | 0.2101ms | 483 | 30 | 1436.78 | 983.333 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1883.44 | 0.378642 | 1.0743ms | 4832 | 30 | 2574.71 | 2446.67 | 1(Win) |
| jeaiii::to_text | 1409.22 | 0.298698 | 0.6149ms | 4832 | 30 | 2862.07 | 3270 | 2(Loss) |
| fmt::format_to | 997.436 | 0.160775 | 0.86ms | 4832 | 30 | 1655.17 | 4620 | 3(Loss) |
| std::to_chars | 478.521 | 0.0883658 | 1.7768ms | 4832 | 30 | 2172.41 | 9630 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1333.06 | 0.589481 | 6.7014ms | 48262 | 30 | 1.24271e+06 | 34526.7 | 1(Win) |
| fmt::format_to | 929.572 | 0.051907 | 21.083ms | 48262 | 30 | 19816.1 | 49513.3 | 2(Loss) |
| std::to_chars | 460.462 | 0.829244 | 18.0448ms | 48262 | 30 | 2.06115e+07 | 99956.7 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1485.4 | 0.36453 | 56.4638ms | 483128 | 30 | 3.83552e+07 | 310183 | 1(Win) |
| jeaiii::to_text | 1280.74 | 1.32865 | 64.3527ms | 483128 | 30 | 6.85403e+08 | 359750 | 2(Loss) |
| fmt::format_to | 876.639 | 1.59424 | 95.0287ms | 483128 | 30 | 2.10625e+09 | 525583 | 3(Loss) |
| std::to_chars | 456.491 | 0.836082 | 190.965ms | 483128 | 30 | 2.13639e+09 | 1.00932e+06 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2447.76 | 1.42843 | 0.1078ms | 1001 | 30 | 931.034 | 390 | 1(Win) |
| jeaiii::to_text | 2186.17 | 2.04929 | 0.0978ms | 1001 | 30 | 2402.3 | 436.667 | 2(Loss) |
| fmt::format_to | 1439.14 | 1.34903 | 0.1536ms | 1001 | 30 | 2402.3 | 663.333 | 3(Loss) |
| std::to_chars | 680.257 | 0.23753 | 0.3058ms | 1001 | 30 | 333.333 | 1403.33 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2156.01 | 0.177559 | 0.8765ms | 10000 | 30 | 1850.57 | 4423.33 | 1(Win) |
| jeaiii::to_text | 2094.45 | 0.203458 | 0.8551ms | 10000 | 30 | 2574.71 | 4553.33 | 2(Loss) |
| fmt::format_to | 1256.49 | 1.00746 | 1.4078ms | 10000 | 30 | 175414 | 7590 | 3(Loss) |
| std::to_chars | 495.845 | 0.0518934 | 3.2142ms | 10000 | 30 | 2988.51 | 19233.3 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1056.48 | 0.304806 | 17.0264ms | 99765 | 30 | 2.26047e+06 | 90056.7 | 1(Win) |
| jeaiii::to_text | 961.983 | 0.142123 | 17.6559ms | 99765 | 30 | 592747 | 98903.3 | 2(Loss) |
| fmt::format_to | 746.027 | 1.5292 | 54.4899ms | 99765 | 30 | 1.14104e+08 | 127533 | 3(Loss) |
| std::to_chars | 436.938 | 1.09835 | 97.7515ms | 99765 | 30 | 1.71602e+08 | 217750 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 945.46 | 0.918785 | 182.799ms | 998135 | 30 | 2.56709e+09 | 1.00681e+06 | 1(Win) |
| jeaiii::to_text | 888.858 | 0.63946 | 191.242ms | 998135 | 30 | 1.4069e+09 | 1.07092e+06 | 2(Loss) |
| fmt::format_to | 706.502 | 0.543634 | 245.7ms | 998135 | 30 | 1.60948e+09 | 1.34734e+06 | 3(Loss) |
| std::to_chars | 424.012 | 0.815607 | 403.351ms | 998135 | 30 | 1.00579e+10 | 2.24497e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2375.1 | 1.76853 | 0.0997ms | 1046 | 30 | 1655.17 | 420 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2302.02 | 2.0201 | 0.0959ms | 1046 | 30 | 2298.85 | 433.333 | 1(Tie) |
| fmt::format_to | 1438.76 | 0.668085 | 0.142ms | 1046 | 30 | 643.678 | 693.333 | 3(Loss) |
| std::to_chars | 1216.52 | 0.905831 | 0.1652ms | 1046 | 30 | 1655.17 | 820 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2004.63 | 0.230223 | 0.9231ms | 10482 | 30 | 3954.02 | 4986.67 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2003.29 | 0.147295 | 0.9645ms | 10482 | 30 | 1620.69 | 4990 | 1(Tie) |
| fmt::format_to | 1448.06 | 0.0845894 | 1.2793ms | 10482 | 30 | 1022.99 | 6903.33 | 3(Loss) |
| std::to_chars | 538.02 | 2.46132 | 3.3285ms | 10482 | 30 | 6.27407e+06 | 18580 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1520.83 | 0.336503 | 12.1528ms | 104825 | 30 | 1.46782e+06 | 65733.3 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1512.39 | 0.27659 | 12.1681ms | 104825 | 30 | 1.00276e+06 | 66100 | 1(Tie) |
| fmt::format_to | 1099.85 | 0.209142 | 16.7021ms | 104825 | 30 | 1.08409e+06 | 90893.3 | 3(Loss) |
| std::to_chars | 483.822 | 1.80623 | 37.2206ms | 104825 | 30 | 4.17856e+08 | 206623 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1370.77 | 0.864708 | 131.91ms | 1048286 | 30 | 1.19313e+09 | 729313 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1344.82 | 0.632757 | 139.897ms | 1048286 | 30 | 6.63781e+08 | 743387 | 1(Tie) |
| fmt::format_to | 952.607 | 1.58932 | 188.505ms | 1048286 | 30 | 8.34598e+09 | 1.04946e+06 | 3(Loss) |
| std::to_chars | 505.671 | 0.954448 | 356.634ms | 1048286 | 30 | 1.06819e+10 | 1.97702e+06 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2488.76 | 1.94804 | 0.3819ms | 946 | 48 | 2393.62 | 362.5 | 1(Win) |
| jeaiii::to_text | 2066.05 | 2.04929 | 0.0971ms | 946 | 30 | 2402.3 | 436.667 | 2(Loss) |
| fmt::format_to | 1253.02 | 1.03164 | 0.1491ms | 946 | 30 | 1655.17 | 720 | 3(Loss) |
| std::to_chars | 594.841 | 0.456294 | 0.3052ms | 946 | 30 | 1436.78 | 1516.67 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2175.43 | 0.214937 | 0.7971ms | 9497 | 30 | 2402.3 | 4163.33 | 1(Win) |
| jeaiii::to_text | 1881.66 | 0.131145 | 0.9112ms | 9497 | 30 | 1195.4 | 4813.33 | 2(Loss) |
| fmt::format_to | 1200.67 | 0.121987 | 1.6566ms | 9497 | 30 | 2540.23 | 7543.33 | 3(Loss) |
| std::to_chars | 502.611 | 1.79129 | 7.6034ms | 9497 | 30 | 3.12579e+06 | 18020 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1426.6 | 0.208402 | 28.376ms | 94845 | 30 | 523782 | 63403.3 | 1(Win) |
| jeaiii::to_text | 1380.44 | 0.474715 | 12.6502ms | 94845 | 30 | 2.90254e+06 | 65523.3 | 2(Loss) |
| fmt::format_to | 969.051 | 0.543733 | 17.5365ms | 94845 | 30 | 7.72731e+06 | 93340 | 3(Loss) |
| std::to_chars | 488.952 | 1.38878 | 33.6899ms | 94845 | 30 | 1.98008e+08 | 184990 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1219.69 | 0.844433 | 674.472ms | 948610 | 48 | 1.883e+09 | 741719 | 1(Win) |
| jeaiii::to_text | 1180.15 | 0.938506 | 138.817ms | 948610 | 30 | 1.55274e+09 | 766570 | 2(Loss) |
| fmt::format_to | 879.3 | 1.20511 | 190.077ms | 948610 | 30 | 4.61189e+09 | 1.02885e+06 | 3(Loss) |
| std::to_chars | 446.714 | 2.32213 | 375.279ms | 948610 | 30 | 6.63454e+10 | 2.02515e+06 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2991.9 | 2.0146 | 0.0931ms | 983 | 30 | 1195.4 | 313.333 | 1(Win) |
| jeaiii::to_text | 2180.14 | 1.97898 | 0.1141ms | 983 | 30 | 2172.41 | 430 | 2(Loss) |
| fmt::format_to | 1503.95 | 1.26001 | 0.131ms | 983 | 30 | 1850.57 | 623.333 | 3(Loss) |
| std::to_chars | 627.765 | 0.310182 | 0.2984ms | 983 | 30 | 643.678 | 1493.33 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2476.68 | 0.244948 | 0.7193ms | 9756 | 30 | 2540.23 | 3756.67 | 1(Win) |
| jeaiii::to_text | 2034.41 | 0.255371 | 0.9439ms | 9756 | 30 | 4091.95 | 4573.33 | 2(Loss) |
| fmt::format_to | 1413.99 | 0.112885 | 1.2131ms | 9756 | 30 | 1655.17 | 6580 | 3(Loss) |
| std::to_chars | 612.377 | 1.04709 | 2.7441ms | 9756 | 30 | 759264 | 15193.3 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2153.51 | 0.343195 | 8.0663ms | 97385 | 30 | 657195 | 43126.7 | 1(Win) |
| jeaiii::to_text | 1843.71 | 0.32108 | 9.4799ms | 97385 | 30 | 784782 | 50373.3 | 2(Loss) |
| fmt::format_to | 1264.45 | 1.85484 | 30.6201ms | 97385 | 30 | 5.56826e+07 | 73450 | 3(Loss) |
| std::to_chars | 591.652 | 0.457389 | 29.2972ms | 97385 | 30 | 1.54648e+07 | 156973 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1925.72 | 0.395157 | 88.6129ms | 974149 | 30 | 1.09024e+08 | 482427 | 1(Win) |
| jeaiii::to_text | 1717.83 | 0.557406 | 98.6164ms | 974149 | 30 | 2.72617e+08 | 540810 | 2(Loss) |
| fmt::format_to | 1222.15 | 2.42666 | 138.991ms | 974149 | 30 | 1.0208e+10 | 760153 | 3(Loss) |
| std::to_chars | 564.021 | 1.89387 | 287.586ms | 974149 | 30 | 2.91932e+10 | 1.64714e+06 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3230.78 | 1.49292 | 0.1323ms | 1931 | 30 | 2172.41 | 570 | 1(Win) |
| jeaiii::to_text | 1924.96 | 0.961867 | 0.214ms | 1931 | 30 | 2540.23 | 956.667 | 2(Loss) |
| fmt::format_to | 1032.64 | 0.388063 | 0.3406ms | 1931 | 30 | 1436.78 | 1783.33 | 3(Loss) |
| std::to_chars | 536.372 | 0.254964 | 0.6792ms | 1931 | 30 | 2298.85 | 3433.33 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2701.21 | 0.139292 | 1.3032ms | 19336 | 30 | 2712.64 | 6826.67 | 1(Win) |
| jeaiii::to_text | 1746.79 | 0.117415 | 1.9575ms | 19336 | 30 | 4609.2 | 10556.7 | 2(Loss) |
| fmt::format_to | 935.736 | 1.52193 | 3.6649ms | 19336 | 30 | 2.69857e+06 | 19706.7 | 3(Loss) |
| std::to_chars | 501.349 | 2.00835 | 33.259ms | 19336 | 48 | 2.61922e+07 | 36781.2 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1915.2 | 1.12699 | 43.2778ms | 193855 | 30 | 3.55049e+07 | 96530 | 1(Win) |
| jeaiii::to_text | 1384.9 | 1.53297 | 24.339ms | 193855 | 30 | 1.25634e+08 | 133493 | 2(Loss) |
| fmt::format_to | 885.711 | 0.100865 | 39.3948ms | 193855 | 30 | 1.32976e+06 | 208730 | 3(Loss) |
| std::to_chars | 506.533 | 0.744206 | 153.804ms | 193855 | 30 | 2.21333e+08 | 364980 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1729.91 | 1.48838 | 189.126ms | 1938484 | 30 | 7.58967e+09 | 1.06866e+06 | 1(Win) |
| jeaiii::to_text | 1325.34 | 0.631816 | 254.847ms | 1938484 | 30 | 2.33009e+09 | 1.39487e+06 | 2(Loss) |
| fmt::format_to | 832.936 | 0.977829 | 407.257ms | 1938484 | 30 | 1.41302e+10 | 2.21948e+06 | 3(Loss) |
| std::to_chars | 506.499 | 0.940238 | 668.635ms | 1938484 | 30 | 3.53316e+10 | 3.64992e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2887.16 | 1.4013 | 0.1441ms | 1988 | 30 | 2540.23 | 656.667 | 1(Win) |
| jeaiii::to_text | 1877.13 | 0.55157 | 0.2151ms | 1988 | 30 | 931.034 | 1010 | 2(Loss) |
| fmt::format_to | 1021.13 | 0.495612 | 0.3561ms | 1988 | 30 | 2540.23 | 1856.67 | 3(Loss) |
| std::to_chars | 568.203 | 0.268188 | 0.6238ms | 1988 | 30 | 2402.3 | 3336.67 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2920.06 | 0.0713356 | 1.2246ms | 19882 | 30 | 643.678 | 6493.33 | 1(Win) |
| jeaiii::to_text | 1895.46 | 0.0583754 | 1.8492ms | 19882 | 30 | 1022.99 | 10003.3 | 2(Loss) |
| fmt::format_to | 1027.69 | 0.0503239 | 3.4532ms | 19882 | 30 | 2586.21 | 18450 | 3(Loss) |
| std::to_chars | 578.019 | 0.0372166 | 5.9666ms | 19882 | 30 | 4471.26 | 32803.3 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2812.93 | 0.384791 | 12.888ms | 198762 | 30 | 2.01706e+06 | 67386.7 | 1(Win) |
| jeaiii::to_text | 1825.45 | 0.847485 | 45.2122ms | 198762 | 30 | 2.32335e+07 | 103840 | 2(Loss) |
| fmt::format_to | 1015.51 | 0.203938 | 81.2133ms | 198762 | 30 | 4.34731e+06 | 186660 | 3(Loss) |
| std::to_chars | 564.581 | 1.57232 | 62.3425ms | 198762 | 30 | 8.3602e+08 | 335743 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2729.49 | 0.800398 | 126.149ms | 1988143 | 30 | 9.27396e+08 | 694650 | 1(Win) |
| jeaiii::to_text | 1835.22 | 0.401296 | 189.088ms | 1988143 | 30 | 5.15667e+08 | 1.03314e+06 | 2(Loss) |
| fmt::format_to | 986.237 | 0.800611 | 346.348ms | 1988143 | 30 | 7.10718e+09 | 1.9225e+06 | 3(Loss) |
| std::to_chars | 544.137 | 1.63453 | 622.81ms | 1988143 | 30 | 9.7316e+10 | 3.48449e+06 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2779.91 | 1.43259 | 0.1407ms | 1885 | 30 | 2574.71 | 646.667 | 1(Win) |
| jeaiii::to_text | 1768.21 | 0.680701 | 0.2021ms | 1885 | 30 | 1436.78 | 1016.67 | 2(Loss) |
| fmt::format_to | 975.231 | 0.499197 | 0.3506ms | 1885 | 30 | 2540.23 | 1843.33 | 3(Loss) |
| std::to_chars | 546.406 | 0.169327 | 0.6265ms | 1885 | 30 | 931.034 | 3290 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2722.37 | 0.127241 | 1.3551ms | 18888 | 30 | 2126.44 | 6616.67 | 1(Win) |
| jeaiii::to_text | 1810.96 | 0.0931378 | 1.8255ms | 18888 | 30 | 2574.71 | 9946.67 | 2(Loss) |
| fmt::format_to | 996.662 | 0.0454358 | 3.3032ms | 18888 | 30 | 2022.99 | 18073.3 | 3(Loss) |
| std::to_chars | 476.703 | 0.486117 | 7.3123ms | 18888 | 30 | 1.01223e+06 | 37786.7 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2645.13 | 0.517381 | 12.1665ms | 188754 | 30 | 3.71913e+06 | 68053.3 | 1(Win) |
| jeaiii::to_text | 1775.76 | 0.204277 | 95.6868ms | 188754 | 48 | 2.05828e+06 | 101371 | 2(Loss) |
| fmt::format_to | 956.008 | 2.13023 | 33.663ms | 188754 | 30 | 4.82661e+08 | 188293 | 3(Loss) |
| std::to_chars | 526.216 | 1.02804 | 319.87ms | 188754 | 48 | 5.93642e+08 | 342083 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2613.1 | 0.556683 | 123.922ms | 1887835 | 30 | 4.41321e+08 | 688983 | 1(Win) |
| jeaiii::to_text | 1681.58 | 1.81265 | 188.346ms | 1887835 | 30 | 1.12991e+10 | 1.07065e+06 | 2(Loss) |
| fmt::format_to | 963.021 | 0.947877 | 338.664ms | 1887835 | 30 | 9.42068e+09 | 1.86951e+06 | 3(Loss) |
| std::to_chars | 549.768 | 0.383613 | 621.217ms | 1887835 | 30 | 4.73453e+09 | 3.2748e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3738.53 | 0.671141 | 0.1309ms | 1947 | 30 | 333.333 | 496.667 | 1(Win) |
| jeaiii::to_text | 2330.72 | 0.41841 | 0.164ms | 1947 | 30 | 333.333 | 796.667 | 2(Loss) |
| fmt::format_to | 1005.49 | 0.501667 | 0.8057ms | 1947 | 30 | 2574.71 | 1846.67 | 3(Loss) |
| std::to_chars | 486.499 | 0.181322 | 0.7311ms | 1947 | 30 | 1436.78 | 3816.67 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4685.74 | 0.233352 | 0.8517ms | 19375 | 30 | 2540.23 | 3943.33 | 1(Win) |
| vn::to_chars | 3194.95 | 0.145575 | 1.1157ms | 19375 | 30 | 2126.44 | 5783.33 | 2(Loss) |
| fmt::format_to | 852.805 | 2.0995 | 3.8542ms | 19375 | 30 | 6.20782e+06 | 21666.7 | 3(Loss) |
| std::to_chars | 488.563 | 0.934135 | 6.793ms | 19375 | 30 | 3.74441e+06 | 37820 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2229.89 | 0.196174 | 14.9568ms | 193993 | 30 | 794713 | 82966.7 | 1(Win) |
| jeaiii::to_text | 1753.11 | 1.2324 | 19.3903ms | 193993 | 30 | 5.07429e+07 | 105530 | 2(Loss) |
| fmt::format_to | 795.349 | 0.120302 | 44.831ms | 193993 | 30 | 2.34921e+06 | 232610 | 3(Loss) |
| std::to_chars | 490.247 | 0.461904 | 70.7033ms | 193993 | 30 | 9.11524e+07 | 377373 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1973.57 | 1.55906 | 164.611ms | 1939808 | 30 | 6.40709e+09 | 937360 | 1(Win) |
| jeaiii::to_text | 1603.73 | 1.31382 | 207.355ms | 1939808 | 30 | 6.89049e+09 | 1.15353e+06 | 2(Loss) |
| fmt::format_to | 764.852 | 0.228765 | 439.94ms | 1939808 | 30 | 9.18464e+08 | 2.4187e+06 | 3(Loss) |
| std::to_chars | 470.08 | 1.03917 | 711.45ms | 1939808 | 30 | 5.01732e+10 | 3.93538e+06 | 4(Loss) |
