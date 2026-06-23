# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 355.362 | 0.274162 | 0.087303ms | 100 | 30 | 16.2402 | 268.367 | 1(Win) |
| std::from_chars | 199.597 | 0.182126 | 0.138428ms | 100 | 30 | 22.7172 | 477.8 | 2(Loss) |
| strtoll/strtoull | 84.0118 | 0.0746158 | 0.24666ms | 100 | 30 | 21.523 | 1135.17 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 413.359 | 0.0858047 | 0.470136ms | 1000 | 30 | 117.568 | 2307.13 | 1(Win) |
| std::from_chars | 210.451 | 0.029695 | 0.879248ms | 1000 | 30 | 54.323 | 4531.57 | 2(Loss) |
| strtoll/strtoull | 82.0807 | 0.668461 | 2.16907ms | 1000 | 30 | 180964 | 11618.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.502 | 2.02208 | 9.48098ms | 10000 | 30 | 2.49396e+07 | 45090.5 | 1(Win) |
| std::from_chars | 108.531 | 0.433579 | 16.2397ms | 10000 | 30 | 4.35459e+06 | 87870.8 | 2(Loss) |
| strtoll/strtoull | 59.583 | 0.360927 | 28.894ms | 10000 | 30 | 1.00119e+07 | 160058 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 118.381 | 0.139109 | 146.352ms | 100000 | 30 | 3.76762e+07 | 805597 | 1(Win) |
| std::from_chars | 92.3404 | 0.128471 | 186.056ms | 100000 | 30 | 5.28138e+07 | 1.03278e+06 | 2(Loss) |
| strtoll/strtoull | 57.3548 | 0.110269 | 299.423ms | 100000 | 30 | 1.00854e+08 | 1.66276e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.853 | 0.233815 | 0.09103ms | 100 | 30 | 13.7931 | 290 | 1(Win) |
| std::from_chars | 205.74 | 0.181157 | 0.132517ms | 100 | 30 | 21.154 | 463.533 | 2(Loss) |
| strtoll/strtoull | 74.7784 | 0.0670769 | 0.268239ms | 100 | 30 | 21.954 | 1275.33 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 384.743 | 0.0973888 | 0.521001ms | 1000 | 30 | 174.823 | 2478.73 | 1(Win) |
| std::from_chars | 222.87 | 0.0258911 | 0.833823ms | 1000 | 30 | 36.823 | 4279.07 | 2(Loss) |
| strtoll/strtoull | 70.3063 | 0.0349927 | 2.5201ms | 1000 | 30 | 675.909 | 13564.6 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 264.217 | 0.745647 | 6.77685ms | 10000 | 30 | 2.17303e+06 | 36094.4 | 1(Win) |
| std::from_chars | 154.446 | 1.08351 | 11.0374ms | 10000 | 30 | 1.34287e+07 | 61748.1 | 2(Loss) |
| strtoll/strtoull | 70.6743 | 0.37669 | 24.5981ms | 10000 | 30 | 7.75115e+06 | 134939 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.177 | 0.24225 | 86.7856ms | 100000 | 30 | 4.07701e+07 | 481224 | 1(Win) |
| std::from_chars | 142.681 | 0.15587 | 120.516ms | 100000 | 30 | 3.25625e+07 | 668398 | 2(Loss) |
| strtoll/strtoull | 70.2749 | 0.0742014 | 245.26ms | 100000 | 30 | 3.04189e+07 | 1.35706e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.192 | 0.273615 | 0.083946ms | 100 | 30 | 14.2816 | 252.167 | 1(Win) |
| std::from_chars | 196.135 | 0.190107 | 0.125714ms | 100 | 30 | 25.6333 | 486.233 | 2(Loss) |
| strtoll/strtoull | 90.3614 | 0.0823516 | 0.226753ms | 100 | 30 | 22.6621 | 1055.4 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 455.606 | 0.0391682 | 0.435602ms | 1000 | 30 | 20.1655 | 2093.2 | 1(Win) |
| std::from_chars | 209.055 | 0.0318288 | 0.860423ms | 1000 | 30 | 63.2471 | 4561.83 | 2(Loss) |
| strtoll/strtoull | 81.779 | 0.0193877 | 2.14936ms | 1000 | 30 | 153.352 | 11661.6 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.412 | 0.853214 | 6.14144ms | 10000 | 30 | 2.43834e+06 | 33414 | 1(Win) |
| std::from_chars | 157.662 | 0.947688 | 10.5104ms | 10000 | 30 | 9.85817e+06 | 60488.4 | 2(Loss) |
| strtoll/strtoull | 81.699 | 0.417534 | 21.1854ms | 10000 | 30 | 7.1264e+06 | 116730 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.396 | 0.210877 | 80.7774ms | 100000 | 30 | 2.68961e+07 | 449009 | 1(Win) |
| std::from_chars | 143.343 | 0.14974 | 119.954ms | 100000 | 30 | 2.97745e+07 | 665311 | 2(Loss) |
| strtoll/strtoull | 80.4918 | 0.101048 | 213.273ms | 100000 | 30 | 4.30002e+07 | 1.18481e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 339.507 | 0.433948 | 0.088384ms | 100 | 30 | 44.5759 | 280.9 | 1(Win) |
| std::from_chars | 292.538 | 0.282904 | 0.098002ms | 100 | 30 | 25.5172 | 326 | 2(Loss) |
| strtoll/strtoull | 78.3413 | 0.0766096 | 0.25753ms | 100 | 30 | 26.092 | 1217.33 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.628 | 0.039166 | 0.47772ms | 1000 | 30 | 26.7402 | 2410.53 | 1(Win) |
| std::from_chars | 266.712 | 0.0283922 | 0.700916ms | 1000 | 30 | 30.9195 | 3575.67 | 2(Loss) |
| strtoll/strtoull | 72.0735 | 2.15748 | 2.41851ms | 1000 | 30 | 2.4449e+06 | 13232 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.086 | 0.650146 | 7.61384ms | 10000 | 30 | 2.14115e+06 | 41091.5 | 1(Win) |
| std::from_chars | 178.092 | 1.2425 | 9.51074ms | 10000 | 30 | 1.32808e+07 | 53549.4 | 2(Loss) |
| strtoll/strtoull | 72.24 | 0.377142 | 23.9107ms | 10000 | 30 | 7.43663e+06 | 132015 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.999 | 0.342893 | 96.0419ms | 100000 | 30 | 1.01252e+08 | 535776 | 1(Win) |
| std::from_chars | 163.374 | 0.176088 | 105.332ms | 100000 | 30 | 3.16969e+07 | 583738 | 2(Loss) |
| strtoll/strtoull | 69.5193 | 0.0786078 | 247.309ms | 100000 | 30 | 3.48853e+07 | 1.37181e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 398 | 0.143136 | 0.126796ms | 200 | 30 | 14.1161 | 479.233 | 1(Win) |
| std::from_chars | 318.033 | 0.106341 | 0.146934ms | 200 | 30 | 12.2023 | 599.733 | 2(Loss) |
| strtoll/strtoull | 128.782 | 0.0653846 | 0.305339ms | 200 | 30 | 28.1333 | 1481.07 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 411.987 | 0.0214626 | 0.899015ms | 2000 | 30 | 29.6195 | 4629.63 | 1(Win) |
| std::from_chars | 319.305 | 0.0209721 | 1.14611ms | 2000 | 30 | 47.0816 | 5973.43 | 2(Loss) |
| strtoll/strtoull | 107.51 | 1.51174 | 3.23493ms | 2000 | 30 | 2.15792e+06 | 17741.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 251.482 | 0.608657 | 12.8965ms | 20000 | 30 | 6.39312e+06 | 75844.3 | 1(Win) |
| std::from_chars | 175.074 | 0.768067 | 19.3573ms | 20000 | 30 | 2.10057e+07 | 108945 | 2(Loss) |
| strtoll/strtoull | 97.1884 | 0.283084 | 35.5071ms | 20000 | 30 | 9.25941e+06 | 196253 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 194.916 | 0.211402 | 176.558ms | 200000 | 30 | 1.28383e+08 | 978551 | 1(Win) |
| std::from_chars | 165.299 | 0.14511 | 207.674ms | 200000 | 30 | 8.41073e+07 | 1.15388e+06 | 2(Loss) |
| strtoll/strtoull | 95.0714 | 0.11811 | 361.101ms | 200000 | 30 | 1.68443e+08 | 2.00623e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.755 | 0.195096 | 0.124382ms | 200 | 30 | 26.9299 | 485.633 | 1(Win) |
| std::from_chars | 300.449 | 0.139689 | 0.151843ms | 200 | 30 | 23.592 | 634.833 | 2(Loss) |
| strtoll/strtoull | 115.276 | 0.0489713 | 0.334664ms | 200 | 30 | 19.6966 | 1654.6 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 421.821 | 0.0244148 | 0.890329ms | 2000 | 30 | 36.5621 | 4521.7 | 1(Win) |
| std::from_chars | 264.135 | 0.0284996 | 1.35317ms | 2000 | 30 | 127.059 | 7221.1 | 2(Loss) |
| strtoll/strtoull | 112.371 | 1.48949 | 3.07183ms | 2000 | 30 | 1.91754e+06 | 16973.6 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.344 | 1.3607 | 10.5652ms | 20000 | 30 | 1.87433e+07 | 58090 | 1(Win) |
| std::from_chars | 244.761 | 0.579847 | 14.1196ms | 20000 | 30 | 6.12522e+06 | 77926.9 | 2(Loss) |
| strtoll/strtoull | 111.235 | 0.341094 | 31.0327ms | 20000 | 30 | 1.02623e+07 | 171470 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 295.338 | 0.177395 | 116.492ms | 200000 | 30 | 3.93754e+07 | 645819 | 1(Win) |
| std::from_chars | 244.084 | 0.118091 | 141.067ms | 200000 | 30 | 2.5547e+07 | 781431 | 2(Loss) |
| strtoll/strtoull | 110.49 | 0.0980106 | 310.747ms | 200000 | 30 | 8.58784e+07 | 1.72627e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.082 | 0.190793 | 0.127829ms | 200 | 30 | 25.8437 | 486.467 | 1(Win) |
| std::from_chars | 270.674 | 0.126075 | 0.167873ms | 200 | 30 | 23.6782 | 704.667 | 2(Loss) |
| strtoll/strtoull | 131.05 | 0.0575026 | 0.299539ms | 200 | 30 | 21.0126 | 1455.43 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 423.281 | 0.0169027 | 1.97822ms | 2000 | 30 | 17.4034 | 4506.1 | 1(Win) |
| std::from_chars | 259.408 | 0.35015 | 1.3913ms | 2000 | 30 | 19884.8 | 7352.7 | 2(Loss) |
| strtoll/strtoull | 126.767 | 1.98014 | 2.72389ms | 2000 | 30 | 2.66292e+06 | 15046.1 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 315.286 | 0.715622 | 10.6671ms | 20000 | 30 | 5.62261e+06 | 60495.7 | 1(Win) |
| std::from_chars | 247.908 | 0.583271 | 13.8631ms | 20000 | 30 | 6.04144e+06 | 76937.6 | 2(Loss) |
| strtoll/strtoull | 128.504 | 0.347996 | 26.8836ms | 20000 | 30 | 8.00382e+06 | 148427 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.221 | 0.142704 | 120.187ms | 200000 | 30 | 2.73208e+07 | 668727 | 1(Win) |
| std::from_chars | 241.798 | 0.582499 | 141.156ms | 200000 | 30 | 6.33383e+08 | 788819 | 2(Loss) |
| strtoll/strtoull | 127.262 | 0.0936122 | 269.972ms | 200000 | 30 | 5.90539e+07 | 1.49876e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.693 | 0.16304 | 0.129561ms | 200 | 30 | 20.2299 | 503.667 | 1(Win) |
| std::from_chars | 330.506 | 0.158368 | 0.157273ms | 200 | 30 | 25.0586 | 577.1 | 2(Loss) |
| strtoll/strtoull | 126.056 | 0.0231449 | 0.310659ms | 200 | 30 | 3.67931 | 1513.1 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 379.172 | 0.521443 | 2.18568ms | 2000 | 30 | 20640.6 | 5030.3 | 1(Win) |
| std::from_chars | 338.649 | 0.0241333 | 1.06629ms | 2000 | 30 | 55.4264 | 5632.23 | 2(Loss) |
| strtoll/strtoull | 123.281 | 1.75219 | 2.81071ms | 2000 | 30 | 2.20471e+06 | 15471.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 343.937 | 1.37469 | 10.024ms | 20000 | 30 | 1.74355e+07 | 55456.4 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 338.326 | 0.802829 | 10.1997ms | 20000 | 30 | 6.14548e+06 | 56376 | 1(Tie) |
| strtoll/strtoull | 126.426 | 0.604794 | 27.1838ms | 20000 | 30 | 2.49761e+07 | 150867 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 337.43 | 0.302384 | 101.737ms | 200000 | 30 | 8.76462e+07 | 565258 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 336.803 | 0.219682 | 102.127ms | 200000 | 30 | 4.64321e+07 | 566310 | 1(Tie) |
| strtoll/strtoull | 124.07 | 0.067193 | 277.69ms | 200000 | 30 | 3.20106e+07 | 1.53731e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 554.462 | 0.128501 | 0.165037ms | 400 | 30 | 23.4483 | 688 | 1(Win) |
| std::from_chars | 374.137 | 0.0766372 | 0.220551ms | 400 | 30 | 18.3172 | 1019.6 | 2(Loss) |
| strtoll/strtoull | 157.253 | 0.037349 | 0.476799ms | 400 | 30 | 24.6264 | 2425.83 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 573.61 | 0.0411853 | 1.26864ms | 4000 | 30 | 225.057 | 6650.33 | 1(Win) |
| std::from_chars | 289.092 | 2.15509 | 2.34691ms | 4000 | 30 | 2.42605e+06 | 13195.5 | 2(Loss) |
| strtoll/strtoull | 140.51 | 0.987359 | 4.9879ms | 4000 | 30 | 2.15565e+06 | 27149 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 429.883 | 0.605489 | 17.0647ms | 40000 | 30 | 8.66071e+06 | 88738 | 1(Win) |
| std::from_chars | 233.208 | 0.376782 | 29.0237ms | 40000 | 30 | 1.13955e+07 | 163575 | 2(Loss) |
| strtoll/strtoull | 138.776 | 0.629659 | 49.2456ms | 40000 | 30 | 8.98713e+07 | 274881 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 294.615 | 0.122128 | 234.155ms | 400000 | 30 | 7.5017e+07 | 1.29481e+06 | 1(Win) |
| std::from_chars | 231.973 | 0.135186 | 296.306ms | 400000 | 30 | 1.48262e+08 | 1.64446e+06 | 2(Loss) |
| strtoll/strtoull | 137.438 | 0.0518809 | 500.19ms | 400000 | 30 | 6.22076e+07 | 2.77558e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 564.443 | 0.134996 | 0.159137ms | 400 | 30 | 24.9713 | 675.833 | 1(Win) |
| std::from_chars | 328.721 | 0.0579511 | 0.283047ms | 400 | 30 | 13.5678 | 1160.47 | 2(Loss) |
| strtoll/strtoull | 154.675 | 0.0348818 | 0.500162ms | 400 | 30 | 22.2023 | 2466.27 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 595.55 | 0.0251995 | 1.21524ms | 4000 | 30 | 78.1609 | 6405.33 | 1(Win) |
| std::from_chars | 303.192 | 0.705124 | 2.30971ms | 4000 | 30 | 236121 | 12581.8 | 2(Loss) |
| strtoll/strtoull | 149.487 | 1.63132 | 4.60778ms | 4000 | 30 | 5.19897e+06 | 25518.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 444.679 | 0.914092 | 15.6229ms | 40000 | 30 | 1.84471e+07 | 85785.4 | 1(Win) |
| std::from_chars | 309.46 | 0.42754 | 22.2384ms | 40000 | 30 | 8.33274e+06 | 123270 | 2(Loss) |
| strtoll/strtoull | 154.348 | 0.259956 | 44.7154ms | 40000 | 30 | 1.23834e+07 | 247149 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 386.993 | 0.232307 | 176.391ms | 400000 | 30 | 1.57312e+08 | 985728 | 1(Win) |
| std::from_chars | 296.839 | 0.149161 | 231.571ms | 400000 | 30 | 1.10233e+08 | 1.28511e+06 | 2(Loss) |
| strtoll/strtoull | 151.876 | 0.0825077 | 452.915ms | 400000 | 30 | 1.2884e+08 | 2.51171e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 538.343 | 0.116727 | 0.165418ms | 400 | 30 | 20.5241 | 708.6 | 1(Win) |
| std::from_chars | 345.107 | 0.078854 | 0.235769ms | 400 | 30 | 22.792 | 1105.37 | 2(Loss) |
| strtoll/strtoull | 174.158 | 0.0707101 | 0.453255ms | 400 | 30 | 71.9644 | 2190.37 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 551.98 | 0.0214727 | 1.30807ms | 4000 | 30 | 66.0644 | 6910.93 | 1(Win) |
| std::from_chars | 301.451 | 2.23314 | 2.29767ms | 4000 | 30 | 2.39573e+06 | 12654.4 | 2(Loss) |
| strtoll/strtoull | 167.494 | 1.86742 | 4.31723ms | 4000 | 30 | 5.42661e+06 | 22775.2 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 471.935 | 0.79192 | 14.8853ms | 40000 | 30 | 1.22925e+07 | 80830.9 | 1(Win) |
| std::from_chars | 302.018 | 0.947518 | 22.6131ms | 40000 | 30 | 4.29685e+07 | 126307 | 2(Loss) |
| strtoll/strtoull | 171.658 | 0.299649 | 40.0848ms | 40000 | 30 | 1.33027e+07 | 222227 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.444 | 0.0565691 | 179.89ms | 400000 | 30 | 9.50158e+06 | 994850 | 1(Win) |
| std::from_chars | 297.248 | 0.495213 | 230.428ms | 400000 | 30 | 1.21168e+09 | 1.28334e+06 | 2(Loss) |
| strtoll/strtoull | 169.673 | 0.0902187 | 404.643ms | 400000 | 30 | 1.23426e+08 | 2.24826e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 514.781 | 0.0481947 | 0.171981ms | 400 | 30 | 3.82644 | 741.033 | 1(Win) |
| std::from_chars | 362.407 | 0.0450005 | 0.227313ms | 400 | 30 | 6.73103 | 1052.6 | 2(Loss) |
| strtoll/strtoull | 159.231 | 0.0324039 | 1.09552ms | 400 | 30 | 18.0793 | 2395.7 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 524.196 | 0.0289422 | 1.36119ms | 4000 | 30 | 133.082 | 7277.23 | 1(Win) |
| std::from_chars | 359.94 | 0.0947791 | 1.98898ms | 4000 | 30 | 3026.95 | 10598.1 | 2(Loss) |
| strtoll/strtoull | 158.1 | 0.0155904 | 4.44228ms | 4000 | 30 | 424.516 | 24128.4 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.916 | 0.87546 | 14.8142ms | 40000 | 30 | 1.56815e+07 | 82584.2 | 1(Win) |
| std::from_chars | 350.053 | 0.758059 | 19.6164ms | 40000 | 30 | 2.0473e+07 | 108975 | 2(Loss) |
| strtoll/strtoull | 156.893 | 0.462632 | 43.816ms | 40000 | 30 | 3.79581e+07 | 243140 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 425.195 | 0.148304 | 161.755ms | 400000 | 30 | 5.31089e+07 | 897163 | 1(Win) |
| std::from_chars | 328.607 | 0.133118 | 207.861ms | 400000 | 30 | 7.16403e+07 | 1.16087e+06 | 2(Loss) |
| strtoll/strtoull | 159.242 | 0.0527215 | 431.757ms | 400000 | 30 | 4.78522e+07 | 2.39553e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 670.343 | 0.0796786 | 0.244525ms | 800 | 30 | 24.6713 | 1138.13 | 1(Win) |
| std::from_chars | 384.21 | 0.0380957 | 0.424311ms | 800 | 30 | 17.1678 | 1985.73 | 2(Loss) |
| strtoll/strtoull | 212.358 | 0.0252209 | 1.58333ms | 800 | 30 | 24.631 | 3592.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 705.404 | 0.027501 | 2.036ms | 8000 | 30 | 265.413 | 10815.6 | 1(Win) |
| std::from_chars | 380.729 | 0.0366315 | 3.67638ms | 8000 | 30 | 1616.51 | 20038.9 | 2(Loss) |
| strtoll/strtoull | 215.058 | 0.80835 | 6.47213ms | 8000 | 30 | 2.46712e+06 | 35476 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 536.405 | 0.45742 | 26.1531ms | 80000 | 30 | 1.26983e+07 | 142232 | 1(Win) |
| std::from_chars | 367.396 | 0.358606 | 37.6868ms | 80000 | 30 | 1.66367e+07 | 207662 | 2(Loss) |
| strtoll/strtoull | 212.783 | 0.242402 | 64.6827ms | 80000 | 30 | 2.26622e+07 | 358553 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 476.182 | 0.0721211 | 289.436ms | 800000 | 30 | 4.00571e+07 | 1.6022e+06 | 1(Win) |
| std::from_chars | 364.642 | 0.0708293 | 377.19ms | 800000 | 30 | 6.58861e+07 | 2.0923e+06 | 2(Loss) |
| strtoll/strtoull | 211.905 | 0.115333 | 647.407ms | 800000 | 30 | 5.17286e+08 | 3.60039e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 698.641 | 0.0444474 | 0.234617ms | 800 | 30 | 7.06782 | 1092.03 | 1(Win) |
| std::from_chars | 401.561 | 0.0463909 | 0.381261ms | 800 | 30 | 23.3057 | 1899.93 | 2(Loss) |
| strtoll/strtoull | 227.02 | 0.0270068 | 0.643238ms | 800 | 30 | 24.7126 | 3360.67 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 717.239 | 0.249931 | 4.55891ms | 8000 | 30 | 21203.8 | 10637.2 | 1(Win) |
| std::from_chars | 415.88 | 0.0163491 | 3.36595ms | 8000 | 30 | 269.868 | 18345.2 | 2(Loss) |
| strtoll/strtoull | 233.747 | 0.876623 | 5.92482ms | 8000 | 30 | 2.45604e+06 | 32639.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.373 | 0.671169 | 19.9565ms | 80000 | 30 | 1.65043e+07 | 110511 | 1(Win) |
| std::from_chars | 411.042 | 0.41078 | 33.442ms | 80000 | 30 | 1.744e+07 | 185611 | 2(Loss) |
| strtoll/strtoull | 232.814 | 0.273861 | 59.0301ms | 80000 | 30 | 2.41627e+07 | 327704 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 679.153 | 0.154203 | 201.964ms | 800000 | 30 | 9.00224e+07 | 1.12337e+06 | 1(Win) |
| std::from_chars | 414.601 | 0.121792 | 331.273ms | 800000 | 30 | 1.50688e+08 | 1.84018e+06 | 2(Loss) |
| strtoll/strtoull | 232.014 | 0.100262 | 591.793ms | 800000 | 30 | 3.26097e+08 | 3.28833e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 657.215 | 0.0559844 | 0.247792ms | 800 | 30 | 12.6713 | 1160.87 | 1(Win) |
| std::from_chars | 406.641 | 0.0430964 | 0.375881ms | 800 | 30 | 19.6138 | 1876.2 | 2(Loss) |
| strtoll/strtoull | 246.688 | 0.0279023 | 0.616209ms | 800 | 30 | 22.3402 | 3092.73 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 664.776 | 0.0275176 | 2.1746ms | 8000 | 30 | 299.206 | 11476.6 | 1(Win) |
| std::from_chars | 411.135 | 1.52433 | 3.37348ms | 8000 | 30 | 2.40042e+06 | 18556.9 | 2(Loss) |
| strtoll/strtoull | 247.324 | 0.976572 | 5.639ms | 8000 | 30 | 2.72256e+06 | 30847.8 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 517.927 | 0.607931 | 26.4798ms | 80000 | 30 | 2.40588e+07 | 147306 | 1(Win) |
| std::from_chars | 413.805 | 0.369895 | 33.3877ms | 80000 | 30 | 1.3953e+07 | 184372 | 2(Loss) |
| strtoll/strtoull | 247.319 | 0.254463 | 55.847ms | 80000 | 30 | 1.84858e+07 | 308484 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 504.81 | 0.0856936 | 272.406ms | 800000 | 30 | 5.03201e+07 | 1.51134e+06 | 1(Win) |
| std::from_chars | 414.186 | 0.0371839 | 331.853ms | 800000 | 30 | 1.40741e+07 | 1.84202e+06 | 2(Loss) |
| strtoll/strtoull | 246.514 | 0.0604229 | 557.551ms | 800000 | 30 | 1.04911e+08 | 3.09491e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 647.309 | 0.0765904 | 0.251217ms | 800 | 30 | 24.4471 | 1178.63 | 1(Win) |
| std::from_chars | 408.47 | 0.0494705 | 0.374448ms | 800 | 30 | 25.6138 | 1867.8 | 2(Loss) |
| strtoll/strtoull | 187.797 | 0.0287563 | 0.76775ms | 800 | 30 | 40.9437 | 4062.57 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 665.722 | 0.0303953 | 2.13124ms | 8000 | 30 | 364.023 | 11460.3 | 1(Win) |
| std::from_chars | 352.033 | 0.0304478 | 3.9852ms | 8000 | 30 | 1306.31 | 21672.4 | 2(Loss) |
| strtoll/strtoull | 187.013 | 0.653743 | 7.40004ms | 8000 | 30 | 2.13389e+06 | 40796 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 626.028 | 0.425344 | 22.2566ms | 80000 | 30 | 8.06108e+06 | 121870 | 1(Win) |
| std::from_chars | 386.38 | 0.547425 | 35.5943ms | 80000 | 30 | 3.50527e+07 | 197458 | 2(Loss) |
| strtoll/strtoull | 185.336 | 0.213436 | 74.3914ms | 80000 | 30 | 2.31589e+07 | 411653 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 533.507 | 0.11645 | 257.802ms | 800000 | 30 | 8.31961e+07 | 1.43005e+06 | 1(Win) |
| std::from_chars | 320.792 | 0.044963 | 413.633ms | 800000 | 30 | 3.43057e+07 | 2.3783e+06 | 2(Loss) |
| strtoll/strtoull | 184.684 | 0.0745026 | 743.956ms | 800000 | 30 | 2.84176e+08 | 4.13106e+06 | 3(Loss) |
