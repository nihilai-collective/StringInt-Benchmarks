# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 154.025 | 0.125601 | 0.127397ms | 100 | 30 | 18.1437 | 619.167 | 14.259 | 1(Win) |
| std::from_chars | 77.665 | 0.101516 | 0.234777ms | 100 | 30 | 46.6161 | 1227.93 | 29.139 | 2(Loss) |
| strtoll/strtoull | 33.756 | 0.0331868 | 0.522934ms | 100 | 30 | 26.3724 | 2825.2 | 68.265 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 139.766 | 0.0514564 | 2.96526ms | 1000 | 30 | 369.826 | 6823.37 | 16.5955 | 1(Win) |
| std::from_chars | 77.1205 | 0.0146798 | 2.27011ms | 1000 | 30 | 98.8609 | 12366 | 30.1529 | 2(Loss) |
| strtoll/strtoull | 28.7305 | 0.778613 | 6.02216ms | 1000 | 30 | 2.00391e+06 | 33193.8 | 81.0902 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 48.2349 | 0.536119 | 35.3189ms | 10000 | 30 | 3.37072e+07 | 197715 | 48.3402 | 1(Win) |
| std::from_chars | 47.1118 | 0.356246 | 36.4945ms | 10000 | 30 | 1.56014e+07 | 202428 | 49.4933 | 2(Loss) |
| strtoll/strtoull | 26.1927 | 0.232255 | 65.5882ms | 10000 | 30 | 2.14531e+07 | 364099 | 89.028 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 45.2151 | 0.130711 | 380.539ms | 100000 | 30 | 2.28024e+08 | 2.1092e+06 | 51.5757 | 1(Win) |
| vn::from_chars | 42.1768 | 0.0454751 | 407.12ms | 100000 | 30 | 3.17191e+07 | 2.26113e+06 | 55.2924 | 2(Loss) |
| strtoll/strtoull | 26.2465 | 0.0798128 | 654.119ms | 100000 | 30 | 2.52304e+08 | 3.63353e+06 | 88.8522 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 139.175 | 0.137236 | 0.138258ms | 100 | 30 | 26.5299 | 685.233 | 15.852 | 1(Win) |
| std::from_chars | 82.4407 | 0.0793368 | 0.26288ms | 100 | 30 | 25.269 | 1156.8 | 27.416 | 2(Loss) |
| strtoll/strtoull | 32.7524 | 0.0403236 | 0.581063ms | 100 | 30 | 41.3575 | 2911.77 | 70.3413 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 137.174 | 0.401019 | 1.33978ms | 1000 | 30 | 23318.9 | 6952.3 | 16.9182 | 1(Win) |
| std::from_chars | 75.3143 | 2.09588 | 2.31258ms | 1000 | 30 | 2.113e+06 | 12662.6 | 30.8824 | 2(Loss) |
| strtoll/strtoull | 29.3154 | 0.863639 | 5.9239ms | 1000 | 30 | 2.36808e+06 | 32531.6 | 79.4683 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 55.0657 | 0.441139 | 31.2812ms | 10000 | 30 | 1.75109e+07 | 173188 | 42.3433 | 1(Win) |
| vn::from_chars | 51.8031 | 0.56045 | 33.4257ms | 10000 | 30 | 3.19362e+07 | 184096 | 45.0094 | 2(Loss) |
| strtoll/strtoull | 28.5379 | 0.280065 | 60.212ms | 10000 | 30 | 2.62781e+07 | 334178 | 81.7107 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 54.0082 | 0.217854 | 317.638ms | 100000 | 30 | 4.43948e+08 | 1.76579e+06 | 43.1778 | 1(Win) |
| vn::from_chars | 47.4369 | 0.0940982 | 361.996ms | 100000 | 30 | 1.07362e+08 | 2.01041e+06 | 49.161 | 2(Loss) |
| strtoll/strtoull | 29.0398 | 0.0891154 | 590.953ms | 100000 | 30 | 2.56944e+08 | 3.28402e+06 | 80.303 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 172.309 | 0.145406 | 0.114744ms | 100 | 30 | 19.4299 | 553.467 | 12.666 | 1(Win) |
| std::from_chars | 84.5281 | 0.0818197 | 0.216393ms | 100 | 30 | 25.5644 | 1128.23 | 26.746 | 2(Loss) |
| strtoll/strtoull | 34.7456 | 0.0882277 | 1.19755ms | 100 | 30 | 175.926 | 2744.73 | 66.2883 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 162.154 | 0.0648106 | 1.13679ms | 1000 | 30 | 435.872 | 5881.3 | 14.2965 | 1(Win) |
| std::from_chars | 72.4128 | 2.04234 | 2.40509ms | 1000 | 30 | 2.17044e+06 | 13170 | 32.122 | 2(Loss) |
| strtoll/strtoull | 31.5404 | 0.900311 | 5.44015ms | 1000 | 30 | 2.22316e+06 | 30236.6 | 73.857 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 55.9307 | 0.363793 | 30.9889ms | 10000 | 30 | 1.15433e+07 | 170510 | 41.688 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 55.6938 | 0.386773 | 30.924ms | 10000 | 30 | 1.31589e+07 | 171235 | 41.8649 | 1(Tie) |
| strtoll/strtoull | 30.3263 | 0.246837 | 56.6888ms | 10000 | 30 | 1.8076e+07 | 314471 | 76.8922 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 54.066 | 0.188233 | 317.147ms | 100000 | 30 | 3.30722e+08 | 1.76391e+06 | 43.1323 | 1(Win) |
| vn::from_chars | 49.3481 | 0.183505 | 347.155ms | 100000 | 30 | 3.77292e+08 | 1.93255e+06 | 47.2569 | 2(Loss) |
| strtoll/strtoull | 30.8362 | 0.0609146 | 557.213ms | 100000 | 30 | 1.06474e+08 | 3.09271e+06 | 75.6279 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 168.088 | 0.157074 | 0.143888ms | 100 | 30 | 23.8264 | 567.367 | 12.9443 | 1(Win) |
| std::from_chars | 76.1579 | 0.0768337 | 0.237833ms | 100 | 30 | 27.7713 | 1252.23 | 29.76 | 2(Loss) |
| strtoll/strtoull | 27.2598 | 0.0262096 | 0.641886ms | 100 | 30 | 25.223 | 3498.47 | 84.681 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 161.145 | 0.0593434 | 2.58556ms | 1000 | 30 | 370.024 | 5918.1 | 14.3863 | 1(Win) |
| std::from_chars | 80.9798 | 0.0422751 | 2.23319ms | 1000 | 30 | 743.597 | 11776.7 | 28.7124 | 2(Loss) |
| strtoll/strtoull | 27.8642 | 0.734661 | 6.18801ms | 1000 | 30 | 1.89671e+06 | 34225.8 | 83.6046 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 54.3083 | 0.367979 | 31.7694ms | 10000 | 30 | 1.25267e+07 | 175604 | 42.9334 | 1(Win) |
| std::from_chars | 51.735 | 0.387545 | 33.2663ms | 10000 | 30 | 1.53108e+07 | 184338 | 45.0696 | 2(Loss) |
| strtoll/strtoull | 27.6217 | 0.20719 | 62.4207ms | 10000 | 30 | 1.53518e+07 | 345262 | 84.4208 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 50.7779 | 0.231152 | 336.368ms | 100000 | 30 | 5.65414e+08 | 1.87813e+06 | 45.9247 | 1(Win) |
| vn::from_chars | 48.8609 | 0.0593611 | 351.646ms | 100000 | 30 | 4.02719e+07 | 1.95181e+06 | 47.7282 | 2(Loss) |
| strtoll/strtoull | 27.353 | 0.118318 | 628.627ms | 100000 | 30 | 5.10522e+08 | 3.48655e+06 | 85.2588 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 223.125 | 0.101439 | 0.169586ms | 200 | 30 | 22.5575 | 854.833 | 10.0327 | 1(Win) |
| std::from_chars | 133.815 | 0.280034 | 0.286745ms | 200 | 30 | 477.964 | 1425.37 | 16.9457 | 2(Loss) |
| strtoll/strtoull | 59.6059 | 0.0324812 | 0.595118ms | 200 | 30 | 32.4092 | 3199.93 | 38.6898 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 234.602 | 0.0452091 | 1.52828ms | 2000 | 30 | 405.292 | 8130.13 | 9.89753 | 1(Win) |
| std::from_chars | 137.207 | 0.0227911 | 5.93937ms | 2000 | 30 | 301.131 | 13901.2 | 16.9528 | 2(Loss) |
| strtoll/strtoull | 51.9463 | 0.693605 | 6.71761ms | 2000 | 30 | 1.94579e+06 | 36717.7 | 44.8542 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 99.9709 | 0.40548 | 34.4222ms | 20000 | 30 | 1.79545e+07 | 190790 | 23.3231 | 1(Win) |
| std::from_chars | 84.0592 | 0.320195 | 40.8731ms | 20000 | 30 | 1.58357e+07 | 226905 | 27.739 | 2(Loss) |
| strtoll/strtoull | 48.8125 | 0.198508 | 70.6141ms | 20000 | 30 | 1.80499e+07 | 390750 | 47.7727 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 91.1732 | 0.0769475 | 376.535ms | 200000 | 30 | 7.77384e+07 | 2.09201e+06 | 25.5778 | 1(Win) |
| std::from_chars | 83.2593 | 0.0848197 | 412.255ms | 200000 | 30 | 1.13268e+08 | 2.29085e+06 | 28.0094 | 2(Loss) |
| strtoll/strtoull | 48.3822 | 0.0813884 | 710.107ms | 200000 | 30 | 3.08841e+08 | 3.94225e+06 | 48.1988 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 211.286 | 0.194853 | 0.17758ms | 200 | 30 | 92.823 | 902.733 | 10.5962 | 1(Win) |
| std::from_chars | 133.73 | 0.0799719 | 0.289869ms | 200 | 30 | 39.0299 | 1426.27 | 17.0072 | 2(Loss) |
| strtoll/strtoull | 54.7638 | 0.040388 | 1.49482ms | 200 | 30 | 59.3609 | 3482.87 | 42.1485 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 226.05 | 0.0394871 | 1.58957ms | 2000 | 30 | 333.03 | 8437.73 | 10.2728 | 1(Win) |
| std::from_chars | 119.655 | 0.0128309 | 2.93188ms | 2000 | 30 | 125.499 | 15940.5 | 19.4473 | 2(Loss) |
| strtoll/strtoull | 53.5973 | 0.722243 | 6.46115ms | 2000 | 30 | 1.98181e+06 | 35586.6 | 43.4704 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 115.891 | 0.387623 | 29.6296ms | 20000 | 30 | 1.22095e+07 | 164581 | 20.1189 | 1(Win) |
| std::from_chars | 97.9097 | 0.297879 | 35.2183ms | 20000 | 30 | 1.01021e+07 | 194807 | 23.8147 | 2(Loss) |
| strtoll/strtoull | 53.105 | 0.484979 | 64.5272ms | 20000 | 30 | 9.10242e+07 | 359165 | 43.91 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 110.045 | 0.108344 | 312.146ms | 200000 | 30 | 1.05792e+08 | 1.73325e+06 | 21.1915 | 1(Win) |
| std::from_chars | 97.8521 | 0.0782938 | 352.629ms | 200000 | 30 | 6.98709e+07 | 1.94922e+06 | 23.832 | 2(Loss) |
| strtoll/strtoull | 53.0534 | 0.111579 | 647.4ms | 200000 | 30 | 4.82747e+08 | 3.59515e+06 | 43.9565 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 220.172 | 0.107626 | 0.190405ms | 200 | 30 | 26.0793 | 866.3 | 10.1467 | 1(Win) |
| std::from_chars | 135.919 | 0.0499993 | 0.283368ms | 200 | 30 | 14.769 | 1403.3 | 16.7295 | 2(Loss) |
| strtoll/strtoull | 60.3496 | 0.029524 | 0.599557ms | 200 | 30 | 26.1207 | 3160.5 | 38.1998 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 242.501 | 0.0422043 | 3.42971ms | 2000 | 30 | 330.575 | 7865.33 | 9.57582 | 1(Win) |
| std::from_chars | 116.819 | 1.71681 | 2.95767ms | 2000 | 30 | 2.35722e+06 | 16327.4 | 19.9222 | 2(Loss) |
| strtoll/strtoull | 55.9716 | 0.836491 | 6.20128ms | 2000 | 30 | 2.43763e+06 | 34077.1 | 41.6255 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 120.494 | 0.368795 | 28.6937ms | 20000 | 30 | 1.02239e+07 | 158294 | 19.35 | 1(Win) |
| std::from_chars | 98.8095 | 0.657725 | 34.7572ms | 20000 | 30 | 4.83585e+07 | 193033 | 23.5973 | 2(Loss) |
| strtoll/strtoull | 56.2492 | 0.227615 | 61.2752ms | 20000 | 30 | 1.7871e+07 | 339089 | 41.456 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 111.45 | 0.169107 | 307.289ms | 200000 | 30 | 2.51273e+08 | 1.7114e+06 | 20.9239 | 1(Win) |
| std::from_chars | 99.2648 | 0.117457 | 345.873ms | 200000 | 30 | 1.52809e+08 | 1.92148e+06 | 23.493 | 2(Loss) |
| strtoll/strtoull | 55.7009 | 0.0914463 | 616.551ms | 200000 | 30 | 2.94164e+08 | 3.42427e+06 | 41.8678 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 234.683 | 0.081517 | 0.16064ms | 200 | 30 | 13.1678 | 812.733 | 9.50183 | 1(Win) |
| std::from_chars | 130.1 | 0.0754985 | 0.277607ms | 200 | 30 | 36.754 | 1466.07 | 17.4968 | 2(Loss) |
| strtoll/strtoull | 49.3399 | 0.0268297 | 0.808155ms | 200 | 30 | 32.2713 | 3865.73 | 46.8358 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 242.189 | 0.0306208 | 1.49487ms | 2000 | 30 | 174.464 | 7875.47 | 9.5852 | 1(Win) |
| std::from_chars | 133.402 | 0.0272942 | 2.61587ms | 2000 | 30 | 456.875 | 14297.8 | 17.4387 | 2(Loss) |
| strtoll/strtoull | 49.6399 | 0.669716 | 7.02121ms | 2000 | 30 | 1.98655e+06 | 38423.7 | 46.9392 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 129.79 | 0.384729 | 26.6691ms | 20000 | 30 | 9.58979e+06 | 146957 | 17.9637 | 1(Win) |
| std::from_chars | 93.7825 | 0.335225 | 36.6481ms | 20000 | 30 | 1.39448e+07 | 203380 | 24.8627 | 2(Loss) |
| strtoll/strtoull | 49.8506 | 0.207174 | 69.5129ms | 20000 | 30 | 1.885e+07 | 382613 | 46.7778 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 120.759 | 0.0595981 | 284.368ms | 200000 | 30 | 2.65833e+07 | 1.57947e+06 | 19.3114 | 1(Win) |
| std::from_chars | 93.0117 | 0.124479 | 369.748ms | 200000 | 30 | 1.95479e+08 | 2.05065e+06 | 25.0724 | 2(Loss) |
| strtoll/strtoull | 49.6638 | 0.093014 | 691.719ms | 200000 | 30 | 3.82823e+08 | 3.84052e+06 | 46.9572 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 305.894 | 0.0760181 | 0.238464ms | 400 | 30 | 26.9609 | 1247.07 | 7.40908 | 1(Win) |
| std::from_chars | 195.562 | 0.0436584 | 0.924532ms | 400 | 30 | 21.7575 | 1950.63 | 11.7072 | 2(Loss) |
| strtoll/strtoull | 91.2338 | 0.0310814 | 0.809077ms | 400 | 30 | 50.6678 | 4181.23 | 25.3429 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.747 | 2.32258 | 2.20802ms | 4000 | 30 | 2.42314e+06 | 12236.5 | 7.46064 | 1(Win) |
| std::from_chars | 196.144 | 0.00874659 | 3.55575ms | 4000 | 30 | 86.8103 | 19448.5 | 11.8686 | 2(Loss) |
| strtoll/strtoull | 85.039 | 0.966923 | 8.04852ms | 4000 | 30 | 5.64402e+06 | 44858.2 | 27.4022 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 179.647 | 0.370422 | 38.2928ms | 40000 | 30 | 1.85608e+07 | 212344 | 12.9789 | 1(Win) |
| std::from_chars | 141.169 | 0.290989 | 48.6572ms | 40000 | 30 | 1.85488e+07 | 270223 | 16.5176 | 2(Loss) |
| strtoll/strtoull | 84.3104 | 0.255196 | 81.4833ms | 40000 | 30 | 3.9997e+07 | 452459 | 27.6581 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 169.194 | 0.107916 | 406.571ms | 400000 | 30 | 1.776e+08 | 2.25463e+06 | 13.7831 | 1(Win) |
| std::from_chars | 138.542 | 0.0794732 | 496.146ms | 400000 | 30 | 1.43654e+08 | 2.75345e+06 | 16.8327 | 2(Loss) |
| strtoll/strtoull | 83.8834 | 0.144502 | 818.196ms | 400000 | 30 | 1.2955e+09 | 4.54762e+06 | 27.801 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 308.209 | 0.0782618 | 0.23648ms | 400 | 30 | 28.1483 | 1237.7 | 7.348 | 1(Win) |
| std::from_chars | 191.047 | 0.0430842 | 0.372233ms | 400 | 30 | 22.2023 | 1996.73 | 11.9887 | 2(Loss) |
| strtoll/strtoull | 91.9101 | 0.0327095 | 0.806623ms | 400 | 30 | 55.292 | 4150.47 | 25.1633 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 317.542 | 0.0160462 | 2.24639ms | 4000 | 30 | 111.476 | 12013.2 | 7.32305 | 1(Win) |
| std::from_chars | 192.251 | 1.29904 | 3.61062ms | 4000 | 30 | 1.99319e+06 | 19842.3 | 12.109 | 2(Loss) |
| strtoll/strtoull | 92.831 | 0.619056 | 7.55532ms | 4000 | 30 | 1.9414e+06 | 41092.9 | 25.1019 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 208.813 | 0.393433 | 32.9824ms | 40000 | 30 | 1.54978e+07 | 182685 | 11.1654 | 1(Win) |
| std::from_chars | 160.126 | 0.352942 | 42.904ms | 40000 | 30 | 2.12093e+07 | 238231 | 14.5617 | 2(Loss) |
| strtoll/strtoull | 91.2907 | 0.332201 | 75.3296ms | 40000 | 30 | 5.78082e+07 | 417863 | 25.5428 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 199.272 | 0.18162 | 345.62ms | 400000 | 30 | 3.62641e+08 | 1.91432e+06 | 11.7029 | 1(Win) |
| std::from_chars | 158.175 | 0.0725437 | 434.324ms | 400000 | 30 | 9.18259e+07 | 2.41169e+06 | 14.7434 | 2(Loss) |
| strtoll/strtoull | 91.5137 | 0.0731052 | 750.697ms | 400000 | 30 | 2.7859e+08 | 4.16844e+06 | 25.4827 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.497 | 0.0619639 | 0.234868ms | 400 | 30 | 17.2747 | 1224.63 | 7.27442 | 1(Win) |
| std::from_chars | 184.131 | 0.038304 | 0.426585ms | 400 | 30 | 18.892 | 2071.73 | 12.4415 | 2(Loss) |
| strtoll/strtoull | 98.4489 | 0.0244177 | 0.76198ms | 400 | 30 | 26.8552 | 3874.8 | 23.4712 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 317.51 | 0.014715 | 2.22291ms | 4000 | 30 | 93.7655 | 12014.4 | 7.32307 | 1(Win) |
| std::from_chars | 183.36 | 1.23942 | 3.76507ms | 4000 | 30 | 1.99466e+06 | 20804.4 | 12.6973 | 2(Loss) |
| strtoll/strtoull | 95.2526 | 0.671721 | 7.24735ms | 4000 | 30 | 2.17103e+06 | 40048.2 | 24.4622 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 210.478 | 0.737021 | 32.6452ms | 40000 | 30 | 5.3529e+07 | 181240 | 11.0777 | 1(Win) |
| std::from_chars | 164.379 | 0.356995 | 41.7911ms | 40000 | 30 | 2.05909e+07 | 232068 | 14.185 | 2(Loss) |
| strtoll/strtoull | 95.7155 | 0.221247 | 71.8298ms | 40000 | 30 | 2.33256e+07 | 398545 | 24.3623 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 201.46 | 0.117703 | 341.687ms | 400000 | 30 | 1.49017e+08 | 1.89353e+06 | 11.5757 | 1(Win) |
| std::from_chars | 161.006 | 0.0758464 | 426.756ms | 400000 | 30 | 9.68788e+07 | 2.36929e+06 | 14.4843 | 2(Loss) |
| strtoll/strtoull | 95.0903 | 0.262739 | 719.508ms | 400000 | 30 | 3.33287e+09 | 4.01166e+06 | 24.5248 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.607 | 0.0607254 | 0.233084ms | 400 | 30 | 16.5793 | 1224.2 | 7.27233 | 1(Win) |
| std::from_chars | 204.315 | 0.0485844 | 0.365391ms | 400 | 30 | 24.6851 | 1867.07 | 11.2048 | 2(Loss) |
| strtoll/strtoull | 85.8019 | 0.0204599 | 0.830537ms | 400 | 30 | 24.823 | 4445.93 | 26.9623 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 308.752 | 2.33434 | 2.21807ms | 4000 | 30 | 2.49547e+06 | 12355.2 | 7.53153 | 1(Win) |
| std::from_chars | 195.597 | 1.35878 | 3.54024ms | 4000 | 30 | 2.10675e+06 | 19502.8 | 11.9017 | 2(Loss) |
| strtoll/strtoull | 83.4893 | 0.571184 | 8.27105ms | 4000 | 30 | 2.0433e+06 | 45690.9 | 27.911 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 228.672 | 0.494277 | 30.22ms | 40000 | 30 | 2.03966e+07 | 166820 | 10.1962 | 1(Win) |
| std::from_chars | 170.389 | 0.330768 | 40.5545ms | 40000 | 30 | 1.64515e+07 | 223882 | 13.6843 | 2(Loss) |
| strtoll/strtoull | 83.1831 | 0.51926 | 82.2728ms | 40000 | 30 | 1.70115e+08 | 458590 | 28.0328 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 221.144 | 0.0622968 | 310.892ms | 400000 | 30 | 3.46436e+07 | 1.72498e+06 | 10.5452 | 1(Win) |
| std::from_chars | 168.304 | 0.216803 | 406.731ms | 400000 | 30 | 7.24412e+08 | 2.26656e+06 | 13.8558 | 2(Loss) |
| strtoll/strtoull | 82.942 | 0.0984333 | 827.945ms | 400000 | 30 | 6.1486e+08 | 4.59923e+06 | 28.1167 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 436.04 | 0.0521478 | 0.796083ms | 800 | 30 | 24.9759 | 1749.7 | 5.24079 | 1(Win) |
| std::from_chars | 302.87 | 0.036138 | 0.470056ms | 800 | 30 | 24.8609 | 2519.03 | 7.591 | 2(Loss) |
| strtoll/strtoull | 137.97 | 0.0276229 | 1.05318ms | 800 | 30 | 69.9954 | 5529.73 | 16.7936 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 434.517 | 1.95663 | 3.22754ms | 8000 | 30 | 3.54083e+06 | 17558.3 | 5.35621 | 1(Win) |
| std::from_chars | 274.309 | 1.11172 | 4.99015ms | 8000 | 30 | 2.86824e+06 | 27813.2 | 8.49099 | 2(Loss) |
| strtoll/strtoull | 131.676 | 0.827535 | 10.4849ms | 8000 | 30 | 6.89706e+06 | 57940.9 | 17.7011 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 309.206 | 0.306264 | 44.6663ms | 80000 | 30 | 1.71316e+07 | 246742 | 7.53988 | 1(Win) |
| std::from_chars | 231.627 | 0.253948 | 59.615ms | 80000 | 30 | 2.099e+07 | 329383 | 10.0663 | 2(Loss) |
| strtoll/strtoull | 130.529 | 0.283082 | 105.365ms | 80000 | 30 | 8.21317e+07 | 584497 | 17.8644 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 294.76 | 0.0837711 | 466.155ms | 800000 | 30 | 1.41044e+08 | 2.58835e+06 | 7.91162 | 1(Win) |
| std::from_chars | 230.302 | 0.039652 | 597.221ms | 800000 | 30 | 5.1765e+07 | 3.31278e+06 | 10.1262 | 2(Loss) |
| strtoll/strtoull | 130.415 | 0.0870974 | 1052.87ms | 800000 | 30 | 7.78857e+08 | 5.85009e+06 | 17.8817 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 396.03 | 0.0449874 | 0.360532ms | 800 | 30 | 22.5333 | 1926.47 | 5.78304 | 1(Win) |
| std::from_chars | 296.08 | 0.0345308 | 0.512134ms | 800 | 30 | 23.7517 | 2576.8 | 7.7645 | 2(Loss) |
| strtoll/strtoull | 143.53 | 0.0219788 | 1.00686ms | 800 | 30 | 40.9471 | 5315.53 | 16.1444 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 399.459 | 1.35737 | 3.47539ms | 8000 | 30 | 2.01628e+06 | 19099.3 | 5.82734 | 1(Win) |
| std::from_chars | 274.767 | 0.934961 | 11.7567ms | 8000 | 30 | 2.0219e+06 | 27766.8 | 8.47721 | 2(Loss) |
| strtoll/strtoull | 137.863 | 2.43269 | 9.71626ms | 8000 | 30 | 5.43721e+07 | 55340.2 | 16.9044 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 333.5 | 0.325767 | 41.3369ms | 80000 | 30 | 1.6662e+07 | 228768 | 6.99126 | 1(Win) |
| std::from_chars | 255.698 | 0.284656 | 53.8532ms | 80000 | 30 | 2.16415e+07 | 298375 | 9.11726 | 2(Loss) |
| strtoll/strtoull | 142.469 | 0.341768 | 96.3631ms | 80000 | 30 | 1.0049e+08 | 535512 | 16.3669 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 323.419 | 0.0501007 | 425.337ms | 800000 | 30 | 4.19043e+07 | 2.35898e+06 | 7.21063 | 1(Win) |
| std::from_chars | 254.548 | 0.10824 | 539.884ms | 800000 | 30 | 3.15747e+08 | 2.99723e+06 | 9.1613 | 2(Loss) |
| strtoll/strtoull | 142.242 | 0.108976 | 964.719ms | 800000 | 30 | 1.02497e+09 | 5.36368e+06 | 16.3949 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 458.479 | 0.0333449 | 0.309546ms | 800 | 30 | 9.23678 | 1664.07 | 4.97967 | 1(Win) |
| std::from_chars | 297.934 | 0.0352619 | 0.474114ms | 800 | 30 | 24.4609 | 2560.77 | 7.7175 | 2(Loss) |
| strtoll/strtoull | 146.458 | 1.75143 | 0.975628ms | 800 | 30 | 249725 | 5209.27 | 15.8168 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 474.316 | 0.161052 | 2.95199ms | 8000 | 30 | 20132.4 | 16085 | 4.9062 | 1(Win) |
| std::from_chars | 274.394 | 1.52909 | 5.00845ms | 8000 | 30 | 5.42277e+06 | 27804.5 | 8.48874 | 2(Loss) |
| strtoll/strtoull | 147.765 | 0.726491 | 9.31417ms | 8000 | 30 | 4.22103e+06 | 51631.9 | 15.7716 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 366.796 | 0.366429 | 37.6631ms | 80000 | 30 | 1.74273e+07 | 208001 | 6.35568 | 1(Win) |
| std::from_chars | 255.669 | 0.292023 | 53.8172ms | 80000 | 30 | 2.27813e+07 | 298409 | 9.11941 | 2(Loss) |
| strtoll/strtoull | 147.974 | 0.192318 | 93.9335ms | 80000 | 30 | 2.94967e+07 | 515591 | 15.7583 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 354.328 | 0.0868253 | 387.582ms | 800000 | 30 | 1.04853e+08 | 2.1532e+06 | 6.58155 | 1(Win) |
| std::from_chars | 254.736 | 0.068317 | 539.658ms | 800000 | 30 | 1.25597e+08 | 2.99502e+06 | 9.15435 | 2(Loss) |
| strtoll/strtoull | 147.465 | 0.122203 | 931.307ms | 800000 | 30 | 1.19919e+09 | 5.17371e+06 | 15.8143 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 472.935 | 0.0472185 | 0.312693ms | 800 | 30 | 17.4069 | 1613.2 | 4.82254 | 1(Win) |
| std::from_chars | 315.982 | 0.0403922 | 0.448535ms | 800 | 30 | 28.5345 | 2414.5 | 7.27333 | 2(Loss) |
| strtoll/strtoull | 130.746 | 0.0157822 | 2.49524ms | 800 | 30 | 25.4437 | 5835.27 | 17.7279 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 466.52 | 1.66611 | 2.953ms | 8000 | 30 | 2.22725e+06 | 16353.8 | 4.98851 | 1(Win) |
| std::from_chars | 276.22 | 1.17953 | 5.00668ms | 8000 | 30 | 3.18426e+06 | 27620.8 | 8.43187 | 2(Loss) |
| strtoll/strtoull | 125.558 | 0.718562 | 10.9512ms | 8000 | 30 | 5.71926e+06 | 60763.8 | 18.5632 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 338.16 | 1.13486 | 40.2404ms | 80000 | 30 | 1.96671e+08 | 225615 | 6.89398 | 1(Win) |
| std::from_chars | 261.222 | 0.329966 | 52.6693ms | 80000 | 30 | 2.78625e+07 | 292066 | 8.92554 | 2(Loss) |
| strtoll/strtoull | 125.672 | 0.149096 | 109.699ms | 80000 | 30 | 2.45786e+07 | 607090 | 18.5553 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 330.452 | 0.058806 | 416.416ms | 800000 | 30 | 5.53005e+07 | 2.30878e+06 | 7.05673 | 1(Win) |
| std::from_chars | 259.844 | 0.143136 | 528.728ms | 800000 | 30 | 5.29875e+08 | 2.93615e+06 | 8.9747 | 2(Loss) |
| strtoll/strtoull | 125.255 | 0.163662 | 1096.29ms | 800000 | 30 | 2.98135e+09 | 6.09111e+06 | 18.6183 | 3(Loss) |
