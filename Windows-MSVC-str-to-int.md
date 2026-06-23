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

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 444.431 | 2.39914 | 0.2271ms | 100 | 48 | 1272.16 | 214.583 | 1(Win) |
| strtoll/strtoull | 115.831 | 1.11764 | 0.1634ms | 100 | 30 | 2540.23 | 823.333 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 706.425 | 0.687761 | 0.3016ms | 1000 | 30 | 2586.21 | 1350 | 1(Win) |
| std::from_chars | 478.432 | 0.232377 | 0.9258ms | 1000 | 30 | 643.678 | 1993.33 | 2(Loss) |
| strtoll/strtoull | 118.518 | 0.432695 | 1.5562ms | 1000 | 30 | 36367.8 | 8046.67 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 267.711 | 0.963506 | 6.7906ms | 10000 | 30 | 3.53426e+06 | 35623.3 | 1(Win) |
| std::from_chars | 174.933 | 0.7323 | 9.9948ms | 10000 | 30 | 4.78144e+06 | 54516.7 | 2(Loss) |
| strtoll/strtoull | 79.1278 | 1.06209 | 21.8068ms | 10000 | 30 | 4.9157e+07 | 120523 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 167.892 | 0.395304 | 103.14ms | 100000 | 30 | 1.51261e+08 | 568030 | 1(Win) |
| std::from_chars | 143.414 | 0.376463 | 119.544ms | 100000 | 30 | 1.88011e+08 | 664980 | 2(Loss) |
| strtoll/strtoull | 78.2356 | 0.402687 | 221.613ms | 100000 | 30 | 7.2285e+08 | 1.21898e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 123.32 | 1.22961 | 0.1585ms | 100 | 30 | 2712.64 | 773.333 | 1(Win) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 709.931 | 0.685002 | 0.2746ms | 1000 | 30 | 2540.23 | 1343.33 | 1(Win) |
| std::from_chars | 501.055 | 0.175131 | 0.3678ms | 1000 | 30 | 333.333 | 1903.33 | 2(Loss) |
| strtoll/strtoull | 103.063 | 0.953644 | 3.8019ms | 1000 | 30 | 233609 | 9253.33 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 412.251 | 1.60601 | 4.3546ms | 10000 | 30 | 4.14092e+06 | 23133.3 | 1(Win) |
| std::from_chars | 330.296 | 1.54093 | 5.4257ms | 10000 | 30 | 5.93857e+06 | 28873.3 | 2(Loss) |
| strtoll/strtoull | 102.505 | 1.05557 | 16.6586ms | 10000 | 30 | 2.89334e+07 | 93036.7 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 286.635 | 0.726318 | 59.8503ms | 100000 | 30 | 1.75192e+08 | 332713 | 1(Win) |
| std::from_chars | 237.593 | 0.643379 | 73.327ms | 100000 | 30 | 2.00073e+08 | 401390 | 2(Loss) |
| strtoll/strtoull | 102.684 | 0.312965 | 169.624ms | 100000 | 30 | 2.53461e+08 | 928750 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 461.455 | 2.24132 | 0.0501ms | 100 | 30 | 643.678 | 206.667 | 1(Win) |
| strtoll/strtoull | 122.791 | 1.01125 | 0.1602ms | 100 | 30 | 1850.57 | 776.667 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 752.901 | 0.691086 | 0.26ms | 1000 | 30 | 2298.85 | 1266.67 | 1(Win) |
| std::from_chars | 479.233 | 0.279943 | 0.3962ms | 1000 | 30 | 931.034 | 1990 | 2(Loss) |
| strtoll/strtoull | 119.658 | 0.200879 | 1.4756ms | 1000 | 30 | 7689.66 | 7970 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 390.53 | 1.76809 | 10.3699ms | 10000 | 30 | 5.59269e+06 | 24420 | 1(Win) |
| std::from_chars | 316.695 | 1.28581 | 5.594ms | 10000 | 30 | 4.49775e+06 | 30113.3 | 2(Loss) |
| strtoll/strtoull | 106.231 | 1.00794 | 16.2369ms | 10000 | 30 | 2.45634e+07 | 89773.3 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 289.53 | 0.629784 | 60.1073ms | 100000 | 30 | 1.29097e+08 | 329387 | 1(Win) |
| std::from_chars | 238.172 | 0.478466 | 72.3558ms | 100000 | 30 | 1.10114e+08 | 400413 | 2(Loss) |
| strtoll/strtoull | 104.559 | 0.392172 | 161.883ms | 100000 | 30 | 3.83843e+08 | 912093 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 484.919 | 1.69492 | 0.1044ms | 100 | 30 | 333.333 | 196.667 | 1(Win) |
| strtoll/strtoull | 135.594 | 0.473934 | 0.1448ms | 100 | 30 | 333.333 | 703.333 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 653.202 | 0.623094 | 0.3013ms | 1000 | 30 | 2482.76 | 1460 | 1(Win) |
| std::from_chars | 509.986 | 0.635845 | 0.3738ms | 1000 | 30 | 4241.38 | 1870 | 2(Loss) |
| strtoll/strtoull | 107.76 | 0.184273 | 8.2547ms | 1000 | 48 | 12766 | 8850 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 305.469 | 1.16843 | 5.6428ms | 10000 | 30 | 3.992e+06 | 31220 | 1(Win) |
| std::from_chars | 249.392 | 1.96449 | 6.9185ms | 10000 | 30 | 1.69301e+07 | 38240 | 2(Loss) |
| strtoll/strtoull | 98.3609 | 0.666817 | 17.4568ms | 10000 | 30 | 1.25398e+07 | 96956.7 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 218.79 | 0.554838 | 78.1279ms | 100000 | 30 | 1.75469e+08 | 435887 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 218.761 | 0.688053 | 78.0018ms | 100000 | 30 | 2.69914e+08 | 435943 | 1(Tie) |
| strtoll/strtoull | 95.8778 | 0.251478 | 177.524ms | 100000 | 30 | 1.87709e+08 | 994677 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 688.366 | 2.21257 | 0.2784ms | 200 | 48 | 1804.08 | 277.083 | 1(Win) |
| std::from_chars | 621.962 | 1.51045 | 0.0872ms | 200 | 30 | 643.678 | 306.667 | 2(Loss) |
| strtoll/strtoull | 206.572 | 0.850617 | 0.1895ms | 200 | 30 | 1850.57 | 923.333 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 708.174 | 0.973964 | 0.5092ms | 2000 | 30 | 20643.7 | 2693.33 | 1(Win) |
| std::from_chars | 515.964 | 0.157966 | 0.7392ms | 2000 | 30 | 1022.99 | 3696.67 | 2(Loss) |
| strtoll/strtoull | 170.648 | 2.16174 | 9.7807ms | 2000 | 48 | 2.80223e+06 | 11177.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 367.906 | 0.958291 | 9.7369ms | 20000 | 30 | 7.40461e+06 | 51843.3 | 1(Win) |
| std::from_chars | 247.997 | 0.652925 | 14.0782ms | 20000 | 30 | 7.56507e+06 | 76910 | 2(Loss) |
| strtoll/strtoull | 137.071 | 0.80584 | 25.0991ms | 20000 | 30 | 3.77212e+07 | 139150 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 271.267 | 0.327626 | 127.35ms | 200000 | 30 | 1.59201e+08 | 703127 | 1(Win) |
| std::from_chars | 229.017 | 0.343792 | 149.978ms | 200000 | 30 | 2.45943e+08 | 832840 | 2(Loss) |
| strtoll/strtoull | 133.746 | 0.506987 | 257.385ms | 200000 | 30 | 1.56825e+09 | 1.4261e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 642.927 | 1.1236 | 0.066ms | 200 | 30 | 333.333 | 296.667 | 1(Win) |
| std::from_chars | 484.919 | 1.17764 | 0.101ms | 200 | 30 | 643.678 | 393.333 | 2(Loss) |
| strtoll/strtoull | 187.608 | 0.680701 | 0.2071ms | 200 | 30 | 1436.78 | 1016.67 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 716.936 | 0.383462 | 2.5402ms | 2000 | 48 | 4995.57 | 2660.42 | 1(Win) |
| std::from_chars | 471.338 | 0.228932 | 1.8638ms | 2000 | 30 | 2574.71 | 4046.67 | 2(Loss) |
| strtoll/strtoull | 171.782 | 0.109952 | 4.8761ms | 2000 | 30 | 4471.26 | 11103.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 607.952 | 1.55881 | 5.9375ms | 20000 | 30 | 7.17513e+06 | 31373.3 | 1(Win) |
| std::from_chars | 337.963 | 1.83112 | 9.9813ms | 20000 | 30 | 3.2039e+07 | 56436.7 | 2(Loss) |
| strtoll/strtoull | 165.458 | 1.06371 | 20.3483ms | 20000 | 30 | 4.51081e+07 | 115277 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 412.358 | 0.484363 | 83.5501ms | 200000 | 30 | 1.50583e+08 | 462547 | 1(Win) |
| std::from_chars | 333.661 | 0.46326 | 103.986ms | 200000 | 30 | 2.10388e+08 | 571643 | 2(Loss) |
| strtoll/strtoull | 164.291 | 0.1849 | 208.45ms | 200000 | 30 | 1.38238e+08 | 1.16096e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 484.919 | 1.17764 | 0.0857ms | 200 | 30 | 643.678 | 393.333 | 1(Win) |
| strtoll/strtoull | 189.472 | 0.460138 | 0.1966ms | 200 | 30 | 643.678 | 1006.67 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 757.887 | 0.274985 | 0.5235ms | 2000 | 30 | 1436.78 | 2516.67 | 1(Win) |
| std::from_chars | 437.131 | 0.232668 | 0.8342ms | 2000 | 30 | 3091.95 | 4363.33 | 2(Loss) |
| strtoll/strtoull | 180.563 | 0.997001 | 4.5402ms | 2000 | 30 | 332747 | 10563.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 529.672 | 1.20734 | 6.5969ms | 20000 | 30 | 5.67059e+06 | 36010 | 1(Win) |
| std::from_chars | 336.294 | 1.18339 | 10.2486ms | 20000 | 30 | 1.35145e+07 | 56716.7 | 2(Loss) |
| strtoll/strtoull | 170.127 | 1.20045 | 20.0686ms | 20000 | 30 | 5.43405e+07 | 112113 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 412.034 | 0.585003 | 82.8094ms | 200000 | 30 | 2.20004e+08 | 462910 | 1(Win) |
| std::from_chars | 327.727 | 0.408245 | 105.072ms | 200000 | 30 | 1.69355e+08 | 581993 | 2(Loss) |
| strtoll/strtoull | 170.868 | 0.308352 | 202.434ms | 200000 | 30 | 3.55428e+08 | 1.11627e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 586.877 | 1.94343 | 0.3306ms | 200 | 48 | 1914.89 | 325 | 1(Win) |
| strtoll/strtoull | 196.634 | 0.877281 | 0.1957ms | 200 | 30 | 2172.41 | 970 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 771.165 | 1.47549 | 0.4681ms | 2000 | 30 | 39954 | 2473.33 | 1(Win) |
| std::from_chars | 649.494 | 0.475537 | 0.5621ms | 2000 | 30 | 5850.57 | 2936.67 | 2(Loss) |
| strtoll/strtoull | 198.2 | 1.10477 | 1.7634ms | 2000 | 30 | 339092 | 9623.33 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 635.995 | 1.38606 | 5.5101ms | 20000 | 30 | 5.18369e+06 | 29990 | 1(Win) |
| std::from_chars | 515.407 | 1.76336 | 6.7508ms | 20000 | 30 | 1.27751e+07 | 37006.7 | 2(Loss) |
| strtoll/strtoull | 191.405 | 0.705972 | 17.9406ms | 20000 | 30 | 1.48474e+07 | 99650 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 562.9 | 0.603737 | 60.8472ms | 200000 | 30 | 1.25549e+08 | 338843 | 1(Win) |
| std::from_chars | 521.932 | 0.475436 | 65.9489ms | 200000 | 30 | 9.05604e+07 | 365440 | 2(Loss) |
| strtoll/strtoull | 193.128 | 0.273987 | 179.374ms | 200000 | 30 | 2.19659e+08 | 987607 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 847.711 | 2.06328 | 0.1037ms | 400 | 30 | 2586.21 | 450 | 1(Win) |
| std::from_chars | 685.275 | 1.65303 | 0.1493ms | 400 | 30 | 2540.23 | 556.667 | 2(Loss) |
| strtoll/strtoull | 300.37 | 0.67005 | 0.2511ms | 400 | 30 | 2172.41 | 1270 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 943.454 | 0.227581 | 0.7886ms | 4000 | 30 | 2540.23 | 4043.33 | 1(Win) |
| std::from_chars | 444.776 | 0.221389 | 3.785ms | 4000 | 30 | 10816.1 | 8576.67 | 2(Loss) |
| strtoll/strtoull | 274.373 | 0.0943374 | 2.6197ms | 4000 | 30 | 5160.92 | 13903.3 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 531.295 | 1.68132 | 13.0398ms | 40000 | 30 | 4.37193e+07 | 71800 | 1(Win) |
| std::from_chars | 335.25 | 1.23972 | 20.5404ms | 40000 | 30 | 5.96971e+07 | 113787 | 2(Loss) |
| strtoll/strtoull | 192.428 | 0.662483 | 35.0564ms | 40000 | 30 | 5.17432e+07 | 198240 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.187 | 0.453758 | 173.894ms | 400000 | 30 | 5.8439e+08 | 972673 | 1(Win) |
| std::from_chars | 323.85 | 0.26349 | 212.552ms | 400000 | 30 | 2.8899e+08 | 1.17792e+06 | 2(Loss) |
| strtoll/strtoull | 188.337 | 0.514399 | 356.231ms | 400000 | 30 | 3.25666e+09 | 2.02547e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 854.037 | 2.07405 | 0.1022ms | 400 | 30 | 2574.71 | 446.667 | 1(Win) |
| std::from_chars | 575.08 | 1.34903 | 0.1366ms | 400 | 30 | 2402.3 | 663.333 | 2(Loss) |
| strtoll/strtoull | 270.546 | 0.395096 | 0.2732ms | 400 | 30 | 931.034 | 1410 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 895.469 | 0.213549 | 0.7924ms | 4000 | 30 | 2482.76 | 4260 | 1(Win) |
| strtoll/strtoull | 243.129 | 1.55319 | 2.9084ms | 4000 | 30 | 1.78162e+06 | 15690 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 708.174 | 1.89076 | 9.9603ms | 40000 | 30 | 3.11195e+07 | 53866.7 | 1(Win) |
| std::from_chars | 450.395 | 0.683229 | 15.5467ms | 40000 | 30 | 1.00459e+07 | 84696.7 | 2(Loss) |
| strtoll/strtoull | 229.478 | 0.842813 | 30.294ms | 40000 | 30 | 5.88871e+07 | 166233 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 524.304 | 0.304286 | 131.949ms | 400000 | 30 | 1.47041e+08 | 727573 | 1(Win) |
| std::from_chars | 416.341 | 0.334937 | 165.251ms | 400000 | 30 | 2.82533e+08 | 916243 | 2(Loss) |
| strtoll/strtoull | 225.921 | 0.257303 | 304.54ms | 400000 | 30 | 5.66261e+08 | 1.68851e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 938.04 | 1.13903 | 0.0898ms | 400 | 30 | 643.678 | 406.667 | 1(Win) |
| std::from_chars | 646.559 | 0.944214 | 0.1251ms | 400 | 30 | 931.034 | 590 | 2(Loss) |
| strtoll/strtoull | 263.083 | 0.640329 | 0.2761ms | 400 | 30 | 2586.21 | 1450 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 964.932 | 0.234337 | 0.8028ms | 4000 | 30 | 2574.71 | 3953.33 | 1(Win) |
| std::from_chars | 488.281 | 0.242914 | 7.123ms | 4000 | 48 | 17287.2 | 7812.5 | 2(Loss) |
| strtoll/strtoull | 233.935 | 0.822195 | 6.8427ms | 4000 | 30 | 539264 | 16306.7 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 699.859 | 1.07439 | 10.1272ms | 40000 | 30 | 1.02882e+07 | 54506.7 | 1(Win) |
| std::from_chars | 435.468 | 0.779963 | 15.9332ms | 40000 | 30 | 1.40048e+07 | 87600 | 2(Loss) |
| strtoll/strtoull | 231.442 | 1.54533 | 29.125ms | 40000 | 30 | 1.94625e+08 | 164823 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 492.386 | 1.62022 | 134.731ms | 400000 | 30 | 4.72689e+09 | 774737 | 1(Win) |
| std::from_chars | 428.629 | 0.350695 | 161.592ms | 400000 | 30 | 2.92238e+08 | 889977 | 2(Loss) |
| strtoll/strtoull | 234.62 | 0.313311 | 292.116ms | 400000 | 30 | 7.7851e+08 | 1.62591e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 854.037 | 2.07405 | 0.1034ms | 400 | 30 | 2574.71 | 446.667 | 1(Win) |
| std::from_chars | 632.27 | 0.967871 | 0.13ms | 400 | 30 | 1022.99 | 603.333 | 2(Loss) |
| strtoll/strtoull | 283.973 | 0.685002 | 0.6224ms | 400 | 30 | 2540.23 | 1343.33 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 687.746 | 0.471352 | 1.0484ms | 4000 | 30 | 20505.7 | 5546.67 | 1(Win) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 791.157 | 1.06284 | 8.8609ms | 40000 | 30 | 7.87868e+06 | 48216.7 | 1(Win) |
| std::from_chars | 604.548 | 2.0311 | 57.7464ms | 40000 | 48 | 7.88426e+07 | 63100 | 2(Loss) |
| strtoll/strtoull | 258.151 | 1.0124 | 26.4526ms | 40000 | 30 | 6.71429e+07 | 147770 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 698.658 | 0.55702 | 98.7466ms | 400000 | 30 | 2.77494e+08 | 546003 | 1(Win) |
| std::from_chars | 664.736 | 0.448924 | 103.527ms | 400000 | 30 | 1.99108e+08 | 573867 | 2(Loss) |
| strtoll/strtoull | 261.041 | 0.314068 | 264.024ms | 400000 | 30 | 6.31934e+08 | 1.46134e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1074.56 | 0.784628 | 0.1586ms | 800 | 30 | 931.034 | 710 | 1(Win) |
| std::from_chars | 495.415 | 0.590726 | 0.2446ms | 800 | 30 | 2482.76 | 1540 | 2(Loss) |
| strtoll/strtoull | 352.126 | 0.40402 | 0.4077ms | 800 | 30 | 2298.85 | 2166.67 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1079.12 | 1.4922 | 1.3357ms | 8000 | 30 | 333897 | 7070 | 1(Win) |
| std::from_chars | 589.598 | 2.15627 | 2.5171ms | 8000 | 30 | 2.33559e+06 | 12940 | 2(Loss) |
| strtoll/strtoull | 314.312 | 0.20898 | 10.4708ms | 8000 | 30 | 77195.4 | 24273.3 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 878.726 | 2.1162 | 38.4458ms | 80000 | 30 | 1.01276e+08 | 86823.3 | 1(Win) |
| std::from_chars | 517.224 | 1.69113 | 25.3561ms | 80000 | 30 | 1.86681e+08 | 147507 | 2(Loss) |
| strtoll/strtoull | 307.187 | 0.815624 | 45.3636ms | 80000 | 30 | 1.23105e+08 | 248363 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 755.116 | 0.313476 | 182.935ms | 800000 | 30 | 3.00941e+08 | 1.01036e+06 | 1(Win) |
| std::from_chars | 566.103 | 0.61213 | 243.603ms | 800000 | 30 | 2.04172e+09 | 1.3477e+06 | 2(Loss) |
| strtoll/strtoull | 301.929 | 0.381615 | 454.846ms | 800000 | 30 | 2.78959e+09 | 2.52688e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1049.92 | 1.13006 | 0.144ms | 800 | 30 | 2022.99 | 726.667 | 1(Win) |
| std::from_chars | 632.27 | 0.552486 | 0.2483ms | 800 | 30 | 1333.33 | 1206.67 | 2(Loss) |
| strtoll/strtoull | 369.164 | 0.423569 | 0.4145ms | 800 | 30 | 2298.85 | 2066.67 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1063.08 | 0.311097 | 1.3257ms | 8000 | 30 | 14954 | 7176.67 | 1(Win) |
| std::from_chars | 715.256 | 0.192463 | 1.9756ms | 8000 | 30 | 12643.7 | 10666.7 | 2(Loss) |
| strtoll/strtoull | 355.627 | 2.00243 | 3.8691ms | 8000 | 30 | 5.53637e+06 | 21453.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1037.07 | 0.943208 | 13.2148ms | 80000 | 30 | 1.44444e+07 | 73566.7 | 1(Win) |
| std::from_chars | 728.645 | 2.08216 | 19.2121ms | 80000 | 30 | 1.42592e+08 | 104707 | 2(Loss) |
| strtoll/strtoull | 356.214 | 0.638717 | 38.6024ms | 80000 | 30 | 5.6143e+07 | 214180 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 983.757 | 0.493405 | 139.506ms | 800000 | 30 | 4.39271e+08 | 775537 | 1(Win) |
| std::from_chars | 638.651 | 0.831178 | 212.992ms | 800000 | 30 | 2.95775e+09 | 1.19461e+06 | 2(Loss) |
| strtoll/strtoull | 351.769 | 0.186089 | 390.546ms | 800000 | 30 | 4.88681e+08 | 2.16886e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1084.75 | 0.473934 | 0.1701ms | 800 | 30 | 333.333 | 703.333 | 1(Win) |
| std::from_chars | 585.376 | 1.1911 | 0.2705ms | 800 | 30 | 7229.89 | 1303.33 | 2(Loss) |
| strtoll/strtoull | 369.761 | 0.433694 | 0.415ms | 800 | 30 | 2402.3 | 2063.33 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1049.44 | 1.78208 | 1.3626ms | 8000 | 30 | 503552 | 7270 | 1(Win) |
| std::from_chars | 673.182 | 0.0880661 | 5.4261ms | 8000 | 30 | 2988.51 | 11333.3 | 2(Loss) |
| strtoll/strtoull | 364.985 | 1.16088 | 3.8047ms | 8000 | 30 | 1.76654e+06 | 20903.3 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1061.65 | 0.704017 | 13.0641ms | 80000 | 30 | 7.67895e+06 | 71863.3 | 1(Win) |
| std::from_chars | 654.416 | 2.06565 | 106.775ms | 80000 | 48 | 2.78372e+08 | 116583 | 2(Loss) |
| strtoll/strtoull | 357.74 | 0.642617 | 38.3692ms | 80000 | 30 | 5.63471e+07 | 213267 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1016.79 | 0.36134 | 135.15ms | 800000 | 30 | 2.20533e+08 | 750343 | 1(Win) |
| std::from_chars | 635.537 | 1.50784 | 215.083ms | 800000 | 30 | 9.82952e+09 | 1.20046e+06 | 2(Loss) |
| strtoll/strtoull | 356.128 | 0.232611 | 385.809ms | 800000 | 30 | 7.44989e+08 | 2.14232e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1064.57 | 0.965645 | 0.1582ms | 800 | 30 | 1436.78 | 716.667 | 1(Win) |
| std::from_chars | 728.923 | 0.885106 | 0.2057ms | 800 | 30 | 2574.71 | 1046.67 | 2(Loss) |
| strtoll/strtoull | 336.591 | 0.386195 | 0.4257ms | 800 | 30 | 2298.85 | 2266.67 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1093.56 | 0.234904 | 1.3404ms | 8000 | 30 | 8057.47 | 6976.67 | 1(Win) |
| strtoll/strtoull | 313.795 | 1.50621 | 4.453ms | 8000 | 30 | 4.02326e+06 | 24313.3 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 903.243 | 0.911004 | 15.4601ms | 80000 | 30 | 1.77637e+07 | 84466.7 | 1(Win) |
| std::from_chars | 711.299 | 1.68802 | 19.4029ms | 80000 | 30 | 9.83452e+07 | 107260 | 2(Loss) |
| strtoll/strtoull | 310.453 | 0.686889 | 44.2937ms | 80000 | 30 | 8.54833e+07 | 245750 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 750.354 | 0.326926 | 182.266ms | 800000 | 30 | 3.31489e+08 | 1.01677e+06 | 1(Win) |
| std::from_chars | 503.758 | 0.259021 | 273.129ms | 800000 | 30 | 4.61667e+08 | 1.5145e+06 | 2(Loss) |
| strtoll/strtoull | 312.027 | 0.247276 | 438.84ms | 800000 | 30 | 1.09668e+09 | 2.44511e+06 | 3(Loss) |
