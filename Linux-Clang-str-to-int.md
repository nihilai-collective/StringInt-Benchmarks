# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 760.708 | 0.145548 | 0.035556ms | 100 | 30 | 0.998851 | 125.367 | 3.404 | 1(Win) |
| std::from_chars | 356.159 | 0.124936 | 0.062335ms | 100 | 30 | 3.35747 | 267.767 | 7.964 | 2(Loss) |
| strtoll/strtoull | 152.759 | 0.02785 | 0.12723ms | 100 | 30 | 0.906897 | 624.3 | 19.3187 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 843.96 | 0.0843287 | 0.234471ms | 1000 | 30 | 27.2414 | 1130 | 3.5297 | 1(Win) |
| std::from_chars | 399.445 | 0.289851 | 0.455508ms | 1000 | 30 | 1436.67 | 2387.5 | 7.5254 | 2(Loss) |
| strtoll/strtoull | 146.661 | 0.225221 | 1.29633ms | 1000 | 30 | 6434.39 | 6502.57 | 20.6669 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 262.472 | 2.01378 | 6.34886ms | 10000 | 30 | 1.60613e+07 | 36334.3 | 11.5696 | 1(Win) |
| std::from_chars | 164.382 | 0.335628 | 10.6239ms | 10000 | 30 | 1.13745e+06 | 58015.9 | 18.4775 | 2(Loss) |
| strtoll/strtoull | 91.4979 | 0.54654 | 18.592ms | 10000 | 30 | 9.73518e+06 | 104229 | 33.208 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 177.92 | 0.408116 | 96.0893ms | 100000 | 30 | 1.43562e+08 | 536013 | 17.0783 | 1(Win) |
| std::from_chars | 137.19 | 0.191401 | 125.664ms | 100000 | 30 | 5.31089e+07 | 695149 | 22.1526 | 2(Loss) |
| strtoll/strtoull | 92.2589 | 0.227398 | 500.844ms | 100000 | 30 | 1.6576e+08 | 1.03369e+06 | 32.9419 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 713.294 | 0.168776 | 0.049025ms | 100 | 30 | 1.52759 | 133.7 | 3.675 | 1(Win) |
| std::from_chars | 332.252 | 0.803619 | 0.139995ms | 100 | 30 | 159.62 | 287.033 | 8.591 | 2(Loss) |
| strtoll/strtoull | 150.858 | 0.0356415 | 0.126746ms | 100 | 30 | 1.52299 | 632.167 | 19.5853 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 860.846 | 0.0992678 | 0.213072ms | 1000 | 30 | 36.2816 | 1107.83 | 3.4663 | 1(Win) |
| std::from_chars | 396.621 | 0.391255 | 1.09145ms | 1000 | 30 | 2655.16 | 2404.5 | 7.57937 | 2(Loss) |
| strtoll/strtoull | 145.981 | 1.06952 | 1.23923ms | 1000 | 30 | 146455 | 6532.87 | 20.7469 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 842.007 | 0.026261 | 2.39322ms | 10000 | 30 | 265.407 | 11326.2 | 3.59834 | 1(Win) |
| std::from_chars | 259.933 | 0.791902 | 6.74158ms | 10000 | 30 | 2.53244e+06 | 36689.2 | 11.681 | 2(Loss) |
| strtoll/strtoull | 130.46 | 0.889545 | 13.195ms | 10000 | 30 | 1.26853e+07 | 73100.7 | 23.2884 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.957 | 0.621134 | 55.178ms | 100000 | 30 | 1.08169e+08 | 305707 | 9.74039 | 1(Win) |
| std::from_chars | 231.35 | 0.587531 | 74.0877ms | 100000 | 30 | 1.75973e+08 | 412222 | 13.1337 | 2(Loss) |
| strtoll/strtoull | 131.705 | 0.51314 | 132.52ms | 100000 | 30 | 4.1418e+08 | 724099 | 23.073 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 792.747 | 0.187576 | 0.034394ms | 100 | 30 | 1.52759 | 120.3 | 3.26733 | 1(Win) |
| std::from_chars | 409.419 | 0.0501387 | 0.054919ms | 100 | 30 | 0.409195 | 232.933 | 6.81933 | 2(Loss) |
| strtoll/strtoull | 148.818 | 0.231586 | 0.125918ms | 100 | 30 | 66.0747 | 640.833 | 19.8563 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 857.544 | 0.0617816 | 0.213186ms | 1000 | 30 | 14.1621 | 1112.1 | 3.48227 | 1(Win) |
| std::from_chars | 453.562 | 0.23198 | 0.904352ms | 1000 | 30 | 713.757 | 2102.63 | 6.61587 | 2(Loss) |
| strtoll/strtoull | 168.932 | 0.730324 | 1.02469ms | 1000 | 30 | 50994.9 | 5645.3 | 17.9342 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 854.44 | 0.321296 | 2.08102ms | 10000 | 30 | 38580.7 | 11161.4 | 3.54621 | 1(Win) |
| std::from_chars | 264.299 | 0.503377 | 6.58742ms | 10000 | 30 | 989726 | 36083.1 | 11.488 | 2(Loss) |
| strtoll/strtoull | 137.509 | 0.334747 | 12.6313ms | 10000 | 30 | 1.61695e+06 | 69353.8 | 22.0927 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 351.875 | 0.239949 | 49.5257ms | 100000 | 30 | 1.26877e+07 | 271027 | 8.63568 | 1(Win) |
| std::from_chars | 238.897 | 0.238798 | 71.8474ms | 100000 | 30 | 2.72623e+07 | 399199 | 12.7208 | 2(Loss) |
| strtoll/strtoull | 136.833 | 0.361712 | 125.329ms | 100000 | 30 | 1.90663e+08 | 696962 | 22.2096 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 725.044 | 0.284075 | 0.03664ms | 100 | 30 | 4.18851 | 131.533 | 3.60967 | 1(Win) |
| std::from_chars | 556.403 | 0.0599962 | 0.04424ms | 100 | 30 | 0.317241 | 171.4 | 4.89333 | 2(Loss) |
| strtoll/strtoull | 154.575 | 0.196521 | 0.124544ms | 100 | 30 | 44.1023 | 616.967 | 19.101 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 858.341 | 0.0572386 | 0.21335ms | 1000 | 30 | 12.1333 | 1111.07 | 3.48563 | 1(Win) |
| std::from_chars | 467.289 | 0.102289 | 0.390681ms | 1000 | 30 | 130.74 | 2040.87 | 6.4215 | 2(Loss) |
| strtoll/strtoull | 132.454 | 0.199646 | 1.32126ms | 1000 | 30 | 6198.86 | 7200.03 | 22.8851 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 684.946 | 0.0728081 | 14.7453ms | 10000 | 48 | 4932.74 | 13923.4 | 4.4261 | 1(Win) |
| std::from_chars | 249.945 | 0.155303 | 6.94763ms | 10000 | 30 | 105339 | 38155.4 | 12.1491 | 2(Loss) |
| strtoll/strtoull | 116.125 | 0.698318 | 15.0635ms | 10000 | 30 | 9.86682e+06 | 82124.9 | 26.1651 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 263.768 | 0.533235 | 66.3203ms | 100000 | 30 | 1.1151e+08 | 361558 | 11.5208 | 1(Win) |
| std::from_chars | 222.044 | 2.16975 | 75.5208ms | 100000 | 30 | 2.60532e+09 | 429498 | 13.6837 | 2(Loss) |
| strtoll/strtoull | 114.914 | 0.274062 | 149.217ms | 100000 | 30 | 1.55194e+08 | 829903 | 26.4466 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 794.508 | 0.189402 | 0.055416ms | 200 | 30 | 6.2023 | 240.067 | 3.502 | 1(Win) |
| std::from_chars | 630.737 | 0.0959211 | 0.068673ms | 200 | 30 | 2.52414 | 302.4 | 4.51367 | 2(Loss) |
| strtoll/strtoull | 235.99 | 0.0359297 | 0.155629ms | 200 | 30 | 2.52989 | 808.233 | 12.6003 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 863.431 | 0.053847 | 0.459019ms | 2000 | 30 | 42.4471 | 2209.03 | 3.47972 | 1(Win) |
| std::from_chars | 625.675 | 0.207864 | 0.686838ms | 2000 | 30 | 1204.6 | 3048.47 | 4.81652 | 2(Loss) |
| strtoll/strtoull | 207.197 | 0.154564 | 1.70234ms | 2000 | 30 | 6073.36 | 9205.47 | 14.6392 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 447.236 | 2.31787 | 8.05052ms | 20000 | 30 | 2.93147e+07 | 42647.4 | 6.78888 | 1(Win) |
| std::from_chars | 272.637 | 0.569464 | 12.7753ms | 20000 | 30 | 4.76151e+06 | 69959.3 | 11.1415 | 2(Loss) |
| strtoll/strtoull | 154.786 | 0.498749 | 22.2667ms | 20000 | 30 | 1.13313e+07 | 123225 | 19.6306 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 291.979 | 0.214942 | 287.612ms | 200000 | 30 | 5.91455e+07 | 653249 | 10.4086 | 1(Win) |
| std::from_chars | 230.118 | 0.425722 | 149.507ms | 200000 | 30 | 3.73536e+08 | 828856 | 13.2047 | 2(Loss) |
| strtoll/strtoull | 151.582 | 0.597178 | 270.156ms | 200000 | 30 | 1.69392e+09 | 1.25829e+06 | 20.0477 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 773.563 | 0.148963 | 0.055543ms | 200 | 30 | 4.04713 | 246.567 | 3.61683 | 1(Win) |
| std::from_chars | 609.377 | 0.0781084 | 0.069913ms | 200 | 30 | 1.7931 | 313 | 4.68017 | 2(Loss) |
| strtoll/strtoull | 215.943 | 0.25111 | 0.167858ms | 200 | 30 | 147.582 | 883.267 | 13.7973 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 866.714 | 0.0624777 | 0.955165ms | 2000 | 30 | 56.7126 | 2200.67 | 3.46167 | 1(Win) |
| std::from_chars | 484.197 | 0.543252 | 0.740034ms | 2000 | 30 | 13738.5 | 3939.2 | 6.23448 | 2(Loss) |
| strtoll/strtoull | 199.298 | 0.0965303 | 1.76405ms | 2000 | 30 | 2560.37 | 9570.33 | 15.2222 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 850.883 | 0.0271604 | 10.9144ms | 20000 | 30 | 1112.02 | 22416.1 | 3.56602 | 1(Win) |
| std::from_chars | 425.546 | 0.0608202 | 8.29515ms | 20000 | 30 | 22293.8 | 44821.2 | 7.13623 | 2(Loss) |
| strtoll/strtoull | 190.329 | 0.8159 | 17.9207ms | 20000 | 30 | 2.0056e+07 | 100213 | 15.9634 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 473.668 | 0.672102 | 72.7279ms | 200000 | 30 | 2.19737e+08 | 402676 | 6.41512 | 1(Win) |
| std::from_chars | 383.572 | 0.42281 | 88.9276ms | 200000 | 30 | 1.3261e+08 | 497259 | 7.92285 | 2(Loss) |
| strtoll/strtoull | 192.699 | 0.628046 | 177.09ms | 200000 | 30 | 1.15932e+09 | 989806 | 15.7697 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 780.208 | 0.163778 | 0.05693ms | 200 | 30 | 4.8092 | 244.467 | 3.56967 | 1(Win) |
| std::from_chars | 635.5 | 0.122429 | 0.072276ms | 200 | 30 | 4.05057 | 300.133 | 4.47617 | 2(Loss) |
| strtoll/strtoull | 216.334 | 0.0589063 | 0.171769ms | 200 | 30 | 8.09195 | 881.667 | 13.7702 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 852.434 | 0.0729735 | 0.418232ms | 2000 | 30 | 79.9816 | 2237.53 | 3.51923 | 1(Win) |
| std::from_chars | 479.201 | 0.451762 | 1.71847ms | 2000 | 30 | 9699.86 | 3980.27 | 6.30045 | 2(Loss) |
| strtoll/strtoull | 199.87 | 1.58914 | 1.76212ms | 2000 | 30 | 689941 | 9542.93 | 15.1745 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 669.82 | 2.21022 | 5.41553ms | 20000 | 30 | 1.18833e+07 | 28475.5 | 4.53131 | 1(Win) |
| std::from_chars | 399.715 | 1.02102 | 8.55638ms | 20000 | 30 | 7.12113e+06 | 47717.8 | 7.59745 | 2(Loss) |
| strtoll/strtoull | 196.048 | 1.3156 | 17.7462ms | 20000 | 30 | 4.91481e+07 | 97289.9 | 15.498 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 494.815 | 0.868569 | 69.9407ms | 200000 | 30 | 3.36282e+08 | 385467 | 6.14068 | 1(Win) |
| std::from_chars | 365.174 | 0.857704 | 93.7107ms | 200000 | 30 | 6.02084e+08 | 522312 | 8.31959 | 2(Loss) |
| strtoll/strtoull | 201.875 | 0.594323 | 168.506ms | 200000 | 30 | 9.4594e+08 | 944819 | 15.0516 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 755.984 | 0.0508149 | 0.057871ms | 200 | 30 | 0.493103 | 252.3 | 3.73083 | 1(Win) |
| vn::from_chars | 745.058 | 0.100859 | 0.057507ms | 200 | 30 | 2 | 256 | 3.75883 | 2(Loss) |
| strtoll/strtoull | 250.978 | 0.326517 | 0.154252ms | 200 | 30 | 184.723 | 759.967 | 11.8397 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 845.306 | 0.080455 | 0.420872ms | 2000 | 30 | 98.869 | 2256.4 | 3.56038 | 1(Win) |
| std::from_chars | 636.051 | 0.314046 | 0.564664ms | 2000 | 30 | 2660.62 | 2998.73 | 4.73757 | 2(Loss) |
| strtoll/strtoull | 221.967 | 0.18604 | 1.55548ms | 2000 | 30 | 7666.82 | 8592.93 | 13.6606 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 820.611 | 0.268955 | 4.34133ms | 20000 | 30 | 117237 | 23243 | 3.69784 | 1(Win) |
| std::from_chars | 548.768 | 0.341982 | 6.21353ms | 20000 | 30 | 423848 | 34756.9 | 5.53282 | 2(Loss) |
| strtoll/strtoull | 208.484 | 2.19244 | 16.0293ms | 20000 | 30 | 1.20696e+08 | 91486.7 | 14.5697 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 623.509 | 0.530834 | 55.415ms | 200000 | 30 | 7.91068e+07 | 305906 | 4.8719 | 1(Win) |
| std::from_chars | 566.614 | 0.700678 | 110.647ms | 200000 | 30 | 1.66895e+08 | 336622 | 5.36162 | 2(Loss) |
| strtoll/strtoull | 212.159 | 0.463653 | 161.111ms | 200000 | 30 | 5.2125e+08 | 899020 | 14.3238 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 859.941 | 0.106231 | 0.093812ms | 400 | 30 | 6.66207 | 443.6 | 3.35033 | 1(Win) |
| std::from_chars | 663.426 | 0.0372909 | 0.122268ms | 400 | 30 | 1.37931 | 575 | 4.4255 | 2(Loss) |
| strtoll/strtoull | 359.798 | 0.141401 | 0.204928ms | 400 | 30 | 67.4264 | 1060.23 | 8.29608 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 895.427 | 0.0422515 | 1.84421ms | 4000 | 30 | 97.2 | 4260.2 | 3.36905 | 1(Win) |
| std::from_chars | 608.466 | 0.0501056 | 1.20902ms | 4000 | 30 | 296.033 | 6269.37 | 4.97293 | 2(Loss) |
| strtoll/strtoull | 293.039 | 0.640408 | 2.33877ms | 4000 | 30 | 208498 | 13017.7 | 10.3571 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 595.786 | 1.21412 | 11.6865ms | 40000 | 30 | 1.81293e+07 | 64027.9 | 5.09836 | 1(Win) |
| std::from_chars | 374.969 | 0.660653 | 18.4488ms | 40000 | 30 | 1.35518e+07 | 101734 | 8.10242 | 2(Loss) |
| strtoll/strtoull | 242.648 | 1.15451 | 27.8378ms | 40000 | 30 | 9.88296e+07 | 157211 | 12.5231 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 429.971 | 0.329242 | 160.781ms | 400000 | 30 | 2.55973e+08 | 887199 | 7.06621 | 1(Win) |
| std::from_chars | 336.419 | 0.391175 | 209.239ms | 400000 | 30 | 5.90232e+08 | 1.13391e+06 | 9.03249 | 2(Loss) |
| strtoll/strtoull | 240.336 | 1.05804 | 288.497ms | 400000 | 30 | 8.46066e+09 | 1.58723e+06 | 12.6436 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 917.215 | 0.10836 | 0.08733ms | 400 | 30 | 6.0931 | 415.9 | 3.142 | 1(Win) |
| std::from_chars | 677.085 | 0.0810033 | 0.113212ms | 400 | 30 | 6.24828 | 563.4 | 4.32492 | 2(Loss) |
| strtoll/strtoull | 289.753 | 0.346106 | 0.247549ms | 400 | 30 | 622.878 | 1316.53 | 10.3468 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 936.474 | 0.0437367 | 0.770633ms | 4000 | 30 | 95.223 | 4073.47 | 3.22438 | 1(Win) |
| std::from_chars | 610.208 | 0.0577707 | 1.2135ms | 4000 | 30 | 391.292 | 6251.47 | 4.95882 | 2(Loss) |
| strtoll/strtoull | 315.041 | 0.144368 | 2.38876ms | 4000 | 30 | 9167.5 | 12108.6 | 9.63386 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 768.879 | 0.670315 | 9.25575ms | 40000 | 30 | 3.31805e+06 | 49613.7 | 3.94992 | 1(Win) |
| std::from_chars | 466.362 | 0.8438 | 14.5847ms | 40000 | 30 | 1.42913e+07 | 81796.9 | 6.51371 | 2(Loss) |
| strtoll/strtoull | 288.842 | 1.8696 | 23.7314ms | 40000 | 30 | 1.82902e+08 | 132069 | 10.52 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 589.534 | 0.148819 | 116.53ms | 400000 | 30 | 2.78187e+07 | 647070 | 5.15481 | 1(Win) |
| std::from_chars | 456.223 | 0.396269 | 151.182ms | 400000 | 30 | 3.29357e+08 | 836147 | 6.66113 | 2(Loss) |
| strtoll/strtoull | 275.175 | 0.932836 | 244.76ms | 400000 | 30 | 5.01688e+09 | 1.38628e+06 | 11.0444 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 845.081 | 0.0947655 | 0.092931ms | 400 | 30 | 5.48966 | 451.4 | 3.42225 | 1(Win) |
| std::from_chars | 650.491 | 0.0488393 | 0.118386ms | 400 | 30 | 2.46092 | 586.433 | 4.50208 | 2(Loss) |
| strtoll/strtoull | 327.892 | 0.265094 | 0.222204ms | 400 | 30 | 285.352 | 1163.4 | 9.10975 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 886.823 | 0.0414628 | 0.787349ms | 4000 | 30 | 95.4299 | 4301.53 | 3.40657 | 1(Win) |
| std::from_chars | 623.218 | 0.0482516 | 2.72127ms | 4000 | 30 | 261.689 | 6120.97 | 4.85592 | 2(Loss) |
| strtoll/strtoull | 315.006 | 2.27749 | 2.33103ms | 4000 | 30 | 2.282e+06 | 12109.9 | 9.6259 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 820.76 | 0.607082 | 8.80435ms | 40000 | 30 | 2.38838e+06 | 46477.6 | 3.69985 | 1(Win) |
| std::from_chars | 474.68 | 1.64461 | 14.7501ms | 40000 | 30 | 5.24041e+07 | 80363.5 | 6.39934 | 2(Loss) |
| strtoll/strtoull | 295.372 | 1.6514 | 23.4246ms | 40000 | 30 | 1.36461e+08 | 129149 | 10.2878 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 587.671 | 2.00462 | 118.339ms | 400000 | 30 | 5.07968e+09 | 649121 | 5.17086 | 1(Win) |
| std::from_chars | 443.354 | 1.30068 | 155.017ms | 400000 | 30 | 3.75736e+09 | 860418 | 6.85312 | 2(Loss) |
| strtoll/strtoull | 276.615 | 1.4296 | 246.606ms | 400000 | 30 | 1.16606e+10 | 1.37906e+06 | 10.9867 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 855.377 | 0.0553273 | 0.094606ms | 400 | 30 | 1.82644 | 445.967 | 3.39008 | 1(Win) |
| vn::from_chars | 830.365 | 0.0982384 | 0.094492ms | 400 | 30 | 6.11034 | 459.4 | 3.4835 | 2(Loss) |
| strtoll/strtoull | 303.163 | 0.324179 | 0.23911ms | 400 | 30 | 499.183 | 1258.3 | 9.88742 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 861.76 | 1.11992 | 0.798291ms | 4000 | 30 | 73729.3 | 4426.63 | 3.50502 | 1(Win) |
| std::from_chars | 651.925 | 0.233153 | 1.42076ms | 4000 | 30 | 5583.77 | 5851.43 | 4.64024 | 2(Loss) |
| strtoll/strtoull | 320.028 | 1.48849 | 5.48323ms | 4000 | 30 | 944409 | 11919.9 | 9.48115 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 798.406 | 1.59521 | 8.28281ms | 40000 | 30 | 1.74274e+07 | 47778.9 | 3.7999 | 1(Win) |
| std::from_chars | 612.158 | 0.346709 | 11.3262ms | 40000 | 30 | 1.40038e+06 | 62315.6 | 4.96201 | 2(Loss) |
| strtoll/strtoull | 306.879 | 0.637529 | 23.1362ms | 40000 | 30 | 1.88411e+07 | 124306 | 9.90154 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 707.99 | 1.10805 | 96.2181ms | 400000 | 30 | 1.06932e+09 | 538807 | 4.29101 | 1(Win) |
| std::from_chars | 599.452 | 0.487429 | 113.394ms | 400000 | 30 | 2.88639e+08 | 636364 | 5.06799 | 2(Loss) |
| strtoll/strtoull | 304.733 | 0.393694 | 227.917ms | 400000 | 30 | 7.28649e+08 | 1.25181e+06 | 9.97209 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 990.702 | 0.0793294 | 0.157946ms | 800 | 30 | 11.1966 | 770.1 | 2.96904 | 1(Win) |
| std::from_chars | 654.659 | 0.0480846 | 0.222268ms | 800 | 30 | 9.42069 | 1165.4 | 4.55887 | 2(Loss) |
| strtoll/strtoull | 341.238 | 0.208008 | 0.448552ms | 800 | 30 | 648.855 | 2235.8 | 8.83238 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1040.87 | 0.035135 | 1.34108ms | 8000 | 30 | 198.971 | 7329.83 | 2.90751 | 1(Win) |
| std::from_chars | 638.849 | 0.0481702 | 2.19792ms | 8000 | 30 | 992.8 | 11942.4 | 4.7467 | 2(Loss) |
| strtoll/strtoull | 371.534 | 2.19958 | 3.79883ms | 8000 | 30 | 6.12047e+06 | 20534.8 | 8.17102 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 821.038 | 0.555754 | 16.8137ms | 80000 | 30 | 8.00093e+06 | 92923.7 | 3.70003 | 1(Win) |
| std::from_chars | 617.494 | 1.05484 | 22.2301ms | 80000 | 30 | 5.09579e+07 | 123554 | 4.91998 | 2(Loss) |
| strtoll/strtoull | 394.035 | 1.48364 | 35.4654ms | 80000 | 30 | 2.47566e+08 | 193622 | 7.71203 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 695.35 | 2.40433 | 193.122ms | 800000 | 30 | 2.08778e+10 | 1.0972e+06 | 4.36836 | 1(Win) |
| std::from_chars | 607.621 | 0.867587 | 230.081ms | 800000 | 30 | 3.5601e+09 | 1.25562e+06 | 5.00096 | 2(Loss) |
| strtoll/strtoull | 383.335 | 1.18798 | 407.492ms | 800000 | 30 | 1.67712e+10 | 1.99027e+06 | 7.92714 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1001.76 | 0.0443373 | 0.148059ms | 800 | 30 | 3.42069 | 761.6 | 2.93929 | 1(Win) |
| std::from_chars | 780.314 | 0.117173 | 0.186993ms | 800 | 30 | 39.3747 | 977.733 | 3.82454 | 2(Loss) |
| strtoll/strtoull | 448.059 | 1.56822 | 0.391583ms | 800 | 30 | 21391.8 | 1702.77 | 6.70658 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1018.19 | 0.0313535 | 3.19364ms | 8000 | 30 | 165.582 | 7493.07 | 2.97313 | 1(Win) |
| std::from_chars | 620.667 | 1.81125 | 10.5502ms | 8000 | 48 | 2.37936e+06 | 12292.2 | 4.88567 | 2(Loss) |
| strtoll/strtoull | 387.702 | 1.91254 | 8.23467ms | 8000 | 30 | 4.24939e+06 | 19678.5 | 7.83046 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 779.61 | 0.375964 | 17.9471ms | 80000 | 30 | 4.06107e+06 | 97861.7 | 3.89695 | 1(Win) |
| vn::from_chars | 672.58 | 1.27238 | 16.5245ms | 80000 | 30 | 6.24949e+07 | 113435 | 4.51192 | 2(Loss) |
| strtoll/strtoull | 338.038 | 1.32068 | 39.9765ms | 80000 | 30 | 2.66542e+08 | 225696 | 8.98979 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 943.375 | 2.26366 | 192.933ms | 800000 | 30 | 1.00544e+10 | 808734 | 3.22068 | 1(Win) |
| std::from_chars | 776.169 | 0.581459 | 180.857ms | 800000 | 30 | 9.8e+08 | 982955 | 3.91466 | 2(Loss) |
| strtoll/strtoull | 341.376 | 0.945985 | 1005.63ms | 800000 | 30 | 1.34092e+10 | 2.23489e+06 | 8.90183 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1002.72 | 0.0798914 | 0.149176ms | 800 | 30 | 11.0851 | 760.867 | 2.93317 | 1(Win) |
| std::from_chars | 767.57 | 0.0860849 | 0.207221ms | 800 | 30 | 21.9644 | 993.967 | 3.88804 | 2(Loss) |
| strtoll/strtoull | 376.172 | 0.0722124 | 0.902867ms | 800 | 30 | 64.3506 | 2028.17 | 7.99979 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1008.16 | 1.55334 | 1.37761ms | 8000 | 30 | 414546 | 7567.63 | 3.00354 | 1(Win) |
| std::from_chars | 666.389 | 0.913547 | 2.04255ms | 8000 | 30 | 328177 | 11448.9 | 4.55034 | 2(Loss) |
| strtoll/strtoull | 374.458 | 0.247472 | 3.69764ms | 8000 | 30 | 76268.7 | 20374.5 | 8.10496 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 837.209 | 0.537857 | 16.4406ms | 80000 | 30 | 7.20721e+06 | 91128.9 | 3.62827 | 1(Win) |
| std::from_chars | 760.505 | 0.534224 | 17.849ms | 80000 | 30 | 8.61675e+06 | 100320 | 3.99455 | 2(Loss) |
| strtoll/strtoull | 469.273 | 2.4556 | 30.1217ms | 80000 | 30 | 4.7815e+08 | 162579 | 6.47481 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 805.33 | 0.394267 | 170.781ms | 800000 | 30 | 4.18537e+08 | 947362 | 3.77218 | 1(Win) |
| std::from_chars | 779.98 | 0.145847 | 176.052ms | 800000 | 30 | 6.10565e+07 | 978152 | 3.89588 | 2(Loss) |
| strtoll/strtoull | 496.123 | 1.44376 | 699.047ms | 800000 | 30 | 1.47881e+10 | 1.5378e+06 | 6.12499 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 997.828 | 0.0523149 | 0.153406ms | 800 | 30 | 4.8 | 764.6 | 2.94717 | 1(Win) |
| std::from_chars | 742.039 | 0.122856 | 0.198063ms | 800 | 30 | 47.8678 | 1028.17 | 4.01067 | 2(Loss) |
| strtoll/strtoull | 354.021 | 0.0800296 | 0.399886ms | 800 | 30 | 89.2368 | 2155.07 | 8.51617 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1008.55 | 0.03494 | 1.37633ms | 8000 | 30 | 209.582 | 7564.73 | 3.00079 | 1(Win) |
| std::from_chars | 668.395 | 1.8151 | 2.05056ms | 8000 | 30 | 1.28777e+06 | 11414.5 | 4.53586 | 2(Loss) |
| strtoll/strtoull | 342.866 | 0.224609 | 4.03001ms | 8000 | 30 | 74938.6 | 22251.8 | 8.85603 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 953.424 | 0.341071 | 135.842ms | 80000 | 30 | 2.23469e+06 | 80021 | 3.18599 | 1(Win) |
| std::from_chars | 611.687 | 0.245872 | 22.5152ms | 80000 | 30 | 2.82138e+06 | 124727 | 4.96724 | 2(Loss) |
| strtoll/strtoull | 334.924 | 1.19157 | 40.6345ms | 80000 | 30 | 2.21027e+08 | 227795 | 9.07167 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 805.864 | 0.178162 | 222.338ms | 800000 | 30 | 8.53508e+07 | 946734 | 3.7711 | 1(Win) |
| std::from_chars | 609.174 | 0.414359 | 226.576ms | 800000 | 30 | 8.07926e+08 | 1.25242e+06 | 4.98747 | 2(Loss) |
| strtoll/strtoull | 343.579 | 0.134406 | 401.061ms | 800000 | 30 | 2.67228e+08 | 2.22056e+06 | 8.84548 | 3(Loss) |
