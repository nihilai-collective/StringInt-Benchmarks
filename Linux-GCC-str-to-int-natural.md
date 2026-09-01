# str-to-int-natural  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 105.099 | 1.54906 | 0.176581ms | 100 | 120 | 23709.5 | 907.408 | 28.0435 | 1(Win) |
| std::from_chars | 96.8312 | 1.54204 | 0.231646ms | 100 | 120 | 27678.4 | 984.883 | 30.6167 | 2(Loss) |
| strtoll/strtoull | 87.8446 | 0.279129 | 0.501651ms | 100 | 240 | 2203.9 | 1085.64 | 34.0015 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 138.655 | 1.79856 | 1.29904ms | 1000 | 120 | 1.83638e+06 | 6878.05 | 21.8319 | 1(Win) |
| std::from_chars | 132.476 | 0.826885 | 3.17488ms | 1000 | 240 | 850414 | 7198.87 | 22.8667 | 2(Loss) |
| strtoll/strtoull | 88.2525 | 0.663189 | 4.6775ms | 1000 | 240 | 1.23263e+06 | 10806.2 | 34.3636 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.437 | 0.701579 | 12.4575ms | 10000 | 120 | 2.68539e+07 | 67427.4 | 21.473 | 1(Win) |
| std::from_chars | 128.13 | 0.426499 | 13.5084ms | 10000 | 120 | 1.20924e+07 | 74430.1 | 23.7094 | 2(Loss) |
| strtoll/strtoull | 84.0615 | 1.29035 | 20.5914ms | 10000 | 120 | 2.57158e+08 | 113450 | 36.1131 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.725 | 0.494451 | 133.879ms | 100000 | 120 | 1.32841e+09 | 672903 | 21.4321 | 1(Win) |
| std::from_chars | 124.908 | 0.259593 | 137.01ms | 100000 | 120 | 4.71395e+08 | 763501 | 24.3195 | 2(Loss) |
| strtoll/strtoull | 86.3827 | 0.295589 | 198.448ms | 100000 | 120 | 1.27792e+09 | 1.10401e+06 | 35.1682 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 180.151 | 1.69763 | 0.102674ms | 100 | 120 | 9691.56 | 529.375 | 16.1107 | 1(Win) |
| std::from_chars | 153.328 | 1.53533 | 0.118762ms | 100 | 120 | 10943.2 | 621.983 | 18.9193 | 2(Loss) |
| strtoll/strtoull | 96.5551 | 1.35553 | 0.181116ms | 100 | 120 | 21510.5 | 987.7 | 30.7583 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 210.526 | 2.26871 | 0.815554ms | 1000 | 120 | 1.26744e+06 | 4529.97 | 14.3516 | 1(Win) |
| std::from_chars | 187.988 | 0.784179 | 0.920261ms | 1000 | 120 | 189912 | 5073.06 | 16.0924 | 2(Loss) |
| strtoll/strtoull | 122.289 | 0.547324 | 3.39613ms | 1000 | 240 | 437247 | 7798.55 | 24.7838 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 239.765 | 1.08529 | 7.14229ms | 10000 | 120 | 2.23614e+07 | 39775.4 | 12.6547 | 1(Win) |
| std::from_chars | 209.299 | 0.633091 | 8.38203ms | 10000 | 120 | 9.98577e+06 | 45565.3 | 14.5073 | 2(Loss) |
| strtoll/strtoull | 115.534 | 0.674272 | 14.8846ms | 10000 | 120 | 3.71731e+07 | 82544.7 | 26.2932 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 233.564 | 0.513833 | 72.9568ms | 100000 | 120 | 5.28216e+08 | 408313 | 13.0069 | 1(Win) |
| std::from_chars | 200.216 | 0.582683 | 85.2515ms | 100000 | 120 | 9.24371e+08 | 476322 | 15.1697 | 2(Loss) |
| strtoll/strtoull | 105.663 | 2.16948 | 371.951ms | 100000 | 240 | 9.20191e+10 | 902565 | 28.7531 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 198.489 | 1.62953 | 0.099144ms | 100 | 120 | 7355.88 | 480.467 | 14.7195 | 1(Win) |
| vn::from_chars | 187.399 | 1.67585 | 0.100122ms | 100 | 120 | 8728.06 | 508.9 | 15.4174 | 2(Loss) |
| strtoll/strtoull | 96.4785 | 0.472077 | 0.179644ms | 100 | 120 | 2613.04 | 988.483 | 30.7818 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 260.281 | 0.334676 | 1.67399ms | 1000 | 240 | 36088.9 | 3664.01 | 11.6021 | 1(Win) |
| std::from_chars | 200.448 | 2.33176 | 0.883452ms | 1000 | 120 | 1.47688e+06 | 4757.71 | 15.0788 | 2(Loss) |
| strtoll/strtoull | 117.475 | 1.59988 | 1.4397ms | 1000 | 120 | 2.02426e+06 | 8118.09 | 25.806 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 248.234 | 0.740661 | 6.96917ms | 10000 | 120 | 9.71624e+06 | 38418.4 | 12.2313 | 1(Win) |
| std::from_chars | 218.718 | 0.980797 | 7.9012ms | 10000 | 120 | 2.19468e+07 | 43602.9 | 13.8716 | 2(Loss) |
| strtoll/strtoull | 120.952 | 0.584685 | 14.281ms | 10000 | 120 | 2.55036e+07 | 78847.6 | 25.117 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 246.73 | 0.448358 | 69.2234ms | 100000 | 120 | 3.60402e+08 | 386526 | 12.3136 | 1(Win) |
| std::from_chars | 207.976 | 0.275307 | 193.223ms | 100000 | 240 | 3.8249e+08 | 458550 | 14.6055 | 2(Loss) |
| strtoll/strtoull | 120.081 | 0.318372 | 142.818ms | 100000 | 120 | 7.67192e+08 | 794194 | 25.3032 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 177.985 | 1.06819 | 0.105759ms | 100 | 120 | 3931.09 | 535.817 | 16.3372 | 1(Win) |
| std::from_chars | 143.956 | 1.05226 | 0.128366ms | 100 | 120 | 5831.26 | 662.475 | 20.3573 | 2(Loss) |
| strtoll/strtoull | 85.2015 | 0.430911 | 0.200886ms | 100 | 120 | 2791.66 | 1119.32 | 34.9352 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 187.671 | 1.24521 | 0.925992ms | 1000 | 120 | 480474 | 5081.63 | 16.1156 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 186.361 | 0.572306 | 2.31056ms | 1000 | 240 | 205854 | 5117.35 | 16.2314 | 1(Tie) |
| strtoll/strtoull | 108.084 | 0.39984 | 3.85725ms | 1000 | 240 | 298719 | 8823.48 | 28.0515 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 206.618 | 0.79313 | 8.3826ms | 10000 | 120 | 1.60817e+07 | 46156.3 | 14.6922 | 1(Win) |
| std::from_chars | 184.052 | 0.621714 | 9.40973ms | 10000 | 120 | 1.24533e+07 | 51815.6 | 16.4966 | 2(Loss) |
| strtoll/strtoull | 106.379 | 0.509797 | 16.1504ms | 10000 | 120 | 2.50647e+07 | 89648.6 | 28.5593 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 202.476 | 0.698836 | 84.1547ms | 100000 | 120 | 1.30012e+09 | 471006 | 15.0019 | 1(Win) |
| std::from_chars | 179.177 | 0.40205 | 95.4494ms | 100000 | 120 | 5.4951e+08 | 532251 | 16.9529 | 2(Loss) |
| strtoll/strtoull | 106.218 | 0.186284 | 161.426ms | 100000 | 120 | 3.35688e+08 | 897847 | 28.6094 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 207.748 | 0.768349 | 0.179869ms | 200 | 120 | 5971.54 | 918.108 | 14.2282 | 1(Win) |
| std::from_chars | 180.754 | 1.03093 | 0.20597ms | 200 | 120 | 14201.1 | 1055.22 | 16.4151 | 2(Loss) |
| strtoll/strtoull | 131.279 | 1.20539 | 0.285995ms | 200 | 120 | 36804.5 | 1452.89 | 22.8198 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 272.661 | 0.61831 | 3.20257ms | 2000 | 240 | 448992 | 6995.31 | 11.1084 | 1(Win) |
| std::from_chars | 221.306 | 0.934957 | 1.63892ms | 2000 | 120 | 779183 | 8618.62 | 13.6948 | 2(Loss) |
| strtoll/strtoull | 145.265 | 0.501669 | 5.66832ms | 2000 | 240 | 1.04131e+06 | 13130.1 | 20.8852 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 253.163 | 1.14093 | 13.6058ms | 20000 | 120 | 8.86659e+07 | 75340.8 | 11.9915 | 1(Win) |
| std::from_chars | 226.087 | 0.609979 | 15.3437ms | 20000 | 120 | 3.17774e+07 | 84363.4 | 13.4341 | 2(Loss) |
| strtoll/strtoull | 143.058 | 0.588773 | 24.0139ms | 20000 | 120 | 7.39456e+07 | 133327 | 21.2374 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 246.223 | 0.690509 | 139.505ms | 200000 | 120 | 3.43337e+09 | 774641 | 12.331 | 1(Win) |
| std::from_chars | 215.314 | 0.420546 | 159.714ms | 200000 | 120 | 1.66543e+09 | 885847 | 14.1032 | 2(Loss) |
| strtoll/strtoull | 141.767 | 0.282244 | 242.248ms | 200000 | 120 | 1.73037e+09 | 1.34541e+06 | 21.4298 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 288.901 | 1.25708 | 0.127981ms | 200 | 120 | 8265.44 | 660.208 | 10.0945 | 1(Win) |
| vn::from_chars | 278.223 | 1.0278 | 0.315463ms | 200 | 240 | 11915.2 | 685.546 | 10.5502 | 2(Loss) |
| strtoll/strtoull | 150.853 | 0.701492 | 0.229158ms | 200 | 120 | 9440.14 | 1264.38 | 19.7763 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 353.056 | 1.4125 | 0.996716ms | 2000 | 120 | 698771 | 5402.4 | 8.56792 | 1(Win) |
| std::from_chars | 327.134 | 1.28037 | 1.07674ms | 2000 | 120 | 668751 | 5830.48 | 9.25098 | 2(Loss) |
| strtoll/strtoull | 172.792 | 2.04327 | 1.96465ms | 2000 | 120 | 6.10445e+06 | 11038.4 | 17.5545 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 398.833 | 0.925377 | 8.90704ms | 20000 | 120 | 2.35016e+07 | 47823.3 | 7.60895 | 1(Win) |
| std::from_chars | 360.766 | 0.708552 | 9.65932ms | 20000 | 120 | 1.68397e+07 | 52869.4 | 8.41721 | 2(Loss) |
| strtoll/strtoull | 181.769 | 0.710937 | 18.8775ms | 20000 | 120 | 6.67829e+07 | 104933 | 16.7093 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 361.11 | 0.88145 | 94.2926ms | 200000 | 120 | 2.6011e+09 | 528190 | 8.41052 | 1(Win) |
| std::from_chars | 334.461 | 0.650748 | 102.433ms | 200000 | 120 | 1.65263e+09 | 570275 | 9.08124 | 2(Loss) |
| strtoll/strtoull | 178.552 | 0.250413 | 191.641ms | 200000 | 120 | 8.5867e+08 | 1.06823e+06 | 17.0169 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.824 | 1.8266 | 0.119855ms | 200 | 120 | 14979.9 | 611.675 | 9.35846 | 1(Win) |
| std::from_chars | 291.032 | 1.20906 | 0.127991ms | 200 | 120 | 7534.49 | 655.375 | 10.0751 | 2(Loss) |
| strtoll/strtoull | 155.138 | 0.838024 | 0.220008ms | 200 | 120 | 12738.4 | 1229.45 | 19.2066 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 359.806 | 1.30732 | 0.976948ms | 2000 | 120 | 576326 | 5301.04 | 8.40474 | 1(Win) |
| std::from_chars | 344.22 | 1.29129 | 1.02704ms | 2000 | 120 | 614346 | 5541.07 | 8.79089 | 2(Loss) |
| strtoll/strtoull | 196.919 | 0.665799 | 1.77449ms | 2000 | 120 | 499061 | 9685.97 | 15.4036 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 405.616 | 1.63603 | 8.49431ms | 20000 | 120 | 7.10218e+07 | 47023.5 | 7.4834 | 1(Win) |
| std::from_chars | 367.734 | 0.854923 | 9.34103ms | 20000 | 120 | 2.35954e+07 | 51867.6 | 8.25802 | 2(Loss) |
| strtoll/strtoull | 191.415 | 0.635906 | 17.9678ms | 20000 | 120 | 4.8181e+07 | 99644.7 | 15.8682 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 374.617 | 0.701061 | 91.6046ms | 200000 | 120 | 1.52889e+09 | 509146 | 8.10799 | 1(Win) |
| std::from_chars | 341.51 | 0.696903 | 100.401ms | 200000 | 120 | 1.81794e+09 | 558505 | 8.89376 | 2(Loss) |
| strtoll/strtoull | 185.418 | 0.335254 | 184.944ms | 200000 | 120 | 1.4272e+09 | 1.02867e+06 | 16.3842 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 362.247 | 2.27091 | 0.105472ms | 200 | 120 | 17156.6 | 526.533 | 8.01958 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 347.686 | 1.3805 | 0.109081ms | 200 | 120 | 6882.38 | 548.583 | 8.37104 | 1(Tie) |
| strtoll/strtoull | 165.181 | 1.12343 | 0.209388ms | 200 | 120 | 20193.6 | 1154.7 | 18.0238 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 483.071 | 1.27905 | 0.741781ms | 2000 | 120 | 306050 | 3948.38 | 6.24994 | 1(Win) |
| std::from_chars | 407.042 | 1.45017 | 0.872999ms | 2000 | 120 | 554118 | 4685.88 | 7.42551 | 2(Loss) |
| strtoll/strtoull | 193.689 | 1.45062 | 1.74288ms | 2000 | 120 | 2.44871e+06 | 9847.48 | 15.6563 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 546.337 | 0.702548 | 6.36453ms | 20000 | 120 | 7.21891e+06 | 34911.6 | 5.54552 | 1(Win) |
| std::from_chars | 466.886 | 0.858532 | 7.36ms | 20000 | 120 | 1.47616e+07 | 40852.5 | 6.49987 | 2(Loss) |
| strtoll/strtoull | 204.805 | 0.644231 | 16.8084ms | 20000 | 120 | 4.31961e+07 | 93130 | 14.8329 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 487.271 | 0.860262 | 71.1601ms | 200000 | 120 | 1.3607e+09 | 391435 | 6.2327 | 1(Win) |
| std::from_chars | 404.655 | 1.22469 | 84.4493ms | 200000 | 120 | 3.99877e+09 | 471352 | 7.49859 | 2(Loss) |
| strtoll/strtoull | 203.334 | 0.30014 | 168.942ms | 200000 | 120 | 9.51201e+08 | 938039 | 14.9398 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 376.32 | 1.84165 | 0.207742ms | 400 | 120 | 41821.4 | 1013.68 | 7.91308 | 1(Win) |
| std::from_chars | 320.59 | 0.737181 | 0.590733ms | 400 | 240 | 18466.3 | 1189.9 | 9.31679 | 2(Loss) |
| strtoll/strtoull | 208.453 | 1.1019 | 0.358476ms | 400 | 120 | 48794 | 1830 | 14.4254 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 418.572 | 1.2389 | 1.73615ms | 4000 | 120 | 1.52979e+06 | 9113.61 | 7.23556 | 1(Win) |
| std::from_chars | 316.265 | 1.92459 | 2.26369ms | 4000 | 120 | 6.46657e+06 | 12061.7 | 9.58449 | 2(Loss) |
| strtoll/strtoull | 230.989 | 0.75069 | 3.10556ms | 4000 | 120 | 1.84433e+06 | 16514.6 | 13.1349 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 416.797 | 0.507018 | 16.6189ms | 40000 | 120 | 2.58404e+07 | 91524.1 | 7.28756 | 1(Win) |
| std::from_chars | 325.774 | 0.405475 | 21.1791ms | 40000 | 120 | 2.70519e+07 | 117097 | 9.32494 | 2(Loss) |
| strtoll/strtoull | 228.873 | 0.543475 | 30.1672ms | 40000 | 120 | 9.84626e+07 | 166673 | 13.2715 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 370.94 | 1.09528 | 185.672ms | 400000 | 120 | 1.52245e+10 | 1.02839e+06 | 8.18631 | 1(Win) |
| std::from_chars | 302.85 | 0.239837 | 226.897ms | 400000 | 120 | 1.09517e+09 | 1.2596e+06 | 10.0286 | 2(Loss) |
| strtoll/strtoull | 221.643 | 0.21037 | 310.256ms | 400000 | 120 | 1.57312e+09 | 1.7211e+06 | 13.7092 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 451.016 | 0.827325 | 0.159807ms | 400 | 120 | 5875.83 | 845.8 | 6.54965 | 1(Win) |
| std::from_chars | 352.088 | 0.77939 | 0.200202ms | 400 | 120 | 8556.74 | 1083.45 | 8.43385 | 2(Loss) |
| strtoll/strtoull | 234.581 | 1.27194 | 0.303938ms | 400 | 120 | 51339 | 1626.17 | 12.7738 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.341 | 1.52966 | 1.38206ms | 4000 | 120 | 1.56882e+06 | 7474.8 | 5.93028 | 1(Win) |
| std::from_chars | 444.15 | 0.852354 | 1.60759ms | 4000 | 120 | 643103 | 8588.75 | 6.82112 | 2(Loss) |
| strtoll/strtoull | 281.584 | 0.789759 | 5.88784ms | 4000 | 240 | 2.74729e+06 | 13547.3 | 10.7706 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 536.668 | 0.850065 | 12.8239ms | 40000 | 120 | 4.38122e+07 | 71081.2 | 5.65702 | 1(Win) |
| std::from_chars | 448.498 | 0.527449 | 15.3255ms | 40000 | 120 | 2.41513e+07 | 85054.9 | 6.76997 | 2(Loss) |
| strtoll/strtoull | 279.002 | 0.64604 | 24.6512ms | 40000 | 120 | 9.36279e+07 | 136726 | 10.8894 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 485.08 | 0.372304 | 142.083ms | 400000 | 120 | 1.02865e+09 | 786405 | 6.2608 | 1(Win) |
| std::from_chars | 409.696 | 0.394463 | 168.68ms | 400000 | 120 | 1.61879e+09 | 931104 | 7.4131 | 2(Loss) |
| strtoll/strtoull | 266.483 | 0.364671 | 258.279ms | 400000 | 120 | 3.27012e+09 | 1.4315e+06 | 11.4004 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 436.073 | 1.33838 | 0.164921ms | 400 | 120 | 16449 | 874.783 | 6.77483 | 1(Win) |
| std::from_chars | 369.429 | 0.446277 | 0.188027ms | 400 | 120 | 2548.28 | 1032.59 | 8.02306 | 2(Loss) |
| strtoll/strtoull | 225.23 | 1.08355 | 0.333682ms | 400 | 120 | 40415.3 | 1693.69 | 13.3209 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 569.451 | 1.15145 | 1.27269ms | 4000 | 120 | 713969 | 6698.91 | 5.31729 | 1(Win) |
| std::from_chars | 430.532 | 1.4839 | 1.63909ms | 4000 | 120 | 2.07442e+06 | 8860.42 | 7.03556 | 2(Loss) |
| strtoll/strtoull | 290.573 | 0.581265 | 5.65725ms | 4000 | 240 | 1.39756e+06 | 13128.2 | 10.4397 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 586.148 | 0.855863 | 11.8162ms | 40000 | 120 | 3.72302e+07 | 65080.8 | 5.17845 | 1(Win) |
| std::from_chars | 456.498 | 0.465338 | 15.0539ms | 40000 | 120 | 1.81451e+07 | 83564.4 | 6.64959 | 2(Loss) |
| strtoll/strtoull | 289.644 | 0.602803 | 23.7265ms | 40000 | 120 | 7.56351e+07 | 131703 | 10.4886 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 519.034 | 0.462399 | 133.092ms | 400000 | 120 | 1.38594e+09 | 734960 | 5.85063 | 1(Win) |
| std::from_chars | 413.92 | 0.432248 | 167.155ms | 400000 | 120 | 1.9043e+09 | 921602 | 7.33675 | 2(Loss) |
| strtoll/strtoull | 273.715 | 0.318005 | 250.836ms | 400000 | 120 | 2.35706e+09 | 1.39367e+06 | 11.0999 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 559.476 | 1.50254 | 0.130664ms | 400 | 120 | 12594.8 | 681.833 | 5.24712 | 1(Win) |
| std::from_chars | 540.016 | 0.728579 | 0.375734ms | 400 | 240 | 6357.27 | 706.404 | 5.47793 | 2(Loss) |
| strtoll/strtoull | 267.424 | 0.520151 | 0.627401ms | 400 | 240 | 13212.6 | 1426.46 | 11.2154 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 777.237 | 1.35803 | 0.954789ms | 4000 | 120 | 533105 | 4908.02 | 3.89345 | 1(Win) |
| std::from_chars | 571.195 | 0.533389 | 2.99274ms | 4000 | 240 | 304545 | 6678.45 | 5.29763 | 2(Loss) |
| strtoll/strtoull | 291.381 | 0.92039 | 5.60815ms | 4000 | 240 | 3.4846e+06 | 13091.8 | 10.4087 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 785.271 | 0.731858 | 8.75218ms | 40000 | 120 | 1.51676e+07 | 48578.1 | 3.86398 | 1(Win) |
| std::from_chars | 563.765 | 0.570696 | 12.2392ms | 40000 | 120 | 1.78943e+07 | 67664.7 | 5.38416 | 2(Loss) |
| strtoll/strtoull | 287.626 | 1.00204 | 23.762ms | 40000 | 120 | 2.1194e+08 | 132627 | 10.5573 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 667.507 | 0.597325 | 102.865ms | 400000 | 120 | 1.39834e+09 | 571484 | 4.54891 | 1(Win) |
| std::from_chars | 500.668 | 0.583699 | 137.508ms | 400000 | 120 | 2.37345e+09 | 761921 | 6.06495 | 2(Loss) |
| strtoll/strtoull | 284.209 | 0.184087 | 242.067ms | 400000 | 120 | 7.32612e+08 | 1.34222e+06 | 10.6895 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 617.702 | 1.11856 | 0.238099ms | 800 | 120 | 22904.7 | 1235.12 | 4.82743 | 1(Win) |
| std::from_chars | 529.28 | 0.610261 | 0.642866ms | 800 | 240 | 18571.7 | 1441.47 | 5.66104 | 2(Loss) |
| strtoll/strtoull | 382.612 | 0.473409 | 0.931081ms | 800 | 240 | 21386.9 | 1994.03 | 7.86981 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 834.552 | 1.03782 | 1.7794ms | 8000 | 120 | 1.08018e+06 | 9141.91 | 3.63099 | 1(Win) |
| std::from_chars | 565.083 | 1.09651 | 5.84752ms | 8000 | 240 | 5.26008e+06 | 13501.4 | 5.36468 | 2(Loss) |
| strtoll/strtoull | 348.622 | 1.92842 | 3.93512ms | 8000 | 120 | 2.13725e+07 | 21884.5 | 8.70444 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 869.813 | 0.634033 | 16.0646ms | 80000 | 120 | 3.71136e+07 | 87713 | 3.48936 | 1(Win) |
| std::from_chars | 577.283 | 0.373719 | 23.9146ms | 80000 | 120 | 2.92734e+07 | 132160 | 5.26274 | 2(Loss) |
| strtoll/strtoull | 350.657 | 1.13807 | 38.7196ms | 80000 | 120 | 7.3576e+08 | 217574 | 8.66275 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 755.065 | 0.470929 | 181.57ms | 800000 | 120 | 2.71709e+09 | 1.01043e+06 | 4.02178 | 1(Win) |
| std::from_chars | 525.718 | 0.345094 | 262.062ms | 800000 | 120 | 3.00976e+09 | 1.45123e+06 | 5.77623 | 2(Loss) |
| strtoll/strtoull | 348.347 | 0.569876 | 393.254ms | 800000 | 120 | 1.86939e+10 | 2.19017e+06 | 8.72095 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 730.319 | 1.4659 | 0.19904ms | 800 | 120 | 28141.5 | 1044.67 | 4.06886 | 1(Win) |
| std::from_chars | 578.298 | 0.864873 | 0.26955ms | 800 | 120 | 15622.9 | 1319.28 | 5.16201 | 2(Loss) |
| strtoll/strtoull | 262.952 | 0.954454 | 0.512725ms | 800 | 120 | 92027.7 | 2901.44 | 11.4722 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1006.86 | 1.93046 | 1.45716ms | 8000 | 120 | 2.56769e+06 | 7577.38 | 3.00786 | 1(Win) |
| std::from_chars | 717.389 | 1.02896 | 1.96948ms | 8000 | 120 | 1.43697e+06 | 10634.9 | 4.21948 | 2(Loss) |
| strtoll/strtoull | 340.463 | 0.902674 | 4.10994ms | 8000 | 120 | 4.91003e+06 | 22408.9 | 8.91677 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1069.92 | 0.556857 | 12.9329ms | 80000 | 120 | 1.89211e+07 | 71308.1 | 2.83606 | 1(Win) |
| std::from_chars | 724.206 | 0.431672 | 18.9914ms | 80000 | 120 | 2.48167e+07 | 105348 | 4.19118 | 2(Loss) |
| strtoll/strtoull | 346.453 | 0.388342 | 39.8089ms | 80000 | 120 | 8.77608e+07 | 220214 | 8.77001 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 895.082 | 0.766329 | 153.463ms | 800000 | 120 | 5.11996e+09 | 852368 | 3.38996 | 1(Win) |
| std::from_chars | 663.865 | 0.489929 | 208.728ms | 800000 | 120 | 3.80424e+09 | 1.14924e+06 | 4.57418 | 2(Loss) |
| strtoll/strtoull | 330.654 | 0.897852 | 412.998ms | 800000 | 120 | 5.15018e+10 | 2.30736e+06 | 9.18644 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 785.126 | 1.34111 | 0.183526ms | 800 | 120 | 20380.5 | 971.742 | 3.76793 | 1(Win) |
| std::from_chars | 546.815 | 1.98374 | 0.255384ms | 800 | 120 | 91928.1 | 1395.24 | 5.43721 | 2(Loss) |
| strtoll/strtoull | 307.237 | 1.04953 | 0.452276ms | 800 | 120 | 81508.7 | 2483.22 | 9.81008 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1113.44 | 0.937938 | 6.4688ms | 8000 | 480 | 1.98259e+06 | 6852.06 | 2.7168 | 1(Win) |
| std::from_chars | 695.353 | 1.4586 | 1.99826ms | 8000 | 120 | 3.07343e+06 | 10972 | 4.3533 | 2(Loss) |
| strtoll/strtoull | 389.372 | 2.07997 | 3.59933ms | 8000 | 120 | 1.99317e+07 | 19594.1 | 7.7936 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1120.05 | 0.813702 | 12.2711ms | 80000 | 120 | 3.68654e+07 | 68116.7 | 2.70897 | 1(Win) |
| std::from_chars | 734.31 | 0.689033 | 18.8509ms | 80000 | 120 | 6.1501e+07 | 103899 | 4.13371 | 2(Loss) |
| strtoll/strtoull | 414.108 | 1.62405 | 33.6357ms | 80000 | 120 | 1.07432e+09 | 184237 | 7.33573 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1062.81 | 0.69415 | 129.669ms | 800000 | 120 | 2.97961e+09 | 717854 | 2.85612 | 1(Win) |
| std::from_chars | 709.161 | 0.369434 | 194.892ms | 800000 | 120 | 1.8956e+09 | 1.07583e+06 | 4.28094 | 2(Loss) |
| strtoll/strtoull | 443.08 | 0.849484 | 311.84ms | 800000 | 120 | 2.56748e+10 | 1.7219e+06 | 6.85629 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 527.685 | 2.25148 | 1.40554ms | 800 | 480 | 508638 | 1445.82 | 5.66167 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 519.731 | 2.24421 | 0.271241ms | 800 | 120 | 130236 | 1467.95 | 5.7531 | 1(Tie) |
| strtoll/strtoull | 324.383 | 0.150917 | 1.10461ms | 800 | 240 | 3023.78 | 2351.97 | 9.29703 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 862.891 | 0.951495 | 3.99922ms | 8000 | 240 | 1.69861e+06 | 8841.67 | 3.50781 | 1(Win) |
| std::from_chars | 589.847 | 0.566051 | 5.7302ms | 8000 | 240 | 1.28654e+06 | 12934.5 | 5.13897 | 2(Loss) |
| strtoll/strtoull | 315.845 | 1.5666 | 4.36386ms | 8000 | 120 | 1.71843e+07 | 24155.5 | 9.59989 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 880.327 | 1.0322 | 15.821ms | 80000 | 120 | 9.60297e+07 | 86665.5 | 3.44673 | 1(Win) |
| std::from_chars | 606.446 | 0.413939 | 22.8471ms | 80000 | 120 | 3.25423e+07 | 125805 | 5.00889 | 2(Loss) |
| strtoll/strtoull | 324.933 | 0.341865 | 43.0991ms | 80000 | 120 | 7.73182e+07 | 234799 | 9.35037 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 851.957 | 0.465481 | 164.032ms | 800000 | 120 | 2.08511e+09 | 895514 | 3.56402 | 1(Win) |
| std::from_chars | 590.228 | 0.250044 | 235.31ms | 800000 | 120 | 1.25359e+09 | 1.29262e+06 | 5.14324 | 2(Loss) |
| strtoll/strtoull | 324.938 | 0.175081 | 425.227ms | 800000 | 120 | 2.02787e+09 | 2.34795e+06 | 9.34859 | 3(Loss) |
