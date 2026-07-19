# str-to-int  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36248.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 250.967 | 1.95469 | 0.1017ms | 100 | 30 | 1655.17 | 380 | 8.93533 | 1(Win) |
| std::from_chars | 193.312 | 0.93893 | 0.5111ms | 100 | 30 | 643.678 | 493.333 | 11.6653 | 2(Loss) |
| strtoll/strtoull | 62.7417 | 0.488672 | 0.2954ms | 100 | 30 | 1655.17 | 1520 | 38.428 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 276.695 | 0.268785 | 0.6599ms | 1000 | 30 | 2574.71 | 3446.67 | 8.82353 | 1(Win) |
| std::from_chars | 214.309 | 0.208646 | 0.8957ms | 1000 | 30 | 2586.21 | 4450 | 11.4409 | 2(Loss) |
| strtoll/strtoull | 64.5683 | 0.0576143 | 2.7997ms | 1000 | 30 | 2172.41 | 14770 | 38.2599 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 280.382 | 0.0233052 | 14.7944ms | 10000 | 30 | 1885.06 | 34013.3 | 8.81894 | 1(Win) |
| std::from_chars | 211.771 | 1.99609 | 8.3927ms | 10000 | 30 | 2.42409e+07 | 45033.3 | 11.6844 | 2(Loss) |
| strtoll/strtoull | 55.4172 | 0.873298 | 32.6399ms | 10000 | 30 | 6.77575e+07 | 172090 | 44.6613 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 82.5563 | 0.233741 | 208.724ms | 100000 | 30 | 2.18721e+08 | 1.15518e+06 | 29.9865 | 1(Win) |
| std::from_chars | 79.7896 | 0.353309 | 215.513ms | 100000 | 30 | 5.34981e+08 | 1.19524e+06 | 31.0282 | 2(Loss) |
| strtoll/strtoull | 41.3758 | 0.48254 | 413.178ms | 100000 | 30 | 3.71104e+09 | 2.30491e+06 | 59.8338 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 236.448 | 0.826446 | 0.0984ms | 100 | 30 | 333.333 | 403.333 | 9.594 | 1(Win) |
| std::from_chars | 193.312 | 0.93893 | 0.1091ms | 100 | 30 | 643.678 | 493.333 | 11.6653 | 2(Loss) |
| strtoll/strtoull | 64.4375 | 0.501879 | 0.289ms | 100 | 30 | 1655.17 | 1480 | 37.492 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 254.313 | 0.247594 | 0.7129ms | 1000 | 30 | 2586.21 | 3750 | 9.65467 | 1(Win) |
| std::from_chars | 210.524 | 0.187851 | 0.8513ms | 1000 | 30 | 2172.41 | 4530 | 11.6688 | 2(Loss) |
| strtoll/strtoull | 63.5359 | 0.0489676 | 2.9773ms | 1000 | 30 | 1620.69 | 15010 | 38.8717 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 249.893 | 1.544 | 6.9404ms | 10000 | 30 | 1.04162e+07 | 38163.3 | 9.90149 | 1(Win) |
| std::from_chars | 203.14 | 1.23119 | 19.792ms | 10000 | 30 | 1.00226e+07 | 46946.7 | 12.1741 | 2(Loss) |
| strtoll/strtoull | 59.5637 | 0.905769 | 29.3222ms | 10000 | 30 | 6.30947e+07 | 160110 | 41.5516 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 135.883 | 0.734272 | 123.389ms | 100000 | 30 | 7.96723e+08 | 701837 | 18.2175 | 1(Win) |
| std::from_chars | 125.215 | 0.660428 | 136.52ms | 100000 | 30 | 7.59033e+08 | 761630 | 19.769 | 2(Loss) |
| strtoll/strtoull | 52.8278 | 0.234861 | 324.889ms | 100000 | 30 | 5.39286e+08 | 1.80525e+06 | 46.8597 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 205.829 | 1.93134 | 0.1068ms | 100 | 30 | 2402.3 | 463.333 | 11.154 | 1(Win) |
| vn::from_chars | 158.946 | 0.701793 | 0.4812ms | 100 | 48 | 851.064 | 600 | 14.5871 | 2(Loss) |
| strtoll/strtoull | 64.4738 | 0.400483 | 1.4128ms | 100 | 48 | 1684.4 | 1479.17 | 36.9742 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 305.339 | 0.251463 | 0.6162ms | 1000 | 30 | 1850.57 | 3123.33 | 8.0106 | 1(Win) |
| std::from_chars | 218.066 | 0.187769 | 0.8201ms | 1000 | 30 | 2022.99 | 4373.33 | 11.2571 | 2(Loss) |
| strtoll/strtoull | 62.3571 | 2.19945 | 13.8829ms | 1000 | 48 | 5.43124e+06 | 15293.8 | 39.5942 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 300.812 | 1.86543 | 5.779ms | 10000 | 30 | 1.04927e+07 | 31703.3 | 8.21773 | 1(Win) |
| std::from_chars | 216.334 | 1.52916 | 8.8359ms | 10000 | 30 | 1.36325e+07 | 44083.3 | 11.4377 | 2(Loss) |
| strtoll/strtoull | 58.3049 | 0.818686 | 31.042ms | 10000 | 30 | 5.37954e+07 | 163567 | 42.45 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 153.473 | 0.568277 | 110.867ms | 100000 | 30 | 3.74093e+08 | 621397 | 16.1285 | 1(Win) |
| std::from_chars | 115.83 | 1.4957 | 142.102ms | 100000 | 30 | 4.54953e+09 | 823340 | 21.3712 | 2(Loss) |
| strtoll/strtoull | 53.6156 | 0.189925 | 319.845ms | 100000 | 30 | 3.42375e+08 | 1.77873e+06 | 46.1708 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 262.479 | 2.4629 | 0.088ms | 100 | 30 | 2402.3 | 363.333 | 8.35467 | 1(Win) |
| std::from_chars | 156.233 | 2.24798 | 0.9659ms | 100 | 48 | 9038.12 | 610.417 | 15.0204 | 2(Loss) |
| strtoll/strtoull | 64.1485 | 0.424603 | 0.2944ms | 100 | 30 | 1195.4 | 1486.67 | 37.4573 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 289.577 | 0.140649 | 0.6428ms | 1000 | 30 | 643.678 | 3293.33 | 8.44133 | 1(Win) |
| std::from_chars | 254.993 | 0.24324 | 1.9042ms | 1000 | 30 | 2482.76 | 3740 | 9.60613 | 2(Loss) |
| strtoll/strtoull | 62.8934 | 0.188353 | 2.755ms | 1000 | 30 | 24471.3 | 15163.3 | 39.2435 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 280.081 | 1.83826 | 6.4891ms | 10000 | 30 | 1.17536e+07 | 34050 | 8.8322 | 1(Win) |
| std::from_chars | 252.25 | 1.3953 | 7.0637ms | 10000 | 30 | 8.34823e+06 | 37806.7 | 9.80469 | 2(Loss) |
| strtoll/strtoull | 57.0983 | 0.866821 | 30.4503ms | 10000 | 30 | 6.28832e+07 | 167023 | 43.3534 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 128.842 | 0.626634 | 132.813ms | 100000 | 30 | 6.4541e+08 | 740190 | 19.2124 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 127.337 | 0.456015 | 134.698ms | 100000 | 30 | 3.49924e+08 | 748940 | 19.442 | 1(Tie) |
| strtoll/strtoull | 50.425 | 0.178429 | 340.942ms | 100000 | 30 | 3.41635e+08 | 1.89127e+06 | 49.0961 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 296.479 | 1.43034 | 0.1459ms | 200 | 30 | 2540.23 | 643.333 | 7.839 | 1(Win) |
| std::from_chars | 247.708 | 1.10515 | 0.1854ms | 200 | 30 | 2172.41 | 770 | 9.52033 | 2(Loss) |
| strtoll/strtoull | 95.0506 | 0.230833 | 0.3859ms | 200 | 30 | 643.678 | 2006.67 | 25.5363 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 317.363 | 0.0926932 | 2.6009ms | 2000 | 30 | 931.034 | 6010 | 7.74583 | 1(Win) |
| std::from_chars | 263.81 | 0.117699 | 1.385ms | 2000 | 30 | 2172.41 | 7230 | 9.33833 | 2(Loss) |
| strtoll/strtoull | 98.0642 | 0.0591112 | 3.7463ms | 2000 | 30 | 3965.52 | 19450 | 25.1853 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 310.188 | 1.40356 | 11.5421ms | 20000 | 30 | 2.23458e+07 | 61490 | 7.97463 | 1(Win) |
| std::from_chars | 205.718 | 0.949434 | 18.3317ms | 20000 | 30 | 2.3247e+07 | 92716.7 | 12.0265 | 2(Loss) |
| strtoll/strtoull | 76.2015 | 1.69809 | 46.4019ms | 20000 | 30 | 5.41969e+08 | 250303 | 32.4828 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.224 | 0.359267 | 248.128ms | 200000 | 30 | 7.06321e+08 | 1.35059e+06 | 17.5301 | 1(Win) |
| std::from_chars | 137.066 | 0.26979 | 250.955ms | 200000 | 30 | 4.2284e+08 | 1.39156e+06 | 18.061 | 2(Loss) |
| strtoll/strtoull | 68.7509 | 1.63863 | 509.932ms | 200000 | 30 | 6.19992e+10 | 2.77429e+06 | 36.0082 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 290.459 | 1.4013 | 0.1419ms | 200 | 30 | 2540.23 | 656.667 | 7.956 | 1(Win) |
| std::from_chars | 245.581 | 1.01125 | 0.1657ms | 200 | 30 | 1850.57 | 776.667 | 9.529 | 2(Loss) |
| strtoll/strtoull | 98.8264 | 0.440913 | 0.3723ms | 200 | 30 | 2172.41 | 1930 | 24.5527 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 310.138 | 0.150972 | 1.1401ms | 2000 | 30 | 2586.21 | 6150 | 7.91483 | 1(Win) |
| std::from_chars | 262.103 | 0.0842461 | 6.7919ms | 2000 | 48 | 1804.08 | 7277.08 | 9.39602 | 2(Loss) |
| strtoll/strtoull | 101.707 | 0.144024 | 8.122ms | 2000 | 30 | 21885.1 | 18753.3 | 24.297 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 307.339 | 0.914736 | 11.6938ms | 20000 | 30 | 9.668e+06 | 62060 | 8.05029 | 1(Win) |
| std::from_chars | 227.318 | 1.24424 | 15.684ms | 20000 | 30 | 3.26979e+07 | 83906.7 | 10.8851 | 2(Loss) |
| strtoll/strtoull | 91.4635 | 0.800753 | 37.6459ms | 20000 | 30 | 8.36534e+07 | 208537 | 27.0622 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 214.16 | 0.335066 | 160.331ms | 200000 | 30 | 2.67155e+08 | 890617 | 11.5587 | 1(Win) |
| std::from_chars | 190.075 | 0.362927 | 180.66ms | 200000 | 30 | 3.97899e+08 | 1.00347e+06 | 13.0235 | 2(Loss) |
| strtoll/strtoull | 84.9702 | 0.169756 | 406.444ms | 200000 | 30 | 4.35611e+08 | 2.24473e+06 | 29.1348 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 304.364 | 1.31039 | 0.1364ms | 200 | 30 | 2022.99 | 626.667 | 7.63967 | 1(Win) |
| std::from_chars | 250.967 | 1.197 | 0.1681ms | 200 | 30 | 2482.76 | 760 | 9.42067 | 2(Loss) |
| strtoll/strtoull | 102.546 | 0.489096 | 0.3573ms | 200 | 30 | 2482.76 | 1860 | 23.7553 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 322.732 | 0.0942616 | 1.1371ms | 2000 | 30 | 931.034 | 5910 | 7.61453 | 1(Win) |
| std::from_chars | 263.325 | 0.205982 | 1.3426ms | 2000 | 30 | 6678.16 | 7243.33 | 9.33573 | 2(Loss) |
| strtoll/strtoull | 102.362 | 0.046979 | 3.4966ms | 2000 | 30 | 2298.85 | 18633.3 | 24.1328 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 314.191 | 1.8555 | 11.4469ms | 20000 | 30 | 3.80641e+07 | 60706.7 | 7.87449 | 1(Win) |
| std::from_chars | 249.904 | 0.993285 | 14.0614ms | 20000 | 30 | 1.72419e+07 | 76323.3 | 9.90396 | 2(Loss) |
| strtoll/strtoull | 90.3757 | 0.609342 | 38.1701ms | 20000 | 30 | 4.96136e+07 | 211047 | 27.3887 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 213.575 | 0.315969 | 161.262ms | 200000 | 30 | 2.38874e+08 | 893057 | 11.5904 | 1(Win) |
| std::from_chars | 185.173 | 0.53358 | 184.031ms | 200000 | 30 | 9.06204e+08 | 1.03004e+06 | 13.3678 | 2(Loss) |
| strtoll/strtoull | 86.3629 | 0.696468 | 398.885ms | 200000 | 30 | 7.09789e+09 | 2.20853e+06 | 28.6639 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 305.992 | 1.26001 | 0.1388ms | 200 | 30 | 1850.57 | 623.333 | 7.61367 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 302.754 | 1.35073 | 0.1657ms | 200 | 30 | 2172.41 | 630 | 7.67867 | 1(Tie) |
| strtoll/strtoull | 102.73 | 0.495612 | 0.3576ms | 200 | 30 | 2540.23 | 1856.67 | 23.7423 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 322.732 | 0.0942616 | 1.0931ms | 2000 | 30 | 931.034 | 5910 | 7.6115 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 322.551 | 0.106749 | 1.107ms | 2000 | 30 | 1195.4 | 5913.33 | 7.6193 | 1(Tie) |
| strtoll/strtoull | 101.816 | 0.676834 | 8.042ms | 2000 | 30 | 482299 | 18733.3 | 24.2498 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 320.886 | 0.873797 | 11.3866ms | 20000 | 30 | 8.09283e+06 | 59440 | 7.71017 | 1(Win) |
| std::from_chars | 304.384 | 1.002 | 59.9843ms | 20000 | 48 | 1.89232e+07 | 62662.5 | 8.12898 | 2(Loss) |
| strtoll/strtoull | 91.1508 | 2.41849 | 186.595ms | 20000 | 48 | 1.22934e+09 | 209252 | 27.1531 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 258.36 | 1.83956 | 130.614ms | 200000 | 30 | 5.53297e+09 | 738253 | 9.58068 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 257.299 | 1.17229 | 131.321ms | 200000 | 30 | 2.26557e+09 | 741297 | 9.62045 | 1(Tie) |
| strtoll/strtoull | 89.9204 | 1.41632 | 381.452ms | 200000 | 30 | 2.70761e+10 | 2.12115e+06 | 27.5312 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 457.764 | 1.05045 | 0.1839ms | 400 | 30 | 2298.85 | 833.333 | 5.161 | 1(Win) |
| std::from_chars | 365.626 | 0.881968 | 0.3946ms | 400 | 30 | 2540.23 | 1043.33 | 6.54983 | 2(Loss) |
| strtoll/strtoull | 136.402 | 0.11919 | 0.5356ms | 400 | 30 | 333.333 | 2796.67 | 17.9032 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 493.705 | 0.106278 | 3.4328ms | 4000 | 30 | 2022.99 | 7726.67 | 4.99222 | 1(Win) |
| std::from_chars | 375.093 | 0.424696 | 1.9334ms | 4000 | 30 | 55965.5 | 10170 | 6.57908 | 2(Loss) |
| strtoll/strtoull | 135.337 | 1.69034 | 5.161ms | 4000 | 30 | 6.81016e+06 | 28186.7 | 18.2665 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 477.175 | 1.15522 | 14.9083ms | 40000 | 30 | 2.55867e+07 | 79943.3 | 5.18657 | 1(Win) |
| std::from_chars | 209.752 | 0.818832 | 31.2769ms | 40000 | 30 | 6.65299e+07 | 181867 | 11.8011 | 2(Loss) |
| strtoll/strtoull | 105.64 | 0.501694 | 65.3314ms | 40000 | 30 | 9.84603e+07 | 361103 | 23.4322 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 229.22 | 0.17982 | 299.061ms | 400000 | 30 | 2.68667e+08 | 1.66421e+06 | 10.8001 | 1(Win) |
| std::from_chars | 200.088 | 0.181291 | 346.122ms | 400000 | 30 | 3.58389e+08 | 1.90651e+06 | 12.3725 | 2(Loss) |
| strtoll/strtoull | 102.328 | 0.107006 | 670.629ms | 400000 | 30 | 4.77377e+08 | 3.72789e+06 | 24.1936 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 441.857 | 1.03651 | 0.1789ms | 400 | 30 | 2402.3 | 863.333 | 5.33867 | 1(Win) |
| std::from_chars | 365.626 | 0.881968 | 0.2403ms | 400 | 30 | 2540.23 | 1043.33 | 6.55633 | 2(Loss) |
| strtoll/strtoull | 137.549 | 0.296097 | 0.5608ms | 400 | 30 | 2022.99 | 2773.33 | 17.7277 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 469.79 | 0.0914755 | 1.5461ms | 4000 | 30 | 1655.17 | 8120 | 5.25503 | 1(Win) |
| std::from_chars | 374.112 | 0.0572686 | 1.9394ms | 4000 | 30 | 1022.99 | 10196.7 | 6.591 | 2(Loss) |
| strtoll/strtoull | 140.384 | 0.0787775 | 5.1146ms | 4000 | 30 | 13747.1 | 27173.3 | 17.6018 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 457.837 | 1.20558 | 15.2291ms | 40000 | 30 | 3.02699e+07 | 83320 | 5.40508 | 1(Win) |
| std::from_chars | 261.974 | 1.51667 | 25.4595ms | 40000 | 30 | 1.46321e+08 | 145613 | 9.44864 | 2(Loss) |
| strtoll/strtoull | 120.3 | 0.524527 | 57.2802ms | 40000 | 30 | 8.29945e+07 | 317100 | 20.5768 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 302.59 | 0.450604 | 226.581ms | 400000 | 30 | 9.68102e+08 | 1.26068e+06 | 8.18059 | 1(Win) |
| std::from_chars | 261.937 | 0.228303 | 262.839ms | 400000 | 30 | 3.31642e+08 | 1.45634e+06 | 9.45061 | 2(Loss) |
| strtoll/strtoull | 106.176 | 2.3946 | 613.763ms | 400000 | 30 | 2.2205e+11 | 3.5928e+06 | 23.3155 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 497.569 | 1.1418 | 0.1664ms | 400 | 30 | 2298.85 | 766.667 | 4.758 | 1(Win) |
| std::from_chars | 366.798 | 0.874729 | 0.4919ms | 400 | 30 | 2482.76 | 1040 | 6.51517 | 2(Loss) |
| strtoll/strtoull | 138.885 | 0.337286 | 0.5242ms | 400 | 30 | 2574.71 | 2746.67 | 17.5695 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 522.8 | 0.045683 | 1.3846ms | 4000 | 30 | 333.333 | 7296.67 | 4.71315 | 1(Win) |
| std::from_chars | 346.791 | 0.0616421 | 2.4204ms | 4000 | 30 | 1379.31 | 11000 | 7.10732 | 2(Loss) |
| strtoll/strtoull | 126.367 | 1.86989 | 26.7606ms | 4000 | 48 | 1.52943e+07 | 30187.5 | 19.5691 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 511.948 | 1.28366 | 32.9265ms | 40000 | 30 | 2.74467e+07 | 74513.3 | 4.83329 | 1(Win) |
| std::from_chars | 277.554 | 1.03537 | 128.034ms | 40000 | 48 | 9.71973e+07 | 137440 | 8.91631 | 2(Loss) |
| strtoll/strtoull | 111.818 | 1.75848 | 308.45ms | 40000 | 48 | 1.72748e+09 | 341152 | 22.1363 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 316.9 | 0.283382 | 216.765ms | 400000 | 30 | 3.49094e+08 | 1.20375e+06 | 7.81156 | 1(Win) |
| std::from_chars | 255.493 | 0.168848 | 268.702ms | 400000 | 30 | 1.90666e+08 | 1.49307e+06 | 9.68925 | 2(Loss) |
| strtoll/strtoull | 116.036 | 0.0938937 | 592.481ms | 400000 | 30 | 2.85844e+08 | 3.28751e+06 | 21.3353 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 517.832 | 1.21474 | 0.1672ms | 400 | 30 | 2402.3 | 736.667 | 4.50667 | 1(Win) |
| std::from_chars | 349.972 | 0.511088 | 0.2557ms | 400 | 30 | 931.034 | 1090 | 6.838 | 2(Loss) |
| strtoll/strtoull | 136.891 | 0.226523 | 0.5307ms | 400 | 30 | 1195.4 | 2786.67 | 17.8425 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 559.442 | 0.0834946 | 6.3126ms | 4000 | 48 | 1555.85 | 6818.75 | 4.39779 | 1(Win) |
| std::from_chars | 349.865 | 0.0305717 | 2.0417ms | 4000 | 30 | 333.333 | 10903.3 | 7.05163 | 2(Loss) |
| strtoll/strtoull | 128.096 | 1.81114 | 5.3151ms | 4000 | 30 | 8.72717e+06 | 29780 | 19.3061 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 550.726 | 1.14318 | 12.6872ms | 40000 | 30 | 1.88106e+07 | 69266.7 | 4.49341 | 1(Win) |
| std::from_chars | 306.196 | 0.908336 | 22.4807ms | 40000 | 30 | 3.8418e+07 | 124583 | 8.08323 | 2(Loss) |
| strtoll/strtoull | 126.938 | 0.552473 | 54.3324ms | 40000 | 30 | 8.26952e+07 | 300517 | 19.5006 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 428.961 | 0.315222 | 161.267ms | 400000 | 30 | 2.35743e+08 | 889287 | 5.77089 | 1(Win) |
| std::from_chars | 360.867 | 0.276455 | 190.915ms | 400000 | 30 | 2.5621e+08 | 1.05709e+06 | 6.85952 | 2(Loss) |
| strtoll/strtoull | 126.182 | 0.109771 | 545.688ms | 400000 | 30 | 3.30388e+08 | 3.02317e+06 | 19.6197 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 555.538 | 0.850411 | 0.6242ms | 800 | 30 | 4091.95 | 1373.33 | 4.32358 | 1(Win) |
| std::from_chars | 317.451 | 0.138696 | 1.0947ms | 800 | 30 | 333.333 | 2403.33 | 7.68083 | 2(Loss) |
| strtoll/strtoull | 171.319 | 0.208026 | 2.0021ms | 800 | 30 | 2574.71 | 4453.33 | 14.3271 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 572.491 | 0.061619 | 2.5069ms | 8000 | 30 | 2022.99 | 13326.7 | 4.31232 | 1(Win) |
| std::from_chars | 315.786 | 0.0376539 | 4.4713ms | 8000 | 30 | 2482.76 | 24160 | 7.82513 | 2(Loss) |
| strtoll/strtoull | 165.055 | 1.37135 | 8.3024ms | 8000 | 30 | 1.20543e+07 | 46223.3 | 14.9842 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 564.277 | 0.996424 | 24.5157ms | 80000 | 30 | 5.4451e+07 | 135207 | 4.38643 | 1(Win) |
| std::from_chars | 269.406 | 0.716788 | 50.9093ms | 80000 | 30 | 1.23614e+08 | 283193 | 9.1882 | 2(Loss) |
| strtoll/strtoull | 153.54 | 0.568563 | 89.2732ms | 80000 | 30 | 2.39451e+08 | 496900 | 16.1223 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 401.094 | 0.606562 | 351.068ms | 800000 | 30 | 3.99355e+09 | 1.90215e+06 | 6.1719 | 1(Win) |
| std::from_chars | 262.676 | 0.1376 | 526.691ms | 800000 | 30 | 4.79181e+08 | 2.90449e+06 | 9.42441 | 2(Loss) |
| strtoll/strtoull | 142.111 | 0.370275 | 963.176ms | 800000 | 30 | 1.18548e+10 | 5.36861e+06 | 17.4185 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 534.771 | 0.57559 | 0.7151ms | 800 | 30 | 2022.99 | 1426.67 | 4.511 | 1(Win) |
| std::from_chars | 315.699 | 0.286364 | 0.4646ms | 800 | 30 | 1436.78 | 2416.67 | 7.7025 | 2(Loss) |
| strtoll/strtoull | 170.299 | 0.165799 | 1.9943ms | 800 | 30 | 1655.17 | 4480 | 14.3856 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| strtoll/strtoull | 162.282 | 2.42622 | 20.3567ms | 8000 | 30 | 3.90322e+07 | 47013.3 | 15.2387 | 1(Win) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 342.299 | 1.8973 | 31.8178ms | 80000 | 30 | 5.36487e+08 | 222887 | 7.22779 | 1(Win) |
| std::from_chars | 314.42 | 0.697013 | 44.3311ms | 80000 | 30 | 8.5815e+07 | 242650 | 7.87315 | 2(Loss) |
| strtoll/strtoull | 168.364 | 0.530744 | 81.6471ms | 80000 | 30 | 1.7353e+08 | 453150 | 14.704 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 501.126 | 0.292494 | 275.13ms | 800000 | 30 | 5.94896e+08 | 1.52245e+06 | 4.93937 | 1(Win) |
| std::from_chars | 314 | 0.230183 | 440.124ms | 800000 | 30 | 9.38401e+08 | 2.42975e+06 | 7.88428 | 2(Loss) |
| strtoll/strtoull | 165.185 | 0.253579 | 827.258ms | 800000 | 30 | 4.11519e+09 | 4.61871e+06 | 14.9865 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 579.448 | 0.525604 | 0.3218ms | 800 | 30 | 1436.78 | 1316.67 | 4.14808 | 1(Win) |
| std::from_chars | 315.699 | 0.286364 | 0.485ms | 800 | 30 | 1436.78 | 2416.67 | 7.709 | 2(Loss) |
| strtoll/strtoull | 167.067 | 0.191688 | 0.8935ms | 800 | 30 | 2298.85 | 4566.67 | 14.6564 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 601.845 | 0.0619566 | 2.3655ms | 8000 | 30 | 1850.57 | 12676.7 | 4.09717 | 1(Win) |
| std::from_chars | 312.723 | 1.96612 | 4.4343ms | 8000 | 30 | 6.9024e+06 | 24396.7 | 7.90303 | 2(Loss) |
| strtoll/strtoull | 166.86 | 1.03179 | 8.3851ms | 8000 | 30 | 6.67702e+06 | 45723.3 | 14.8229 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 588.098 | 0.968703 | 23.4972ms | 80000 | 30 | 4.73787e+07 | 129730 | 4.20785 | 1(Win) |
| std::from_chars | 314.969 | 0.626723 | 44.2712ms | 80000 | 30 | 6.91379e+07 | 242227 | 7.85953 | 2(Loss) |
| strtoll/strtoull | 165.661 | 0.512154 | 83.1368ms | 80000 | 30 | 1.66903e+08 | 460543 | 14.9431 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 553.459 | 0.198864 | 248.347ms | 800000 | 30 | 2.25446e+08 | 1.37849e+06 | 4.47295 | 1(Win) |
| std::from_chars | 315.078 | 0.20586 | 1039.51ms | 800000 | 30 | 7.45437e+08 | 2.42143e+06 | 7.85728 | 2(Loss) |
| strtoll/strtoull | 165.247 | 0.0869378 | 848.752ms | 800000 | 30 | 4.8334e+08 | 4.61697e+06 | 14.9817 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 632.27 | 0.383872 | 0.2543ms | 800 | 30 | 643.678 | 1206.67 | 3.79167 | 1(Win) |
| std::from_chars | 200.422 | 1.51109 | 0.6469ms | 800 | 30 | 99264.4 | 3806.67 | 12.233 | 2(Loss) |
| strtoll/strtoull | 169.668 | 0.074129 | 2.1683ms | 800 | 30 | 333.333 | 4496.67 | 14.4495 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 640.767 | 0.079863 | 2.2321ms | 8000 | 30 | 2712.64 | 11906.7 | 3.84508 | 1(Win) |
| std::from_chars | 474.072 | 0.0287824 | 2.9691ms | 8000 | 30 | 643.678 | 16093.3 | 5.20997 | 2(Loss) |
| strtoll/strtoull | 158.769 | 1.29344 | 8.6807ms | 8000 | 30 | 1.15895e+07 | 48053.3 | 15.579 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 637.305 | 1.22103 | 21.876ms | 80000 | 30 | 6.41005e+07 | 119713 | 3.88351 | 1(Win) |
| std::from_chars | 383.618 | 0.606403 | 36.1118ms | 80000 | 30 | 4.36341e+07 | 198880 | 6.45199 | 2(Loss) |
| strtoll/strtoull | 151.243 | 0.489891 | 90.927ms | 80000 | 30 | 1.83211e+08 | 504447 | 16.3672 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 481.896 | 0.159716 | 286.814ms | 800000 | 30 | 1.91818e+08 | 1.5832e+06 | 5.13722 | 1(Win) |
| std::from_chars | 304.367 | 0.143032 | 451.448ms | 800000 | 30 | 3.85632e+08 | 2.50664e+06 | 8.13369 | 2(Loss) |
| strtoll/strtoull | 149.784 | 0.152005 | 917.816ms | 800000 | 30 | 1.7984e+09 | 5.09359e+06 | 16.5279 | 3(Loss) |
