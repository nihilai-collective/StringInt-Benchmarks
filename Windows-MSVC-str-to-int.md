# str-to-int  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36247.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.908 | 1.62581 | 0.3787ms | 100 | 48 | 1804.08 | 377.083 | 1(Win) |
| std::from_chars | 216.744 | 2.06754 | 0.6878ms | 100 | 30 | 2482.76 | 440 | 2(Loss) |
| strtoll/strtoull | 47.5253 | 0.230833 | 0.3826ms | 100 | 30 | 643.678 | 2006.67 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.531 | 0.272371 | 0.6402ms | 1000 | 30 | 2482.76 | 3340 | 1(Win) |
| std::from_chars | 236.058 | 0.225178 | 0.7669ms | 1000 | 30 | 2482.76 | 4040 | 2(Loss) |
| strtoll/strtoull | 54.5997 | 0.110939 | 3.1822ms | 1000 | 30 | 11264.4 | 17466.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 132.756 | 0.953253 | 13.2846ms | 10000 | 30 | 1.40679e+07 | 71836.7 | 1(Win) |
| std::from_chars | 111.667 | 0.614853 | 15.7754ms | 10000 | 30 | 8.27206e+06 | 85403.3 | 2(Loss) |
| strtoll/strtoull | 45.8152 | 0.542697 | 37.8183ms | 10000 | 30 | 3.82839e+07 | 208157 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 95.5799 | 0.307565 | 190.847ms | 100000 | 30 | 2.82529e+08 | 997777 | 1(Win) |
| vn::from_chars | 93.8834 | 0.385703 | 182.749ms | 100000 | 30 | 4.60521e+08 | 1.01581e+06 | 2(Loss) |
| strtoll/strtoull | 44.6464 | 0.181536 | 406.499ms | 100000 | 30 | 4.51103e+08 | 2.13606e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 234.51 | 1.13903 | 0.093ms | 100 | 30 | 643.678 | 406.667 | 1(Win) |
| std::from_chars | 213.509 | 2.07405 | 0.1035ms | 100 | 30 | 2574.71 | 446.667 | 2(Loss) |
| strtoll/strtoull | 43.4146 | 0.265834 | 0.4128ms | 100 | 30 | 1022.99 | 2196.67 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 259.386 | 0.213618 | 1.5791ms | 1000 | 30 | 1850.57 | 3676.67 | 1(Win) |
| std::from_chars | 228.516 | 0.196767 | 0.7841ms | 1000 | 30 | 2022.99 | 4173.33 | 2(Loss) |
| strtoll/strtoull | 55.8466 | 0.0669351 | 3.1953ms | 1000 | 30 | 3919.54 | 17076.7 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 175.771 | 2.27869 | 10.0375ms | 10000 | 30 | 4.58563e+07 | 54256.7 | 1(Win) |
| std::from_chars | 165.282 | 0.979334 | 10.5822ms | 10000 | 30 | 9.57931e+06 | 57700 | 2(Loss) |
| strtoll/strtoull | 53.0625 | 0.782611 | 32.4339ms | 10000 | 30 | 5.93524e+07 | 179727 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 150.967 | 0.461131 | 113.064ms | 100000 | 30 | 2.54569e+08 | 631710 | 1(Win) |
| std::from_chars | 136.248 | 2.23525 | 120.708ms | 100000 | 30 | 7.34369e+09 | 699957 | 2(Loss) |
| strtoll/strtoull | 53.9799 | 0.209536 | 316.569ms | 100000 | 30 | 4.11124e+08 | 1.76672e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 121.746 | 0.883463 | 0.1636ms | 100 | 30 | 1436.78 | 783.333 | 1(Win) |
| strtoll/strtoull | 46.5207 | 0.452915 | 0.3878ms | 100 | 30 | 2586.21 | 2050 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 335.014 | 0.325437 | 0.5387ms | 1000 | 30 | 2574.71 | 2846.67 | 1(Win) |
| std::from_chars | 244.323 | 0.149603 | 0.7547ms | 1000 | 30 | 1022.99 | 3903.33 | 2(Loss) |
| strtoll/strtoull | 58.9051 | 0.0542039 | 3.0077ms | 1000 | 30 | 2310.34 | 16190 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.571 | 1.02036 | 7.7579ms | 10000 | 30 | 5.83895e+06 | 43236.7 | 1(Win) |
| std::from_chars | 175.029 | 1.43806 | 9.9407ms | 10000 | 30 | 1.84184e+07 | 54486.7 | 2(Loss) |
| strtoll/strtoull | 56.4315 | 0.8111 | 30.6641ms | 10000 | 30 | 5.63672e+07 | 168997 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 165.991 | 0.667209 | 102.807ms | 100000 | 30 | 4.40835e+08 | 574533 | 1(Win) |
| std::from_chars | 148.654 | 0.376401 | 119.569ms | 100000 | 30 | 1.74933e+08 | 641540 | 2(Loss) |
| strtoll/strtoull | 56.0196 | 0.325646 | 305.389ms | 100000 | 30 | 9.22003e+08 | 1.70239e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 270.866 | 2.06966 | 0.3845ms | 100 | 48 | 2548.76 | 352.083 | 1(Win) |
| std::from_chars | 172.351 | 2.24845 | 0.5652ms | 100 | 30 | 4643.68 | 553.333 | 2(Loss) |
| strtoll/strtoull | 55.9887 | 0.195695 | 0.3183ms | 100 | 30 | 333.333 | 1703.33 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 296.787 | 0.196445 | 0.6244ms | 1000 | 30 | 1195.4 | 3213.33 | 1(Win) |
| std::from_chars | 272.219 | 0.0951475 | 0.6767ms | 1000 | 30 | 333.333 | 3503.33 | 2(Loss) |
| strtoll/strtoull | 55.727 | 0.0609543 | 3.1859ms | 1000 | 30 | 3264.37 | 17113.3 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 203.849 | 0.917182 | 8.633ms | 10000 | 30 | 5.52351e+06 | 46783.3 | 1(Win) |
| std::from_chars | 170.909 | 1.24304 | 23.6296ms | 10000 | 30 | 1.44331e+07 | 55800 | 2(Loss) |
| strtoll/strtoull | 53.6606 | 0.592761 | 32.4522ms | 10000 | 30 | 3.32943e+07 | 177723 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 152.628 | 0.303318 | 112.507ms | 100000 | 30 | 1.07758e+08 | 624837 | 1(Win) |
| std::from_chars | 144.259 | 0.353667 | 119.289ms | 100000 | 30 | 1.63992e+08 | 661083 | 2(Loss) |
| strtoll/strtoull | 52.9777 | 0.0908969 | 324.326ms | 100000 | 30 | 8.03219e+07 | 1.80014e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.853 | 1.28066 | 0.1247ms | 200 | 30 | 1655.17 | 580 | 1(Win) |
| std::from_chars | 244.532 | 0.952284 | 0.1632ms | 200 | 30 | 1655.17 | 780 | 2(Loss) |
| strtoll/strtoull | 100.387 | 0.356876 | 0.3731ms | 200 | 30 | 1379.31 | 1900 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 344.494 | 0.161624 | 2.4115ms | 2000 | 30 | 2402.3 | 5536.67 | 1(Win) |
| std::from_chars | 247.066 | 0.0962152 | 1.4177ms | 2000 | 30 | 1655.17 | 7720 | 2(Loss) |
| strtoll/strtoull | 83.9748 | 2.42737 | 4.0313ms | 2000 | 30 | 9.11913e+06 | 22713.3 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 191.918 | 0.67557 | 18.2064ms | 20000 | 30 | 1.35235e+07 | 99383.3 | 1(Win) |
| std::from_chars | 151.883 | 0.460862 | 22.8669ms | 20000 | 30 | 1.00486e+07 | 125580 | 2(Loss) |
| strtoll/strtoull | 75.1418 | 0.616651 | 45.8522ms | 20000 | 30 | 7.35016e+07 | 253833 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.535 | 1.3671 | 215.908ms | 200000 | 30 | 8.43195e+09 | 1.22632e+06 | 1(Win) |
| std::from_chars | 144.154 | 0.183028 | 252.25ms | 200000 | 30 | 1.7594e+08 | 1.32314e+06 | 2(Loss) |
| strtoll/strtoull | 73.9851 | 0.118695 | 464.216ms | 200000 | 30 | 2.80903e+08 | 2.57802e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 314.398 | 0.763526 | 0.1281ms | 200 | 30 | 643.678 | 606.667 | 1(Win) |
| std::from_chars | 236.448 | 0.574222 | 0.1786ms | 200 | 30 | 643.678 | 806.667 | 2(Loss) |
| strtoll/strtoull | 90.2531 | 0.298695 | 0.941ms | 200 | 30 | 1195.4 | 2113.33 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.348 | 0.140934 | 1.0717ms | 2000 | 30 | 2022.99 | 5826.67 | 1(Win) |
| std::from_chars | 213.43 | 0.100133 | 1.7063ms | 2000 | 30 | 2402.3 | 8936.67 | 2(Loss) |
| strtoll/strtoull | 89.2396 | 0.0444901 | 4.0712ms | 2000 | 30 | 2712.64 | 21373.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.061 | 0.880057 | 13.6179ms | 20000 | 30 | 1.33042e+07 | 75670 | 1(Win) |
| std::from_chars | 203.4 | 0.886453 | 17.1382ms | 20000 | 30 | 2.07296e+07 | 93773.3 | 2(Loss) |
| strtoll/strtoull | 86.0898 | 0.86786 | 39.6642ms | 20000 | 30 | 1.10912e+08 | 221553 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.249 | 0.283095 | 147.929ms | 200000 | 30 | 1.62159e+08 | 821253 | 1(Win) |
| std::from_chars | 197.105 | 2.05783 | 170.338ms | 200000 | 30 | 1.18961e+10 | 967683 | 2(Loss) |
| strtoll/strtoull | 86.6802 | 0.0845006 | 396.264ms | 200000 | 30 | 1.0372e+08 | 2.20044e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.116 | 1.07598 | 0.1226ms | 200 | 30 | 1195.4 | 586.667 | 1(Win) |
| std::from_chars | 244.532 | 0.952284 | 0.1616ms | 200 | 30 | 1655.17 | 780 | 2(Loss) |
| strtoll/strtoull | 98.8264 | 0.440913 | 0.3691ms | 200 | 30 | 2172.41 | 1930 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 344.287 | 0.164209 | 1.0201ms | 2000 | 30 | 2482.76 | 5540 | 1(Win) |
| std::from_chars | 205.183 | 0.0637255 | 8.3096ms | 2000 | 48 | 1684.4 | 9295.83 | 2(Loss) |
| strtoll/strtoull | 93.4212 | 0.0338961 | 3.7448ms | 2000 | 30 | 1436.78 | 20416.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 256.94 | 1.21242 | 13.1591ms | 20000 | 30 | 2.43009e+07 | 74233.3 | 1(Win) |
| std::from_chars | 199.834 | 0.825098 | 17.171ms | 20000 | 30 | 1.8606e+07 | 95446.7 | 2(Loss) |
| strtoll/strtoull | 89.9424 | 0.977315 | 37.9464ms | 20000 | 30 | 1.28861e+08 | 212063 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.8 | 0.402393 | 150.397ms | 200000 | 30 | 3.09895e+08 | 798723 | 1(Win) |
| std::from_chars | 199.622 | 0.344784 | 228.532ms | 200000 | 30 | 3.2558e+08 | 955480 | 2(Loss) |
| strtoll/strtoull | 88.805 | 1.00088 | 384.294ms | 200000 | 30 | 1.38633e+10 | 2.14779e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 336.591 | 1.54478 | 0.1185ms | 200 | 30 | 2298.85 | 566.667 | 1(Win) |
| std::from_chars | 152.996 | 0.743111 | 0.2513ms | 200 | 30 | 2574.71 | 1246.67 | 2(Loss) |
| strtoll/strtoull | 100.563 | 0.307882 | 0.3597ms | 200 | 30 | 1022.99 | 1896.67 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 332.677 | 0.152682 | 1.0671ms | 2000 | 30 | 2298.85 | 5733.33 | 1(Win) |
| std::from_chars | 277.365 | 0.114213 | 1.2928ms | 2000 | 30 | 1850.57 | 6876.67 | 2(Loss) |
| strtoll/strtoull | 96.5095 | 2.17471 | 3.5117ms | 2000 | 30 | 5.54171e+06 | 19763.3 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 292.299 | 0.852549 | 11.8138ms | 20000 | 30 | 9.28464e+06 | 65253.3 | 1(Win) |
| std::from_chars | 269.361 | 1.42996 | 12.8078ms | 20000 | 30 | 3.07582e+07 | 70810 | 2(Loss) |
| strtoll/strtoull | 97.5526 | 0.814384 | 35.7158ms | 20000 | 30 | 7.6061e+07 | 195520 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 307.556 | 0.458117 | 111.23ms | 200000 | 30 | 2.42151e+08 | 620163 | 1(Win) |
| vn::from_chars | 291.241 | 0.394609 | 118.234ms | 200000 | 30 | 2.00359e+08 | 654903 | 2(Loss) |
| strtoll/strtoull | 98.4601 | 0.13815 | 348.705ms | 200000 | 30 | 2.14863e+08 | 1.93718e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 527.378 | 1.08581 | 0.1506ms | 400 | 30 | 1850.57 | 723.333 | 1(Win) |
| std::from_chars | 340.598 | 0.663198 | 0.648ms | 400 | 30 | 1655.17 | 1120 | 2(Loss) |
| strtoll/strtoull | 123.854 | 0.241163 | 0.5597ms | 400 | 30 | 1655.17 | 3080 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 542.631 | 0.121047 | 1.3237ms | 4000 | 30 | 2172.41 | 7030 | 1(Win) |
| std::from_chars | 269.273 | 0.0704529 | 2.6498ms | 4000 | 30 | 2988.51 | 14166.7 | 2(Loss) |
| strtoll/strtoull | 108.229 | 1.6306 | 6.5073ms | 4000 | 30 | 9.90947e+06 | 35246.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 296.941 | 1.10522 | 22.5903ms | 40000 | 30 | 6.04789e+07 | 128467 | 1(Win) |
| std::from_chars | 221.587 | 0.748479 | 31.2371ms | 40000 | 30 | 4.98095e+07 | 172153 | 2(Loss) |
| strtoll/strtoull | 107.341 | 0.644169 | 64.0474ms | 40000 | 30 | 1.5722e+08 | 355380 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 263.917 | 0.254179 | 260.845ms | 400000 | 30 | 4.04935e+08 | 1.44542e+06 | 1(Win) |
| std::from_chars | 219.228 | 0.156358 | 314.222ms | 400000 | 30 | 2.22068e+08 | 1.74006e+06 | 2(Loss) |
| strtoll/strtoull | 106.602 | 0.235835 | 646.45ms | 400000 | 30 | 2.13663e+09 | 3.57845e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 495.415 | 1.10515 | 0.1599ms | 400 | 30 | 2172.41 | 770 | 1(Win) |
| std::from_chars | 305.992 | 0.743111 | 0.2978ms | 400 | 30 | 2574.71 | 1246.67 | 2(Loss) |
| strtoll/strtoull | 126.314 | 0.292744 | 0.6113ms | 400 | 30 | 2344.83 | 3020 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 509.759 | 0.0924783 | 1.4203ms | 4000 | 30 | 1436.78 | 7483.33 | 1(Win) |
| std::from_chars | 173.107 | 0.181363 | 4.0662ms | 4000 | 30 | 47919.5 | 22036.7 | 2(Loss) |
| strtoll/strtoull | 121.423 | 0.0929361 | 5.7762ms | 4000 | 30 | 25574.7 | 31416.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 397.102 | 0.733719 | 17.5129ms | 40000 | 30 | 1.49038e+07 | 96063.3 | 1(Win) |
| std::from_chars | 291.733 | 0.908336 | 23.6609ms | 40000 | 30 | 4.23218e+07 | 130760 | 2(Loss) |
| strtoll/strtoull | 120.764 | 0.536559 | 57.0637ms | 40000 | 30 | 8.61789e+07 | 315880 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 340.957 | 0.205002 | 478.686ms | 400000 | 30 | 1.57818e+08 | 1.11882e+06 | 1(Win) |
| std::from_chars | 289.895 | 0.225496 | 238.321ms | 400000 | 30 | 2.64142e+08 | 1.31589e+06 | 2(Loss) |
| strtoll/strtoull | 118.718 | 0.24748 | 582.12ms | 400000 | 30 | 1.89708e+09 | 3.21324e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 544.957 | 0.684948 | 0.1457ms | 400 | 30 | 689.655 | 700 | 1(Win) |
| std::from_chars | 287.54 | 0.618977 | 0.2653ms | 400 | 30 | 2022.99 | 1326.67 | 2(Loss) |
| strtoll/strtoull | 125.898 | 0.280846 | 0.5666ms | 400 | 30 | 2172.41 | 3030 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 581.509 | 0.138676 | 1.2608ms | 4000 | 30 | 2482.76 | 6560 | 1(Win) |
| std::from_chars | 281.735 | 0.109717 | 2.4808ms | 4000 | 30 | 6620.69 | 13540 | 2(Loss) |
| strtoll/strtoull | 120.363 | 1.93375 | 5.6991ms | 4000 | 30 | 1.12682e+07 | 31693.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 403.857 | 0.806426 | 17.3313ms | 40000 | 30 | 1.74067e+07 | 94456.7 | 1(Win) |
| std::from_chars | 287.403 | 1.50983 | 25.0697ms | 40000 | 30 | 1.2048e+08 | 132730 | 2(Loss) |
| strtoll/strtoull | 121.718 | 0.890095 | 55.8565ms | 40000 | 30 | 2.33454e+08 | 313403 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 357.059 | 0.589802 | 192.316ms | 400000 | 30 | 1.19117e+09 | 1.06837e+06 | 1(Win) |
| std::from_chars | 290.4 | 0.222814 | 237.562ms | 400000 | 30 | 2.57001e+08 | 1.3136e+06 | 2(Loss) |
| strtoll/strtoull | 122.401 | 0.354832 | 561.943ms | 400000 | 30 | 3.66873e+09 | 3.11655e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 602.321 | 1.38217 | 0.1351ms | 400 | 30 | 2298.85 | 633.333 | 1(Win) |
| std::from_chars | 410.183 | 0.915014 | 0.1853ms | 400 | 30 | 2172.41 | 930 | 2(Loss) |
| strtoll/strtoull | 138.716 | 0.337628 | 1.2258ms | 400 | 30 | 2586.21 | 2750 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 627.417 | 0.122168 | 1.1584ms | 4000 | 30 | 1655.17 | 6080 | 1(Win) |
| std::from_chars | 433.817 | 0.121108 | 1.635ms | 4000 | 30 | 3402.3 | 8793.33 | 2(Loss) |
| strtoll/strtoull | 137.881 | 2.07536 | 5.0814ms | 4000 | 30 | 9.89057e+06 | 27666.7 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 518.889 | 0.761773 | 13.3375ms | 40000 | 30 | 9.40902e+06 | 73516.7 | 1(Win) |
| std::from_chars | 424.547 | 0.817929 | 16.2913ms | 40000 | 30 | 1.6204e+07 | 89853.3 | 2(Loss) |
| strtoll/strtoull | 136.084 | 0.780197 | 50.7808ms | 40000 | 30 | 1.43495e+08 | 280320 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 497.206 | 0.277222 | 138.357ms | 400000 | 30 | 1.35714e+08 | 767227 | 1(Win) |
| std::from_chars | 422.945 | 0.289472 | 162.372ms | 400000 | 30 | 2.04496e+08 | 901937 | 2(Loss) |
| strtoll/strtoull | 132.337 | 0.345983 | 519.456ms | 400000 | 30 | 2.98395e+09 | 2.88257e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 613.624 | 0.740096 | 0.2492ms | 800 | 30 | 2540.23 | 1243.33 | 1(Win) |
| std::from_chars | 212.715 | 0.258293 | 0.6811ms | 800 | 30 | 2574.71 | 3586.67 | 2(Loss) |
| strtoll/strtoull | 169.542 | 0.150681 | 0.8313ms | 800 | 30 | 1379.31 | 4500 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 615.77 | 2.40591 | 2.2517ms | 8000 | 30 | 2.66576e+06 | 12390 | 1(Win) |
| std::from_chars | 370.299 | 0.0366721 | 3.7958ms | 8000 | 30 | 1712.64 | 20603.3 | 2(Loss) |
| strtoll/strtoull | 166.702 | 1.16321 | 21.4881ms | 8000 | 30 | 8.5023e+06 | 45766.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.693 | 0.59721 | 26.5413ms | 80000 | 30 | 2.27962e+07 | 145963 | 1(Win) |
| std::from_chars | 364.758 | 0.542443 | 37.9585ms | 80000 | 30 | 3.8619e+07 | 209163 | 2(Loss) |
| strtoll/strtoull | 154.303 | 0.646444 | 89.019ms | 80000 | 30 | 3.0649e+08 | 494443 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 455.51 | 0.110254 | 307.823ms | 800000 | 30 | 1.02305e+08 | 1.67491e+06 | 1(Win) |
| std::from_chars | 354.642 | 1.35753 | 388.502ms | 800000 | 30 | 2.55869e+10 | 2.15129e+06 | 2(Loss) |
| strtoll/strtoull | 156.102 | 0.267773 | 887.947ms | 800000 | 30 | 5.13829e+09 | 4.88744e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 447.035 | 0.27141 | 0.3517ms | 800 | 30 | 643.678 | 1706.67 | 1(Win) |
| vn::from_chars | 340.092 | 0.410187 | 0.427ms | 800 | 30 | 2540.23 | 2243.33 | 2(Loss) |
| strtoll/strtoull | 184.582 | 0.211785 | 0.7967ms | 800 | 30 | 2298.85 | 4133.33 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 598.227 | 0.0726407 | 2.3944ms | 8000 | 30 | 2574.71 | 12753.3 | 1(Win) |
| std::from_chars | 457.947 | 0.0546049 | 3.3841ms | 8000 | 30 | 2482.76 | 16660 | 2(Loss) |
| strtoll/strtoull | 177.483 | 2.03353 | 18.9069ms | 8000 | 30 | 2.2924e+07 | 42986.7 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 575.485 | 0.682175 | 27.2715ms | 80000 | 30 | 2.45372e+07 | 132573 | 1(Win) |
| std::from_chars | 447.787 | 0.983635 | 88.2317ms | 80000 | 30 | 8.4261e+07 | 170380 | 2(Loss) |
| strtoll/strtoull | 170.524 | 1.5086 | 85.7477ms | 80000 | 30 | 1.36673e+09 | 447410 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 530.111 | 2.19234 | 1325.74ms | 800000 | 48 | 4.77866e+10 | 1.43921e+06 | 1(Win) |
| std::from_chars | 415.438 | 2.08123 | 1742ms | 800000 | 48 | 7.01209e+10 | 1.83647e+06 | 2(Loss) |
| strtoll/strtoull | 151.978 | 1.48208 | 873.544ms | 800000 | 30 | 1.66066e+11 | 5.02006e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 637.554 | 0.487979 | 0.238ms | 800 | 30 | 1022.99 | 1196.67 | 1(Win) |
| std::from_chars | 438.471 | 0.522826 | 0.5301ms | 800 | 30 | 2482.76 | 1740 | 2(Loss) |
| strtoll/strtoull | 183.989 | 0.251559 | 0.7692ms | 800 | 30 | 3264.37 | 4146.67 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 654.135 | 0.0767238 | 6.0134ms | 8000 | 30 | 2402.3 | 11663.3 | 1(Win) |
| std::from_chars | 458.497 | 0.0546705 | 3.0952ms | 8000 | 30 | 2482.76 | 16640 | 2(Loss) |
| strtoll/strtoull | 184.925 | 2.04316 | 8.2782ms | 8000 | 30 | 2.13163e+07 | 41256.7 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 613.033 | 1.84981 | 24.1512ms | 80000 | 30 | 1.58996e+08 | 124453 | 1(Win) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 593.833 | 2.11871 | 238.662ms | 800000 | 30 | 2.22288e+10 | 1.28477e+06 | 1(Win) |
| strtoll/strtoull | 155.62 | 1.57777 | 887.107ms | 800000 | 30 | 1.79497e+11 | 4.90257e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 677.165 | 0.728854 | 0.2544ms | 800 | 30 | 2022.99 | 1126.67 | 1(Win) |
| std::from_chars | 341.615 | 0.39196 | 1.0038ms | 800 | 30 | 2298.85 | 2233.33 | 2(Loss) |
| strtoll/strtoull | 164.427 | 0.19606 | 0.8672ms | 800 | 30 | 2482.76 | 4640 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 683.229 | 1.12486 | 2.2998ms | 8000 | 30 | 473333 | 11166.7 | 1(Win) |
| std::from_chars | 420.816 | 2.46729 | 3.4471ms | 8000 | 30 | 6.00286e+06 | 18130 | 2(Loss) |
| strtoll/strtoull | 156.169 | 0.553944 | 9.7817ms | 8000 | 30 | 2.19706e+06 | 48853.3 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 578.364 | 1.9606 | 25.6588ms | 80000 | 30 | 2.00667e+08 | 131913 | 1(Win) |
| std::from_chars | 338.086 | 0.987268 | 230.002ms | 80000 | 48 | 2.38253e+08 | 225665 | 2(Loss) |
| strtoll/strtoull | 150.374 | 2.00817 | 480.786ms | 80000 | 48 | 4.98285e+09 | 507362 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 547.145 | 0.149615 | 253.927ms | 800000 | 30 | 1.3057e+08 | 1.3944e+06 | 1(Win) |
| std::from_chars | 423.786 | 0.188083 | 327.489ms | 800000 | 30 | 3.43959e+08 | 1.80029e+06 | 2(Loss) |
| strtoll/strtoull | 156.709 | 0.134129 | 896.764ms | 800000 | 30 | 1.27925e+09 | 4.8685e+06 | 3(Loss) |
