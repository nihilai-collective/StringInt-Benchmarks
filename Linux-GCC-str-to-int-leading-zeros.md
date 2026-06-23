# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 167.478 | 0.149602 | 0.166712ms | 100 | 30 | 21.7713 | 569.433 | 1(Win) |
| std::from_chars | 78.2962 | 0.0746338 | 0.260698ms | 100 | 30 | 24.792 | 1218.03 | 2(Loss) |
| strtoll/strtoull | 34.1118 | 0.0165328 | 0.567141ms | 100 | 30 | 6.4092 | 2795.73 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 144.01 | 0.379761 | 1.28084ms | 1000 | 30 | 18974.1 | 6622.3 | 1(Win) |
| std::from_chars | 80.0649 | 0.213236 | 2.21798ms | 1000 | 30 | 19353.5 | 11911.3 | 2(Loss) |
| strtoll/strtoull | 29.2213 | 0.767073 | 5.9269ms | 1000 | 30 | 1.88016e+06 | 32636.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 47.7108 | 0.710817 | 35.5676ms | 10000 | 30 | 6.05625e+07 | 199886 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 47.3483 | 0.314383 | 36.6901ms | 10000 | 30 | 1.20291e+07 | 201417 | 1(Tie) |
| strtoll/strtoull | 26.6001 | 0.207579 | 64.6835ms | 10000 | 30 | 1.66157e+07 | 358522 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 46.1681 | 0.0494917 | 895.71ms | 100000 | 30 | 3.13546e+07 | 2.06565e+06 | 1(Win) |
| vn::from_chars | 42.3613 | 0.053979 | 405.568ms | 100000 | 30 | 4.4303e+07 | 2.25129e+06 | 2(Loss) |
| strtoll/strtoull | 26.2589 | 0.184037 | 652.638ms | 100000 | 30 | 1.34023e+09 | 3.63181e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 151.001 | 0.207723 | 0.156813ms | 100 | 30 | 51.6333 | 631.567 | 1(Win) |
| std::from_chars | 78.3456 | 0.0861099 | 0.260959ms | 100 | 30 | 32.9609 | 1217.27 | 2(Loss) |
| strtoll/strtoull | 30.8413 | 0.0330891 | 0.610132ms | 100 | 30 | 31.4069 | 3092.2 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 144.964 | 0.402825 | 2.88076ms | 1000 | 30 | 21068.5 | 6578.7 | 1(Win) |
| std::from_chars | 79.1214 | 2.18089 | 2.20371ms | 1000 | 30 | 2.073e+06 | 12053.3 | 2(Loss) |
| strtoll/strtoull | 29.5501 | 0.776928 | 5.85438ms | 1000 | 30 | 1.8861e+06 | 32273.1 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 54.1815 | 0.345626 | 31.7628ms | 10000 | 30 | 1.11028e+07 | 176015 | 1(Win) |
| vn::from_chars | 52.3057 | 0.317804 | 32.9416ms | 10000 | 30 | 1.00726e+07 | 182327 | 2(Loss) |
| strtoll/strtoull | 29.0501 | 0.66703 | 58.9826ms | 10000 | 30 | 1.43852e+08 | 328286 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 53.1954 | 0.09346 | 323.401ms | 100000 | 30 | 8.4222e+07 | 1.79278e+06 | 1(Win) |
| vn::from_chars | 47.8452 | 0.0569088 | 358.636ms | 100000 | 30 | 3.86014e+07 | 1.99325e+06 | 2(Loss) |
| strtoll/strtoull | 29.1049 | 0.146828 | 589.534ms | 100000 | 30 | 6.94395e+08 | 3.27668e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 166.377 | 0.139818 | 0.145973ms | 100 | 30 | 19.269 | 573.2 | 1(Win) |
| std::from_chars | 75.8892 | 0.0742117 | 0.266259ms | 100 | 30 | 26.092 | 1256.67 | 2(Loss) |
| strtoll/strtoull | 31.09 | 0.0279929 | 1.36245ms | 100 | 30 | 22.1195 | 3067.47 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 164.097 | 0.064299 | 1.14327ms | 1000 | 30 | 418.92 | 5811.67 | 1(Win) |
| std::from_chars | 79.7918 | 0.0209812 | 2.22553ms | 1000 | 30 | 188.654 | 11952 | 2(Loss) |
| strtoll/strtoull | 31.3414 | 1.38528 | 5.49516ms | 1000 | 30 | 5.33038e+06 | 30428.6 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 56.2945 | 0.68513 | 30.4778ms | 10000 | 30 | 4.04143e+07 | 169408 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 56.2897 | 0.376038 | 30.5523ms | 10000 | 30 | 1.21766e+07 | 169422 | 1(Tie) |
| strtoll/strtoull | 31.1176 | 0.226772 | 55.2613ms | 10000 | 30 | 1.44906e+07 | 306474 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 55.7843 | 0.084479 | 308.171ms | 100000 | 30 | 6.25741e+07 | 1.70957e+06 | 1(Win) |
| vn::from_chars | 49.7367 | 0.0333065 | 344.891ms | 100000 | 30 | 1.22356e+07 | 1.91745e+06 | 2(Loss) |
| strtoll/strtoull | 30.8724 | 0.0730796 | 556.42ms | 100000 | 30 | 1.52888e+08 | 3.08908e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 174.538 | 0.171864 | 0.141955ms | 100 | 30 | 26.4552 | 546.4 | 1(Win) |
| std::from_chars | 71.8778 | 0.0657849 | 0.278962ms | 100 | 30 | 22.8552 | 1326.8 | 2(Loss) |
| strtoll/strtoull | 26.6417 | 0.0243864 | 1.57855ms | 100 | 30 | 22.8609 | 3579.63 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 163.272 | 0.0538273 | 1.14051ms | 1000 | 30 | 296.552 | 5841 | 1(Win) |
| std::from_chars | 78.3483 | 2.3023 | 2.24383ms | 1000 | 30 | 2.35607e+06 | 12172.2 | 2(Loss) |
| strtoll/strtoull | 28.1176 | 0.74182 | 6.15683ms | 1000 | 30 | 1.89916e+06 | 33917.3 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 53.8713 | 0.500058 | 31.6244ms | 10000 | 30 | 2.35097e+07 | 177028 | 1(Win) |
| std::from_chars | 51.819 | 0.381269 | 33.2957ms | 10000 | 30 | 1.47709e+07 | 184040 | 2(Loss) |
| strtoll/strtoull | 27.4987 | 0.366918 | 62.4442ms | 10000 | 30 | 4.85774e+07 | 346807 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 51.3051 | 0.0913817 | 341.589ms | 100000 | 30 | 8.65603e+07 | 1.85883e+06 | 1(Win) |
| vn::from_chars | 48.3373 | 0.058165 | 354.465ms | 100000 | 30 | 3.95075e+07 | 1.97296e+06 | 2(Loss) |
| strtoll/strtoull | 27.4128 | 0.0700416 | 627.237ms | 100000 | 30 | 1.78126e+08 | 3.47893e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.833 | 0.055991 | 0.201137ms | 200 | 30 | 7.14483 | 871.6 | 1(Win) |
| std::from_chars | 133.633 | 0.063573 | 0.29957ms | 200 | 30 | 24.7 | 1427.3 | 2(Loss) |
| strtoll/strtoull | 57.9213 | 0.0338346 | 0.64679ms | 200 | 30 | 37.2414 | 3293 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 235.87 | 0.0362638 | 1.5744ms | 2000 | 30 | 257.978 | 8086.43 | 1(Win) |
| std::from_chars | 124.054 | 0.0256307 | 5.00256ms | 2000 | 30 | 465.89 | 15375.2 | 2(Loss) |
| strtoll/strtoull | 51.1285 | 0.915264 | 15.7619ms | 2000 | 30 | 3.49743e+06 | 37305 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 100.958 | 0.367661 | 34.3371ms | 20000 | 30 | 1.44741e+07 | 188924 | 1(Win) |
| std::from_chars | 84.4276 | 0.286603 | 40.9673ms | 20000 | 30 | 1.25769e+07 | 225915 | 2(Loss) |
| strtoll/strtoull | 49.0603 | 0.187491 | 70.267ms | 20000 | 30 | 1.59398e+07 | 388776 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 91.3468 | 0.0658595 | 376.249ms | 200000 | 30 | 5.67325e+07 | 2.08803e+06 | 1(Win) |
| std::from_chars | 82.3908 | 0.0750357 | 417.824ms | 200000 | 30 | 9.05234e+07 | 2.315e+06 | 2(Loss) |
| strtoll/strtoull | 48.5165 | 0.0622848 | 707.847ms | 200000 | 30 | 1.79873e+08 | 3.93134e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.435 | 0.152352 | 0.199715ms | 200 | 30 | 52.1333 | 865.267 | 1(Win) |
| std::from_chars | 125.36 | 0.0421315 | 0.348914ms | 200 | 30 | 12.3276 | 1521.5 | 2(Loss) |
| strtoll/strtoull | 52.746 | 0.0268919 | 1.61439ms | 200 | 30 | 28.369 | 3616.1 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.827 | 0.0438331 | 1.62516ms | 2000 | 30 | 403.995 | 8371.93 | 1(Win) |
| std::from_chars | 116.377 | 1.68672 | 2.97951ms | 2000 | 30 | 2.29261e+06 | 16389.3 | 2(Loss) |
| strtoll/strtoull | 53.0645 | 0.705201 | 6.57637ms | 2000 | 30 | 1.92752e+06 | 35944 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 116.779 | 0.645756 | 29.6093ms | 20000 | 30 | 3.33723e+07 | 163329 | 1(Win) |
| std::from_chars | 97.7835 | 0.340068 | 35.1438ms | 20000 | 30 | 1.32002e+07 | 195058 | 2(Loss) |
| strtoll/strtoull | 53.3304 | 0.223279 | 64.5707ms | 20000 | 30 | 1.91307e+07 | 357648 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 110.161 | 0.0846482 | 312.169ms | 200000 | 30 | 6.44409e+07 | 1.73142e+06 | 1(Win) |
| std::from_chars | 96.0535 | 0.0707062 | 357.887ms | 200000 | 30 | 5.91385e+07 | 1.98571e+06 | 2(Loss) |
| strtoll/strtoull | 53.1341 | 0.0712379 | 647.06ms | 200000 | 30 | 1.96181e+08 | 3.58969e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.49 | 0.126286 | 0.193662ms | 200 | 30 | 33.6333 | 838.433 | 1(Win) |
| std::from_chars | 130.509 | 0.112587 | 0.303608ms | 200 | 30 | 81.223 | 1461.47 | 2(Loss) |
| strtoll/strtoull | 57.1816 | 0.024963 | 0.660265ms | 200 | 30 | 20.8 | 3335.6 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 241.444 | 0.327521 | 1.53235ms | 2000 | 30 | 20083 | 7899.77 | 1(Win) |
| std::from_chars | 123.088 | 1.62839 | 2.8235ms | 2000 | 30 | 1.91016e+06 | 15495.9 | 2(Loss) |
| strtoll/strtoull | 55.8011 | 0.732125 | 6.17691ms | 2000 | 30 | 1.87874e+06 | 34181.2 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 118.052 | 0.422407 | 29.0976ms | 20000 | 30 | 1.39732e+07 | 161569 | 1(Win) |
| std::from_chars | 99.7312 | 0.323384 | 34.5274ms | 20000 | 30 | 1.14751e+07 | 191249 | 2(Loss) |
| strtoll/strtoull | 54.7003 | 1.64153 | 61.9314ms | 20000 | 30 | 9.82881e+08 | 348690 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 111.545 | 0.146254 | 307.422ms | 200000 | 30 | 1.87626e+08 | 1.70993e+06 | 1(Win) |
| std::from_chars | 97.3415 | 0.268114 | 352.79ms | 200000 | 30 | 8.27986e+08 | 1.95944e+06 | 2(Loss) |
| strtoll/strtoull | 55.901 | 0.117582 | 614.378ms | 200000 | 30 | 4.82866e+08 | 3.41201e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 239.276 | 0.114556 | 0.192751ms | 200 | 30 | 25.0161 | 797.133 | 1(Win) |
| std::from_chars | 138.227 | 0.0925691 | 0.287409ms | 200 | 30 | 48.9471 | 1379.87 | 2(Loss) |
| strtoll/strtoull | 51.6295 | 0.0226715 | 0.746407ms | 200 | 30 | 21.0448 | 3694.3 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 242.378 | 0.0347246 | 3.44721ms | 2000 | 30 | 224.01 | 7869.3 | 1(Win) |
| std::from_chars | 107.733 | 0.150847 | 3.33842ms | 2000 | 30 | 21397.4 | 17704.5 | 2(Loss) |
| strtoll/strtoull | 50.7409 | 0.728048 | 6.81496ms | 2000 | 30 | 2.24691e+06 | 37590 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 127.782 | 0.445848 | 27.1037ms | 20000 | 30 | 1.32866e+07 | 149265 | 1(Win) |
| std::from_chars | 93.5768 | 0.502036 | 36.8836ms | 20000 | 30 | 3.14134e+07 | 203827 | 2(Loss) |
| strtoll/strtoull | 49.4105 | 0.226423 | 69.5429ms | 20000 | 30 | 2.29185e+07 | 386021 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 119.609 | 0.199739 | 287.624ms | 200000 | 30 | 3.04355e+08 | 1.59466e+06 | 1(Win) |
| std::from_chars | 93.1861 | 0.091434 | 368.673ms | 200000 | 30 | 1.05074e+08 | 2.04682e+06 | 2(Loss) |
| strtoll/strtoull | 49.5892 | 0.244395 | 691.796ms | 200000 | 30 | 2.6509e+09 | 3.8463e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 316.985 | 0.0611643 | 0.2567ms | 400 | 30 | 16.254 | 1203.43 | 1(Win) |
| std::from_chars | 200.636 | 0.0411403 | 0.397022ms | 400 | 30 | 18.3552 | 1901.3 | 2(Loss) |
| strtoll/strtoull | 92.7233 | 0.633227 | 0.790358ms | 400 | 30 | 20360.2 | 4114.07 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.103 | 2.23767 | 2.24187ms | 4000 | 30 | 2.24408e+06 | 12222.6 | 1(Win) |
| std::from_chars | 195.241 | 1.29396 | 3.59404ms | 4000 | 30 | 1.91753e+06 | 19538.4 | 2(Loss) |
| strtoll/strtoull | 86.3728 | 0.573062 | 8.09389ms | 4000 | 30 | 1.92173e+06 | 44165.5 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 180.906 | 0.319897 | 38.105ms | 40000 | 30 | 1.36508e+07 | 210867 | 1(Win) |
| std::from_chars | 140.171 | 0.268182 | 48.9924ms | 40000 | 30 | 1.59803e+07 | 272147 | 2(Loss) |
| strtoll/strtoull | 83.3572 | 1.04664 | 81.8201ms | 40000 | 30 | 6.8825e+08 | 457633 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 170.218 | 0.062337 | 403.823ms | 400000 | 30 | 5.85493e+07 | 2.24106e+06 | 1(Win) |
| std::from_chars | 139.206 | 0.0382504 | 492.928ms | 400000 | 30 | 3.2961e+07 | 2.74033e+06 | 2(Loss) |
| strtoll/strtoull | 84.3178 | 0.0416613 | 815.614ms | 400000 | 30 | 1.06578e+08 | 4.52419e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 311.888 | 0.0452679 | 0.259185ms | 400 | 30 | 9.19655 | 1223.1 | 1(Win) |
| std::from_chars | 206.744 | 0.0471139 | 0.371185ms | 400 | 30 | 22.6713 | 1845.13 | 2(Loss) |
| strtoll/strtoull | 94.0786 | 0.0439964 | 0.783786ms | 400 | 30 | 95.4759 | 4054.8 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.485 | 2.21777 | 2.24178ms | 4000 | 30 | 2.22736e+06 | 12286.2 | 1(Win) |
| std::from_chars | 194.517 | 1.34864 | 3.61835ms | 4000 | 30 | 2.09856e+06 | 19611.1 | 2(Loss) |
| strtoll/strtoull | 90.5291 | 1.95392 | 7.50423ms | 4000 | 30 | 2.03365e+07 | 42137.8 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 207.536 | 0.353936 | 33.2261ms | 40000 | 30 | 1.26971e+07 | 183809 | 1(Win) |
| std::from_chars | 159.741 | 0.368984 | 43.1112ms | 40000 | 30 | 2.32928e+07 | 238805 | 2(Loss) |
| strtoll/strtoull | 90.8302 | 0.530846 | 75.3658ms | 40000 | 30 | 1.49114e+08 | 419981 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 199.198 | 0.104104 | 344.578ms | 400000 | 30 | 1.19236e+08 | 1.91503e+06 | 1(Win) |
| std::from_chars | 158.281 | 0.715159 | 431.225ms | 400000 | 30 | 8.91228e+09 | 2.41008e+06 | 2(Loss) |
| strtoll/strtoull | 91.3746 | 0.16457 | 751.818ms | 400000 | 30 | 1.41609e+09 | 4.17479e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.475 | 0.0613155 | 0.290443ms | 400 | 30 | 17.1368 | 1232.63 | 1(Win) |
| std::from_chars | 163.555 | 1.11468 | 0.453709ms | 400 | 30 | 20277.7 | 2332.37 | 2(Loss) |
| strtoll/strtoull | 93.4379 | 0.0346121 | 0.803444ms | 400 | 30 | 59.9034 | 4082.6 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.263 | 0.0182953 | 2.23711ms | 4000 | 30 | 142.464 | 11911.1 | 1(Win) |
| std::from_chars | 166.842 | 1.11803 | 4.16409ms | 4000 | 30 | 1.96037e+06 | 22864.1 | 2(Loss) |
| strtoll/strtoull | 96.4064 | 0.640258 | 7.257ms | 4000 | 30 | 1.92548e+06 | 39568.9 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.211 | 0.360426 | 32.6469ms | 40000 | 30 | 1.27128e+07 | 180611 | 1(Win) |
| std::from_chars | 162.645 | 0.619644 | 42.1032ms | 40000 | 30 | 6.33643e+07 | 234541 | 2(Loss) |
| strtoll/strtoull | 95.4689 | 0.205786 | 72.1997ms | 40000 | 30 | 2.02837e+07 | 399575 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 201.928 | 0.0644164 | 343.204ms | 400000 | 30 | 4.44263e+07 | 1.88913e+06 | 1(Win) |
| std::from_chars | 163.092 | 0.0771849 | 421.702ms | 400000 | 30 | 9.77778e+07 | 2.33898e+06 | 2(Loss) |
| strtoll/strtoull | 95.4202 | 0.0271657 | 720.948ms | 400000 | 30 | 3.53836e+07 | 3.99779e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 307.72 | 0.0673613 | 0.262512ms | 400 | 30 | 20.9195 | 1239.67 | 1(Win) |
| std::from_chars | 190.897 | 0.046037 | 0.413674ms | 400 | 30 | 25.3897 | 1998.3 | 2(Loss) |
| strtoll/strtoull | 82.1372 | 0.0220006 | 0.895075ms | 400 | 30 | 31.3207 | 4644.3 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 307.617 | 2.17933 | 2.27304ms | 4000 | 30 | 2.19113e+06 | 12400.8 | 1(Win) |
| std::from_chars | 178.463 | 0.379192 | 3.92507ms | 4000 | 30 | 197090 | 21375.3 | 2(Loss) |
| strtoll/strtoull | 83.2192 | 0.992793 | 8.33373ms | 4000 | 30 | 6.21315e+06 | 45839.2 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.745 | 0.400044 | 30.005ms | 40000 | 30 | 1.32363e+07 | 166041 | 1(Win) |
| std::from_chars | 169.512 | 0.301864 | 40.8033ms | 40000 | 30 | 1.3844e+07 | 225040 | 2(Loss) |
| strtoll/strtoull | 82.3322 | 0.358482 | 82.9138ms | 40000 | 30 | 8.27629e+07 | 463330 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.629 | 0.139947 | 312.021ms | 400000 | 30 | 1.75649e+08 | 1.72901e+06 | 1(Win) |
| std::from_chars | 157.257 | 0.147978 | 439.893ms | 400000 | 30 | 3.86561e+08 | 2.42577e+06 | 2(Loss) |
| strtoll/strtoull | 83.1953 | 0.0877947 | 826.262ms | 400000 | 30 | 4.86162e+08 | 4.58523e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 430.407 | 0.0374406 | 0.359342ms | 800 | 30 | 13.2138 | 1772.6 | 1(Win) |
| std::from_chars | 285.14 | 0.030847 | 0.520604ms | 800 | 30 | 20.4368 | 2675.67 | 2(Loss) |
| strtoll/strtoull | 132.578 | 0.0192413 | 1.1389ms | 800 | 30 | 36.7816 | 5754.67 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 437.489 | 1.44293 | 3.18772ms | 8000 | 30 | 1.89958e+06 | 17439.1 | 1(Win) |
| std::from_chars | 280.393 | 1.47686 | 4.94015ms | 8000 | 30 | 4.84444e+06 | 27209.7 | 2(Loss) |
| strtoll/strtoull | 131.8 | 0.888362 | 10.4412ms | 8000 | 30 | 7.93319e+06 | 57886 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.506 | 0.308381 | 44.3884ms | 80000 | 30 | 1.72241e+07 | 245708 | 1(Win) |
| std::from_chars | 231.67 | 0.274247 | 59.3222ms | 80000 | 30 | 2.44707e+07 | 329321 | 2(Loss) |
| strtoll/strtoull | 130.89 | 0.140727 | 105.119ms | 80000 | 30 | 2.01857e+07 | 582886 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 292.759 | 0.240578 | 466.993ms | 800000 | 30 | 1.17921e+09 | 2.60603e+06 | 1(Win) |
| std::from_chars | 230.118 | 0.0647811 | 597.37ms | 800000 | 30 | 1.38387e+08 | 3.31542e+06 | 2(Loss) |
| strtoll/strtoull | 130.579 | 0.0882807 | 1050.92ms | 800000 | 30 | 7.98155e+08 | 5.84275e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.315 | 0.0408499 | 0.398967ms | 800 | 30 | 18.0931 | 1901.1 | 1(Win) |
| std::from_chars | 300.832 | 0.0319358 | 0.495146ms | 800 | 30 | 19.6793 | 2536.1 | 2(Loss) |
| strtoll/strtoull | 144.732 | 0.0179991 | 1.00612ms | 800 | 30 | 27.0069 | 5271.4 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 404.042 | 0.138094 | 3.47396ms | 8000 | 30 | 20398.4 | 18882.7 | 1(Win) |
| std::from_chars | 272.491 | 1.51368 | 5.24217ms | 8000 | 30 | 5.38847e+06 | 27998.7 | 2(Loss) |
| strtoll/strtoull | 144.202 | 0.632168 | 9.63856ms | 8000 | 30 | 3.35601e+06 | 52907.7 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 335.19 | 0.385635 | 40.9978ms | 80000 | 30 | 2.31138e+07 | 227614 | 1(Win) |
| std::from_chars | 254.873 | 0.273195 | 53.995ms | 80000 | 30 | 2.00632e+07 | 299341 | 2(Loss) |
| strtoll/strtoull | 142.283 | 0.25124 | 96.7091ms | 80000 | 30 | 5.4447e+07 | 536213 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 326.197 | 0.0959004 | 421.228ms | 800000 | 30 | 1.50932e+08 | 2.33889e+06 | 1(Win) |
| std::from_chars | 254.851 | 0.0966758 | 539.885ms | 800000 | 30 | 2.51283e+08 | 2.99367e+06 | 2(Loss) |
| strtoll/strtoull | 142.37 | 0.0928545 | 966.906ms | 800000 | 30 | 7.42795e+08 | 5.35884e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 465.766 | 0.05732 | 0.38439ms | 800 | 30 | 26.4471 | 1638.03 | 1(Win) |
| std::from_chars | 289.651 | 0.0379651 | 1.19861ms | 800 | 30 | 30 | 2634 | 2(Loss) |
| strtoll/strtoull | 146.483 | 0.0202625 | 2.51963ms | 800 | 30 | 33.4126 | 5208.37 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 467.93 | 1.56946 | 3.00537ms | 8000 | 30 | 1.96446e+06 | 16304.6 | 1(Win) |
| std::from_chars | 259.064 | 0.966743 | 5.22234ms | 8000 | 30 | 2.4317e+06 | 29449.9 | 2(Loss) |
| strtoll/strtoull | 147.017 | 1.09528 | 9.4106ms | 8000 | 30 | 9.69204e+06 | 51894.7 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 365.566 | 0.350347 | 37.6878ms | 80000 | 30 | 1.60386e+07 | 208701 | 1(Win) |
| std::from_chars | 254.583 | 0.399964 | 54.0383ms | 80000 | 30 | 4.31009e+07 | 299682 | 2(Loss) |
| strtoll/strtoull | 147.725 | 0.167066 | 93.3521ms | 80000 | 30 | 2.23341e+07 | 516458 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 353.623 | 0.127205 | 387.623ms | 800000 | 30 | 2.25958e+08 | 2.15749e+06 | 1(Win) |
| std::from_chars | 255.415 | 0.106317 | 538.7ms | 800000 | 30 | 3.02559e+08 | 2.98705e+06 | 2(Loss) |
| strtoll/strtoull | 147.287 | 0.117713 | 932.473ms | 800000 | 30 | 1.11537e+09 | 5.17996e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 467.851 | 0.0488399 | 0.339515ms | 800 | 30 | 19.0299 | 1630.73 | 1(Win) |
| std::from_chars | 294.81 | 0.0373472 | 1.17285ms | 800 | 30 | 28.0241 | 2587.9 | 2(Loss) |
| strtoll/strtoull | 125.041 | 0.0193084 | 1.19313ms | 800 | 30 | 41.6379 | 6101.5 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 470.654 | 1.55589 | 2.95526ms | 8000 | 30 | 1.90834e+06 | 16210.2 | 1(Win) |
| std::from_chars | 277.452 | 0.920078 | 5.07684ms | 8000 | 30 | 1.92033e+06 | 27498.1 | 2(Loss) |
| strtoll/strtoull | 123.634 | 1.3989 | 11.1183ms | 8000 | 30 | 2.23561e+07 | 61709.4 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.424 | 0.35649 | 40.2692ms | 80000 | 30 | 1.90374e+07 | 223458 | 1(Win) |
| std::from_chars | 261.802 | 0.305596 | 52.634ms | 80000 | 30 | 2.37932e+07 | 291419 | 2(Loss) |
| strtoll/strtoull | 125.794 | 0.244626 | 109.498ms | 80000 | 30 | 6.60374e+07 | 606501 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.013 | 0.0997553 | 416.659ms | 800000 | 30 | 1.59555e+08 | 2.31184e+06 | 1(Win) |
| std::from_chars | 259.322 | 0.170139 | 528.996ms | 800000 | 30 | 7.51674e+08 | 2.94205e+06 | 2(Loss) |
| strtoll/strtoull | 125.765 | 0.0382498 | 1094.78ms | 800000 | 30 | 1.61526e+08 | 6.0664e+06 | 3(Loss) |
