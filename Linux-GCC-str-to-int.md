# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 611.33 | 0.0752846 | 0.065189ms | 100 | 30 | 0.413793 | 156 | 1(Win) |
| std::from_chars | 407.553 | 0.110341 | 0.073466ms | 100 | 30 | 2 | 234 | 2(Loss) |
| strtoll/strtoull | 110.166 | 0.0294818 | 0.172715ms | 100 | 30 | 1.95402 | 865.667 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 659.526 | 0.060143 | 0.31194ms | 1000 | 30 | 22.6897 | 1446 | 1(Win) |
| std::from_chars | 523.604 | 0.0294884 | 0.422025ms | 1000 | 30 | 8.65402 | 1821.37 | 2(Loss) |
| strtoll/strtoull | 149.582 | 0.113749 | 1.24133ms | 1000 | 30 | 1577.83 | 6375.6 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 283.475 | 0.152102 | 7.16206ms | 10000 | 30 | 78552.7 | 33642.2 | 1(Win) |
| std::from_chars | 211.541 | 0.718853 | 9.84227ms | 10000 | 30 | 3.15073e+06 | 45082.2 | 2(Loss) |
| strtoll/strtoull | 94.6072 | 1.19178 | 18.6894ms | 10000 | 30 | 4.32976e+07 | 100804 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 169.148 | 1.46494 | 102.981ms | 100000 | 30 | 2.04658e+09 | 563811 | 1(Win) |
| std::from_chars | 156.443 | 0.641498 | 115.328ms | 100000 | 30 | 4.58776e+08 | 609600 | 2(Loss) |
| strtoll/strtoull | 88.4045 | 1.62829 | 199.755ms | 100000 | 30 | 9.2563e+09 | 1.07876e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 464.452 | 0.067407 | 0.07022ms | 100 | 30 | 0.574713 | 205.333 | 1(Win) |
| std::from_chars | 392.782 | 0.164508 | 0.08988ms | 100 | 30 | 4.78621 | 242.8 | 2(Loss) |
| strtoll/strtoull | 108.611 | 0.0357788 | 0.175238ms | 100 | 30 | 2.96092 | 878.067 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 674.61 | 0.0535548 | 0.295418ms | 1000 | 30 | 17.1954 | 1413.67 | 1(Win) |
| std::from_chars | 515.788 | 0.299802 | 0.424804ms | 1000 | 30 | 921.826 | 1848.97 | 2(Loss) |
| strtoll/strtoull | 132.303 | 0.522775 | 3.21927ms | 1000 | 30 | 42600.3 | 7208.27 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 489.82 | 1.10841 | 4.09539ms | 10000 | 30 | 1.39716e+06 | 19469.9 | 1(Win) |
| std::from_chars | 279.645 | 0.312363 | 6.98758ms | 10000 | 30 | 340429 | 34103.1 | 2(Loss) |
| strtoll/strtoull | 122.808 | 0.957978 | 15.5363ms | 10000 | 30 | 1.66027e+07 | 77655.8 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 264.962 | 2.44514 | 196.602ms | 100000 | 30 | 2.32361e+09 | 359929 | 1(Win) |
| std::from_chars | 233.144 | 2.26006 | 71.555ms | 100000 | 30 | 2.56397e+09 | 409049 | 2(Loss) |
| strtoll/strtoull | 114.581 | 2.17984 | 148.239ms | 100000 | 30 | 9.87522e+09 | 832317 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 702.264 | 0.0893194 | 0.052885ms | 100 | 30 | 0.441379 | 135.8 | 1(Win) |
| std::from_chars | 396.648 | 1.4277 | 0.109761ms | 100 | 30 | 353.495 | 240.433 | 2(Loss) |
| strtoll/strtoull | 156.067 | 0.31697 | 0.32262ms | 100 | 30 | 112.547 | 611.067 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 970.859 | 0.0268012 | 0.210379ms | 1000 | 30 | 2.07931 | 982.3 | 1(Win) |
| std::from_chars | 275.546 | 0.0283393 | 0.631807ms | 1000 | 30 | 28.8609 | 3461.03 | 2(Loss) |
| strtoll/strtoull | 165.159 | 0.488919 | 1.12738ms | 1000 | 30 | 23910.5 | 5774.27 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 978.318 | 0.159393 | 1.97207ms | 10000 | 30 | 7242.64 | 9748.1 | 1(Win) |
| std::from_chars | 291.26 | 0.711792 | 5.97875ms | 10000 | 30 | 1.62954e+06 | 32743.1 | 2(Loss) |
| strtoll/strtoull | 139.949 | 0.633048 | 14.0056ms | 10000 | 30 | 5.58288e+06 | 68144.6 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.424 | 0.565603 | 56.1752ms | 100000 | 30 | 8.50146e+07 | 297629 | 1(Win) |
| std::from_chars | 244.917 | 2.3539 | 68.5252ms | 100000 | 30 | 2.52033e+09 | 389386 | 2(Loss) |
| strtoll/strtoull | 125.397 | 1.73086 | 139.778ms | 100000 | 30 | 5.19837e+09 | 760522 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 569.811 | 0.08822 | 0.07188ms | 100 | 30 | 0.654023 | 167.367 | 1(Win) |
| std::from_chars | 391.117 | 0.044334 | 0.073853ms | 100 | 30 | 0.350575 | 243.833 | 2(Loss) |
| strtoll/strtoull | 150.422 | 0.0667903 | 0.142505ms | 100 | 30 | 5.37931 | 634 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 768.886 | 0.0464409 | 0.25404ms | 1000 | 30 | 9.95402 | 1240.33 | 1(Win) |
| std::from_chars | 346.593 | 0.285568 | 0.509578ms | 1000 | 30 | 1852.25 | 2751.57 | 2(Loss) |
| strtoll/strtoull | 150.594 | 0.310793 | 2.75896ms | 1000 | 30 | 11621.1 | 6332.73 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 724.477 | 1.36081 | 3.08138ms | 10000 | 30 | 962644 | 13163.6 | 1(Win) |
| std::from_chars | 235.58 | 1.57826 | 7.42113ms | 10000 | 30 | 1.22462e+07 | 40481.9 | 2(Loss) |
| strtoll/strtoull | 113.075 | 1.60439 | 16.0727ms | 10000 | 30 | 5.49301e+07 | 84340.1 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 224.299 | 0.556367 | 79.8277ms | 100000 | 30 | 1.67876e+08 | 425180 | 1(Win) |
| strtoll/strtoull | 106.554 | 2.10092 | 375.504ms | 100000 | 30 | 1.06071e+10 | 895013 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 596.419 | 0.103221 | 0.118364ms | 200 | 30 | 3.26897 | 319.8 | 1(Win) |
| vn::from_chars | 503.657 | 0.129208 | 0.106002ms | 200 | 30 | 7.18276 | 378.7 | 2(Loss) |
| strtoll/strtoull | 157.776 | 0.035772 | 0.274271ms | 200 | 30 | 5.61034 | 1208.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 672.343 | 0.181801 | 0.631573ms | 2000 | 30 | 797.982 | 2836.87 | 1(Win) |
| vn::from_chars | 604.28 | 0.04145 | 0.635582ms | 2000 | 30 | 51.3517 | 3156.4 | 2(Loss) |
| strtoll/strtoull | 239.757 | 0.407694 | 8.05735ms | 2000 | 48 | 50492.7 | 7955.35 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.128 | 2.28327 | 24.0333ms | 20000 | 30 | 5.55196e+07 | 59580.8 | 1(Win) |
| std::from_chars | 301.465 | 0.355874 | 12.8718ms | 20000 | 30 | 1.5209e+06 | 63269.3 | 2(Loss) |
| strtoll/strtoull | 155.368 | 1.91477 | 21.8711ms | 20000 | 30 | 1.65765e+08 | 122763 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 269.867 | 1.70781 | 130.936ms | 200000 | 30 | 4.3708e+09 | 706772 | 1(Win) |
| std::from_chars | 244.572 | 1.8427 | 141.221ms | 200000 | 30 | 6.19551e+09 | 779874 | 2(Loss) |
| strtoll/strtoull | 149.081 | 2.13943 | 238.208ms | 200000 | 30 | 2.24767e+10 | 1.27941e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 670.421 | 0.148602 | 0.08367ms | 200 | 30 | 5.36207 | 284.5 | 1(Win) |
| vn::from_chars | 429.938 | 0.0926458 | 0.105546ms | 200 | 30 | 5.06782 | 443.633 | 2(Loss) |
| strtoll/strtoull | 179.083 | 0.0412426 | 0.20974ms | 200 | 30 | 5.78851 | 1065.07 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 577.559 | 0.0411333 | 0.641788ms | 2000 | 30 | 55.3575 | 3302.43 | 1(Win) |
| std::from_chars | 562.551 | 0.68594 | 0.635394ms | 2000 | 30 | 16226.7 | 3390.53 | 2(Loss) |
| strtoll/strtoull | 214.051 | 0.116429 | 1.68403ms | 2000 | 30 | 3228.98 | 8910.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 560.479 | 0.283587 | 16.9464ms | 20000 | 30 | 279406 | 34030.7 | 1(Win) |
| std::from_chars | 422.607 | 0.66569 | 8.60187ms | 20000 | 30 | 2.70802e+06 | 45132.9 | 2(Loss) |
| strtoll/strtoull | 194.655 | 1.74455 | 19.2489ms | 20000 | 30 | 8.76628e+07 | 97986 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 445.335 | 1.77358 | 448.398ms | 200000 | 48 | 2.76969e+09 | 428295 | 1(Win) |
| std::from_chars | 385.23 | 1.10871 | 90.7167ms | 200000 | 30 | 9.04018e+08 | 495120 | 2(Loss) |
| strtoll/strtoull | 184.332 | 1.71282 | 192.862ms | 200000 | 30 | 9.42331e+09 | 1.03474e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 610.286 | 0.111404 | 0.085544ms | 200 | 30 | 3.63678 | 312.533 | 1(Win) |
| vn::from_chars | 453.699 | 0.0916661 | 0.105155ms | 200 | 30 | 4.45517 | 420.4 | 2(Loss) |
| strtoll/strtoull | 189.152 | 0.166453 | 0.208271ms | 200 | 30 | 84.5161 | 1008.37 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 686.039 | 0.119588 | 0.571125ms | 2000 | 30 | 331.633 | 2780.23 | 1(Win) |
| vn::from_chars | 625.367 | 0.0461674 | 0.654544ms | 2000 | 30 | 59.4816 | 3049.97 | 2(Loss) |
| strtoll/strtoull | 224.426 | 0.090805 | 1.64128ms | 2000 | 30 | 1786.72 | 8498.8 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 621.025 | 1.32078 | 5.68712ms | 20000 | 30 | 4.93654e+06 | 30712.9 | 1(Win) |
| std::from_chars | 437.723 | 1.08368 | 8.36091ms | 20000 | 30 | 6.68943e+06 | 43574.4 | 2(Loss) |
| strtoll/strtoull | 193.968 | 0.659417 | 17.3951ms | 20000 | 30 | 1.26137e+07 | 98333.4 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 474.696 | 1.76785 | 73.1585ms | 200000 | 30 | 1.5137e+09 | 401805 | 1(Win) |
| std::from_chars | 390.309 | 2.22262 | 250.929ms | 200000 | 30 | 3.53912e+09 | 488677 | 2(Loss) |
| strtoll/strtoull | 195.251 | 2.16529 | 471.457ms | 200000 | 30 | 1.34222e+10 | 976869 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 533.873 | 0.221713 | 0.095076ms | 200 | 30 | 18.823 | 357.267 | 1(Win) |
| vn::from_chars | 408.718 | 0.0575111 | 0.114785ms | 200 | 30 | 2.16092 | 466.667 | 2(Loss) |
| strtoll/strtoull | 223.325 | 0.734582 | 0.18248ms | 200 | 30 | 1180.82 | 854.067 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 636.193 | 0.331687 | 1.47454ms | 2000 | 30 | 2966.62 | 2998.07 | 1(Win) |
| vn::from_chars | 545.919 | 0.247154 | 1.5939ms | 2000 | 30 | 2236.97 | 3493.83 | 2(Loss) |
| strtoll/strtoull | 228.546 | 0.0729171 | 1.60372ms | 2000 | 30 | 1110.94 | 8345.57 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 540.109 | 0.27365 | 33.6051ms | 20000 | 48 | 448259 | 35314.2 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 533.688 | 0.883281 | 7.33168ms | 20000 | 30 | 2.98955e+06 | 35739 | 1(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 536.209 | 0.364477 | 68.3511ms | 200000 | 30 | 5.04258e+07 | 355710 | 1(Win) |
| vn::from_chars | 513.724 | 0.447982 | 163.804ms | 200000 | 30 | 8.29931e+07 | 371279 | 2(Loss) |
| strtoll/strtoull | 211.706 | 2.23629 | 391.123ms | 200000 | 30 | 1.21779e+10 | 900942 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1059.83 | 0.108982 | 0.095533ms | 400 | 30 | 4.61609 | 359.933 | 1(Win) |
| std::from_chars | 699.388 | 0.0924815 | 0.160339ms | 400 | 30 | 7.63333 | 545.433 | 2(Loss) |
| strtoll/strtoull | 367.151 | 0.0725536 | 1.04694ms | 400 | 48 | 27.2766 | 1039 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1160.12 | 0.0565936 | 0.653987ms | 4000 | 30 | 103.89 | 3288.2 | 1(Win) |
| std::from_chars | 807.885 | 0.042479 | 0.967585ms | 4000 | 30 | 120.695 | 4721.83 | 2(Loss) |
| strtoll/strtoull | 349.716 | 0.212053 | 2.14936ms | 4000 | 30 | 16051 | 10908 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 605.483 | 2.00161 | 12.063ms | 40000 | 30 | 4.77085e+07 | 63002.6 | 1(Win) |
| std::from_chars | 424.87 | 0.43222 | 17.2288ms | 40000 | 30 | 4.51793e+06 | 89785.1 | 2(Loss) |
| strtoll/strtoull | 252.6 | 0.627722 | 67.6597ms | 40000 | 30 | 2.69595e+07 | 151018 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 425.475 | 1.51211 | 431.087ms | 400000 | 30 | 5.51391e+09 | 896573 | 1(Win) |
| std::from_chars | 342.499 | 2.40002 | 199.594ms | 400000 | 30 | 2.14364e+10 | 1.11378e+06 | 2(Loss) |
| strtoll/strtoull | 233.07 | 1.64719 | 750.343ms | 400000 | 30 | 2.18048e+10 | 1.63671e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 798.945 | 0.126914 | 0.131663ms | 400 | 30 | 11.0161 | 477.467 | 1(Win) |
| vn::from_chars | 764.213 | 0.179206 | 0.114529ms | 400 | 30 | 24.0057 | 499.167 | 2(Loss) |
| strtoll/strtoull | 355.561 | 0.281998 | 0.242752ms | 400 | 30 | 274.602 | 1072.87 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 756.829 | 0.0587504 | 0.955291ms | 4000 | 30 | 263.068 | 5040.37 | 1(Win) |
| vn::from_chars | 587.051 | 0.0623791 | 3.71222ms | 4000 | 48 | 788.656 | 6498.06 | 2(Loss) |
| strtoll/strtoull | 311.996 | 0.308839 | 2.40351ms | 4000 | 30 | 42776.5 | 12226.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 687.931 | 1.26953 | 9.92613ms | 40000 | 30 | 1.48675e+07 | 55451.7 | 1(Win) |
| std::from_chars | 519.735 | 0.78426 | 32.0358ms | 40000 | 30 | 9.94024e+06 | 73396.9 | 2(Loss) |
| strtoll/strtoull | 295.822 | 1.45165 | 25.1906ms | 40000 | 30 | 1.05125e+08 | 128953 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 554.279 | 1.81449 | 125.652ms | 400000 | 30 | 4.67837e+09 | 688226 | 1(Win) |
| std::from_chars | 482.168 | 2.03872 | 402.094ms | 400000 | 30 | 7.80475e+09 | 791156 | 2(Loss) |
| strtoll/strtoull | 262.735 | 2.21084 | 258.382ms | 400000 | 30 | 3.09113e+10 | 1.45192e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 885.629 | 0.128341 | 0.114995ms | 400 | 30 | 9.16782 | 430.733 | 1(Win) |
| std::from_chars | 795.005 | 0.1122 | 0.273326ms | 400 | 30 | 8.6954 | 479.833 | 2(Loss) |
| strtoll/strtoull | 203.534 | 0.0312981 | 0.510718ms | 400 | 30 | 10.323 | 1874.23 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1158.53 | 0.0666834 | 1.08485ms | 4000 | 30 | 144.631 | 3292.7 | 1(Win) |
| std::from_chars | 797.92 | 0.12584 | 0.938199ms | 4000 | 30 | 1085.82 | 4780.8 | 2(Loss) |
| strtoll/strtoull | 327.854 | 0.173558 | 2.26753ms | 4000 | 30 | 12234.1 | 11635.4 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 905.466 | 0.892228 | 7.89115ms | 40000 | 30 | 4.23886e+06 | 42129.7 | 1(Win) |
| std::from_chars | 542.516 | 0.814429 | 12.8608ms | 40000 | 30 | 9.83836e+06 | 70314.9 | 2(Loss) |
| strtoll/strtoull | 296.144 | 1.67148 | 52.2606ms | 40000 | 30 | 1.39071e+08 | 128812 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 560.643 | 1.687 | 662.604ms | 400000 | 48 | 6.32438e+09 | 680415 | 1(Win) |
| std::from_chars | 477.732 | 2.38549 | 141.295ms | 400000 | 30 | 1.0885e+10 | 798501 | 2(Loss) |
| strtoll/strtoull | 271.413 | 2.13158 | 246.913ms | 400000 | 30 | 2.69267e+10 | 1.40549e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 864.815 | 0.146781 | 0.105494ms | 400 | 30 | 12.5759 | 441.1 | 1(Win) |
| std::from_chars | 662.657 | 0.307754 | 0.152119ms | 400 | 30 | 94.1609 | 575.667 | 2(Loss) |
| strtoll/strtoull | 290.223 | 0.303108 | 0.262466ms | 400 | 30 | 476.179 | 1314.4 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 784.277 | 0.201236 | 2.09842ms | 4000 | 30 | 2874.17 | 4863.97 | 1(Win) |
| vn::from_chars | 590.867 | 0.0584734 | 1.39911ms | 4000 | 30 | 427.541 | 6456.1 | 2(Loss) |
| strtoll/strtoull | 312.839 | 0.237045 | 5.30987ms | 4000 | 30 | 25064.6 | 12193.8 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1191.11 | 0.168256 | 6.06115ms | 40000 | 30 | 87111.8 | 32026.3 | 1(Win) |
| std::from_chars | 658.015 | 0.316938 | 25.4062ms | 40000 | 30 | 1.01279e+06 | 57972.8 | 2(Loss) |
| strtoll/strtoull | 318.618 | 0.596941 | 23.8422ms | 40000 | 30 | 1.53237e+07 | 119726 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 620.824 | 2.07598 | 114.036ms | 400000 | 30 | 4.88146e+09 | 614457 | 1(Win) |
| strtoll/strtoull | 299.875 | 1.8311 | 547.912ms | 400000 | 30 | 1.62774e+10 | 1.2721e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 993.713 | 0.048245 | 0.435197ms | 800 | 30 | 4.11609 | 767.767 | 1(Win) |
| std::from_chars | 677.666 | 0.0902495 | 0.223797ms | 800 | 30 | 30.9713 | 1125.83 | 2(Loss) |
| strtoll/strtoull | 255.506 | 0.0244046 | 0.606513ms | 800 | 30 | 15.931 | 2986 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 963.457 | 0.151376 | 1.63234ms | 8000 | 30 | 4310.74 | 7918.77 | 1(Win) |
| strtoll/strtoull | 401.132 | 1.63636 | 9.3853ms | 8000 | 30 | 2.90591e+06 | 19019.7 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 824.531 | 1.79528 | 42.738ms | 80000 | 30 | 8.27852e+07 | 92530.2 | 1(Win) |
| std::from_chars | 619.734 | 1.74828 | 119.592ms | 80000 | 48 | 2.22348e+08 | 123108 | 2(Loss) |
| strtoll/strtoull | 371.718 | 1.7703 | 42.2077ms | 80000 | 30 | 3.96066e+08 | 205247 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 739.62 | 1.83318 | 193.637ms | 800000 | 30 | 1.07274e+10 | 1.03153e+06 | 1(Win) |
| std::from_chars | 589.118 | 2.43595 | 235.41ms | 800000 | 30 | 2.98561e+10 | 1.29505e+06 | 2(Loss) |
| strtoll/strtoull | 356.491 | 2.20083 | 2054.46ms | 800000 | 48 | 1.06487e+11 | 2.14013e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 990.402 | 0.0543793 | 0.40704ms | 800 | 30 | 5.26437 | 770.333 | 1(Win) |
| std::from_chars | 827.992 | 0.179552 | 0.194749ms | 800 | 30 | 82.1161 | 921.433 | 2(Loss) |
| strtoll/strtoull | 367.936 | 0.13104 | 0.453508ms | 800 | 30 | 221.495 | 2073.57 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 986.853 | 0.030061 | 1.81126ms | 8000 | 30 | 162.033 | 7731.03 | 1(Win) |
| std::from_chars | 813.608 | 1.3455 | 1.8203ms | 8000 | 30 | 477569 | 9377.23 | 2(Loss) |
| strtoll/strtoull | 343.514 | 1.75372 | 9.58102ms | 8000 | 30 | 4.55129e+06 | 22209.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 967.752 | 1.05345 | 14.5681ms | 80000 | 30 | 2.06921e+07 | 78836.2 | 1(Win) |
| std::from_chars | 812.359 | 0.802458 | 17.921ms | 80000 | 30 | 1.70392e+07 | 93916.5 | 2(Loss) |
| strtoll/strtoull | 323.191 | 0.9176 | 99.163ms | 80000 | 30 | 1.40763e+08 | 236065 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 905.849 | 1.61624 | 825.439ms | 800000 | 48 | 8.89454e+09 | 842237 | 1(Win) |
| strtoll/strtoull | 317.465 | 1.72367 | 432.313ms | 800000 | 30 | 5.14777e+10 | 2.40322e+06 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 644.738 | 0.0548617 | 0.258003ms | 800 | 30 | 12.6437 | 1183.33 | 1(Win) |
| vn::from_chars | 632.865 | 0.0259992 | 0.263926ms | 800 | 30 | 2.94713 | 1205.53 | 2(Loss) |
| strtoll/strtoull | 534.409 | 0.428074 | 0.792964ms | 800 | 30 | 1120.45 | 1427.63 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1054.51 | 0.0253044 | 1.42171ms | 8000 | 30 | 100.552 | 7235 | 1(Win) |
| std::from_chars | 819.235 | 0.16987 | 1.81508ms | 8000 | 30 | 7507.94 | 9312.83 | 2(Loss) |
| strtoll/strtoull | 512.062 | 0.0680885 | 2.94677ms | 8000 | 30 | 3087.48 | 14899.4 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 993.425 | 1.66464 | 33.7763ms | 80000 | 30 | 4.9031e+07 | 76798.9 | 1(Win) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 928.328 | 1.77321 | 149.908ms | 800000 | 30 | 6.3712e+09 | 821843 | 1(Win) |
| std::from_chars | 767.576 | 2.48307 | 474.139ms | 800000 | 30 | 1.82741e+10 | 993960 | 2(Loss) |
| strtoll/strtoull | 410.01 | 2.46198 | 1724.16ms | 800000 | 48 | 1.0074e+11 | 1.86078e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 753.967 | 0.093134 | 0.212838ms | 800 | 30 | 26.6448 | 1011.9 | 1(Win) |
| std::from_chars | 478.032 | 0.0963206 | 0.334351ms | 800 | 30 | 70.8966 | 1596 | 2(Loss) |
| strtoll/strtoull | 360.745 | 0.150027 | 0.453563ms | 800 | 30 | 302.024 | 2114.9 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1006.29 | 0.117265 | 1.42111ms | 8000 | 30 | 2371.32 | 7581.7 | 1(Win) |
| std::from_chars | 707.589 | 0.114751 | 2.83805ms | 8000 | 30 | 4592.53 | 10782.2 | 2(Loss) |
| strtoll/strtoull | 318.001 | 0.883224 | 5.12796ms | 8000 | 30 | 1.34706e+06 | 23991.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 912.666 | 0.767067 | 37.2523ms | 80000 | 30 | 1.23351e+07 | 83594.6 | 1(Win) |
| std::from_chars | 679.91 | 0.572005 | 21.0145ms | 80000 | 30 | 1.23594e+07 | 112212 | 2(Loss) |
| strtoll/strtoull | 343.925 | 0.758309 | 41.4712ms | 80000 | 30 | 8.48917e+07 | 221833 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 766.934 | 2.14621 | 186.063ms | 800000 | 30 | 1.3675e+10 | 994792 | 1(Win) |
| std::from_chars | 630.403 | 1.74398 | 557.945ms | 800000 | 30 | 1.33643e+10 | 1.21024e+06 | 2(Loss) |
| strtoll/strtoull | 324.631 | 2.39282 | 1043.69ms | 800000 | 30 | 9.48732e+10 | 2.35018e+06 | 3(Loss) |
