# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 257.75 | 2.2999 | 0.0883ms | 100 | 30 | 2172.41 | 370 | 11.4493 | 1(Win) |
| std::from_chars | 124.935 | 1.1723 | 0.17ms | 100 | 30 | 2402.3 | 763.333 | 23.773 | 2(Loss) |
| strtoll/strtoull | 62.3317 | 0.556185 | 0.6722ms | 100 | 30 | 2172.41 | 1530 | 47.9763 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 257.982 | 0.0901713 | 0.7344ms | 1000 | 30 | 333.333 | 3696.67 | 11.7363 | 1(Win) |
| std::from_chars | 107.23 | 0.682334 | 8.4129ms | 1000 | 48 | 176769 | 8893.75 | 28.2618 | 2(Loss) |
| strtoll/strtoull | 51.8583 | 2.00794 | 7.9905ms | 1000 | 30 | 4.09059e+06 | 18390 | 58.5527 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 65.3067 | 0.765289 | 26.7026ms | 10000 | 30 | 3.74677e+07 | 146030 | 46.5315 | 1(Win) |
| vn::from_chars | 62.536 | 0.610523 | 27.9553ms | 10000 | 30 | 2.60055e+07 | 152500 | 48.59 | 2(Loss) |
| strtoll/strtoull | 37.2548 | 0.865897 | 46.2292ms | 10000 | 30 | 1.47397e+08 | 255987 | 81.5758 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 59.9491 | 0.218918 | 286.876ms | 100000 | 30 | 3.63848e+08 | 1.59081e+06 | 50.6954 | 1(Win) |
| vn::from_chars | 57.4559 | 0.217253 | 299.836ms | 100000 | 30 | 3.90106e+08 | 1.65984e+06 | 52.8959 | 2(Loss) |
| strtoll/strtoull | 36.319 | 0.39807 | 471.305ms | 100000 | 30 | 3.27772e+09 | 2.62583e+06 | 83.6838 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 257.75 | 2.2999 | 0.088ms | 100 | 30 | 2172.41 | 370 | 11.2333 | 1(Win) |
| std::from_chars | 144.496 | 1.37836 | 0.1435ms | 100 | 30 | 2482.76 | 660 | 21.1953 | 2(Loss) |
| strtoll/strtoull | 65.1714 | 0.611519 | 0.658ms | 100 | 30 | 2402.3 | 1463.33 | 46.109 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 271.187 | 0.19679 | 0.6995ms | 1000 | 30 | 1436.78 | 3516.67 | 11.1465 | 1(Win) |
| std::from_chars | 102.952 | 0.150755 | 1.7994ms | 1000 | 30 | 5850.57 | 9263.33 | 29.5028 | 2(Loss) |
| strtoll/strtoull | 51.3464 | 2.0708 | 3.3587ms | 1000 | 30 | 4.43789e+06 | 18573.3 | 59.1172 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 79.7431 | 0.773571 | 21.8873ms | 10000 | 30 | 2.56765e+07 | 119593 | 38.1019 | 1(Win) |
| vn::from_chars | 75.439 | 0.870023 | 23.4784ms | 10000 | 30 | 3.62904e+07 | 126417 | 40.2797 | 2(Loss) |
| strtoll/strtoull | 42.564 | 0.473172 | 41.0574ms | 10000 | 30 | 3.37191e+07 | 224057 | 71.3996 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 74.5518 | 0.256777 | 230.831ms | 100000 | 30 | 3.23681e+08 | 1.27921e+06 | 40.7649 | 1(Win) |
| vn::from_chars | 63.6026 | 0.197241 | 271.146ms | 100000 | 30 | 2.62402e+08 | 1.49943e+06 | 47.7835 | 2(Loss) |
| strtoll/strtoull | 42.0926 | 0.237174 | 409.238ms | 100000 | 30 | 8.6625e+08 | 2.26566e+06 | 72.2052 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 244.532 | 1.42843 | 0.0907ms | 100 | 30 | 931.034 | 390 | 12.0077 | 1(Win) |
| std::from_chars | 117.738 | 0.687761 | 0.1789ms | 100 | 30 | 931.034 | 810 | 25.2103 | 2(Loss) |
| strtoll/strtoull | 62.7417 | 0.488672 | 0.2939ms | 100 | 30 | 1655.17 | 1520 | 48.001 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 281.874 | 0.204546 | 0.6643ms | 1000 | 30 | 1436.78 | 3383.33 | 10.7141 | 1(Win) |
| std::from_chars | 97.4131 | 0.318713 | 4.1701ms | 1000 | 30 | 29206.9 | 9790 | 31.103 | 2(Loss) |
| strtoll/strtoull | 51.0897 | 1.15394 | 3.4589ms | 1000 | 30 | 1.39195e+06 | 18666.7 | 59.4214 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 78.496 | 1.12656 | 21.9026ms | 10000 | 30 | 5.62e+07 | 121493 | 38.7132 | 1(Win) |
| vn::from_chars | 74.2294 | 0.634959 | 23.448ms | 10000 | 30 | 1.99646e+07 | 128477 | 40.938 | 2(Loss) |
| strtoll/strtoull | 43.4324 | 0.617041 | 39.6824ms | 10000 | 30 | 5.50708e+07 | 219577 | 69.9754 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 73.8859 | 0.419318 | 232.081ms | 100000 | 30 | 8.7879e+08 | 1.29074e+06 | 41.1315 | 1(Win) |
| vn::from_chars | 66.6483 | 0.293081 | 258.167ms | 100000 | 30 | 5.27618e+08 | 1.43091e+06 | 45.6002 | 2(Loss) |
| strtoll/strtoull | 42.9728 | 0.348235 | 398.144ms | 100000 | 30 | 1.79175e+09 | 2.21925e+06 | 70.7237 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 274.11 | 2.09444 | 0.3592ms | 100 | 48 | 2548.76 | 347.917 | 10.1267 | 1(Win) |
| std::from_chars | 140.937 | 1.16069 | 0.1436ms | 100 | 30 | 1850.57 | 676.667 | 20.852 | 2(Loss) |
| strtoll/strtoull | 63.7199 | 0.222717 | 0.2956ms | 100 | 30 | 333.333 | 1496.67 | 47.2447 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 284.962 | 1.64434 | 0.6576ms | 1000 | 30 | 90850.6 | 3346.67 | 10.6058 | 1(Win) |
| std::from_chars | 113.668 | 0.758894 | 1.604ms | 1000 | 30 | 121621 | 8390 | 26.6946 | 2(Loss) |
| strtoll/strtoull | 52.1894 | 2.38047 | 3.2992ms | 1000 | 30 | 5.67651e+06 | 18273.3 | 58.2136 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 81.6619 | 1.01035 | 21.079ms | 10000 | 30 | 4.17663e+07 | 116783 | 37.2111 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 81.1569 | 1.53472 | 21.4502ms | 10000 | 30 | 9.75733e+07 | 117510 | 37.4415 | 1(Tie) |
| strtoll/strtoull | 42.9003 | 0.986098 | 39.7684ms | 10000 | 30 | 1.44159e+08 | 222300 | 70.841 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 77.7429 | 0.771575 | 216.243ms | 100000 | 30 | 2.68755e+09 | 1.2267e+06 | 39.0884 | 1(Win) |
| vn::from_chars | 68.8852 | 0.227617 | 248.956ms | 100000 | 30 | 2.97907e+08 | 1.38444e+06 | 44.1187 | 2(Loss) |
| strtoll/strtoull | 43.1109 | 0.227861 | 400.788ms | 100000 | 30 | 7.62233e+08 | 2.21214e+06 | 70.4987 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 378.943 | 0.662252 | 0.1164ms | 200 | 30 | 333.333 | 503.333 | 7.756 | 1(Win) |
| std::from_chars | 167.802 | 0.787263 | 0.2401ms | 200 | 30 | 2402.3 | 1136.67 | 17.7403 | 2(Loss) |
| strtoll/strtoull | 107.154 | 0.417293 | 0.3695ms | 200 | 30 | 1655.17 | 1780 | 28.0928 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 392.459 | 0.187185 | 2.146ms | 2000 | 30 | 2482.76 | 4860 | 7.68845 | 1(Win) |
| std::from_chars | 120.135 | 1.20255 | 2.8526ms | 2000 | 30 | 1.09357e+06 | 15876.7 | 25.2634 | 2(Loss) |
| strtoll/strtoull | 97.6458 | 0.0448145 | 8.6966ms | 2000 | 30 | 2298.85 | 19533.3 | 31.1031 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 144.704 | 0.551316 | 24.1207ms | 20000 | 30 | 1.58423e+07 | 131810 | 20.9997 | 1(Win) |
| std::from_chars | 109.149 | 0.940369 | 32.1705ms | 20000 | 30 | 8.10095e+07 | 174747 | 27.8411 | 2(Loss) |
| strtoll/strtoull | 67.8337 | 0.912958 | 50.9557ms | 20000 | 30 | 1.97693e+08 | 281180 | 44.8021 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 123.944 | 0.282677 | 277.481ms | 200000 | 30 | 5.67695e+08 | 1.53888e+06 | 24.5198 | 1(Win) |
| std::from_chars | 104.114 | 0.364046 | 330.455ms | 200000 | 30 | 1.33436e+09 | 1.83198e+06 | 29.1902 | 2(Loss) |
| strtoll/strtoull | 66.0342 | 0.421676 | 520.486ms | 200000 | 30 | 4.45041e+09 | 2.88842e+06 | 46.0251 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 344.702 | 1.67424 | 0.1206ms | 200 | 30 | 2574.71 | 553.333 | 8.50417 | 1(Win) |
| std::from_chars | 183.989 | 0.863205 | 0.2292ms | 200 | 30 | 2402.3 | 1036.67 | 16.0018 | 2(Loss) |
| strtoll/strtoull | 111.108 | 0.403133 | 0.3481ms | 200 | 30 | 1436.78 | 1716.67 | 27.1898 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 380.962 | 0.0925178 | 2.2219ms | 2000 | 30 | 643.678 | 5006.67 | 7.94987 | 1(Win) |
| std::from_chars | 129.634 | 1.57187 | 5.9943ms | 2000 | 30 | 1.60464e+06 | 14713.3 | 23.4224 | 2(Loss) |
| strtoll/strtoull | 89.4909 | 2.06396 | 3.8576ms | 2000 | 30 | 5.80533e+06 | 21313.3 | 33.9324 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 167.772 | 0.799316 | 20.8412ms | 20000 | 30 | 2.47729e+07 | 113687 | 18.1124 | 1(Win) |
| std::from_chars | 123.049 | 1.04346 | 28.1601ms | 20000 | 30 | 7.84827e+07 | 155007 | 24.695 | 2(Loss) |
| strtoll/strtoull | 78.411 | 0.394725 | 43.8485ms | 20000 | 30 | 2.76578e+07 | 243250 | 38.7569 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.338 | 0.235076 | 243.401ms | 200000 | 30 | 3.01911e+08 | 1.34949e+06 | 21.5011 | 1(Win) |
| std::from_chars | 122.704 | 0.55646 | 279.824ms | 200000 | 30 | 2.24457e+09 | 1.55443e+06 | 24.7656 | 2(Loss) |
| strtoll/strtoull | 77.291 | 0.209326 | 444.433ms | 200000 | 30 | 8.00514e+08 | 2.46775e+06 | 39.3224 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 376.45 | 0.914221 | 0.1298ms | 200 | 30 | 643.678 | 506.667 | 7.69067 | 1(Win) |
| std::from_chars | 163.487 | 0.750322 | 0.2326ms | 200 | 30 | 2298.85 | 1166.67 | 18.2035 | 2(Loss) |
| strtoll/strtoull | 107.963 | 0.495496 | 0.341ms | 200 | 30 | 2298.85 | 1766.67 | 27.7982 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 402.111 | 0.193996 | 0.9366ms | 2000 | 30 | 2540.23 | 4743.33 | 7.52363 | 1(Win) |
| std::from_chars | 142.481 | 0.288169 | 2.6249ms | 2000 | 30 | 44643.7 | 13386.7 | 21.3055 | 2(Loss) |
| strtoll/strtoull | 93.6199 | 1.10457 | 8.7586ms | 2000 | 30 | 1.51926e+06 | 20373.3 | 32.4231 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 167.17 | 0.862113 | 20.5395ms | 20000 | 30 | 2.90265e+07 | 114097 | 18.1779 | 1(Win) |
| std::from_chars | 119.227 | 1.43972 | 28.3049ms | 20000 | 30 | 1.59145e+08 | 159977 | 25.4866 | 2(Loss) |
| strtoll/strtoull | 79.1519 | 0.513028 | 43.3719ms | 20000 | 30 | 4.58503e+07 | 240973 | 38.3947 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 146.177 | 0.236943 | 234.956ms | 200000 | 30 | 2.86756e+08 | 1.30482e+06 | 20.7907 | 1(Win) |
| std::from_chars | 120.585 | 0.337879 | 282.305ms | 200000 | 30 | 8.5687e+08 | 1.58174e+06 | 25.2032 | 2(Loss) |
| strtoll/strtoull | 78.4718 | 0.133035 | 438.924ms | 200000 | 30 | 3.13677e+08 | 2.43062e+06 | 38.7312 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 402.961 | 1.73488 | 0.1179ms | 200 | 30 | 2022.99 | 473.333 | 7.102 | 1(Win) |
| std::from_chars | 192.661 | 0.562713 | 0.2039ms | 200 | 30 | 931.034 | 990 | 15.4415 | 2(Loss) |
| strtoll/strtoull | 105.768 | 0.184843 | 0.363ms | 200 | 30 | 333.333 | 1803.33 | 28.42 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 406.395 | 0.478439 | 0.9217ms | 2000 | 30 | 15126.4 | 4693.33 | 7.4375 | 1(Win) |
| std::from_chars | 167.605 | 0.513251 | 2.1448ms | 2000 | 30 | 102345 | 11380 | 18.1083 | 2(Loss) |
| strtoll/strtoull | 93.0565 | 2.31506 | 3.7162ms | 2000 | 30 | 6.75482e+06 | 20496.7 | 32.635 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 194.449 | 1.52 | 17.719ms | 20000 | 30 | 6.66892e+07 | 98090 | 15.6246 | 1(Win) |
| std::from_chars | 153.93 | 1.21443 | 22.2174ms | 20000 | 30 | 6.79327e+07 | 123910 | 19.738 | 2(Loss) |
| strtoll/strtoull | 79.5701 | 0.516619 | 42.9249ms | 20000 | 30 | 4.60069e+07 | 239707 | 38.1929 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 163.527 | 0.268543 | 210.137ms | 200000 | 30 | 2.94327e+08 | 1.16638e+06 | 18.5836 | 1(Win) |
| std::from_chars | 136.63 | 0.511642 | 252.743ms | 200000 | 30 | 1.53047e+09 | 1.396e+06 | 22.2434 | 2(Loss) |
| strtoll/strtoull | 78.7267 | 0.183572 | 435.357ms | 200000 | 30 | 5.93404e+08 | 2.42275e+06 | 38.6041 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 577.984 | 1.37836 | 0.1546ms | 400 | 30 | 2482.76 | 660 | 5.02775 | 1(Win) |
| std::from_chars | 369.164 | 0.847138 | 0.2173ms | 400 | 30 | 2298.85 | 1033.33 | 8.07383 | 2(Loss) |
| strtoll/strtoull | 163.721 | 0.774065 | 0.4647ms | 400 | 30 | 9758.62 | 2330 | 18.4062 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 580.624 | 0.129523 | 1.3465ms | 4000 | 30 | 2172.41 | 6570 | 5.21476 | 1(Win) |
| std::from_chars | 298.567 | 1.92291 | 5.2985ms | 4000 | 30 | 1.81082e+06 | 12776.7 | 10.1658 | 2(Loss) |
| strtoll/strtoull | 133.708 | 2.22127 | 4.9302ms | 4000 | 30 | 1.20484e+07 | 28530 | 22.7151 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 259.297 | 0.473711 | 27.4324ms | 40000 | 30 | 1.45704e+07 | 147117 | 11.7195 | 1(Win) |
| std::from_chars | 216.871 | 0.63413 | 31.3795ms | 40000 | 30 | 3.73245e+07 | 175897 | 14.0128 | 2(Loss) |
| strtoll/strtoull | 118.599 | 1.21185 | 58.9885ms | 40000 | 30 | 4.55805e+08 | 321647 | 25.6245 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 229.818 | 0.324919 | 301.565ms | 400000 | 30 | 8.72617e+08 | 1.65988e+06 | 13.2239 | 1(Win) |
| std::from_chars | 215.223 | 0.193255 | 320.586ms | 400000 | 30 | 3.51987e+08 | 1.77244e+06 | 14.1211 | 2(Loss) |
| strtoll/strtoull | 115.938 | 0.435709 | 588.638ms | 400000 | 30 | 6.16576e+09 | 3.2903e+06 | 26.2149 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 566.539 | 1.21957 | 0.1436ms | 400 | 30 | 2022.99 | 673.333 | 5.147 | 1(Win) |
| std::from_chars | 386.625 | 0.639773 | 0.2089ms | 400 | 30 | 1195.4 | 986.667 | 7.71275 | 2(Loss) |
| strtoll/strtoull | 183.693 | 0.443107 | 0.4354ms | 400 | 30 | 2540.23 | 2076.67 | 16.3337 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 584.777 | 0.120399 | 1.248ms | 4000 | 30 | 1850.57 | 6523.33 | 5.17972 | 1(Win) |
| std::from_chars | 309.133 | 0.073721 | 5.4458ms | 4000 | 30 | 2482.76 | 12340 | 9.80794 | 2(Loss) |
| strtoll/strtoull | 144.132 | 0.464461 | 4.8054ms | 4000 | 30 | 453333 | 26466.7 | 21.0733 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 293.853 | 0.302995 | 23.5716ms | 40000 | 30 | 4.64144e+06 | 129817 | 10.342 | 1(Win) |
| std::from_chars | 269.317 | 0.464063 | 25.7447ms | 40000 | 30 | 1.29619e+07 | 141643 | 11.2842 | 2(Loss) |
| strtoll/strtoull | 132.539 | 0.693772 | 51.3044ms | 40000 | 30 | 1.19615e+08 | 287817 | 22.9285 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 267.672 | 0.247489 | 254.91ms | 400000 | 30 | 3.73203e+08 | 1.42514e+06 | 11.3536 | 1(Win) |
| std::from_chars | 262.546 | 0.287398 | 260.475ms | 400000 | 30 | 5.23117e+08 | 1.45296e+06 | 11.5754 | 2(Loss) |
| strtoll/strtoull | 133.55 | 0.152667 | 514.674ms | 400000 | 30 | 5.70485e+08 | 2.85637e+06 | 22.7572 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 608.728 | 1.31039 | 0.2866ms | 400 | 30 | 2022.99 | 626.667 | 4.80875 | 1(Win) |
| std::from_chars | 363.305 | 0.884264 | 0.2065ms | 400 | 30 | 2586.21 | 1050 | 8.219 | 2(Loss) |
| strtoll/strtoull | 184.285 | 0.471856 | 0.9262ms | 400 | 30 | 2862.07 | 2070 | 16.3478 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 587.479 | 0.126464 | 1.2348ms | 4000 | 30 | 2022.99 | 6493.33 | 5.15674 | 1(Win) |
| std::from_chars | 287.811 | 1.68227 | 11.8ms | 4000 | 48 | 2.38637e+06 | 13254.2 | 10.5442 | 2(Loss) |
| strtoll/strtoull | 151.237 | 0.399492 | 4.6757ms | 4000 | 30 | 304609 | 25223.3 | 20.0835 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 315.039 | 0.4137 | 21.6681ms | 40000 | 30 | 7.52809e+06 | 121087 | 9.64721 | 1(Win) |
| std::from_chars | 272.693 | 0.399444 | 25.3215ms | 40000 | 30 | 9.36714e+06 | 139890 | 11.1441 | 2(Loss) |
| strtoll/strtoull | 134.406 | 0.368126 | 51.0161ms | 40000 | 30 | 3.27492e+07 | 283820 | 22.6109 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 271.902 | 0.262046 | 252.501ms | 400000 | 30 | 4.05481e+08 | 1.40297e+06 | 11.1764 | 1(Win) |
| std::from_chars | 265.875 | 0.373592 | 257.006ms | 400000 | 30 | 8.61948e+08 | 1.43477e+06 | 11.4299 | 2(Loss) |
| strtoll/strtoull | 136.439 | 0.197526 | 502.12ms | 400000 | 30 | 9.14987e+08 | 2.7959e+06 | 22.2754 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 580.918 | 1.4013 | 0.1452ms | 400 | 30 | 2540.23 | 656.667 | 5.05475 | 1(Win) |
| std::from_chars | 398.749 | 0.961867 | 0.1968ms | 400 | 30 | 2540.23 | 956.667 | 7.46783 | 2(Loss) |
| strtoll/strtoull | 182.231 | 0.221277 | 0.4014ms | 400 | 30 | 643.678 | 2093.33 | 16.5687 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 555.269 | 0.872107 | 1.3001ms | 4000 | 30 | 107690 | 6870 | 5.45397 | 1(Win) |
| std::from_chars | 249.816 | 0.154303 | 2.8787ms | 4000 | 30 | 16655.2 | 15270 | 12.1569 | 2(Loss) |
| strtoll/strtoull | 145.766 | 1.74975 | 4.7725ms | 4000 | 30 | 6.29045e+06 | 26170 | 20.8307 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 343.213 | 1.30012 | 20.1862ms | 40000 | 30 | 6.26446e+07 | 111147 | 8.85415 | 1(Win) |
| std::from_chars | 231.175 | 0.736252 | 29.5027ms | 40000 | 30 | 4.42805e+07 | 165013 | 13.1445 | 2(Loss) |
| strtoll/strtoull | 135.276 | 0.425997 | 50.8454ms | 40000 | 30 | 4.32924e+07 | 281993 | 22.4647 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.545 | 0.311644 | 218.889ms | 400000 | 30 | 4.34044e+08 | 1.22053e+06 | 9.72325 | 1(Win) |
| std::from_chars | 232.267 | 0.733862 | 294.301ms | 400000 | 30 | 4.35809e+09 | 1.64238e+06 | 13.0825 | 2(Loss) |
| strtoll/strtoull | 133.847 | 0.208772 | 514.042ms | 400000 | 30 | 1.06212e+09 | 2.85005e+06 | 22.7068 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 820.365 | 0.915014 | 0.4478ms | 800 | 30 | 2172.41 | 930 | 3.62125 | 1(Win) |
| std::from_chars | 403.672 | 1.14439 | 0.4186ms | 800 | 30 | 14034.5 | 1890 | 7.42063 | 2(Loss) |
| strtoll/strtoull | 226.84 | 0.629241 | 1.5022ms | 800 | 30 | 13436.8 | 3363.33 | 13.2918 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 798.054 | 2.03636 | 1.7782ms | 8000 | 30 | 1.13697e+06 | 9560 | 3.79583 | 1(Win) |
| std::from_chars | 328.146 | 1.46224 | 4.293ms | 8000 | 30 | 3.46741e+06 | 23250 | 9.25425 | 2(Loss) |
| strtoll/strtoull | 193.476 | 2.49947 | 7.4733ms | 8000 | 30 | 2.91437e+07 | 39433.3 | 15.6993 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 513.096 | 0.726159 | 27.1959ms | 80000 | 30 | 3.49758e+07 | 148693 | 5.92233 | 1(Win) |
| std::from_chars | 318.688 | 0.907889 | 42.845ms | 80000 | 30 | 1.41721e+08 | 239400 | 9.53451 | 2(Loss) |
| strtoll/strtoull | 184.743 | 1.29649 | 75.3932ms | 80000 | 30 | 8.60007e+08 | 412973 | 16.4499 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 450.258 | 0.243219 | 305.832ms | 800000 | 30 | 5.09534e+08 | 1.69445e+06 | 6.74912 | 1(Win) |
| std::from_chars | 321.948 | 0.191693 | 433.746ms | 800000 | 30 | 6.19073e+08 | 2.36976e+06 | 9.43886 | 2(Loss) |
| strtoll/strtoull | 181.598 | 0.619805 | 762.852ms | 800000 | 30 | 2.03418e+10 | 4.20125e+06 | 16.7359 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 778.51 | 0.75794 | 0.2105ms | 800 | 30 | 1655.17 | 980 | 3.77479 | 1(Win) |
| std::from_chars | 409.449 | 0.480244 | 0.3682ms | 800 | 30 | 2402.3 | 1863.33 | 7.30017 | 2(Loss) |
| strtoll/strtoull | 226.168 | 1.83089 | 0.6355ms | 800 | 30 | 114437 | 3373.33 | 13.3918 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 783.574 | 0.0919057 | 1.8637ms | 8000 | 30 | 2402.3 | 9736.67 | 3.86215 | 1(Win) |
| std::from_chars | 372.62 | 1.3554 | 18.7127ms | 8000 | 48 | 3.69681e+06 | 20475 | 8.14996 | 2(Loss) |
| strtoll/strtoull | 211.595 | 1.08655 | 6.6632ms | 8000 | 30 | 4.60461e+06 | 36056.7 | 14.3535 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 533.151 | 1.02062 | 25.798ms | 80000 | 30 | 6.39924e+07 | 143100 | 5.69932 | 1(Win) |
| std::from_chars | 362.086 | 1.08624 | 37.4537ms | 80000 | 30 | 1.57154e+08 | 210707 | 8.39174 | 2(Loss) |
| strtoll/strtoull | 207.64 | 0.53872 | 66.7241ms | 80000 | 30 | 1.17545e+08 | 367433 | 14.6359 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 519.055 | 0.77817 | 260.932ms | 800000 | 30 | 3.92486e+09 | 1.46986e+06 | 5.85318 | 1(Win) |
| std::from_chars | 368.573 | 0.198364 | 371.8ms | 800000 | 30 | 5.05802e+08 | 2.06998e+06 | 8.24484 | 2(Loss) |
| strtoll/strtoull | 205.047 | 0.178745 | 670.438ms | 800000 | 30 | 1.32696e+09 | 3.7208e+06 | 14.8214 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 826.288 | 0.850617 | 0.1878ms | 800 | 30 | 1850.57 | 923.333 | 3.64283 | 1(Win) |
| std::from_chars | 378.943 | 0.313531 | 0.4023ms | 800 | 30 | 1195.4 | 2013.33 | 7.94958 | 2(Loss) |
| strtoll/strtoull | 225.277 | 0.33899 | 0.672ms | 800 | 30 | 3954.02 | 3386.67 | 13.3855 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 846.73 | 0.0594765 | 8.3851ms | 8000 | 48 | 1378.55 | 9010.42 | 3.57792 | 1(Win) |
| std::from_chars | 371.622 | 1.92855 | 3.6918ms | 8000 | 30 | 4.70286e+06 | 20530 | 8.16844 | 2(Loss) |
| strtoll/strtoull | 214.028 | 1.31819 | 6.5227ms | 8000 | 30 | 6.62395e+06 | 35646.7 | 14.1921 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 582.026 | 0.705633 | 23.5936ms | 80000 | 30 | 2.5667e+07 | 131083 | 5.21938 | 1(Win) |
| std::from_chars | 368.161 | 1.04377 | 37.0173ms | 80000 | 30 | 1.40358e+08 | 207230 | 8.25412 | 2(Loss) |
| strtoll/strtoull | 209.105 | 0.466054 | 65.7625ms | 80000 | 30 | 8.67452e+07 | 364860 | 14.5341 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 534.425 | 0.173741 | 255.838ms | 800000 | 30 | 1.84558e+08 | 1.42759e+06 | 5.68585 | 1(Win) |
| std::from_chars | 366.314 | 0.190825 | 374.009ms | 800000 | 30 | 4.73876e+08 | 2.08275e+06 | 8.29605 | 2(Loss) |
| strtoll/strtoull | 210.939 | 0.135594 | 650.322ms | 800000 | 30 | 7.21553e+08 | 3.61688e+06 | 14.4078 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 826.288 | 0.850617 | 0.1915ms | 800 | 30 | 1850.57 | 923.333 | 3.59375 | 1(Win) |
| std::from_chars | 504.145 | 0.417121 | 0.292ms | 800 | 30 | 1195.4 | 1513.33 | 5.91129 | 2(Loss) |
| strtoll/strtoull | 242.974 | 0.447791 | 0.6201ms | 800 | 30 | 5931.03 | 3140 | 12.4032 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 822.428 | 0.0991937 | 1.7758ms | 8000 | 30 | 2540.23 | 9276.67 | 3.68775 | 1(Win) |
| std::from_chars | 396.719 | 1.5589 | 17.5063ms | 8000 | 48 | 4.31411e+06 | 19231.2 | 7.65178 | 2(Loss) |
| strtoll/strtoull | 210.292 | 1.15055 | 6.6397ms | 8000 | 30 | 5.22717e+06 | 36280 | 14.4438 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 508.446 | 0.189541 | 27.2444ms | 80000 | 30 | 2.42671e+06 | 150053 | 5.97622 | 1(Win) |
| std::from_chars | 440.064 | 0.824315 | 31.2825ms | 80000 | 30 | 6.12711e+07 | 173370 | 6.90491 | 2(Loss) |
| strtoll/strtoull | 209.595 | 0.354718 | 65.9157ms | 80000 | 30 | 5.00158e+07 | 364007 | 14.5005 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 456.39 | 0.573433 | 299.408ms | 800000 | 30 | 2.75673e+09 | 1.67168e+06 | 6.65798 | 1(Win) |
| std::from_chars | 424.597 | 0.339708 | 318.969ms | 800000 | 30 | 1.11779e+09 | 1.79686e+06 | 7.15551 | 2(Loss) |
| strtoll/strtoull | 207.223 | 0.323253 | 660.652ms | 800000 | 30 | 4.24925e+09 | 3.68174e+06 | 14.666 | 3(Loss) |
