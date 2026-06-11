# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 487.231 | 1.80524 | 1.81709ms | 1000 | 48 | 59929.4 | 1957.33 | 1(Win) |
| std::from_chars | 336.623 | 2.40964 | 0.775936ms | 1000 | 30 | 139810 | 2833.07 | 2(Loss) |
| strtoll/strtoull | 110.434 | 1.05345 | 1.63507ms | 1000 | 30 | 248284 | 8635.73 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 276.973 | 0.280125 | 6.48781ms | 10000 | 30 | 279093 | 34432 | 1(Win) |
| std::from_chars | 231.865 | 0.285197 | 7.46394ms | 10000 | 30 | 412801 | 41130.7 | 2(Loss) |
| strtoll/strtoull | 83.3398 | 0.157643 | 20.83ms | 10000 | 30 | 976260 | 114432 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 195.611 | 0.377833 | 86.6481ms | 100000 | 30 | 1.01796e+08 | 487535 | 1(Win) |
| vn::from_chars | 141.188 | 0.202902 | 121.915ms | 100000 | 30 | 5.63507e+07 | 675465 | 2(Loss) |
| strtoll/strtoull | 76.0165 | 0.121111 | 225.995ms | 100000 | 30 | 6.92579e+07 | 1.25456e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 469.574 | 1.59137 | 0.423936ms | 1000 | 30 | 31336.8 | 2030.93 | 1(Win) |
| std::from_chars | 328.702 | 2.12933 | 0.610048ms | 1000 | 30 | 114500 | 2901.33 | 2(Loss) |
| strtoll/strtoull | 110.872 | 1.11997 | 1.61792ms | 1000 | 30 | 278415 | 8601.6 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.001 | 0.519862 | 5.92486ms | 10000 | 30 | 757506 | 30566.4 | 1(Win) |
| std::from_chars | 232.831 | 0.0947623 | 7.52691ms | 10000 | 30 | 45197.2 | 40960 | 2(Loss) |
| strtoll/strtoull | 110.466 | 0.206367 | 15.582ms | 10000 | 30 | 952231 | 86331.7 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.824 | 0.0956626 | 74.9949ms | 100000 | 30 | 4.72733e+06 | 414959 | 1(Win) |
| std::from_chars | 203.664 | 0.237419 | 84.747ms | 100000 | 30 | 3.70786e+07 | 468258 | 2(Loss) |
| strtoll/strtoull | 108.282 | 0.0637502 | 158.7ms | 100000 | 30 | 9.45745e+06 | 880734 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 298.023 | 2.32527 | 0.595968ms | 1000 | 30 | 166100 | 3200 | 1(Win) |
| strtoll/strtoull | 106.033 | 2.42107 | 1.64301ms | 1000 | 30 | 1.42251e+06 | 8994.13 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.865 | 0.366278 | 4.43802ms | 10000 | 30 | 226664 | 23731.2 | 1(Win) |
| std::from_chars | 227.8 | 0.428633 | 7.68ms | 10000 | 30 | 966016 | 41864.5 | 2(Loss) |
| strtoll/strtoull | 110.806 | 0.203891 | 15.5272ms | 10000 | 30 | 923832 | 86067.2 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 257.568 | 0.112581 | 66.966ms | 100000 | 30 | 5.21275e+06 | 370261 | 1(Win) |
| std::from_chars | 198.629 | 0.459997 | 87.04ms | 100000 | 30 | 1.46334e+08 | 480128 | 2(Loss) |
| strtoll/strtoull | 109.689 | 0.190255 | 156.543ms | 100000 | 30 | 8.20858e+07 | 869436 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 491.247 | 1.9168 | 2.2551ms | 1000 | 48 | 66465.6 | 1941.33 | 1(Win) |
| std::from_chars | 351.996 | 2.35101 | 3.07405ms | 1000 | 48 | 194749 | 2709.33 | 2(Loss) |
| strtoll/strtoull | 103.672 | 0.8109 | 4.0151ms | 1000 | 30 | 166928 | 9198.93 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 334.207 | 0.337964 | 5.29997ms | 10000 | 30 | 279018 | 28535.5 | 1(Win) |
| std::from_chars | 195.553 | 0.417186 | 8.85786ms | 10000 | 30 | 1.24179e+06 | 48768 | 2(Loss) |
| strtoll/strtoull | 102.578 | 0.207945 | 17.3512ms | 10000 | 30 | 1.12127e+06 | 92970.7 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 183.681 | 0.112851 | 93.834ms | 100000 | 30 | 1.02992e+07 | 519202 | 1(Win) |
| std::from_chars | 164.491 | 0.379182 | 104.501ms | 100000 | 30 | 1.44988e+08 | 579772 | 2(Loss) |
| strtoll/strtoull | 100.967 | 0.0940913 | 170.632ms | 100000 | 30 | 2.36951e+07 | 944538 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 191.041 | 1.42843 | 0.244224ms | 200 | 30 | 6101.63 | 998.4 | 1(Win) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 541.86 | 2.06 | 3.28704ms | 2000 | 48 | 252383 | 3520 | 1(Win) |
| std::from_chars | 353.667 | 1.62428 | 2.16986ms | 2000 | 30 | 230205 | 5393.07 | 2(Loss) |
| strtoll/strtoull | 146.665 | 0.146217 | 2.40307ms | 2000 | 30 | 10847.3 | 13004.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.685 | 0.163267 | 11.5709ms | 20000 | 30 | 274272 | 58564.3 | 1(Win) |
| std::from_chars | 269.916 | 2.28935 | 12.695ms | 20000 | 30 | 7.85143e+07 | 70664.5 | 2(Loss) |
| strtoll/strtoull | 128.843 | 0.106483 | 26.8091ms | 20000 | 30 | 745453 | 148036 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 285.135 | 0.490781 | 120.67ms | 200000 | 30 | 3.23337e+08 | 668928 | 1(Win) |
| vn::from_chars | 231.97 | 0.470893 | 148.82ms | 200000 | 30 | 4.49738e+08 | 822238 | 2(Loss) |
| strtoll/strtoull | 127.787 | 0.0929127 | 269.056ms | 200000 | 30 | 5.76976e+07 | 1.4926e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 509.151 | 2.46248 | 0.754944ms | 2000 | 30 | 255289 | 3746.13 | 1(Win) |
| std::from_chars | 355.354 | 1.73379 | 2.35597ms | 2000 | 30 | 259809 | 5367.47 | 2(Loss) |
| strtoll/strtoull | 170.364 | 0.629159 | 2.0329ms | 2000 | 30 | 148850 | 11195.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 385.109 | 0.200929 | 10.101ms | 20000 | 30 | 297097 | 49527.5 | 1(Win) |
| std::from_chars | 243.086 | 1.42308 | 14.9588ms | 20000 | 30 | 3.74041e+07 | 78464 | 2(Loss) |
| strtoll/strtoull | 169.331 | 0.321781 | 20.662ms | 20000 | 30 | 3.9412e+06 | 112640 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.972 | 0.368231 | 109.685ms | 200000 | 30 | 1.54021e+08 | 615330 | 1(Win) |
| std::from_chars | 277.245 | 0.20036 | 124.909ms | 200000 | 30 | 5.70004e+07 | 687966 | 2(Loss) |
| strtoll/strtoull | 167.296 | 0.139997 | 209.911ms | 200000 | 30 | 7.64273e+07 | 1.1401e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 575.89 | 2.08918 | 4.576ms | 2000 | 48 | 229812 | 3312 | 1(Win) |
| std::from_chars | 359.931 | 1.73564 | 1.03706ms | 2000 | 30 | 253783 | 5299.2 | 2(Loss) |
| strtoll/strtoull | 171.804 | 0.524239 | 2.07795ms | 2000 | 30 | 101618 | 11101.9 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 495.384 | 0.237709 | 7.10502ms | 20000 | 30 | 251297 | 38502.4 | 1(Win) |
| std::from_chars | 286.084 | 0.587595 | 12.7611ms | 20000 | 30 | 4.60417e+06 | 66670.9 | 2(Loss) |
| strtoll/strtoull | 169.691 | 0.157087 | 20.3069ms | 20000 | 30 | 935282 | 112401 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.236 | 0.869886 | 92.66ms | 200000 | 30 | 6.25932e+08 | 525099 | 1(Win) |
| std::from_chars | 277.135 | 0.304312 | 120.284ms | 200000 | 30 | 1.31595e+08 | 688239 | 2(Loss) |
| strtoll/strtoull | 170.33 | 0.320155 | 200.656ms | 200000 | 30 | 3.85584e+08 | 1.1198e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 550.536 | 2.49847 | 2.21286ms | 2000 | 30 | 224781 | 3464.53 | 1(Win) |
| std::from_chars | 411.634 | 2.12496 | 0.868864ms | 2000 | 30 | 290844 | 4633.6 | 2(Loss) |
| strtoll/strtoull | 188.782 | 0.566354 | 1.888ms | 2000 | 30 | 98228.7 | 10103.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 511.364 | 0.246587 | 6.86182ms | 20000 | 30 | 253783 | 37299.2 | 1(Win) |
| std::from_chars | 395.746 | 0.263353 | 8.67994ms | 20000 | 30 | 483309 | 48196.3 | 2(Loss) |
| strtoll/strtoull | 186.997 | 0.150148 | 18.5211ms | 20000 | 30 | 703646 | 101999 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 428.326 | 0.133385 | 79.8858ms | 200000 | 30 | 1.0584e+07 | 445303 | 1(Win) |
| std::from_chars | 282.611 | 0.438377 | 123.64ms | 200000 | 30 | 2.62602e+08 | 674901 | 2(Loss) |
| strtoll/strtoull | 186.252 | 0.197136 | 185.164ms | 200000 | 30 | 1.22267e+08 | 1.02407e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 635.896 | 0.392683 | 1.15507ms | 4000 | 30 | 16647.7 | 5998.93 | 1(Win) |
| std::from_chars | 388.051 | 0.701888 | 1.84499ms | 4000 | 30 | 142823 | 9830.4 | 2(Loss) |
| strtoll/strtoull | 201.367 | 0.224447 | 8.50714ms | 4000 | 30 | 54236.7 | 18944 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 423.088 | 0.291466 | 16.4401ms | 40000 | 30 | 2.07184e+06 | 90163.2 | 1(Win) |
| std::from_chars | 359.266 | 1.44024 | 19.5372ms | 40000 | 30 | 7.01582e+07 | 106180 | 2(Loss) |
| strtoll/strtoull | 192.787 | 0.120752 | 36.329ms | 40000 | 30 | 1.71267e+06 | 197871 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 345.025 | 0.220768 | 197.044ms | 400000 | 30 | 1.78736e+08 | 1.10563e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 344.889 | 0.153161 | 200.378ms | 400000 | 30 | 8.60948e+07 | 1.10607e+06 | 1(Tie) |
| strtoll/strtoull | 192.101 | 0.138845 | 357.789ms | 400000 | 30 | 2.28056e+08 | 1.98577e+06 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 587.431 | 1.43306 | 1.24493ms | 4000 | 30 | 259809 | 6493.87 | 1(Win) |
| std::from_chars | 396.307 | 0.950834 | 1.77587ms | 4000 | 30 | 251297 | 9625.6 | 2(Loss) |
| strtoll/strtoull | 233.927 | 0.522293 | 3.02618ms | 4000 | 30 | 217625 | 16307.2 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 456.671 | 0.873165 | 14.8529ms | 40000 | 30 | 1.59598e+07 | 83532.8 | 1(Win) |
| std::from_chars | 349.246 | 0.670238 | 19.6119ms | 40000 | 30 | 1.60782e+07 | 109227 | 2(Loss) |
| strtoll/strtoull | 231.014 | 0.139356 | 29.727ms | 40000 | 30 | 1.58861e+06 | 165129 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 429.197 | 0.124049 | 160.053ms | 400000 | 30 | 3.64684e+07 | 888798 | 1(Win) |
| std::from_chars | 352.637 | 0.122409 | 195.416ms | 400000 | 30 | 5.26027e+07 | 1.08176e+06 | 2(Loss) |
| strtoll/strtoull | 231.183 | 0.076919 | 297.674ms | 400000 | 30 | 4.83276e+07 | 1.65007e+06 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 673.245 | 1.55809 | 1.09901ms | 4000 | 30 | 233820 | 5666.13 | 1(Win) |
| std::from_chars | 401.288 | 0.981081 | 1.79789ms | 4000 | 30 | 260939 | 9506.13 | 2(Loss) |
| strtoll/strtoull | 232.588 | 0.630302 | 3.79418ms | 4000 | 30 | 320599 | 16401.1 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 588.668 | 0.243843 | 13.1602ms | 40000 | 30 | 749069 | 64802.1 | 1(Win) |
| std::from_chars | 360.454 | 0.420355 | 19.232ms | 40000 | 30 | 5.93711e+06 | 105830 | 2(Loss) |
| strtoll/strtoull | 230.359 | 0.145196 | 29.8929ms | 40000 | 30 | 1.73437e+06 | 165598 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 375.328 | 2.38012 | 173.59ms | 400000 | 30 | 1.75556e+10 | 1.01636e+06 | 1(Win) |
| std::from_chars | 311.54 | 0.412386 | 213.215ms | 400000 | 30 | 7.64931e+08 | 1.22447e+06 | 2(Loss) |
| strtoll/strtoull | 184.259 | 2.15815 | 1905.81ms | 400000 | 48 | 9.58224e+10 | 2.07029e+06 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 416.234 | 1.28738 | 2.22285ms | 4000 | 30 | 417623 | 9164.8 | 1(Win) |
| strtoll/strtoull | 222.184 | 2.22189 | 5.38317ms | 4000 | 30 | 4.36575e+06 | 17169.1 | 2(Loss) |
| vn::from_chars | 200.824 | 0.277179 | 6.06003ms | 4000 | 30 | 83162.9 | 18995.2 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 554.221 | 1.68118 | 36.0911ms | 40000 | 30 | 4.01701e+07 | 68829.9 | 1(Win) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 406.196 | 0.709832 | 174.83ms | 400000 | 30 | 1.33316e+09 | 939127 | 1(Win) |
| strtoll/strtoull | 230.304 | 0.286981 | 1565.99ms | 400000 | 48 | 1.08458e+09 | 1.65637e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 644.607 | 2.20647 | 5.12717ms | 8000 | 30 | 2.046e+06 | 11835.7 | 1(Win) |
| std::from_chars | 468.099 | 0.528949 | 2.95706ms | 8000 | 30 | 222973 | 16298.7 | 2(Loss) |
| strtoll/strtoull | 256.548 | 0.277129 | 5.536ms | 8000 | 30 | 203764 | 29738.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 630.026 | 1.20968 | 22.7302ms | 80000 | 30 | 6.43766e+07 | 121097 | 1(Win) |
| std::from_chars | 453.109 | 0.244901 | 166.592ms | 80000 | 48 | 8.16199e+06 | 168379 | 2(Loss) |
| strtoll/strtoull | 263.14 | 0.361026 | 51.892ms | 80000 | 30 | 3.28705e+07 | 289937 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 562.626 | 0.114412 | 244.573ms | 800000 | 30 | 7.22116e+07 | 1.35603e+06 | 1(Win) |
| std::from_chars | 471.563 | 0.218342 | 292.128ms | 800000 | 30 | 3.74366e+08 | 1.61789e+06 | 2(Loss) |
| strtoll/strtoull | 250.322 | 0.631444 | 584.495ms | 800000 | 30 | 1.11115e+10 | 3.04783e+06 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 652.13 | 0.72801 | 2.15603ms | 8000 | 30 | 217625 | 11699.2 | 1(Win) |
| std::from_chars | 439.995 | 0.620884 | 4.44979ms | 8000 | 30 | 347717 | 17339.7 | 2(Loss) |
| strtoll/strtoull | 304.312 | 0.223998 | 6.09485ms | 8000 | 30 | 94612.9 | 25070.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 654.708 | 0.176691 | 22.497ms | 80000 | 30 | 1.27185e+06 | 116531 | 1(Win) |
| std::from_chars | 440.147 | 0.172488 | 32.0581ms | 80000 | 30 | 2.68178e+06 | 173338 | 2(Loss) |
| strtoll/strtoull | 306.608 | 0.182045 | 47.4639ms | 80000 | 30 | 6.15586e+06 | 248832 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 655.938 | 0.453603 | 218.801ms | 800000 | 30 | 8.35081e+08 | 1.16313e+06 | 1(Win) |
| std::from_chars | 473.376 | 0.0392572 | 293.893ms | 800000 | 30 | 1.20096e+07 | 1.6117e+06 | 2(Loss) |
| strtoll/strtoull | 323.513 | 0.440932 | 445.095ms | 800000 | 30 | 3.24386e+09 | 2.3583e+06 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 644.607 | 0.807858 | 2.21901ms | 8000 | 30 | 274272 | 11835.7 | 1(Win) |
| std::from_chars | 430.255 | 1.66981 | 3.296ms | 8000 | 30 | 2.63018e+06 | 17732.3 | 2(Loss) |
| strtoll/strtoull | 304.312 | 0.201463 | 4.59981ms | 8000 | 30 | 76534 | 25070.9 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 719.805 | 0.172342 | 19.2259ms | 80000 | 30 | 1.00104e+06 | 105993 | 1(Win) |
| std::from_chars | 472.578 | 0.388156 | 29.2803ms | 80000 | 30 | 1.17806e+07 | 161442 | 2(Loss) |
| strtoll/strtoull | 313.445 | 0.111785 | 44.1718ms | 80000 | 30 | 2.22099e+06 | 243405 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 628.467 | 1.06342 | 510.312ms | 800000 | 30 | 4.99975e+09 | 1.21397e+06 | 1(Win) |
| std::from_chars | 452.007 | 0.856859 | 325.243ms | 800000 | 30 | 6.27524e+09 | 1.68789e+06 | 2(Loss) |
| strtoll/strtoull | 277.173 | 0.30551 | 2577.77ms | 800000 | 48 | 3.39445e+09 | 2.75258e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 262.191 | 1.95512 | 1.89594ms | 800 | 30 | 97098.7 | 2909.87 | 1(Win) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 645.072 | 0.626129 | 2.18803ms | 8000 | 30 | 164518 | 11827.2 | 1(Win) |
| std::from_chars | 424.535 | 0.240508 | 3.35386ms | 8000 | 30 | 56044.6 | 17971.2 | 2(Loss) |
| strtoll/strtoull | 272.832 | 0.156321 | 5.13792ms | 8000 | 30 | 57325.2 | 27963.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 592.178 | 1.25518 | 22.784ms | 80000 | 30 | 7.84531e+07 | 128836 | 1(Win) |
| std::from_chars | 449.507 | 0.366257 | 32.3548ms | 80000 | 30 | 1.15931e+07 | 169728 | 2(Loss) |
| strtoll/strtoull | 281.703 | 0.321967 | 48.702ms | 80000 | 30 | 2.28107e+07 | 270831 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 505.661 | 0.31393 | 275.77ms | 800000 | 30 | 6.7305e+08 | 1.5088e+06 | 1(Win) |
| std::from_chars | 443.192 | 0.418974 | 317.132ms | 800000 | 30 | 1.5606e+09 | 1.72146e+06 | 2(Loss) |
| strtoll/strtoull | 291.195 | 0.261098 | 490.401ms | 800000 | 30 | 1.40392e+09 | 2.62003e+06 | 3(Loss) |
