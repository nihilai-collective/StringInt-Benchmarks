# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 151.377 | 1.35073 | 0.1508ms | 100 | 30 | 2172.41 | 630 | 1(Win) |
| std::from_chars | 73.9282 | 0.43185 | 0.2718ms | 100 | 30 | 931.034 | 1290 | 2(Loss) |
| strtoll/strtoull | 29.4647 | 0.276474 | 0.6323ms | 100 | 30 | 2402.3 | 3236.67 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 142.339 | 0.0715617 | 1.2905ms | 1000 | 30 | 689.655 | 6700 | 1(Win) |
| std::from_chars | 60.9377 | 0.939676 | 2.857ms | 1000 | 30 | 648793 | 15650 | 2(Loss) |
| strtoll/strtoull | 27.3939 | 0.0181322 | 6.3438ms | 1000 | 30 | 1195.4 | 34813.3 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 45.2629 | 1.93357 | 38.2948ms | 10000 | 30 | 4.97918e+08 | 210697 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 45.1914 | 2.31565 | 86.9762ms | 10000 | 30 | 7.16399e+08 | 211030 | 1(Tie) |
| strtoll/strtoull | 23.5854 | 0.500397 | 180.65ms | 10000 | 30 | 1.22819e+08 | 404350 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 44.9329 | 0.968452 | 384.395ms | 100000 | 30 | 1.26751e+10 | 2.12244e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 44.046 | 1.04294 | 398.738ms | 100000 | 30 | 1.52977e+10 | 2.16518e+06 | 1(Tie) |
| strtoll/strtoull | 22.8217 | 0.611888 | 778.464ms | 100000 | 30 | 1.96141e+10 | 4.1788e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 145.971 | 1.41798 | 0.1372ms | 100 | 30 | 2574.71 | 653.333 | 1(Win) |
| std::from_chars | 62.1962 | 0.570898 | 0.304ms | 100 | 30 | 2298.85 | 1533.33 | 2(Loss) |
| strtoll/strtoull | 27.8581 | 0.229426 | 1.4806ms | 100 | 30 | 1850.57 | 3423.33 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.798 | 0.121237 | 1.3577ms | 1000 | 30 | 2022.99 | 6773.33 | 1(Win) |
| std::from_chars | 56.6539 | 0.100029 | 3.1822ms | 1000 | 30 | 8505.75 | 16833.3 | 2(Loss) |
| strtoll/strtoull | 26.7585 | 0.0255252 | 6.4844ms | 1000 | 30 | 2482.76 | 35640 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 56.7618 | 0.145028 | 31.3717ms | 10000 | 30 | 1.7812e+06 | 168013 | 1(Win) |
| std::from_chars | 54.1604 | 0.145188 | 32.0079ms | 10000 | 30 | 1.96075e+06 | 176083 | 2(Loss) |
| strtoll/strtoull | 25.5132 | 0.965888 | 68.1197ms | 10000 | 30 | 3.91062e+08 | 373797 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 52.9052 | 0.495648 | 324.91ms | 100000 | 30 | 2.39482e+09 | 1.80261e+06 | 1(Win) |
| vn::from_chars | 50.1628 | 0.506521 | 816.006ms | 100000 | 30 | 2.78197e+09 | 1.90116e+06 | 2(Loss) |
| strtoll/strtoull | 25.2183 | 0.517759 | 684.555ms | 100000 | 30 | 1.15013e+10 | 3.78168e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 160.732 | 0.780684 | 0.1318ms | 100 | 30 | 643.678 | 593.333 | 1(Win) |
| std::from_chars | 66.381 | 0.622869 | 0.2782ms | 100 | 30 | 2402.3 | 1436.67 | 2(Loss) |
| strtoll/strtoull | 27.9397 | 0.184934 | 0.644ms | 100 | 30 | 1195.4 | 3413.33 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 149.323 | 0.124116 | 1.2127ms | 1000 | 30 | 1885.06 | 6386.67 | 1(Win) |
| strtoll/strtoull | 27.1883 | 0.0402791 | 15.2356ms | 1000 | 30 | 5988.51 | 35076.7 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 56.5274 | 1.29478 | 32.4596ms | 10000 | 30 | 1.43151e+08 | 168710 | 1(Win) |
| std::from_chars | 53.2372 | 1.01765 | 32.23ms | 10000 | 30 | 9.96976e+07 | 179137 | 2(Loss) |
| strtoll/strtoull | 26.1919 | 0.577904 | 66.1596ms | 10000 | 30 | 1.32831e+08 | 364110 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 53.8403 | 0.378873 | 333.354ms | 100000 | 30 | 1.35112e+09 | 1.7713e+06 | 1(Win) |
| vn::from_chars | 51.9054 | 0.548154 | 332.659ms | 100000 | 30 | 3.04299e+09 | 1.83733e+06 | 2(Loss) |
| strtoll/strtoull | 25.3351 | 0.807206 | 677.938ms | 100000 | 30 | 2.76977e+10 | 3.76424e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 148.625 | 1.12071 | 0.6564ms | 100 | 48 | 2482.27 | 641.667 | 1(Win) |
| std::from_chars | 63.7199 | 0.222717 | 0.2952ms | 100 | 30 | 333.333 | 1496.67 | 2(Loss) |
| strtoll/strtoull | 30.0212 | 0.247241 | 0.6409ms | 100 | 30 | 1850.57 | 3176.67 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 143.482 | 0.13938 | 1.2932ms | 1000 | 30 | 2574.71 | 6646.67 | 1(Win) |
| std::from_chars | 53.1789 | 1.68782 | 3.2411ms | 1000 | 30 | 2.74851e+06 | 17933.3 | 2(Loss) |
| strtoll/strtoull | 25.283 | 0.213985 | 6.9393ms | 1000 | 30 | 195448 | 37720 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 57.9459 | 1.69569 | 31.4575ms | 10000 | 30 | 2.33651e+08 | 164580 | 1(Win) |
| std::from_chars | 55.3529 | 0.659188 | 31.1259ms | 10000 | 30 | 3.86954e+07 | 172290 | 2(Loss) |
| strtoll/strtoull | 25.4786 | 0.757873 | 68.0071ms | 10000 | 30 | 2.41413e+08 | 374303 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 51.2055 | 1.05652 | 333.515ms | 100000 | 30 | 1.16155e+10 | 1.86244e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 51.1572 | 0.70814 | 337.883ms | 100000 | 30 | 5.22812e+09 | 1.8642e+06 | 1(Tie) |
| strtoll/strtoull | 25.0649 | 0.574 | 681.81ms | 100000 | 30 | 1.43092e+10 | 3.80483e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.399 | 0.940277 | 0.2121ms | 200 | 30 | 2022.99 | 873.333 | 1(Win) |
| std::from_chars | 92.5897 | 0.441611 | 0.4223ms | 200 | 30 | 2482.76 | 2060 | 2(Loss) |
| strtoll/strtoull | 52.6892 | 0.205188 | 0.7418ms | 200 | 30 | 1655.17 | 3620 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 213.988 | 0.0889327 | 1.6811ms | 2000 | 30 | 1885.06 | 8913.33 | 1(Win) |
| std::from_chars | 83.3267 | 1.40362 | 4.2039ms | 2000 | 30 | 3.09679e+06 | 22890 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 97.7676 | 1.39002 | 36.2771ms | 20000 | 30 | 2.20615e+08 | 195090 | 1(Win) |
| strtoll/strtoull | 42.416 | 2.40672 | 85.7613ms | 20000 | 30 | 3.51378e+09 | 449677 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 80.4592 | 1.55963 | 397.413ms | 200000 | 30 | 4.10084e+10 | 2.37058e+06 | 1(Win) |
| std::from_chars | 72.4712 | 1.19459 | 471.374ms | 200000 | 30 | 2.96541e+10 | 2.63187e+06 | 2(Loss) |
| strtoll/strtoull | 40.2921 | 0.833853 | 853.159ms | 200000 | 30 | 4.67434e+10 | 4.7338e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 206.572 | 0.850617 | 0.1865ms | 200 | 30 | 1850.57 | 923.333 | 1(Win) |
| std::from_chars | 89.9693 | 0.350369 | 0.3987ms | 200 | 30 | 1655.17 | 2120 | 2(Loss) |
| strtoll/strtoull | 51.7364 | 0.171223 | 0.6839ms | 200 | 30 | 1195.4 | 3686.67 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 197.653 | 0.0962152 | 1.7678ms | 2000 | 30 | 2586.21 | 9650 | 1(Win) |
| std::from_chars | 86.9216 | 0.0419347 | 4.0159ms | 2000 | 30 | 2540.23 | 21943.3 | 2(Loss) |
| strtoll/strtoull | 48.3444 | 0.442152 | 7.1473ms | 2000 | 30 | 912920 | 39453.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 110.016 | 1.62793 | 31.5118ms | 20000 | 30 | 2.38968e+08 | 173370 | 1(Win) |
| std::from_chars | 86.0031 | 0.128842 | 40.7522ms | 20000 | 30 | 2.44944e+06 | 221777 | 2(Loss) |
| strtoll/strtoull | 46.1541 | 1.25834 | 179.956ms | 20000 | 30 | 8.11256e+08 | 413257 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 102.752 | 1.06086 | 339.422ms | 200000 | 30 | 1.16336e+10 | 1.85626e+06 | 1(Win) |
| std::from_chars | 83.9487 | 0.468998 | 420.422ms | 200000 | 30 | 3.40639e+09 | 2.27204e+06 | 2(Loss) |
| strtoll/strtoull | 45.9335 | 0.936568 | 760.467ms | 200000 | 30 | 4.53734e+10 | 4.15242e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.399 | 0.940277 | 0.1783ms | 200 | 30 | 2022.99 | 873.333 | 1(Win) |
| std::from_chars | 93.345 | 0.450336 | 0.3868ms | 200 | 30 | 2540.23 | 2043.33 | 2(Loss) |
| strtoll/strtoull | 53.8292 | 0.259695 | 0.6566ms | 200 | 30 | 2540.23 | 3543.33 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.755 | 0.147657 | 1.7979ms | 2000 | 30 | 5620.69 | 9270 | 1(Win) |
| std::from_chars | 87.9368 | 0.292718 | 3.9933ms | 2000 | 30 | 120931 | 21690 | 2(Loss) |
| strtoll/strtoull | 49.5244 | 0.124948 | 7.2014ms | 2000 | 30 | 69471.3 | 38513.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 108.423 | 1.69491 | 30.7151ms | 20000 | 30 | 2.66704e+08 | 175917 | 1(Win) |
| std::from_chars | 84.9371 | 1.04411 | 96.7053ms | 20000 | 30 | 1.6492e+08 | 224560 | 2(Loss) |
| strtoll/strtoull | 44.9341 | 2.18531 | 74.144ms | 20000 | 30 | 2.5814e+09 | 424477 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 106.318 | 0.642597 | 324.765ms | 200000 | 30 | 3.98702e+09 | 1.79401e+06 | 1(Win) |
| std::from_chars | 83.2935 | 1.05118 | 965.359ms | 200000 | 30 | 1.73826e+10 | 2.28991e+06 | 2(Loss) |
| strtoll/strtoull | 46.3949 | 0.651703 | 749.655ms | 200000 | 30 | 2.15347e+10 | 4.11111e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 236.448 | 0.826446 | 0.1835ms | 200 | 30 | 1333.33 | 806.667 | 1(Win) |
| std::from_chars | 99.6872 | 0.329918 | 0.3737ms | 200 | 30 | 1195.4 | 1913.33 | 2(Loss) |
| strtoll/strtoull | 53.2779 | 2.23464 | 0.6549ms | 200 | 30 | 192000 | 3580 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.509 | 0.0921049 | 1.5558ms | 2000 | 30 | 1712.64 | 8203.33 | 1(Win) |
| std::from_chars | 93.6658 | 0.600516 | 3.6827ms | 2000 | 30 | 448609 | 20363.3 | 2(Loss) |
| strtoll/strtoull | 49.1542 | 0.0314619 | 7.0481ms | 2000 | 30 | 4471.26 | 38803.3 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 130.542 | 0.14695 | 27.3243ms | 20000 | 30 | 1.383e+06 | 146110 | 1(Win) |
| std::from_chars | 91.5396 | 0.215782 | 38.1824ms | 20000 | 30 | 6.06447e+06 | 208363 | 2(Loss) |
| strtoll/strtoull | 47.5352 | 0.568657 | 72.6019ms | 20000 | 30 | 1.56189e+08 | 401250 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 122.496 | 0.692733 | 284.867ms | 200000 | 30 | 3.49036e+09 | 1.55707e+06 | 1(Win) |
| std::from_chars | 92.8904 | 0.502474 | 372.768ms | 200000 | 30 | 3.19351e+09 | 2.05333e+06 | 2(Loss) |
| strtoll/strtoull | 44.8925 | 0.858449 | 752.134ms | 200000 | 30 | 3.99083e+10 | 4.2487e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 346.791 | 0.435876 | 0.2212ms | 400 | 30 | 689.655 | 1100 | 1(Win) |
| std::from_chars | 179.939 | 0.572149 | 0.4155ms | 400 | 30 | 4413.79 | 2120 | 2(Loss) |
| strtoll/strtoull | 88.9207 | 0.129857 | 0.8355ms | 400 | 30 | 931.034 | 4290 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.95 | 0.0764616 | 2.416ms | 4000 | 30 | 2402.3 | 11703.3 | 1(Win) |
| std::from_chars | 162.952 | 0.485688 | 4.2792ms | 4000 | 30 | 387828 | 23410 | 2(Loss) |
| strtoll/strtoull | 76.4826 | 1.00154 | 9.1464ms | 4000 | 30 | 7.48599e+06 | 49876.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 166.605 | 2.39793 | 40.3226ms | 40000 | 30 | 9.04353e+08 | 228967 | 1(Win) |
| strtoll/strtoull | 69.804 | 1.29041 | 96.9687ms | 40000 | 30 | 1.49189e+09 | 546487 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 165.904 | 0.996412 | 417.991ms | 400000 | 30 | 1.57472e+10 | 2.29933e+06 | 1(Win) |
| std::from_chars | 147.112 | 1.16352 | 477.947ms | 400000 | 30 | 2.73084e+10 | 2.59306e+06 | 2(Loss) |
| strtoll/strtoull | 69.1922 | 1.03428 | 1011.7ms | 400000 | 30 | 9.75451e+10 | 5.51319e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.116 | 0.699866 | 0.2294ms | 400 | 30 | 2022.99 | 1173.33 | 1(Win) |
| std::from_chars | 166.823 | 0.346656 | 0.4354ms | 400 | 30 | 1885.06 | 2286.67 | 2(Loss) |
| strtoll/strtoull | 82.2133 | 0.19606 | 2.134ms | 400 | 30 | 2482.76 | 4640 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 263.75 | 1.6225 | 2.6731ms | 4000 | 30 | 1.65206e+06 | 14463.3 | 1(Win) |
| std::from_chars | 173.975 | 0.699027 | 3.9614ms | 4000 | 30 | 704782 | 21926.7 | 2(Loss) |
| strtoll/strtoull | 81.761 | 0.277783 | 20.8545ms | 4000 | 30 | 503920 | 46656.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 202.482 | 0.582344 | 34.0611ms | 40000 | 30 | 3.611e+07 | 188397 | 1(Win) |
| std::from_chars | 169.751 | 1.60524 | 40.6852ms | 40000 | 30 | 3.90388e+08 | 224723 | 2(Loss) |
| strtoll/strtoull | 78.7786 | 1.05977 | 88.2348ms | 40000 | 30 | 7.90033e+08 | 484230 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 188.647 | 1.19166 | 361.226ms | 400000 | 30 | 1.742e+10 | 2.02213e+06 | 1(Win) |
| std::from_chars | 165.446 | 0.453243 | 410.343ms | 400000 | 30 | 3.27635e+09 | 2.3057e+06 | 2(Loss) |
| strtoll/strtoull | 75.4685 | 1.61391 | 889.847ms | 400000 | 30 | 1.99649e+11 | 5.05469e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.305 | 0.884264 | 0.2226ms | 400 | 30 | 2586.21 | 1050 | 1(Win) |
| std::from_chars | 177.703 | 0.431558 | 0.4321ms | 400 | 30 | 2574.71 | 2146.67 | 2(Loss) |
| strtoll/strtoull | 85.2764 | 0.183571 | 0.8266ms | 400 | 30 | 2022.99 | 4473.33 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.554 | 0.0754304 | 2.537ms | 4000 | 30 | 2402.3 | 11863.3 | 1(Win) |
| std::from_chars | 177.648 | 0.0382416 | 3.9266ms | 4000 | 30 | 2022.99 | 21473.3 | 2(Loss) |
| strtoll/strtoull | 73.6712 | 0.0374986 | 9.4025ms | 4000 | 30 | 11310.3 | 51780 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 210.702 | 0.185091 | 33.6649ms | 40000 | 30 | 3.36878e+06 | 181047 | 1(Win) |
| std::from_chars | 175.082 | 0.217673 | 39.8268ms | 40000 | 30 | 6.74786e+06 | 217880 | 2(Loss) |
| strtoll/strtoull | 80.7389 | 0.857864 | 201.153ms | 40000 | 30 | 4.92848e+08 | 472473 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.274 | 0.909044 | 353.895ms | 400000 | 30 | 9.17654e+09 | 1.92395e+06 | 1(Win) |
| std::from_chars | 166.368 | 0.9149 | 409.327ms | 400000 | 30 | 1.32024e+10 | 2.29293e+06 | 2(Loss) |
| strtoll/strtoull | 79.1876 | 0.733758 | 871.927ms | 400000 | 30 | 3.74828e+10 | 4.81729e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 358.749 | 0.841557 | 0.2116ms | 400 | 30 | 2402.3 | 1063.33 | 1(Win) |
| std::from_chars | 166.339 | 0.201979 | 0.4548ms | 400 | 30 | 643.678 | 2293.33 | 2(Loss) |
| strtoll/strtoull | 86.6566 | 0.0473261 | 5.0998ms | 400 | 48 | 208.333 | 4402.08 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.394 | 0.0669949 | 2.1776ms | 4000 | 30 | 1850.57 | 11723.3 | 1(Win) |
| std::from_chars | 204.871 | 0.868425 | 3.3829ms | 4000 | 30 | 784414 | 18620 | 2(Loss) |
| strtoll/strtoull | 82.0365 | 0.534287 | 8.7298ms | 4000 | 30 | 1.85172e+06 | 46500 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 236.512 | 1.4366 | 70.8998ms | 40000 | 30 | 1.61066e+08 | 161290 | 1(Win) |
| std::from_chars | 153.876 | 1.86747 | 43.3736ms | 40000 | 30 | 6.42989e+08 | 247907 | 2(Loss) |
| strtoll/strtoull | 80.1491 | 0.659964 | 86.7118ms | 40000 | 30 | 2.95995e+08 | 475950 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 223.734 | 1.01284 | 309.412ms | 400000 | 30 | 8.94663e+09 | 1.70501e+06 | 1(Win) |
| std::from_chars | 197.601 | 1.09158 | 347.967ms | 400000 | 30 | 1.3322e+10 | 1.9305e+06 | 2(Loss) |
| strtoll/strtoull | 78.6866 | 1.00622 | 893.745ms | 400000 | 30 | 7.13881e+10 | 4.84796e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 423.072 | 0.323816 | 0.3627ms | 800 | 30 | 1022.99 | 1803.33 | 1(Win) |
| std::from_chars | 232.367 | 0.210775 | 0.6125ms | 800 | 30 | 1436.78 | 3283.33 | 2(Loss) |
| strtoll/strtoull | 121.875 | 0.145322 | 1.1892ms | 800 | 30 | 2482.76 | 6260 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 397.364 | 0.0706316 | 3.7578ms | 8000 | 30 | 5517.24 | 19200 | 1(Win) |
| std::from_chars | 234.919 | 0.121458 | 13.8413ms | 8000 | 30 | 46678.2 | 32476.7 | 2(Loss) |
| strtoll/strtoull | 120.154 | 0.285592 | 28.4417ms | 8000 | 30 | 986540 | 63496.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 293.453 | 0.240323 | 50.317ms | 80000 | 30 | 1.17115e+07 | 259987 | 1(Win) |
| std::from_chars | 227.696 | 0.678087 | 60.4336ms | 80000 | 30 | 1.54868e+08 | 335070 | 2(Loss) |
| strtoll/strtoull | 107.268 | 0.695841 | 129.973ms | 80000 | 30 | 7.34821e+08 | 711247 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.178 | 0.88142 | 497.048ms | 800000 | 30 | 1.66815e+10 | 2.67531e+06 | 1(Win) |
| std::from_chars | 218.784 | 1.3178 | 614.878ms | 800000 | 30 | 6.33533e+10 | 3.48718e+06 | 2(Loss) |
| strtoll/strtoull | 108.483 | 0.97297 | 1252.29ms | 800000 | 30 | 1.40468e+11 | 7.0328e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.669 | 0.507479 | 0.7748ms | 800 | 30 | 2402.3 | 1763.33 | 1(Win) |
| std::from_chars | 263.385 | 0.201593 | 0.6213ms | 800 | 30 | 1022.99 | 2896.67 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 411.288 | 0.0500527 | 3.3847ms | 8000 | 30 | 2586.21 | 18550 | 1(Win) |
| std::from_chars | 263.325 | 0.0435741 | 5.2862ms | 8000 | 30 | 4781.61 | 28973.3 | 2(Loss) |
| strtoll/strtoull | 124.82 | 0.238531 | 11.1767ms | 8000 | 30 | 637713 | 61123.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 333.525 | 0.195062 | 42.0791ms | 80000 | 30 | 5.97293e+06 | 228750 | 1(Win) |
| std::from_chars | 253.135 | 0.356079 | 54.1107ms | 80000 | 30 | 3.45534e+07 | 301397 | 2(Loss) |
| strtoll/strtoull | 115.686 | 0.897073 | 113.08ms | 80000 | 30 | 1.05002e+09 | 659493 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 313.408 | 2.10385 | 437.95ms | 800000 | 30 | 7.8688e+10 | 2.43433e+06 | 1(Win) |
| std::from_chars | 252.028 | 0.618123 | 541.97ms | 800000 | 30 | 1.0504e+10 | 3.02721e+06 | 2(Loss) |
| strtoll/strtoull | 120.477 | 1.87855 | 1138.8ms | 800000 | 30 | 4.24557e+11 | 6.33264e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 444.431 | 0.403133 | 0.4252ms | 800 | 30 | 1436.78 | 1716.67 | 1(Win) |
| std::from_chars | 262.781 | 0.260241 | 0.5572ms | 800 | 30 | 1712.64 | 2903.33 | 2(Loss) |
| strtoll/strtoull | 129.385 | 0.0565291 | 1.076ms | 800 | 30 | 333.333 | 5896.67 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 415.846 | 0.74411 | 3.334ms | 8000 | 30 | 559126 | 18346.7 | 1(Win) |
| std::from_chars | 262.058 | 0.547632 | 5.61ms | 8000 | 30 | 762575 | 29113.3 | 2(Loss) |
| strtoll/strtoull | 125.271 | 0.243092 | 11.1727ms | 8000 | 30 | 657575 | 60903.3 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.161 | 2.47296 | 42.656ms | 80000 | 30 | 1.03536e+09 | 237557 | 1(Win) |
| std::from_chars | 257.327 | 1.72995 | 53.4325ms | 80000 | 30 | 7.89219e+08 | 296487 | 2(Loss) |
| strtoll/strtoull | 125.002 | 0.329532 | 112.759ms | 80000 | 30 | 1.21357e+08 | 610343 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.175 | 1.28681 | 419.011ms | 800000 | 30 | 2.73461e+10 | 2.34624e+06 | 1(Win) |
| std::from_chars | 249.976 | 0.738348 | 547.293ms | 800000 | 30 | 1.52345e+10 | 3.05205e+06 | 2(Loss) |
| strtoll/strtoull | 124.712 | 0.224036 | 1118.07ms | 800000 | 30 | 5.63532e+09 | 6.11759e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 439.313 | 0.515272 | 0.3507ms | 800 | 30 | 2402.3 | 1736.67 | 1(Win) |
| std::from_chars | 286.46 | 0.335991 | 0.521ms | 800 | 30 | 2402.3 | 2663.33 | 2(Loss) |
| strtoll/strtoull | 127.015 | 0.110988 | 1.1113ms | 800 | 30 | 1333.33 | 6006.67 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 285.389 | 0.0414192 | 4.8877ms | 8000 | 30 | 3678.16 | 26733.3 | 1(Win) |
| strtoll/strtoull | 123.566 | 0.743646 | 11.6029ms | 8000 | 30 | 6.32461e+06 | 61743.3 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 309.037 | 0.204805 | 45.1345ms | 80000 | 30 | 7.66944e+06 | 246877 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 302.634 | 1.22052 | 45.6381ms | 80000 | 30 | 2.84026e+08 | 252100 | 1(Tie) |
| strtoll/strtoull | 121.059 | 1.0327 | 114.244ms | 80000 | 30 | 1.27074e+09 | 630223 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 295.011 | 0.947259 | 479.311ms | 800000 | 30 | 1.80037e+10 | 2.58614e+06 | 1(Win) |
| std::from_chars | 273.572 | 0.802231 | 500.742ms | 800000 | 30 | 1.50161e+10 | 2.78881e+06 | 2(Loss) |
| strtoll/strtoull | 121.375 | 0.491831 | 1139.8ms | 800000 | 30 | 2.86731e+10 | 6.2858e+06 | 3(Loss) |
