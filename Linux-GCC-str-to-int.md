# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 540.53 | 0.230083 | 0.042583ms | 100 | 30 | 4.94368 | 176.433 | 4.877 | 1(Win) |
| std::from_chars | 390.53 | 0.386945 | 0.054561ms | 100 | 30 | 26.7862 | 244.2 | 7.02533 | 2(Loss) |
| strtoll/strtoull | 116.953 | 0.03257 | 0.151657ms | 100 | 30 | 2.11609 | 815.433 | 25.2603 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 741.726 | 0.152917 | 1.26356ms | 1000 | 48 | 185.553 | 1285.75 | 4.03538 | 1(Win) |
| std::from_chars | 517.345 | 0.0464985 | 0.372479ms | 1000 | 30 | 22.0414 | 1843.4 | 5.79017 | 2(Loss) |
| strtoll/strtoull | 147.999 | 0.386863 | 1.29491ms | 1000 | 30 | 18643.1 | 6443.8 | 20.4792 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 244.387 | 0.665716 | 7.16363ms | 10000 | 30 | 2.02462e+06 | 39023.2 | 12.4245 | 1(Win) |
| std::from_chars | 216.169 | 0.361529 | 19.4699ms | 10000 | 30 | 763170 | 44117.1 | 14.0463 | 2(Loss) |
| strtoll/strtoull | 95.1142 | 0.602248 | 18.1584ms | 10000 | 30 | 1.09391e+07 | 100266 | 31.9454 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 176.168 | 0.385454 | 283.981ms | 100000 | 30 | 1.3062e+08 | 541343 | 17.2461 | 1(Win) |
| std::from_chars | 153.846 | 0.681622 | 161.253ms | 100000 | 30 | 5.35595e+08 | 619889 | 19.7459 | 2(Loss) |
| strtoll/strtoull | 89.5168 | 0.261401 | 191.6ms | 100000 | 30 | 2.32662e+08 | 1.06536e+06 | 33.9513 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 531.196 | 0.326791 | 0.105ms | 100 | 30 | 10.3264 | 179.533 | 5.08633 | 1(Win) |
| std::from_chars | 389.149 | 0.0616621 | 0.056459ms | 100 | 30 | 0.685057 | 245.067 | 7.05 | 2(Loss) |
| strtoll/strtoull | 113.084 | 0.250176 | 0.162186ms | 100 | 30 | 133.54 | 843.333 | 26.142 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 644.825 | 0.0529215 | 0.684888ms | 1000 | 30 | 18.3782 | 1478.97 | 4.64723 | 1(Win) |
| std::from_chars | 501.248 | 0.175819 | 0.41923ms | 1000 | 30 | 335.697 | 1902.6 | 5.96947 | 2(Loss) |
| strtoll/strtoull | 135.141 | 0.119437 | 1.39562ms | 1000 | 30 | 2131.2 | 7056.9 | 22.4328 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 452.597 | 0.229379 | 4.02245ms | 10000 | 30 | 70082 | 21071.2 | 6.70431 | 1(Win) |
| std::from_chars | 267.925 | 0.273951 | 15.1511ms | 10000 | 30 | 285259 | 35594.8 | 11.3327 | 2(Loss) |
| strtoll/strtoull | 124.655 | 0.879474 | 13.922ms | 10000 | 30 | 1.35816e+07 | 76505.3 | 24.3713 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 280.836 | 0.404715 | 61.4465ms | 100000 | 30 | 5.66648e+07 | 339584 | 10.8178 | 1(Win) |
| std::from_chars | 253.005 | 0.205127 | 68.8816ms | 100000 | 30 | 1.79354e+07 | 376939 | 12.0073 | 2(Loss) |
| strtoll/strtoull | 118.578 | 0.46083 | 144.541ms | 100000 | 30 | 4.12092e+08 | 804258 | 25.6299 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 570.835 | 0.124876 | 0.039786ms | 100 | 30 | 1.30575 | 167.067 | 4.584 | 1(Win) |
| std::from_chars | 411.658 | 0.0978067 | 0.061413ms | 100 | 30 | 1.54023 | 231.667 | 6.644 | 2(Loss) |
| strtoll/strtoull | 135.024 | 0.0347138 | 0.132851ms | 100 | 30 | 1.80345 | 706.3 | 21.7827 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 967.706 | 0.0650462 | 0.215826ms | 1000 | 30 | 12.3276 | 985.5 | 3.08327 | 1(Win) |
| std::from_chars | 567.337 | 0.0565076 | 0.377332ms | 1000 | 30 | 27.0678 | 1680.97 | 5.27317 | 2(Loss) |
| strtoll/strtoull | 158.692 | 0.950126 | 1.20924ms | 1000 | 30 | 97808.2 | 6009.6 | 19.0961 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 924.154 | 0.680516 | 4.6334ms | 10000 | 30 | 147948 | 10319.4 | 3.27724 | 1(Win) |
| std::from_chars | 296.52 | 1.8041 | 6.04758ms | 10000 | 30 | 1.01004e+07 | 32162.3 | 10.2383 | 2(Loss) |
| strtoll/strtoull | 131.257 | 0.800917 | 13.1149ms | 10000 | 30 | 1.0159e+07 | 72657.1 | 23.148 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 325.129 | 0.233207 | 53.0411ms | 100000 | 30 | 1.40376e+07 | 293322 | 9.34663 | 1(Win) |
| std::from_chars | 253.857 | 0.384486 | 67.296ms | 100000 | 30 | 6.25897e+07 | 375673 | 11.9712 | 2(Loss) |
| strtoll/strtoull | 129.754 | 0.296478 | 134.15ms | 100000 | 30 | 1.42451e+08 | 734987 | 23.4218 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 566.091 | 0.0841069 | 0.041157ms | 100 | 30 | 0.602299 | 168.467 | 4.638 | 1(Win) |
| std::from_chars | 333.258 | 0.751366 | 0.060934ms | 100 | 30 | 138.695 | 286.167 | 8.39567 | 2(Loss) |
| strtoll/strtoull | 123.416 | 0.0277023 | 0.142522ms | 100 | 30 | 1.37471 | 772.733 | 23.915 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 821.944 | 0.104045 | 0.254337ms | 1000 | 30 | 43.7195 | 1160.27 | 3.63893 | 1(Win) |
| std::from_chars | 428.015 | 0.135785 | 1.03396ms | 1000 | 30 | 274.602 | 2228.13 | 7.0178 | 2(Loss) |
| strtoll/strtoull | 147.104 | 0.13671 | 1.233ms | 1000 | 30 | 2356.55 | 6483 | 20.6047 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 683.504 | 0.342586 | 3.3416ms | 10000 | 30 | 68545.5 | 13952.7 | 4.43534 | 1(Win) |
| std::from_chars | 232.134 | 0.617138 | 7.46558ms | 10000 | 30 | 1.92845e+06 | 41083 | 13.0818 | 2(Loss) |
| strtoll/strtoull | 114.322 | 0.618276 | 15.1033ms | 10000 | 30 | 7.98042e+06 | 83419.9 | 26.5785 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 246.45 | 1.15477 | 70.5705ms | 100000 | 30 | 5.99036e+08 | 386965 | 12.3274 | 1(Win) |
| std::from_chars | 223.182 | 0.192683 | 77.038ms | 100000 | 30 | 2.03371e+07 | 427307 | 13.616 | 2(Loss) |
| strtoll/strtoull | 108.188 | 1.17159 | 155.811ms | 100000 | 30 | 3.19975e+09 | 881499 | 28.0864 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 523.374 | 0.102488 | 0.074003ms | 200 | 30 | 4.18506 | 364.433 | 5.419 | 1(Win) |
| vn::from_chars | 437.833 | 0.0869994 | 0.08545ms | 200 | 30 | 4.3092 | 435.633 | 6.43067 | 2(Loss) |
| strtoll/strtoull | 204.827 | 0.222023 | 0.18042ms | 200 | 30 | 128.234 | 931.2 | 14.4792 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 663.034 | 0.103553 | 0.583891ms | 2000 | 30 | 266.217 | 2876.7 | 4.53948 | 1(Win) |
| vn::from_chars | 594.153 | 0.0428056 | 0.704634ms | 2000 | 30 | 56.6483 | 3210.2 | 5.06685 | 2(Loss) |
| strtoll/strtoull | 237.765 | 0.311465 | 1.52148ms | 2000 | 30 | 18728.6 | 8022 | 12.7551 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 351.432 | 0.880614 | 9.844ms | 20000 | 30 | 6.85283e+06 | 54273.6 | 8.64165 | 1(Win) |
| std::from_chars | 297.579 | 0.518187 | 12.7319ms | 20000 | 30 | 3.30942e+06 | 64095.6 | 10.2074 | 2(Loss) |
| strtoll/strtoull | 156.528 | 0.871048 | 21.9881ms | 20000 | 30 | 3.37971e+07 | 121853 | 19.4105 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 270.915 | 0.92164 | 127.165ms | 200000 | 30 | 1.2631e+09 | 704040 | 11.2132 | 1(Win) |
| std::from_chars | 252.562 | 0.174993 | 138.137ms | 200000 | 30 | 5.23946e+07 | 755201 | 12.0329 | 2(Loss) |
| strtoll/strtoull | 151.042 | 0.548572 | 230.074ms | 200000 | 30 | 1.43964e+09 | 1.2628e+06 | 20.122 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 510.988 | 0.429097 | 0.075424ms | 200 | 30 | 76.9609 | 373.267 | 5.55367 | 1(Win) |
| vn::from_chars | 418.492 | 0.133352 | 0.088015ms | 200 | 30 | 11.0816 | 455.767 | 6.79817 | 2(Loss) |
| strtoll/strtoull | 226.302 | 0.155696 | 0.476135ms | 200 | 30 | 51.6609 | 842.833 | 13.1377 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 635.755 | 0.625418 | 0.648541ms | 2000 | 30 | 10561.9 | 3000.13 | 4.73612 | 1(Win) |
| vn::from_chars | 554.688 | 0.0421917 | 0.730486ms | 2000 | 30 | 63.1448 | 3438.6 | 5.4384 | 2(Loss) |
| strtoll/strtoull | 208.928 | 0.723253 | 1.70135ms | 2000 | 30 | 130788 | 9129.2 | 14.5186 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 542.126 | 0.412721 | 6.4533ms | 20000 | 30 | 632547 | 35182.7 | 5.60058 | 1(Win) |
| std::from_chars | 411.654 | 0.829255 | 9.07268ms | 20000 | 30 | 4.42886e+06 | 46333.7 | 7.37711 | 2(Loss) |
| strtoll/strtoull | 190.911 | 0.64846 | 17.9253ms | 20000 | 30 | 1.25917e+07 | 99907.6 | 15.9166 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 444.703 | 1.9479 | 77.2772ms | 200000 | 30 | 2.09399e+09 | 428904 | 6.83269 | 1(Win) |
| std::from_chars | 390.912 | 0.398795 | 89.0901ms | 200000 | 30 | 1.13585e+08 | 487922 | 7.77406 | 2(Loss) |
| strtoll/strtoull | 187.731 | 1.30967 | 185.371ms | 200000 | 30 | 5.31171e+09 | 1.016e+06 | 16.1873 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 508.039 | 0.195225 | 0.075355ms | 200 | 30 | 16.1161 | 375.433 | 5.57783 | 1(Win) |
| vn::from_chars | 473.288 | 0.0798099 | 0.080227ms | 200 | 30 | 3.10345 | 403 | 5.88 | 2(Loss) |
| strtoll/strtoull | 202.007 | 0.139381 | 0.171861ms | 200 | 30 | 51.9586 | 944.2 | 14.6908 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 666.005 | 0.0433265 | 0.585359ms | 2000 | 30 | 46.1885 | 2863.87 | 4.52007 | 1(Win) |
| vn::from_chars | 629.024 | 0.0424782 | 0.58884ms | 2000 | 30 | 49.7713 | 3032.23 | 4.7878 | 2(Loss) |
| strtoll/strtoull | 213.7 | 0.608143 | 1.71994ms | 2000 | 30 | 88386.2 | 8925.37 | 14.1937 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 632.688 | 0.0191405 | 6.50481ms | 20000 | 30 | 998.875 | 30146.8 | 4.79703 | 1(Win) |
| std::from_chars | 428.97 | 1.5159 | 8.61876ms | 20000 | 30 | 1.36292e+07 | 44463.5 | 7.07933 | 2(Loss) |
| strtoll/strtoull | 196.721 | 1.24981 | 67.7047ms | 20000 | 30 | 4.40519e+07 | 96957 | 15.4337 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 495.524 | 0.618892 | 220.131ms | 200000 | 30 | 1.70248e+08 | 384916 | 6.13121 | 1(Win) |
| std::from_chars | 409.843 | 0.244836 | 135.773ms | 200000 | 30 | 3.89489e+07 | 465385 | 7.41507 | 2(Loss) |
| strtoll/strtoull | 198.658 | 0.260984 | 173.545ms | 200000 | 30 | 1.88363e+08 | 960115 | 15.2973 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 450.945 | 0.606486 | 0.080457ms | 200 | 30 | 197.413 | 422.967 | 6.364 | 1(Win) |
| vn::from_chars | 397.116 | 0.0574757 | 0.092446ms | 200 | 30 | 2.28621 | 480.3 | 7.12467 | 2(Loss) |
| strtoll/strtoull | 182.685 | 0.14866 | 0.177804ms | 200 | 30 | 72.2713 | 1044.07 | 16.2778 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 586.858 | 0.335786 | 0.639565ms | 2000 | 30 | 3573.06 | 3250.1 | 5.137 | 1(Win) |
| vn::from_chars | 531.384 | 0.0380544 | 0.686587ms | 2000 | 30 | 55.9724 | 3589.4 | 5.67642 | 2(Loss) |
| strtoll/strtoull | 219.063 | 0.721672 | 1.61868ms | 2000 | 30 | 118447 | 8706.87 | 13.8453 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 546.669 | 0.41804 | 6.40551ms | 20000 | 30 | 638219 | 34890.4 | 5.554 | 1(Win) |
| vn::from_chars | 514.051 | 2.22588 | 6.75535ms | 20000 | 30 | 2.04632e+07 | 37104.3 | 5.90505 | 2(Loss) |
| strtoll/strtoull | 214.428 | 0.753287 | 15.9522ms | 20000 | 30 | 1.34691e+07 | 88950.5 | 14.1699 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 530.09 | 0.35728 | 64.9202ms | 200000 | 30 | 4.95793e+07 | 359816 | 5.73186 | 1(Win) |
| vn::from_chars | 512.729 | 0.5343 | 66.7461ms | 200000 | 30 | 1.18516e+08 | 371999 | 5.92526 | 2(Loss) |
| strtoll/strtoull | 210.507 | 0.912198 | 161.304ms | 200000 | 30 | 2.0494e+09 | 906073 | 14.4371 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 845.393 | 0.184557 | 0.086295ms | 400 | 30 | 20.8057 | 451.233 | 3.38417 | 1(Win) |
| std::from_chars | 602.892 | 0.106339 | 0.116317ms | 400 | 30 | 13.5816 | 632.733 | 4.82608 | 2(Loss) |
| strtoll/strtoull | 404.171 | 0.193311 | 0.561323ms | 400 | 30 | 99.8678 | 943.833 | 7.37725 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1132.78 | 0.0646316 | 0.669217ms | 4000 | 30 | 142.116 | 3367.57 | 2.65937 | 1(Win) |
| std::from_chars | 759.819 | 0.0427916 | 0.989356ms | 4000 | 30 | 138.464 | 5020.53 | 3.97665 | 2(Loss) |
| strtoll/strtoull | 320.861 | 0.167398 | 5.68344ms | 4000 | 30 | 11882.5 | 11888.9 | 9.45831 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 547.961 | 1.77609 | 29.0972ms | 40000 | 30 | 4.5864e+07 | 69616.2 | 5.54151 | 1(Win) |
| std::from_chars | 399.383 | 2.0555 | 20.3909ms | 40000 | 30 | 1.15637e+08 | 95514.8 | 7.60465 | 2(Loss) |
| strtoll/strtoull | 239.483 | 1.01621 | 28.5282ms | 40000 | 30 | 7.86075e+07 | 159289 | 12.6861 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 434.675 | 0.450515 | 388.18ms | 400000 | 30 | 4.68954e+08 | 877597 | 6.98948 | 1(Win) |
| std::from_chars | 351.186 | 1.42531 | 191.598ms | 400000 | 30 | 7.19091e+09 | 1.08623e+06 | 8.65194 | 2(Loss) |
| strtoll/strtoull | 240.479 | 0.645758 | 337.959ms | 400000 | 30 | 3.14795e+09 | 1.58629e+06 | 12.6363 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 802.756 | 0.225252 | 0.089915ms | 400 | 30 | 34.3724 | 475.2 | 3.598 | 1(Win) |
| std::from_chars | 598.791 | 0.12388 | 0.117802ms | 400 | 30 | 18.6851 | 637.067 | 4.86367 | 2(Loss) |
| strtoll/strtoull | 322.997 | 0.128538 | 0.245905ms | 400 | 30 | 69.1368 | 1181.03 | 9.2665 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1092.27 | 0.0822078 | 0.722076ms | 4000 | 30 | 247.289 | 3492.43 | 2.75849 | 1(Win) |
| std::from_chars | 762.914 | 0.0780901 | 0.97408ms | 4000 | 30 | 457.385 | 5000.17 | 3.9602 | 2(Loss) |
| strtoll/strtoull | 279.779 | 2.32129 | 2.33654ms | 4000 | 30 | 3.00517e+06 | 13634.7 | 10.8478 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 715.689 | 2.04404 | 9.66547ms | 40000 | 30 | 3.56098e+07 | 53301 | 4.24357 | 1(Win) |
| std::from_chars | 507.467 | 1.03625 | 13.6223ms | 40000 | 30 | 1.82035e+07 | 75171.3 | 5.9859 | 2(Loss) |
| strtoll/strtoull | 276.971 | 1.89833 | 24.1277ms | 40000 | 30 | 2.05077e+08 | 137729 | 10.9715 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 573.577 | 0.154434 | 120.661ms | 400000 | 30 | 3.16477e+07 | 665071 | 5.29795 | 1(Win) |
| std::from_chars | 488.631 | 0.561426 | 139.409ms | 400000 | 30 | 5.76322e+08 | 780692 | 6.2163 | 2(Loss) |
| strtoll/strtoull | 284.446 | 0.905678 | 244.595ms | 400000 | 30 | 4.42577e+09 | 1.3411e+06 | 10.6828 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 879.098 | 0.149035 | 0.086253ms | 400 | 30 | 12.5471 | 433.933 | 3.2495 | 1(Win) |
| std::from_chars | 607.791 | 0.0676765 | 0.115624ms | 400 | 30 | 5.41264 | 627.633 | 4.78542 | 2(Loss) |
| strtoll/strtoull | 344.494 | 0.162606 | 0.234954ms | 400 | 30 | 97.2644 | 1107.33 | 8.681 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1184.57 | 0.0455585 | 0.644351ms | 4000 | 30 | 64.5747 | 3220.33 | 2.54221 | 1(Win) |
| std::from_chars | 769.956 | 0.0545184 | 0.967322ms | 4000 | 30 | 218.875 | 4954.43 | 3.92611 | 2(Loss) |
| strtoll/strtoull | 303.062 | 1.09677 | 2.20971ms | 4000 | 30 | 571755 | 12587.2 | 10.0145 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 836.865 | 1.05506 | 8.70216ms | 40000 | 30 | 6.93876e+06 | 45583.2 | 3.62874 | 1(Win) |
| std::from_chars | 531.997 | 0.395406 | 13.1027ms | 40000 | 30 | 2.41163e+06 | 71705.2 | 5.70925 | 2(Loss) |
| strtoll/strtoull | 303.881 | 1.61633 | 23.3142ms | 40000 | 30 | 1.23508e+08 | 125533 | 9.9998 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 606.945 | 0.277099 | 113.414ms | 400000 | 30 | 9.09942e+07 | 628508 | 5.00682 | 1(Win) |
| std::from_chars | 507.373 | 0.242246 | 137.419ms | 400000 | 30 | 9.95174e+07 | 751852 | 5.98957 | 2(Loss) |
| strtoll/strtoull | 290.713 | 0.98001 | 238.021ms | 400000 | 30 | 4.96104e+09 | 1.31218e+06 | 10.4538 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 823.553 | 0.121333 | 0.087461ms | 400 | 30 | 9.47586 | 463.2 | 3.473 | 1(Win) |
| std::from_chars | 579.682 | 0.172407 | 0.12019ms | 400 | 30 | 38.6161 | 658.067 | 5.0305 | 2(Loss) |
| strtoll/strtoull | 314.536 | 0.64051 | 0.258021ms | 400 | 30 | 1810.3 | 1212.8 | 9.5205 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1157.42 | 0.0642846 | 0.687785ms | 4000 | 30 | 134.671 | 3295.87 | 2.60307 | 1(Win) |
| std::from_chars | 766.778 | 0.266167 | 2.22136ms | 4000 | 30 | 5260.31 | 4974.97 | 3.94219 | 2(Loss) |
| strtoll/strtoull | 307.112 | 1.62178 | 2.31298ms | 4000 | 30 | 1.2174e+06 | 12421.2 | 9.88081 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1094.6 | 0.290138 | 6.49491ms | 40000 | 30 | 306715 | 34850 | 2.77377 | 1(Win) |
| std::from_chars | 634.9 | 2.42738 | 10.6037ms | 40000 | 30 | 6.38128e+07 | 60083.4 | 4.779 | 2(Loss) |
| strtoll/strtoull | 292.889 | 1.74349 | 22.8152ms | 40000 | 30 | 1.54695e+08 | 130244 | 10.3701 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 806.296 | 0.794179 | 85.7602ms | 400000 | 30 | 4.23535e+08 | 473114 | 3.76841 | 1(Win) |
| std::from_chars | 633.24 | 0.471058 | 107.868ms | 400000 | 30 | 2.41576e+08 | 602409 | 4.79891 | 2(Loss) |
| strtoll/strtoull | 302.964 | 0.355584 | 225.079ms | 400000 | 30 | 6.01375e+08 | 1.25913e+06 | 10.0311 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 778.828 | 0.122616 | 0.17786ms | 800 | 30 | 43.2828 | 979.6 | 3.78042 | 1(Win) |
| std::from_chars | 656.687 | 0.11069 | 0.207995ms | 800 | 30 | 49.6138 | 1161.8 | 4.51046 | 2(Loss) |
| strtoll/strtoull | 356.453 | 0.0757499 | 0.470529ms | 800 | 30 | 78.8609 | 2140.37 | 8.45617 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1004.54 | 0.0571922 | 6.93588ms | 8000 | 48 | 905.652 | 7594.92 | 3.01279 | 1(Win) |
| std::from_chars | 761.531 | 0.0642984 | 4.43341ms | 8000 | 30 | 1244.88 | 10018.5 | 3.9782 | 2(Loss) |
| strtoll/strtoull | 413.633 | 0.23685 | 3.55028ms | 8000 | 30 | 57255.7 | 18444.8 | 7.34091 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 803.794 | 1.10942 | 17.1438ms | 80000 | 30 | 3.32663e+07 | 94917.3 | 3.77827 | 1(Win) |
| std::from_chars | 641.857 | 0.443287 | 21.4989ms | 80000 | 30 | 8.32904e+06 | 118864 | 4.73361 | 2(Loss) |
| strtoll/strtoull | 394.403 | 1.28355 | 34.9896ms | 80000 | 30 | 1.84947e+08 | 193442 | 7.70504 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 711.006 | 2.13533 | 184.436ms | 800000 | 30 | 1.57501e+10 | 1.07304e+06 | 4.27259 | 1(Win) |
| std::from_chars | 594.731 | 1.81043 | 225.813ms | 800000 | 30 | 1.61817e+10 | 1.28283e+06 | 5.10856 | 2(Loss) |
| strtoll/strtoull | 390.359 | 0.625609 | 352.763ms | 800000 | 30 | 4.48518e+09 | 1.95446e+06 | 7.78392 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 749.376 | 0.063942 | 0.192467ms | 800 | 30 | 12.7138 | 1018.1 | 3.93646 | 1(Win) |
| std::from_chars | 727.718 | 0.0428036 | 0.210282ms | 800 | 30 | 6.04138 | 1048.4 | 4.09625 | 2(Loss) |
| strtoll/strtoull | 303.247 | 1.65296 | 0.466484ms | 800 | 30 | 51883.7 | 2515.9 | 9.94883 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 987.287 | 0.182648 | 1.42193ms | 8000 | 30 | 5976.45 | 7727.63 | 3.066 | 1(Win) |
| std::from_chars | 799.855 | 0.169756 | 1.7984ms | 8000 | 30 | 7865.57 | 9538.47 | 3.7891 | 2(Loss) |
| strtoll/strtoull | 346.477 | 1.56388 | 4.07716ms | 8000 | 30 | 3.5576e+06 | 22019.9 | 8.76372 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 937.066 | 1.96333 | 14.3884ms | 80000 | 30 | 7.66566e+07 | 81417.9 | 3.23577 | 1(Win) |
| std::from_chars | 807.93 | 0.305135 | 17.2724ms | 80000 | 30 | 2.49079e+06 | 94431.3 | 3.75914 | 2(Loss) |
| strtoll/strtoull | 337.933 | 1.20873 | 41.1606ms | 80000 | 30 | 2.23408e+08 | 225767 | 8.99159 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 930.343 | 0.167999 | 199.078ms | 800000 | 30 | 5.69415e+07 | 820063 | 3.26617 | 1(Win) |
| std::from_chars | 801.741 | 0.248446 | 182.549ms | 800000 | 30 | 1.67685e+08 | 951603 | 3.79042 | 2(Loss) |
| strtoll/strtoull | 334.898 | 0.955618 | 1005.78ms | 800000 | 30 | 1.42182e+10 | 2.27812e+06 | 9.07326 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 773.903 | 0.0451244 | 0.179533ms | 800 | 30 | 5.93678 | 985.833 | 3.81013 | 1(Win) |
| std::from_chars | 621.641 | 0.0478704 | 0.222605ms | 800 | 30 | 10.3552 | 1227.3 | 4.77308 | 2(Loss) |
| strtoll/strtoull | 339.966 | 0.155599 | 0.389444ms | 800 | 30 | 365.799 | 2244.17 | 8.85004 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1017.99 | 0.0493215 | 1.43131ms | 8000 | 30 | 409.909 | 7494.57 | 2.97222 | 1(Win) |
| std::from_chars | 811.635 | 0.0336855 | 1.79976ms | 8000 | 30 | 300.792 | 9400.03 | 3.73399 | 2(Loss) |
| strtoll/strtoull | 493.453 | 2.10354 | 14.5296ms | 8000 | 48 | 5.07729e+06 | 15461.2 | 6.15099 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 995.358 | 0.518946 | 13.8546ms | 80000 | 30 | 4.74665e+06 | 76649.7 | 3.05179 | 1(Win) |
| std::from_chars | 785.836 | 0.643826 | 17.4177ms | 80000 | 30 | 1.17213e+07 | 97086.3 | 3.86582 | 2(Loss) |
| strtoll/strtoull | 475.335 | 1.74234 | 68.0732ms | 80000 | 30 | 2.34621e+08 | 160506 | 6.39203 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 941.395 | 2.08627 | 389.604ms | 800000 | 30 | 8.57628e+09 | 810435 | 3.227 | 1(Win) |
| std::from_chars | 795.482 | 0.337671 | 171.745ms | 800000 | 30 | 3.1465e+08 | 959091 | 3.81875 | 2(Loss) |
| strtoll/strtoull | 500.177 | 1.081 | 284.29ms | 800000 | 30 | 8.15646e+09 | 1.52534e+06 | 6.07512 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 839.964 | 0.0674248 | 0.42378ms | 800 | 30 | 11.2517 | 908.3 | 3.523 | 1(Win) |
| vn::from_chars | 756.584 | 0.0455062 | 0.183832ms | 800 | 30 | 6.31724 | 1008.4 | 3.89513 | 2(Loss) |
| strtoll/strtoull | 352.636 | 0.223363 | 1.02883ms | 800 | 30 | 700.602 | 2163.53 | 8.54725 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 999.043 | 0.0644941 | 1.45731ms | 8000 | 30 | 727.734 | 7636.7 | 3.02944 | 1(Win) |
| std::from_chars | 744.082 | 0.601539 | 1.89849ms | 8000 | 30 | 114127 | 10253.4 | 4.07363 | 2(Loss) |
| strtoll/strtoull | 342.949 | 0.550127 | 4.05757ms | 8000 | 30 | 449334 | 22246.5 | 8.85337 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 896.638 | 1.29761 | 15.7664ms | 80000 | 30 | 3.65726e+07 | 85088.9 | 3.38711 | 1(Win) |
| std::from_chars | 654.939 | 1.39227 | 20.9926ms | 80000 | 30 | 7.89127e+07 | 116490 | 4.63628 | 2(Loss) |
| strtoll/strtoull | 338.616 | 0.296954 | 40.3269ms | 80000 | 30 | 1.34297e+07 | 225311 | 8.97407 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 762.772 | 0.317445 | 178.637ms | 800000 | 30 | 3.02446e+08 | 1.00022e+06 | 3.98203 | 1(Win) |
| std::from_chars | 655.521 | 0.425274 | 209.96ms | 800000 | 30 | 7.34965e+08 | 1.16387e+06 | 4.63463 | 2(Loss) |
| strtoll/strtoull | 342.308 | 0.223745 | 454.286ms | 800000 | 30 | 7.46063e+08 | 2.22881e+06 | 8.878 | 3(Loss) |
