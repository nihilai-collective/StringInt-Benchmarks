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

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.763 | 0.05561 | 0.105212ms | 100 | 30 | 1.32069 | 377.3 | 1(Win) |
| std::from_chars | 107.299 | 0.0734524 | 0.183685ms | 100 | 30 | 12.7862 | 888.8 | 2(Loss) |
| strtoll/strtoull | 81.7412 | 0.547763 | 0.342016ms | 100 | 30 | 1225.25 | 1166.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 280.721 | 0.109855 | 0.704454ms | 1000 | 30 | 417.84 | 3397.23 | 1(Win) |
| std::from_chars | 139.655 | 0.0313503 | 1.39378ms | 1000 | 30 | 137.495 | 6828.77 | 2(Loss) |
| strtoll/strtoull | 58.3833 | 0.396378 | 9.96698ms | 1000 | 30 | 125766 | 16334.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 74.2507 | 1.47086 | 24.7864ms | 10000 | 30 | 1.07069e+08 | 128440 | 1(Win) |
| vn::from_chars | 64.6188 | 2.25034 | 27.5429ms | 10000 | 30 | 3.30902e+08 | 147585 | 2(Loss) |
| strtoll/strtoull | 45.6621 | 1.216 | 41.0168ms | 10000 | 30 | 1.93499e+08 | 208855 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 66.0926 | 1.72884 | 613.609ms | 100000 | 30 | 1.86691e+10 | 1.44294e+06 | 1(Win) |
| vn::from_chars | 57.29 | 2.34161 | 296.648ms | 100000 | 30 | 4.55817e+10 | 1.66464e+06 | 2(Loss) |
| strtoll/strtoull | 45.1676 | 1.77638 | 385.964ms | 100000 | 30 | 4.22027e+10 | 2.11141e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.169 | 0.0381517 | 0.106367ms | 100 | 30 | 0.736782 | 410.767 | 1(Win) |
| std::from_chars | 106.691 | 0.0807682 | 0.179853ms | 100 | 30 | 15.6368 | 893.867 | 2(Loss) |
| strtoll/strtoull | 35.1823 | 0.0536018 | 0.624293ms | 100 | 30 | 63.3333 | 2710.67 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 245.596 | 0.228108 | 0.88245ms | 1000 | 30 | 2353.75 | 3883.1 | 1(Win) |
| std::from_chars | 128.816 | 0.0601233 | 3.42089ms | 1000 | 30 | 594.386 | 7403.4 | 2(Loss) |
| strtoll/strtoull | 62.3543 | 0.313219 | 2.99978ms | 1000 | 30 | 68847 | 15294.4 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 87.3169 | 0.446592 | 20.8273ms | 10000 | 30 | 7.1375e+06 | 109220 | 1(Win) |
| vn::from_chars | 79.3669 | 0.489363 | 23.9832ms | 10000 | 30 | 1.0373e+07 | 120160 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 80.0473 | 2.1982 | 216.274ms | 100000 | 30 | 2.0576e+10 | 1.19139e+06 | 1(Win) |
| vn::from_chars | 65.4479 | 1.46152 | 260.782ms | 100000 | 30 | 1.36063e+10 | 1.45715e+06 | 2(Loss) |
| strtoll/strtoull | 49.8294 | 2.31453 | 345.407ms | 100000 | 30 | 5.88675e+10 | 1.91388e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 278.716 | 0.15609 | 0.096901ms | 100 | 30 | 8.55747 | 342.167 | 1(Win) |
| std::from_chars | 131.608 | 0.0825048 | 0.387373ms | 100 | 30 | 10.723 | 724.633 | 2(Loss) |
| strtoll/strtoull | 83.5189 | 0.322547 | 0.276107ms | 100 | 30 | 406.947 | 1141.87 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.41 | 0.15762 | 1.32934ms | 1000 | 30 | 620.92 | 2886.33 | 1(Win) |
| std::from_chars | 134.676 | 0.0332251 | 1.32288ms | 1000 | 30 | 166.064 | 7081.27 | 2(Loss) |
| strtoll/strtoull | 60.8218 | 1.61381 | 3.00351ms | 1000 | 30 | 1.92091e+06 | 15679.8 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 87.7051 | 1.54649 | 21.0193ms | 10000 | 30 | 8.48328e+07 | 108737 | 1(Win) |
| vn::from_chars | 79.1788 | 2.35985 | 22.7014ms | 10000 | 30 | 2.42367e+08 | 120446 | 2(Loss) |
| strtoll/strtoull | 49.0475 | 2.24603 | 171.672ms | 10000 | 48 | 9.15458e+08 | 194439 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 80.0964 | 1.96807 | 212.996ms | 100000 | 30 | 1.64731e+10 | 1.19066e+06 | 1(Win) |
| vn::from_chars | 69.8979 | 1.36382 | 253.136ms | 100000 | 30 | 1.03875e+10 | 1.36438e+06 | 2(Loss) |
| strtoll/strtoull | 49.9697 | 1.74815 | 342.544ms | 100000 | 30 | 3.33936e+10 | 1.9085e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 244.448 | 0.0840148 | 0.100374ms | 100 | 30 | 3.22299 | 390.133 | 1(Win) |
| std::from_chars | 108.196 | 0.037562 | 0.179219ms | 100 | 30 | 3.28851 | 881.433 | 2(Loss) |
| strtoll/strtoull | 33.7118 | 0.122493 | 0.6272ms | 100 | 30 | 360.231 | 2828.9 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.419 | 0.169611 | 0.711732ms | 1000 | 30 | 741.214 | 2930.6 | 1(Win) |
| std::from_chars | 131.469 | 0.0587201 | 1.40946ms | 1000 | 30 | 544.309 | 7253.97 | 2(Loss) |
| strtoll/strtoull | 47.5341 | 0.135849 | 4.16841ms | 1000 | 30 | 22285.6 | 20063 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 82.6653 | 1.3248 | 21.8018ms | 10000 | 30 | 7.00767e+07 | 115366 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 81.2222 | 0.603102 | 23.2102ms | 10000 | 30 | 1.50437e+07 | 117416 | 1(Tie) |
| strtoll/strtoull | 50.7124 | 1.00938 | 36.2728ms | 10000 | 30 | 1.08094e+08 | 188055 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 79.5716 | 1.23349 | 220.051ms | 100000 | 30 | 6.55658e+09 | 1.19851e+06 | 1(Win) |
| vn::from_chars | 69.6188 | 2.4804 | 245.612ms | 100000 | 30 | 3.46348e+10 | 1.36985e+06 | 2(Loss) |
| strtoll/strtoull | 47.9142 | 1.36509 | 361.286ms | 100000 | 30 | 2.2147e+10 | 1.99038e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 364.114 | 0.166293 | 0.13214ms | 200 | 30 | 22.7644 | 523.833 | 1(Win) |
| std::from_chars | 222.526 | 0.0502613 | 0.454015ms | 200 | 30 | 5.56782 | 857.133 | 2(Loss) |
| strtoll/strtoull | 105.017 | 0.0426226 | 0.365406ms | 200 | 30 | 17.9782 | 1816.23 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 479.197 | 0.203936 | 0.858852ms | 2000 | 30 | 1976.7 | 3980.3 | 1(Win) |
| std::from_chars | 224.596 | 1.56549 | 1.59829ms | 2000 | 30 | 530251 | 8492.37 | 2(Loss) |
| strtoll/strtoull | 95.328 | 0.524106 | 3.82374ms | 2000 | 30 | 329897 | 20008.3 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.61 | 2.14678 | 24.9687ms | 20000 | 30 | 2.54403e+08 | 135648 | 1(Win) |
| std::from_chars | 131.716 | 0.603508 | 64.0535ms | 20000 | 30 | 2.29123e+07 | 144807 | 2(Loss) |
| strtoll/strtoull | 86.7518 | 0.466156 | 41.1294ms | 20000 | 30 | 3.15128e+07 | 219863 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 128.832 | 1.76478 | 273.316ms | 200000 | 30 | 2.04795e+10 | 1.4805e+06 | 1(Win) |
| std::from_chars | 119.606 | 1.6364 | 293.625ms | 200000 | 30 | 2.04294e+10 | 1.59469e+06 | 2(Loss) |
| strtoll/strtoull | 83.2539 | 1.637 | 419.196ms | 200000 | 30 | 4.2196e+10 | 2.291e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.747 | 0.105444 | 0.120509ms | 200 | 30 | 8.24023 | 497.033 | 1(Win) |
| std::from_chars | 184.178 | 0.0980602 | 0.205415ms | 200 | 30 | 30.9379 | 1035.6 | 2(Loss) |
| strtoll/strtoull | 147.434 | 0.356698 | 0.369385ms | 200 | 30 | 638.838 | 1293.7 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.5 | 0.101752 | 0.817091ms | 2000 | 30 | 530.547 | 4132.93 | 1(Win) |
| std::from_chars | 224.703 | 0.171634 | 1.64122ms | 2000 | 30 | 6367.53 | 8488.3 | 2(Loss) |
| strtoll/strtoull | 109.706 | 0.155593 | 3.3011ms | 2000 | 30 | 21953.1 | 17386 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 196.611 | 0.611647 | 20.1419ms | 20000 | 30 | 1.05626e+07 | 97011.5 | 1(Win) |
| std::from_chars | 156.586 | 0.487624 | 22.8615ms | 20000 | 30 | 1.05839e+07 | 121808 | 2(Loss) |
| strtoll/strtoull | 97.5896 | 0.84334 | 37.4011ms | 20000 | 30 | 8.15041e+07 | 195446 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 158.371 | 1.35719 | 1099.29ms | 200000 | 48 | 1.28242e+10 | 1.20436e+06 | 1(Win) |
| std::from_chars | 146.843 | 1.12835 | 1194.34ms | 200000 | 48 | 1.03107e+10 | 1.29891e+06 | 2(Loss) |
| strtoll/strtoull | 95.0241 | 2.11679 | 366.614ms | 200000 | 30 | 5.41587e+10 | 2.00723e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 442.164 | 0.144701 | 0.168759ms | 200 | 30 | 11.6885 | 431.367 | 1(Win) |
| std::from_chars | 224.192 | 0.0825741 | 0.210244ms | 200 | 30 | 14.8057 | 850.767 | 2(Loss) |
| strtoll/strtoull | 119.743 | 0.664855 | 0.322807ms | 200 | 30 | 3364.6 | 1592.87 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.967 | 1.22471 | 1.74531ms | 2000 | 30 | 65227.4 | 3807.33 | 1(Win) |
| std::from_chars | 222.668 | 2.023 | 1.65766ms | 2000 | 30 | 900867 | 8565.9 | 2(Loss) |
| strtoll/strtoull | 108.439 | 1.80076 | 3.27094ms | 2000 | 30 | 3.0097e+06 | 17589.1 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.97 | 0.533578 | 16.9896ms | 20000 | 30 | 6.91557e+06 | 89981.9 | 1(Win) |
| std::from_chars | 160.475 | 0.60633 | 22.5967ms | 20000 | 30 | 1.55806e+07 | 118856 | 2(Loss) |
| strtoll/strtoull | 99.2085 | 0.665025 | 36.0285ms | 20000 | 30 | 4.90409e+07 | 192256 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 166.499 | 1.95866 | 482.122ms | 200000 | 30 | 1.51034e+10 | 1.14556e+06 | 1(Win) |
| std::from_chars | 148.885 | 1.51949 | 555.018ms | 200000 | 30 | 1.13678e+10 | 1.28109e+06 | 2(Loss) |
| strtoll/strtoull | 93.7902 | 1.40826 | 369.33ms | 200000 | 30 | 2.46053e+10 | 2.03363e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 480.319 | 0.13572 | 0.217443ms | 200 | 30 | 8.71379 | 397.1 | 1(Win) |
| std::from_chars | 184.57 | 0.0710642 | 0.210741ms | 200 | 30 | 16.1793 | 1033.4 | 2(Loss) |
| strtoll/strtoull | 133.468 | 0.452587 | 0.730133ms | 200 | 30 | 1254.96 | 1429.07 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 474.614 | 0.0634567 | 0.793501ms | 2000 | 30 | 195.099 | 4018.73 | 1(Win) |
| std::from_chars | 224.707 | 0.0379218 | 1.61038ms | 2000 | 30 | 310.833 | 8488.17 | 2(Loss) |
| strtoll/strtoull | 97.8348 | 1.26658 | 3.63526ms | 2000 | 30 | 1.82918e+06 | 19495.6 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.329 | 0.456723 | 17.5265ms | 20000 | 30 | 5.09764e+06 | 90254.9 | 1(Win) |
| std::from_chars | 152.003 | 0.289001 | 23.6054ms | 20000 | 30 | 3.94523e+06 | 125481 | 2(Loss) |
| strtoll/strtoull | 96.0751 | 0.423349 | 36.5367ms | 20000 | 30 | 2.11913e+07 | 198527 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.899 | 2.48183 | 194.587ms | 200000 | 30 | 2.24874e+10 | 1.10316e+06 | 1(Win) |
| std::from_chars | 139.054 | 1.31695 | 1238.32ms | 200000 | 48 | 1.56628e+10 | 1.37166e+06 | 2(Loss) |
| strtoll/strtoull | 89.7645 | 2.04851 | 385.554ms | 200000 | 30 | 5.68392e+10 | 2.12484e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 689.819 | 0.178109 | 0.155754ms | 400 | 30 | 29.1034 | 553 | 1(Win) |
| std::from_chars | 237.39 | 0.0758905 | 0.302833ms | 400 | 30 | 44.6161 | 1606.93 | 2(Loss) |
| strtoll/strtoull | 206.181 | 0.276899 | 0.431186ms | 400 | 30 | 787.385 | 1850.17 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 763.133 | 0.374477 | 4.64951ms | 4000 | 48 | 16819.4 | 4998.73 | 1(Win) |
| std::from_chars | 312.237 | 0.112672 | 5.34145ms | 4000 | 30 | 5684.7 | 12217.3 | 2(Loss) |
| strtoll/strtoull | 163.954 | 1.24101 | 4.32383ms | 4000 | 30 | 2.50121e+06 | 23266.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 287.401 | 0.459726 | 59.6551ms | 40000 | 30 | 1.11702e+07 | 132731 | 1(Win) |
| std::from_chars | 223.346 | 0.33759 | 32.1365ms | 40000 | 30 | 9.97387e+06 | 170797 | 2(Loss) |
| strtoll/strtoull | 152.774 | 0.890708 | 47.492ms | 40000 | 30 | 1.48392e+08 | 249695 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 255.466 | 1.37573 | 276.82ms | 400000 | 30 | 1.26602e+10 | 1.49323e+06 | 1(Win) |
| std::from_chars | 204.149 | 1.82888 | 337.004ms | 400000 | 30 | 3.50362e+10 | 1.86859e+06 | 2(Loss) |
| strtoll/strtoull | 146.435 | 2.26857 | 476.551ms | 400000 | 30 | 1.04775e+11 | 2.60504e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.706 | 0.126241 | 0.130525ms | 400 | 30 | 13.3575 | 528.567 | 1(Win) |
| std::from_chars | 333.19 | 0.0538505 | 0.568379ms | 400 | 30 | 11.4034 | 1144.9 | 2(Loss) |
| strtoll/strtoull | 182.988 | 0.48062 | 0.475893ms | 400 | 30 | 3011.61 | 2084.67 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 698.311 | 1.64797 | 4.97718ms | 4000 | 48 | 389013 | 5462.75 | 1(Win) |
| std::from_chars | 311.571 | 0.287893 | 6.05978ms | 4000 | 30 | 37272.7 | 12243.4 | 2(Loss) |
| strtoll/strtoull | 178.627 | 1.81349 | 3.98785ms | 4000 | 30 | 4.4996e+06 | 21355.6 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 329.312 | 0.319179 | 21.9548ms | 40000 | 30 | 4.10105e+06 | 115838 | 1(Win) |
| std::from_chars | 248.885 | 2.32966 | 27.779ms | 40000 | 30 | 3.82499e+08 | 153272 | 2(Loss) |
| strtoll/strtoull | 167.406 | 0.460842 | 41.8176ms | 40000 | 30 | 3.3083e+07 | 227871 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 301.2 | 1.54753 | 235.654ms | 400000 | 30 | 1.15242e+10 | 1.2665e+06 | 1(Win) |
| std::from_chars | 244.474 | 1.6917 | 284.12ms | 400000 | 30 | 2.09037e+10 | 1.56037e+06 | 2(Loss) |
| strtoll/strtoull | 161.187 | 1.65386 | 428.425ms | 400000 | 30 | 4.59598e+10 | 2.36663e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 604.101 | 0.15685 | 0.13981ms | 400 | 30 | 29.4299 | 631.467 | 1(Win) |
| std::from_chars | 318.431 | 0.0519504 | 0.58371ms | 400 | 30 | 11.6195 | 1197.97 | 2(Loss) |
| strtoll/strtoull | 201.144 | 0.501885 | 0.421191ms | 400 | 30 | 2717.91 | 1896.5 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 827.758 | 0.0483391 | 2.34509ms | 4000 | 30 | 148.878 | 4608.47 | 1(Win) |
| std::from_chars | 304.435 | 0.0793981 | 2.39214ms | 4000 | 30 | 2969.42 | 12530.4 | 2(Loss) |
| strtoll/strtoull | 166.226 | 0.164923 | 4.07978ms | 4000 | 30 | 42974.3 | 22948.9 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 380.591 | 0.635594 | 19.4312ms | 40000 | 30 | 1.21754e+07 | 100231 | 1(Win) |
| std::from_chars | 248.86 | 1.57923 | 140.507ms | 40000 | 48 | 2.81284e+08 | 153287 | 2(Loss) |
| strtoll/strtoull | 174.52 | 0.650662 | 41.9904ms | 40000 | 30 | 6.06823e+07 | 218582 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 300.758 | 1.837 | 236.712ms | 400000 | 30 | 1.62864e+10 | 1.26836e+06 | 1(Win) |
| std::from_chars | 243.509 | 1.92371 | 284.635ms | 400000 | 30 | 2.72453e+10 | 1.56655e+06 | 2(Loss) |
| strtoll/strtoull | 168.044 | 1.89643 | 418.173ms | 400000 | 30 | 5.55992e+10 | 2.27006e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 614.613 | 0.11283 | 0.133583ms | 400 | 30 | 14.7126 | 620.667 | 1(Win) |
| std::from_chars | 270.527 | 0.0920163 | 0.280479ms | 400 | 30 | 50.5069 | 1410.1 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 772.873 | 0.132856 | 0.96368ms | 4000 | 30 | 1290 | 4935.73 | 1(Win) |
| std::from_chars | 273.114 | 0.343493 | 2.41098ms | 4000 | 30 | 69054.2 | 13967.4 | 2(Loss) |
| strtoll/strtoull | 173.357 | 1.0264 | 9.86143ms | 4000 | 30 | 1.53036e+06 | 22004.8 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 419.866 | 1.11608 | 18.3031ms | 40000 | 30 | 3.08469e+07 | 90855.1 | 1(Win) |
| std::from_chars | 252.063 | 0.629563 | 29.716ms | 40000 | 30 | 2.72334e+07 | 151339 | 2(Loss) |
| strtoll/strtoull | 168.071 | 0.859507 | 42.9716ms | 40000 | 30 | 1.14171e+08 | 226970 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 352.381 | 1.55343 | 199.94ms | 400000 | 30 | 8.48392e+09 | 1.08255e+06 | 1(Win) |
| std::from_chars | 227.206 | 2.34447 | 680.616ms | 400000 | 30 | 4.64826e+10 | 1.67896e+06 | 2(Loss) |
| strtoll/strtoull | 161.928 | 1.7257 | 2127.95ms | 400000 | 48 | 7.93323e+10 | 2.3558e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 665.315 | 0.0680552 | 0.225197ms | 800 | 30 | 18.2713 | 1146.73 | 1(Win) |
| std::from_chars | 508.739 | 0.0621868 | 0.329418ms | 800 | 30 | 26.092 | 1499.67 | 2(Loss) |
| strtoll/strtoull | 292.46 | 0.138214 | 0.546048ms | 800 | 30 | 390.01 | 2608.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 867.871 | 0.0453801 | 1.67515ms | 8000 | 30 | 477.444 | 8790.93 | 1(Win) |
| std::from_chars | 462.511 | 1.49066 | 8.08493ms | 8000 | 30 | 1.81391e+06 | 16495.6 | 2(Loss) |
| strtoll/strtoull | 265.763 | 0.777539 | 5.27468ms | 8000 | 30 | 1.49471e+06 | 28707.5 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 545.788 | 0.86575 | 63.7705ms | 80000 | 30 | 4.39378e+07 | 139787 | 1(Win) |
| std::from_chars | 366.219 | 0.650241 | 91.7619ms | 80000 | 30 | 5.50514e+07 | 208329 | 2(Loss) |
| strtoll/strtoull | 256.141 | 1.01682 | 280.157ms | 80000 | 48 | 4.40305e+08 | 297859 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 462.776 | 1.93841 | 1494ms | 800000 | 48 | 4.90199e+10 | 1.64861e+06 | 1(Win) |
| std::from_chars | 347.185 | 2.26096 | 403.052ms | 800000 | 30 | 7.40571e+10 | 2.1975e+06 | 2(Loss) |
| strtoll/strtoull | 246.979 | 2.45961 | 556.912ms | 800000 | 30 | 1.73185e+11 | 3.08908e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 804.647 | 0.0699008 | 0.2376ms | 800 | 30 | 13.1782 | 948.167 | 1(Win) |
| std::from_chars | 499.186 | 0.0535593 | 0.331073ms | 800 | 30 | 20.1023 | 1528.37 | 2(Loss) |
| strtoll/strtoull | 297.16 | 0.21539 | 0.559509ms | 800 | 30 | 917.426 | 2567.43 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 830.95 | 0.563858 | 1.77655ms | 8000 | 30 | 80406.5 | 9181.53 | 1(Win) |
| std::from_chars | 458.859 | 0.0264241 | 3.13425ms | 8000 | 30 | 579.085 | 16626.9 | 2(Loss) |
| strtoll/strtoull | 253.291 | 2.27852 | 6.07261ms | 8000 | 30 | 1.41308e+07 | 30121.1 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 403.099 | 0.934176 | 36.1701ms | 80000 | 30 | 9.37853e+07 | 189268 | 1(Win) |
| strtoll/strtoull | 290.791 | 0.867749 | 50.4702ms | 80000 | 30 | 1.55499e+08 | 262367 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 542.74 | 1.83316 | 1278.32ms | 800000 | 48 | 3.18741e+10 | 1.40572e+06 | 1(Win) |
| std::from_chars | 392.23 | 1.40391 | 846.685ms | 800000 | 30 | 2.23717e+10 | 1.94513e+06 | 2(Loss) |
| strtoll/strtoull | 273.626 | 2.08535 | 504.038ms | 800000 | 30 | 1.01425e+11 | 2.78826e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 856.113 | 0.0453608 | 0.480838ms | 800 | 30 | 4.9023 | 891.167 | 1(Win) |
| std::from_chars | 492.177 | 0.0615301 | 0.311428ms | 800 | 30 | 27.292 | 1550.13 | 2(Loss) |
| strtoll/strtoull | 295.057 | 0.184375 | 0.549655ms | 800 | 30 | 681.857 | 2585.73 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 859.363 | 0.0364189 | 3.94122ms | 8000 | 30 | 313.62 | 8877.97 | 1(Win) |
| std::from_chars | 458.08 | 0.761226 | 16.2216ms | 8000 | 48 | 771552 | 16655.1 | 2(Loss) |
| strtoll/strtoull | 303.228 | 0.117277 | 4.676ms | 8000 | 30 | 26120.8 | 25160.6 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 630.393 | 0.738957 | 23.3025ms | 80000 | 30 | 2.39948e+07 | 121026 | 1(Win) |
| strtoll/strtoull | 295.133 | 0.697396 | 247.07ms | 80000 | 48 | 1.56008e+08 | 258507 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 560.841 | 2.07794 | 1239.07ms | 800000 | 48 | 3.83538e+10 | 1.36035e+06 | 1(Win) |
| std::from_chars | 399.658 | 2.20386 | 345.194ms | 800000 | 30 | 5.30994e+10 | 1.90898e+06 | 2(Loss) |
| strtoll/strtoull | 281.936 | 1.73632 | 496.247ms | 800000 | 30 | 6.62307e+10 | 2.70607e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 832.509 | 0.0555372 | 0.218129ms | 800 | 30 | 7.77126 | 916.433 | 1(Win) |
| std::from_chars | 488.594 | 0.0519047 | 0.329454ms | 800 | 30 | 19.7069 | 1561.5 | 2(Loss) |
| strtoll/strtoull | 283.308 | 0.102332 | 0.587167ms | 800 | 30 | 227.826 | 2692.97 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 858.699 | 1.24865 | 8.37312ms | 8000 | 48 | 590775 | 8884.83 | 1(Win) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 530.354 | 0.5308 | 63.7874ms | 80000 | 30 | 1.74917e+07 | 143855 | 1(Win) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 474.143 | 2.0824 | 290.457ms | 800000 | 30 | 3.36828e+10 | 1.60909e+06 | 1(Win) |
| std::from_chars | 374.133 | 1.6374 | 370.955ms | 800000 | 30 | 3.34473e+10 | 2.03922e+06 | 2(Loss) |
| strtoll/strtoull | 256.928 | 2.41173 | 529.306ms | 800000 | 30 | 1.53863e+11 | 2.96947e+06 | 3(Loss) |
