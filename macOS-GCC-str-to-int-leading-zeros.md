# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the GCC 16.1.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 190.715 | 0.474272 | 0.982016ms | 1000 | 30 | 16873.6 | 5000.53 | 1(Win) |
| std::from_chars | 81.9345 | 0.773008 | 2.14605ms | 1000 | 30 | 242860 | 11639.5 | 2(Loss) |
| strtoll/strtoull | 38.5508 | 0.359451 | 4.63309ms | 1000 | 30 | 237210 | 24738.1 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 60.2863 | 0.763514 | 28.7398ms | 10000 | 30 | 4.37642e+07 | 158191 | 1(Win) |
| std::from_chars | 54.8509 | 1.00415 | 32.2071ms | 10000 | 30 | 9.14434e+07 | 173867 | 2(Loss) |
| strtoll/strtoull | 36.2018 | 0.37523 | 47.7668ms | 10000 | 30 | 2.93126e+07 | 263433 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 54.3925 | 0.152044 | 316.502ms | 100000 | 30 | 2.13197e+08 | 1.75332e+06 | 1(Win) |
| std::from_chars | 51.3935 | 0.113107 | 386.262ms | 100000 | 30 | 1.32155e+08 | 1.85563e+06 | 2(Loss) |
| strtoll/strtoull | 37.2 | 0.457283 | 479.4ms | 100000 | 30 | 4.12294e+09 | 2.56364e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 176.554 | 1.4612 | 1.03194ms | 1000 | 30 | 186891 | 5401.6 | 1(Win) |
| std::from_chars | 85.9022 | 0.475324 | 2.05722ms | 1000 | 30 | 83539.6 | 11101.9 | 2(Loss) |
| strtoll/strtoull | 44.6321 | 0.428844 | 3.95494ms | 1000 | 30 | 251899 | 21367.5 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 66.2431 | 0.109676 | 26.1279ms | 10000 | 30 | 747939 | 143966 | 1(Win) |
| std::from_chars | 58.2471 | 0.770727 | 29.4431ms | 10000 | 30 | 4.77721e+07 | 163729 | 2(Loss) |
| strtoll/strtoull | 42.8539 | 0.193605 | 40.7731ms | 10000 | 30 | 5.56898e+06 | 222541 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 60.0024 | 0.0896145 | 286.823ms | 100000 | 30 | 6.08612e+07 | 1.58939e+06 | 1(Win) |
| std::from_chars | 50.5574 | 2.02689 | 350.645ms | 100000 | 30 | 4.38542e+10 | 1.88632e+06 | 2(Loss) |
| strtoll/strtoull | 42.3104 | 0.652258 | 403.052ms | 100000 | 30 | 6.48434e+09 | 2.25399e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 46.3249 | 1.99244 | 2.05184ms | 100 | 48 | 80758 | 2058.67 | 1(Win) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.506 | 1.52616 | 0.920064ms | 1000 | 30 | 161279 | 4804.27 | 1(Win) |
| std::from_chars | 77.9893 | 0.648055 | 2.25306ms | 1000 | 30 | 188397 | 12228.3 | 2(Loss) |
| strtoll/strtoull | 43.7412 | 0.347419 | 3.9959ms | 1000 | 30 | 172126 | 21802.7 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 75.3446 | 0.390629 | 23.1529ms | 10000 | 30 | 7.33408e+06 | 126575 | 1(Win) |
| std::from_chars | 64.7426 | 0.420252 | 26.6248ms | 10000 | 30 | 1.14964e+07 | 147302 | 2(Loss) |
| strtoll/strtoull | 40.4205 | 0.345376 | 42.7098ms | 10000 | 30 | 1.99206e+07 | 235938 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 61.3701 | 0.152702 | 284.222ms | 100000 | 30 | 1.68926e+08 | 1.55397e+06 | 1(Win) |
| std::from_chars | 59.8341 | 0.538649 | 282.428ms | 100000 | 30 | 2.21124e+09 | 1.59386e+06 | 2(Loss) |
| strtoll/strtoull | 42.8047 | 0.11193 | 401.692ms | 100000 | 30 | 1.86565e+08 | 2.22797e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 47.7601 | 0.952284 | 0.375808ms | 100 | 30 | 10847.3 | 1996.8 | 1(Win) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.859 | 1.67702 | 1.74413ms | 1000 | 30 | 194047 | 4795.73 | 1(Win) |
| std::from_chars | 81.22 | 0.706927 | 2.1632ms | 1000 | 30 | 206702 | 11741.9 | 2(Loss) |
| strtoll/strtoull | 41.4689 | 0.250813 | 4.20685ms | 1000 | 30 | 99810.6 | 22997.3 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 71.0798 | 0.325293 | 24.6482ms | 10000 | 30 | 5.71451e+06 | 134170 | 1(Win) |
| std::from_chars | 63.5896 | 0.120307 | 27.2681ms | 10000 | 30 | 976637 | 149973 | 2(Loss) |
| strtoll/strtoull | 40.6454 | 0.281165 | 43.0331ms | 10000 | 30 | 1.30563e+07 | 234633 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 63.4639 | 0.0835505 | 271.317ms | 100000 | 30 | 4.72896e+07 | 1.5027e+06 | 1(Win) |
| std::from_chars | 59.2137 | 0.0823182 | 290.998ms | 100000 | 30 | 5.27313e+07 | 1.61056e+06 | 2(Loss) |
| strtoll/strtoull | 41.7428 | 0.564096 | 433.097ms | 100000 | 30 | 4.98271e+09 | 2.28465e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 349.246 | 1.8714 | 1.02886ms | 2000 | 30 | 313368 | 5461.33 | 1(Win) |
| std::from_chars | 125.784 | 0.547102 | 2.83008ms | 2000 | 30 | 206476 | 15163.7 | 2(Loss) |
| strtoll/strtoull | 73.453 | 0.147091 | 5.56314ms | 2000 | 30 | 43766 | 25966.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.763 | 0.133485 | 24.7731ms | 20000 | 30 | 981458 | 135501 | 1(Win) |
| std::from_chars | 95.5693 | 0.65335 | 36.4201ms | 20000 | 30 | 5.10078e+07 | 199578 | 2(Loss) |
| strtoll/strtoull | 70.1583 | 0.10564 | 49.0578ms | 20000 | 30 | 2.47447e+06 | 271863 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 110.953 | 0.562919 | 308.015ms | 200000 | 30 | 2.80929e+09 | 1.71907e+06 | 1(Win) |
| std::from_chars | 82.3833 | 0.898432 | 445.373ms | 200000 | 30 | 1.298e+10 | 2.31521e+06 | 2(Loss) |
| strtoll/strtoull | 61.8908 | 0.881079 | 2950.05ms | 200000 | 48 | 3.53899e+10 | 3.0818e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 314.813 | 0.978603 | 1.17402ms | 2000 | 30 | 105460 | 6058.67 | 1(Win) |
| std::from_chars | 122.542 | 0.622937 | 3.07098ms | 2000 | 30 | 282031 | 15564.8 | 2(Loss) |
| strtoll/strtoull | 77.6372 | 0.382077 | 4.47411ms | 2000 | 30 | 264329 | 24567.5 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 150.264 | 0.155045 | 23.083ms | 20000 | 30 | 1.16195e+06 | 126933 | 1(Win) |
| std::from_chars | 99.2925 | 0.245525 | 35.04ms | 20000 | 30 | 6.6733e+06 | 192094 | 2(Loss) |
| strtoll/strtoull | 76.8577 | 0.62491 | 45.7631ms | 20000 | 30 | 7.21511e+07 | 248166 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 132.938 | 0.0518518 | 259.656ms | 200000 | 30 | 1.6604e+07 | 1.43477e+06 | 1(Win) |
| std::from_chars | 103.548 | 0.126787 | 339.986ms | 200000 | 30 | 1.63624e+08 | 1.842e+06 | 2(Loss) |
| strtoll/strtoull | 77.4001 | 0.0940951 | 445.459ms | 200000 | 30 | 1.613e+08 | 2.46427e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 397.718 | 1.51273 | 0.900096ms | 2000 | 30 | 157889 | 4795.73 | 1(Win) |
| std::from_chars | 133.683 | 0.6259 | 2.62195ms | 2000 | 30 | 239244 | 14267.7 | 2(Loss) |
| strtoll/strtoull | 76.5733 | 0.316102 | 4.53504ms | 2000 | 30 | 185987 | 24908.8 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 162.653 | 0.148372 | 21.3578ms | 20000 | 30 | 908163 | 117265 | 1(Win) |
| std::from_chars | 109.075 | 0.225157 | 31.956ms | 20000 | 30 | 4.65049e+06 | 174865 | 2(Loss) |
| strtoll/strtoull | 77.3149 | 0.171441 | 44.4831ms | 20000 | 30 | 5.36642e+06 | 246699 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 148.125 | 0.258052 | 234.156ms | 200000 | 30 | 3.31237e+08 | 1.28766e+06 | 1(Win) |
| std::from_chars | 99.7356 | 0.0591291 | 354.576ms | 200000 | 30 | 3.83604e+07 | 1.91241e+06 | 2(Loss) |
| strtoll/strtoull | 74.2141 | 0.336623 | 460.383ms | 200000 | 30 | 2.24541e+09 | 2.57006e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 344.403 | 1.76588 | 1.08186ms | 2000 | 30 | 286927 | 5538.13 | 1(Win) |
| std::from_chars | 130.028 | 0.638081 | 2.75405ms | 2000 | 30 | 262822 | 14668.8 | 2(Loss) |
| strtoll/strtoull | 76.7047 | 0.303214 | 4.52198ms | 2000 | 30 | 170544 | 24866.1 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 193.908 | 0.187045 | 19.23ms | 20000 | 30 | 1.01551e+06 | 98363.7 | 1(Win) |
| std::from_chars | 101.775 | 0.417931 | 35.2072ms | 20000 | 30 | 1.8404e+07 | 187409 | 2(Loss) |
| strtoll/strtoull | 76.4162 | 0.301339 | 45.8112ms | 20000 | 30 | 1.69716e+07 | 249600 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 136.594 | 1.91785 | 235.429ms | 200000 | 30 | 2.15151e+10 | 1.39636e+06 | 1(Win) |
| std::from_chars | 100.989 | 0.387592 | 358.921ms | 200000 | 30 | 1.60761e+09 | 1.88867e+06 | 2(Loss) |
| strtoll/strtoull | 74.4448 | 0.401909 | 484.476ms | 200000 | 30 | 3.18104e+09 | 2.5621e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 122.812 | 2.08102 | 0.570112ms | 400 | 30 | 125347 | 3106.13 | 1(Win) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 440.428 | 1.04218 | 1.63994ms | 4000 | 30 | 244442 | 8661.33 | 1(Win) |
| std::from_chars | 168.502 | 0.462229 | 4.15795ms | 4000 | 30 | 328509 | 22638.9 | 2(Loss) |
| strtoll/strtoull | 115.932 | 0.263065 | 6.57997ms | 4000 | 30 | 224781 | 32904.5 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 228.254 | 0.420561 | 30.3631ms | 40000 | 30 | 1.48206e+07 | 167125 | 1(Win) |
| std::from_chars | 140.281 | 0.482287 | 48.8451ms | 40000 | 30 | 5.16003e+07 | 271932 | 2(Loss) |
| strtoll/strtoull | 110.316 | 0.350324 | 62.6371ms | 40000 | 30 | 4.40252e+07 | 345796 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.295 | 0.649314 | 339.643ms | 400000 | 30 | 4.58786e+09 | 1.90454e+06 | 1(Win) |
| std::from_chars | 140.458 | 0.404496 | 487.679ms | 400000 | 30 | 3.62055e+09 | 2.7159e+06 | 2(Loss) |
| strtoll/strtoull | 112.482 | 0.114344 | 606.286ms | 400000 | 30 | 4.51129e+08 | 3.39139e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 382.081 | 1.42843 | 0.198912ms | 400 | 30 | 6101.63 | 998.4 | 1(Win) |
| strtoll/strtoull | 123.15 | 1.78753 | 0.589824ms | 400 | 30 | 91976.4 | 3097.6 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 343.609 | 0.68586 | 2.02496ms | 4000 | 30 | 173934 | 11101.9 | 1(Win) |
| std::from_chars | 176.624 | 0.463384 | 3.91987ms | 4000 | 30 | 300486 | 21597.9 | 2(Loss) |
| strtoll/strtoull | 120.722 | 0.667938 | 5.69395ms | 4000 | 30 | 1.33641e+06 | 31598.9 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.371 | 0.432554 | 29.0752ms | 40000 | 30 | 1.51272e+07 | 164164 | 1(Win) |
| std::from_chars | 152.281 | 0.221726 | 45.121ms | 40000 | 30 | 9.25519e+06 | 250505 | 2(Loss) |
| strtoll/strtoull | 122.371 | 0.463084 | 56.458ms | 40000 | 30 | 6.25175e+07 | 311731 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.24 | 0.289556 | 299.402ms | 400000 | 30 | 6.96506e+08 | 1.66406e+06 | 1(Win) |
| std::from_chars | 149.518 | 0.762713 | 446.115ms | 400000 | 30 | 1.13599e+10 | 2.55132e+06 | 2(Loss) |
| strtoll/strtoull | 123.841 | 0.335154 | 583.842ms | 400000 | 30 | 3.19745e+09 | 3.08033e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 121.808 | 2.06215 | 0.589056ms | 400 | 30 | 125121 | 3131.73 | 1(Win) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 456.158 | 1.11136 | 1.54778ms | 4000 | 30 | 259131 | 8362.67 | 1(Win) |
| std::from_chars | 169.075 | 0.764989 | 4.10086ms | 4000 | 30 | 893700 | 22562.1 | 2(Loss) |
| strtoll/strtoull | 122.643 | 0.599446 | 5.57286ms | 4000 | 30 | 1.04293e+06 | 31104 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 275.217 | 0.418244 | 62.999ms | 40000 | 30 | 1.00821e+07 | 138607 | 1(Win) |
| std::from_chars | 156.552 | 0.245335 | 43.6831ms | 40000 | 30 | 1.07212e+07 | 243669 | 2(Loss) |
| strtoll/strtoull | 128.747 | 0.197919 | 53.332ms | 40000 | 30 | 1.03167e+07 | 296294 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 240.063 | 0.167723 | 307.219ms | 400000 | 30 | 2.13098e+08 | 1.58904e+06 | 1(Win) |
| std::from_chars | 152.093 | 0.143834 | 447.252ms | 400000 | 30 | 3.9043e+08 | 2.50813e+06 | 2(Loss) |
| strtoll/strtoull | 118.065 | 0.389683 | 586.143ms | 400000 | 30 | 4.75575e+09 | 3.231e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 190.228 | 0.883463 | 0.414208ms | 400 | 30 | 9416.09 | 2005.33 | 1(Win) |
| strtoll/strtoull | 119.209 | 2.44855 | 1.01018ms | 400 | 30 | 184179 | 3200 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 435.282 | 1.06373 | 2.30784ms | 4000 | 30 | 260713 | 8763.73 | 1(Win) |
| std::from_chars | 194.956 | 0.459613 | 3.55917ms | 4000 | 30 | 242634 | 19566.9 | 2(Loss) |
| strtoll/strtoull | 125.325 | 0.302706 | 5.53498ms | 4000 | 30 | 254686 | 30438.4 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 303.713 | 0.255483 | 22.6171ms | 40000 | 30 | 3.08916e+06 | 125602 | 1(Win) |
| std::from_chars | 164.309 | 0.140211 | 41.954ms | 40000 | 30 | 3.17895e+06 | 232166 | 2(Loss) |
| strtoll/strtoull | 122.566 | 0.292545 | 55.5341ms | 40000 | 30 | 2.48706e+07 | 311236 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 265.961 | 0.806862 | 250.38ms | 400000 | 30 | 4.01795e+09 | 1.43431e+06 | 1(Win) |
| std::from_chars | 166.77 | 0.180326 | 418.759ms | 400000 | 30 | 5.10417e+08 | 2.2874e+06 | 2(Loss) |
| strtoll/strtoull | 128.328 | 0.123523 | 536.305ms | 400000 | 30 | 4.04478e+08 | 2.97261e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 269.298 | 2.40964 | 0.594944ms | 800 | 30 | 139810 | 2833.07 | 1(Win) |
| strtoll/strtoull | 178.814 | 1.89373 | 0.797952ms | 800 | 30 | 195855 | 4266.67 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 574.964 | 1.27196 | 2.41894ms | 8000 | 30 | 854605 | 13269.3 | 1(Win) |
| std::from_chars | 259.527 | 0.315458 | 5.3399ms | 8000 | 30 | 258001 | 29397.3 | 2(Loss) |
| strtoll/strtoull | 168.915 | 0.75735 | 8.11699ms | 8000 | 30 | 3.51039e+06 | 45166.9 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 410.613 | 0.575382 | 33.5071ms | 80000 | 30 | 3.42884e+07 | 185805 | 1(Win) |
| std::from_chars | 236.771 | 0.407675 | 58.1192ms | 80000 | 30 | 5.17696e+07 | 322227 | 2(Loss) |
| strtoll/strtoull | 181.033 | 0.150485 | 76.0689ms | 80000 | 30 | 1.20662e+07 | 421436 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 365.896 | 1.6393 | 365.323ms | 800000 | 30 | 3.50511e+10 | 2.08513e+06 | 1(Win) |
| std::from_chars | 230.118 | 0.111297 | 590.193ms | 800000 | 30 | 4.08481e+08 | 3.31543e+06 | 2(Loss) |
| strtoll/strtoull | 180.236 | 0.255686 | 807.654ms | 800000 | 30 | 3.51423e+09 | 4.23299e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 266.886 | 2.35502 | 1.26592ms | 800 | 30 | 135968 | 2858.67 | 1(Win) |
| strtoll/strtoull | 183.211 | 1.79129 | 0.770048ms | 800 | 30 | 166928 | 4164.27 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 533.773 | 0.703346 | 2.74995ms | 8000 | 30 | 303198 | 14293.3 | 1(Win) |
| std::from_chars | 258.327 | 0.320533 | 12.523ms | 8000 | 30 | 268848 | 29533.9 | 2(Loss) |
| strtoll/strtoull | 194.659 | 0.193938 | 7.17901ms | 8000 | 30 | 173331 | 39193.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 438.98 | 0.474565 | 31.5479ms | 80000 | 30 | 2.04081e+07 | 173798 | 1(Win) |
| std::from_chars | 236.695 | 0.364561 | 59.02ms | 80000 | 30 | 4.14249e+07 | 322330 | 2(Loss) |
| strtoll/strtoull | 192.062 | 0.146931 | 71.2241ms | 80000 | 30 | 1.02198e+07 | 397235 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 424.704 | 0.0877047 | 325.593ms | 800000 | 30 | 7.44688e+07 | 1.7964e+06 | 1(Win) |
| std::from_chars | 222.167 | 0.980199 | 655.004ms | 800000 | 30 | 3.39917e+10 | 3.43409e+06 | 2(Loss) |
| strtoll/strtoull | 189.581 | 0.542619 | 800.524ms | 800000 | 30 | 1.43054e+10 | 4.02434e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 277.231 | 2.42252 | 2.60506ms | 800 | 48 | 213341 | 2752 | 1(Win) |
| strtoll/strtoull | 180.256 | 1.68432 | 0.779008ms | 800 | 30 | 152465 | 4232.53 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 546.164 | 0.273426 | 2.55104ms | 8000 | 30 | 43766 | 13969.1 | 1(Win) |
| std::from_chars | 258.626 | 0.290314 | 5.33888ms | 8000 | 30 | 220035 | 29499.7 | 2(Loss) |
| strtoll/strtoull | 193.941 | 0.214664 | 7.13293ms | 8000 | 30 | 213934 | 39338.7 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.193 | 0.141248 | 29.8849ms | 80000 | 30 | 1.63795e+06 | 165427 | 1(Win) |
| std::from_chars | 249.901 | 1.65211 | 54.1798ms | 80000 | 30 | 7.63208e+08 | 305297 | 2(Loss) |
| strtoll/strtoull | 194.574 | 0.284436 | 71.777ms | 80000 | 30 | 3.73163e+07 | 392107 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 405.814 | 0.133453 | 348.793ms | 800000 | 30 | 1.88843e+08 | 1.88002e+06 | 1(Win) |
| std::from_chars | 225.393 | 1.206 | 633.348ms | 800000 | 30 | 4.99934e+10 | 3.38493e+06 | 2(Loss) |
| strtoll/strtoull | 172.955 | 0.707842 | 799.924ms | 800000 | 30 | 2.92489e+10 | 4.41121e+06 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 566.584 | 0.715418 | 2.57203ms | 8000 | 30 | 278415 | 13465.6 | 1(Win) |
| std::from_chars | 267.926 | 0.330201 | 5.83194ms | 8000 | 30 | 265232 | 28475.7 | 2(Loss) |
| strtoll/strtoull | 190.877 | 0.0853971 | 7.24019ms | 8000 | 30 | 34952.5 | 39970.1 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.309 | 1.00815 | 34.785ms | 80000 | 30 | 1.13573e+08 | 192998 | 1(Win) |
| std::from_chars | 258.948 | 0.169139 | 54.551ms | 80000 | 30 | 7.45009e+06 | 294630 | 2(Loss) |
| strtoll/strtoull | 191.098 | 0.0828227 | 72.108ms | 80000 | 30 | 3.28011e+06 | 399241 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 377.283 | 0.409045 | 360.367ms | 800000 | 30 | 2.05263e+09 | 2.0222e+06 | 1(Win) |
| std::from_chars | 224.979 | 0.919345 | 630.227ms | 800000 | 30 | 2.91592e+10 | 3.39116e+06 | 2(Loss) |
| strtoll/strtoull | 186.523 | 0.664631 | 798.29ms | 800000 | 30 | 2.21715e+10 | 4.09032e+06 | 3(Loss) |
