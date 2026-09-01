# str-to-int-uniform  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 124.852 | 1.28426 | 0.15036ms | 100 | 120 | 11547.7 | 763.842 | 23.6811 | 1(Win) |
| std::from_chars | 110.113 | 1.00065 | 0.169823ms | 100 | 120 | 9012.85 | 866.083 | 26.9867 | 2(Loss) |
| strtoll/strtoull | 81.2918 | 0.622553 | 0.223845ms | 100 | 120 | 6400.9 | 1173.15 | 36.8043 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 137.738 | 0.352261 | 1.28387ms | 1000 | 120 | 71384.4 | 6923.83 | 21.9928 | 1(Win) |
| std::from_chars | 119.401 | 0.306913 | 1.48809ms | 1000 | 120 | 72109.4 | 7987.12 | 25.3805 | 2(Loss) |
| strtoll/strtoull | 83.831 | 0.678757 | 2.1011ms | 1000 | 120 | 715485 | 11376.1 | 36.1834 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 136.887 | 0.267091 | 12.6197ms | 10000 | 120 | 4.15503e+06 | 69668.7 | 22.1908 | 1(Win) |
| std::from_chars | 111.42 | 1.49537 | 15.3149ms | 10000 | 120 | 1.96585e+08 | 85592.6 | 27.2532 | 2(Loss) |
| strtoll/strtoull | 80.7182 | 0.716384 | 21.155ms | 10000 | 120 | 8.59667e+07 | 118149 | 37.6301 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 129.981 | 0.319081 | 132.586ms | 100000 | 120 | 6.57692e+08 | 733702 | 23.372 | 1(Win) |
| std::from_chars | 111.508 | 0.285657 | 154.072ms | 100000 | 120 | 7.16241e+08 | 855251 | 27.2364 | 2(Loss) |
| strtoll/strtoull | 80.6865 | 0.398116 | 212.277ms | 100000 | 120 | 2.65705e+09 | 1.18195e+06 | 37.6568 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.989 | 1.69241 | 0.107964ms | 100 | 120 | 9036.91 | 512.758 | 15.7422 | 1(Win) |
| std::from_chars | 166.141 | 1.47976 | 0.120717ms | 100 | 120 | 8657.9 | 574.017 | 17.6999 | 2(Loss) |
| strtoll/strtoull | 105.429 | 0.830434 | 0.177583ms | 100 | 120 | 6771.31 | 904.567 | 28.2362 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.016 | 0.385045 | 0.868246ms | 1000 | 120 | 38497 | 4651.7 | 14.7524 | 1(Win) |
| std::from_chars | 176.479 | 0.467467 | 0.997183ms | 1000 | 120 | 76576.6 | 5403.89 | 17.149 | 2(Loss) |
| strtoll/strtoull | 111.539 | 0.891225 | 1.58159ms | 1000 | 120 | 696793 | 8550.16 | 27.184 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 201.987 | 0.610993 | 8.7418ms | 10000 | 120 | 9.98637e+06 | 47214.7 | 15.033 | 1(Win) |
| std::from_chars | 166.974 | 0.998352 | 10.2949ms | 10000 | 120 | 3.90168e+07 | 57115.2 | 18.1745 | 2(Loss) |
| strtoll/strtoull | 106.687 | 1.39002 | 15.9191ms | 10000 | 120 | 1.8527e+08 | 89390.2 | 28.4599 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.969 | 0.573179 | 91.5761ms | 100000 | 120 | 1.03677e+09 | 512813 | 16.3332 | 1(Win) |
| std::from_chars | 168.494 | 0.367875 | 101.41ms | 100000 | 120 | 5.20248e+08 | 565997 | 18.0278 | 2(Loss) |
| strtoll/strtoull | 107.005 | 0.355561 | 160.408ms | 100000 | 120 | 1.20503e+09 | 891240 | 28.3947 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 187.243 | 1.59898 | 0.107801ms | 100 | 120 | 7958.96 | 509.325 | 15.5836 | 1(Win) |
| std::from_chars | 173.154 | 1.37272 | 0.11697ms | 100 | 120 | 6859.31 | 550.767 | 16.9352 | 2(Loss) |
| strtoll/strtoull | 109.427 | 0.917286 | 0.171556ms | 100 | 120 | 7669.06 | 871.517 | 27.1571 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 203.891 | 0.56706 | 0.899638ms | 1000 | 120 | 84419.5 | 4677.37 | 14.8359 | 1(Win) |
| std::from_chars | 179.991 | 0.484844 | 0.982498ms | 1000 | 120 | 79192.2 | 5298.45 | 16.8129 | 2(Loss) |
| strtoll/strtoull | 109.641 | 1.69183 | 1.5702ms | 1000 | 120 | 2.59864e+06 | 8698.12 | 27.6474 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 206.555 | 0.794351 | 8.26037ms | 10000 | 120 | 1.61411e+07 | 46170.4 | 14.6969 | 1(Win) |
| std::from_chars | 168.336 | 0.418606 | 10.1743ms | 10000 | 120 | 6.74895e+06 | 56652.9 | 18.0378 | 2(Loss) |
| strtoll/strtoull | 112.259 | 0.439234 | 15.3016ms | 10000 | 120 | 1.67083e+07 | 84953.2 | 27.0575 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 194.699 | 0.443742 | 88.0891ms | 100000 | 120 | 5.66912e+08 | 489820 | 15.604 | 1(Win) |
| std::from_chars | 168.262 | 0.360334 | 101.725ms | 100000 | 120 | 5.00519e+08 | 566780 | 18.0497 | 2(Loss) |
| strtoll/strtoull | 110.026 | 0.353859 | 155.419ms | 100000 | 120 | 1.1289e+09 | 866775 | 27.6157 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 164.694 | 1.60809 | 0.121717ms | 100 | 120 | 10405.1 | 579.058 | 17.7735 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 160.192 | 1.94156 | 0.141984ms | 100 | 120 | 16032.6 | 595.333 | 18.3683 | 1(Tie) |
| strtoll/strtoull | 91.6304 | 0.753195 | 0.202219ms | 100 | 120 | 7374.24 | 1040.78 | 32.5685 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 169.605 | 0.486343 | 1.06115ms | 1000 | 120 | 89740.7 | 5622.91 | 17.8468 | 1(Win) |
| std::from_chars | 157.916 | 2.46691 | 2.55992ms | 1000 | 240 | 5.32677e+06 | 6039.12 | 19.1695 | 2(Loss) |
| strtoll/strtoull | 97.9295 | 2.25275 | 1.75236ms | 1000 | 120 | 5.77536e+06 | 9738.38 | 30.9608 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 161.2 | 1.35714 | 10.584ms | 10000 | 120 | 7.73573e+07 | 59160.8 | 18.8034 | 1(Win) |
| std::from_chars | 155.578 | 0.692978 | 11.0621ms | 10000 | 120 | 2.16534e+07 | 61299 | 19.5232 | 2(Loss) |
| strtoll/strtoull | 101.064 | 0.381641 | 17.2964ms | 10000 | 120 | 1.55632e+07 | 94363.5 | 30.059 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 160.069 | 0.373111 | 106.88ms | 100000 | 120 | 5.92984e+08 | 595789 | 18.9785 | 1(Win) |
| std::from_chars | 156.513 | 0.427477 | 109.044ms | 100000 | 120 | 8.14159e+08 | 609327 | 19.4097 | 2(Loss) |
| strtoll/strtoull | 95.1959 | 0.354149 | 179.72ms | 100000 | 120 | 1.51049e+09 | 1.0018e+06 | 31.9117 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.857 | 0.935272 | 0.183997ms | 200 | 120 | 9011.29 | 926.542 | 14.4493 | 1(Win) |
| std::from_chars | 190.089 | 0.527103 | 0.471202ms | 200 | 240 | 6713.45 | 1003.4 | 15.6781 | 2(Loss) |
| strtoll/strtoull | 129.511 | 0.531375 | 0.30261ms | 200 | 120 | 7349.07 | 1472.73 | 23.1797 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 196.552 | 2.3007 | 1.73568ms | 2000 | 120 | 5.98146e+06 | 9704.03 | 15.4207 | 1(Win) |
| std::from_chars | 184.219 | 0.394124 | 1.91105ms | 2000 | 120 | 199819 | 10353.7 | 16.4569 | 2(Loss) |
| strtoll/strtoull | 130.465 | 0.590552 | 2.66264ms | 2000 | 120 | 894475 | 14619.6 | 23.1572 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 199.337 | 0.692445 | 17.1023ms | 20000 | 120 | 5.26788e+07 | 95684.6 | 15.2257 | 1(Win) |
| std::from_chars | 173.568 | 0.569961 | 19.7094ms | 20000 | 120 | 4.70751e+07 | 109890 | 17.4966 | 2(Loss) |
| strtoll/strtoull | 130.561 | 0.360487 | 26.396ms | 20000 | 120 | 3.32811e+07 | 146089 | 23.2697 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 192.19 | 0.243885 | 179.021ms | 200000 | 120 | 7.02989e+08 | 992429 | 15.8042 | 1(Win) |
| std::from_chars | 169.097 | 0.400575 | 201.939ms | 200000 | 120 | 2.44983e+09 | 1.12796e+06 | 17.9629 | 2(Loss) |
| strtoll/strtoull | 128.621 | 0.20732 | 266.922ms | 200000 | 120 | 1.13423e+09 | 1.48292e+06 | 23.6217 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 267.51 | 1.02266 | 0.147091ms | 200 | 120 | 6380.08 | 713 | 11.0621 | 1(Win) |
| std::from_chars | 254.979 | 1.12082 | 0.15215ms | 200 | 120 | 8435.45 | 748.042 | 11.6205 | 2(Loss) |
| strtoll/strtoull | 160.933 | 0.597542 | 0.231237ms | 200 | 120 | 6018.5 | 1185.18 | 18.6025 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 256.041 | 1.07929 | 1.37264ms | 2000 | 120 | 775705 | 7449.39 | 11.8317 | 1(Win) |
| std::from_chars | 243.757 | 1.55599 | 1.41721ms | 2000 | 120 | 1.77886e+06 | 7824.81 | 12.4299 | 2(Loss) |
| strtoll/strtoull | 162.263 | 0.330639 | 2.13161ms | 2000 | 120 | 181264 | 11754.7 | 18.7005 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 259.288 | 1.00215 | 13.188ms | 20000 | 120 | 6.52145e+07 | 73560.9 | 11.7049 | 1(Win) |
| std::from_chars | 237.667 | 0.42152 | 14.384ms | 20000 | 120 | 1.37323e+07 | 80253.1 | 12.7779 | 2(Loss) |
| strtoll/strtoull | 160.767 | 0.391324 | 21.3188ms | 20000 | 120 | 2.58654e+07 | 118640 | 18.8974 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 240.035 | 0.396585 | 143.049ms | 200000 | 120 | 1.1917e+09 | 794613 | 12.6542 | 1(Win) |
| std::from_chars | 226.989 | 0.382921 | 151.019ms | 200000 | 120 | 1.24236e+09 | 840282 | 13.3828 | 2(Loss) |
| strtoll/strtoull | 155.406 | 0.360624 | 220.377ms | 200000 | 120 | 2.3508e+09 | 1.22733e+06 | 19.5494 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 259.972 | 1.42786 | 0.151099ms | 200 | 120 | 13169.1 | 733.675 | 11.3835 | 1(Win) |
| std::from_chars | 242.408 | 1.18279 | 0.156127ms | 200 | 120 | 10393.5 | 786.833 | 12.239 | 2(Loss) |
| strtoll/strtoull | 157.108 | 0.603262 | 0.234228ms | 200 | 120 | 6436.57 | 1214.03 | 19.0508 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 255.8 | 1.14742 | 1.38832ms | 2000 | 120 | 878376 | 7456.39 | 11.8419 | 1(Win) |
| std::from_chars | 242.923 | 1.0551 | 1.42313ms | 2000 | 120 | 823547 | 7851.65 | 12.4669 | 2(Loss) |
| strtoll/strtoull | 163.747 | 0.699496 | 2.09796ms | 2000 | 120 | 796643 | 11648.1 | 18.5204 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 281.372 | 0.440953 | 12.4712ms | 20000 | 120 | 1.07217e+07 | 67787.3 | 10.7944 | 1(Win) |
| std::from_chars | 237.443 | 0.624667 | 14.5574ms | 20000 | 120 | 3.02149e+07 | 80328.8 | 12.7893 | 2(Loss) |
| strtoll/strtoull | 162.889 | 0.724939 | 21.0669ms | 20000 | 120 | 8.6469e+07 | 117095 | 18.6473 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 250.939 | 0.435207 | 136.847ms | 200000 | 120 | 1.3131e+09 | 760085 | 12.1052 | 1(Win) |
| std::from_chars | 227.149 | 0.324362 | 357.475ms | 200000 | 240 | 1.78037e+09 | 839692 | 13.3717 | 2(Loss) |
| strtoll/strtoull | 159.284 | 0.196171 | 214.932ms | 200000 | 120 | 6.6216e+08 | 1.19745e+06 | 19.0769 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 260.27 | 1.17076 | 0.162664ms | 200 | 120 | 8833.42 | 732.833 | 11.3773 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 256.304 | 1.58324 | 0.161538ms | 200 | 120 | 16658 | 744.175 | 11.5086 | 1(Tie) |
| strtoll/strtoull | 158.951 | 0.633077 | 0.231741ms | 200 | 120 | 6925.1 | 1199.96 | 18.832 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 271.748 | 2.19308 | 1.30306ms | 2000 | 120 | 2.84326e+06 | 7018.81 | 11.1351 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 268.203 | 1.27272 | 1.28213ms | 2000 | 120 | 983059 | 7111.57 | 11.2885 | 1(Tie) |
| strtoll/strtoull | 153.135 | 2.03721 | 2.24005ms | 2000 | 120 | 7.72621e+06 | 12455.4 | 19.8102 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 269.757 | 1.48657 | 12.883ms | 20000 | 120 | 1.32577e+08 | 70706.2 | 11.2546 | 1(Win) |
| std::from_chars | 256.311 | 0.438132 | 13.3604ms | 20000 | 120 | 1.27561e+07 | 74415.4 | 11.8489 | 2(Loss) |
| strtoll/strtoull | 160.475 | 0.410025 | 21.3452ms | 20000 | 120 | 2.85002e+07 | 118856 | 18.9265 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 257.796 | 0.529043 | 133.277ms | 200000 | 120 | 1.83854e+09 | 739869 | 11.7827 | 1(Win) |
| std::from_chars | 253.486 | 0.437403 | 135.106ms | 200000 | 120 | 1.29987e+09 | 752449 | 11.9822 | 2(Loss) |
| strtoll/strtoull | 150.153 | 0.252105 | 228.751ms | 200000 | 120 | 1.23065e+09 | 1.27027e+06 | 20.2348 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.483 | 0.732512 | 0.554476ms | 400 | 240 | 19314.9 | 1224.69 | 9.61147 | 1(Win) |
| std::from_chars | 300.569 | 0.966613 | 0.24921ms | 400 | 120 | 18060 | 1269.16 | 9.94269 | 2(Loss) |
| strtoll/strtoull | 220.348 | 0.516102 | 0.331268ms | 400 | 120 | 9579.77 | 1731.22 | 13.6497 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 309.194 | 1.27001 | 5.28778ms | 4000 | 240 | 5.89232e+06 | 12337.6 | 9.79062 | 1(Win) |
| std::from_chars | 289.969 | 0.45506 | 2.39614ms | 4000 | 120 | 430067 | 13155.5 | 10.4614 | 2(Loss) |
| strtoll/strtoull | 220.175 | 1.60672 | 3.13632ms | 4000 | 120 | 9.29922e+06 | 17325.8 | 13.7828 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 308.329 | 0.525918 | 22.5355ms | 40000 | 120 | 5.08054e+07 | 123722 | 9.85008 | 1(Win) |
| std::from_chars | 295.3 | 0.293525 | 23.3213ms | 40000 | 120 | 1.7253e+07 | 129180 | 10.2868 | 2(Loss) |
| strtoll/strtoull | 222.616 | 0.303297 | 30.949ms | 40000 | 120 | 3.24134e+07 | 171358 | 13.6486 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 295.433 | 0.291683 | 234.775ms | 400000 | 120 | 1.70218e+09 | 1.29122e+06 | 10.2823 | 1(Win) |
| std::from_chars | 277.851 | 0.2343 | 249.553ms | 400000 | 120 | 1.24171e+09 | 1.37293e+06 | 10.9339 | 2(Loss) |
| strtoll/strtoull | 214.9 | 0.351135 | 320.475ms | 400000 | 120 | 4.66205e+09 | 1.7751e+06 | 14.138 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 394.583 | 0.649257 | 0.475757ms | 400 | 240 | 9455.58 | 966.767 | 7.54203 | 1(Win) |
| vn::from_chars | 374.817 | 1.38685 | 0.208864ms | 400 | 120 | 23907 | 1017.75 | 7.95162 | 2(Loss) |
| strtoll/strtoull | 260.177 | 0.340754 | 0.652413ms | 400 | 240 | 5990.71 | 1466.2 | 11.5358 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 386.543 | 1.55641 | 4.46113ms | 4000 | 240 | 5.66222e+06 | 9868.76 | 7.83876 | 1(Win) |
| vn::from_chars | 368.49 | 1.10512 | 1.89128ms | 4000 | 120 | 1.57062e+06 | 10352.2 | 8.2262 | 2(Loss) |
| strtoll/strtoull | 255.727 | 1.89834 | 2.6993ms | 4000 | 120 | 9.62263e+06 | 14917.1 | 11.8621 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 384.919 | 0.454696 | 17.8793ms | 40000 | 120 | 2.43672e+07 | 99103.9 | 7.8854 | 1(Win) |
| vn::from_chars | 376.826 | 0.46766 | 18.2387ms | 40000 | 120 | 2.68954e+07 | 101232 | 8.06154 | 2(Loss) |
| strtoll/strtoull | 260.699 | 0.633297 | 26.3105ms | 40000 | 120 | 1.03047e+08 | 146326 | 11.6529 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 349.586 | 0.375365 | 198.816ms | 400000 | 120 | 2.01327e+09 | 1.09121e+06 | 8.68689 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 347.768 | 0.323425 | 201.505ms | 400000 | 120 | 1.51032e+09 | 1.09691e+06 | 8.73363 | 1(Tie) |
| strtoll/strtoull | 247.957 | 0.606947 | 278.959ms | 400000 | 120 | 1.04629e+10 | 1.53845e+06 | 12.2529 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 397.696 | 0.483087 | 0.19222ms | 400 | 120 | 2576.62 | 959.2 | 7.48804 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 392.718 | 1.00051 | 0.197464ms | 400 | 120 | 11334 | 971.358 | 7.59733 | 1(Tie) |
| strtoll/strtoull | 261.376 | 0.615165 | 0.286346ms | 400 | 120 | 9672.82 | 1459.47 | 11.4601 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 380.174 | 0.498569 | 1.89773ms | 4000 | 120 | 300322 | 10034.1 | 7.97069 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 371.188 | 1.1793 | 1.86894ms | 4000 | 120 | 1.76263e+06 | 10277 | 8.16148 | 1(Tie) |
| strtoll/strtoull | 270.032 | 0.691699 | 2.58184ms | 4000 | 120 | 1.14579e+06 | 14126.8 | 11.2389 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 387.65 | 0.777531 | 17.7243ms | 40000 | 120 | 7.02518e+07 | 98405.7 | 7.83625 | 1(Win) |
| vn::from_chars | 370.239 | 0.754626 | 18.4833ms | 40000 | 120 | 7.2544e+07 | 103033 | 8.20138 | 2(Loss) |
| strtoll/strtoull | 259.185 | 1.27445 | 26.3556ms | 40000 | 120 | 4.22209e+08 | 147181 | 11.7208 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 349.104 | 0.440741 | 199.302ms | 400000 | 120 | 2.7833e+09 | 1.09271e+06 | 8.69963 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 346.655 | 2.35304 | 198.183ms | 400000 | 120 | 8.04575e+10 | 1.10043e+06 | 8.76289 | 1(Tie) |
| strtoll/strtoull | 256.979 | 0.200261 | 270.149ms | 400000 | 120 | 1.06047e+09 | 1.48444e+06 | 11.8228 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 374.268 | 1.24728 | 0.204146ms | 400 | 120 | 19393.9 | 1019.24 | 7.96392 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 364.099 | 1.46083 | 0.20828ms | 400 | 120 | 28109.9 | 1047.71 | 8.1976 | 1(Tie) |
| strtoll/strtoull | 267.148 | 0.436675 | 0.269513ms | 400 | 120 | 4665.68 | 1427.93 | 11.2313 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 398.454 | 0.614941 | 1.76754ms | 4000 | 120 | 415922 | 9573.75 | 7.60675 | 1(Win) |
| vn::from_chars | 368.747 | 0.93945 | 1.92762ms | 4000 | 120 | 1.13342e+06 | 10345 | 8.22291 | 2(Loss) |
| strtoll/strtoull | 256.595 | 1.48663 | 2.71011ms | 4000 | 120 | 5.86157e+06 | 14866.6 | 11.8255 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 387.741 | 0.581109 | 17.7817ms | 40000 | 120 | 3.92223e+07 | 98382.6 | 7.83022 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 384.988 | 0.456798 | 18.1364ms | 40000 | 120 | 2.45841e+07 | 99086.1 | 7.88954 | 1(Tie) |
| strtoll/strtoull | 263.739 | 0.440885 | 26.0501ms | 40000 | 120 | 4.87981e+07 | 144639 | 11.5188 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 357.214 | 0.300024 | 193.958ms | 400000 | 120 | 1.23185e+09 | 1.0679e+06 | 8.50296 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 353.734 | 2.33419 | 195.305ms | 400000 | 120 | 7.60359e+10 | 1.07841e+06 | 8.5867 | 1(Tie) |
| strtoll/strtoull | 244.093 | 0.369959 | 282.379ms | 400000 | 120 | 4.01143e+09 | 1.56281e+06 | 12.4481 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 539.682 | 1.20598 | 0.279073ms | 800 | 120 | 34879 | 1413.68 | 5.55057 | 1(Win) |
| std::from_chars | 507.941 | 0.932036 | 0.290266ms | 800 | 120 | 23518 | 1502.03 | 5.8964 | 2(Loss) |
| strtoll/strtoull | 386.336 | 0.283687 | 0.897756ms | 800 | 240 | 7532.52 | 1974.81 | 7.79259 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 566.812 | 1.3833 | 2.50804ms | 8000 | 120 | 4.16021e+06 | 13460.2 | 5.35011 | 1(Win) |
| std::from_chars | 517.585 | 0.861916 | 2.73868ms | 8000 | 120 | 1.93699e+06 | 14740.4 | 5.85652 | 2(Loss) |
| strtoll/strtoull | 374.636 | 1.65405 | 3.68396ms | 8000 | 120 | 1.36157e+07 | 20364.8 | 8.10196 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 571.515 | 0.748392 | 24.0388ms | 80000 | 120 | 1.19775e+08 | 133494 | 5.31303 | 1(Win) |
| std::from_chars | 531.399 | 0.365561 | 25.8293ms | 80000 | 120 | 3.30552e+07 | 143572 | 5.71487 | 2(Loss) |
| strtoll/strtoull | 372.229 | 0.491728 | 36.8991ms | 80000 | 120 | 1.21897e+08 | 204965 | 8.16192 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 501.536 | 0.888877 | 273.335ms | 800000 | 120 | 2.19402e+10 | 1.52121e+06 | 6.05603 | 1(Win) |
| std::from_chars | 450.487 | 0.655376 | 306.026ms | 800000 | 120 | 1.47835e+10 | 1.69359e+06 | 6.74288 | 2(Loss) |
| strtoll/strtoull | 349.264 | 0.581699 | 393.35ms | 800000 | 120 | 1.93754e+10 | 2.18442e+06 | 8.69854 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 636.796 | 0.706392 | 0.237298ms | 800 | 120 | 8595.14 | 1198.09 | 4.69019 | 1(Win) |
| vn::from_chars | 606.745 | 0.907656 | 0.569288ms | 800 | 240 | 31262.3 | 1257.43 | 4.93597 | 2(Loss) |
| strtoll/strtoull | 391.767 | 1.51857 | 0.858776ms | 800 | 240 | 209895 | 1947.43 | 7.68181 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 620.88 | 2.03549 | 23.0899ms | 80000 | 120 | 7.50733e+08 | 122880 | 4.8906 | 1(Win) |
| vn::from_chars | 574.127 | 1.57963 | 54.297ms | 80000 | 240 | 1.05751e+09 | 132887 | 5.29004 | 2(Loss) |
| strtoll/strtoull | 394.017 | 1.21552 | 82.3363ms | 80000 | 240 | 1.32948e+09 | 193631 | 7.7097 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 574.267 | 1.1734 | 242.362ms | 800000 | 120 | 2.91624e+10 | 1.32855e+06 | 5.2893 | 1(Win) |
| std::from_chars | 551.466 | 0.859167 | 248.287ms | 800000 | 120 | 1.69543e+10 | 1.38348e+06 | 5.50696 | 2(Loss) |
| strtoll/strtoull | 372.084 | 1.45876 | 372.323ms | 800000 | 120 | 1.07361e+11 | 2.05045e+06 | 8.16471 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 647.299 | 0.812858 | 0.237291ms | 800 | 120 | 11014.9 | 1178.65 | 4.61502 | 1(Win) |
| vn::from_chars | 612.188 | 1.34663 | 0.24921ms | 800 | 120 | 33797.5 | 1246.25 | 4.88572 | 2(Loss) |
| strtoll/strtoull | 411.882 | 0.663951 | 0.357965ms | 800 | 120 | 18150.4 | 1852.33 | 7.29726 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 663.913 | 1.8159 | 15.0616ms | 8000 | 300 | 1.30636e+07 | 11491.6 | 4.56521 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 646.297 | 1.93002 | 2.23742ms | 8000 | 120 | 6.22902e+06 | 11804.8 | 4.68782 | 1(Tie) |
| strtoll/strtoull | 432.801 | 1.35044 | 22.0503ms | 8000 | 300 | 1.70012e+07 | 17628 | 7.00978 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 640.626 | 1.72902 | 21.6486ms | 80000 | 120 | 5.08804e+08 | 119093 | 4.74195 | 1(Win) |
| std::from_chars | 600.738 | 1.61106 | 53.2611ms | 80000 | 240 | 1.00472e+09 | 127000 | 5.05564 | 2(Loss) |
| strtoll/strtoull | 416.554 | 1.73834 | 33.7267ms | 80000 | 120 | 1.21644e+09 | 183155 | 7.2903 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 577.777 | 0.944252 | 235.317ms | 800000 | 120 | 1.8656e+10 | 1.32048e+06 | 5.25534 | 1(Win) |
| std::from_chars | 545.716 | 0.932793 | 254.988ms | 800000 | 120 | 2.04079e+10 | 1.39805e+06 | 5.566 | 2(Loss) |
| strtoll/strtoull | 401.761 | 0.899209 | 340.759ms | 800000 | 120 | 3.49904e+10 | 1.89899e+06 | 7.56295 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 646.468 | 1.0542 | 0.240698ms | 800 | 120 | 18574.2 | 1180.17 | 4.62884 | 1(Win) |
| std::from_chars | 623.686 | 0.661962 | 0.242525ms | 800 | 120 | 7868.55 | 1223.28 | 4.78861 | 2(Loss) |
| strtoll/strtoull | 407.624 | 0.634489 | 0.356947ms | 800 | 120 | 16923.5 | 1871.67 | 7.38423 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 652.103 | 1.79363 | 2.19337ms | 8000 | 120 | 5.28441e+06 | 11699.7 | 4.64495 | 1(Win) |
| vn::from_chars | 609.053 | 1.64077 | 2.3241ms | 8000 | 120 | 5.0693e+06 | 12526.7 | 4.96836 | 2(Loss) |
| strtoll/strtoull | 405.176 | 1.44809 | 8.32606ms | 8000 | 240 | 1.78442e+07 | 18829.8 | 7.48814 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 646.179 | 2.06898 | 21.1792ms | 80000 | 120 | 7.16091e+08 | 118069 | 4.69865 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 636.082 | 0.524014 | 21.7258ms | 80000 | 120 | 4.74047e+07 | 119944 | 4.77488 | 1(Tie) |
| strtoll/strtoull | 420.528 | 0.460066 | 32.7133ms | 80000 | 120 | 8.36011e+07 | 181424 | 7.22412 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 590.522 | 0.771286 | 237.76ms | 800000 | 120 | 1.19157e+10 | 1.29197e+06 | 5.14337 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 584.631 | 0.455897 | 238.05ms | 800000 | 120 | 4.24747e+09 | 1.30499e+06 | 5.19535 | 1(Tie) |
| strtoll/strtoull | 395.807 | 0.511316 | 348.879ms | 800000 | 120 | 1.16567e+10 | 1.92756e+06 | 7.6766 | 3(Loss) |
