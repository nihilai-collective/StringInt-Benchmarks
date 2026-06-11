# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 504.768 | 2.0433 | 0.954417ms | 100 | 30 | 447.099 | 188.933 | 1(Win) |
| std::from_chars | 204.944 | 0.867855 | 1.36821ms | 100 | 30 | 489.264 | 465.333 | 2(Loss) |
| strtoll/strtoull | 107.464 | 0.600215 | 1.58967ms | 100 | 30 | 851.151 | 887.433 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 590.913 | 0.642926 | 0.480417ms | 1000 | 30 | 3229.96 | 1613.9 | 1(Win) |
| std::from_chars | 203.872 | 0.322257 | 2.14275ms | 1000 | 30 | 6817.27 | 4677.8 | 2(Loss) |
| strtoll/strtoull | 79.1162 | 0.177888 | 2.21767ms | 1000 | 30 | 13793.7 | 12054.1 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 333.421 | 0.434387 | 12.468ms | 10000 | 30 | 463113 | 28602.7 | 1(Win) |
| std::from_chars | 153.898 | 0.365547 | 11.3773ms | 10000 | 30 | 1.53937e+06 | 61968 | 2(Loss) |
| strtoll/strtoull | 73.5246 | 0.144561 | 23.3641ms | 10000 | 30 | 1.05478e+06 | 129708 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 136.613 | 0.33451 | 126.244ms | 100000 | 30 | 1.6359e+08 | 698086 | 1(Win) |
| vn::from_chars | 116.816 | 0.399646 | 148.617ms | 100000 | 30 | 3.19352e+08 | 816392 | 2(Loss) |
| strtoll/strtoull | 67.515 | 0.429618 | 246.075ms | 100000 | 30 | 1.10481e+09 | 1.41254e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 512.453 | 2.07128 | 1.42092ms | 100 | 30 | 445.748 | 186.1 | 1(Win) |
| std::from_chars | 199.014 | 0.909092 | 0.224333ms | 100 | 30 | 569.338 | 479.2 | 2(Loss) |
| strtoll/strtoull | 105.643 | 0.675738 | 2.02429ms | 100 | 30 | 1116.34 | 902.733 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 577.984 | 0.229763 | 1.55292ms | 1000 | 30 | 431.172 | 1650 | 1(Win) |
| std::from_chars | 209.214 | 0.0933377 | 0.866583ms | 1000 | 30 | 543.068 | 4558.37 | 2(Loss) |
| strtoll/strtoull | 94.8147 | 2.31618 | 1.78892ms | 1000 | 30 | 1.62823e+06 | 10058.3 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 410.891 | 0.314086 | 11.316ms | 10000 | 30 | 159428 | 23209.9 | 1(Win) |
| std::from_chars | 152.101 | 0.827296 | 11.1252ms | 10000 | 30 | 8.0719e+06 | 62699.9 | 2(Loss) |
| strtoll/strtoull | 101.57 | 0.161828 | 17.0326ms | 10000 | 30 | 692620 | 93893 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 213.155 | 0.169599 | 82.9477ms | 100000 | 30 | 1.72734e+07 | 447410 | 1(Win) |
| std::from_chars | 136.939 | 0.287541 | 126.779ms | 100000 | 30 | 1.20301e+08 | 696425 | 2(Loss) |
| strtoll/strtoull | 100.451 | 0.0909529 | 171.742ms | 100000 | 30 | 2.23691e+07 | 949396 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 553.711 | 1.53455 | 0.888ms | 100 | 30 | 209.564 | 172.233 | 1(Win) |
| std::from_chars | 200.802 | 0.905716 | 1.96796ms | 100 | 30 | 555.099 | 474.933 | 2(Loss) |
| strtoll/strtoull | 95.2373 | 0.50739 | 0.460375ms | 100 | 30 | 774.447 | 1001.37 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 450.853 | 0.538807 | 0.617917ms | 1000 | 30 | 3896.89 | 2115.27 | 1(Win) |
| std::from_chars | 201.6 | 0.241684 | 1.11858ms | 1000 | 30 | 3921.36 | 4730.53 | 2(Loss) |
| strtoll/strtoull | 95.9922 | 1.33983 | 8.904ms | 1000 | 48 | 850490 | 9934.92 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 154.688 | 0.86096 | 11.3091ms | 10000 | 30 | 8.45227e+06 | 61651.4 | 1(Win) |
| strtoll/strtoull | 102.753 | 0.265564 | 16.7791ms | 10000 | 30 | 1.82251e+06 | 92812.4 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 224.861 | 0.293962 | 76.5325ms | 100000 | 30 | 4.6631e+07 | 424116 | 1(Win) |
| std::from_chars | 137.389 | 0.171738 | 125.217ms | 100000 | 30 | 4.26334e+07 | 694140 | 2(Loss) |
| strtoll/strtoull | 101.58 | 0.158444 | 172.706ms | 100000 | 30 | 6.63833e+07 | 938840 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 524.093 | 2.05023 | 1.75254ms | 100 | 30 | 417.551 | 181.967 | 1(Win) |
| std::from_chars | 298.552 | 1.30298 | 0.090417ms | 100 | 30 | 519.702 | 319.433 | 2(Loss) |
| strtoll/strtoull | 95.2373 | 0.315451 | 2.23525ms | 100 | 30 | 299.344 | 1001.37 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 567.033 | 0.451151 | 0.850042ms | 1000 | 30 | 1727.22 | 1681.87 | 1(Win) |
| std::from_chars | 259.795 | 0.385854 | 1.25079ms | 1000 | 30 | 6018.74 | 3670.87 | 2(Loss) |
| strtoll/strtoull | 90.4311 | 0.0719788 | 1.917ms | 1000 | 30 | 1728.6 | 10545.9 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 393.314 | 0.0259861 | 11.6617ms | 10000 | 30 | 1191.04 | 24247.2 | 1(Win) |
| std::from_chars | 161.442 | 1.53636 | 11.0247ms | 10000 | 30 | 2.47102e+07 | 59072.4 | 2(Loss) |
| strtoll/strtoull | 88.0258 | 0.702046 | 19.6766ms | 10000 | 30 | 1.73553e+07 | 108340 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 175.306 | 0.474841 | 99.2325ms | 100000 | 30 | 2.00181e+08 | 544004 | 1(Win) |
| std::from_chars | 128.526 | 0.207684 | 128.713ms | 100000 | 30 | 7.12437e+07 | 742008 | 2(Loss) |
| strtoll/strtoull | 87.7822 | 0.333764 | 198.68ms | 100000 | 30 | 3.94445e+08 | 1.08641e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 686.344 | 1.31841 | 0.105375ms | 200 | 30 | 402.714 | 277.9 | 1(Win) |
| std::from_chars | 292.15 | 0.560539 | 0.150125ms | 200 | 30 | 401.775 | 652.867 | 2(Loss) |
| strtoll/strtoull | 138.851 | 0.448666 | 0.26275ms | 200 | 30 | 1139.54 | 1373.67 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 709.35 | 0.369338 | 0.690208ms | 2000 | 30 | 2958.74 | 2688.87 | 1(Win) |
| std::from_chars | 299.187 | 0.232742 | 2.74729ms | 2000 | 30 | 6604.58 | 6375.1 | 2(Loss) |
| strtoll/strtoull | 126.198 | 0.022618 | 2.76333ms | 2000 | 30 | 350.576 | 15113.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 502.78 | 0.028277 | 7.20196ms | 20000 | 30 | 3452.17 | 37936 | 1(Win) |
| std::from_chars | 256.988 | 0.164807 | 13.4425ms | 20000 | 30 | 448859 | 74219.4 | 2(Loss) |
| strtoll/strtoull | 114.072 | 0.347401 | 30.0862ms | 20000 | 30 | 1.01224e+07 | 167206 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 214.851 | 0.190174 | 160.51ms | 200000 | 30 | 8.55091e+07 | 887755 | 1(Win) |
| vn::from_chars | 204.569 | 0.274394 | 169.384ms | 200000 | 30 | 1.96358e+08 | 932372 | 2(Loss) |
| strtoll/strtoull | 119.554 | 0.0328861 | 288.722ms | 200000 | 30 | 8.2581e+06 | 1.59539e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 653.948 | 0.0300129 | 0.065042ms | 200 | 30 | 0.229885 | 291.667 | 1(Win) |
| std::from_chars | 306.533 | 0.30896 | 0.150083ms | 200 | 30 | 110.875 | 622.233 | 2(Loss) |
| strtoll/strtoull | 152.612 | 0.59879 | 0.261417ms | 200 | 30 | 1680.17 | 1249.8 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 698.185 | 0.35637 | 0.531167ms | 2000 | 30 | 2843.43 | 2731.87 | 1(Win) |
| std::from_chars | 293.19 | 2.28296 | 3.16662ms | 2000 | 30 | 661728 | 6505.5 | 2(Loss) |
| strtoll/strtoull | 150.761 | 1.74229 | 2.29454ms | 2000 | 30 | 1.45762e+06 | 12651.5 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 716.633 | 0.594303 | 5.47829ms | 20000 | 30 | 750592 | 26615.4 | 1(Win) |
| std::from_chars | 241.025 | 0.906937 | 14.5577ms | 20000 | 30 | 1.54529e+07 | 79134.8 | 2(Loss) |
| strtoll/strtoull | 159.338 | 0.0132821 | 21.9755ms | 20000 | 30 | 7583.54 | 119704 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 339.574 | 0.22414 | 101.41ms | 200000 | 30 | 4.75501e+07 | 561689 | 1(Win) |
| std::from_chars | 214.238 | 0.196354 | 160.817ms | 200000 | 30 | 9.16787e+07 | 890293 | 2(Loss) |
| strtoll/strtoull | 150.591 | 0.232333 | 227.065ms | 200000 | 30 | 2.5978e+08 | 1.26657e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 711.52 | 1.43132 | 1.24625ms | 200 | 30 | 441.651 | 268.067 | 1(Win) |
| std::from_chars | 305.143 | 0.450214 | 1.76492ms | 200 | 30 | 237.582 | 625.067 | 2(Loss) |
| strtoll/strtoull | 159.504 | 0.581627 | 1.63888ms | 200 | 30 | 1451.2 | 1195.8 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 564.9 | 0.362593 | 0.671ms | 2000 | 30 | 4496.53 | 3376.43 | 1(Win) |
| std::from_chars | 297.123 | 0.23714 | 2.58438ms | 2000 | 30 | 6952.18 | 6419.4 | 2(Loss) |
| strtoll/strtoull | 154.563 | 2.0345 | 3.43658ms | 2000 | 30 | 1.89098e+06 | 12340.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 369.135 | 1.22843 | 9.51229ms | 20000 | 30 | 1.20868e+07 | 51670.7 | 1(Win) |
| std::from_chars | 255.055 | 0.602486 | 14.0895ms | 20000 | 30 | 6.08987e+06 | 74781.9 | 2(Loss) |
| strtoll/strtoull | 155.518 | 0.382021 | 21.974ms | 20000 | 30 | 6.58556e+06 | 122645 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 344.42 | 0.273492 | 100.322ms | 200000 | 30 | 6.88167e+07 | 553786 | 1(Win) |
| std::from_chars | 214.997 | 0.212741 | 159.96ms | 200000 | 30 | 1.0686e+08 | 887150 | 2(Loss) |
| strtoll/strtoull | 163.244 | 0.0561946 | 210.607ms | 200000 | 30 | 1.2933e+07 | 1.16841e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 650.972 | 0.483498 | 1.44325ms | 200 | 30 | 60.2069 | 293 | 1(Win) |
| std::from_chars | 401.575 | 0.799233 | 1.80942ms | 200 | 30 | 432.309 | 474.967 | 2(Loss) |
| strtoll/strtoull | 158.409 | 0.605006 | 2.69046ms | 200 | 30 | 1592 | 1204.07 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 676.477 | 0.450293 | 1.83183ms | 2000 | 30 | 4835.77 | 2819.53 | 1(Win) |
| std::from_chars | 391.591 | 0.331719 | 2.32687ms | 2000 | 30 | 7831.7 | 4870.77 | 2(Loss) |
| strtoll/strtoull | 165.517 | 0.563332 | 3.451ms | 2000 | 30 | 126422 | 11523.6 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 524.679 | 1.26509 | 6.50342ms | 20000 | 30 | 6.34511e+06 | 36352.7 | 1(Win) |
| std::from_chars | 345.395 | 0.335945 | 10.0866ms | 20000 | 30 | 1.03249e+06 | 55222.3 | 2(Loss) |
| strtoll/strtoull | 168.531 | 0.843154 | 20.3132ms | 20000 | 30 | 2.73172e+07 | 113175 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 458.298 | 0.316328 | 74.5841ms | 200000 | 30 | 5.19948e+07 | 416181 | 1(Win) |
| std::from_chars | 319.929 | 0.132336 | 108.66ms | 200000 | 30 | 1.86738e+07 | 596179 | 2(Loss) |
| strtoll/strtoull | 166.548 | 0.110262 | 206.674ms | 200000 | 30 | 4.7836e+07 | 1.14522e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 782.449 | 0.834757 | 1.4795ms | 400 | 30 | 496.878 | 487.533 | 1(Win) |
| std::from_chars | 336.195 | 0.28679 | 0.258542ms | 400 | 30 | 317.678 | 1134.67 | 2(Loss) |
| strtoll/strtoull | 176.068 | 0.582242 | 0.424917ms | 400 | 30 | 4774.04 | 2166.6 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 817.914 | 0.314674 | 2.77417ms | 4000 | 30 | 6461.72 | 4663.93 | 1(Win) |
| std::from_chars | 286.909 | 0.58245 | 2.44021ms | 4000 | 30 | 179916 | 13295.8 | 2(Loss) |
| strtoll/strtoull | 177.807 | 0.771163 | 3.871ms | 4000 | 30 | 821175 | 21454.1 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 421.973 | 0.372052 | 16.591ms | 40000 | 30 | 3.39373e+06 | 90401.4 | 1(Win) |
| std::from_chars | 273.009 | 0.131286 | 25.101ms | 40000 | 30 | 1.00953e+06 | 139728 | 2(Loss) |
| strtoll/strtoull | 168.379 | 0.300367 | 40.8524ms | 40000 | 30 | 1.38922e+07 | 226554 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.936 | 0.253352 | 212.72ms | 400000 | 30 | 2.70366e+08 | 1.18493e+06 | 1(Win) |
| std::from_chars | 251.11 | 0.106715 | 275.408ms | 400000 | 30 | 7.88434e+07 | 1.51914e+06 | 2(Loss) |
| strtoll/strtoull | 176.151 | 0.403595 | 406.384ms | 400000 | 30 | 2.29172e+09 | 2.16558e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 815.28 | 0.702908 | 1.451ms | 400 | 30 | 324.507 | 467.9 | 1(Win) |
| std::from_chars | 318.626 | 0.330088 | 2.31154ms | 400 | 30 | 468.53 | 1197.23 | 2(Loss) |
| strtoll/strtoull | 207.599 | 0.166355 | 1.73975ms | 400 | 30 | 280.326 | 1837.53 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 847.447 | 0.503 | 2.17833ms | 4000 | 30 | 15379.8 | 4501.4 | 1(Win) |
| std::from_chars | 306.812 | 0.0345289 | 2.29175ms | 4000 | 30 | 552.92 | 12433.3 | 2(Loss) |
| strtoll/strtoull | 210.63 | 0.342546 | 3.32796ms | 4000 | 30 | 115462 | 18110.9 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 838.216 | 0.198573 | 11.0283ms | 40000 | 30 | 245002 | 45509.7 | 1(Win) |
| std::from_chars | 264.402 | 0.244923 | 26.1361ms | 40000 | 30 | 3.74601e+06 | 144276 | 2(Loss) |
| strtoll/strtoull | 205.713 | 0.731555 | 33.077ms | 40000 | 30 | 5.52091e+07 | 185438 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 441.49 | 0.164838 | 156.094ms | 400000 | 30 | 6.08576e+07 | 864051 | 1(Win) |
| std::from_chars | 254.333 | 0.161368 | 270.094ms | 400000 | 30 | 1.75741e+08 | 1.49988e+06 | 2(Loss) |
| strtoll/strtoull | 217.911 | 0.0756238 | 315.204ms | 400000 | 30 | 5.25776e+07 | 1.75058e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 773.615 | 0.581081 | 0.127041ms | 400 | 30 | 246.3 | 493.1 | 1(Win) |
| std::from_chars | 336.601 | 0.691702 | 0.237709ms | 400 | 30 | 1843.53 | 1133.3 | 2(Loss) |
| strtoll/strtoull | 204.067 | 0.410072 | 1.70629ms | 400 | 30 | 1762.85 | 1869.33 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 805.701 | 0.478505 | 0.870625ms | 4000 | 30 | 15398.1 | 4734.63 | 1(Win) |
| std::from_chars | 288.721 | 0.173228 | 3.77687ms | 4000 | 30 | 15715.3 | 13212.4 | 2(Loss) |
| strtoll/strtoull | 207.665 | 0.954067 | 4.83717ms | 4000 | 30 | 921448 | 18369.4 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 469.621 | 0.308872 | 14.9458ms | 40000 | 30 | 1.88844e+06 | 81229.2 | 1(Win) |
| std::from_chars | 264.527 | 0.296553 | 26.0002ms | 40000 | 30 | 5.48664e+06 | 144208 | 2(Loss) |
| strtoll/strtoull | 217.219 | 0.121543 | 31.6408ms | 40000 | 30 | 1.3668e+06 | 175615 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 444.77 | 0.169851 | 156.209ms | 400000 | 30 | 6.36655e+07 | 857678 | 1(Win) |
| std::from_chars | 251.907 | 0.179456 | 272.215ms | 400000 | 30 | 2.21554e+08 | 1.51433e+06 | 2(Loss) |
| strtoll/strtoull | 207.124 | 0.0715837 | 319.827ms | 400000 | 30 | 5.21445e+07 | 1.84174e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 734.443 | 0.834667 | 2.05129ms | 400 | 30 | 563.834 | 519.4 | 1(Win) |
| std::from_chars | 383.605 | 0.333543 | 1.58496ms | 400 | 30 | 330.047 | 994.433 | 2(Loss) |
| strtoll/strtoull | 234.553 | 0.149641 | 2.25196ms | 400 | 30 | 177.689 | 1626.37 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 807.811 | 0.0771308 | 3.30329ms | 4000 | 30 | 397.995 | 4722.27 | 1(Win) |
| std::from_chars | 376.193 | 0.351187 | 3.09492ms | 4000 | 30 | 38044.9 | 10140.3 | 2(Loss) |
| strtoll/strtoull | 223.082 | 1.4535 | 4.39346ms | 4000 | 30 | 1.85328e+06 | 17100 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 646.315 | 0.39421 | 12.3049ms | 40000 | 30 | 1.62408e+06 | 59022.3 | 1(Win) |
| std::from_chars | 360.033 | 0.318073 | 19.0735ms | 40000 | 30 | 3.40731e+06 | 105954 | 2(Loss) |
| strtoll/strtoull | 237.347 | 0.149061 | 30.2817ms | 40000 | 30 | 1.72187e+06 | 160722 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 573.502 | 0.418023 | 122.381ms | 400000 | 30 | 2.31938e+08 | 665158 | 1(Win) |
| std::from_chars | 354.217 | 0.224829 | 193.129ms | 400000 | 30 | 1.75877e+08 | 1.07694e+06 | 2(Loss) |
| strtoll/strtoull | 225.781 | 0.123653 | 294.274ms | 400000 | 30 | 1.3094e+08 | 1.68955e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 735.387 | 0.826105 | 0.218125ms | 800 | 30 | 2203.64 | 1037.47 | 1(Win) |
| std::from_chars | 356.464 | 0.489856 | 0.419083ms | 800 | 30 | 3297.67 | 2140.3 | 2(Loss) |
| strtoll/strtoull | 262.458 | 0.131646 | 2.90633ms | 800 | 30 | 439.334 | 2906.9 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 796.23 | 0.0572505 | 3.07154ms | 8000 | 30 | 902.783 | 9581.9 | 1(Win) |
| std::from_chars | 374.782 | 0.0445575 | 3.70417ms | 8000 | 30 | 2468.23 | 20356.9 | 2(Loss) |
| strtoll/strtoull | 252.061 | 0.960345 | 12.8288ms | 8000 | 30 | 2.53481e+06 | 30268.1 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 700.874 | 0.855914 | 20.05ms | 80000 | 30 | 2.60425e+07 | 108855 | 1(Win) |
| std::from_chars | 359.616 | 0.190736 | 38.3117ms | 80000 | 30 | 4.91233e+06 | 212154 | 2(Loss) |
| strtoll/strtoull | 251.514 | 0.296065 | 127.512ms | 80000 | 30 | 2.41964e+07 | 303339 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 572.032 | 0.0999164 | 240.512ms | 800000 | 30 | 5.32763e+07 | 1.33374e+06 | 1(Win) |
| std::from_chars | 357.642 | 0.0827917 | 376.364ms | 800000 | 30 | 9.35789e+07 | 2.13325e+06 | 2(Loss) |
| strtoll/strtoull | 264.877 | 0.0344882 | 521.578ms | 800000 | 30 | 2.96043e+07 | 2.88036e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 801.997 | 1.15028 | 2.27775ms | 800 | 30 | 3592.22 | 951.3 | 1(Win) |
| std::from_chars | 354.169 | 0.38416 | 2.31071ms | 800 | 30 | 2054.49 | 2154.17 | 2(Loss) |
| strtoll/strtoull | 302.318 | 0.528694 | 0.46575ms | 800 | 30 | 5340.52 | 2523.63 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 845.097 | 0.342966 | 2.94829ms | 8000 | 30 | 28760.1 | 9027.83 | 1(Win) |
| std::from_chars | 361.034 | 0.0559404 | 3.83458ms | 8000 | 30 | 4192.34 | 21132.1 | 2(Loss) |
| strtoll/strtoull | 295.76 | 1.20561 | 4.61829ms | 8000 | 30 | 2.9016e+06 | 25795.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 830.9 | 0.287654 | 16.7712ms | 80000 | 30 | 2.09288e+06 | 91820.8 | 1(Win) |
| std::from_chars | 357.049 | 0.250564 | 38.395ms | 80000 | 30 | 8.59971e+06 | 213679 | 2(Loss) |
| strtoll/strtoull | 314.073 | 0.14793 | 43.7434ms | 80000 | 30 | 3.87396e+06 | 242918 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 772.29 | 0.135937 | 179.042ms | 800000 | 30 | 5.41023e+07 | 987893 | 1(Win) |
| std::from_chars | 372.834 | 0.332866 | 379.333ms | 800000 | 30 | 1.3919e+09 | 2.04632e+06 | 2(Loss) |
| strtoll/strtoull | 297.246 | 0.11982 | 466.466ms | 800000 | 30 | 2.83744e+08 | 2.56669e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 731.486 | 0.300565 | 0.2365ms | 800 | 30 | 294.828 | 1043 | 1(Win) |
| std::from_chars | 367.186 | 0.128197 | 1.66704ms | 800 | 30 | 212.855 | 2077.8 | 2(Loss) |
| strtoll/strtoull | 296.918 | 0.360239 | 0.993375ms | 800 | 30 | 2570.46 | 2569.53 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 719.275 | 0.196284 | 1.95588ms | 8000 | 30 | 13004.1 | 10607.1 | 1(Win) |
| std::from_chars | 360.113 | 0.129867 | 4.30667ms | 8000 | 30 | 22710 | 21186.1 | 2(Loss) |
| strtoll/strtoull | 313.664 | 0.130109 | 4.86767ms | 8000 | 30 | 30045.8 | 24323.4 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.33 | 0.346831 | 19.871ms | 80000 | 30 | 4.40782e+06 | 110518 | 1(Win) |
| std::from_chars | 374.472 | 0.107545 | 37.5898ms | 80000 | 30 | 1.44027e+06 | 203737 | 2(Loss) |
| strtoll/strtoull | 298.115 | 0.361602 | 46.4611ms | 80000 | 30 | 2.56917e+07 | 255921 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.212 | 0.0808408 | 195.046ms | 800000 | 30 | 2.194e+07 | 1.05786e+06 | 1(Win) |
| std::from_chars | 353.736 | 0.207368 | 384.743ms | 800000 | 30 | 6.00102e+08 | 2.1568e+06 | 2(Loss) |
| strtoll/strtoull | 299.559 | 0.101742 | 447.688ms | 800000 | 30 | 2.01436e+08 | 2.54688e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 681.52 | 0.638474 | 1.62433ms | 800 | 30 | 1532.6 | 1119.47 | 1(Win) |
| std::from_chars | 353.256 | 0.443974 | 2.19421ms | 800 | 30 | 2758.27 | 2159.73 | 2(Loss) |
| strtoll/strtoull | 276.177 | 0.128362 | 2.30067ms | 800 | 30 | 377.224 | 2762.5 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 736.651 | 0.0571293 | 1.90783ms | 8000 | 30 | 1050.26 | 10356.9 | 1(Win) |
| std::from_chars | 359.006 | 0.0305761 | 3.87146ms | 8000 | 30 | 1266.67 | 21251.4 | 2(Loss) |
| strtoll/strtoull | 267.788 | 0.601734 | 6.56471ms | 8000 | 30 | 881717 | 28490.5 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 688.686 | 0.193421 | 20.0407ms | 80000 | 30 | 1.37742e+06 | 110782 | 1(Win) |
| std::from_chars | 330.722 | 0.419928 | 41.4968ms | 80000 | 30 | 2.8153e+07 | 230689 | 2(Loss) |
| strtoll/strtoull | 267.63 | 0.16203 | 52.8948ms | 80000 | 30 | 6.40064e+06 | 285072 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 548.933 | 0.316535 | 249.911ms | 800000 | 30 | 5.8064e+08 | 1.38986e+06 | 1(Win) |
| std::from_chars | 332.946 | 0.106507 | 402.239ms | 800000 | 30 | 1.78695e+08 | 2.29148e+06 | 2(Loss) |
| strtoll/strtoull | 279.616 | 0.0489751 | 494.144ms | 800000 | 30 | 5.35708e+07 | 2.72852e+06 | 3(Loss) |
