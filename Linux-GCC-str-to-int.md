# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 364.74 | 0.212851 | 0.089928ms | 100 | 30 | 9.29195 | 261.467 | 1(Win) |
| std::from_chars | 277.661 | 0.242484 | 0.103143ms | 100 | 30 | 20.8092 | 343.467 | 2(Loss) |
| strtoll/strtoull | 89.9466 | 0.187868 | 0.233908ms | 100 | 30 | 119.03 | 1060.27 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 414.113 | 0.0711209 | 0.485198ms | 1000 | 30 | 80.4782 | 2302.93 | 1(Win) |
| std::from_chars | 304.922 | 0.826735 | 0.66787ms | 1000 | 30 | 20057.5 | 3127.6 | 2(Loss) |
| strtoll/strtoull | 89.7086 | 0.251171 | 2.0066ms | 1000 | 30 | 21389.1 | 10630.8 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 152.586 | 1.3431 | 11.6159ms | 10000 | 30 | 2.11401e+07 | 62500.7 | 1(Win) |
| std::from_chars | 128.167 | 0.644489 | 13.4723ms | 10000 | 30 | 6.89926e+06 | 74408.9 | 2(Loss) |
| strtoll/strtoull | 62.0107 | 0.32557 | 27.8612ms | 10000 | 30 | 7.52101e+06 | 153792 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 116.2 | 0.129939 | 147.865ms | 100000 | 30 | 3.4118e+07 | 820717 | 1(Win) |
| std::from_chars | 107.029 | 0.138904 | 160.528ms | 100000 | 30 | 4.59569e+07 | 891043 | 2(Loss) |
| strtoll/strtoull | 58.5654 | 0.148876 | 292.641ms | 100000 | 30 | 1.76313e+08 | 1.62839e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 349.587 | 0.288476 | 0.089067ms | 100 | 30 | 18.5793 | 272.8 | 1(Win) |
| std::from_chars | 262.311 | 0.221728 | 0.106369ms | 100 | 30 | 19.4954 | 363.567 | 2(Loss) |
| strtoll/strtoull | 84.9472 | 0.0412594 | 0.241572ms | 100 | 30 | 6.43678 | 1122.67 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 388.89 | 0.0664797 | 0.501939ms | 1000 | 30 | 79.7345 | 2452.3 | 1(Win) |
| std::from_chars | 282.264 | 0.0240967 | 1.50024ms | 1000 | 30 | 19.8851 | 3378.67 | 2(Loss) |
| strtoll/strtoull | 76.8735 | 0.0448749 | 2.29226ms | 1000 | 30 | 929.771 | 12405.8 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 226.518 | 0.589085 | 7.65105ms | 10000 | 30 | 1.84533e+06 | 42101.6 | 1(Win) |
| std::from_chars | 192.249 | 0.737253 | 8.65182ms | 10000 | 30 | 4.01261e+06 | 49606.2 | 2(Loss) |
| strtoll/strtoull | 72.5218 | 0.400904 | 23.7202ms | 10000 | 30 | 8.33805e+06 | 131502 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 191.702 | 0.309084 | 89.4854ms | 100000 | 30 | 7.09283e+07 | 497477 | 1(Win) |
| std::from_chars | 175.528 | 0.224438 | 97.8801ms | 100000 | 30 | 4.46089e+07 | 543319 | 2(Loss) |
| strtoll/strtoull | 71.5586 | 0.067334 | 240.369ms | 100000 | 30 | 2.41584e+07 | 1.33272e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.292 | 0.345676 | 0.08548ms | 100 | 30 | 22.7828 | 252.1 | 1(Win) |
| std::from_chars | 283.045 | 0.269223 | 0.102462ms | 100 | 30 | 24.6851 | 336.933 | 2(Loss) |
| strtoll/strtoull | 96.4184 | 0.0849829 | 0.220453ms | 100 | 30 | 21.1966 | 989.1 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 445.039 | 0.0558624 | 0.433261ms | 1000 | 30 | 42.9897 | 2142.9 | 1(Win) |
| std::from_chars | 300.118 | 0.0304898 | 1.40537ms | 1000 | 30 | 28.1609 | 3177.67 | 2(Loss) |
| strtoll/strtoull | 89.5903 | 0.0161404 | 1.97911ms | 1000 | 30 | 88.5575 | 10644.8 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 277.622 | 0.726623 | 6.29034ms | 10000 | 30 | 1.8691e+06 | 34351.6 | 1(Win) |
| std::from_chars | 200.932 | 0.777499 | 8.61049ms | 10000 | 30 | 4.08529e+06 | 47462.6 | 2(Loss) |
| strtoll/strtoull | 83.5291 | 0.476513 | 20.5668ms | 10000 | 30 | 8.87965e+06 | 114173 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 213.59 | 0.275629 | 80.3552ms | 100000 | 30 | 4.5437e+07 | 446497 | 1(Win) |
| std::from_chars | 178.272 | 0.273661 | 96.15ms | 100000 | 30 | 6.4295e+07 | 534953 | 2(Loss) |
| strtoll/strtoull | 81.9956 | 0.119222 | 209.469ms | 100000 | 30 | 5.76834e+07 | 1.16308e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.86 | 0.299413 | 0.091111ms | 100 | 30 | 20.9299 | 278.967 | 1(Win) |
| std::from_chars | 267.136 | 0.249458 | 0.123761ms | 100 | 30 | 23.7931 | 357 | 2(Loss) |
| strtoll/strtoull | 86.1962 | 0.0835374 | 0.254887ms | 100 | 30 | 25.6276 | 1106.4 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 386.275 | 0.0898031 | 0.512359ms | 1000 | 30 | 147.472 | 2468.9 | 1(Win) |
| std::from_chars | 221.723 | 0.0336158 | 0.810917ms | 1000 | 30 | 62.7172 | 4301.2 | 2(Loss) |
| strtoll/strtoull | 76.8793 | 0.0178471 | 2.29677ms | 1000 | 30 | 147.04 | 12404.8 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 225.923 | 0.587307 | 7.76917ms | 10000 | 30 | 1.84387e+06 | 42212.4 | 1(Win) |
| std::from_chars | 159.67 | 0.883984 | 10.8331ms | 10000 | 30 | 8.36299e+06 | 59727.7 | 2(Loss) |
| strtoll/strtoull | 72.1158 | 0.358102 | 23.913ms | 10000 | 30 | 6.72781e+06 | 132242 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.544 | 0.200687 | 97.0325ms | 100000 | 30 | 3.48617e+07 | 537147 | 1(Win) |
| std::from_chars | 149.149 | 0.253959 | 114.89ms | 100000 | 30 | 7.91055e+07 | 639409 | 2(Loss) |
| strtoll/strtoull | 70.636 | 0.157257 | 243.221ms | 100000 | 30 | 1.35235e+08 | 1.35013e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 366.047 | 0.243613 | 0.135253ms | 200 | 30 | 48.3402 | 521.067 | 1(Win) |
| std::from_chars | 350.358 | 0.164202 | 0.13855ms | 200 | 30 | 23.9724 | 544.4 | 2(Loss) |
| strtoll/strtoull | 136.957 | 0.0478698 | 0.310932ms | 200 | 30 | 13.3333 | 1392.67 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 400.437 | 0.0326811 | 0.923718ms | 2000 | 30 | 72.6954 | 4763.17 | 1(Win) |
| std::from_chars | 369.114 | 0.0242044 | 1.00531ms | 2000 | 30 | 46.9299 | 5167.37 | 2(Loss) |
| strtoll/strtoull | 121.309 | 0.0124405 | 6.74106ms | 2000 | 30 | 114.783 | 15723.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 240.555 | 0.457261 | 14.6663ms | 20000 | 30 | 3.94348e+06 | 79289.4 | 1(Win) |
| std::from_chars | 188.601 | 0.521627 | 18.6887ms | 20000 | 30 | 8.34856e+06 | 101131 | 2(Loss) |
| strtoll/strtoull | 95.4735 | 0.293463 | 35.9295ms | 20000 | 30 | 1.03115e+07 | 199778 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.797 | 0.0543014 | 178.513ms | 200000 | 30 | 8.65771e+06 | 989304 | 1(Win) |
| std::from_chars | 178.111 | 0.196532 | 193.269ms | 200000 | 30 | 1.32882e+08 | 1.07087e+06 | 2(Loss) |
| strtoll/strtoull | 92.6904 | 0.181669 | 372.962ms | 200000 | 30 | 4.19251e+08 | 2.05776e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 348.671 | 0.167333 | 0.305421ms | 200 | 30 | 25.1368 | 547.033 | 1(Win) |
| std::from_chars | 321.012 | 0.142783 | 0.163706ms | 200 | 30 | 21.592 | 594.167 | 2(Loss) |
| strtoll/strtoull | 118.027 | 0.119508 | 0.332091ms | 200 | 30 | 111.895 | 1616.03 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 365.199 | 0.0276733 | 0.992346ms | 2000 | 30 | 62.6678 | 5222.77 | 1(Win) |
| std::from_chars | 279.643 | 0.0214757 | 1.29123ms | 2000 | 30 | 64.3678 | 6820.67 | 2(Loss) |
| strtoll/strtoull | 112.833 | 1.46929 | 3.06866ms | 2000 | 30 | 1.85064e+06 | 16904.1 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.662 | 0.439512 | 11.3348ms | 20000 | 30 | 2.24183e+06 | 62197 | 1(Win) |
| std::from_chars | 266.386 | 0.679152 | 12.8962ms | 20000 | 30 | 7.09405e+06 | 71601.1 | 2(Loss) |
| strtoll/strtoull | 113.155 | 0.313367 | 30.4705ms | 20000 | 30 | 8.37021e+06 | 168560 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 276.508 | 0.117216 | 124.415ms | 200000 | 30 | 1.96129e+07 | 689799 | 1(Win) |
| std::from_chars | 262.819 | 0.162497 | 130.614ms | 200000 | 30 | 4.17217e+07 | 725728 | 2(Loss) |
| strtoll/strtoull | 112.429 | 0.163677 | 305.18ms | 200000 | 30 | 2.31316e+08 | 1.6965e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.258 | 0.175896 | 0.132037ms | 200 | 30 | 22.9885 | 497.667 | 1(Win) |
| std::from_chars | 333.472 | 0.102147 | 0.142377ms | 200 | 30 | 10.2402 | 571.967 | 2(Loss) |
| strtoll/strtoull | 134.475 | 0.065241 | 0.688779ms | 200 | 30 | 25.6885 | 1418.37 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 362.251 | 1.2115 | 0.905304ms | 2000 | 30 | 122070 | 5265.27 | 1(Win) |
| std::from_chars | 298.957 | 0.0331006 | 2.7937ms | 2000 | 30 | 133.793 | 6380 | 2(Loss) |
| strtoll/strtoull | 130.075 | 1.76346 | 2.66717ms | 2000 | 30 | 2.006e+06 | 14663.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.657 | 0.720678 | 10.5242ms | 20000 | 30 | 5.15331e+06 | 57509.7 | 1(Win) |
| std::from_chars | 272.922 | 0.665717 | 12.676ms | 20000 | 30 | 6.49357e+06 | 69886.2 | 2(Loss) |
| strtoll/strtoull | 129.558 | 0.314136 | 26.762ms | 20000 | 30 | 6.4164e+06 | 147220 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 288.779 | 0.194221 | 118.972ms | 200000 | 30 | 4.93678e+07 | 660487 | 1(Win) |
| std::from_chars | 269.204 | 0.150469 | 127.944ms | 200000 | 30 | 3.40966e+07 | 708514 | 2(Loss) |
| strtoll/strtoull | 128.901 | 0.190759 | 266.025ms | 200000 | 30 | 2.39024e+08 | 1.4797e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.387 | 0.177902 | 0.130605ms | 200 | 30 | 23.5 | 497.5 | 1(Win) |
| std::from_chars | 319.757 | 0.15643 | 0.146013ms | 200 | 30 | 26.1207 | 596.5 | 2(Loss) |
| strtoll/strtoull | 123.725 | 0.040742 | 0.339826ms | 200 | 30 | 11.8345 | 1541.6 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 377.808 | 0.0202077 | 0.965357ms | 2000 | 30 | 31.223 | 5048.47 | 1(Win) |
| std::from_chars | 297.665 | 0.0142592 | 2.78458ms | 2000 | 30 | 25.0448 | 6407.7 | 2(Loss) |
| strtoll/strtoull | 126.676 | 2.22127 | 2.72804ms | 2000 | 30 | 3.35581e+06 | 15056.9 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 350.165 | 1.11634 | 9.80838ms | 20000 | 30 | 1.10924e+07 | 54470.1 | 1(Win) |
| std::from_chars | 291.718 | 0.538182 | 11.8363ms | 20000 | 30 | 3.71461e+06 | 65383.3 | 2(Loss) |
| strtoll/strtoull | 122.854 | 0.332547 | 27.9977ms | 20000 | 30 | 7.99663e+06 | 155253 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 344.925 | 0.281882 | 99.483ms | 200000 | 30 | 7.289e+07 | 552975 | 1(Win) |
| std::from_chars | 292.65 | 0.1589 | 117.599ms | 200000 | 30 | 3.2176e+07 | 651751 | 2(Loss) |
| strtoll/strtoull | 122.396 | 0.197208 | 280.479ms | 200000 | 30 | 2.83334e+08 | 1.55835e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 488.188 | 0.133533 | 0.18123ms | 400 | 30 | 32.6621 | 781.4 | 1(Win) |
| std::from_chars | 433.817 | 0.129988 | 0.199222ms | 400 | 30 | 39.1954 | 879.333 | 2(Loss) |
| strtoll/strtoull | 168.819 | 0.0510344 | 0.446105ms | 400 | 30 | 39.8954 | 2259.63 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 512.59 | 0.0149714 | 3.24737ms | 4000 | 30 | 37.2414 | 7442 | 1(Win) |
| std::from_chars | 323.316 | 0.0767969 | 2.21365ms | 4000 | 30 | 2463.06 | 11798.7 | 2(Loss) |
| strtoll/strtoull | 147.023 | 1.0518 | 10.9827ms | 4000 | 30 | 2.23428e+06 | 25946.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.203 | 0.469557 | 21.5818ms | 40000 | 30 | 9.10144e+06 | 117302 | 1(Win) |
| std::from_chars | 260.448 | 0.931419 | 26.613ms | 40000 | 30 | 5.58329e+07 | 146467 | 2(Loss) |
| strtoll/strtoull | 137.384 | 0.317101 | 49.2804ms | 40000 | 30 | 2.32575e+07 | 277667 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 278.94 | 0.0726509 | 246.678ms | 400000 | 30 | 2.96143e+07 | 1.36757e+06 | 1(Win) |
| std::from_chars | 247.537 | 0.0699044 | 277.681ms | 400000 | 30 | 3.48153e+07 | 1.54106e+06 | 2(Loss) |
| strtoll/strtoull | 134.843 | 0.329763 | 508.654ms | 400000 | 30 | 2.61088e+09 | 2.82899e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 490.72 | 0.114973 | 0.194704ms | 400 | 30 | 23.9644 | 777.367 | 1(Win) |
| std::from_chars | 375.253 | 0.131698 | 0.220964ms | 400 | 30 | 53.7713 | 1016.57 | 2(Loss) |
| strtoll/strtoull | 159.362 | 0.0634963 | 0.487543ms | 400 | 30 | 69.3057 | 2393.73 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 516.067 | 0.0280023 | 1.38781ms | 4000 | 30 | 128.533 | 7391.87 | 1(Win) |
| std::from_chars | 331.078 | 2.32714 | 2.08146ms | 4000 | 30 | 2.15689e+06 | 11522.1 | 2(Loss) |
| strtoll/strtoull | 153.711 | 1.63483 | 4.46154ms | 4000 | 30 | 4.93824e+06 | 24817.3 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.565 | 0.792999 | 17.2829ms | 40000 | 30 | 1.70245e+07 | 94995.7 | 1(Win) |
| std::from_chars | 329.95 | 0.407716 | 20.9999ms | 40000 | 30 | 6.66594e+06 | 115615 | 2(Loss) |
| strtoll/strtoull | 154.368 | 0.255217 | 44.7581ms | 40000 | 30 | 1.19328e+07 | 247116 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 359.323 | 0.115852 | 191.157ms | 400000 | 30 | 4.53813e+07 | 1.06163e+06 | 1(Win) |
| std::from_chars | 330.844 | 0.0562354 | 208.063ms | 400000 | 30 | 1.26129e+07 | 1.15302e+06 | 2(Loss) |
| strtoll/strtoull | 154.426 | 0.0975615 | 444.656ms | 400000 | 30 | 1.74244e+08 | 2.47025e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.135 | 0.186575 | 0.180507ms | 400 | 30 | 60.754 | 762.733 | 1(Win) |
| std::from_chars | 392.257 | 0.0492405 | 0.215543ms | 400 | 30 | 6.87931 | 972.5 | 2(Loss) |
| strtoll/strtoull | 173.07 | 0.0576651 | 0.436327ms | 400 | 30 | 48.4644 | 2204.13 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 519.343 | 0.0141315 | 1.41524ms | 4000 | 30 | 32.323 | 7345.23 | 1(Win) |
| std::from_chars | 366.603 | 0.0329954 | 4.47334ms | 4000 | 30 | 353.637 | 10405.5 | 2(Loss) |
| strtoll/strtoull | 171.44 | 1.69749 | 9.3684ms | 4000 | 30 | 4.27989e+06 | 22250.9 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.233 | 0.645883 | 16.7043ms | 40000 | 30 | 1.13124e+07 | 95074.3 | 1(Win) |
| std::from_chars | 346.022 | 0.423328 | 20.0274ms | 40000 | 30 | 6.53411e+06 | 110244 | 2(Loss) |
| strtoll/strtoull | 171.883 | 0.317565 | 40.1684ms | 40000 | 30 | 1.49018e+07 | 221936 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 359.674 | 0.282605 | 190.514ms | 400000 | 30 | 2.69515e+08 | 1.0606e+06 | 1(Win) |
| std::from_chars | 345.198 | 0.0662097 | 199.544ms | 400000 | 30 | 1.60601e+07 | 1.10507e+06 | 2(Loss) |
| strtoll/strtoull | 170.752 | 0.165763 | 402.307ms | 400000 | 30 | 4.11417e+08 | 2.23405e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 482.547 | 0.0704 | 0.183043ms | 400 | 30 | 9.29195 | 790.533 | 1(Win) |
| std::from_chars | 405.934 | 0.0785351 | 0.209321ms | 400 | 30 | 16.3402 | 939.733 | 2(Loss) |
| strtoll/strtoull | 160.955 | 0.0388865 | 0.514823ms | 400 | 30 | 25.4816 | 2370.03 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 499.635 | 0.0176561 | 1.43329ms | 4000 | 30 | 54.5161 | 7634.97 | 1(Win) |
| std::from_chars | 407.925 | 0.0142063 | 1.74846ms | 4000 | 30 | 52.9471 | 9351.47 | 2(Loss) |
| strtoll/strtoull | 156.127 | 0.00767691 | 4.48531ms | 4000 | 30 | 105.551 | 24433.4 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 439.522 | 0.406529 | 15.7712ms | 40000 | 30 | 3.73476e+06 | 86791.9 | 1(Win) |
| std::from_chars | 353.188 | 0.491098 | 46.0796ms | 40000 | 30 | 8.44042e+06 | 108007 | 2(Loss) |
| strtoll/strtoull | 159.102 | 0.253488 | 43.3441ms | 40000 | 30 | 1.10817e+07 | 239764 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 414.072 | 0.0636872 | 166.18ms | 400000 | 30 | 1.03274e+07 | 921263 | 1(Win) |
| std::from_chars | 347.06 | 0.290672 | 198.046ms | 400000 | 30 | 3.06225e+08 | 1.09915e+06 | 2(Loss) |
| strtoll/strtoull | 160.155 | 0.0337536 | 429.646ms | 400000 | 30 | 1.93911e+07 | 2.38188e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 558.058 | 0.0685211 | 0.305542ms | 800 | 30 | 26.3264 | 1367.13 | 1(Win) |
| std::from_chars | 453.483 | 0.048998 | 0.34179ms | 800 | 30 | 20.3862 | 1682.4 | 2(Loss) |
| strtoll/strtoull | 220.172 | 0.0189919 | 0.682357ms | 800 | 30 | 12.9931 | 3465.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 579.776 | 0.0251178 | 2.43072ms | 8000 | 30 | 327.752 | 13159.2 | 1(Win) |
| std::from_chars | 427.552 | 0.0236196 | 3.28662ms | 8000 | 30 | 532.93 | 17844.4 | 2(Loss) |
| strtoll/strtoull | 212.384 | 0.692494 | 6.53613ms | 8000 | 30 | 1.85647e+06 | 35922.6 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 503.466 | 0.927495 | 27.5148ms | 80000 | 30 | 5.92629e+07 | 151537 | 1(Win) |
| std::from_chars | 397.924 | 0.36769 | 34.6263ms | 80000 | 30 | 1.49096e+07 | 191730 | 2(Loss) |
| strtoll/strtoull | 206.809 | 0.222511 | 66.471ms | 80000 | 30 | 2.02146e+07 | 368910 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 455.409 | 0.0912538 | 302.013ms | 800000 | 30 | 7.01131e+07 | 1.67528e+06 | 1(Win) |
| std::from_chars | 397.371 | 0.0435801 | 346.348ms | 800000 | 30 | 2.10033e+07 | 1.91997e+06 | 2(Loss) |
| strtoll/strtoull | 206.87 | 0.132654 | 662.814ms | 800000 | 30 | 7.18038e+08 | 3.68801e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 514.052 | 0.0411284 | 0.305472ms | 800 | 30 | 11.1782 | 1484.17 | 1(Win) |
| std::from_chars | 487.086 | 0.055887 | 0.32051ms | 800 | 30 | 22.9885 | 1566.33 | 2(Loss) |
| strtoll/strtoull | 235.303 | 0.0273661 | 0.646329ms | 800 | 30 | 23.6195 | 3242.37 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.26 | 0.0149171 | 2.73884ms | 8000 | 30 | 142.461 | 14608.4 | 1(Win) |
| std::from_chars | 482.818 | 1.81366 | 2.90396ms | 8000 | 30 | 2.46404e+06 | 15801.8 | 2(Loss) |
| strtoll/strtoull | 233.721 | 0.867678 | 6.10477ms | 8000 | 30 | 2.4067e+06 | 32643.1 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 510.531 | 0.469303 | 26.951ms | 80000 | 30 | 1.47558e+07 | 149440 | 1(Win) |
| std::from_chars | 490.087 | 0.471404 | 28.1146ms | 80000 | 30 | 1.61563e+07 | 155674 | 2(Loss) |
| strtoll/strtoull | 233.8 | 0.243366 | 58.9009ms | 80000 | 30 | 1.89205e+07 | 326322 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 505.793 | 0.101539 | 271.919ms | 800000 | 30 | 7.03757e+07 | 1.5084e+06 | 1(Win) |
| std::from_chars | 488.485 | 0.12232 | 281.499ms | 800000 | 30 | 1.09496e+08 | 1.56185e+06 | 2(Loss) |
| strtoll/strtoull | 227.992 | 0.129057 | 593.383ms | 800000 | 30 | 5.5953e+08 | 3.34634e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 636.543 | 0.0766018 | 0.253414ms | 800 | 30 | 25.2885 | 1198.57 | 1(Win) |
| std::from_chars | 468.243 | 0.0545368 | 0.749973ms | 800 | 30 | 23.6885 | 1629.37 | 2(Loss) |
| strtoll/strtoull | 243.969 | 0.020014 | 0.616944ms | 800 | 30 | 11.7517 | 3127.2 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 645.836 | 0.0166427 | 2.20713ms | 8000 | 30 | 115.959 | 11813.2 | 1(Win) |
| std::from_chars | 492.197 | 0.038485 | 2.90467ms | 8000 | 30 | 1067.6 | 15500.7 | 2(Loss) |
| strtoll/strtoull | 247.075 | 0.905518 | 5.64586ms | 8000 | 30 | 2.34551e+06 | 30878.8 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 622.465 | 0.431334 | 22.2663ms | 80000 | 30 | 8.38492e+06 | 122567 | 1(Win) |
| std::from_chars | 480.849 | 0.844772 | 28.5328ms | 80000 | 30 | 5.38969e+07 | 158665 | 2(Loss) |
| strtoll/strtoull | 246.306 | 0.355766 | 55.8906ms | 80000 | 30 | 3.64317e+07 | 309752 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 613.05 | 0.123098 | 224.239ms | 800000 | 30 | 7.04058e+07 | 1.2445e+06 | 1(Win) |
| std::from_chars | 486.358 | 0.0905459 | 283.102ms | 800000 | 30 | 6.05238e+07 | 1.56868e+06 | 2(Loss) |
| strtoll/strtoull | 245.957 | 0.108545 | 558.037ms | 800000 | 30 | 3.40098e+08 | 3.10192e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 647.84 | 0.0904281 | 0.26204ms | 800 | 30 | 34.023 | 1177.67 | 1(Win) |
| std::from_chars | 435.65 | 0.0431961 | 0.831716ms | 800 | 30 | 17.1678 | 1751.27 | 2(Loss) |
| strtoll/strtoull | 189.681 | 0.0263243 | 0.799136ms | 800 | 30 | 33.6333 | 4022.23 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 668.36 | 0.0296835 | 2.16447ms | 8000 | 30 | 344.438 | 11415.1 | 1(Win) |
| std::from_chars | 428.104 | 1.41434 | 3.26524ms | 8000 | 30 | 1.90595e+06 | 17821.4 | 2(Loss) |
| strtoll/strtoull | 184.884 | 0.608826 | 7.54344ms | 8000 | 30 | 1.89361e+06 | 41265.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 592.222 | 0.386869 | 23.3672ms | 80000 | 30 | 7.45178e+06 | 128827 | 1(Win) |
| std::from_chars | 425.23 | 0.646509 | 32.231ms | 80000 | 30 | 4.03647e+07 | 179418 | 2(Loss) |
| strtoll/strtoull | 184.683 | 0.576075 | 74.0043ms | 80000 | 30 | 1.69906e+08 | 413108 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 528.743 | 0.0658001 | 260.432ms | 800000 | 30 | 2.70436e+07 | 1.44293e+06 | 1(Win) |
| std::from_chars | 427.346 | 0.168101 | 321.555ms | 800000 | 30 | 2.70199e+08 | 1.7853e+06 | 2(Loss) |
| strtoll/strtoull | 184.51 | 0.477321 | 741.294ms | 800000 | 30 | 1.16864e+10 | 4.13495e+06 | 3(Loss) |
