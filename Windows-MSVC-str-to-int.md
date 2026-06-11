# str-to-int  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.463 | 1.1236 | 0.0722ms | 100 | 30 | 333.333 | 296.667 | 1(Win) |
| std::from_chars | 220.079 | 2.0201 | 0.1035ms | 100 | 30 | 2298.85 | 433.333 | 2(Loss) |
| strtoll/strtoull | 58.9902 | 0.428069 | 0.3102ms | 100 | 30 | 1436.78 | 1616.67 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.411 | 0.165825 | 0.5315ms | 1000 | 30 | 643.678 | 2793.33 | 1(Win) |
| std::from_chars | 230.542 | 0.216323 | 0.7741ms | 1000 | 30 | 2402.3 | 4136.67 | 2(Loss) |
| strtoll/strtoull | 50.0792 | 2.03793 | 3.3889ms | 1000 | 30 | 4.5184e+06 | 19043.3 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 118.479 | 0.444829 | 36.2769ms | 10000 | 30 | 3.84616e+06 | 80493.3 | 1(Win) |
| strtoll/strtoull | 49.0893 | 0.734 | 36.6604ms | 10000 | 30 | 6.10013e+07 | 194273 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 125.293 | 0.680691 | 137.862ms | 100000 | 30 | 8.05323e+08 | 761157 | 1(Win) |
| std::from_chars | 101.558 | 0.616162 | 169.39ms | 100000 | 30 | 1.00434e+09 | 939043 | 2(Loss) |
| strtoll/strtoull | 47.2609 | 0.953683 | 364.875ms | 100000 | 30 | 1.11103e+10 | 2.01789e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 294.951 | 2.42908 | 0.077ms | 100 | 30 | 1850.57 | 323.333 | 1(Win) |
| std::from_chars | 215.115 | 2.07561 | 0.1019ms | 100 | 30 | 2540.23 | 443.333 | 2(Loss) |
| strtoll/strtoull | 61.133 | 0.583152 | 0.2992ms | 100 | 30 | 2482.76 | 1560 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 324.012 | 0.312634 | 0.7023ms | 1000 | 30 | 2540.23 | 2943.33 | 1(Win) |
| std::from_chars | 223.517 | 0.205166 | 0.8064ms | 1000 | 30 | 2298.85 | 4266.67 | 2(Loss) |
| strtoll/strtoull | 60.7694 | 0.0523264 | 2.8706ms | 1000 | 30 | 2022.99 | 15693.3 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 181.077 | 0.400909 | 10.0404ms | 10000 | 30 | 1.33747e+06 | 52666.7 | 1(Win) |
| strtoll/strtoull | 60.7771 | 0.305555 | 68.3164ms | 10000 | 30 | 6.89637e+06 | 156913 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.796 | 1.48218 | 97.5519ms | 100000 | 30 | 1.4153e+09 | 463407 | 1(Win) |
| std::from_chars | 159.338 | 0.905309 | 108.979ms | 100000 | 30 | 8.808e+08 | 598523 | 2(Loss) |
| strtoll/strtoull | 58.871 | 0.375748 | 680.503ms | 100000 | 30 | 1.11151e+09 | 1.61994e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.116 | 1.57911 | 0.0698ms | 100 | 30 | 643.678 | 293.333 | 1(Win) |
| std::from_chars | 223.517 | 1.92463 | 0.0998ms | 100 | 30 | 2022.99 | 426.667 | 2(Loss) |
| strtoll/strtoull | 60.7436 | 0.542015 | 0.3017ms | 100 | 30 | 2172.41 | 1570 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 293.438 | 0.285685 | 0.6977ms | 1000 | 30 | 2586.21 | 3250 | 1(Win) |
| std::from_chars | 229.432 | 0.221376 | 0.83ms | 1000 | 30 | 2540.23 | 4156.67 | 2(Loss) |
| strtoll/strtoull | 61.4877 | 0.32912 | 6.7902ms | 1000 | 30 | 78172.4 | 15510 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 237.705 | 1.40468 | 17.2248ms | 10000 | 30 | 9.52786e+06 | 40120 | 1(Win) |
| std::from_chars | 168.335 | 0.941527 | 10.4152ms | 10000 | 30 | 8.53568e+06 | 56653.3 | 2(Loss) |
| strtoll/strtoull | 62.4855 | 0.201096 | 67.3253ms | 10000 | 30 | 2.82599e+06 | 152623 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 197.969 | 2.22224 | 84.9249ms | 100000 | 30 | 3.43805e+09 | 481730 | 1(Win) |
| std::from_chars | 159.488 | 0.697243 | 255.785ms | 100000 | 30 | 5.21476e+08 | 597960 | 2(Loss) |
| strtoll/strtoull | 60.7677 | 0.897615 | 287.328ms | 100000 | 30 | 5.95328e+09 | 1.56938e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 304.364 | 2.0146 | 0.1092ms | 100 | 30 | 1195.4 | 313.333 | 1(Win) |
| std::from_chars | 244.532 | 1.42843 | 0.1007ms | 100 | 30 | 931.034 | 390 | 2(Loss) |
| strtoll/strtoull | 58.3882 | 0.535945 | 0.3295ms | 100 | 30 | 2298.85 | 1633.33 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.311 | 1.20917 | 0.5741ms | 1000 | 30 | 39126.4 | 2986.67 | 1(Win) |
| std::from_chars | 202.479 | 0.118277 | 0.9287ms | 1000 | 30 | 931.034 | 4710 | 2(Loss) |
| strtoll/strtoull | 58.3763 | 0.0854821 | 2.9757ms | 1000 | 30 | 5850.57 | 16336.7 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.038 | 0.158242 | 8.2089ms | 10000 | 30 | 126897 | 41100 | 1(Win) |
| std::from_chars | 160.804 | 0.364244 | 10.7918ms | 10000 | 30 | 1.39995e+06 | 59306.7 | 2(Loss) |
| strtoll/strtoull | 56.9664 | 0.203895 | 71.7828ms | 10000 | 30 | 3.49541e+06 | 167410 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 176.063 | 1.15065 | 97.869ms | 100000 | 30 | 1.16538e+09 | 541667 | 1(Win) |
| std::from_chars | 161.371 | 0.923978 | 108.006ms | 100000 | 30 | 8.94531e+08 | 590983 | 2(Loss) |
| strtoll/strtoull | 56.7405 | 0.548138 | 307.752ms | 100000 | 30 | 2.54633e+09 | 1.68076e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 369.164 | 1.33944 | 0.111ms | 200 | 30 | 1436.78 | 516.667 | 1(Win) |
| std::from_chars | 237.429 | 0.414938 | 0.1741ms | 200 | 30 | 333.333 | 803.333 | 2(Loss) |
| strtoll/strtoull | 88.3032 | 0.421166 | 0.4183ms | 200 | 30 | 2482.76 | 2160 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 377.195 | 0.181975 | 2.2105ms | 2000 | 30 | 2540.23 | 5056.67 | 1(Win) |
| std::from_chars | 212.795 | 0.0998351 | 1.6674ms | 2000 | 30 | 2402.3 | 8963.33 | 2(Loss) |
| strtoll/strtoull | 82.5335 | 0.703672 | 4.1877ms | 2000 | 30 | 793345 | 23110 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 236.194 | 0.186507 | 38.2906ms | 20000 | 30 | 680506 | 80753.3 | 1(Win) |
| std::from_chars | 165.411 | 0.172162 | 21.1269ms | 20000 | 30 | 1.18231e+06 | 115310 | 2(Loss) |
| strtoll/strtoull | 79.1935 | 0.305485 | 43.4698ms | 20000 | 30 | 1.62398e+07 | 240847 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 190 | 0.35001 | 182.804ms | 200000 | 30 | 3.7037e+08 | 1.00387e+06 | 1(Win) |
| std::from_chars | 155.66 | 0.494096 | 221.119ms | 200000 | 30 | 1.09964e+09 | 1.22533e+06 | 2(Loss) |
| strtoll/strtoull | 77.9422 | 0.888432 | 439.558ms | 200000 | 30 | 1.41803e+10 | 2.44713e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 359.877 | 1.60559 | 0.1157ms | 200 | 30 | 2172.41 | 530 | 1(Win) |
| std::from_chars | 219.235 | 0.978118 | 0.1759ms | 200 | 30 | 2172.41 | 870 | 2(Loss) |
| strtoll/strtoull | 91.2607 | 0.266548 | 0.3917ms | 200 | 30 | 931.034 | 2090 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 370.119 | 0.179769 | 0.9629ms | 2000 | 30 | 2574.71 | 5153.33 | 1(Win) |
| std::from_chars | 209.369 | 0.0806809 | 1.6762ms | 2000 | 30 | 1620.69 | 9110 | 2(Loss) |
| strtoll/strtoull | 91.1735 | 0.690007 | 3.7651ms | 2000 | 30 | 625103 | 20920 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 300.923 | 0.289641 | 12.0467ms | 20000 | 30 | 1.01109e+06 | 63383.3 | 1(Win) |
| std::from_chars | 198.917 | 1.81701 | 17.5865ms | 20000 | 30 | 9.10653e+07 | 95886.7 | 2(Loss) |
| strtoll/strtoull | 91.3612 | 0.168815 | 91.6659ms | 20000 | 30 | 3.72631e+06 | 208770 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 266.285 | 1.05829 | 129.545ms | 200000 | 30 | 1.72385e+09 | 716280 | 1(Win) |
| std::from_chars | 201.59 | 0.798379 | 172.929ms | 200000 | 30 | 1.71184e+09 | 946153 | 2(Loss) |
| strtoll/strtoull | 89.5798 | 0.624639 | 395.188ms | 200000 | 30 | 5.30663e+09 | 2.12922e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 384.03 | 0.671141 | 0.1051ms | 200 | 30 | 333.333 | 496.667 | 1(Win) |
| std::from_chars | 225.277 | 1.09419 | 0.2909ms | 200 | 30 | 2574.71 | 846.667 | 2(Loss) |
| strtoll/strtoull | 93.0414 | 0.452915 | 0.3857ms | 200 | 30 | 2586.21 | 2050 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 399.027 | 0.155394 | 0.9205ms | 2000 | 30 | 1655.17 | 4780 | 1(Win) |
| std::from_chars | 194.099 | 0.083566 | 1.8072ms | 2000 | 30 | 2022.99 | 9826.67 | 2(Loss) |
| strtoll/strtoull | 94.2987 | 0.0405987 | 3.6661ms | 2000 | 30 | 2022.99 | 20226.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 211.161 | 0.532716 | 17.4095ms | 20000 | 30 | 6.94616e+06 | 90326.7 | 1(Win) |
| strtoll/strtoull | 92.2003 | 1.97553 | 91.9708ms | 20000 | 30 | 5.01053e+08 | 206870 | 2(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 276.586 | 0.735958 | 123.972ms | 200000 | 30 | 7.72728e+08 | 689603 | 1(Win) |
| std::from_chars | 207.734 | 0.536681 | 172.941ms | 200000 | 30 | 7.28451e+08 | 918170 | 2(Loss) |
| strtoll/strtoull | 88.9749 | 1.16072 | 378.021ms | 200000 | 30 | 1.85739e+10 | 2.14369e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 386.625 | 0.93893 | 0.1275ms | 200 | 30 | 643.678 | 493.333 | 1(Win) |
| std::from_chars | 321.463 | 0.780684 | 0.133ms | 200 | 30 | 643.678 | 593.333 | 2(Loss) |
| strtoll/strtoull | 94.7359 | 0.313531 | 0.3828ms | 200 | 30 | 1195.4 | 2013.33 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 397.02 | 0.0867303 | 4.4314ms | 2000 | 48 | 833.333 | 4804.17 | 1(Win) |
| std::from_chars | 305.665 | 0.145788 | 2.6889ms | 2000 | 30 | 2482.76 | 6240 | 2(Loss) |
| strtoll/strtoull | 95.3833 | 0.0292023 | 3.6906ms | 2000 | 30 | 1022.99 | 19996.7 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 384.133 | 0.28461 | 21.6616ms | 20000 | 30 | 599126 | 49653.3 | 1(Win) |
| std::from_chars | 318.298 | 1.51069 | 11.0345ms | 20000 | 30 | 2.45846e+07 | 59923.3 | 2(Loss) |
| strtoll/strtoull | 94.6278 | 0.400703 | 37.5948ms | 20000 | 30 | 1.957e+07 | 201563 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 349.645 | 0.196757 | 100.698ms | 200000 | 30 | 3.45609e+07 | 545510 | 1(Win) |
| std::from_chars | 287.877 | 0.758065 | 123.736ms | 200000 | 30 | 7.56799e+08 | 662557 | 2(Loss) |
| strtoll/strtoull | 93.0502 | 0.605944 | 368.804ms | 200000 | 30 | 4.62821e+09 | 2.04981e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.561 | 1.1657 | 0.1723ms | 400 | 30 | 2172.41 | 730 | 1(Win) |
| std::from_chars | 339.587 | 0.699172 | 0.2355ms | 400 | 30 | 1850.57 | 1123.33 | 2(Loss) |
| strtoll/strtoull | 129.458 | 0.314393 | 0.5497ms | 400 | 30 | 2574.71 | 2946.67 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 538.545 | 0.152613 | 3.128ms | 4000 | 30 | 3505.75 | 7083.33 | 1(Win) |
| std::from_chars | 274.373 | 0.213931 | 2.5301ms | 4000 | 30 | 26540.2 | 13903.3 | 2(Loss) |
| strtoll/strtoull | 118.986 | 0.573313 | 5.9046ms | 4000 | 30 | 1.01352e+06 | 32060 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.976 | 0.877938 | 22.8595ms | 40000 | 30 | 3.26605e+07 | 118847 | 1(Win) |
| std::from_chars | 242.398 | 1.33109 | 66.4087ms | 40000 | 30 | 1.31643e+08 | 157373 | 2(Loss) |
| strtoll/strtoull | 118.642 | 0.747344 | 59.9668ms | 40000 | 30 | 1.73223e+08 | 321530 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 277.928 | 1.37975 | 251.222ms | 400000 | 30 | 1.07592e+10 | 1.37255e+06 | 1(Win) |
| std::from_chars | 238.851 | 1.12848 | 290.171ms | 400000 | 30 | 9.74472e+09 | 1.5971e+06 | 2(Loss) |
| strtoll/strtoull | 112.222 | 1.62644 | 1417.2ms | 400000 | 30 | 9.16982e+10 | 3.39924e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 501.934 | 1.197 | 0.1588ms | 400 | 30 | 2482.76 | 760 | 1(Win) |
| std::from_chars | 326.974 | 0.750322 | 0.2307ms | 400 | 30 | 2298.85 | 1166.67 | 2(Loss) |
| strtoll/strtoull | 130.64 | 0.254377 | 0.5526ms | 400 | 30 | 1655.17 | 2920 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 511.354 | 1.91589 | 3.1191ms | 4000 | 30 | 612828 | 7460 | 1(Win) |
| std::from_chars | 311.828 | 0.208622 | 2.5156ms | 4000 | 30 | 19540.2 | 12233.3 | 2(Loss) |
| strtoll/strtoull | 129.341 | 0.190926 | 5.3358ms | 4000 | 30 | 95126.4 | 29493.3 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 408.82 | 1.99213 | 16.7805ms | 40000 | 30 | 1.03661e+08 | 93310 | 1(Win) |
| std::from_chars | 296.073 | 1.88598 | 56.4375ms | 40000 | 30 | 1.7714e+08 | 128843 | 2(Loss) |
| strtoll/strtoull | 128.773 | 0.219789 | 131.035ms | 40000 | 30 | 1.27175e+07 | 296233 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 360.576 | 1.32378 | 185.73ms | 400000 | 30 | 5.88408e+09 | 1.05795e+06 | 1(Win) |
| std::from_chars | 312.491 | 0.503906 | 225.448ms | 400000 | 30 | 1.13518e+09 | 1.22074e+06 | 2(Loss) |
| strtoll/strtoull | 124.118 | 1.7119 | 555.123ms | 400000 | 30 | 8.30475e+10 | 3.07344e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 537.281 | 0.784628 | 0.1465ms | 400 | 30 | 931.034 | 710 | 1(Win) |
| std::from_chars | 334.623 | 0.797998 | 0.2254ms | 400 | 30 | 2482.76 | 1140 | 2(Loss) |
| strtoll/strtoull | 131.996 | 0.192763 | 0.537ms | 400 | 30 | 931.034 | 2890 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 914.065 | 2.42881 | 0.7655ms | 4000 | 30 | 308230 | 4173.33 | 1(Win) |
| std::from_chars | 316.31 | 0.0754326 | 2.2109ms | 4000 | 30 | 2482.76 | 12060 | 2(Loss) |
| strtoll/strtoull | 126.959 | 1.4308 | 5.4827ms | 4000 | 30 | 5.54464e+06 | 30046.7 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 629.627 | 0.762459 | 11.4016ms | 40000 | 30 | 6.40189e+06 | 60586.7 | 1(Win) |
| std::from_chars | 462.799 | 0.218959 | 15.4501ms | 40000 | 30 | 977195 | 82426.7 | 2(Loss) |
| strtoll/strtoull | 252.59 | 0.144606 | 28.717ms | 40000 | 30 | 1.43082e+06 | 151023 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 514.63 | 2.44757 | 129.266ms | 400000 | 30 | 9.8746e+09 | 741250 | 1(Win) |
| std::from_chars | 424.81 | 1.97644 | 163.037ms | 400000 | 30 | 9.44975e+09 | 897977 | 2(Loss) |
| strtoll/strtoull | 230.974 | 2.41318 | 295.466ms | 400000 | 30 | 4.76535e+10 | 1.65157e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 930.414 | 1.35875 | 0.1018ms | 400 | 30 | 931.034 | 410 | 1(Win) |
| std::from_chars | 752.901 | 1.31579 | 0.1067ms | 400 | 30 | 1333.33 | 506.667 | 2(Loss) |
| strtoll/strtoull | 274.439 | 0.400781 | 0.3351ms | 400 | 30 | 931.034 | 1390 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 932.689 | 0.578471 | 2.1024ms | 4000 | 30 | 16793.1 | 4090 | 1(Win) |
| std::from_chars | 657.706 | 0.711121 | 1.1939ms | 4000 | 30 | 51034.5 | 5800 | 2(Loss) |
| strtoll/strtoull | 276.561 | 0.0846712 | 2.5891ms | 4000 | 30 | 4091.95 | 13793.3 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 786.049 | 2.48448 | 10.2537ms | 40000 | 30 | 4.36125e+07 | 48530 | 1(Win) |
| std::from_chars | 695.986 | 1.06015 | 10.1513ms | 40000 | 30 | 1.01292e+07 | 54810 | 2(Loss) |
| strtoll/strtoull | 270.463 | 0.45273 | 28.1705ms | 40000 | 30 | 1.22322e+07 | 141043 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.118 | 2.18538 | 100.228ms | 400000 | 30 | 4.37772e+09 | 552760 | 1(Win) |
| strtoll/strtoull | 255.621 | 2.25876 | 710.319ms | 400000 | 30 | 3.40868e+10 | 1.49232e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1064.57 | 0.965645 | 0.1568ms | 800 | 30 | 1436.78 | 716.667 | 1(Win) |
| std::from_chars | 646.559 | 0.852314 | 0.235ms | 800 | 30 | 3034.48 | 1180 | 2(Loss) |
| strtoll/strtoull | 354.306 | 0.533148 | 0.9604ms | 800 | 30 | 3954.02 | 2153.33 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 944.622 | 0.0972435 | 1.5338ms | 8000 | 30 | 1850.57 | 8076.67 | 1(Win) |
| std::from_chars | 529.207 | 0.674304 | 2.5032ms | 8000 | 30 | 283506 | 14416.7 | 2(Loss) |
| strtoll/strtoull | 332.291 | 2.15643 | 4.112ms | 8000 | 30 | 7.35421e+06 | 22960 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 952.761 | 0.128514 | 15.1379ms | 80000 | 30 | 317713 | 80076.7 | 1(Win) |
| std::from_chars | 531.218 | 1.17853 | 140.579ms | 80000 | 48 | 1.37518e+08 | 143621 | 2(Loss) |
| strtoll/strtoull | 329.53 | 0.462451 | 106.065ms | 80000 | 30 | 3.43908e+07 | 231523 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 741.974 | 1.94012 | 989.086ms | 800000 | 48 | 1.91029e+10 | 1.02826e+06 | 1(Win) |
| strtoll/strtoull | 300.2 | 2.45394 | 476.918ms | 800000 | 30 | 1.16683e+11 | 2.54143e+06 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1035.66 | 1.21474 | 0.1465ms | 800 | 30 | 2402.3 | 736.667 | 1(Win) |
| std::from_chars | 811.638 | 0.967785 | 0.1846ms | 800 | 30 | 2482.76 | 940 | 2(Loss) |
| strtoll/strtoull | 369.761 | 0.433694 | 0.3841ms | 800 | 30 | 2402.3 | 2063.33 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1025.46 | 1.77963 | 1.4039ms | 8000 | 30 | 525931 | 7440 | 1(Win) |
| std::from_chars | 651.528 | 0.713133 | 2.2872ms | 8000 | 30 | 209207 | 11710 | 2(Loss) |
| strtoll/strtoull | 322.46 | 2.14324 | 9.2413ms | 8000 | 30 | 7.71421e+06 | 23660 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 580.109 | 2.2669 | 20.1009ms | 80000 | 30 | 2.66655e+08 | 131517 | 1(Win) |
| std::from_chars **STATISTICAL TIE** | 351.03 | 0.384219 | 39.4399ms | 80000 | 30 | 2.09205e+07 | 217343 | 2(Tie) |
| strtoll/strtoull **STATISTICAL TIE** | 349.305 | 2.24012 | 225.892ms | 80000 | 48 | 1.1491e+09 | 218417 | 2(Tie) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 543.191 | 0.628328 | 251.106ms | 800000 | 30 | 2.33651e+09 | 1.40455e+06 | 1(Win) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 582.397 | 0.425256 | 0.2679ms | 800 | 30 | 931.034 | 1310 | 1(Win) |
| std::from_chars | 358.749 | 0.386133 | 0.4178ms | 800 | 30 | 2022.99 | 2126.67 | 2(Loss) |
| strtoll/strtoull | 180.791 | 0.176015 | 0.7829ms | 800 | 30 | 1655.17 | 4220 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 577.401 | 0.0477732 | 2.4142ms | 8000 | 30 | 1195.4 | 13213.3 | 1(Win) |
| std::from_chars | 448.085 | 0.0482288 | 3.1894ms | 8000 | 30 | 2022.99 | 17026.7 | 2(Loss) |
| strtoll/strtoull | 181.321 | 0.0218693 | 7.8286ms | 8000 | 30 | 2540.23 | 42076.7 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 553.818 | 1.66638 | 25.1202ms | 80000 | 30 | 1.58094e+08 | 137760 | 1(Win) |
| std::from_chars | 439.751 | 0.252334 | 31.4214ms | 80000 | 30 | 5.74961e+06 | 173493 | 2(Loss) |
| strtoll/strtoull | 178.506 | 0.675555 | 76.7872ms | 80000 | 30 | 2.50102e+08 | 427403 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 541.487 | 1.56869 | 595.549ms | 800000 | 30 | 1.46554e+10 | 1.40897e+06 | 1(Win) |
| std::from_chars | 422.851 | 1.30137 | 324.211ms | 800000 | 30 | 1.65397e+10 | 1.80428e+06 | 2(Loss) |
| strtoll/strtoull | 175.569 | 0.698699 | 777.529ms | 800000 | 30 | 2.76557e+10 | 4.34552e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 582.397 | 0.425256 | 0.2557ms | 800 | 30 | 931.034 | 1310 | 1(Win) |
| std::from_chars | 427.018 | 0.353308 | 0.4266ms | 800 | 30 | 1195.4 | 1786.67 | 2(Loss) |
| strtoll/strtoull | 173.658 | 0.105434 | 0.8156ms | 800 | 30 | 643.678 | 4393.33 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 587.027 | 0.0581354 | 2.4072ms | 8000 | 30 | 1712.64 | 12996.7 | 1(Win) |
| std::from_chars | 459.694 | 0.0539178 | 3.1027ms | 8000 | 30 | 2402.3 | 16596.7 | 2(Loss) |
| strtoll/strtoull | 173.698 | 0.312905 | 7.9774ms | 8000 | 30 | 566678 | 43923.3 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 503.491 | 0.306925 | 27.4384ms | 80000 | 30 | 6.48907e+06 | 151530 | 1(Win) |
| std::from_chars | 408.375 | 2.00878 | 33.4515ms | 80000 | 30 | 4.22519e+08 | 186823 | 2(Loss) |
| strtoll/strtoull | 170.746 | 0.796446 | 192.143ms | 80000 | 30 | 3.79938e+08 | 446827 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 457.699 | 1.09355 | 296.361ms | 800000 | 30 | 9.96819e+09 | 1.6669e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 444.272 | 1.0745 | 309.366ms | 800000 | 30 | 1.02144e+10 | 1.71728e+06 | 1(Tie) |
| strtoll/strtoull | 169.873 | 0.563254 | 816.846ms | 800000 | 30 | 1.91981e+10 | 4.49123e+06 | 3(Loss) |
