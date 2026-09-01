# str-to-int-natural  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 129.312 | 1.08909 | 0.1554ms | 100 | 120 | 7741.6 | 737.5 | 22.8603 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 125.621 | 1.85432 | 0.1666ms | 100 | 120 | 23780.8 | 759.167 | 23.6153 | 1(Tie) |
| strtoll/strtoull | 68.8159 | 2.30623 | 0.6151ms | 100 | 240 | 245154 | 1385.83 | 43.5644 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 140.113 | 1.76577 | 6.1401ms | 1000 | 480 | 6.93351e+06 | 6806.46 | 21.5963 | 1(Win) |
| std::from_chars | 133.908 | 1.39355 | 7.0141ms | 1000 | 480 | 4.72798e+06 | 7121.88 | 22.6079 | 2(Loss) |
| strtoll/strtoull | 72.4768 | 1.52168 | 5.6437ms | 1000 | 240 | 9.62185e+06 | 13158.3 | 41.8632 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 133.654 | 2.36008 | 29.805ms | 10000 | 240 | 6.80619e+08 | 71354.2 | 22.7209 | 1(Win) |
| std::from_chars | 121.605 | 2.47909 | 32.6746ms | 10000 | 240 | 9.07177e+08 | 78423.8 | 24.9755 | 2(Loss) |
| strtoll/strtoull | 69.3157 | 1.78715 | 24.9162ms | 10000 | 120 | 7.25502e+08 | 137584 | 43.8319 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 132.967 | 1.52075 | 129.739ms | 100000 | 120 | 1.4276e+10 | 717228 | 22.8496 | 1(Win) |
| std::from_chars | 122.914 | 1.22425 | 139.935ms | 100000 | 120 | 1.08273e+10 | 775889 | 24.7174 | 2(Loss) |
| strtoll/strtoull | 69.5408 | 0.963238 | 248.821ms | 100000 | 120 | 2.09396e+10 | 1.37139e+06 | 43.696 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 208.453 | 1.78586 | 0.0966ms | 100 | 120 | 8010.5 | 457.5 | 13.8923 | 1(Win) |
| std::from_chars | 192.986 | 1.53897 | 0.1023ms | 100 | 120 | 6940.48 | 494.167 | 14.8879 | 2(Loss) |
| strtoll/strtoull | 97.7292 | 0.594078 | 0.1974ms | 100 | 120 | 4032.91 | 975.833 | 30.6313 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 237.577 | 2.15446 | 0.7665ms | 1000 | 120 | 897529 | 4014.17 | 12.7103 | 1(Win) |
| std::from_chars | 218.357 | 2.48619 | 1.8749ms | 1000 | 240 | 2.82973e+06 | 4367.5 | 13.8084 | 2(Loss) |
| strtoll/strtoull | 93.9503 | 2.02137 | 4.3334ms | 1000 | 240 | 1.01043e+07 | 10150.8 | 32.2832 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 236.358 | 1.3798 | 17.5683ms | 10000 | 240 | 7.43879e+07 | 40348.8 | 12.8413 | 1(Win) |
| std::from_chars | 206.49 | 1.748 | 8.3379ms | 10000 | 120 | 7.82107e+07 | 46185 | 14.703 | 2(Loss) |
| strtoll/strtoull | 92.5882 | 2.24696 | 18.281ms | 10000 | 120 | 6.42777e+08 | 103002 | 32.8133 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 223.679 | 2.27327 | 80.8192ms | 100000 | 120 | 1.12728e+10 | 426358 | 13.581 | 1(Win) |
| std::from_chars | 200.762 | 1.33593 | 85.4033ms | 100000 | 120 | 4.83263e+09 | 475028 | 15.1298 | 2(Loss) |
| strtoll/strtoull | 90.5733 | 1.2542 | 187.641ms | 100000 | 120 | 2.09273e+10 | 1.05293e+06 | 33.5443 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 218.191 | 1.3644 | 0.2245ms | 100 | 240 | 8535.39 | 437.083 | 13.3513 | 1(Win) |
| std::from_chars | 181.364 | 1.70656 | 0.1126ms | 100 | 120 | 9663.17 | 525.833 | 16.2929 | 2(Loss) |
| strtoll/strtoull | 98.571 | 1.10876 | 0.1872ms | 100 | 120 | 13808.8 | 967.5 | 30.0613 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 245.634 | 2.49632 | 1.7051ms | 1000 | 240 | 2.25442e+06 | 3882.5 | 12.2793 | 1(Win) |
| strtoll/strtoull | 103.886 | 2.038 | 1.6783ms | 1000 | 120 | 4.20027e+06 | 9180 | 29.1944 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 247.638 | 0.96486 | 6.9886ms | 10000 | 120 | 1.65682e+07 | 38510.8 | 12.2592 | 1(Win) |
| std::from_chars | 207.848 | 1.10114 | 19.8914ms | 10000 | 240 | 6.1264e+07 | 45883.3 | 14.6023 | 2(Loss) |
| strtoll/strtoull | 95.246 | 1.55182 | 42.7111ms | 10000 | 240 | 5.79432e+08 | 100128 | 31.8938 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.947 | 1.38379 | 74.6053ms | 100000 | 120 | 3.9183e+09 | 412941 | 13.1506 | 1(Win) |
| std::from_chars | 203.703 | 1.56586 | 83.7226ms | 100000 | 120 | 6.44901e+09 | 468170 | 14.914 | 2(Loss) |
| strtoll/strtoull | 98.4179 | 0.808404 | 173.105ms | 100000 | 120 | 7.36361e+09 | 969005 | 30.8742 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 185.48 | 1.46109 | 0.1122ms | 100 | 120 | 6772.41 | 514.167 | 16.0403 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 182.813 | 1.20435 | 0.1133ms | 100 | 120 | 4736.69 | 521.667 | 16.0309 | 1(Tie) |
| strtoll/strtoull | 91.626 | 2.1408 | 0.3169ms | 100 | 120 | 59579.1 | 1040.83 | 32.6058 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 193.648 | 1.98356 | 4.6215ms | 1000 | 480 | 4.58045e+06 | 4924.79 | 15.5902 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 192.273 | 1.50624 | 7.0022ms | 1000 | 300 | 1.67445e+06 | 4960 | 15.723 | 1(Tie) |
| strtoll/strtoull | 89.0141 | 2.20899 | 4.6868ms | 1000 | 240 | 1.34425e+07 | 10713.8 | 34.0795 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 190.519 | 2.34815 | 9.3503ms | 10000 | 120 | 1.65789e+08 | 50056.7 | 15.9346 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 185.263 | 1.20919 | 9.5776ms | 10000 | 120 | 4.64931e+07 | 51476.7 | 16.3898 | 1(Tie) |
| strtoll/strtoull | 89.5084 | 1.59233 | 19.4355ms | 10000 | 120 | 3.45399e+08 | 106546 | 33.9449 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 181.071 | 0.960355 | 94.8185ms | 100000 | 120 | 3.07008e+09 | 526687 | 16.7751 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 177.514 | 1.30119 | 96.986ms | 100000 | 120 | 5.86405e+09 | 537240 | 17.1035 | 1(Tie) |
| strtoll/strtoull | 83.9742 | 1.36483 | 201.605ms | 100000 | 120 | 2.88301e+10 | 1.13568e+06 | 36.1839 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 213.509 | 1.06586 | 0.1854ms | 200 | 120 | 10879.6 | 893.333 | 13.9362 | 1(Win) |
| std::from_chars | 195.709 | 0.628921 | 0.467ms | 200 | 240 | 9016.56 | 974.583 | 15.1992 | 2(Loss) |
| strtoll/strtoull | 130.269 | 0.625023 | 0.2804ms | 200 | 120 | 10049.7 | 1464.17 | 23.016 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 226.998 | 2.20244 | 1.5449ms | 2000 | 120 | 4.10966e+06 | 8402.5 | 13.3431 | 1(Win) |
| std::from_chars | 197.448 | 1.61028 | 1.7921ms | 2000 | 120 | 2.9036e+06 | 9660 | 15.3489 | 2(Loss) |
| strtoll/strtoull | 128.448 | 1.31381 | 2.7011ms | 2000 | 120 | 4.56723e+06 | 14849.2 | 23.6124 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 223.812 | 1.65328 | 16.3822ms | 20000 | 120 | 2.38212e+08 | 85220.8 | 13.5702 | 1(Win) |
| std::from_chars | 189.956 | 1.06828 | 43.7334ms | 20000 | 240 | 2.76141e+08 | 100410 | 15.9896 | 2(Loss) |
| strtoll/strtoull | 118.294 | 2.24295 | 28.669ms | 20000 | 120 | 1.56949e+09 | 161238 | 25.6827 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 206.848 | 1.27752 | 163.246ms | 200000 | 120 | 1.66522e+10 | 922102 | 14.6888 | 1(Win) |
| std::from_chars | 182.389 | 1.09994 | 188.775ms | 200000 | 120 | 1.58774e+10 | 1.04576e+06 | 16.6561 | 2(Loss) |
| strtoll/strtoull | 118.692 | 0.733675 | 296.652ms | 200000 | 120 | 1.66803e+10 | 1.60697e+06 | 25.6013 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 315.699 | 1.34854 | 0.1241ms | 200 | 120 | 7965.69 | 604.167 | 9.35325 | 1(Win) |
| std::from_chars | 286.102 | 0.891243 | 1.1464ms | 200 | 300 | 10590.9 | 666.667 | 10.3537 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 337.534 | 1.22548 | 1.0725ms | 2000 | 120 | 575461 | 5650.83 | 8.95672 | 1(Win) |
| std::from_chars | 298.266 | 2.43831 | 6.051ms | 2000 | 480 | 1.16701e+07 | 6394.79 | 10.1431 | 2(Loss) |
| strtoll/strtoull | 160.517 | 1.7048 | 2.1882ms | 2000 | 120 | 4.92431e+06 | 11882.5 | 18.8878 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 329.118 | 1.92265 | 24.7232ms | 20000 | 240 | 2.97967e+08 | 57953.3 | 9.2275 | 1(Win) |
| std::from_chars | 304.117 | 1.48765 | 11.4144ms | 20000 | 120 | 1.04462e+08 | 62717.5 | 9.98343 | 2(Loss) |
| strtoll/strtoull | 151.492 | 2.13822 | 23.0294ms | 20000 | 120 | 8.6969e+08 | 125904 | 20.0543 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 307.279 | 1.70642 | 110.31ms | 200000 | 120 | 1.34633e+10 | 620722 | 9.88468 | 1(Win) |
| std::from_chars | 283.765 | 1.19011 | 121.486ms | 200000 | 120 | 7.67892e+09 | 672158 | 10.6922 | 2(Loss) |
| strtoll/strtoull | 147.945 | 1.09794 | 230.26ms | 200000 | 120 | 2.40435e+10 | 1.28923e+06 | 20.5316 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 328.853 | 1.50771 | 0.1266ms | 200 | 120 | 9176.47 | 580 | 8.96612 | 1(Win) |
| std::from_chars | 285.389 | 1.2767 | 0.1463ms | 200 | 120 | 8736.69 | 668.333 | 10.2983 | 2(Loss) |
| strtoll/strtoull | 158.643 | 1.51942 | 1.1486ms | 200 | 480 | 160183 | 1202.29 | 18.8616 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 354.306 | 0.311155 | 1.0281ms | 2000 | 120 | 33669.5 | 5383.33 | 8.53905 | 1(Win) |
| std::from_chars | 313.387 | 1.60814 | 2.6628ms | 2000 | 240 | 2.2991e+06 | 6086.25 | 9.65384 | 2(Loss) |
| strtoll/strtoull | 164.309 | 1.76932 | 2.1296ms | 2000 | 120 | 5.06211e+06 | 11608.3 | 18.4574 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 347.633 | 1.33917 | 10.0832ms | 20000 | 120 | 6.47848e+07 | 54866.7 | 8.73443 | 1(Win) |
| std::from_chars | 307.931 | 0.778167 | 11.1663ms | 20000 | 120 | 2.78792e+07 | 61940.8 | 9.86237 | 2(Loss) |
| strtoll/strtoull | 161.015 | 0.950776 | 21.5236ms | 20000 | 120 | 1.52217e+08 | 118458 | 18.8678 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 330.126 | 1.15625 | 105.179ms | 200000 | 120 | 5.3553e+09 | 577763 | 9.1982 | 1(Win) |
| std::from_chars | 285.451 | 1.21119 | 120.683ms | 200000 | 120 | 7.85966e+09 | 668187 | 10.6402 | 2(Loss) |
| strtoll/strtoull | 154.823 | 0.829437 | 221.666ms | 200000 | 120 | 1.25296e+10 | 1.23195e+06 | 19.6254 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 402.961 | 2.3015 | 0.1053ms | 200 | 120 | 14240.9 | 473.333 | 7.30975 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 399.445 | 1.79516 | 0.1006ms | 200 | 120 | 8817.23 | 477.5 | 7.26646 | 1(Tie) |
| strtoll/strtoull | 178.118 | 0.702421 | 0.2054ms | 200 | 120 | 6789.22 | 1070.83 | 16.6762 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 474.268 | 0.437644 | 0.7716ms | 2000 | 120 | 37173.7 | 4021.67 | 6.35763 | 1(Win) |
| vn::from_chars | 448.964 | 2.04944 | 5.4086ms | 2000 | 300 | 2.27421e+06 | 4248.33 | 6.71756 | 2(Loss) |
| strtoll/strtoull | 184.985 | 1.91386 | 1.9974ms | 2000 | 120 | 4.67291e+06 | 10310.8 | 16.3919 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 460.703 | 1.35476 | 7.5187ms | 20000 | 120 | 3.77505e+07 | 41400.8 | 6.58941 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 453.923 | 1.3932 | 18.3826ms | 20000 | 240 | 8.22491e+07 | 42019.2 | 6.68639 | 1(Tie) |
| strtoll/strtoull | 174.426 | 1.32291 | 46.1536ms | 20000 | 240 | 5.02237e+08 | 109350 | 17.4136 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 445.921 | 1.21087 | 77.0872ms | 200000 | 120 | 3.21902e+09 | 427732 | 6.81081 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 436.024 | 1.3956 | 79.4187ms | 200000 | 120 | 4.47243e+09 | 437442 | 6.96589 | 1(Tie) |
| strtoll/strtoull | 174.461 | 0.992845 | 197.62ms | 200000 | 120 | 1.41386e+10 | 1.09328e+06 | 17.4151 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 287.359 | 0.734939 | 0.2746ms | 400 | 120 | 11422.3 | 1327.5 | 10.3699 | 1(Win) |
| strtoll/strtoull | 174.819 | 2.13095 | 2.0103ms | 400 | 480 | 1.03784e+06 | 2182.08 | 17.2288 | 2(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 360.075 | 2.14681 | 2.0149ms | 4000 | 120 | 6.20728e+06 | 10594.2 | 8.42101 | 1(Win) |
| std::from_chars | 286.102 | 0.936068 | 5.716ms | 4000 | 240 | 3.73855e+06 | 13333.3 | 10.5936 | 2(Loss) |
| strtoll/strtoull | 183.223 | 1.60088 | 3.9006ms | 4000 | 120 | 1.33309e+07 | 20820 | 16.5754 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 336.676 | 1.57209 | 102.945ms | 40000 | 480 | 1.52298e+09 | 113305 | 9.02199 | 1(Win) |
| std::from_chars | 274.702 | 1.6932 | 59.6956ms | 40000 | 240 | 1.32685e+09 | 138867 | 11.0583 | 2(Loss) |
| strtoll/strtoull | 179.683 | 1.41878 | 39.9654ms | 40000 | 120 | 1.08872e+09 | 212302 | 16.9109 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 343.355 | 1.13116 | 200.222ms | 400000 | 120 | 1.89524e+10 | 1.11101e+06 | 8.84862 | 1(Win) |
| std::from_chars | 266.975 | 0.954881 | 258.792ms | 400000 | 120 | 2.23388e+10 | 1.42886e+06 | 11.3807 | 2(Loss) |
| strtoll/strtoull | 177.638 | 0.856326 | 393.337ms | 400000 | 120 | 4.05796e+10 | 2.14745e+06 | 17.1055 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 472.896 | 1.33443 | 0.1623ms | 400 | 120 | 13904.8 | 806.667 | 6.2655 | 1(Win) |
| std::from_chars | 372.166 | 1.77047 | 0.8921ms | 400 | 240 | 79037.7 | 1025 | 8.00329 | 2(Loss) |
| strtoll/strtoull | 215.418 | 1.80797 | 0.8018ms | 400 | 240 | 246008 | 1770.83 | 13.933 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 501.769 | 2.13833 | 1.4419ms | 4000 | 120 | 3.17134e+06 | 7602.5 | 6.03949 | 1(Win) |
| std::from_chars | 379.903 | 1.20609 | 4.5169ms | 4000 | 240 | 3.52001e+06 | 10041.2 | 7.9781 | 2(Loss) |
| strtoll/strtoull | 216.795 | 2.49034 | 3.2268ms | 4000 | 120 | 2.30419e+07 | 17595.8 | 13.9992 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 466.91 | 2.04992 | 14.748ms | 40000 | 120 | 3.36596e+08 | 81700.8 | 6.50465 | 1(Win) |
| std::from_chars | 377.105 | 1.99501 | 18.1517ms | 40000 | 120 | 4.88726e+08 | 101158 | 8.05414 | 2(Loss) |
| strtoll/strtoull | 216.509 | 1.11271 | 31.8508ms | 40000 | 120 | 4.61228e+08 | 176191 | 14.034 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 473.2 | 1.49135 | 146.114ms | 400000 | 120 | 1.73448e+10 | 806148 | 6.41956 | 1(Win) |
| std::from_chars | 368.542 | 0.931058 | 185.077ms | 400000 | 120 | 1.1145e+10 | 1.03508e+06 | 8.24308 | 2(Loss) |
| strtoll/strtoull | 209.647 | 0.823584 | 328.945ms | 400000 | 120 | 2.69487e+10 | 1.81958e+06 | 14.4938 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 505.258 | 0.830282 | 0.5032ms | 400 | 240 | 9430.96 | 755 | 5.88269 | 1(Win) |
| std::from_chars | 387.279 | 0.73722 | 0.1961ms | 400 | 120 | 6327.73 | 985 | 7.76348 | 2(Loss) |
| strtoll/strtoull | 214.51 | 2.43715 | 0.333ms | 400 | 120 | 225409 | 1778.33 | 13.979 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 496.651 | 2.17575 | 3.3686ms | 4000 | 240 | 6.70264e+06 | 7680.83 | 6.0917 | 1(Win) |
| std::from_chars | 383.805 | 2.00137 | 1.8321ms | 4000 | 120 | 4.74829e+06 | 9939.17 | 7.89501 | 2(Loss) |
| strtoll/strtoull | 221.209 | 1.04487 | 16.7851ms | 4000 | 480 | 1.5584e+07 | 17244.8 | 13.7145 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 493.296 | 2.3998 | 33.4158ms | 40000 | 240 | 8.26548e+08 | 77330.8 | 6.15676 | 1(Win) |
| std::from_chars | 372.531 | 1.61004 | 95.92ms | 40000 | 480 | 1.3047e+09 | 102400 | 8.15389 | 2(Loss) |
| strtoll/strtoull | 202.305 | 2.27334 | 78.1121ms | 40000 | 240 | 4.41008e+09 | 188562 | 15.0151 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 494.863 | 1.84952 | 139.58ms | 400000 | 120 | 2.43921e+10 | 770859 | 6.13763 | 1(Win) |
| std::from_chars | 366.048 | 1.4945 | 189.644ms | 400000 | 120 | 2.91081e+10 | 1.04213e+06 | 8.29998 | 2(Loss) |
| strtoll/strtoull | 214.876 | 1.05669 | 321.001ms | 400000 | 120 | 4.22296e+10 | 1.7753e+06 | 14.1411 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 626.216 | 1.68242 | 0.1296ms | 400 | 120 | 12604.3 | 609.167 | 4.69033 | 1(Win) |
| std::from_chars | 422.291 | 1.86169 | 0.2072ms | 400 | 120 | 33938.4 | 903.333 | 7.01671 | 2(Loss) |
| strtoll/strtoull | 253.188 | 0.880763 | 0.2921ms | 400 | 120 | 21131.7 | 1506.67 | 11.8904 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 585.525 | 2.2874 | 1.2433ms | 4000 | 120 | 2.66498e+06 | 6515 | 5.16069 | 1(Win) |
| strtoll/strtoull | 247.547 | 1.51938 | 2.8339ms | 4000 | 120 | 6.57839e+06 | 15410 | 12.253 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 650.44 | 2.45806 | 53.8446ms | 40000 | 480 | 9.97539e+08 | 58647.9 | 4.66004 | 1(Win) |
| std::from_chars | 489.626 | 2.04308 | 33.2439ms | 40000 | 240 | 6.08098e+08 | 77910.4 | 6.20228 | 2(Loss) |
| strtoll/strtoull | 235.272 | 2.27502 | 30.0201ms | 40000 | 120 | 1.6328e+09 | 162140 | 12.914 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 626.259 | 1.7633 | 109.13ms | 400000 | 120 | 1.38435e+10 | 609125 | 4.85076 | 1(Win) |
| std::from_chars | 548.587 | 1.68559 | 126.85ms | 400000 | 120 | 1.6486e+10 | 695368 | 5.53736 | 2(Loss) |
| strtoll/strtoull | 231.055 | 1.15084 | 296.412ms | 400000 | 120 | 4.33217e+10 | 1.65099e+06 | 13.1495 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 787.889 | 1.09301 | 0.202ms | 800 | 120 | 13442.6 | 968.333 | 3.78472 | 1(Win) |
| strtoll/strtoull | 310.296 | 0.300035 | 1.0932ms | 800 | 240 | 13061.2 | 2458.75 | 9.7023 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 802.784 | 1.27477 | 12.3232ms | 8000 | 300 | 4.40316e+06 | 9503.67 | 3.77496 | 1(Win) |
| std::from_chars | 538.181 | 0.973176 | 13.447ms | 8000 | 480 | 9.1358e+06 | 14176.2 | 5.63306 | 2(Loss) |
| strtoll/strtoull | 296.556 | 1.49965 | 4.7265ms | 8000 | 120 | 1.78618e+07 | 25726.7 | 10.2356 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 806.966 | 1.81187 | 17.9348ms | 80000 | 120 | 3.5213e+08 | 94544.2 | 3.76348 | 1(Win) |
| std::from_chars | 526.895 | 1.3005 | 26.5217ms | 80000 | 120 | 4.25535e+08 | 144799 | 5.76598 | 2(Loss) |
| strtoll/strtoull | 283.466 | 1.15989 | 48.768ms | 80000 | 120 | 1.16949e+09 | 269147 | 10.719 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 764.306 | 1.223 | 179.411ms | 800000 | 120 | 1.78846e+10 | 998212 | 3.97426 | 1(Win) |
| std::from_chars | 505.711 | 1.42223 | 275.048ms | 800000 | 120 | 5.52457e+10 | 1.50865e+06 | 6.00821 | 2(Loss) |
| strtoll/strtoull | 270.335 | 0.874672 | 504.622ms | 800000 | 120 | 7.31217e+10 | 2.8222e+06 | 11.2389 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1045.12 | 1.4281 | 0.1504ms | 800 | 120 | 13042 | 730 | 2.8384 | 1(Win) |
| std::from_chars | 707.791 | 0.501017 | 0.4995ms | 800 | 240 | 6999.83 | 1077.92 | 4.22522 | 2(Loss) |
| strtoll/strtoull | 338.833 | 1.53605 | 2.5768ms | 800 | 480 | 574193 | 2251.67 | 8.88634 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1061.48 | 0.624724 | 1.3872ms | 8000 | 120 | 241943 | 7187.5 | 2.84789 | 1(Win) |
| std::from_chars | 698.929 | 2.18231 | 10.1789ms | 8000 | 480 | 2.72388e+07 | 10915.8 | 4.33529 | 2(Loss) |
| strtoll/strtoull | 336.963 | 2.2657 | 4.1734ms | 8000 | 120 | 3.15794e+07 | 22641.7 | 9.00554 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1077.97 | 1.99793 | 13.0035ms | 80000 | 120 | 2.39944e+08 | 70775.8 | 2.81683 | 1(Win) |
| std::from_chars | 698.353 | 1.39976 | 19.9841ms | 80000 | 120 | 2.80622e+08 | 109248 | 4.34939 | 2(Loss) |
| strtoll/strtoull | 335.387 | 0.910785 | 41.3264ms | 80000 | 120 | 5.1511e+08 | 227480 | 9.05895 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1014.82 | 1.62249 | 134.996ms | 800000 | 120 | 1.78544e+10 | 751796 | 2.9926 | 1(Win) |
| std::from_chars | 658.444 | 1.2362 | 206.193ms | 800000 | 120 | 2.46209e+10 | 1.1587e+06 | 4.61361 | 2(Loss) |
| strtoll/strtoull | 320.832 | 1.00386 | 430.722ms | 800000 | 120 | 6.83832e+10 | 2.378e+06 | 9.47143 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1045.12 | 1.56003 | 0.3028ms | 800 | 120 | 15563 | 730 | 2.8308 | 1(Win) |
| std::from_chars | 686.302 | 0.513253 | 0.5195ms | 800 | 240 | 7813.11 | 1111.67 | 4.35412 | 2(Loss) |
| strtoll/strtoull | 342.894 | 0.776722 | 0.4198ms | 800 | 120 | 35840.3 | 2225 | 8.78571 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1131.12 | 1.56445 | 7.2551ms | 8000 | 480 | 5.34473e+06 | 6745 | 2.67335 | 1(Win) |
| strtoll/strtoull | 348.142 | 0.845028 | 9.7702ms | 8000 | 240 | 8.23037e+06 | 21914.6 | 8.71424 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1059.49 | 2.41545 | 64.0757ms | 80000 | 480 | 1.45218e+09 | 72009.8 | 2.86581 | 1(Win) |
| std::from_chars | 666.313 | 2.1981 | 21.3916ms | 80000 | 120 | 7.60149e+08 | 114502 | 4.55849 | 2(Loss) |
| strtoll/strtoull | 325.594 | 1.50204 | 100.122ms | 80000 | 240 | 2.97303e+09 | 234322 | 9.33162 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1086.02 | 1.88605 | 125.621ms | 800000 | 120 | 2.10664e+10 | 702508 | 2.79724 | 1(Win) |
| std::from_chars | 662.742 | 1.20076 | 208.126ms | 800000 | 120 | 2.29289e+10 | 1.15119e+06 | 4.58431 | 2(Loss) |
| strtoll/strtoull | 329.68 | 0.76981 | 416.678ms | 800000 | 120 | 3.80841e+10 | 2.31418e+06 | 9.2168 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 758.515 | 0.986483 | 0.2367ms | 800 | 120 | 11814.4 | 1005.83 | 3.94531 | 1(Win) |
| std::from_chars | 473.875 | 1.92019 | 0.3184ms | 800 | 120 | 114689 | 1610 | 6.324 | 2(Loss) |
| strtoll/strtoull | 306.094 | 0.256406 | 0.4876ms | 800 | 120 | 4901.26 | 2492.5 | 9.8576 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 762.399 | 1.94915 | 4.2972ms | 8000 | 240 | 9.13095e+06 | 10007.1 | 3.97145 | 1(Win) |
| std::from_chars | 635.099 | 1.33552 | 11.3011ms | 8000 | 480 | 1.23549e+07 | 12012.9 | 4.77119 | 2(Loss) |
| strtoll/strtoull | 294.78 | 2.10279 | 4.6628ms | 8000 | 120 | 3.55432e+07 | 25881.7 | 10.2978 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 797.774 | 0.864275 | 88.9125ms | 80000 | 480 | 3.27918e+08 | 95633.5 | 3.80742 | 1(Win) |
| std::from_chars | 516.327 | 2.04719 | 63.3505ms | 80000 | 240 | 2.19614e+09 | 147763 | 5.88241 | 2(Loss) |
| strtoll/strtoull | 278.832 | 1.52366 | 116.315ms | 80000 | 240 | 4.17139e+09 | 273620 | 10.8961 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 802.776 | 0.759011 | 177.121ms | 800000 | 120 | 6.24409e+09 | 950377 | 3.78231 | 1(Win) |
| std::from_chars | 649.805 | 0.425175 | 213.957ms | 800000 | 120 | 2.99041e+09 | 1.1741e+06 | 4.6755 | 2(Loss) |
| strtoll/strtoull | 279.461 | 0.888569 | 482.819ms | 800000 | 120 | 7.06158e+10 | 2.73004e+06 | 10.8724 | 3(Loss) |
