# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 364.23 | 0.24368 | 0.065853ms | 100 | 30 | 12.2126 | 261.833 | 5.545 | 1(Win) |
| std::from_chars | 277.285 | 0.252064 | 0.075812ms | 100 | 30 | 22.5471 | 343.933 | 7.52967 | 2(Loss) |
| strtoll/strtoull | 92.2018 | 0.0759333 | 0.202618ms | 100 | 30 | 18.5057 | 1034.33 | 24.4177 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 326.321 | 0.0375459 | 0.556306ms | 1000 | 30 | 36.1207 | 2922.5 | 7.06243 | 1(Win) |
| std::from_chars | 282.264 | 0.0236751 | 0.62806ms | 1000 | 30 | 19.1954 | 3378.67 | 8.17813 | 2(Loss) |
| strtoll/strtoull | 89.4282 | 0.02424 | 2.04865ms | 1000 | 30 | 200.464 | 10664.1 | 25.9944 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 151.187 | 0.594134 | 11.8228ms | 10000 | 30 | 4.21367e+06 | 63079.1 | 15.4166 | 1(Win) |
| std::from_chars | 123.214 | 0.463118 | 14.164ms | 10000 | 30 | 3.85465e+06 | 77399.9 | 18.9191 | 2(Loss) |
| strtoll/strtoull | 61.6503 | 0.383194 | 27.945ms | 10000 | 30 | 1.05412e+07 | 154691 | 37.8198 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 115.215 | 0.07861 | 149.414ms | 100000 | 30 | 1.27016e+07 | 827733 | 20.2399 | 1(Win) |
| std::from_chars | 102.244 | 0.132731 | 167.447ms | 100000 | 30 | 4.59823e+07 | 932743 | 22.8077 | 2(Loss) |
| strtoll/strtoull | 58.5657 | 0.0908191 | 294.142ms | 100000 | 30 | 6.56128e+07 | 1.62838e+06 | 39.8193 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 338.342 | 0.225496 | 0.06433ms | 100 | 30 | 12.1195 | 281.867 | 6.027 | 1(Win) |
| std::from_chars | 265.672 | 0.195157 | 0.079458ms | 100 | 30 | 14.723 | 358.967 | 7.92967 | 2(Loss) |
| strtoll/strtoull | 74.5699 | 0.0715613 | 0.264302ms | 100 | 30 | 25.1276 | 1278.9 | 30.4047 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 383.953 | 0.453021 | 0.523725ms | 1000 | 30 | 3798.42 | 2483.83 | 5.98537 | 1(Win) |
| std::from_chars | 256.949 | 0.0312111 | 0.682551ms | 1000 | 30 | 40.2575 | 3711.53 | 8.99157 | 2(Loss) |
| strtoll/strtoull | 77.7253 | 0.0184507 | 2.24874ms | 1000 | 30 | 153.752 | 12269.8 | 29.9186 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 237.143 | 1.02036 | 7.40917ms | 10000 | 30 | 5.05134e+06 | 40215.2 | 9.82547 | 1(Win) |
| std::from_chars | 170.63 | 1.45526 | 10.0417ms | 10000 | 30 | 1.98467e+07 | 55891.3 | 13.6588 | 2(Loss) |
| strtoll/strtoull | 70.654 | 1.59841 | 24.216ms | 10000 | 30 | 1.39645e+08 | 134978 | 32.999 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 188.483 | 0.20839 | 91.2774ms | 100000 | 30 | 3.33525e+07 | 505973 | 12.3717 | 1(Win) |
| std::from_chars | 163.264 | 0.158917 | 105.838ms | 100000 | 30 | 2.58512e+07 | 584131 | 14.2828 | 2(Loss) |
| strtoll/strtoull | 72.2955 | 0.106008 | 237.925ms | 100000 | 30 | 5.86649e+07 | 1.31913e+06 | 32.2569 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 378.242 | 0.428914 | 0.05899ms | 100 | 30 | 35.0851 | 252.133 | 5.29233 | 1(Win) |
| std::from_chars | 284.057 | 0.277631 | 0.074719ms | 100 | 30 | 26.0644 | 335.733 | 7.35 | 2(Loss) |
| strtoll/strtoull | 97.1617 | 0.0595737 | 0.19326ms | 100 | 30 | 10.2575 | 981.533 | 23.1523 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 434.859 | 0.0556934 | 0.409743ms | 1000 | 30 | 44.754 | 2193.07 | 5.2765 | 1(Win) |
| std::from_chars | 275.814 | 0.0290318 | 1.48926ms | 1000 | 30 | 30.2299 | 3457.67 | 8.36933 | 2(Loss) |
| strtoll/strtoull | 85.9525 | 2.47396 | 1.97959ms | 1000 | 30 | 2.26042e+06 | 11095.4 | 27.0504 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 275.248 | 1.04764 | 6.28219ms | 10000 | 30 | 3.9527e+06 | 34647.8 | 8.46434 | 1(Win) |
| std::from_chars | 186.891 | 1.22772 | 9.2391ms | 10000 | 30 | 1.17745e+07 | 51028.3 | 12.4687 | 2(Loss) |
| strtoll/strtoull | 83.6505 | 0.425675 | 20.6711ms | 10000 | 30 | 7.06546e+06 | 114007 | 27.8702 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 213.889 | 0.317779 | 79.6208ms | 100000 | 30 | 6.02274e+07 | 445873 | 10.9015 | 1(Win) |
| std::from_chars | 170.17 | 0.158014 | 119.683ms | 100000 | 30 | 2.35257e+07 | 560423 | 13.7029 | 2(Loss) |
| strtoll/strtoull | 82.0645 | 0.274467 | 208.892ms | 100000 | 30 | 3.05206e+08 | 1.1621e+06 | 28.4166 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 332.793 | 0.355588 | 0.082313ms | 100 | 30 | 31.1506 | 286.567 | 6.17567 | 1(Win) |
| std::from_chars | 265.106 | 0.210711 | 0.078085ms | 100 | 30 | 17.2368 | 359.733 | 7.95433 | 2(Loss) |
| strtoll/strtoull | 83.4872 | 0.0730809 | 0.218937ms | 100 | 30 | 20.9069 | 1142.3 | 27.0483 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 390.014 | 0.0732535 | 0.460158ms | 1000 | 30 | 96.254 | 2445.23 | 5.889 | 1(Win) |
| std::from_chars | 261.565 | 0.0418022 | 0.677101ms | 1000 | 30 | 69.6885 | 3646.03 | 8.82813 | 2(Loss) |
| strtoll/strtoull | 77.037 | 0.03173 | 2.26452ms | 1000 | 30 | 462.875 | 12379.4 | 30.1873 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 234.527 | 0.898917 | 7.54267ms | 10000 | 30 | 4.00843e+06 | 40663.7 | 9.93548 | 1(Win) |
| std::from_chars | 159.229 | 0.758682 | 10.7934ms | 10000 | 30 | 6.19435e+06 | 59893.2 | 14.6376 | 2(Loss) |
| strtoll/strtoull | 72.1165 | 0.401737 | 23.882ms | 10000 | 30 | 8.46711e+06 | 132241 | 32.3301 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 176.722 | 0.401719 | 97.2165ms | 100000 | 30 | 1.40989e+08 | 539647 | 13.1947 | 1(Win) |
| std::from_chars | 148.955 | 0.272614 | 115.122ms | 100000 | 30 | 9.13916e+07 | 640242 | 15.6547 | 2(Loss) |
| strtoll/strtoull | 70.016 | 0.577943 | 244.368ms | 100000 | 30 | 1.85907e+09 | 1.36208e+06 | 33.3059 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 365.183 | 0.200312 | 0.109364ms | 200 | 30 | 32.8379 | 522.3 | 5.96167 | 1(Win) |
| std::from_chars | 353.868 | 0.186592 | 0.111167ms | 200 | 30 | 30.3448 | 539 | 6.15383 | 2(Loss) |
| strtoll/strtoull | 135.302 | 0.0783858 | 0.268711ms | 200 | 30 | 36.631 | 1409.7 | 16.8105 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 396.758 | 0.0283561 | 0.922609ms | 2000 | 30 | 55.7471 | 4807.33 | 5.83305 | 1(Win) |
| std::from_chars | 347.642 | 0.0221551 | 1.02927ms | 2000 | 30 | 44.3264 | 5486.53 | 6.66683 | 2(Loss) |
| strtoll/strtoull | 121.047 | 0.166613 | 2.87553ms | 2000 | 30 | 20677.1 | 15757 | 19.2235 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 236.431 | 0.463481 | 15.1272ms | 20000 | 30 | 4.19408e+06 | 80672.5 | 9.85958 | 1(Win) |
| std::from_chars | 188.637 | 0.571774 | 18.1677ms | 20000 | 30 | 1.00271e+07 | 101112 | 12.3588 | 2(Loss) |
| strtoll/strtoull | 94.7063 | 0.796926 | 35.9789ms | 20000 | 30 | 7.72787e+07 | 201396 | 24.6203 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 191.082 | 0.255956 | 179.535ms | 200000 | 30 | 1.95826e+08 | 998181 | 12.2038 | 1(Win) |
| std::from_chars | 178.078 | 0.198177 | 193.116ms | 200000 | 30 | 1.35165e+08 | 1.07107e+06 | 13.0951 | 2(Loss) |
| strtoll/strtoull | 92.1783 | 0.31832 | 370.85ms | 200000 | 30 | 1.30152e+09 | 2.0692e+06 | 25.299 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 347.591 | 0.14488 | 0.113522ms | 200 | 30 | 18.9609 | 548.733 | 6.28 | 1(Win) |
| std::from_chars | 323.079 | 0.0797737 | 0.141324ms | 200 | 30 | 6.65402 | 590.367 | 6.7945 | 2(Loss) |
| strtoll/strtoull | 117.2 | 0.120672 | 0.323924ms | 200 | 30 | 115.702 | 1627.43 | 19.4735 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 375.061 | 0.0245075 | 0.951903ms | 2000 | 30 | 46.5989 | 5085.43 | 6.17522 | 1(Win) |
| std::from_chars | 267.788 | 0.0329201 | 3.07884ms | 2000 | 30 | 164.938 | 7122.6 | 8.66445 | 2(Loss) |
| strtoll/strtoull | 111.46 | 1.54076 | 3.06528ms | 2000 | 30 | 2.08552e+06 | 17112.5 | 20.8793 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 302.931 | 0.704741 | 11.3713ms | 20000 | 30 | 5.90683e+06 | 62963.2 | 7.69431 | 1(Win) |
| std::from_chars | 262.174 | 1.20204 | 13.0771ms | 20000 | 30 | 2.29424e+07 | 72751.1 | 8.89105 | 2(Loss) |
| strtoll/strtoull | 112.001 | 1.04717 | 30.471ms | 20000 | 30 | 9.54046e+07 | 170297 | 20.818 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 277.058 | 0.131834 | 123.978ms | 200000 | 30 | 2.47112e+07 | 688429 | 8.41666 | 1(Win) |
| std::from_chars | 263.566 | 0.128941 | 130.36ms | 200000 | 30 | 2.61206e+07 | 723671 | 8.84734 | 2(Loss) |
| strtoll/strtoull | 113.021 | 0.118109 | 304.288ms | 200000 | 30 | 1.19188e+08 | 1.6876e+06 | 20.6337 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 383.798 | 0.182158 | 0.10235ms | 200 | 30 | 24.5851 | 496.967 | 5.64733 | 1(Win) |
| std::from_chars | 331.444 | 0.161286 | 0.117218ms | 200 | 30 | 25.8437 | 575.467 | 6.623 | 2(Loss) |
| strtoll/strtoull | 137.589 | 0.0661621 | 0.263641ms | 200 | 30 | 25.2368 | 1386.27 | 16.5048 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 418.691 | 0.032504 | 1.96213ms | 2000 | 30 | 65.7759 | 4555.5 | 5.52925 | 1(Win) |
| std::from_chars | 294.268 | 0.0342463 | 1.19854ms | 2000 | 30 | 147.816 | 6481.67 | 7.88245 | 2(Loss) |
| strtoll/strtoull | 133.539 | 0.0198898 | 2.59608ms | 2000 | 30 | 242.12 | 14283.1 | 17.4228 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 321.11 | 0.877898 | 10.7724ms | 20000 | 30 | 8.15759e+06 | 59398.6 | 7.25849 | 1(Win) |
| std::from_chars | 273.812 | 0.507249 | 12.6334ms | 20000 | 30 | 3.74557e+06 | 69659 | 8.51298 | 2(Loss) |
| strtoll/strtoull | 129.262 | 0.830287 | 26.5176ms | 20000 | 30 | 4.50294e+07 | 147557 | 18.0377 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 290.098 | 0.219178 | 118.305ms | 200000 | 30 | 6.22997e+07 | 657484 | 8.03839 | 1(Win) |
| std::from_chars | 269.718 | 0.130568 | 127.666ms | 200000 | 30 | 2.55762e+07 | 707165 | 8.64558 | 2(Loss) |
| strtoll/strtoull | 128.138 | 0.139859 | 268.13ms | 200000 | 30 | 1.3002e+08 | 1.48851e+06 | 18.1994 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 379.019 | 0.187354 | 0.103763ms | 200 | 30 | 26.6678 | 503.233 | 5.70867 | 1(Win) |
| std::from_chars | 329.232 | 0.119742 | 0.126166ms | 200 | 30 | 14.4368 | 579.333 | 6.64767 | 2(Loss) |
| strtoll/strtoull | 126.181 | 0.041792 | 0.302684ms | 200 | 30 | 11.9724 | 1511.6 | 18.0405 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 400.009 | 0.0246905 | 0.89137ms | 2000 | 30 | 41.5816 | 4768.27 | 5.7869 | 1(Win) |
| std::from_chars | 327.371 | 0.0336894 | 1.08104ms | 2000 | 30 | 115.582 | 5826.27 | 7.08127 | 2(Loss) |
| strtoll/strtoull | 124.063 | 1.73428 | 2.80354ms | 2000 | 30 | 2.13273e+06 | 15374.1 | 18.7543 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 362.149 | 0.963071 | 9.48933ms | 20000 | 30 | 7.71832e+06 | 52667.5 | 6.43525 | 1(Win) |
| std::from_chars | 293.383 | 0.57704 | 11.6832ms | 20000 | 30 | 4.22207e+06 | 65012.3 | 7.94503 | 2(Loss) |
| strtoll/strtoull | 128.007 | 0.321503 | 26.9416ms | 20000 | 30 | 6.88468e+06 | 149003 | 18.2144 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 344.259 | 0.18788 | 99.8475ms | 200000 | 30 | 3.25064e+07 | 554044 | 6.77359 | 1(Win) |
| std::from_chars | 291.409 | 0.179331 | 118.228ms | 200000 | 30 | 4.13318e+07 | 654526 | 8.00195 | 2(Loss) |
| strtoll/strtoull | 125.315 | 0.242108 | 274.153ms | 200000 | 30 | 4.07378e+08 | 1.52205e+06 | 18.6093 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 487.979 | 0.072033 | 0.174515ms | 400 | 30 | 9.51264 | 781.733 | 4.56925 | 1(Win) |
| std::from_chars | 446.756 | 0.0930724 | 0.169266ms | 400 | 30 | 18.9471 | 853.867 | 5.00408 | 2(Loss) |
| strtoll/strtoull | 167.104 | 0.0346443 | 0.442455ms | 400 | 30 | 18.7644 | 2282.83 | 13.7364 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 509.351 | 0.0166122 | 3.21289ms | 4000 | 30 | 46.4368 | 7489.33 | 4.55742 | 1(Win) |
| std::from_chars | 316.76 | 2.18993 | 2.13983ms | 4000 | 30 | 2.08661e+06 | 12042.9 | 7.34143 | 2(Loss) |
| strtoll/strtoull | 139.196 | 0.0341893 | 4.93859ms | 4000 | 30 | 2633.72 | 27405.3 | 16.7343 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.641 | 1.00516 | 19.6794ms | 40000 | 30 | 3.48725e+07 | 107262 | 6.55516 | 1(Win) |
| std::from_chars | 255.907 | 0.345516 | 26.8964ms | 40000 | 30 | 7.95818e+06 | 149066 | 9.111 | 2(Loss) |
| strtoll/strtoull | 136.584 | 0.244113 | 50.3819ms | 40000 | 30 | 1.39452e+07 | 279294 | 17.0727 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 279.731 | 0.202419 | 245.879ms | 400000 | 30 | 2.28592e+08 | 1.3637e+06 | 8.33666 | 1(Win) |
| std::from_chars | 242.412 | 0.105664 | 283.6ms | 400000 | 30 | 8.29441e+07 | 1.57364e+06 | 9.61994 | 2(Loss) |
| strtoll/strtoull | 134.585 | 0.357364 | 508.86ms | 400000 | 30 | 3.07803e+09 | 2.83442e+06 | 17.3278 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 491.289 | 0.120171 | 0.155078ms | 400 | 30 | 26.1195 | 776.467 | 4.53658 | 1(Win) |
| std::from_chars | 357.059 | 0.105581 | 0.206835ms | 400 | 30 | 38.1713 | 1068.37 | 6.31892 | 2(Loss) |
| strtoll/strtoull | 154.425 | 0.0411705 | 0.458564ms | 400 | 30 | 31.0299 | 2470.27 | 14.8942 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 516.775 | 0.0149099 | 3.16983ms | 4000 | 30 | 36.3402 | 7381.73 | 4.49167 | 1(Win) |
| std::from_chars | 341.795 | 0.0694735 | 4.70168ms | 4000 | 30 | 1803.63 | 11160.8 | 6.80199 | 2(Loss) |
| strtoll/strtoull | 151.223 | 1.5995 | 4.56577ms | 4000 | 30 | 4.884e+06 | 25225.7 | 15.3992 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 407.318 | 0.493612 | 16.7382ms | 40000 | 30 | 6.41129e+06 | 93654 | 5.72344 | 1(Win) |
| std::from_chars | 335.861 | 0.484831 | 20.4754ms | 40000 | 30 | 9.09712e+06 | 113580 | 6.94161 | 2(Loss) |
| strtoll/strtoull | 154.571 | 0.565371 | 44.3693ms | 40000 | 30 | 5.84056e+07 | 246793 | 15.0851 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 359.386 | 0.213762 | 191.087ms | 400000 | 30 | 1.54448e+08 | 1.06145e+06 | 6.48876 | 1(Win) |
| std::from_chars | 325.781 | 0.240039 | 210.452ms | 400000 | 30 | 2.37003e+08 | 1.17094e+06 | 7.15811 | 2(Loss) |
| strtoll/strtoull | 154.129 | 0.152976 | 445.298ms | 400000 | 30 | 4.30052e+08 | 2.47501e+06 | 15.1307 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 494.537 | 0.090819 | 0.154617ms | 400 | 30 | 14.723 | 771.367 | 4.49567 | 1(Win) |
| std::from_chars | 392.553 | 0.00808222 | 0.190215ms | 400 | 30 | 0.185057 | 971.767 | 5.71875 | 2(Loss) |
| strtoll/strtoull | 170.334 | 0.0461033 | 0.432766ms | 400 | 30 | 31.9816 | 2239.53 | 13.4772 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 523.094 | 0.0168353 | 1.35113ms | 4000 | 30 | 45.2195 | 7292.57 | 4.43756 | 1(Win) |
| std::from_chars | 363.45 | 0.244408 | 4.45003ms | 4000 | 30 | 19741.7 | 10495.8 | 6.39551 | 2(Loss) |
| strtoll/strtoull | 171.612 | 0.0460954 | 4.0479ms | 4000 | 30 | 3149.63 | 22228.6 | 13.5687 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 424.092 | 0.611596 | 15.9927ms | 40000 | 30 | 9.07929e+06 | 89949.8 | 5.49696 | 1(Win) |
| std::from_chars | 349.499 | 0.458809 | 19.6902ms | 40000 | 30 | 7.5234e+06 | 109148 | 6.67053 | 2(Loss) |
| strtoll/strtoull | 171.692 | 0.286592 | 40.0803ms | 40000 | 30 | 1.21639e+07 | 222183 | 13.5811 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 363.91 | 0.316169 | 187.312ms | 400000 | 30 | 3.29528e+08 | 1.04825e+06 | 6.40818 | 1(Win) |
| std::from_chars | 339.197 | 0.181364 | 202.58ms | 400000 | 30 | 1.24808e+08 | 1.12463e+06 | 6.87499 | 2(Loss) |
| strtoll/strtoull | 171.562 | 0.0460879 | 401.221ms | 400000 | 30 | 3.15047e+07 | 2.22352e+06 | 13.5932 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 473.346 | 0.115723 | 0.160108ms | 400 | 30 | 26.0931 | 805.9 | 4.70808 | 1(Win) |
| std::from_chars | 400.129 | 0.101395 | 0.472159ms | 400 | 30 | 28.0333 | 953.367 | 5.62467 | 2(Loss) |
| strtoll/strtoull | 161.107 | 0.036807 | 0.440801ms | 400 | 30 | 22.7862 | 2367.8 | 14.2572 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 494.813 | 0.0172967 | 1.4067ms | 4000 | 30 | 53.3437 | 7709.37 | 4.69134 | 1(Win) |
| std::from_chars | 398.324 | 0.0162439 | 1.75893ms | 4000 | 30 | 72.6023 | 9576.87 | 5.83307 | 2(Loss) |
| strtoll/strtoull | 158.505 | 1.78546 | 4.31116ms | 4000 | 30 | 5.53932e+06 | 24066.7 | 14.6927 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 439.683 | 0.457782 | 15.7175ms | 40000 | 30 | 4.73238e+06 | 86760.1 | 5.3018 | 1(Win) |
| std::from_chars | 345.458 | 0.525635 | 19.4557ms | 40000 | 30 | 1.01069e+07 | 110424 | 6.74854 | 2(Loss) |
| strtoll/strtoull | 160.339 | 0.265135 | 42.8508ms | 40000 | 30 | 1.19371e+07 | 237914 | 14.5428 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 412.53 | 0.114744 | 166.36ms | 400000 | 30 | 3.37746e+07 | 924707 | 5.65277 | 1(Win) |
| std::from_chars | 341.06 | 0.249111 | 199.826ms | 400000 | 30 | 2.32898e+08 | 1.11848e+06 | 6.83741 | 2(Loss) |
| strtoll/strtoull | 158.192 | 0.196839 | 432.673ms | 400000 | 30 | 6.75925e+08 | 2.41144e+06 | 14.742 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 554.65 | 0.0614438 | 0.629612ms | 800 | 30 | 21.4299 | 1375.53 | 4.0915 | 1(Win) |
| std::from_chars | 461.893 | 0.0635747 | 0.310968ms | 800 | 30 | 33.0816 | 1651.77 | 4.93967 | 2(Loss) |
| strtoll/strtoull | 217.798 | 0.0287592 | 0.68752ms | 800 | 30 | 30.4471 | 3502.97 | 10.5993 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 579.734 | 0.0155304 | 2.42015ms | 8000 | 30 | 125.316 | 13160.2 | 4.01166 | 1(Win) |
| std::from_chars | 406.712 | 0.488189 | 3.41587ms | 8000 | 30 | 251596 | 18758.7 | 5.72392 | 2(Loss) |
| strtoll/strtoull | 207.741 | 0.69607 | 6.61233ms | 8000 | 30 | 1.96047e+06 | 36725.4 | 11.2159 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 530.486 | 0.449971 | 26.2258ms | 80000 | 30 | 1.25638e+07 | 143819 | 4.39488 | 1(Win) |
| std::from_chars | 396.138 | 0.374668 | 34.6405ms | 80000 | 30 | 1.56207e+07 | 192594 | 5.8859 | 2(Loss) |
| strtoll/strtoull | 207.332 | 0.241079 | 66.2266ms | 80000 | 30 | 2.36094e+07 | 367979 | 11.2469 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 454.408 | 0.108143 | 302.571ms | 800000 | 30 | 9.89032e+07 | 1.67898e+06 | 5.13195 | 1(Win) |
| std::from_chars | 396.865 | 0.0420071 | 346.373ms | 800000 | 30 | 1.95641e+07 | 1.92242e+06 | 5.87613 | 2(Loss) |
| strtoll/strtoull | 206.83 | 0.0985096 | 664.658ms | 800000 | 30 | 3.96126e+08 | 3.68873e+06 | 11.2755 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 517.539 | 0.0438878 | 0.298717ms | 800 | 30 | 12.5575 | 1474.17 | 4.39367 | 1(Win) |
| std::from_chars | 473.258 | 0.0470584 | 0.322361ms | 800 | 30 | 17.2655 | 1612.1 | 4.82354 | 2(Loss) |
| strtoll/strtoull | 226.468 | 0.0246399 | 0.638118ms | 800 | 30 | 20.6713 | 3368.87 | 10.1919 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 514.736 | 1.79376 | 2.6697ms | 8000 | 30 | 2.12062e+06 | 14822 | 4.52024 | 1(Win) |
| std::from_chars | 485.04 | 1.70887 | 2.83298ms | 8000 | 30 | 2.16751e+06 | 15729.4 | 4.79762 | 2(Loss) |
| strtoll/strtoull | 233.676 | 0.819115 | 5.94237ms | 8000 | 30 | 2.14566e+06 | 32649.4 | 9.96905 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 511.881 | 0.409809 | 26.9046ms | 80000 | 30 | 1.11925e+07 | 149046 | 4.55469 | 1(Win) |
| std::from_chars | 490.566 | 0.380537 | 28.1454ms | 80000 | 30 | 1.05075e+07 | 155522 | 4.75272 | 2(Loss) |
| strtoll/strtoull | 233.432 | 0.294141 | 58.9044ms | 80000 | 30 | 2.77263e+07 | 326836 | 9.98925 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 505.036 | 0.0964987 | 272.266ms | 800000 | 30 | 6.37529e+07 | 1.51066e+06 | 4.61739 | 1(Win) |
| std::from_chars | 487.328 | 0.209577 | 281.812ms | 800000 | 30 | 3.22959e+08 | 1.56556e+06 | 4.7853 | 2(Loss) |
| strtoll/strtoull | 233.184 | 0.084945 | 589.775ms | 800000 | 30 | 2.31728e+08 | 3.27183e+06 | 10.0003 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 633.565 | 0.0844999 | 0.230699ms | 800 | 30 | 31.0621 | 1204.2 | 3.57292 | 1(Win) |
| std::from_chars | 480.864 | 0.0564224 | 0.317912ms | 800 | 30 | 24.0414 | 1586.6 | 4.73967 | 2(Loss) |
| strtoll/strtoull | 244.05 | 0.586457 | 0.572476ms | 800 | 30 | 10083.7 | 3126.17 | 9.44683 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 631.701 | 2.2986 | 2.18209ms | 8000 | 30 | 2.31209e+06 | 12077.5 | 3.68053 | 1(Win) |
| std::from_chars | 483.307 | 1.68605 | 2.84576ms | 8000 | 30 | 2.12517e+06 | 15785.8 | 4.81445 | 2(Loss) |
| strtoll/strtoull | 246.801 | 0.904344 | 5.62085ms | 8000 | 30 | 2.34464e+06 | 30913.2 | 9.43863 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 622.946 | 0.527917 | 22.0445ms | 80000 | 30 | 1.2541e+07 | 122473 | 3.74235 | 1(Win) |
| std::from_chars | 487.35 | 0.421086 | 28.2299ms | 80000 | 30 | 1.30365e+07 | 156549 | 4.78394 | 2(Loss) |
| strtoll/strtoull | 247.025 | 0.26953 | 55.6881ms | 80000 | 30 | 2.07889e+07 | 308851 | 9.43934 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 612.136 | 0.181323 | 224.306ms | 800000 | 30 | 1.53218e+08 | 1.24636e+06 | 3.80952 | 1(Win) |
| std::from_chars | 482.649 | 0.189718 | 283.377ms | 800000 | 30 | 2.69809e+08 | 1.58073e+06 | 4.83138 | 2(Loss) |
| strtoll/strtoull | 246.178 | 0.117738 | 557.786ms | 800000 | 30 | 3.99426e+08 | 3.09914e+06 | 9.47258 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 647.712 | 0.0893053 | 0.226612ms | 800 | 30 | 33.1966 | 1177.9 | 3.48921 | 1(Win) |
| std::from_chars | 460.481 | 0.0686693 | 0.312492ms | 800 | 30 | 38.8333 | 1656.83 | 4.95608 | 2(Loss) |
| strtoll/strtoull | 183.894 | 0.623937 | 0.778069ms | 800 | 30 | 20102.4 | 4148.8 | 12.5737 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 668.313 | 0.0251414 | 2.10488ms | 8000 | 30 | 247.128 | 11415.9 | 3.47838 | 1(Win) |
| std::from_chars | 434.406 | 0.144081 | 3.29438ms | 8000 | 30 | 19209.9 | 17562.8 | 5.35743 | 2(Loss) |
| strtoll/strtoull | 185.032 | 0.670494 | 7.53281ms | 8000 | 30 | 2.29296e+06 | 41232.8 | 12.593 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 591.866 | 0.447529 | 23.5979ms | 80000 | 30 | 9.98384e+06 | 128904 | 3.93887 | 1(Win) |
| std::from_chars | 428.291 | 0.444892 | 32.1103ms | 80000 | 30 | 1.88422e+07 | 178136 | 5.44373 | 2(Loss) |
| strtoll/strtoull | 186.788 | 0.257593 | 73.7643ms | 80000 | 30 | 3.32102e+07 | 408452 | 12.4838 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 526.88 | 0.0860169 | 261.049ms | 800000 | 30 | 4.65421e+07 | 1.44803e+06 | 4.4261 | 1(Win) |
| std::from_chars | 428.473 | 0.105698 | 320.962ms | 800000 | 30 | 1.06264e+08 | 1.7806e+06 | 5.44259 | 2(Loss) |
| strtoll/strtoull | 185.456 | 0.0952056 | 743.258ms | 800000 | 30 | 4.602e+08 | 4.11387e+06 | 12.575 | 3(Loss) |
