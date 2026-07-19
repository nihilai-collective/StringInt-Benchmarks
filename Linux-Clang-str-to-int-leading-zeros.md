# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 148.009 | 0.28172 | 0.13518ms | 100 | 30 | 98.8506 | 644.333 | 15.7733 | 1(Win) |
| std::from_chars | 58.4921 | 0.0455272 | 0.736911ms | 100 | 30 | 16.5299 | 1630.43 | 41.314 | 2(Loss) |
| strtoll/strtoull | 36.0022 | 0.0346246 | 0.495043ms | 100 | 30 | 25.2368 | 2648.93 | 67.7127 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 157.667 | 0.0451779 | 1.15997ms | 1000 | 30 | 224.023 | 6048.67 | 15.6069 | 1(Win) |
| std::from_chars | 60.704 | 0.0150094 | 2.89824ms | 1000 | 30 | 166.806 | 15710.2 | 40.6891 | 2(Loss) |
| strtoll/strtoull | 36.0691 | 1.79442 | 4.74357ms | 1000 | 30 | 6.75303e+06 | 26440.2 | 68.5447 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 126.651 | 0.496981 | 14.4741ms | 10000 | 30 | 4.20126e+06 | 75299.1 | 19.5374 | 1(Win) |
| std::from_chars | 42.8699 | 0.278356 | 40.232ms | 10000 | 30 | 1.15032e+07 | 222458 | 57.739 | 2(Loss) |
| strtoll/strtoull | 24.6453 | 0.174863 | 69.7014ms | 10000 | 30 | 1.37356e+07 | 386960 | 100.446 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 39.5846 | 0.174404 | 432.823ms | 100000 | 30 | 5.29638e+08 | 2.4092e+06 | 62.5413 | 1(Win) |
| std::from_chars | 39.0997 | 0.118183 | 439.766ms | 100000 | 30 | 2.49279e+08 | 2.43909e+06 | 63.3165 | 2(Loss) |
| strtoll/strtoull | 23.8453 | 0.0763602 | 720.315ms | 100000 | 30 | 2.79802e+08 | 3.99942e+06 | 103.827 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 145.525 | 0.140415 | 0.136132ms | 100 | 30 | 25.4023 | 655.333 | 16.0507 | 1(Win) |
| std::from_chars | 62.9391 | 0.0563104 | 0.288457ms | 100 | 30 | 21.8402 | 1515.23 | 38.402 | 2(Loss) |
| strtoll/strtoull | 36.9231 | 0.0213867 | 0.480882ms | 100 | 30 | 9.15402 | 2582.87 | 66.0833 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 151.416 | 0.0371337 | 1.1949ms | 1000 | 30 | 164.102 | 6298.37 | 16.2569 | 1(Win) |
| std::from_chars | 58.3301 | 0.00651532 | 2.9166ms | 1000 | 30 | 34.0414 | 16349.6 | 42.3462 | 2(Loss) |
| strtoll/strtoull | 35.781 | 0.995932 | 4.84834ms | 1000 | 30 | 2.11386e+06 | 26653.1 | 69.0959 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 119.953 | 0.518007 | 14.9943ms | 10000 | 30 | 5.0883e+06 | 79504.3 | 20.6296 | 1(Win) |
| std::from_chars | 48.5653 | 0.280346 | 35.4957ms | 10000 | 30 | 9.09195e+06 | 196369 | 50.9671 | 2(Loss) |
| strtoll/strtoull | 27.5463 | 0.196957 | 62.4353ms | 10000 | 30 | 1.39489e+07 | 346207 | 89.8665 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 46.6272 | 0.171222 | 367.514ms | 100000 | 30 | 3.67926e+08 | 2.04532e+06 | 53.0955 | 1(Win) |
| vn::from_chars | 45.7052 | 0.0658458 | 375.801ms | 100000 | 30 | 5.66299e+07 | 2.08658e+06 | 54.1664 | 2(Loss) |
| strtoll/strtoull | 26.4992 | 0.159947 | 648.525ms | 100000 | 30 | 9.94047e+08 | 3.59887e+06 | 93.4271 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 159.682 | 0.152043 | 0.125997ms | 100 | 30 | 24.7368 | 597.233 | 14.56 | 1(Win) |
| std::from_chars | 61.3835 | 0.0395793 | 0.295778ms | 100 | 30 | 11.3437 | 1553.63 | 39.338 | 2(Loss) |
| strtoll/strtoull | 37.9743 | 0.0319741 | 0.468103ms | 100 | 30 | 19.3437 | 2511.37 | 64.2287 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 164.116 | 0.0401468 | 1.14038ms | 1000 | 30 | 163.275 | 5810.97 | 14.9907 | 1(Win) |
| std::from_chars | 59.4567 | 1.59421 | 2.90613ms | 1000 | 30 | 1.9616e+06 | 16039.8 | 41.5445 | 2(Loss) |
| strtoll/strtoull | 36.7702 | 1.78581 | 4.68099ms | 1000 | 30 | 6.43579e+06 | 25936.1 | 67.2395 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 128.87 | 0.49487 | 13.9357ms | 10000 | 30 | 4.02343e+06 | 74002.6 | 19.2017 | 1(Win) |
| std::from_chars | 47.3217 | 0.596555 | 37.3853ms | 10000 | 30 | 4.33611e+07 | 201530 | 52.3056 | 2(Loss) |
| strtoll/strtoull | 27.422 | 0.357965 | 62.0835ms | 10000 | 30 | 4.64948e+07 | 347777 | 90.2726 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 47.1489 | 0.117592 | 364.746ms | 100000 | 30 | 1.6972e+08 | 2.02269e+06 | 52.508 | 1(Win) |
| vn::from_chars | 46.6047 | 0.0682464 | 367.801ms | 100000 | 30 | 5.85088e+07 | 2.0463e+06 | 53.1209 | 2(Loss) |
| strtoll/strtoull | 27.7362 | 0.0799766 | 620.675ms | 100000 | 30 | 2.26857e+08 | 3.43837e+06 | 89.2599 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 137.549 | 0.16486 | 0.143042ms | 100 | 30 | 39.1954 | 693.333 | 16.952 | 1(Win) |
| std::from_chars | 63.4697 | 0.0222644 | 0.286434ms | 100 | 30 | 3.35747 | 1502.57 | 38.0553 | 2(Loss) |
| strtoll/strtoull | 30.8906 | 0.0259377 | 0.637124ms | 100 | 30 | 19.2368 | 3087.27 | 79.222 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 150.287 | 0.0482748 | 1.23059ms | 1000 | 30 | 281.528 | 6345.7 | 16.3731 | 1(Win) |
| std::from_chars | 66.8568 | 0.0161714 | 2.64764ms | 1000 | 30 | 159.633 | 14264.4 | 36.9373 | 2(Loss) |
| strtoll/strtoull | 30.7317 | 0.887371 | 5.67494ms | 1000 | 30 | 2.27488e+06 | 31032.3 | 80.4665 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 123.189 | 0.541002 | 15.2231ms | 10000 | 30 | 5.2623e+06 | 77415.6 | 20.0873 | 1(Win) |
| std::from_chars | 45.9967 | 0.275457 | 37.4952ms | 10000 | 30 | 9.78533e+06 | 207335 | 53.8144 | 2(Loss) |
| strtoll/strtoull | 24.4754 | 1.16255 | 69.6508ms | 10000 | 30 | 6.15579e+08 | 389646 | 101.141 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 44.5971 | 0.0548049 | 385.434ms | 100000 | 30 | 4.12048e+07 | 2.13842e+06 | 55.5128 | 1(Win) |
| std::from_chars | 44.3433 | 0.125451 | 388.572ms | 100000 | 30 | 2.18382e+08 | 2.15066e+06 | 55.8295 | 2(Loss) |
| strtoll/strtoull | 24.0803 | 0.0399714 | 713.721ms | 100000 | 30 | 7.51791e+07 | 3.9604e+06 | 102.81 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.024 | 0.0459806 | 0.205003ms | 200 | 30 | 6.74023 | 1030.87 | 12.8917 | 1(Win) |
| std::from_chars | 99.3997 | 0.048434 | 0.372922ms | 200 | 30 | 25.9126 | 1918.87 | 24.4053 | 2(Loss) |
| strtoll/strtoull | 64.428 | 0.0305444 | 1.31289ms | 200 | 30 | 24.5299 | 2960.43 | 37.9037 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 190.407 | 0.0223308 | 1.86144ms | 2000 | 30 | 150.116 | 10017.2 | 12.9519 | 1(Win) |
| std::from_chars | 102.561 | 0.0182061 | 3.41925ms | 2000 | 30 | 343.913 | 18597.1 | 24.0929 | 2(Loss) |
| strtoll/strtoull | 64.2906 | 1.3661 | 5.42704ms | 2000 | 30 | 4.9278e+06 | 29667.6 | 38.4601 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 186.589 | 0.423729 | 19.4302ms | 20000 | 30 | 5.62841e+06 | 102222 | 13.2645 | 1(Win) |
| std::from_chars | 74.6974 | 0.25329 | 46.0047ms | 20000 | 30 | 1.25489e+07 | 255343 | 33.1394 | 2(Loss) |
| strtoll/strtoull | 44.3975 | 0.200917 | 76.9673ms | 20000 | 30 | 2.23509e+07 | 429607 | 55.7591 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 79.0158 | 0.0563908 | 434.03ms | 200000 | 30 | 5.55865e+07 | 2.41388e+06 | 31.3329 | 1(Win) |
| std::from_chars | 67.0178 | 0.0869588 | 511.024ms | 200000 | 30 | 1.8375e+08 | 2.84603e+06 | 36.9405 | 2(Loss) |
| strtoll/strtoull | 44.0108 | 0.0573405 | 783.412ms | 200000 | 30 | 1.85262e+08 | 4.33382e+06 | 56.2527 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 176.726 | 0.0735274 | 0.496806ms | 200 | 30 | 18.892 | 1079.27 | 13.4767 | 1(Win) |
| std::from_chars | 92.1083 | 0.0378113 | 0.411189ms | 200 | 30 | 18.392 | 2070.77 | 26.403 | 2(Loss) |
| strtoll/strtoull | 59.1836 | 0.0229846 | 0.616963ms | 200 | 30 | 16.4609 | 3222.77 | 41.327 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 190.319 | 0.0427163 | 4.29909ms | 2000 | 30 | 549.799 | 10021.8 | 12.961 | 1(Win) |
| std::from_chars | 100.916 | 1.32602 | 3.42914ms | 2000 | 30 | 1.88434e+06 | 18900.4 | 24.4842 | 2(Loss) |
| strtoll/strtoull | 61.3649 | 0.84504 | 5.63999ms | 2000 | 30 | 2.06965e+06 | 31082.1 | 40.2944 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 174.377 | 0.867242 | 19.9244ms | 20000 | 30 | 2.69951e+07 | 109381 | 14.1912 | 1(Win) |
| std::from_chars | 83.2529 | 0.29262 | 40.9878ms | 20000 | 30 | 1.34831e+07 | 229103 | 29.7329 | 2(Loss) |
| strtoll/strtoull | 49.647 | 0.191343 | 69.3684ms | 20000 | 30 | 1.62113e+07 | 384182 | 49.8628 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 94.2328 | 0.111284 | 364.11ms | 200000 | 30 | 1.52209e+08 | 2.02408e+06 | 26.2719 | 1(Win) |
| std::from_chars | 79.6319 | 0.161124 | 428.973ms | 200000 | 30 | 4.46816e+08 | 2.39521e+06 | 31.0886 | 2(Loss) |
| strtoll/strtoull | 46.3613 | 2.06037 | 711.359ms | 200000 | 30 | 2.15557e+11 | 4.1141e+06 | 53.3995 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 186.295 | 0.0779527 | 0.202329ms | 200 | 30 | 19.1092 | 1023.83 | 12.8137 | 1(Win) |
| std::from_chars | 100.982 | 0.0480566 | 0.356387ms | 200 | 30 | 24.7172 | 1888.8 | 23.9937 | 2(Loss) |
| strtoll/strtoull | 66.5455 | 0.0269047 | 0.53406ms | 200 | 30 | 17.8402 | 2866.23 | 36.7077 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 193.543 | 0.0216836 | 1.84856ms | 2000 | 30 | 136.99 | 9854.9 | 12.7426 | 1(Win) |
| std::from_chars | 99.7569 | 1.39223 | 3.44178ms | 2000 | 30 | 2.12578e+06 | 19120 | 24.7672 | 2(Loss) |
| strtoll/strtoull | 62.8599 | 0.828829 | 5.52266ms | 2000 | 30 | 1.89742e+06 | 30342.9 | 39.3428 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 189.659 | 0.422572 | 18.721ms | 20000 | 30 | 5.41795e+06 | 100567 | 13.0491 | 1(Win) |
| std::from_chars | 84.503 | 0.418158 | 40.3147ms | 20000 | 30 | 2.6725e+07 | 225714 | 29.2913 | 2(Loss) |
| strtoll/strtoull | 48.6391 | 0.191498 | 69.0763ms | 20000 | 30 | 1.69177e+07 | 392143 | 50.8959 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 90.6096 | 0.0973726 | 377.693ms | 200000 | 30 | 1.2604e+08 | 2.10502e+06 | 27.3228 | 1(Win) |
| std::from_chars | 80.9861 | 0.11901 | 423.829ms | 200000 | 30 | 2.35682e+08 | 2.35516e+06 | 30.5695 | 2(Loss) |
| strtoll/strtoull | 50.2348 | 0.155113 | 693.322ms | 200000 | 30 | 1.04056e+09 | 3.79687e+06 | 49.2834 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 181.089 | 0.129711 | 0.207768ms | 200 | 30 | 55.9954 | 1053.27 | 13.156 | 1(Win) |
| std::from_chars | 107.64 | 0.0269883 | 0.335246ms | 200 | 30 | 6.86092 | 1771.97 | 22.5247 | 2(Loss) |
| strtoll/strtoull | 54.5133 | 0.0259546 | 1.90913ms | 200 | 30 | 24.7402 | 3498.87 | 44.928 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 188.281 | 0.0309396 | 1.9039ms | 2000 | 30 | 294.713 | 10130.3 | 13.1014 | 1(Win) |
| std::from_chars | 106.249 | 1.76073 | 3.21227ms | 2000 | 30 | 2.99718e+06 | 17951.6 | 23.257 | 2(Loss) |
| strtoll/strtoull | 52.3826 | 0.739931 | 6.62155ms | 2000 | 30 | 2.17766e+06 | 36411.9 | 47.2186 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 180.976 | 0.533256 | 19.3002ms | 20000 | 30 | 9.47568e+06 | 105392 | 13.6751 | 1(Win) |
| std::from_chars | 81.0881 | 0.287736 | 44.3212ms | 20000 | 30 | 1.37422e+07 | 235219 | 30.5268 | 2(Loss) |
| strtoll/strtoull | 44.4118 | 0.154723 | 77.5034ms | 20000 | 30 | 1.32463e+07 | 429469 | 55.7412 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 94.1327 | 0.188095 | 363.056ms | 200000 | 30 | 4.35766e+08 | 2.02623e+06 | 26.3004 | 1(Win) |
| std::from_chars | 82.6507 | 0.197322 | 416.18ms | 200000 | 30 | 6.22068e+08 | 2.30772e+06 | 29.9535 | 2(Loss) |
| strtoll/strtoull | 44.0243 | 0.156576 | 791.484ms | 200000 | 30 | 1.38053e+09 | 4.33249e+06 | 56.2321 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 254.053 | 0.030248 | 0.287125ms | 400 | 30 | 6.18851 | 1501.53 | 9.50733 | 1(Win) |
| std::from_chars | 153.734 | 0.0311856 | 0.505728ms | 400 | 30 | 17.9644 | 2481.37 | 15.8643 | 2(Loss) |
| strtoll/strtoull | 105.095 | 0.0252598 | 0.670151ms | 400 | 30 | 25.2195 | 3629.77 | 23.3328 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 245.118 | 1.95531 | 2.82204ms | 4000 | 30 | 2.77793e+06 | 15562.7 | 10.0767 | 1(Win) |
| std::from_chars | 150.31 | 1.92115 | 4.5532ms | 4000 | 30 | 7.13162e+06 | 25378.9 | 16.447 | 2(Loss) |
| strtoll/strtoull | 104.414 | 0.644693 | 6.63291ms | 4000 | 30 | 1.6643e+06 | 36534.4 | 23.6856 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 252.679 | 0.318704 | 27.6998ms | 40000 | 30 | 6.94514e+06 | 150970 | 9.79554 | 1(Win) |
| std::from_chars | 121.582 | 0.280362 | 56.5608ms | 40000 | 30 | 2.32136e+07 | 313755 | 20.3603 | 2(Loss) |
| strtoll/strtoull | 75.6688 | 0.156674 | 90.763ms | 40000 | 30 | 1.87155e+07 | 504131 | 32.716 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.599 | 0.652014 | 482.418ms | 400000 | 30 | 9.25625e+09 | 2.69402e+06 | 17.4839 | 1(Win) |
| std::from_chars | 110.635 | 0.166646 | 1458.87ms | 400000 | 30 | 9.90488e+08 | 3.44801e+06 | 22.3775 | 2(Loss) |
| strtoll/strtoull | 74.5699 | 0.077601 | 915.678ms | 400000 | 30 | 4.72769e+08 | 5.1156e+06 | 33.2003 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 265.389 | 0.0653307 | 0.296328ms | 400 | 30 | 26.4552 | 1437.4 | 9.09783 | 1(Win) |
| std::from_chars | 157.141 | 0.0372491 | 0.451778ms | 400 | 30 | 24.5299 | 2427.57 | 15.509 | 2(Loss) |
| strtoll/strtoull | 105.641 | 0.0253673 | 0.683281ms | 400 | 30 | 25.1724 | 3611 | 23.1747 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 266.611 | 0.0313194 | 2.63355ms | 4000 | 30 | 602.438 | 14308.1 | 9.26337 | 1(Win) |
| std::from_chars | 148.809 | 1.74455 | 4.59899ms | 4000 | 30 | 6.00001e+06 | 25634.9 | 16.6147 | 2(Loss) |
| strtoll/strtoull | 92.4833 | 0.830984 | 7.45026ms | 4000 | 30 | 3.52452e+06 | 41247.4 | 26.7464 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 260.696 | 0.387797 | 26.81ms | 40000 | 30 | 9.66012e+06 | 146328 | 9.49414 | 1(Win) |
| std::from_chars | 135.911 | 0.264803 | 51.2643ms | 40000 | 30 | 1.65721e+07 | 280676 | 18.2133 | 2(Loss) |
| strtoll/strtoull | 83.591 | 0.153852 | 82.7933ms | 40000 | 30 | 1.47887e+07 | 456353 | 29.615 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 166.396 | 0.110608 | 414.091ms | 400000 | 30 | 1.92898e+08 | 2.29254e+06 | 14.8785 | 1(Win) |
| std::from_chars | 129.313 | 0.156972 | 532.131ms | 400000 | 30 | 6.43278e+08 | 2.94997e+06 | 19.145 | 2(Loss) |
| strtoll/strtoull | 82.1253 | 0.0741792 | 843.178ms | 400000 | 30 | 3.56166e+08 | 4.64497e+06 | 30.146 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 244.438 | 0.0450069 | 0.318682ms | 400 | 30 | 14.8 | 1560.6 | 9.89083 | 1(Win) |
| std::from_chars | 156.968 | 0.0365752 | 0.455945ms | 400 | 30 | 23.7023 | 2430.23 | 15.5242 | 2(Loss) |
| strtoll/strtoull | 107.774 | 0.02587 | 0.655781ms | 400 | 30 | 25.154 | 3539.53 | 22.7175 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 233.818 | 1.58139 | 2.95146ms | 4000 | 30 | 1.99694e+06 | 16314.8 | 10.5638 | 1(Win) |
| std::from_chars | 153.587 | 0.013207 | 4.54056ms | 4000 | 30 | 322.806 | 24837.4 | 16.0964 | 2(Loss) |
| strtoll/strtoull | 94.6544 | 0.653464 | 7.34832ms | 4000 | 30 | 2.08067e+06 | 40301.3 | 26.1326 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 244.439 | 0.335484 | 28.4451ms | 40000 | 30 | 8.22328e+06 | 156059 | 10.1257 | 1(Win) |
| std::from_chars | 136.236 | 0.342025 | 50.2569ms | 40000 | 30 | 2.75155e+07 | 280008 | 18.1704 | 2(Loss) |
| strtoll/strtoull | 85.7024 | 0.171338 | 80.1808ms | 40000 | 30 | 1.74486e+07 | 445110 | 28.885 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 159.434 | 0.0504757 | 426.176ms | 400000 | 30 | 4.37565e+07 | 2.39265e+06 | 15.5282 | 1(Win) |
| std::from_chars | 125.618 | 0.172393 | 546.081ms | 400000 | 30 | 8.22194e+08 | 3.03674e+06 | 19.7081 | 2(Loss) |
| strtoll/strtoull | 84.9491 | 0.0866599 | 810.738ms | 400000 | 30 | 4.54318e+08 | 4.49057e+06 | 29.1435 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 240.321 | 0.0587523 | 0.302869ms | 400 | 30 | 26.092 | 1587.33 | 10.0685 | 1(Win) |
| std::from_chars | 173.293 | 0.0338236 | 0.43259ms | 400 | 30 | 16.631 | 2201.3 | 14.0465 | 2(Loss) |
| strtoll/strtoull | 92.95 | 0.0216204 | 0.754407ms | 400 | 30 | 23.6195 | 4104.03 | 26.3943 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 234.005 | 1.54309 | 2.94309ms | 4000 | 30 | 1.89835e+06 | 16301.8 | 10.5558 | 1(Win) |
| std::from_chars | 162.687 | 0.0153516 | 4.28081ms | 4000 | 30 | 388.723 | 23448 | 15.1946 | 2(Loss) |
| strtoll/strtoull | 80.5228 | 0.970009 | 8.57879ms | 4000 | 30 | 6.33512e+06 | 47374.1 | 30.7222 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 237.617 | 0.311234 | 29.1476ms | 40000 | 30 | 7.48964e+06 | 160540 | 10.4165 | 1(Win) |
| std::from_chars | 140.487 | 0.382826 | 48.7735ms | 40000 | 30 | 3.2417e+07 | 271534 | 17.6205 | 2(Loss) |
| strtoll/strtoull | 72.7619 | 0.432373 | 93.0255ms | 40000 | 30 | 1.54152e+08 | 524271 | 34.0218 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 166.964 | 0.0492665 | 410.81ms | 400000 | 30 | 3.80103e+07 | 2.28475e+06 | 14.8279 | 1(Win) |
| std::from_chars | 132.071 | 0.296309 | 525.626ms | 400000 | 30 | 2.19745e+09 | 2.88837e+06 | 18.7452 | 2(Loss) |
| strtoll/strtoull | 72.2567 | 0.224964 | 952.648ms | 400000 | 30 | 4.23167e+09 | 5.27937e+06 | 34.2632 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 375.586 | 0.0340685 | 0.381034ms | 800 | 30 | 14.3678 | 2031.33 | 6.46967 | 1(Win) |
| std::from_chars | 231.552 | 0.0356843 | 1.44449ms | 800 | 30 | 41.4724 | 3294.9 | 10.582 | 2(Loss) |
| strtoll/strtoull | 156.569 | 0.019098 | 0.937929ms | 800 | 30 | 25.9816 | 4872.87 | 15.6834 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 365.465 | 1.24945 | 3.79886ms | 8000 | 30 | 2.04103e+06 | 20875.9 | 6.75924 | 1(Win) |
| std::from_chars | 225.059 | 0.762636 | 6.12754ms | 8000 | 30 | 2.00513e+06 | 33899.5 | 10.9889 | 2(Loss) |
| strtoll/strtoull | 143.178 | 0.569239 | 9.7337ms | 8000 | 30 | 2.7602e+06 | 53286.2 | 17.2799 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 368.182 | 0.32988 | 37.5909ms | 80000 | 30 | 1.40181e+07 | 207218 | 6.7232 | 1(Win) |
| std::from_chars | 191.029 | 0.249688 | 72.3697ms | 80000 | 30 | 2.98331e+07 | 399384 | 12.9593 | 2(Loss) |
| strtoll/strtoull | 120.511 | 0.116191 | 114.136ms | 80000 | 30 | 1.62329e+07 | 633088 | 20.5428 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 240.157 | 0.121413 | 569.787ms | 800000 | 30 | 4.46311e+08 | 3.17683e+06 | 10.3088 | 1(Win) |
| std::from_chars | 187.978 | 0.334017 | 738.544ms | 800000 | 30 | 5.51343e+09 | 4.05866e+06 | 13.1701 | 2(Loss) |
| strtoll/strtoull | 113.127 | 1.26507 | 1170.36ms | 800000 | 30 | 2.1837e+11 | 6.74408e+06 | 21.8834 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 392.553 | 0.0919002 | 0.365091ms | 800 | 30 | 95.7057 | 1943.53 | 6.18908 | 1(Win) |
| std::from_chars | 233.851 | 0.0484919 | 0.619707ms | 800 | 30 | 75.0862 | 3262.5 | 10.4672 | 2(Loss) |
| strtoll/strtoull | 152.597 | 0.0185991 | 0.93891ms | 800 | 30 | 25.9414 | 4999.7 | 16.1092 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 383.79 | 0.0354773 | 3.64375ms | 8000 | 30 | 1492.16 | 19879.1 | 6.43847 | 1(Win) |
| std::from_chars | 223.72 | 0.818038 | 6.18355ms | 8000 | 30 | 2.33474e+06 | 34102.4 | 11.0547 | 2(Loss) |
| strtoll/strtoull | 132.826 | 0.71902 | 10.3966ms | 8000 | 30 | 5.11701e+06 | 57439 | 18.628 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 383.086 | 0.307226 | 36.0415ms | 80000 | 30 | 1.12312e+07 | 199156 | 6.46143 | 1(Win) |
| std::from_chars | 201.914 | 0.589992 | 67.4654ms | 80000 | 30 | 1.49094e+08 | 377854 | 12.2606 | 2(Loss) |
| strtoll/strtoull | 129.256 | 0.194477 | 106.13ms | 80000 | 30 | 3.95308e+07 | 590253 | 19.152 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 297.375 | 0.0961621 | 462.039ms | 800000 | 30 | 1.826e+08 | 2.56558e+06 | 8.32491 | 1(Win) |
| std::from_chars | 206.484 | 0.153192 | 664.002ms | 800000 | 30 | 9.61169e+08 | 3.69491e+06 | 11.9894 | 2(Loss) |
| strtoll/strtoull | 110.337 | 0.0510718 | 1153.02ms | 800000 | 30 | 3.74131e+08 | 6.91465e+06 | 22.4371 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.484 | 0.090454 | 0.421594ms | 800 | 30 | 113.062 | 2146.2 | 6.84775 | 1(Win) |
| std::from_chars | 228.402 | 0.0343692 | 0.616062ms | 800 | 30 | 39.5402 | 3340.33 | 10.7272 | 2(Loss) |
| strtoll/strtoull | 149.797 | 0.0182804 | 0.954283ms | 800 | 30 | 26.0057 | 5093.17 | 16.4082 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 350.333 | 2.13526 | 3.90063ms | 8000 | 30 | 6.48695e+06 | 21777.5 | 7.05488 | 1(Win) |
| std::from_chars | 228.066 | 0.741094 | 6.06704ms | 8000 | 30 | 1.84385e+06 | 33452.5 | 10.8439 | 2(Loss) |
| strtoll/strtoull | 136.448 | 0.661988 | 10.1249ms | 8000 | 30 | 4.11026e+06 | 55914.4 | 18.1332 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 354.166 | 0.473987 | 38.8537ms | 80000 | 30 | 3.12768e+07 | 215419 | 6.98918 | 1(Win) |
| std::from_chars | 206.827 | 0.485173 | 66.8232ms | 80000 | 30 | 9.60901e+07 | 368878 | 11.9692 | 2(Loss) |
| strtoll/strtoull | 132.585 | 0.138406 | 103.717ms | 80000 | 30 | 1.90294e+07 | 575434 | 18.6716 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 254.893 | 0.0571301 | 539.368ms | 800000 | 30 | 8.77234e+07 | 2.99318e+06 | 9.71237 | 1(Win) |
| std::from_chars | 210.086 | 0.0940747 | 653.091ms | 800000 | 30 | 3.50148e+08 | 3.63155e+06 | 11.7842 | 2(Loss) |
| strtoll/strtoull | 130.206 | 0.124636 | 1050.87ms | 800000 | 30 | 1.60002e+09 | 5.85947e+06 | 19.0126 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 356.764 | 0.044206 | 0.400473ms | 800 | 30 | 26.8103 | 2138.5 | 6.81633 | 1(Win) |
| std::from_chars | 240.748 | 0.0283245 | 0.584966ms | 800 | 30 | 24.1713 | 3169.03 | 10.1703 | 2(Loss) |
| strtoll/strtoull | 126.541 | 0.0149072 | 1.11325ms | 800 | 30 | 24.2345 | 6029.2 | 19.448 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 354.111 | 0.0199847 | 3.9554ms | 8000 | 30 | 556.185 | 21545.2 | 6.97894 | 1(Win) |
| std::from_chars | 230.595 | 2.02952 | 6.12505ms | 8000 | 30 | 1.35265e+07 | 33085.6 | 10.725 | 2(Loss) |
| strtoll/strtoull | 110.666 | 1.6557 | 12.172ms | 8000 | 30 | 3.90873e+07 | 68940.8 | 22.3587 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 351.01 | 0.49909 | 39.2493ms | 80000 | 30 | 3.53036e+07 | 217355 | 7.05201 | 1(Win) |
| std::from_chars | 208.423 | 0.186094 | 66.2868ms | 80000 | 30 | 1.39211e+07 | 366054 | 11.8775 | 2(Loss) |
| strtoll/strtoull | 111.454 | 0.106247 | 123.625ms | 80000 | 30 | 1.58686e+07 | 684533 | 22.2119 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 262.476 | 0.109558 | 525.643ms | 800000 | 30 | 3.04234e+08 | 2.9067e+06 | 9.43123 | 1(Win) |
| std::from_chars | 213.228 | 0.112843 | 644.771ms | 800000 | 30 | 4.89058e+08 | 3.57804e+06 | 11.6102 | 2(Loss) |
| strtoll/strtoull | 104.889 | 2.32429 | 1252.24ms | 800000 | 30 | 8.57476e+11 | 7.27377e+06 | 23.6011 | 3(Loss) |
