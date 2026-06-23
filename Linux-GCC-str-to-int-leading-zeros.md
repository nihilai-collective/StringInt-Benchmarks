# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.992 | 0.259215 | 0.094404ms | 100 | 30 | 43.2057 | 462.967 | 13.9573 | 1(Win) |
| std::from_chars | 103.833 | 0.0833172 | 0.186996ms | 100 | 30 | 17.5678 | 918.467 | 28.1743 | 2(Loss) |
| strtoll/strtoull | 75.8449 | 0.307982 | 0.589493ms | 100 | 30 | 449.903 | 1257.4 | 39.503 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 282.914 | 0.135433 | 0.714296ms | 1000 | 30 | 625.266 | 3370.9 | 10.6854 | 1(Win) |
| std::from_chars | 133.56 | 0.0532701 | 3.09425ms | 1000 | 30 | 434.047 | 7140.43 | 22.6633 | 2(Loss) |
| strtoll/strtoull | 53.0774 | 0.982534 | 16.1406ms | 1000 | 48 | 1.49595e+06 | 17967.6 | 57.2018 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 74.7364 | 0.317725 | 23.632ms | 10000 | 30 | 4.93129e+06 | 127605 | 40.6553 | 1(Win) |
| vn::from_chars | 65.2762 | 0.616646 | 26.6171ms | 10000 | 30 | 2.43491e+07 | 146098 | 46.5446 | 2(Loss) |
| strtoll/strtoull | 44.8811 | 0.773071 | 37.1898ms | 10000 | 30 | 8.0953e+07 | 212489 | 67.6821 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 67.8259 | 0.113452 | 253.999ms | 100000 | 30 | 7.63403e+07 | 1.40606e+06 | 44.8068 | 1(Win) |
| vn::from_chars | 59.9584 | 0.191966 | 719.654ms | 100000 | 30 | 2.79685e+08 | 1.59056e+06 | 50.6837 | 2(Loss) |
| strtoll/strtoull | 45.2279 | 0.350706 | 431.189ms | 100000 | 30 | 1.64057e+09 | 2.1086e+06 | 67.1885 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 202.723 | 0.0850789 | 0.093185ms | 100 | 30 | 4.80575 | 470.433 | 14.2537 | 1(Win) |
| std::from_chars | 102.077 | 0.0890266 | 0.168391ms | 100 | 30 | 20.754 | 934.267 | 28.8007 | 2(Loss) |
| strtoll/strtoull | 87.9368 | 0.454439 | 0.583462ms | 100 | 30 | 728.672 | 1084.5 | 33.979 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 285.238 | 0.0276842 | 0.703784ms | 1000 | 30 | 25.7023 | 3343.43 | 10.5983 | 1(Win) |
| std::from_chars | 124.442 | 0.211645 | 1.44338ms | 1000 | 30 | 7892.32 | 7663.6 | 24.3201 | 2(Loss) |
| strtoll/strtoull | 56.006 | 0.173048 | 3.16172ms | 1000 | 30 | 26048.7 | 17028.1 | 54.2112 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 85.723 | 0.528047 | 20.2836ms | 10000 | 30 | 1.03531e+07 | 111251 | 35.4418 | 1(Win) |
| vn::from_chars | 74.6639 | 1.25884 | 22.1819ms | 10000 | 30 | 7.75608e+07 | 127729 | 40.6817 | 2(Loss) |
| strtoll/strtoull | 52.1472 | 0.538623 | 33.1117ms | 10000 | 30 | 2.91091e+07 | 182881 | 58.2726 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 81.041 | 0.462412 | 211.222ms | 100000 | 30 | 8.88319e+08 | 1.17678e+06 | 37.4916 | 1(Win) |
| vn::from_chars | 68.7393 | 0.370081 | 300.504ms | 100000 | 30 | 7.90868e+08 | 1.38738e+06 | 44.1969 | 2(Loss) |
| strtoll/strtoull | 51.5966 | 0.29354 | 333.262ms | 100000 | 30 | 8.83112e+08 | 1.84833e+06 | 58.8999 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 247.386 | 0.112454 | 0.076004ms | 100 | 30 | 5.63793 | 385.5 | 11.5603 | 1(Win) |
| std::from_chars | 105.003 | 0.0707639 | 0.166149ms | 100 | 30 | 12.392 | 908.233 | 28.0453 | 2(Loss) |
| strtoll/strtoull | 57.9965 | 0.103274 | 0.294309ms | 100 | 30 | 86.5161 | 1644.37 | 51.6967 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 298.627 | 0.0505075 | 0.655035ms | 1000 | 30 | 78.0506 | 3193.53 | 10.1145 | 1(Win) |
| std::from_chars | 135.742 | 0.0544784 | 1.33687ms | 1000 | 30 | 439.482 | 7025.63 | 22.2917 | 2(Loss) |
| strtoll/strtoull | 56.2959 | 1.52203 | 3.09742ms | 1000 | 30 | 1.99441e+06 | 16940.4 | 53.92 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 85.9312 | 0.865832 | 20.2155ms | 10000 | 30 | 2.77005e+07 | 110981 | 35.3558 | 1(Win) |
| vn::from_chars | 80.0985 | 0.356749 | 22.3327ms | 10000 | 30 | 5.4125e+06 | 119063 | 37.9265 | 2(Loss) |
| strtoll/strtoull | 52.2814 | 0.593058 | 32.8093ms | 10000 | 30 | 3.51092e+07 | 182412 | 58.105 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 82.7608 | 0.132535 | 209.098ms | 100000 | 30 | 6.99736e+07 | 1.15233e+06 | 36.719 | 1(Win) |
| vn::from_chars | 69.0787 | 0.35064 | 247.766ms | 100000 | 30 | 7.03003e+08 | 1.38056e+06 | 43.9895 | 2(Loss) |
| strtoll/strtoull | 51.5177 | 0.34776 | 798.191ms | 100000 | 30 | 1.24328e+09 | 1.85116e+06 | 58.9907 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 225.775 | 0.690413 | 0.085979ms | 100 | 30 | 255.145 | 422.4 | 12.7203 | 1(Win) |
| std::from_chars | 90.5645 | 0.0578598 | 0.193686ms | 100 | 30 | 11.1368 | 1053.03 | 32.6517 | 2(Loss) |
| strtoll/strtoull | 66.8588 | 0.588799 | 0.673777ms | 100 | 30 | 2116.11 | 1426.4 | 44.8837 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 322.006 | 0.0287021 | 0.630528ms | 1000 | 30 | 21.6782 | 2961.67 | 9.35453 | 1(Win) |
| std::from_chars | 117.423 | 0.903922 | 1.53468ms | 1000 | 30 | 161689 | 8121.73 | 25.7974 | 2(Loss) |
| strtoll/strtoull | 51.8955 | 0.427087 | 3.42595ms | 1000 | 30 | 184797 | 18376.8 | 58.5063 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 90.1087 | 0.8846 | 19.6577ms | 10000 | 30 | 2.62955e+07 | 105836 | 33.7121 | 1(Win) |
| std::from_chars | 83.4355 | 0.575937 | 20.9072ms | 10000 | 30 | 1.30008e+07 | 114301 | 36.416 | 2(Loss) |
| strtoll/strtoull | 49.8514 | 0.286275 | 34.8666ms | 10000 | 30 | 8.99776e+06 | 191303 | 60.9564 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 78.3346 | 0.281936 | 555.773ms | 100000 | 30 | 3.5344e+08 | 1.21744e+06 | 38.7935 | 1(Win) |
| vn::from_chars | 74.3438 | 0.128413 | 283.477ms | 100000 | 30 | 8.14048e+07 | 1.28279e+06 | 40.878 | 2(Loss) |
| strtoll/strtoull | 49.149 | 0.214909 | 863.926ms | 100000 | 30 | 5.21677e+08 | 1.94037e+06 | 61.8237 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 344.018 | 0.122812 | 0.116983ms | 200 | 30 | 13.9092 | 554.433 | 8.366 | 1(Win) |
| std::from_chars | 203.777 | 0.0837019 | 0.183919ms | 200 | 30 | 18.4138 | 936 | 14.46 | 2(Loss) |
| strtoll/strtoull | 102.778 | 0.226126 | 0.333486ms | 200 | 30 | 528.303 | 1855.8 | 29.2158 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 471.595 | 0.0995078 | 0.792233ms | 2000 | 30 | 485.913 | 4044.47 | 6.41377 | 1(Win) |
| std::from_chars | 212.239 | 2.33448 | 1.64003ms | 2000 | 30 | 1.32042e+06 | 8986.8 | 14.2655 | 2(Loss) |
| strtoll/strtoull | 97.4873 | 1.26399 | 3.66277ms | 2000 | 30 | 1.83474e+06 | 19565.1 | 31.1411 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 155.54 | 0.664295 | 22.5099ms | 20000 | 30 | 1.99075e+07 | 122627 | 19.5344 | 1(Win) |
| std::from_chars | 130.413 | 0.550641 | 26.4501ms | 20000 | 30 | 1.94571e+07 | 146255 | 23.2968 | 2(Loss) |
| strtoll/strtoull | 86.1137 | 0.479535 | 40.5066ms | 20000 | 30 | 3.38437e+07 | 221492 | 35.2859 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 134.689 | 0.121704 | 256.844ms | 200000 | 30 | 8.91095e+07 | 1.41611e+06 | 22.5624 | 1(Win) |
| std::from_chars | 120.588 | 0.121532 | 334.845ms | 200000 | 30 | 1.10855e+08 | 1.58171e+06 | 25.2018 | 2(Loss) |
| strtoll/strtoull | 84.518 | 0.33893 | 405.344ms | 200000 | 30 | 1.7551e+09 | 2.25674e+06 | 35.9587 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 393.836 | 0.145552 | 0.097393ms | 200 | 30 | 14.9069 | 484.3 | 7.3325 | 1(Win) |
| std::from_chars | 166.911 | 0.0582793 | 0.200926ms | 200 | 30 | 13.3057 | 1142.73 | 17.705 | 2(Loss) |
| strtoll/strtoull | 124.311 | 0.101755 | 0.326118ms | 200 | 30 | 73.1264 | 1534.33 | 24.1727 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 439.975 | 1.09136 | 0.840468ms | 2000 | 30 | 67152.7 | 4335.13 | 6.87582 | 1(Win) |
| std::from_chars | 215 | 0.0579014 | 1.7031ms | 2000 | 30 | 791.559 | 8871.4 | 14.0817 | 2(Loss) |
| strtoll/strtoull | 108.182 | 0.322429 | 3.27107ms | 2000 | 30 | 96948 | 17630.9 | 28.0625 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 196.291 | 0.542625 | 17.9563ms | 20000 | 30 | 8.34027e+06 | 97169.5 | 15.4791 | 1(Win) |
| std::from_chars | 152.827 | 0.804507 | 22.5404ms | 20000 | 30 | 3.0244e+07 | 124804 | 19.8809 | 2(Loss) |
| strtoll/strtoull | 98.7483 | 0.452245 | 35.2465ms | 20000 | 30 | 2.28913e+07 | 193153 | 30.7723 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 162.987 | 0.21608 | 210.545ms | 200000 | 30 | 1.91824e+08 | 1.17024e+06 | 18.6459 | 1(Win) |
| std::from_chars | 149.05 | 0.113906 | 231.004ms | 200000 | 30 | 6.37396e+07 | 1.27967e+06 | 20.3895 | 2(Loss) |
| strtoll/strtoull | 97.1482 | 0.323545 | 414.475ms | 200000 | 30 | 1.21054e+09 | 1.96334e+06 | 31.2831 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 371.9 | 0.139522 | 0.098921ms | 200 | 30 | 15.3609 | 512.867 | 7.72817 | 1(Win) |
| std::from_chars | 220.324 | 0.0886411 | 0.187198ms | 200 | 30 | 17.6655 | 865.7 | 13.4125 | 2(Loss) |
| strtoll/strtoull | 138.274 | 0.220345 | 0.307432ms | 200 | 30 | 277.145 | 1379.4 | 21.6997 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 524.828 | 0.06884 | 0.721968ms | 2000 | 30 | 187.771 | 3634.23 | 5.7356 | 1(Win) |
| std::from_chars | 209.748 | 0.0783855 | 3.93063ms | 2000 | 30 | 1524.26 | 9093.53 | 14.439 | 2(Loss) |
| strtoll/strtoull | 99.4997 | 2.09719 | 3.55161ms | 2000 | 30 | 4.84855e+06 | 19169.4 | 30.5141 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.882 | 0.842205 | 17.8708ms | 20000 | 30 | 1.82633e+07 | 92642.7 | 14.7568 | 1(Win) |
| std::from_chars | 153.436 | 0.619316 | 22.353ms | 20000 | 30 | 1.77809e+07 | 124309 | 19.8009 | 2(Loss) |
| strtoll/strtoull | 99.9547 | 0.314639 | 35.9736ms | 20000 | 30 | 1.08143e+07 | 190821 | 30.4025 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 171.765 | 0.228822 | 205.659ms | 200000 | 30 | 1.93689e+08 | 1.11044e+06 | 17.692 | 1(Win) |
| std::from_chars | 147.446 | 0.14973 | 281.927ms | 200000 | 30 | 1.12547e+08 | 1.29359e+06 | 20.6105 | 2(Loss) |
| strtoll/strtoull | 97.6189 | 0.420701 | 352.47ms | 200000 | 30 | 2.02703e+09 | 1.95387e+06 | 31.1273 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 374.235 | 0.120596 | 0.098129ms | 200 | 30 | 11.3333 | 509.667 | 7.57067 | 1(Win) |
| std::from_chars | 165.239 | 0.0914902 | 0.471085ms | 200 | 30 | 33.4586 | 1154.3 | 17.8678 | 2(Loss) |
| strtoll/strtoull | 106.725 | 0.376121 | 0.38439ms | 200 | 30 | 1355.52 | 1787.17 | 28.196 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 498.84 | 0.045207 | 0.768529ms | 2000 | 30 | 89.6333 | 3823.57 | 6.06498 | 1(Win) |
| std::from_chars | 192.948 | 1.8291 | 1.81576ms | 2000 | 30 | 980794 | 9885.3 | 15.7064 | 2(Loss) |
| strtoll/strtoull | 96.9002 | 0.101314 | 3.66157ms | 2000 | 30 | 11930.8 | 19683.6 | 31.3346 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 199.982 | 0.701115 | 17.2167ms | 20000 | 30 | 1.34146e+07 | 95375.9 | 15.1929 | 1(Win) |
| std::from_chars | 151.18 | 0.542853 | 22.8599ms | 20000 | 30 | 1.40721e+07 | 126164 | 20.0953 | 2(Loss) |
| strtoll/strtoull | 94.1863 | 0.304854 | 36.641ms | 20000 | 30 | 1.14338e+07 | 202508 | 32.2637 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 184.624 | 0.140934 | 186.172ms | 200000 | 30 | 6.35964e+07 | 1.0331e+06 | 16.4604 | 1(Win) |
| std::from_chars | 142.058 | 1.29848 | 237.74ms | 200000 | 30 | 9.11845e+09 | 1.34266e+06 | 21.3859 | 2(Loss) |
| strtoll/strtoull | 91.672 | 0.548707 | 425.576ms | 200000 | 30 | 3.91011e+09 | 2.08062e+06 | 33.1481 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 524.982 | 0.161018 | 0.133585ms | 400 | 30 | 41.0678 | 726.633 | 5.5315 | 1(Win) |
| std::from_chars | 246.592 | 0.0637812 | 0.268481ms | 400 | 30 | 29.2057 | 1546.97 | 12.1112 | 2(Loss) |
| strtoll/strtoull | 167.079 | 2.22988 | 0.412569ms | 400 | 30 | 77760.9 | 2283.17 | 18.0123 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 757.155 | 0.0406035 | 0.983725ms | 4000 | 30 | 125.545 | 5038.2 | 3.98822 | 1(Win) |
| std::from_chars | 313.362 | 0.077412 | 2.28555ms | 4000 | 30 | 2664.19 | 12173.4 | 9.67429 | 2(Loss) |
| strtoll/strtoull | 156.697 | 1.16292 | 10.315ms | 4000 | 30 | 2.40447e+06 | 24344.4 | 19.3776 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 281.758 | 0.950085 | 24.6627ms | 40000 | 30 | 4.96378e+07 | 135389 | 10.7828 | 1(Win) |
| std::from_chars | 221.292 | 0.641429 | 160.456ms | 40000 | 48 | 5.86849e+07 | 172383 | 13.7277 | 2(Loss) |
| strtoll/strtoull | 152.903 | 0.480376 | 45.4975ms | 40000 | 30 | 4.30893e+07 | 249484 | 19.8746 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 257.866 | 0.164207 | 266.419ms | 400000 | 30 | 1.77026e+08 | 1.47934e+06 | 11.7851 | 1(Win) |
| std::from_chars | 209.14 | 0.190255 | 379.081ms | 400000 | 30 | 3.61277e+08 | 1.82399e+06 | 14.5285 | 2(Loss) |
| strtoll/strtoull | 150.766 | 0.296102 | 504.265ms | 400000 | 30 | 1.68391e+09 | 2.53021e+06 | 20.1545 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 538.951 | 0.22017 | 0.130577ms | 400 | 30 | 72.8552 | 707.8 | 5.38933 | 1(Win) |
| std::from_chars | 328.513 | 0.0668852 | 0.242662ms | 400 | 30 | 18.0966 | 1161.2 | 9.0765 | 2(Loss) |
| strtoll/strtoull | 214.622 | 0.571714 | 0.865316ms | 400 | 30 | 3097.77 | 1777.4 | 14.0107 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 649.34 | 0.186858 | 1.1523ms | 4000 | 30 | 3615.1 | 5874.73 | 4.65911 | 1(Win) |
| std::from_chars | 299.84 | 0.0507896 | 5.4842ms | 4000 | 30 | 1252.6 | 12722.4 | 10.1096 | 2(Loss) |
| strtoll/strtoull | 172.668 | 0.894037 | 4.05804ms | 4000 | 30 | 1.17038e+06 | 22092.6 | 17.5841 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 329.256 | 0.510474 | 21.2062ms | 40000 | 30 | 1.04935e+07 | 115858 | 9.2269 | 1(Win) |
| std::from_chars | 248.395 | 1.3354 | 27.252ms | 40000 | 30 | 1.26177e+08 | 153574 | 12.221 | 2(Loss) |
| strtoll/strtoull | 171.912 | 0.792849 | 40.2167ms | 40000 | 30 | 9.2856e+07 | 221898 | 17.6763 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 305.396 | 0.116911 | 275.706ms | 400000 | 30 | 6.39777e+07 | 1.2491e+06 | 9.95095 | 1(Win) |
| std::from_chars | 247.562 | 0.335438 | 276.386ms | 400000 | 30 | 8.01489e+08 | 1.5409e+06 | 12.2717 | 2(Loss) |
| strtoll/strtoull | 169.83 | 0.470358 | 403.74ms | 400000 | 30 | 3.34865e+09 | 2.24618e+06 | 17.8934 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 571.576 | 0.173551 | 0.126147ms | 400 | 30 | 40.2483 | 667.4 | 5.06967 | 1(Win) |
| std::from_chars | 236.943 | 0.110611 | 0.277963ms | 400 | 30 | 95.1368 | 1609.97 | 12.5309 | 2(Loss) |
| strtoll/strtoull | 189.966 | 0.610184 | 0.920654ms | 400 | 30 | 4504.16 | 2008.1 | 15.8358 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 795.474 | 0.115719 | 0.930274ms | 4000 | 30 | 923.845 | 4795.5 | 3.79927 | 1(Win) |
| std::from_chars | 303.34 | 2.1446 | 11.3155ms | 4000 | 48 | 3.49138e+06 | 12575.7 | 9.98828 | 2(Loss) |
| strtoll/strtoull | 178.442 | 1.50813 | 9.73663ms | 4000 | 30 | 3.11837e+06 | 21377.8 | 17.0145 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 338.734 | 0.682336 | 20.7857ms | 40000 | 30 | 1.77142e+07 | 112616 | 8.96773 | 1(Win) |
| std::from_chars | 252.966 | 0.609947 | 27.3311ms | 40000 | 30 | 2.53805e+07 | 150799 | 12.0104 | 2(Loss) |
| strtoll/strtoull | 168.029 | 1.83636 | 40.2667ms | 40000 | 30 | 5.21424e+08 | 227026 | 18.0726 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 315.068 | 0.364339 | 269.054ms | 400000 | 30 | 5.83776e+08 | 1.21076e+06 | 9.6422 | 1(Win) |
| std::from_chars | 245.51 | 0.796485 | 287.079ms | 400000 | 30 | 4.59472e+09 | 1.55379e+06 | 12.3747 | 2(Loss) |
| strtoll/strtoull | 169.17 | 0.489978 | 987.638ms | 400000 | 30 | 3.66225e+09 | 2.25495e+06 | 17.9633 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 590.998 | 0.116916 | 0.121672ms | 400 | 30 | 17.0851 | 645.467 | 4.9115 | 1(Win) |
| std::from_chars | 252.084 | 0.103589 | 0.265155ms | 400 | 30 | 73.7195 | 1513.27 | 11.7756 | 2(Loss) |
| strtoll/strtoull | 167.893 | 0.0717894 | 0.464609ms | 400 | 30 | 79.8172 | 2272.1 | 17.9619 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 776.15 | 0.104301 | 0.936457ms | 4000 | 30 | 788.369 | 4914.9 | 3.88949 | 1(Win) |
| std::from_chars | 312.922 | 0.138277 | 2.30928ms | 4000 | 30 | 8524.46 | 12190.6 | 9.68378 | 2(Loss) |
| strtoll/strtoull | 169.152 | 1.27818 | 4.14257ms | 4000 | 30 | 2.4927e+06 | 22551.9 | 17.9403 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 415.967 | 1.49639 | 17.0655ms | 40000 | 30 | 5.64958e+07 | 91706.8 | 7.30277 | 1(Win) |
| std::from_chars | 250.415 | 0.366076 | 64.8844ms | 40000 | 30 | 9.32958e+06 | 152335 | 12.1329 | 2(Loss) |
| strtoll/strtoull | 167.832 | 0.420639 | 40.9832ms | 40000 | 30 | 2.74226e+07 | 227292 | 18.1049 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 348.41 | 0.707449 | 195.092ms | 400000 | 30 | 1.79991e+09 | 1.09489e+06 | 8.71802 | 1(Win) |
| std::from_chars | 243.365 | 0.196117 | 331.589ms | 400000 | 30 | 2.835e+08 | 1.56748e+06 | 12.4867 | 2(Loss) |
| strtoll/strtoull | 168.151 | 0.130967 | 408.109ms | 400000 | 30 | 2.64829e+08 | 2.26862e+06 | 18.0727 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 643.161 | 0.050107 | 0.232351ms | 800 | 30 | 10.5989 | 1186.23 | 4.60429 | 1(Win) |
| std::from_chars | 499.088 | 0.0663374 | 0.712945ms | 800 | 30 | 30.8506 | 1528.67 | 5.98383 | 2(Loss) |
| strtoll/strtoull | 279.005 | 0.198967 | 0.63031ms | 800 | 30 | 888.052 | 2734.5 | 10.8212 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 822.101 | 0.0255071 | 1.76085ms | 8000 | 30 | 168.102 | 9280.37 | 3.68146 | 1(Win) |
| std::from_chars | 440.768 | 2.36713 | 7.36465ms | 8000 | 30 | 5.03649e+06 | 17309.3 | 6.73358 | 2(Loss) |
| strtoll/strtoull | 252.709 | 2.01945 | 5.40708ms | 8000 | 30 | 1.11513e+07 | 30190.5 | 12.016 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 519.963 | 1.62715 | 26.2312ms | 80000 | 30 | 1.71005e+08 | 146730 | 5.83574 | 1(Win) |
| std::from_chars | 358.989 | 0.229988 | 38.495ms | 80000 | 30 | 7.1672e+06 | 212524 | 8.46454 | 2(Loss) |
| strtoll/strtoull | 255.188 | 0.680838 | 53.6812ms | 80000 | 30 | 1.24299e+08 | 298972 | 11.9065 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 472.967 | 0.377286 | 350.306ms | 800000 | 30 | 1.11117e+09 | 1.61309e+06 | 6.42305 | 1(Win) |
| std::from_chars | 342.448 | 0.731944 | 416.032ms | 800000 | 30 | 7.97752e+09 | 2.2279e+06 | 8.87087 | 2(Loss) |
| strtoll/strtoull | 253.833 | 0.171512 | 542.592ms | 800000 | 30 | 7.97248e+08 | 3.00568e+06 | 11.9686 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 605.7 | 0.0651118 | 0.221712ms | 800 | 30 | 20.1793 | 1259.6 | 4.89167 | 1(Win) |
| std::from_chars | 490.184 | 0.0589084 | 0.338903ms | 800 | 30 | 25.2195 | 1556.43 | 6.08338 | 2(Loss) |
| strtoll/strtoull | 283.691 | 0.0715432 | 1.23726ms | 800 | 30 | 111.057 | 2689.33 | 10.6398 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 769.63 | 0.0453874 | 1.89427ms | 8000 | 30 | 607.306 | 9913.07 | 3.93232 | 1(Win) |
| std::from_chars | 437.568 | 2.15596 | 3.23388ms | 8000 | 30 | 4.23927e+06 | 17435.9 | 6.93126 | 2(Loss) |
| strtoll/strtoull | 267.466 | 0.955972 | 5.10388ms | 8000 | 30 | 2.23078e+06 | 28524.8 | 11.3523 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 613.261 | 0.254938 | 22.8073ms | 80000 | 30 | 3.01774e+06 | 124407 | 4.95407 | 1(Win) |
| std::from_chars | 402.118 | 0.330424 | 34.4337ms | 80000 | 30 | 1.17907e+07 | 189730 | 7.55508 | 2(Loss) |
| strtoll/strtoull | 283.86 | 0.539887 | 48.7183ms | 80000 | 30 | 6.31684e+07 | 268773 | 10.7039 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 554.995 | 0.285957 | 248.202ms | 800000 | 30 | 4.63579e+08 | 1.37468e+06 | 5.47351 | 1(Win) |
| std::from_chars | 397.332 | 0.283421 | 406.226ms | 800000 | 30 | 8.88507e+08 | 1.92016e+06 | 7.64578 | 2(Loss) |
| strtoll/strtoull | 275.455 | 0.889251 | 545.772ms | 800000 | 30 | 1.81991e+10 | 2.76975e+06 | 11.0269 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 635.924 | 0.099344 | 0.210431ms | 800 | 30 | 42.6161 | 1199.73 | 4.65558 | 1(Win) |
| std::from_chars | 480.058 | 0.074324 | 0.324945ms | 800 | 30 | 41.8575 | 1589.27 | 6.22283 | 2(Loss) |
| strtoll/strtoull | 267.623 | 0.0607194 | 0.572855ms | 800 | 30 | 89.8897 | 2850.8 | 11.2849 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 823.215 | 0.0377533 | 1.70492ms | 8000 | 30 | 367.269 | 9267.8 | 3.67606 | 1(Win) |
| std::from_chars | 447.999 | 0.364435 | 3.14769ms | 8000 | 30 | 115555 | 17029.9 | 6.76811 | 2(Loss) |
| strtoll/strtoull | 283.963 | 0.607276 | 4.9095ms | 8000 | 30 | 798641 | 26867.6 | 10.6931 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 607.309 | 0.253997 | 22.6905ms | 80000 | 30 | 3.05449e+06 | 125626 | 5.00279 | 1(Win) |
| std::from_chars | 405.581 | 0.337517 | 34.0537ms | 80000 | 30 | 1.20931e+07 | 188110 | 7.49169 | 2(Loss) |
| strtoll/strtoull | 280.037 | 0.560688 | 48.4984ms | 80000 | 30 | 7.00022e+07 | 272442 | 10.8514 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 537.021 | 2.22888 | 250.846ms | 800000 | 30 | 3.00809e+10 | 1.42069e+06 | 5.65639 | 1(Win) |
| std::from_chars | 383.012 | 1.47431 | 403.575ms | 800000 | 30 | 2.58735e+10 | 1.99195e+06 | 7.93083 | 2(Loss) |
| strtoll/strtoull | 278.09 | 0.934253 | 502.189ms | 800000 | 30 | 1.97088e+10 | 2.7435e+06 | 10.9245 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 813.426 | 0.0611153 | 0.44328ms | 800 | 30 | 9.85747 | 937.933 | 3.64433 | 1(Win) |
| std::from_chars | 481.928 | 0.0552134 | 0.317767ms | 800 | 30 | 22.9207 | 1583.1 | 6.17425 | 2(Loss) |
| strtoll/strtoull | 277.275 | 0.0391845 | 0.52997ms | 800 | 30 | 34.8747 | 2751.57 | 10.8916 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 826.646 | 0.0650046 | 1.73421ms | 8000 | 30 | 1079.82 | 9229.33 | 3.66023 | 1(Win) |
| std::from_chars | 442.445 | 0.0727066 | 3.15885ms | 8000 | 30 | 4715.53 | 17243.7 | 6.8553 | 2(Loss) |
| strtoll/strtoull | 275.89 | 0.81388 | 5.0493ms | 8000 | 30 | 1.51968e+06 | 27653.8 | 11.0058 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 528.113 | 0.272106 | 26.4284ms | 80000 | 30 | 4.63579e+06 | 144465 | 5.7532 | 1(Win) |
| std::from_chars | 385.984 | 0.435223 | 85.4327ms | 80000 | 30 | 2.22016e+07 | 197661 | 7.87195 | 2(Loss) |
| strtoll/strtoull | 271.572 | 0.416396 | 50.9462ms | 80000 | 30 | 4.10529e+07 | 280934 | 11.1897 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 492.789 | 0.350972 | 334.175ms | 800000 | 30 | 8.85775e+08 | 1.54821e+06 | 6.16564 | 1(Win) |
| std::from_chars | 380.908 | 0.324595 | 387.95ms | 800000 | 30 | 1.26807e+09 | 2.00295e+06 | 7.97582 | 2(Loss) |
| strtoll/strtoull | 264.408 | 0.744706 | 516.565ms | 800000 | 30 | 1.38523e+10 | 2.88546e+06 | 11.4906 | 3(Loss) |
