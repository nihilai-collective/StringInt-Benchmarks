# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 214.132 | 0.609515 | 0.120865ms | 100 | 30 | 221.068 | 445.367 | 1(Win) |
| std::from_chars | 109.45 | 0.0944041 | 0.180755ms | 100 | 30 | 20.2989 | 871.333 | 2(Loss) |
| strtoll/strtoull | 74.0622 | 0.0653826 | 0.277201ms | 100 | 30 | 21.2644 | 1287.67 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 276.105 | 0.204118 | 0.875253ms | 1000 | 30 | 1491.21 | 3454.03 | 1(Win) |
| std::from_chars | 134.473 | 0.0532763 | 1.78191ms | 1000 | 30 | 428.271 | 7091.93 | 2(Loss) |
| strtoll/strtoull | 53.0928 | 1.11023 | 3.93215ms | 1000 | 30 | 1.1931e+06 | 17962.4 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 75.9126 | 0.614558 | 75.2918ms | 10000 | 30 | 1.78822e+07 | 125628 | 1(Win) |
| strtoll/strtoull | 46.173 | 0.719065 | 38.6394ms | 10000 | 30 | 6.6173e+07 | 206544 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 64.1469 | 2.1093 | 274.334ms | 100000 | 30 | 2.95018e+10 | 1.4867e+06 | 1(Win) |
| vn::from_chars | 56.8353 | 1.6798 | 305.692ms | 100000 | 30 | 2.38341e+10 | 1.67796e+06 | 2(Loss) |
| strtoll/strtoull | 42.8634 | 2.24657 | 407.804ms | 100000 | 30 | 7.49527e+10 | 2.22492e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 203.212 | 0.0435254 | 0.11027ms | 100 | 30 | 1.25172 | 469.3 | 1(Win) |
| std::from_chars | 106.731 | 0.100205 | 0.172326ms | 100 | 30 | 24.0506 | 893.533 | 2(Loss) |
| strtoll/strtoull | 87.7426 | 0.195563 | 0.278863ms | 100 | 30 | 135.541 | 1086.9 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 253.199 | 0.469785 | 0.850377ms | 1000 | 30 | 9392.81 | 3766.5 | 1(Win) |
| std::from_chars | 134.294 | 0.216973 | 7.73098ms | 1000 | 48 | 11395.6 | 7101.38 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 87.4827 | 0.38336 | 22.6035ms | 10000 | 30 | 5.23951e+06 | 109013 | 1(Win) |
| vn::from_chars | 74.1963 | 1.84327 | 24.9434ms | 10000 | 30 | 1.68398e+08 | 128534 | 2(Loss) |
| strtoll/strtoull | 48.2751 | 2.48763 | 34.6888ms | 10000 | 30 | 7.24514e+08 | 197550 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 76.035 | 1.95991 | 534.343ms | 100000 | 30 | 1.81286e+10 | 1.25426e+06 | 1(Win) |
| vn::from_chars | 63.8486 | 2.18773 | 269.688ms | 100000 | 30 | 3.20337e+10 | 1.49365e+06 | 2(Loss) |
| strtoll/strtoull | 48.2829 | 2.08068 | 855.658ms | 100000 | 30 | 5.06696e+10 | 1.97518e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 253.592 | 0.0987017 | 0.093633ms | 100 | 30 | 4.13333 | 376.067 | 1(Win) |
| std::from_chars | 109.208 | 0.079362 | 0.177627ms | 100 | 30 | 14.4092 | 873.267 | 2(Loss) |
| strtoll/strtoull | 61.3177 | 2.43924 | 0.312588ms | 100 | 30 | 43177.5 | 1555.3 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 334.353 | 0.0352263 | 0.646264ms | 1000 | 30 | 30.2862 | 2852.3 | 1(Win) |
| std::from_chars | 130.164 | 0.521183 | 1.39044ms | 1000 | 30 | 43744.3 | 7326.73 | 2(Loss) |
| strtoll/strtoull | 58.3248 | 1.66881 | 3.06893ms | 1000 | 30 | 2.23372e+06 | 16351.1 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 86.2345 | 0.666205 | 49.5771ms | 10000 | 30 | 1.62845e+07 | 110591 | 1(Win) |
| vn::from_chars | 77.9101 | 0.616275 | 74.4005ms | 10000 | 30 | 1.70719e+07 | 122407 | 2(Loss) |
| strtoll/strtoull | 50.4483 | 0.992044 | 35.1151ms | 10000 | 30 | 1.05509e+08 | 189040 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 79.8468 | 2.20922 | 220.321ms | 100000 | 30 | 2.08874e+10 | 1.19438e+06 | 1(Win) |
| vn::from_chars | 65.2175 | 2.02593 | 618.701ms | 100000 | 30 | 2.63294e+10 | 1.4623e+06 | 2(Loss) |
| strtoll/strtoull | 47.9917 | 2.46851 | 354.241ms | 100000 | 30 | 7.2187e+10 | 1.98716e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 241.05 | 0.203685 | 0.102595ms | 100 | 30 | 19.4816 | 395.633 | 1(Win) |
| std::from_chars | 100.433 | 0.0844429 | 0.201016ms | 100 | 30 | 19.2885 | 949.567 | 2(Loss) |
| strtoll/strtoull | 56.4627 | 0.396436 | 0.351979ms | 100 | 30 | 1345.07 | 1689.03 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 338.154 | 0.0526116 | 0.639664ms | 1000 | 30 | 66.0471 | 2820.23 | 1(Win) |
| std::from_chars | 122.135 | 0.624458 | 1.49104ms | 1000 | 30 | 71325.5 | 7808.33 | 2(Loss) |
| strtoll/strtoull | 51.4237 | 1.51503 | 3.3171ms | 1000 | 30 | 2.36831e+06 | 18545.4 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 87.1794 | 0.287404 | 22.4703ms | 10000 | 30 | 2.96537e+06 | 109392 | 1(Win) |
| std::from_chars | 83.1702 | 0.673199 | 22.1283ms | 10000 | 30 | 1.78761e+07 | 114665 | 2(Loss) |
| strtoll/strtoull | 48.8285 | 1.56858 | 36.4429ms | 10000 | 30 | 2.81572e+08 | 195311 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 76.6539 | 2.00843 | 280.41ms | 100000 | 30 | 1.87313e+10 | 1.24413e+06 | 1(Win) |
| vn::from_chars | 68.499 | 1.79256 | 588.419ms | 100000 | 30 | 1.86854e+10 | 1.39224e+06 | 2(Loss) |
| strtoll/strtoull | 46.133 | 2.1521 | 372.118ms | 100000 | 30 | 5.93775e+10 | 2.06723e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 361.423 | 0.143345 | 0.123243ms | 200 | 30 | 17.1678 | 527.733 | 1(Win) |
| std::from_chars | 171.293 | 0.0523394 | 0.222521ms | 200 | 30 | 10.1897 | 1113.5 | 2(Loss) |
| strtoll/strtoull | 145.399 | 0.323801 | 0.285919ms | 200 | 30 | 541.269 | 1311.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 487.111 | 0.0488335 | 0.785869ms | 2000 | 30 | 109.689 | 3915.63 | 1(Win) |
| std::from_chars | 227.177 | 0.0293962 | 1.8251ms | 2000 | 30 | 182.74 | 8395.87 | 2(Loss) |
| strtoll/strtoull | 103.641 | 0.224257 | 3.54655ms | 2000 | 30 | 51098.6 | 18403.4 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 154.941 | 0.532464 | 25.3071ms | 20000 | 30 | 1.28894e+07 | 123102 | 1(Win) |
| std::from_chars | 128.579 | 1.47579 | 28.4619ms | 20000 | 30 | 1.43777e+08 | 148340 | 2(Loss) |
| strtoll/strtoull | 84.6189 | 1.03762 | 41.6928ms | 20000 | 30 | 1.64106e+08 | 225405 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 127.192 | 1.82763 | 689.005ms | 200000 | 30 | 2.25339e+10 | 1.49958e+06 | 1(Win) |
| std::from_chars | 111.521 | 1.76123 | 1639.17ms | 200000 | 48 | 4.35534e+10 | 1.71031e+06 | 2(Loss) |
| strtoll/strtoull | 77.9413 | 2.42228 | 488.333ms | 200000 | 30 | 1.05414e+11 | 2.44716e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 337.863 | 0.162867 | 0.130002ms | 200 | 30 | 25.3609 | 564.533 | 1(Win) |
| std::from_chars | 200.823 | 0.0731005 | 0.197481ms | 200 | 30 | 14.4609 | 949.767 | 2(Loss) |
| strtoll/strtoull | 134.453 | 0.73208 | 0.317595ms | 200 | 30 | 3235.63 | 1418.6 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 453.738 | 0.882986 | 0.903636ms | 2000 | 30 | 41331.2 | 4203.63 | 1(Win) |
| std::from_chars | 213.439 | 0.0619715 | 3.89486ms | 2000 | 30 | 920.064 | 8936.27 | 2(Loss) |
| strtoll/strtoull | 112.44 | 0.103998 | 3.21385ms | 2000 | 30 | 9336.62 | 16963.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 193.603 | 0.529093 | 19.6396ms | 20000 | 30 | 8.1512e+06 | 98518.6 | 1(Win) |
| std::from_chars | 156.623 | 1.04012 | 55.7879ms | 20000 | 30 | 4.81319e+07 | 121779 | 2(Loss) |
| strtoll/strtoull | 97.877 | 0.823126 | 38.3913ms | 20000 | 30 | 7.71886e+07 | 194872 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 152.056 | 2.34279 | 221.929ms | 200000 | 30 | 2.59085e+10 | 1.25437e+06 | 1(Win) |
| std::from_chars | 139.14 | 2.42029 | 297.059ms | 200000 | 30 | 3.30226e+10 | 1.37081e+06 | 2(Loss) |
| strtoll/strtoull | 90.9928 | 2.4249 | 381.658ms | 200000 | 30 | 7.75092e+10 | 2.09615e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 397.144 | 0.107028 | 0.112829ms | 200 | 30 | 7.92644 | 480.267 | 1(Win) |
| std::from_chars | 201.105 | 0.0601739 | 0.200136ms | 200 | 30 | 9.77126 | 948.433 | 2(Loss) |
| strtoll/strtoull | 110.554 | 1.75128 | 0.365063ms | 200 | 30 | 27387 | 1725.27 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 509.877 | 0.0584326 | 0.750972ms | 2000 | 30 | 143.338 | 3740.8 | 1(Win) |
| std::from_chars | 218.928 | 0.543327 | 4.15363ms | 2000 | 30 | 67220.7 | 8712.23 | 2(Loss) |
| strtoll/strtoull | 103.066 | 0.128279 | 4.64449ms | 2000 | 30 | 16906.9 | 18506.2 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 214.882 | 0.41973 | 17.0219ms | 20000 | 30 | 4.1641e+06 | 88762.5 | 1(Win) |
| std::from_chars | 154.402 | 0.89157 | 23.2078ms | 20000 | 30 | 3.63905e+07 | 123532 | 2(Loss) |
| strtoll/strtoull | 99.659 | 0.686831 | 37.5084ms | 20000 | 30 | 5.1838e+07 | 191387 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 164.59 | 1.94863 | 210.204ms | 200000 | 30 | 1.5298e+10 | 1.15885e+06 | 1(Win) |
| std::from_chars | 140.842 | 2.23501 | 241.02ms | 200000 | 30 | 2.74839e+10 | 1.35425e+06 | 2(Loss) |
| strtoll/strtoull | 93.3971 | 1.52197 | 927.512ms | 200000 | 30 | 2.89818e+10 | 2.04219e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.923 | 0.142998 | 0.119753ms | 200 | 30 | 14.3092 | 482.967 | 1(Win) |
| std::from_chars | 215.763 | 0.0989749 | 0.446951ms | 200 | 30 | 22.9655 | 884 | 2(Loss) |
| strtoll/strtoull | 125.599 | 0.458268 | 0.366619ms | 200 | 30 | 1452.94 | 1518.6 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 499.533 | 0.148508 | 1.01767ms | 2000 | 30 | 964.616 | 3818.27 | 1(Win) |
| strtoll/strtoull | 96.9878 | 0.816147 | 3.59854ms | 2000 | 30 | 772831 | 19665.9 | 2(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.751 | 0.631929 | 43.0974ms | 20000 | 30 | 1.08144e+07 | 95010.5 | 1(Win) |
| std::from_chars | 151.551 | 0.79732 | 24.0179ms | 20000 | 30 | 3.02083e+07 | 125855 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.881 | 1.87005 | 516.775ms | 200000 | 30 | 1.20622e+10 | 1.07226e+06 | 1(Win) |
| std::from_chars | 140.615 | 1.8373 | 248.572ms | 200000 | 30 | 1.8633e+10 | 1.35644e+06 | 2(Loss) |
| strtoll/strtoull | 87.4047 | 2.01063 | 2064.72ms | 200000 | 48 | 9.24055e+10 | 2.1822e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 581.45 | 0.121397 | 0.143042ms | 400 | 30 | 19.0299 | 656.067 | 1(Win) |
| std::from_chars | 332.774 | 0.0619436 | 0.237711ms | 400 | 30 | 15.1264 | 1146.33 | 2(Loss) |
| strtoll/strtoull | 248.99 | 0.679898 | 0.75084ms | 400 | 30 | 3255.1 | 1532.07 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 725.996 | 0.0546711 | 3.54902ms | 4000 | 30 | 247.564 | 5254.43 | 1(Win) |
| std::from_chars | 311.826 | 1.78894 | 2.4055ms | 4000 | 30 | 1.43683e+06 | 12233.4 | 2(Loss) |
| strtoll/strtoull | 163.438 | 0.295273 | 4.5294ms | 4000 | 30 | 142490 | 23340.3 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 291.646 | 0.594462 | 61.2971ms | 40000 | 30 | 1.81376e+07 | 130799 | 1(Win) |
| std::from_chars | 220.768 | 1.09704 | 76.2119ms | 40000 | 30 | 1.07798e+08 | 172792 | 2(Loss) |
| strtoll/strtoull | 153.623 | 0.566283 | 47.3701ms | 40000 | 30 | 5.93192e+07 | 248315 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.488 | 1.49979 | 1465.24ms | 400000 | 48 | 2.76239e+10 | 1.59953e+06 | 1(Win) |
| strtoll/strtoull | 142.098 | 1.90148 | 490.455ms | 400000 | 30 | 7.8171e+10 | 2.68455e+06 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 619.537 | 0.145039 | 0.152531ms | 400 | 30 | 23.9264 | 615.733 | 1(Win) |
| std::from_chars | 260.656 | 0.0742572 | 0.274503ms | 400 | 30 | 35.431 | 1463.5 | 2(Loss) |
| strtoll/strtoull | 184.335 | 0.440778 | 0.424702ms | 400 | 30 | 2496.12 | 2069.43 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 697.585 | 0.361502 | 1.09853ms | 4000 | 30 | 11723.8 | 5468.43 | 1(Win) |
| std::from_chars | 304.787 | 1.32496 | 2.29963ms | 4000 | 30 | 824995 | 12515.9 | 2(Loss) |
| strtoll/strtoull | 181.411 | 0.112784 | 4.12699ms | 4000 | 30 | 16873.6 | 21028 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.162 | 1.62895 | 24.4599ms | 40000 | 30 | 1.1372e+08 | 119522 | 1(Win) |
| std::from_chars | 256.946 | 0.837984 | 27.5717ms | 40000 | 30 | 4.64331e+07 | 148463 | 2(Loss) |
| strtoll/strtoull | 171.665 | 0.62191 | 101.201ms | 40000 | 30 | 5.72969e+07 | 222217 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 283.909 | 2.07629 | 248.22ms | 400000 | 30 | 2.33486e+10 | 1.34364e+06 | 1(Win) |
| std::from_chars | 233.638 | 2.02659 | 293.897ms | 400000 | 30 | 3.28463e+10 | 1.63274e+06 | 2(Loss) |
| strtoll/strtoull | 158.049 | 1.87936 | 2363.45ms | 400000 | 48 | 9.87644e+10 | 2.41362e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 605.7 | 0.115556 | 0.14147ms | 400 | 30 | 15.8897 | 629.8 | 1(Win) |
| std::from_chars | 265.124 | 0.0682174 | 0.287314ms | 400 | 30 | 28.9023 | 1438.83 | 2(Loss) |
| strtoll/strtoull | 107.091 | 0.0782467 | 0.79043ms | 400 | 30 | 233.059 | 3562.1 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 782.796 | 2.45432 | 4.47559ms | 4000 | 48 | 686638 | 4873.17 | 1(Win) |
| std::from_chars | 310.522 | 0.230045 | 2.30386ms | 4000 | 30 | 23959.8 | 12284.8 | 2(Loss) |
| strtoll/strtoull | 105.933 | 0.034705 | 4.6027ms | 4000 | 30 | 4685.57 | 36010.5 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.983 | 0.397636 | 102.518ms | 40000 | 48 | 7.49049e+06 | 99345.6 | 1(Win) |
| std::from_chars | 258.006 | 0.424356 | 68.7939ms | 40000 | 30 | 1.18098e+07 | 147853 | 2(Loss) |
| strtoll/strtoull | 170.017 | 0.827039 | 94.8426ms | 40000 | 30 | 1.03302e+08 | 224371 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.333 | 1.84687 | 269.472ms | 400000 | 30 | 1.58681e+10 | 1.24528e+06 | 1(Win) |
| std::from_chars | 235.283 | 2.44558 | 685.31ms | 400000 | 30 | 4.71655e+10 | 1.62133e+06 | 2(Loss) |
| strtoll/strtoull | 156.057 | 2.28596 | 2320.17ms | 400000 | 48 | 1.49875e+11 | 2.44442e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.901 | 0.156486 | 0.130581ms | 400 | 30 | 22.3954 | 552.133 | 1(Win) |
| std::from_chars | 319.061 | 0.0877316 | 0.265631ms | 400 | 30 | 33.0069 | 1195.6 | 2(Loss) |
| strtoll/strtoull | 175.825 | 0.376209 | 1.02768ms | 400 | 30 | 1998.66 | 2169.6 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 773.563 | 0.299972 | 2.1972ms | 4000 | 30 | 6564.64 | 4931.33 | 1(Win) |
| std::from_chars | 289.888 | 1.41209 | 5.47094ms | 4000 | 30 | 1.03586e+06 | 13159.2 | 2(Loss) |
| strtoll/strtoull | 166.9 | 1.64568 | 4.24ms | 4000 | 30 | 4.24443e+06 | 22856.2 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 420.862 | 1.1021 | 18.9693ms | 40000 | 30 | 2.99369e+07 | 90640.1 | 1(Win) |
| std::from_chars | 245.919 | 0.810863 | 29.7921ms | 40000 | 30 | 4.74628e+07 | 155120 | 2(Loss) |
| strtoll/strtoull | 171.775 | 0.611515 | 45.9087ms | 40000 | 30 | 5.53268e+07 | 222075 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.13 | 2.07237 | 1114.45ms | 400000 | 48 | 2.80322e+10 | 1.16611e+06 | 1(Win) |
| std::from_chars | 229.785 | 2.35423 | 297.405ms | 400000 | 30 | 4.58243e+10 | 1.66011e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 772.284 | 0.0383231 | 0.212651ms | 800 | 30 | 4.3 | 987.9 | 1(Win) |
| std::from_chars | 485.99 | 0.12139 | 0.414832ms | 800 | 30 | 108.947 | 1569.87 | 2(Loss) |
| strtoll/strtoull | 277.837 | 0.233735 | 0.605502ms | 800 | 30 | 1235.86 | 2746 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 800.06 | 2.46661 | 1.85136ms | 8000 | 30 | 1.65981e+06 | 9536.03 | 1(Win) |
| std::from_chars | 424.442 | 2.17202 | 4.04636ms | 8000 | 30 | 4.57292e+06 | 17975.1 | 2(Loss) |
| strtoll/strtoull | 257.058 | 0.781214 | 14.2571ms | 8000 | 30 | 1.61279e+06 | 29679.6 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 355.945 | 0.652666 | 96.1934ms | 80000 | 30 | 5.87108e+07 | 214342 | 1(Win) |
| strtoll/strtoull | 252.314 | 0.81515 | 318.592ms | 80000 | 48 | 2.91618e+08 | 302377 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 451.266 | 2.38724 | 310.398ms | 800000 | 30 | 4.88683e+10 | 1.69066e+06 | 1(Win) |
| std::from_chars | 328.517 | 2.154 | 1065.29ms | 800000 | 30 | 7.50724e+10 | 2.32238e+06 | 2(Loss) |
| strtoll/strtoull | 234.817 | 2.39325 | 1410.42ms | 800000 | 30 | 1.81393e+11 | 3.24908e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 814.149 | 0.070032 | 0.470001ms | 800 | 30 | 12.9207 | 937.1 | 1(Win) |
| std::from_chars | 527.463 | 0.0581445 | 0.324333ms | 800 | 30 | 21.2195 | 1446.43 | 2(Loss) |
| strtoll/strtoull | 277.49 | 0.070915 | 0.560495ms | 800 | 30 | 114.047 | 2749.43 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 756.252 | 0.117319 | 1.91481ms | 8000 | 30 | 4202.46 | 10088.4 | 1(Win) |
| std::from_chars | 430.563 | 0.710467 | 3.47786ms | 8000 | 30 | 475462 | 17719.6 | 2(Loss) |
| strtoll/strtoull | 284.266 | 1.01121 | 4.9905ms | 8000 | 30 | 2.2097e+06 | 26838.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 595.28 | 0.554337 | 125.668ms | 80000 | 48 | 2.42285e+07 | 128165 | 1(Win) |
| std::from_chars | 404.523 | 0.510851 | 35.6887ms | 80000 | 30 | 2.78485e+07 | 188602 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 379.97 | 2.01672 | 943.533ms | 800000 | 30 | 4.91918e+10 | 2.00789e+06 | 1(Win) |
| strtoll/strtoull | 264.122 | 2.31968 | 518.555ms | 800000 | 30 | 1.34694e+11 | 2.88859e+06 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 826.855 | 0.0599605 | 0.560187ms | 800 | 30 | 9.18276 | 922.7 | 1(Win) |
| std::from_chars | 509.135 | 0.0895751 | 0.71718ms | 800 | 30 | 54.0517 | 1498.5 | 2(Loss) |
| strtoll/strtoull | 167.605 | 0.0347111 | 0.87545ms | 800 | 30 | 74.8966 | 4552 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 837.438 | 0.0662876 | 1.7432ms | 8000 | 30 | 1094.11 | 9110.4 | 1(Win) |
| std::from_chars | 453.541 | 0.998999 | 3.20086ms | 8000 | 30 | 847224 | 16821.8 | 2(Loss) |
| strtoll/strtoull | 266.705 | 0.829462 | 7.15987ms | 8000 | 30 | 1.689e+06 | 28606.1 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 612.321 | 0.703608 | 56.3186ms | 80000 | 30 | 2.3057e+07 | 124598 | 1(Win) |
| std::from_chars | 404.984 | 0.673024 | 85.2639ms | 80000 | 30 | 4.82267e+07 | 188388 | 2(Loss) |
| strtoll/strtoull | 284.286 | 1.7721 | 50.7923ms | 80000 | 30 | 6.78527e+08 | 268370 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 571.677 | 1.35252 | 252.976ms | 800000 | 30 | 9.7744e+09 | 1.33456e+06 | 1(Win) |
| std::from_chars | 383.836 | 2.42833 | 886.919ms | 800000 | 30 | 6.98914e+10 | 1.98767e+06 | 2(Loss) |
| strtoll/strtoull | 272.029 | 1.93725 | 1268.97ms | 800000 | 30 | 8.85613e+10 | 2.80463e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 641.413 | 0.0674179 | 0.269249ms | 800 | 30 | 19.292 | 1189.47 | 1(Win) |
| std::from_chars | 415.198 | 0.221493 | 0.372073ms | 800 | 30 | 496.947 | 1837.53 | 2(Loss) |
| strtoll/strtoull | 252.103 | 0.0678332 | 0.583161ms | 800 | 30 | 126.424 | 3026.3 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 864.56 | 0.535033 | 1.80752ms | 8000 | 30 | 66876.4 | 8824.6 | 1(Win) |
| std::from_chars | 452.028 | 0.0649347 | 3.33351ms | 8000 | 30 | 3603.5 | 16878.1 | 2(Loss) |
| strtoll/strtoull | 271.223 | 1.78752 | 5.60121ms | 8000 | 30 | 7.5849e+06 | 28129.6 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 534.378 | 0.774556 | 26.5703ms | 80000 | 30 | 3.66868e+07 | 142771 | 1(Win) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 448.338 | 2.0631 | 303.603ms | 800000 | 30 | 3.69771e+10 | 1.70171e+06 | 1(Win) |
| std::from_chars | 363.314 | 2.07959 | 375.922ms | 800000 | 30 | 5.72129e+10 | 2.09994e+06 | 2(Loss) |
| strtoll/strtoull | 245.698 | 1.97646 | 545.898ms | 800000 | 30 | 1.12999e+11 | 3.1052e+06 | 3(Loss) |
