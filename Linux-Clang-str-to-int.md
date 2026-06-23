# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 704.859 | 0.087881 | 0.05101ms | 100 | 30 | 0.424138 | 135.3 | 1(Win) |
| std::from_chars | 352.039 | 0.0445998 | 0.074729ms | 100 | 30 | 0.437931 | 270.9 | 2(Loss) |
| strtoll/strtoull | 83.1983 | 0.209515 | 0.26056ms | 100 | 30 | 173.03 | 1146.27 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 755.047 | 0.0606097 | 0.294732ms | 1000 | 30 | 17.5816 | 1263.07 | 1(Win) |
| std::from_chars | 439.637 | 0.0275785 | 0.428312ms | 1000 | 30 | 10.7368 | 2169.23 | 2(Loss) |
| strtoll/strtoull | 141.05 | 0.817729 | 1.38707ms | 1000 | 30 | 91705.7 | 6761.27 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 249.094 | 1.26818 | 8.47741ms | 10000 | 30 | 7.07226e+06 | 38285.7 | 1(Win) |
| std::from_chars | 167.854 | 0.830582 | 10.6827ms | 10000 | 30 | 6.68068e+06 | 56815.6 | 2(Loss) |
| strtoll/strtoull | 97.2624 | 0.993647 | 19.018ms | 10000 | 30 | 2.84771e+07 | 98051.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 169.875 | 2.30787 | 101.242ms | 100000 | 30 | 5.036e+09 | 561399 | 1(Win) |
| std::from_chars | 132.774 | 1.34344 | 181.769ms | 100000 | 30 | 2.79337e+09 | 718268 | 2(Loss) |
| strtoll/strtoull | 86.8938 | 1.7789 | 195.919ms | 100000 | 30 | 1.14353e+10 | 1.09752e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.401 | 0.128631 | 0.101958ms | 100 | 30 | 0.947126 | 138.133 | 1(Win) |
| std::from_chars | 396.758 | 0.0467093 | 0.07556ms | 100 | 30 | 0.378161 | 240.367 | 2(Loss) |
| strtoll/strtoull | 145.837 | 0.0343379 | 0.141949ms | 100 | 30 | 1.51264 | 653.933 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 832.879 | 0.0760071 | 0.23151ms | 1000 | 30 | 22.723 | 1145.03 | 1(Win) |
| std::from_chars | 474.41 | 0.0383613 | 0.420741ms | 1000 | 30 | 17.8402 | 2010.23 | 2(Loss) |
| strtoll/strtoull | 85.6986 | 0.074684 | 1.4339ms | 1000 | 30 | 2072.19 | 11128.2 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 655.505 | 2.24622 | 6.56673ms | 10000 | 30 | 3.20385e+06 | 14548.7 | 1(Win) |
| std::from_chars | 285.521 | 0.112102 | 6.6916ms | 10000 | 30 | 42060.6 | 33401.2 | 2(Loss) |
| strtoll/strtoull | 133.462 | 1.1546 | 31.2438ms | 10000 | 30 | 2.04207e+07 | 71456.4 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.579 | 0.457033 | 59.5934ms | 100000 | 30 | 5.83308e+07 | 305099 | 1(Win) |
| std::from_chars | 227.241 | 2.49955 | 121.205ms | 100000 | 30 | 3.30122e+09 | 419676 | 2(Loss) |
| strtoll/strtoull | 121.172 | 2.29539 | 778.31ms | 100000 | 48 | 1.56657e+10 | 787044 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 783.413 | 0.103709 | 0.051285ms | 100 | 30 | 0.478161 | 121.733 | 1(Win) |
| std::from_chars | 346.539 | 0.0534159 | 0.081918ms | 100 | 30 | 0.648276 | 275.2 | 2(Loss) |
| strtoll/strtoull | 157.632 | 0.385892 | 0.146213ms | 100 | 30 | 163.517 | 605 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 839.576 | 0.072295 | 0.228406ms | 1000 | 30 | 20.231 | 1135.9 | 1(Win) |
| std::from_chars | 486.842 | 0.0632769 | 0.399404ms | 1000 | 30 | 46.0931 | 1958.9 | 2(Loss) |
| strtoll/strtoull | 140.8 | 0.149107 | 3.40145ms | 1000 | 30 | 3059.93 | 6773.27 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1003.94 | 0.0753513 | 2.28467ms | 10000 | 30 | 1537.04 | 9499.3 | 1(Win) |
| std::from_chars | 256.97 | 1.25702 | 16.5098ms | 10000 | 30 | 6.52892e+06 | 37112.3 | 2(Loss) |
| strtoll/strtoull | 135.363 | 0.555371 | 13.1754ms | 10000 | 30 | 4.59289e+06 | 70453 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.742 | 2.17208 | 257.536ms | 100000 | 48 | 1.88285e+09 | 288344 | 1(Win) |
| std::from_chars | 239.894 | 0.600186 | 177.041ms | 100000 | 30 | 1.70787e+08 | 397540 | 2(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 705.728 | 0.0920678 | 0.05076ms | 100 | 30 | 0.464368 | 135.133 | 1(Win) |
| std::from_chars | 369.26 | 0.0412342 | 0.081158ms | 100 | 30 | 0.34023 | 258.267 | 2(Loss) |
| strtoll/strtoull | 73.8138 | 0.0243348 | 0.363099ms | 100 | 30 | 2.96552 | 1292 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 863.731 | 0.0303143 | 0.226577ms | 1000 | 30 | 3.36092 | 1104.13 | 1(Win) |
| std::from_chars | 621.421 | 0.707946 | 0.499592ms | 1000 | 30 | 3541.2 | 1534.67 | 2(Loss) |
| strtoll/strtoull | 132.275 | 0.193795 | 1.33754ms | 1000 | 30 | 5856.72 | 7209.8 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 604.825 | 0.67699 | 4.18715ms | 10000 | 30 | 341842 | 15767.8 | 1(Win) |
| std::from_chars | 289.916 | 0.145553 | 6.43714ms | 10000 | 30 | 68773.3 | 32894.9 | 2(Loss) |
| strtoll/strtoull | 116.101 | 0.660162 | 15.1303ms | 10000 | 30 | 8.82162e+06 | 82141.5 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 270.766 | 0.795383 | 67.4142ms | 100000 | 30 | 2.35443e+08 | 352213 | 1(Win) |
| std::from_chars | 220.843 | 2.03376 | 74.8556ms | 100000 | 30 | 2.31393e+09 | 431833 | 2(Loss) |
| strtoll/strtoull | 110.111 | 2.11071 | 154.669ms | 100000 | 30 | 1.00257e+10 | 866102 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 796.72 | 0.176426 | 0.081167ms | 200 | 30 | 5.35172 | 239.4 | 1(Win) |
| std::from_chars | 629.765 | 0.0467836 | 0.089416ms | 200 | 30 | 0.602299 | 302.867 | 2(Loss) |
| strtoll/strtoull | 239.526 | 0.196233 | 0.194003ms | 200 | 30 | 73.2517 | 796.3 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 883.154 | 0.0519771 | 0.453002ms | 2000 | 30 | 37.8034 | 2159.7 | 1(Win) |
| std::from_chars | 647.935 | 0.0331377 | 0.616399ms | 2000 | 30 | 28.5471 | 2943.73 | 2(Loss) |
| strtoll/strtoull | 212.791 | 0.17049 | 8.76655ms | 2000 | 48 | 11209.7 | 8963.5 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 449.853 | 1.89523 | 8.04897ms | 20000 | 30 | 1.93716e+07 | 42399.4 | 1(Win) |
| std::from_chars | 263.393 | 0.234053 | 31.6411ms | 20000 | 30 | 861790 | 72414.5 | 2(Loss) |
| strtoll/strtoull | 153.939 | 0.353552 | 23.6524ms | 20000 | 30 | 5.75693e+06 | 123903 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 283.765 | 2.09067 | 282.752ms | 200000 | 30 | 5.92429e+09 | 672158 | 1(Win) |
| std::from_chars | 235.426 | 2.23097 | 392.554ms | 200000 | 30 | 9.80083e+09 | 810170 | 2(Loss) |
| strtoll/strtoull | 145.588 | 2.23875 | 234.749ms | 200000 | 30 | 2.58073e+10 | 1.3101e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 810.833 | 0.163928 | 0.069368ms | 200 | 30 | 4.46092 | 235.233 | 1(Win) |
| std::from_chars | 612.967 | 0.0535619 | 0.083553ms | 200 | 30 | 0.833333 | 311.167 | 2(Loss) |
| strtoll/strtoull | 206.282 | 0.201064 | 0.194157ms | 200 | 30 | 103.689 | 924.633 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 897.886 | 0.0626693 | 0.423766ms | 2000 | 30 | 53.1678 | 2124.27 | 1(Win) |
| std::from_chars | 516.216 | 0.583397 | 0.771073ms | 2000 | 30 | 13939.5 | 3694.87 | 2(Loss) |
| strtoll/strtoull | 209.838 | 0.112974 | 4.05594ms | 2000 | 30 | 3163.55 | 9089.63 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 771.403 | 1.57427 | 11.1743ms | 20000 | 30 | 4.54547e+06 | 24725.7 | 1(Win) |
| std::from_chars | 407.734 | 0.476456 | 8.50693ms | 20000 | 30 | 1.4903e+06 | 46779.2 | 2(Loss) |
| strtoll/strtoull | 194.586 | 0.503571 | 143.539ms | 20000 | 48 | 1.1695e+07 | 98020.9 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 458.286 | 2.41597 | 77.7025ms | 200000 | 30 | 3.03314e+09 | 416192 | 1(Win) |
| std::from_chars | 390.392 | 1.51073 | 261.508ms | 200000 | 30 | 1.63439e+09 | 488573 | 2(Loss) |
| strtoll/strtoull | 192.05 | 1.74493 | 182.33ms | 200000 | 30 | 9.00967e+09 | 993155 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 814.99 | 0.179168 | 0.07074ms | 200 | 30 | 5.27471 | 234.033 | 1(Win) |
| std::from_chars | 646.194 | 0.0489565 | 0.089686ms | 200 | 30 | 0.626437 | 295.167 | 2(Loss) |
| strtoll/strtoull | 241.834 | 0.267631 | 0.170518ms | 200 | 30 | 133.666 | 788.7 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 874.503 | 0.0588197 | 0.423188ms | 2000 | 30 | 49.3747 | 2181.07 | 1(Win) |
| std::from_chars | 687.961 | 0.0323413 | 0.558366ms | 2000 | 30 | 24.1195 | 2772.47 | 2(Loss) |
| strtoll/strtoull | 189.575 | 0.392066 | 2.51964ms | 2000 | 30 | 46680.6 | 10061.2 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 626.467 | 1.01566 | 14.4089ms | 20000 | 30 | 2.86866e+06 | 30446.1 | 1(Win) |
| std::from_chars | 407.659 | 0.608906 | 8.45835ms | 20000 | 30 | 2.43495e+06 | 46787.9 | 2(Loss) |
| strtoll/strtoull | 198.768 | 0.506304 | 17.7373ms | 20000 | 30 | 7.08127e+06 | 95958.6 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 495.894 | 0.651806 | 73.5978ms | 200000 | 30 | 1.88556e+08 | 384629 | 1(Win) |
| std::from_chars | 384.521 | 0.744595 | 89.6309ms | 200000 | 30 | 4.09243e+08 | 496032 | 2(Loss) |
| strtoll/strtoull | 201.051 | 2.23937 | 221.329ms | 200000 | 30 | 1.35401e+10 | 948691 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 752.703 | 0.123496 | 0.075417ms | 200 | 30 | 2.93793 | 253.4 | 1(Win) |
| std::from_chars | 613.164 | 0.15638 | 0.087987ms | 200 | 30 | 7.09885 | 311.067 | 2(Loss) |
| strtoll/strtoull | 233.629 | 0.187804 | 0.175178ms | 200 | 30 | 70.5241 | 816.4 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 850.141 | 0.186448 | 0.44052ms | 2000 | 30 | 524.944 | 2243.57 | 1(Win) |
| std::from_chars | 692.742 | 0.113048 | 4.06815ms | 2000 | 48 | 465.035 | 2753.33 | 2(Loss) |
| strtoll/strtoull | 226.296 | 0.137268 | 1.60458ms | 2000 | 30 | 4015.77 | 8428.57 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 836.547 | 0.0322311 | 4.22646ms | 20000 | 30 | 1620.13 | 22800.3 | 1(Win) |
| std::from_chars | 569.098 | 1.89515 | 15.4946ms | 20000 | 30 | 1.2103e+07 | 33515.3 | 2(Loss) |
| strtoll/strtoull | 219.867 | 0.719346 | 16.512ms | 20000 | 30 | 1.16826e+07 | 86750.2 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 588.834 | 1.99702 | 136.425ms | 200000 | 30 | 1.25533e+09 | 323920 | 1(Win) |
| std::from_chars | 536.774 | 1.16232 | 340.397ms | 200000 | 48 | 8.18782e+08 | 355336 | 2(Loss) |
| strtoll/strtoull | 204.733 | 2.0902 | 896.32ms | 200000 | 48 | 1.82011e+10 | 931625 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 881.06 | 0.0962114 | 0.219665ms | 400 | 30 | 5.20575 | 432.967 | 1(Win) |
| std::from_chars | 672.351 | 0.0762827 | 0.135898ms | 400 | 30 | 5.61954 | 567.367 | 2(Loss) |
| strtoll/strtoull | 354.9 | 0.285962 | 0.236571ms | 400 | 30 | 283.43 | 1074.87 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 936.229 | 0.0390053 | 1.76347ms | 4000 | 30 | 75.7747 | 4074.53 | 1(Win) |
| std::from_chars | 553.531 | 0.155646 | 2.16308ms | 4000 | 30 | 3451.7 | 6891.57 | 2(Loss) |
| strtoll/strtoull | 285.683 | 0.108258 | 2.54846ms | 4000 | 30 | 6268.92 | 13352.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 609.803 | 0.971465 | 11.4202ms | 40000 | 30 | 1.10794e+07 | 62556.3 | 1(Win) |
| std::from_chars | 347.862 | 0.661797 | 21.2958ms | 40000 | 30 | 1.58007e+07 | 109661 | 2(Loss) |
| strtoll/strtoull | 255.576 | 0.561006 | 29.4221ms | 40000 | 30 | 2.10347e+07 | 149259 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 426.501 | 1.71345 | 388.2ms | 400000 | 30 | 7.04605e+09 | 894417 | 1(Win) |
| std::from_chars | 333.444 | 2.24754 | 207.319ms | 400000 | 30 | 1.98341e+10 | 1.14403e+06 | 2(Loss) |
| strtoll/strtoull | 236.342 | 2.00763 | 749.467ms | 400000 | 30 | 3.15012e+10 | 1.61406e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 908.838 | 0.0799069 | 0.106302ms | 400 | 30 | 3.37471 | 419.733 | 1(Win) |
| std::from_chars | 686.755 | 0.0672684 | 0.12607ms | 400 | 30 | 4.18851 | 555.467 | 2(Loss) |
| strtoll/strtoull | 306.566 | 0.268296 | 0.254001ms | 400 | 30 | 334.368 | 1244.33 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 981.399 | 0.0432079 | 0.781261ms | 4000 | 30 | 84.6207 | 3887 | 1(Win) |
| std::from_chars | 632.942 | 0.11298 | 2.60434ms | 4000 | 30 | 1390.96 | 6026.93 | 2(Loss) |
| strtoll/strtoull | 318.303 | 0.126982 | 2.40321ms | 4000 | 30 | 6947.78 | 11984.5 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 735.007 | 1.58544 | 10.3843ms | 40000 | 30 | 2.03123e+07 | 51900.1 | 1(Win) |
| std::from_chars | 475.177 | 2.43387 | 15.7972ms | 40000 | 30 | 1.14532e+08 | 80279.5 | 2(Loss) |
| strtoll/strtoull | 300.481 | 1.10708 | 23.6806ms | 40000 | 30 | 5.92608e+07 | 126953 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 576.76 | 2.4073 | 122.546ms | 400000 | 30 | 7.60521e+09 | 661401 | 1(Win) |
| std::from_chars | 466.89 | 1.04837 | 814.226ms | 400000 | 48 | 3.52175e+09 | 817045 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 882.487 | 0.0893794 | 0.110142ms | 400 | 30 | 4.47816 | 432.267 | 1(Win) |
| std::from_chars | 733.032 | 0.0842406 | 0.120337ms | 400 | 30 | 5.76552 | 520.4 | 2(Loss) |
| strtoll/strtoull | 300.528 | 0.409819 | 0.256013ms | 400 | 30 | 811.816 | 1269.33 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 889.497 | 0.0498179 | 2.39255ms | 4000 | 30 | 136.938 | 4288.6 | 1(Win) |
| std::from_chars | 652.587 | 0.0610821 | 1.13262ms | 4000 | 30 | 382.466 | 5845.5 | 2(Loss) |
| strtoll/strtoull | 339.998 | 0.176939 | 2.19496ms | 4000 | 30 | 11823.2 | 11219.8 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 849.063 | 0.289135 | 9.1103ms | 40000 | 30 | 506249 | 44928.3 | 1(Win) |
| std::from_chars | 493.105 | 0.699013 | 33.9485ms | 40000 | 30 | 8.77269e+06 | 77360.8 | 2(Loss) |
| strtoll/strtoull | 298.369 | 2.45481 | 24.6858ms | 40000 | 30 | 2.95508e+08 | 127852 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 590.199 | 1.41674 | 170.434ms | 400000 | 30 | 2.51551e+09 | 646341 | 1(Win) |
| std::from_chars | 453.666 | 2.33099 | 150.082ms | 400000 | 30 | 1.15252e+10 | 840859 | 2(Loss) |
| strtoll/strtoull | 279.79 | 1.81428 | 1276.08ms | 400000 | 48 | 2.93703e+10 | 1.36342e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 839.44 | 0.101575 | 0.119038ms | 400 | 30 | 6.39195 | 454.433 | 1(Win) |
| std::from_chars | 695.056 | 0.0327844 | 0.137734ms | 400 | 30 | 0.971264 | 548.833 | 2(Loss) |
| strtoll/strtoull | 307.183 | 0.319924 | 0.251863ms | 400 | 30 | 473.523 | 1241.83 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 890.016 | 0.152314 | 1.86606ms | 4000 | 30 | 1278.58 | 4286.1 | 1(Win) |
| std::from_chars | 404.574 | 0.0762515 | 1.81304ms | 4000 | 30 | 1550.75 | 9428.93 | 2(Loss) |
| strtoll/strtoull | 326.319 | 1.1946 | 5.29306ms | 4000 | 30 | 585061 | 11690.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 853.314 | 0.812946 | 8.0448ms | 40000 | 30 | 3.9623e+06 | 44704.5 | 1(Win) |
| std::from_chars | 599.983 | 2.34781 | 11.0618ms | 40000 | 30 | 6.68483e+07 | 63580.1 | 2(Loss) |
| strtoll/strtoull | 310.388 | 0.708184 | 23.3479ms | 40000 | 30 | 2.27261e+07 | 122901 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 693.797 | 1.64771 | 554.707ms | 400000 | 48 | 3.93967e+09 | 549829 | 1(Win) |
| std::from_chars | 598.449 | 1.53451 | 638.526ms | 400000 | 48 | 4.59244e+09 | 637430 | 2(Loss) |
| strtoll/strtoull | 286.221 | 2.44647 | 1293.39ms | 400000 | 48 | 5.10316e+10 | 1.33278e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1012.98 | 0.0633672 | 0.170285ms | 800 | 30 | 6.83333 | 753.167 | 1(Win) |
| strtoll/strtoull | 444.664 | 0.356155 | 0.364828ms | 800 | 30 | 1120.25 | 1715.77 | 2(Loss) |
| std::from_chars | 402.507 | 0.0251346 | 0.406723ms | 800 | 30 | 6.8092 | 1895.47 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1039.8 | 0.0771559 | 1.37476ms | 8000 | 30 | 961.471 | 7337.33 | 1(Win) |
| strtoll/strtoull **STATISTICAL TIE** | 397.936 | 2.22857 | 8.4421ms | 8000 | 30 | 5.47681e+06 | 19172.4 | 2(Tie) |
| std::from_chars **STATISTICAL TIE** | 385.531 | 0.0469414 | 3.23843ms | 8000 | 30 | 2588.78 | 19789.3 | 2(Tie) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 859.9 | 0.600127 | 18.2573ms | 80000 | 30 | 8.50533e+06 | 88724.2 | 1(Win) |
| std::from_chars | 567.312 | 1.1269 | 25.5427ms | 80000 | 30 | 6.8902e+07 | 134483 | 2(Loss) |
| strtoll/strtoull | 347.447 | 2.06079 | 200.227ms | 80000 | 48 | 9.8291e+08 | 219585 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 664.293 | 1.8998 | 1091.52ms | 800000 | 48 | 2.28518e+10 | 1.1485e+06 | 1(Win) |
| std::from_chars | 565.373 | 2.3521 | 250.376ms | 800000 | 30 | 3.02232e+10 | 1.34944e+06 | 2(Loss) |
| strtoll/strtoull | 327.239 | 2.00892 | 2304.94ms | 800000 | 48 | 1.05297e+11 | 2.33144e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 993.109 | 0.0557116 | 0.177357ms | 800 | 30 | 5.4954 | 768.233 | 1(Win) |
| std::from_chars | 794.37 | 0.0907809 | 0.198428ms | 800 | 30 | 22.8057 | 960.433 | 2(Loss) |
| strtoll/strtoull | 374.725 | 0.140153 | 0.428204ms | 800 | 30 | 244.276 | 2036 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1038.73 | 0.0245151 | 3.24209ms | 8000 | 30 | 97.2655 | 7344.9 | 1(Win) |
| std::from_chars | 768.264 | 0.0741959 | 1.86277ms | 8000 | 30 | 1628.7 | 9930.7 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1058.58 | 1.16211 | 13.1759ms | 80000 | 30 | 2.10449e+07 | 72071.8 | 1(Win) |
| std::from_chars | 661.483 | 1.8625 | 48.6378ms | 80000 | 30 | 1.38438e+08 | 115338 | 2(Loss) |
| strtoll/strtoull | 380.032 | 1.98614 | 196.712ms | 80000 | 48 | 7.63132e+08 | 200757 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 934.778 | 2.25325 | 149.688ms | 800000 | 30 | 1.01462e+10 | 816172 | 1(Win) |
| std::from_chars | 743.097 | 1.89117 | 959.397ms | 800000 | 48 | 1.80964e+10 | 1.0267e+06 | 2(Loss) |
| strtoll/strtoull | 333.203 | 1.45142 | 2133ms | 800000 | 48 | 5.30138e+10 | 2.28971e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1022.07 | 0.0591251 | 0.15961ms | 800 | 30 | 5.84368 | 746.467 | 1(Win) |
| std::from_chars | 758.364 | 0.0908626 | 0.212529ms | 800 | 30 | 25.0678 | 1006.03 | 2(Loss) |
| strtoll/strtoull | 378.292 | 0.0334015 | 0.385707ms | 800 | 30 | 13.6138 | 2016.8 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 781.572 | 0.54037 | 1.82949ms | 8000 | 30 | 83472.9 | 9761.6 | 1(Win) |
| vn::from_chars | 640.867 | 0.0209212 | 1.89607ms | 8000 | 30 | 186.097 | 11904.8 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 842.23 | 0.919672 | 41.2241ms | 80000 | 30 | 2.08212e+07 | 90585.6 | 1(Win) |
| std::from_chars | 657.793 | 0.771546 | 52.689ms | 80000 | 30 | 2.4024e+07 | 115985 | 2(Loss) |
| strtoll/strtoull | 365.736 | 1.20974 | 39.7883ms | 80000 | 30 | 1.9105e+08 | 208604 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 743.149 | 2.39941 | 440.648ms | 800000 | 30 | 1.82036e+10 | 1.02663e+06 | 1(Win) |
| strtoll/strtoull | 342.162 | 2.1578 | 400.01ms | 800000 | 30 | 6.94482e+10 | 2.22976e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 998.699 | 0.0815751 | 0.162657ms | 800 | 30 | 11.6506 | 763.933 | 1(Win) |
| std::from_chars | 695.161 | 0.113144 | 0.22593ms | 800 | 30 | 46.2586 | 1097.5 | 2(Loss) |
| strtoll/strtoull | 347.85 | 0.0858183 | 0.428417ms | 800 | 30 | 106.286 | 2193.3 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 995.913 | 0.560393 | 1.45406ms | 8000 | 30 | 55289.5 | 7660.7 | 1(Win) |
| std::from_chars | 635.553 | 0.103388 | 5.74186ms | 8000 | 30 | 4620.99 | 12004.3 | 2(Loss) |
| strtoll/strtoull | 347.806 | 1.15107 | 3.96412ms | 8000 | 30 | 1.91262e+06 | 21935.8 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 998.614 | 0.368839 | 16.0879ms | 80000 | 30 | 2.38221e+06 | 76399.9 | 1(Win) |
| std::from_chars | 607.202 | 0.74195 | 23.2536ms | 80000 | 30 | 2.60726e+07 | 125648 | 2(Loss) |
| strtoll/strtoull | 333.384 | 1.34596 | 152.098ms | 80000 | 30 | 2.84627e+08 | 228847 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 782.188 | 2.41302 | 177.637ms | 800000 | 30 | 1.66188e+10 | 975391 | 1(Win) |
| std::from_chars | 601.591 | 1.57982 | 237.556ms | 800000 | 30 | 1.20424e+10 | 1.2682e+06 | 2(Loss) |
| strtoll/strtoull | 315.502 | 1.75665 | 2243.23ms | 800000 | 48 | 8.66135e+10 | 2.41817e+06 | 3(Loss) |
