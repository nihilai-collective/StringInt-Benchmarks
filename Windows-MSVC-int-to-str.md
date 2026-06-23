# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1262.46 | 1.05263 | 0.1942ms | 262 | 48 | 208.333 | 197.917 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1209.01 | 2.24132 | 0.1041ms | 262 | 30 | 643.678 | 206.667 | 1(Tie) |
| std::to_chars | 551.168 | 2.04355 | 0.1113ms | 262 | 30 | 2574.71 | 453.333 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2277.85 | 0.753065 | 0.5263ms | 2699 | 30 | 2172.41 | 1130 | 1(Win) |
| jeaiii::to_text | 1856.23 | 0.571649 | 0.6218ms | 2699 | 30 | 1885.06 | 1386.67 | 2(Loss) |
| fmt::format_to | 1335.97 | 0.426216 | 0.3871ms | 2699 | 30 | 2022.99 | 1926.67 | 3(Loss) |
| std::to_chars | 584.107 | 0.105115 | 0.8557ms | 2699 | 30 | 643.678 | 4406.67 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to **STATISTICAL TIE** | 579.913 | 1.78078 | 7.798ms | 26555 | 30 | 1.81429e+07 | 43670 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 560.904 | 0.914297 | 8.4577ms | 26555 | 30 | 5.11224e+06 | 45150 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 554.194 | 1.03685 | 8.5097ms | 26555 | 30 | 6.73482e+06 | 45696.7 | 1(Tie) |
| std::to_chars | 365.455 | 1.56943 | 12.6627ms | 26555 | 30 | 3.54838e+07 | 69296.7 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 458.679 | 0.661623 | 98.7158ms | 264696 | 30 | 3.9776e+08 | 550350 | 1(Win) |
| vn::to_chars | 437.85 | 0.795705 | 102.134ms | 264696 | 30 | 6.31348e+08 | 576530 | 2(Loss) |
| fmt::format_to | 422.373 | 0.520989 | 107.979ms | 264696 | 30 | 2.90858e+08 | 597657 | 3(Loss) |
| std::to_chars | 309.258 | 0.311789 | 146.239ms | 264696 | 30 | 1.94311e+08 | 816257 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1467.43 | 2.24132 | 0.0673ms | 318 | 30 | 643.678 | 206.667 | 1(Win) |
| std::to_chars | 627.452 | 1.43182 | 0.1077ms | 318 | 30 | 1436.78 | 483.333 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2242.93 | 0.639822 | 0.2667ms | 3128 | 30 | 2172.41 | 1330 | 1(Win) |
| vn::to_chars | 2182.75 | 0.640519 | 0.2626ms | 3128 | 30 | 2298.85 | 1366.67 | 2(Loss) |
| fmt::format_to | 1612.48 | 0.501879 | 0.8337ms | 3128 | 30 | 2586.21 | 1850 | 3(Loss) |
| std::to_chars | 654.666 | 0.201943 | 0.8793ms | 3128 | 30 | 2540.23 | 4556.67 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1607.84 | 1.6301 | 3.4618ms | 31544 | 30 | 2.79059e+06 | 18710 | 1(Win) |
| jeaiii::to_text | 1382.48 | 0.451888 | 9.5062ms | 31544 | 30 | 290069 | 21760 | 2(Loss) |
| fmt::format_to | 1064.12 | 1.57712 | 5.1373ms | 31544 | 30 | 5.96355e+06 | 28270 | 3(Loss) |
| std::to_chars | 541.283 | 0.947512 | 10.1453ms | 31544 | 30 | 8.31909e+06 | 55576.7 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1012.67 | 0.793131 | 53.0692ms | 314102 | 30 | 1.65127e+08 | 295803 | 1(Win) |
| vn::to_chars | 961.517 | 0.811684 | 56.6422ms | 314102 | 30 | 1.91833e+08 | 311540 | 2(Loss) |
| fmt::format_to | 813.018 | 0.690702 | 66.4709ms | 314102 | 30 | 1.94287e+08 | 368443 | 3(Loss) |
| std::to_chars | 512.509 | 0.370056 | 105.835ms | 314102 | 30 | 1.40344e+08 | 584480 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 992.624 | 1.05263 | 0.2074ms | 206 | 48 | 208.333 | 197.917 | 1(Win) |
| std::to_chars | 433.361 | 2.04355 | 0.2291ms | 206 | 30 | 2574.71 | 453.333 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1846.43 | 0.867639 | 0.2242ms | 2162 | 30 | 2816.09 | 1116.67 | 1(Win) |
| jeaiii::to_text | 1550.26 | 0.639822 | 0.2519ms | 2162 | 30 | 2172.41 | 1330 | 2(Loss) |
| fmt::format_to | 999.278 | 0.492024 | 0.9591ms | 2162 | 30 | 3091.95 | 2063.33 | 3(Loss) |
| std::to_chars | 467.538 | 0.126323 | 0.8359ms | 2162 | 30 | 931.034 | 4410 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 895.391 | 2.26337 | 4.3926ms | 21513 | 30 | 8.06878e+06 | 22913.3 | 1(Win) |
| jeaiii::to_text | 793.466 | 1.62331 | 4.9099ms | 21513 | 30 | 5.2853e+06 | 25856.7 | 2(Loss) |
| fmt::format_to | 672.301 | 1.87001 | 28.2095ms | 21513 | 48 | 1.56316e+07 | 30516.7 | 3(Loss) |
| std::to_chars | 371.809 | 1.558 | 10.269ms | 21513 | 30 | 2.21727e+07 | 55180 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 653.156 | 0.881768 | 57.2997ms | 215421 | 30 | 2.30767e+08 | 314537 | 1(Win) |
| vn::to_chars | 585.12 | 1.30153 | 62.3942ms | 215421 | 30 | 6.26489e+08 | 351110 | 2(Loss) |
| fmt::format_to | 547.124 | 1.10065 | 67.5718ms | 215421 | 30 | 5.12414e+08 | 375493 | 3(Loss) |
| std::to_chars | 347.35 | 0.522356 | 107.378ms | 215421 | 30 | 2.86349e+08 | 591453 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1267.73 | 2.39589 | 0.101ms | 257 | 30 | 643.678 | 193.333 | 1(Win) |
| std::to_chars | 483.739 | 0.914221 | 0.153ms | 257 | 30 | 643.678 | 506.667 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2680.38 | 0.691142 | 0.1954ms | 2567 | 30 | 1195.4 | 913.333 | 1(Win) |
| jeaiii::to_text | 1883.14 | 0.368818 | 0.2643ms | 2567 | 30 | 689.655 | 1300 | 2(Loss) |
| fmt::format_to | 1332.89 | 0.487217 | 0.3544ms | 2567 | 30 | 2402.3 | 1836.67 | 3(Loss) |
| std::to_chars | 520.869 | 0.228109 | 0.9126ms | 2567 | 30 | 3448.28 | 4700 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1064.18 | 1.49652 | 4.2715ms | 25613 | 30 | 3.53982e+06 | 22953.3 | 1(Win) |
| jeaiii::to_text | 927.352 | 0.886649 | 4.9815ms | 25613 | 30 | 1.63628e+06 | 26340 | 2(Loss) |
| fmt::format_to | 720.686 | 1.6183 | 6.0889ms | 25613 | 30 | 9.02547e+06 | 33893.3 | 3(Loss) |
| std::to_chars | 371.411 | 1.59681 | 11.8517ms | 25613 | 30 | 3.30857e+07 | 65766.7 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 713.125 | 0.766341 | 60.9217ms | 257002 | 30 | 2.08117e+08 | 343693 | 1(Win) |
| jeaiii::to_text | 681.088 | 0.635188 | 64.5654ms | 257002 | 30 | 1.56745e+08 | 359860 | 2(Loss) |
| fmt::format_to | 612.322 | 0.784193 | 71.7689ms | 257002 | 30 | 2.95583e+08 | 400273 | 3(Loss) |
| std::to_chars | 359.007 | 0.329277 | 122.201ms | 257002 | 30 | 1.51605e+08 | 682707 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2540.39 | 2.39589 | 0.0566ms | 515 | 30 | 643.678 | 193.333 | 1(Win) |
| fmt::format_to | 1713.29 | 2.20201 | 0.0648ms | 515 | 30 | 1195.4 | 286.667 | 2(Loss) |
| std::to_chars | 866.722 | 1.54478 | 0.1414ms | 515 | 30 | 2298.85 | 566.667 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3640.41 | 0.68454 | 0.2686ms | 5166 | 30 | 2574.71 | 1353.33 | 1(Win) |
| jeaiii::to_text | 2793.96 | 0.507479 | 0.342ms | 5166 | 30 | 2402.3 | 1763.33 | 2(Loss) |
| fmt::format_to | 1952.45 | 0.311256 | 0.513ms | 5166 | 30 | 1850.57 | 2523.33 | 3(Loss) |
| std::to_chars | 861.308 | 0.129857 | 1.0967ms | 5166 | 30 | 1655.17 | 5720 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1647.96 | 2.07909 | 6.3989ms | 51512 | 30 | 1.15237e+07 | 29810 | 1(Win) |
| jeaiii::to_text | 918.294 | 1.82429 | 9.505ms | 51512 | 30 | 2.85734e+07 | 53496.7 | 2(Loss) |
| fmt::format_to | 764.562 | 0.89039 | 11.7681ms | 51512 | 30 | 9.81913e+06 | 64253.3 | 3(Loss) |
| std::to_chars | 561.543 | 0.801054 | 16.2183ms | 51512 | 30 | 1.47332e+07 | 87483.3 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 871.135 | 0.741704 | 100.847ms | 516258 | 30 | 5.27165e+08 | 565173 | 1(Win) |
| jeaiii::to_text | 817.219 | 0.47047 | 109.855ms | 516258 | 30 | 2.41014e+08 | 602460 | 2(Loss) |
| fmt::format_to | 656.856 | 0.325677 | 134.823ms | 516258 | 30 | 1.78767e+08 | 749543 | 3(Loss) |
| std::to_chars | 498.985 | 0.264458 | 178.644ms | 516258 | 30 | 2.04265e+08 | 986687 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1937.75 | 2.21257 | 0.2686ms | 563 | 48 | 1804.08 | 277.083 | 1(Win) |
| std::to_chars | 941.963 | 1.49292 | 0.1274ms | 563 | 30 | 2172.41 | 570 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4167.24 | 0.257069 | 0.2581ms | 5666 | 30 | 333.333 | 1296.67 | 1(Win) |
| jeaiii::to_text | 3203.67 | 0.374255 | 0.3341ms | 5666 | 30 | 1195.4 | 1686.67 | 2(Loss) |
| fmt::format_to | 2097.1 | 0.304814 | 0.5353ms | 5666 | 30 | 1850.57 | 2576.67 | 3(Loss) |
| std::to_chars | 931.641 | 0.20249 | 1.1121ms | 5666 | 30 | 4137.93 | 5800 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2282.41 | 1.84377 | 4.4469ms | 56633 | 30 | 5.71068e+06 | 23663.3 | 1(Win) |
| jeaiii::to_text | 1707.72 | 1.89543 | 5.7318ms | 56633 | 30 | 1.07806e+07 | 31626.7 | 2(Loss) |
| fmt::format_to | 1239.32 | 1.35276 | 7.6235ms | 56633 | 30 | 1.04265e+07 | 43580 | 3(Loss) |
| std::to_chars | 703.034 | 1.37687 | 13.6463ms | 56633 | 30 | 3.35653e+07 | 76823.3 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1593.84 | 0.901534 | 61.1236ms | 566161 | 30 | 2.7982e+08 | 338763 | 1(Win) |
| jeaiii::to_text | 1413.15 | 0.635597 | 68.7166ms | 566161 | 30 | 1.76924e+08 | 382077 | 2(Loss) |
| fmt::format_to | 1120.37 | 0.539201 | 86.6002ms | 566161 | 30 | 2.02572e+08 | 481923 | 3(Loss) |
| std::to_chars | 679.532 | 0.335515 | 141.756ms | 566161 | 30 | 2.13209e+08 | 794567 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2293.75 | 2.39589 | 0.0471ms | 465 | 30 | 643.678 | 193.333 | 1(Win) |
| std::to_chars | 787.205 | 1.5885 | 0.1214ms | 465 | 30 | 2402.3 | 563.333 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3395.02 | 0.340032 | 1.2683ms | 4665 | 48 | 953.014 | 1310.42 | 1(Win) |
| jeaiii::to_text | 1887.79 | 0.390461 | 0.4528ms | 4665 | 30 | 2540.23 | 2356.67 | 2(Loss) |
| fmt::format_to | 1427.45 | 0.222047 | 0.5916ms | 4665 | 30 | 1436.78 | 3116.67 | 3(Loss) |
| std::to_chars | 756.614 | 0.126323 | 1.149ms | 4665 | 30 | 1655.17 | 5880 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2119.77 | 1.94441 | 8.9503ms | 46596 | 30 | 4.98447e+06 | 20963.3 | 1(Win) |
| jeaiii::to_text | 1343.2 | 1.05628 | 14.0993ms | 46596 | 30 | 3.66351e+06 | 33083.3 | 2(Loss) |
| fmt::format_to | 985.236 | 2.20608 | 8.1118ms | 46596 | 30 | 2.97017e+07 | 45103.3 | 3(Loss) |
| std::to_chars | 584.857 | 1.89588 | 13.6795ms | 46596 | 30 | 6.22506e+07 | 75980 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1383.67 | 0.757935 | 57.8197ms | 466134 | 30 | 1.77887e+08 | 321277 | 1(Win) |
| jeaiii::to_text | 1166.77 | 0.819055 | 68.5041ms | 466134 | 30 | 2.92144e+08 | 381000 | 2(Loss) |
| fmt::format_to | 887.128 | 0.577919 | 91.0303ms | 466134 | 30 | 2.51597e+08 | 501100 | 3(Loss) |
| std::to_chars | 567.517 | 0.388654 | 140.886ms | 466134 | 30 | 2.78042e+08 | 783307 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2367.74 | 2.39589 | 0.0963ms | 480 | 30 | 643.678 | 193.333 | 1(Win) |
| std::to_chars | 734.38 | 1.26001 | 0.1436ms | 480 | 30 | 1850.57 | 623.333 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3646.11 | 0.708329 | 0.2604ms | 4830 | 30 | 2402.3 | 1263.33 | 1(Win) |
| jeaiii::to_text | 3274.58 | 0.583774 | 0.2845ms | 4830 | 30 | 2022.99 | 1406.67 | 2(Loss) |
| fmt::format_to | 2026.21 | 0.361221 | 0.4724ms | 4830 | 30 | 2022.99 | 2273.33 | 3(Loss) |
| std::to_chars | 763.466 | 0.14509 | 2.6844ms | 4830 | 30 | 2298.85 | 6033.33 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2915.6 | 0.215963 | 3.0305ms | 48345 | 30 | 34988.5 | 15813.3 | 1(Win) |
| jeaiii::to_text | 2342.36 | 2.01651 | 3.6437ms | 48345 | 30 | 4.72626e+06 | 19683.3 | 2(Loss) |
| fmt::format_to | 1506.55 | 1.52828 | 5.4939ms | 48345 | 30 | 6.5624e+06 | 30603.3 | 3(Loss) |
| std::to_chars | 691.166 | 0.907179 | 12.1123ms | 48345 | 30 | 1.09862e+07 | 66706.7 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2364.03 | 0.613696 | 35.1027ms | 483255 | 30 | 4.29412e+07 | 194950 | 1(Win) |
| jeaiii::to_text | 1914.8 | 0.487839 | 43.524ms | 483255 | 30 | 4.13598e+07 | 240687 | 2(Loss) |
| fmt::format_to | 1400.13 | 0.669021 | 59.2124ms | 483255 | 30 | 1.45484e+08 | 329160 | 3(Loss) |
| std::to_chars | 650.297 | 0.400423 | 128.425ms | 483255 | 30 | 2.41596e+08 | 708703 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4718.34 | 1.63934 | 0.1038ms | 1006 | 30 | 333.333 | 203.333 | 1(Win) |
| fmt::format_to | 2640.54 | 2.4629 | 0.0778ms | 1006 | 30 | 2402.3 | 363.333 | 2(Loss) |
| std::to_chars | 1256.85 | 1.1723 | 0.1638ms | 1006 | 30 | 2402.3 | 763.333 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5036.2 | 0.307882 | 0.3776ms | 10016 | 30 | 1022.99 | 1896.67 | 1(Win) |
| jeaiii::to_text | 4019.08 | 1.67191 | 1.0519ms | 10016 | 30 | 47367.8 | 2376.67 | 2(Loss) |
| fmt::format_to | 2209.41 | 2.15526 | 0.8419ms | 10016 | 30 | 260471 | 4323.33 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1899.71 | 1.14495 | 9.3017ms | 99772 | 30 | 9.86602e+06 | 50086.7 | 1(Win) |
| jeaiii::to_text | 1460.48 | 1.40017 | 11.8694ms | 99772 | 30 | 2.4964e+07 | 65150 | 2(Loss) |
| fmt::format_to | 1190.02 | 0.717976 | 15.0275ms | 99772 | 30 | 9.88668e+06 | 79956.7 | 3(Loss) |
| std::to_chars | 683.975 | 0.873796 | 25.1514ms | 99772 | 30 | 4.43281e+07 | 139113 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1340.95 | 0.366092 | 128.775ms | 998585 | 30 | 2.0279e+08 | 710187 | 1(Win) |
| jeaiii::to_text | 1312.27 | 0.324029 | 130.555ms | 998585 | 30 | 1.65888e+08 | 725710 | 2(Loss) |
| fmt::format_to | 979.358 | 0.263932 | 176.946ms | 998585 | 30 | 1.97602e+08 | 972397 | 3(Loss) |
| std::to_chars | 664.408 | 0.20232 | 258.572ms | 998585 | 30 | 2.52291e+08 | 1.43334e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5081.95 | 1.69492 | 0.0516ms | 1048 | 30 | 333.333 | 196.667 | 1(Win) |
| fmt::format_to | 2789.16 | 2.00686 | 0.3519ms | 1048 | 48 | 2482.27 | 358.333 | 2(Loss) |
| std::to_chars | 1303.63 | 1.1418 | 0.1715ms | 1048 | 30 | 2298.85 | 766.667 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4698.71 | 0.386133 | 0.4139ms | 10478 | 30 | 2022.99 | 2126.67 | 1(Win) |
| jeaiii::to_text | 4325.8 | 0.241163 | 0.4399ms | 10478 | 30 | 931.034 | 2310 | 2(Loss) |
| fmt::format_to | 2793.83 | 0.219591 | 0.6911ms | 10478 | 30 | 1850.57 | 3576.67 | 3(Loss) |
| std::to_chars | 1030.52 | 1.07252 | 1.8325ms | 10478 | 30 | 324471 | 9696.67 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2386.45 | 2.30894 | 7.6415ms | 104866 | 30 | 2.80875e+07 | 41906.7 | 1(Win) |
| jeaiii::to_text | 2224.21 | 1.10115 | 8.2743ms | 104866 | 30 | 7.35413e+06 | 44963.3 | 2(Loss) |
| fmt::format_to | 1445.9 | 1.58074 | 12.2784ms | 104866 | 30 | 3.58623e+07 | 69166.7 | 3(Loss) |
| std::to_chars | 816.814 | 0.904204 | 22.1086ms | 104866 | 30 | 3.67686e+07 | 122437 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1996.75 | 0.644788 | 89.7304ms | 1048423 | 30 | 3.12738e+08 | 500740 | 1(Win) |
| jeaiii::to_text | 1936.68 | 0.525784 | 94.6016ms | 1048423 | 30 | 2.21052e+08 | 516273 | 2(Loss) |
| fmt::format_to | 1325.86 | 0.371614 | 136.443ms | 1048423 | 30 | 2.35606e+08 | 754120 | 3(Loss) |
| std::to_chars | 791.326 | 0.266055 | 226.31ms | 1048423 | 30 | 3.3902e+08 | 1.26352e+06 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4567.94 | 1.69492 | 0.0517ms | 942 | 30 | 333.333 | 196.667 | 1(Win) |
| fmt::format_to | 2521.72 | 2.03117 | 0.3657ms | 942 | 48 | 2513.3 | 356.25 | 2(Loss) |
| std::to_chars | 1137.17 | 0.705172 | 0.4164ms | 942 | 30 | 931.034 | 790 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4794.49 | 0.420152 | 0.3952ms | 9485 | 30 | 1885.06 | 1886.67 | 1(Win) |
| fmt::format_to | 2023.62 | 1.24235 | 0.8099ms | 9485 | 30 | 92517.2 | 4470 | 2(Loss) |
| std::to_chars | 918.024 | 0.895573 | 1.8228ms | 9485 | 30 | 233609 | 9853.33 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2326.5 | 1.16962 | 7.0971ms | 94905 | 30 | 6.21137e+06 | 38903.3 | 1(Win) |
| jeaiii::to_text | 1982.52 | 1.37125 | 19.6021ms | 94905 | 30 | 1.17571e+07 | 45653.3 | 2(Loss) |
| fmt::format_to | 1306.16 | 0.850259 | 12.5782ms | 94905 | 30 | 1.04137e+07 | 69293.3 | 3(Loss) |
| std::to_chars | 750.091 | 0.883298 | 21.5789ms | 94905 | 30 | 3.4079e+07 | 120663 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1853.34 | 0.624299 | 88.3647ms | 948488 | 30 | 2.78522e+08 | 488063 | 1(Win) |
| jeaiii::to_text | 1766.66 | 0.474444 | 91.9685ms | 948488 | 30 | 1.77031e+08 | 512010 | 2(Loss) |
| fmt::format_to | 1225.51 | 0.345302 | 132.909ms | 948488 | 30 | 1.94872e+08 | 738100 | 3(Loss) |
| std::to_chars | 733.701 | 0.303059 | 221.156ms | 948488 | 30 | 4.18796e+08 | 1.23286e+06 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2830.6 | 2.01418 | 0.3784ms | 977 | 48 | 2109.93 | 329.167 | 1(Win) |
| std::to_chars | 1150.3 | 0.687761 | 0.1659ms | 977 | 30 | 931.034 | 810 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5653.43 | 0.554706 | 0.7589ms | 9722 | 30 | 2482.76 | 1640 | 1(Win) |
| jeaiii::to_text | 4227.18 | 0.211188 | 0.4236ms | 9722 | 30 | 643.678 | 2193.33 | 2(Loss) |
| fmt::format_to | 2949.61 | 0.292742 | 0.6004ms | 9722 | 30 | 2540.23 | 3143.33 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4074.95 | 1.92011 | 4.3155ms | 97422 | 30 | 5.74966e+06 | 22800 | 1(Win) |
| jeaiii::to_text | 3177.46 | 1.3795 | 5.4068ms | 97422 | 30 | 4.8811e+06 | 29240 | 2(Loss) |
| fmt::format_to | 1942.75 | 0.742085 | 8.7955ms | 97422 | 30 | 3.7784e+06 | 47823.3 | 3(Loss) |
| std::to_chars | 993.571 | 1.09316 | 17.1068ms | 97422 | 30 | 3.13478e+07 | 93510 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2902.29 | 1.32179 | 56.7042ms | 974000 | 30 | 5.36882e+08 | 320050 | 1(Win) |
| jeaiii::to_text | 2742.29 | 0.790966 | 61.1122ms | 974000 | 30 | 2.15341e+08 | 338723 | 2(Loss) |
| fmt::format_to | 1743.93 | 0.532257 | 95.6232ms | 974000 | 30 | 2.41116e+08 | 532637 | 3(Loss) |
| std::to_chars | 953.589 | 0.259431 | 175.232ms | 974000 | 30 | 1.91584e+08 | 974087 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5974.31 | 1.79705 | 0.0732ms | 1942 | 30 | 931.034 | 310 | 1(Win) |
| jeaiii::to_text | 3728.93 | 0.671141 | 0.2482ms | 1942 | 30 | 333.333 | 496.667 | 2(Loss) |
| fmt::format_to | 2088.76 | 0.711928 | 0.2231ms | 1942 | 30 | 1195.4 | 886.667 | 3(Loss) |
| std::to_chars | 1310.4 | 0.446634 | 0.6515ms | 1942 | 30 | 1195.4 | 1413.33 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5432.3 | 0.141019 | 1.4961ms | 19367 | 30 | 689.655 | 3400 | 1(Win) |
| fmt::format_to | 2121.95 | 0.0588358 | 8.1397ms | 19367 | 48 | 1258.87 | 8704.17 | 2(Loss) |
| std::to_chars | 1198.04 | 2.03774 | 2.7813ms | 19367 | 30 | 2.96075e+06 | 15416.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3467.05 | 0.939 | 9.8266ms | 193722 | 30 | 7.51085e+06 | 53286.7 | 1(Win) |
| jeaiii::to_text | 2285.44 | 0.912383 | 15.0511ms | 193722 | 30 | 1.6319e+07 | 80836.7 | 2(Loss) |
| fmt::format_to | 1556.47 | 1.87279 | 21.319ms | 193722 | 30 | 1.48243e+08 | 118697 | 3(Loss) |
| std::to_chars | 1106.96 | 1.04143 | 29.9411ms | 193722 | 30 | 9.06314e+07 | 166897 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2649.01 | 0.516276 | 125.424ms | 1937993 | 30 | 3.89244e+08 | 697700 | 1(Win) |
| jeaiii::to_text | 2008.69 | 0.271609 | 166.176ms | 1937993 | 30 | 1.87366e+08 | 920110 | 2(Loss) |
| fmt::format_to | 1516.94 | 0.249482 | 218.217ms | 1937993 | 30 | 2.77185e+08 | 1.21839e+06 | 3(Loss) |
| std::to_chars | 1076.48 | 0.281926 | 312.378ms | 1937993 | 30 | 7.02883e+08 | 1.7169e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5915.76 | 2.32119 | 0.1639ms | 1985 | 30 | 1655.17 | 320 | 1(Win) |
| jeaiii::to_text | 3462.88 | 1.69465 | 0.1104ms | 1985 | 30 | 2574.71 | 546.667 | 2(Loss) |
| fmt::format_to | 2006.76 | 0.975463 | 0.1965ms | 1985 | 30 | 2540.23 | 943.333 | 3(Loss) |
| std::to_chars | 1264.84 | 0.222717 | 0.2831ms | 1985 | 30 | 333.333 | 1496.67 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5402.49 | 0.234176 | 1.5116ms | 19865 | 30 | 2022.99 | 3506.67 | 1(Win) |
| jeaiii::to_text | 3467.62 | 0.163793 | 1.0396ms | 19865 | 30 | 2402.3 | 5463.33 | 2(Loss) |
| fmt::format_to | 1994.88 | 0.0614899 | 1.7824ms | 19865 | 30 | 1022.99 | 9496.67 | 3(Loss) |
| std::to_chars | 1257.39 | 0.0581002 | 2.8549ms | 19865 | 30 | 2298.85 | 15066.7 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5365.11 | 1.29363 | 6.4576ms | 198813 | 30 | 6.27007e+06 | 35340 | 1(Win) |
| jeaiii::to_text | 3330.46 | 0.89753 | 10.4663ms | 198813 | 30 | 7.83252e+06 | 56930 | 2(Loss) |
| fmt::format_to | 1895.59 | 1.37574 | 18.0514ms | 198813 | 30 | 5.6806e+07 | 100023 | 3(Loss) |
| std::to_chars | 1243.35 | 1.00386 | 27.7256ms | 198813 | 30 | 7.03027e+07 | 152493 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4921.54 | 0.917178 | 68.7498ms | 1988073 | 30 | 3.74534e+08 | 385240 | 1(Win) |
| jeaiii::to_text | 3133.27 | 0.69381 | 107.679ms | 1988073 | 30 | 5.28775e+08 | 605110 | 2(Loss) |
| fmt::format_to | 1863.23 | 0.320071 | 184.134ms | 1988073 | 30 | 3.18233e+08 | 1.01757e+06 | 3(Loss) |
| std::to_chars | 1241.36 | 0.399285 | 272.749ms | 1988073 | 30 | 1.11572e+09 | 1.52733e+06 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5568.67 | 2.42908 | 0.2061ms | 1888 | 30 | 1850.57 | 323.333 | 1(Win) |
| jeaiii::to_text | 3293.67 | 1.69465 | 0.1198ms | 1888 | 30 | 2574.71 | 546.667 | 2(Loss) |
| fmt::format_to | 1869.07 | 0.928916 | 0.4686ms | 1888 | 30 | 2402.3 | 963.333 | 3(Loss) |
| std::to_chars | 1241.75 | 0.640329 | 0.2884ms | 1888 | 30 | 2586.21 | 1450 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5150.39 | 0.255917 | 0.6796ms | 18884 | 30 | 2402.3 | 3496.67 | 1(Win) |
| jeaiii::to_text | 3412.99 | 0.763931 | 1.0067ms | 18884 | 30 | 48747.1 | 5276.67 | 2(Loss) |
| fmt::format_to | 1889.74 | 0.648504 | 4.1303ms | 18884 | 30 | 114586 | 9530 | 3(Loss) |
| std::to_chars | 1192.4 | 2.02289 | 6.4795ms | 18884 | 30 | 2.80033e+06 | 15103.3 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5082.84 | 1.31456 | 15.0978ms | 188833 | 30 | 6.50769e+06 | 35430 | 1(Win) |
| jeaiii::to_text | 3152.57 | 1.82534 | 10.3988ms | 188833 | 30 | 3.26163e+07 | 57123.3 | 2(Loss) |
| fmt::format_to | 1819.53 | 1.02172 | 17.7217ms | 188833 | 30 | 3.06779e+07 | 98973.3 | 3(Loss) |
| std::to_chars | 1201.88 | 1.06581 | 27.122ms | 188833 | 30 | 7.651e+07 | 149837 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4824.78 | 0.709157 | 67.3632ms | 1888093 | 30 | 2.10134e+08 | 373203 | 1(Win) |
| jeaiii::to_text | 3056.62 | 0.45536 | 106.052ms | 1888093 | 30 | 2.15871e+08 | 589090 | 2(Loss) |
| fmt::format_to | 1789.66 | 0.310946 | 180.136ms | 1888093 | 30 | 2.93629e+08 | 1.00613e+06 | 3(Loss) |
| std::to_chars | 1173.11 | 0.430145 | 273.582ms | 1888093 | 30 | 1.30773e+09 | 1.53491e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4300.41 | 1.97898 | 0.1041ms | 1939 | 30 | 2172.41 | 430 | 1(Win) |
| fmt::format_to | 2077.72 | 0.625939 | 0.3982ms | 1939 | 30 | 931.034 | 890 | 2(Loss) |
| std::to_chars | 1125.26 | 0.559951 | 0.3215ms | 1939 | 30 | 2540.23 | 1643.33 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6648.62 | 0.267188 | 0.5448ms | 19381 | 30 | 1655.17 | 2780 | 1(Win) |
| jeaiii::to_text | 4464.53 | 0.219739 | 0.8035ms | 19381 | 30 | 2482.76 | 4140 | 2(Loss) |
| fmt::format_to | 1960.04 | 0.09024 | 1.8104ms | 19381 | 30 | 2172.41 | 9430 | 3(Loss) |
| std::to_chars | 931.768 | 1.31023 | 3.6246ms | 19381 | 30 | 2.02654e+06 | 19836.7 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3882.83 | 1.0013 | 20.5332ms | 193977 | 30 | 6.82737e+06 | 47643.3 | 1(Win) |
| jeaiii::to_text | 2997.26 | 0.80155 | 11.259ms | 193977 | 30 | 7.34234e+06 | 61720 | 2(Loss) |
| fmt::format_to | 1268.54 | 0.862978 | 26.5204ms | 193977 | 30 | 4.75132e+07 | 145830 | 3(Loss) |
| std::to_chars | 898.465 | 0.743953 | 37.0915ms | 193977 | 30 | 7.039e+07 | 205897 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3366.52 | 0.495385 | 99.0473ms | 1939366 | 30 | 2.2221e+08 | 549387 | 1(Win) |
| jeaiii::to_text | 2655.03 | 0.355667 | 126.332ms | 1939366 | 30 | 1.84157e+08 | 696610 | 2(Loss) |
| fmt::format_to | 1215.35 | 0.239195 | 274.944ms | 1939366 | 30 | 3.97505e+08 | 1.5218e+06 | 3(Loss) |
| std::to_chars | 886.823 | 0.200224 | 375.618ms | 1939366 | 30 | 5.23119e+08 | 2.08556e+06 | 4(Loss) |
