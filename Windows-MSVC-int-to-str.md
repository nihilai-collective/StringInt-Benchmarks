# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36247.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 939.089 | 2.44251 | 0.0682ms | 279 | 30 | 1436.78 | 283.333 | 1(Win) |
| jeaiii::to_text | 803.246 | 2.04106 | 0.3545ms | 279 | 48 | 2194.15 | 331.25 | 2(Loss) |
| fmt::format_to | 505.206 | 1.55919 | 0.1111ms | 279 | 30 | 2022.99 | 526.667 | 3(Loss) |
| std::to_chars | 323.168 | 0.953931 | 0.1922ms | 279 | 30 | 1850.57 | 823.333 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1065.21 | 1.00765 | 0.4554ms | 2636 | 30 | 16965.5 | 2360 | 1(Win) |
| jeaiii::to_text | 700.897 | 0.175997 | 0.6682ms | 2636 | 30 | 1195.4 | 3586.67 | 2(Loss) |
| fmt::format_to | 527.389 | 0.183645 | 0.8855ms | 2636 | 30 | 2298.85 | 4766.67 | 3(Loss) |
| std::to_chars | 293.793 | 2.35921 | 3.6177ms | 2636 | 30 | 1.22254e+06 | 8556.67 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1055.2 | 0.037657 | 4.5703ms | 26293 | 30 | 2402.3 | 23763.3 | 1(Win) |
| jeaiii::to_text | 696.656 | 0.0728804 | 6.7617ms | 26293 | 30 | 20643.7 | 35993.3 | 2(Loss) |
| fmt::format_to | 522.649 | 0.0191799 | 9.1414ms | 26293 | 30 | 2540.23 | 47976.7 | 3(Loss) |
| std::to_chars | 231.483 | 0.786296 | 19.9462ms | 26293 | 30 | 2.17639e+07 | 108323 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 311.66 | 0.378638 | 145.851ms | 265262 | 30 | 2.83373e+08 | 811697 | 1(Win) |
| jeaiii::to_text | 286.474 | 0.305713 | 159.056ms | 265262 | 30 | 2.1864e+08 | 883060 | 2(Loss) |
| fmt::format_to | 241.862 | 0.208676 | 188.604ms | 265262 | 30 | 1.42917e+08 | 1.04594e+06 | 3(Loss) |
| std::to_chars | 177.969 | 0.262115 | 255.34ms | 265262 | 30 | 4.16453e+08 | 1.42145e+06 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 915.527 | 1.98179 | 0.3349ms | 314 | 48 | 2016.84 | 327.083 | 1(Win) |
| fmt::format_to | 554.544 | 1.68466 | 0.1143ms | 314 | 30 | 2482.76 | 540 | 2(Loss) |
| std::to_chars | 249.545 | 0.399553 | 0.2638ms | 314 | 30 | 689.655 | 1200 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1245.57 | 0.383872 | 0.5007ms | 3152 | 30 | 2574.71 | 2413.33 | 1(Win) |
| jeaiii::to_text | 940.349 | 0.104275 | 0.6326ms | 3152 | 30 | 333.333 | 3196.67 | 2(Loss) |
| fmt::format_to | 586.342 | 0.160177 | 0.992ms | 3152 | 30 | 2022.99 | 5126.67 | 3(Loss) |
| std::to_chars | 409.907 | 0.119369 | 1.3949ms | 3152 | 30 | 2298.85 | 7333.33 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1124.78 | 2.0653 | 4.8455ms | 31518 | 30 | 9.1384e+06 | 26723.3 | 1(Win) |
| jeaiii::to_text | 846.861 | 1.87904 | 6.4006ms | 31518 | 30 | 1.33441e+07 | 35493.3 | 2(Loss) |
| fmt::format_to | 539.252 | 1.36106 | 10.1462ms | 31518 | 30 | 1.72666e+07 | 55740 | 3(Loss) |
| std::to_chars | 326.444 | 0.608168 | 16.7644ms | 31518 | 30 | 9.40737e+06 | 92076.7 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 600.64 | 0.416984 | 90.0432ms | 314516 | 30 | 1.30082e+08 | 499377 | 1(Win) |
| jeaiii::to_text | 540.284 | 0.400783 | 100.254ms | 314516 | 30 | 1.48519e+08 | 555163 | 2(Loss) |
| fmt::format_to | 406.826 | 0.279913 | 133.03ms | 314516 | 30 | 1.27772e+08 | 737283 | 3(Loss) |
| std::to_chars | 301.979 | 0.2438 | 179.389ms | 314516 | 30 | 1.75922e+08 | 993267 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 599.254 | 2.10503 | 0.3857ms | 216 | 48 | 2513.3 | 343.75 | 1(Win) |
| fmt::format_to | 409.259 | 0.662252 | 0.1091ms | 216 | 30 | 333.333 | 503.333 | 2(Loss) |
| std::to_chars | 273.443 | 1.22975 | 0.1807ms | 216 | 30 | 2574.71 | 753.333 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 881.738 | 0.320164 | 0.4462ms | 2145 | 30 | 1655.17 | 2320 | 1(Win) |
| jeaiii::to_text | 658.465 | 0.149101 | 0.5857ms | 2145 | 30 | 643.678 | 3106.67 | 2(Loss) |
| fmt::format_to | 436.79 | 0.147768 | 2.03ms | 2145 | 30 | 1436.78 | 4683.33 | 3(Loss) |
| std::to_chars | 259.488 | 0.0877859 | 1.4772ms | 2145 | 30 | 1436.78 | 7883.33 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 834.284 | 0.350492 | 4.5796ms | 21532 | 30 | 223264 | 24613.3 | 1(Win) |
| jeaiii::to_text | 613.581 | 0.0298232 | 6.237ms | 21532 | 30 | 2988.51 | 33466.7 | 2(Loss) |
| fmt::format_to | 391.084 | 1.24737 | 9.5777ms | 21532 | 30 | 1.28689e+07 | 52506.7 | 3(Loss) |
| std::to_chars | 223.363 | 0.944024 | 16.597ms | 21532 | 30 | 2.25961e+07 | 91933.3 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 414.399 | 0.438107 | 89.091ms | 215044 | 30 | 1.41026e+08 | 494890 | 1(Win) |
| jeaiii::to_text | 376.138 | 0.444969 | 98.1642ms | 215044 | 30 | 1.76579e+08 | 545230 | 2(Loss) |
| fmt::format_to | 295.015 | 0.358259 | 126.34ms | 215044 | 30 | 1.86072e+08 | 695157 | 3(Loss) |
| std::to_chars | 210.276 | 0.287998 | 175.636ms | 215044 | 30 | 2.36688e+08 | 975300 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 908.485 | 2.448 | 0.2994ms | 258 | 48 | 2109.93 | 270.833 | 1(Win) |
| fmt::format_to | 519.82 | 1.73488 | 0.1042ms | 258 | 30 | 2022.99 | 473.333 | 2(Loss) |
| std::to_chars | 338.598 | 1.13006 | 0.1709ms | 258 | 30 | 2022.99 | 726.667 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1300.28 | 0.175747 | 0.3623ms | 2586 | 30 | 333.333 | 1896.67 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 529.607 | 0.640386 | 0.8776ms | 2586 | 30 | 26678.2 | 4656.67 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 521.763 | 0.391993 | 0.9101ms | 2586 | 30 | 10298.9 | 4726.67 | 2(Tie) |
| std::to_chars | 341.737 | 0.0958955 | 3.1163ms | 2586 | 30 | 1436.78 | 7216.67 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1244.43 | 0.143453 | 8.2572ms | 25654 | 30 | 23862.1 | 19660 | 1(Win) |
| jeaiii::to_text | 881.748 | 0.0539107 | 5.1993ms | 25654 | 30 | 6712.64 | 27746.7 | 2(Loss) |
| fmt::format_to | 490.226 | 0.867841 | 9.4041ms | 25654 | 30 | 5.62754e+06 | 49906.7 | 3(Loss) |
| std::to_chars | 283.659 | 1.50517 | 15.6917ms | 25654 | 30 | 5.05605e+07 | 86250 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 447.91 | 0.402333 | 99.0917ms | 256897 | 30 | 1.45288e+08 | 546977 | 1(Win) |
| jeaiii::to_text | 418.368 | 0.484895 | 105.144ms | 256897 | 30 | 2.4189e+08 | 585600 | 2(Loss) |
| fmt::format_to | 306.12 | 0.454364 | 144.006ms | 256897 | 30 | 3.96701e+08 | 800327 | 3(Loss) |
| std::to_chars | 225.702 | 0.277876 | 195.247ms | 256897 | 30 | 2.72944e+08 | 1.08549e+06 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1494.98 | 2.01418 | 0.3481ms | 516 | 48 | 2109.93 | 329.167 | 1(Win) |
| jeaiii::to_text | 1240.58 | 0.840336 | 0.097ms | 516 | 30 | 333.333 | 396.667 | 2(Loss) |
| fmt::format_to | 741.853 | 1.34903 | 0.3265ms | 516 | 30 | 2402.3 | 663.333 | 3(Loss) |
| std::to_chars | 554.995 | 0.711928 | 0.2014ms | 516 | 30 | 1195.4 | 886.667 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1656.63 | 0.27618 | 0.6064ms | 5165 | 30 | 2022.99 | 2973.33 | 1(Win) |
| jeaiii::to_text | 1161.73 | 0.214556 | 0.8171ms | 5165 | 30 | 2482.76 | 4240 | 2(Loss) |
| fmt::format_to | 800.931 | 1.32477 | 1.1616ms | 5165 | 30 | 199138 | 6150 | 3(Loss) |
| std::to_chars | 571.872 | 0.0732867 | 1.6375ms | 5165 | 30 | 1195.4 | 8613.33 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1660.01 | 0.101606 | 5.9218ms | 51558 | 30 | 27172.4 | 29620 | 1(Win) |
| jeaiii::to_text | 1037.99 | 2.37984 | 9.193ms | 51558 | 30 | 3.81263e+07 | 47370 | 2(Loss) |
| fmt::format_to | 553.773 | 0.947312 | 17.0161ms | 51558 | 30 | 2.12244e+07 | 88790 | 3(Loss) |
| std::to_chars | 382.752 | 0.507928 | 23.8614ms | 51558 | 30 | 1.27727e+07 | 128463 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 557.165 | 0.286066 | 159.349ms | 516163 | 30 | 1.91628e+08 | 883493 | 1(Win) |
| jeaiii::to_text | 489.045 | 0.317412 | 181.173ms | 516163 | 30 | 3.06228e+08 | 1.00656e+06 | 2(Loss) |
| fmt::format_to | 395.723 | 0.216159 | 224.232ms | 516163 | 30 | 2.16899e+08 | 1.24393e+06 | 3(Loss) |
| std::to_chars | 321.373 | 0.958164 | 275.207ms | 516163 | 30 | 6.46184e+09 | 1.53171e+06 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1623.77 | 2.04106 | 0.3622ms | 564 | 48 | 2194.15 | 331.25 | 1(Win) |
| jeaiii::to_text | 1391.05 | 1.63252 | 0.1919ms | 564 | 30 | 1195.4 | 386.667 | 2(Loss) |
| fmt::format_to | 819.095 | 1.4013 | 0.1368ms | 564 | 30 | 2540.23 | 656.667 | 3(Loss) |
| std::to_chars | 602.096 | 0.518514 | 0.195ms | 564 | 30 | 643.678 | 893.333 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1804.87 | 0.222717 | 0.6032ms | 5665 | 30 | 1333.33 | 2993.33 | 1(Win) |
| jeaiii::to_text | 1476.11 | 0.248557 | 0.7517ms | 5665 | 30 | 2482.76 | 3660 | 2(Loss) |
| fmt::format_to | 892.986 | 0.153467 | 1.1723ms | 5665 | 30 | 2586.21 | 6050 | 3(Loss) |
| std::to_chars | 621.938 | 0.072668 | 1.648ms | 5665 | 30 | 1195.4 | 8686.67 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1416.56 | 1.61192 | 7.0563ms | 56548 | 30 | 1.12973e+07 | 38070 | 1(Win) |
| jeaiii::to_text | 1150.02 | 1.82287 | 8.4696ms | 56548 | 30 | 2.19206e+07 | 46893.3 | 2(Loss) |
| fmt::format_to | 670.751 | 0.730665 | 14.5131ms | 56548 | 30 | 1.03531e+07 | 80400 | 3(Loss) |
| std::to_chars | 517.001 | 1.20885 | 18.9859ms | 56548 | 30 | 4.77002e+07 | 104310 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 946.469 | 0.433138 | 102.677ms | 566041 | 30 | 1.83087e+08 | 570350 | 1(Win) |
| jeaiii::to_text | 811.42 | 0.310596 | 119.933ms | 566041 | 30 | 1.28091e+08 | 665277 | 2(Loss) |
| fmt::format_to | 575.995 | 0.226804 | 169.007ms | 566041 | 30 | 1.35545e+08 | 937193 | 3(Loss) |
| std::to_chars | 468.882 | 0.331666 | 207.333ms | 566041 | 30 | 4.37415e+08 | 1.15129e+06 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1338.3 | 1.98179 | 0.3422ms | 459 | 48 | 2016.84 | 327.083 | 1(Win) |
| jeaiii::to_text | 1132.08 | 1.63252 | 0.0881ms | 459 | 30 | 1195.4 | 386.667 | 2(Loss) |
| fmt::format_to | 666.604 | 1.4013 | 0.1357ms | 459 | 30 | 2540.23 | 656.667 | 3(Loss) |
| std::to_chars | 495.551 | 0.783448 | 0.2165ms | 459 | 30 | 1436.78 | 883.333 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1481.87 | 0.271314 | 0.6155ms | 4703 | 30 | 2022.99 | 3026.67 | 1(Win) |
| jeaiii::to_text | 1166.99 | 0.239424 | 0.7171ms | 4703 | 30 | 2540.23 | 3843.33 | 2(Loss) |
| fmt::format_to | 686.85 | 2.08214 | 1.1905ms | 4703 | 30 | 554586 | 6530 | 3(Loss) |
| std::to_chars | 522.742 | 0.308109 | 1.5886ms | 4703 | 30 | 20965.5 | 8580 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1126.32 | 0.0280796 | 7.4246ms | 46572 | 30 | 3678.16 | 39433.3 | 1(Win) |
| jeaiii::to_text | 872.927 | 1.60432 | 9.3508ms | 46572 | 30 | 1.99892e+07 | 50880 | 2(Loss) |
| fmt::format_to | 559.847 | 0.825315 | 14.5301ms | 46572 | 30 | 1.28609e+07 | 79333.3 | 3(Loss) |
| std::to_chars | 455.471 | 0.613997 | 17.8283ms | 46572 | 30 | 1.07543e+07 | 97513.3 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 759.304 | 0.439137 | 105.652ms | 466327 | 30 | 1.98459e+08 | 585700 | 1(Win) |
| jeaiii::to_text | 676.26 | 0.307745 | 118.468ms | 466327 | 30 | 1.22874e+08 | 657623 | 2(Loss) |
| fmt::format_to | 476.237 | 0.363732 | 167.793ms | 466327 | 30 | 3.46115e+08 | 933830 | 3(Loss) |
| std::to_chars | 413.319 | 0.216766 | 193.733ms | 466327 | 30 | 1.63198e+08 | 1.07598e+06 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1589.82 | 1.57911 | 0.072ms | 489 | 30 | 643.678 | 293.333 | 1(Win) |
| jeaiii::to_text | 1356.65 | 2.10503 | 0.3562ms | 489 | 48 | 2513.3 | 343.75 | 2(Loss) |
| fmt::format_to | 813.395 | 1.43228 | 0.1216ms | 489 | 30 | 2022.99 | 573.333 | 3(Loss) |
| std::to_chars | 503.252 | 0.886161 | 0.2089ms | 489 | 30 | 2022.99 | 926.667 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1844.19 | 0.133511 | 0.4967ms | 4828 | 30 | 333.333 | 2496.67 | 1(Win) |
| jeaiii::to_text | 1517.91 | 0.288586 | 0.5719ms | 4828 | 30 | 2298.85 | 3033.33 | 2(Loss) |
| fmt::format_to | 815.408 | 0.164063 | 1.0424ms | 4828 | 30 | 2574.71 | 5646.67 | 3(Loss) |
| std::to_chars | 527.013 | 0.102425 | 1.6546ms | 4828 | 30 | 2402.3 | 8736.67 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1584.95 | 2.03167 | 5.2918ms | 48318 | 30 | 1.04669e+07 | 29073.3 | 1(Win) |
| jeaiii::to_text | 1277.15 | 0.0245035 | 6.6747ms | 48318 | 30 | 2344.83 | 36080 | 2(Loss) |
| fmt::format_to | 720.632 | 0.987372 | 11.7062ms | 48318 | 30 | 1.19584e+07 | 63943.3 | 3(Loss) |
| std::to_chars | 496.976 | 1.15486 | 16.7493ms | 48318 | 30 | 3.43975e+07 | 92720 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1241.33 | 0.703418 | 66.8355ms | 483194 | 30 | 2.04559e+08 | 371223 | 1(Win) |
| jeaiii::to_text | 1049.23 | 0.791343 | 79.4483ms | 483194 | 30 | 3.62373e+08 | 439190 | 2(Loss) |
| fmt::format_to | 650.472 | 0.392733 | 127.463ms | 483194 | 30 | 2.32221e+08 | 708423 | 3(Loss) |
| std::to_chars | 478.457 | 0.538218 | 172.735ms | 483194 | 30 | 8.06112e+08 | 963117 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2359.75 | 0.826446 | 0.096ms | 998 | 30 | 333.333 | 403.333 | 1(Win) |
| jeaiii::to_text | 1830.32 | 1.42843 | 0.1319ms | 998 | 30 | 1655.17 | 520 | 2(Loss) |
| fmt::format_to | 1146.71 | 1.02526 | 0.1923ms | 998 | 30 | 2172.41 | 830 | 3(Loss) |
| std::to_chars | 834.883 | 0.797998 | 0.2472ms | 998 | 30 | 2482.76 | 1140 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2502.27 | 0.194445 | 0.7757ms | 10023 | 30 | 1655.17 | 3820 | 1(Win) |
| jeaiii::to_text | 1905.38 | 0.137949 | 2.1859ms | 10023 | 30 | 1436.78 | 5016.67 | 2(Loss) |
| fmt::format_to | 1213.03 | 0.0942616 | 1.4916ms | 10023 | 30 | 1655.17 | 7880 | 3(Loss) |
| std::to_chars | 847.401 | 0.0658494 | 2.1222ms | 10023 | 30 | 1655.17 | 11280 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1375.25 | 1.14538 | 13.4156ms | 99944 | 30 | 1.89048e+07 | 69306.7 | 1(Win) |
| jeaiii::to_text | 854.4 | 0.742308 | 20.4305ms | 99944 | 30 | 2.05722e+07 | 111557 | 2(Loss) |
| fmt::format_to | 582.355 | 0.7036 | 29.6723ms | 99944 | 30 | 3.97842e+07 | 163670 | 3(Loss) |
| std::to_chars | 505.216 | 0.81874 | 34.2267ms | 99944 | 30 | 7.1577e+07 | 188660 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 837.468 | 0.226421 | 204.939ms | 998365 | 30 | 1.98791e+08 | 1.1369e+06 | 1(Win) |
| jeaiii::to_text | 744.849 | 0.241025 | 229.904ms | 998365 | 30 | 2.84765e+08 | 1.27827e+06 | 2(Loss) |
| fmt::format_to | 524.682 | 0.123477 | 326.952ms | 998365 | 30 | 1.50621e+08 | 1.81465e+06 | 3(Loss) |
| std::to_chars | 471.356 | 0.127414 | 363.796ms | 998365 | 30 | 1.98716e+08 | 2.01995e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2448.29 | 1.13903 | 0.0949ms | 1044 | 30 | 643.678 | 406.667 | 1(Win) |
| jeaiii::to_text | 1843.77 | 1.68466 | 0.1177ms | 1044 | 30 | 2482.76 | 540 | 2(Loss) |
| fmt::format_to | 1185.28 | 1.083 | 0.1865ms | 1044 | 30 | 2482.76 | 840 | 3(Loss) |
| std::to_chars | 716.285 | 0.400781 | 0.2753ms | 1044 | 30 | 931.034 | 1390 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2669.44 | 0.246824 | 0.7535ms | 10506 | 30 | 2574.71 | 3753.33 | 1(Win) |
| jeaiii::to_text | 1932.98 | 0.162426 | 0.976ms | 10506 | 30 | 2126.44 | 5183.33 | 2(Loss) |
| fmt::format_to | 1234.41 | 0.119367 | 1.5272ms | 10506 | 30 | 2816.09 | 8116.67 | 3(Loss) |
| std::to_chars | 684.534 | 0.162087 | 2.7582ms | 10506 | 30 | 16885.1 | 14636.7 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1952.96 | 1.26665 | 22.2221ms | 104726 | 30 | 1.2588e+07 | 51140 | 1(Win) |
| jeaiii::to_text | 1464.65 | 0.885198 | 12.6627ms | 104726 | 30 | 1.09306e+07 | 68190 | 2(Loss) |
| fmt::format_to | 885.857 | 1.22265 | 20.4704ms | 104726 | 30 | 5.70046e+07 | 112743 | 3(Loss) |
| std::to_chars | 620.095 | 0.404924 | 29.1851ms | 104726 | 30 | 1.27603e+07 | 161063 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1217.32 | 0.447041 | 147.496ms | 1048166 | 30 | 4.04263e+08 | 821153 | 1(Win) |
| jeaiii::to_text | 1088.72 | 0.318486 | 164.867ms | 1048166 | 30 | 2.56525e+08 | 918150 | 2(Loss) |
| fmt::format_to | 698.903 | 0.154316 | 257.542ms | 1048166 | 30 | 1.46139e+08 | 1.43025e+06 | 3(Loss) |
| std::to_chars | 603.32 | 0.154068 | 298.138ms | 1048166 | 30 | 1.95483e+08 | 1.65685e+06 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2160.64 | 1.66091 | 0.1004ms | 944 | 30 | 1436.78 | 416.667 | 1(Win) |
| jeaiii::to_text | 1698.62 | 1.60559 | 0.1179ms | 944 | 30 | 2172.41 | 530 | 2(Loss) |
| fmt::format_to | 1106.89 | 0.776118 | 0.1696ms | 944 | 30 | 1195.4 | 813.333 | 3(Loss) |
| std::to_chars | 760.79 | 0.584827 | 0.2585ms | 944 | 30 | 1436.78 | 1183.33 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2111.81 | 0.161567 | 0.8247ms | 9485 | 30 | 1436.78 | 4283.33 | 1(Win) |
| jeaiii::to_text | 1831.09 | 0.184153 | 2.1512ms | 9485 | 30 | 2482.76 | 4940 | 2(Loss) |
| fmt::format_to | 1154.76 | 0.11175 | 1.4625ms | 9485 | 30 | 2298.85 | 7833.33 | 3(Loss) |
| std::to_chars | 624.265 | 0.0690131 | 2.7482ms | 9485 | 30 | 3000 | 14490 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1295.95 | 0.842016 | 12.7276ms | 94847 | 30 | 1.03617e+07 | 69796.7 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1266.79 | 0.939804 | 12.9638ms | 94847 | 30 | 1.35093e+07 | 71403.3 | 1(Tie) |
| fmt::format_to | 724.011 | 0.601957 | 22.5951ms | 94847 | 30 | 1.69671e+07 | 124933 | 3(Loss) |
| std::to_chars | 572.899 | 0.880443 | 28.434ms | 94847 | 30 | 5.79715e+07 | 157887 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1099.46 | 0.278023 | 148.263ms | 948229 | 30 | 1.56872e+08 | 822493 | 1(Win) |
| jeaiii::to_text | 990.538 | 0.261887 | 164.228ms | 948229 | 30 | 1.71488e+08 | 912940 | 2(Loss) |
| fmt::format_to | 633.667 | 0.145 | 256.967ms | 948229 | 30 | 1.28459e+08 | 1.42709e+06 | 3(Loss) |
| std::to_chars | 556.037 | 0.240553 | 292.582ms | 948229 | 30 | 4.59156e+08 | 1.62633e+06 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2999.46 | 1.79705 | 0.1855ms | 975 | 30 | 931.034 | 310 | 1(Win) |
| fmt::format_to | 1234.29 | 1.22975 | 0.1576ms | 975 | 30 | 2574.71 | 753.333 | 2(Loss) |
| jeaiii::to_text | 1018.06 | 1.55137 | 0.2003ms | 975 | 30 | 6022.99 | 913.333 | 3(Loss) |
| std::to_chars | 871.718 | 0.820665 | 0.2268ms | 975 | 30 | 2298.85 | 1066.67 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2712.39 | 0.217188 | 0.658ms | 9727 | 30 | 1655.17 | 3420 | 1(Win) |
| jeaiii::to_text | 2069.08 | 0.187787 | 0.8374ms | 9727 | 30 | 2126.44 | 4483.33 | 2(Loss) |
| fmt::format_to | 1233.56 | 0.117565 | 1.4159ms | 9727 | 30 | 2344.83 | 7520 | 3(Loss) |
| std::to_chars | 804.544 | 0.084713 | 2.1339ms | 9727 | 30 | 2862.07 | 11530 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2184.77 | 2.24148 | 7.7384ms | 97432 | 30 | 2.72636e+07 | 42530 | 1(Win) |
| jeaiii::to_text | 1664.61 | 1.14431 | 10.1337ms | 97432 | 30 | 1.22403e+07 | 55820 | 2(Loss) |
| fmt::format_to | 1012.33 | 0.641252 | 16.6999ms | 97432 | 30 | 1.03929e+07 | 91786.7 | 3(Loss) |
| std::to_chars | 713.129 | 0.745476 | 57.0631ms | 97432 | 30 | 2.83045e+07 | 130297 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1679.72 | 0.486827 | 103.357ms | 974215 | 30 | 2.17523e+08 | 553117 | 1(Win) |
| jeaiii::to_text | 1453.73 | 0.435239 | 115.343ms | 974215 | 30 | 2.32124e+08 | 639103 | 2(Loss) |
| fmt::format_to | 893.47 | 0.441566 | 187.255ms | 974215 | 30 | 6.32502e+08 | 1.03986e+06 | 3(Loss) |
| std::to_chars | 710.588 | 0.184468 | 235.615ms | 974215 | 30 | 1.74516e+08 | 1.30749e+06 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2715.88 | 1.01275 | 0.1467ms | 1946 | 30 | 1436.78 | 683.333 | 1(Win) |
| jeaiii::to_text | 1568.32 | 0.584827 | 0.2443ms | 1946 | 30 | 1436.78 | 1183.33 | 2(Loss) |
| fmt::format_to | 905.293 | 0.452915 | 0.3881ms | 1946 | 30 | 2586.21 | 2050 | 3(Loss) |
| std::to_chars | 843.568 | 0.217938 | 0.4352ms | 1946 | 30 | 689.655 | 2200 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2707.35 | 0.120289 | 1.3463ms | 19380 | 30 | 2022.99 | 6826.67 | 1(Win) |
| jeaiii::to_text | 1653.15 | 0.0664384 | 4.7828ms | 19380 | 30 | 1655.17 | 11180 | 2(Loss) |
| fmt::format_to | 902.745 | 0.130251 | 8.8161ms | 19380 | 30 | 21333.3 | 20473.3 | 3(Loss) |
| std::to_chars | 797.105 | 1.27566 | 4.2695ms | 19380 | 30 | 2.62464e+06 | 23186.7 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2023.06 | 1.46341 | 16.6239ms | 193741 | 30 | 5.35898e+07 | 91330 | 1(Win) |
| jeaiii::to_text | 1188.23 | 0.762347 | 28.0659ms | 193741 | 30 | 4.21569e+07 | 155497 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 749.061 | 0.886711 | 44.5523ms | 193741 | 30 | 1.43514e+08 | 246663 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 732.036 | 0.813058 | 49.5845ms | 193741 | 30 | 1.26341e+08 | 252400 | 3(Tie) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1649.21 | 0.340792 | 201.749ms | 1938272 | 30 | 4.37701e+08 | 1.12083e+06 | 1(Win) |
| jeaiii::to_text | 1094.52 | 0.184568 | 304.592ms | 1938272 | 30 | 2.91485e+08 | 1.68885e+06 | 2(Loss) |
| std::to_chars **STATISTICAL TIE** | 726.213 | 0.118365 | 463.342ms | 1938272 | 30 | 2.72312e+08 | 2.54537e+06 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 724.492 | 0.233447 | 459.069ms | 1938272 | 30 | 1.06429e+09 | 2.55142e+06 | 3(Tie) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2731.73 | 0.668085 | 0.1484ms | 1986 | 30 | 643.678 | 693.333 | 1(Win) |
| jeaiii::to_text | 1614.2 | 0.699866 | 0.5367ms | 1986 | 30 | 2022.99 | 1173.33 | 2(Loss) |
| fmt::format_to | 849.326 | 0.381598 | 0.4236ms | 1986 | 30 | 2172.41 | 2230 | 3(Loss) |
| std::to_chars | 815.207 | 0.33805 | 0.4507ms | 1986 | 30 | 1850.57 | 2323.33 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2568.72 | 0.106471 | 3.3259ms | 19869 | 30 | 1850.57 | 7376.67 | 1(Win) |
| jeaiii::to_text | 1595.89 | 0.0691613 | 2.2174ms | 19869 | 30 | 2022.99 | 11873.3 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 835.351 | 2.26899 | 4.0485ms | 19869 | 30 | 7.94695e+06 | 22683.3 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 819.22 | 0.0422283 | 4.3408ms | 19869 | 30 | 2862.07 | 23130 | 3(Tie) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2525.42 | 2.2299 | 13.6232ms | 198810 | 30 | 8.40819e+07 | 75076.7 | 1(Win) |
| jeaiii::to_text | 1480.02 | 1.40588 | 22.9781ms | 198810 | 30 | 9.73103e+07 | 128107 | 2(Loss) |
| fmt::format_to | 839.607 | 0.876838 | 40.5166ms | 198810 | 30 | 1.17621e+08 | 225820 | 3(Loss) |
| std::to_chars | 789.781 | 1.34822 | 42.9911ms | 198810 | 30 | 3.14271e+08 | 240067 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2507.33 | 0.31825 | 137.854ms | 1987959 | 30 | 1.73721e+08 | 756130 | 1(Win) |
| jeaiii::to_text | 1485.17 | 0.309851 | 231.296ms | 1987959 | 30 | 4.6934e+08 | 1.27653e+06 | 2(Loss) |
| fmt::format_to | 841.912 | 0.163407 | 408.088ms | 1987959 | 30 | 4.06206e+08 | 2.25186e+06 | 3(Loss) |
| std::to_chars | 798.756 | 0.165273 | 429.427ms | 1987959 | 30 | 4.61648e+08 | 2.37352e+06 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2619.36 | 0.919286 | 0.1542ms | 1886 | 30 | 1195.4 | 686.667 | 1(Win) |
| jeaiii::to_text | 1541.68 | 0.750322 | 0.2318ms | 1886 | 30 | 2298.85 | 1166.67 | 2(Loss) |
| fmt::format_to | 852.431 | 0.264022 | 0.957ms | 1886 | 30 | 931.034 | 2110 | 3(Loss) |
| std::to_chars | 810.194 | 0.334586 | 0.4278ms | 1886 | 30 | 1655.17 | 2220 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2467.99 | 0.0866298 | 1.3965ms | 18857 | 30 | 1195.4 | 7286.67 | 1(Win) |
| jeaiii::to_text | 1583.05 | 0.0800808 | 2.1368ms | 18857 | 30 | 2482.76 | 11360 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 811.741 | 2.49744 | 19.8855ms | 18857 | 48 | 1.4694e+07 | 22154.2 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 795.258 | 0.035054 | 4.2358ms | 18857 | 30 | 1885.06 | 22613.3 | 3(Tie) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2250.62 | 2.40021 | 32.5975ms | 188827 | 30 | 1.10648e+08 | 80013.3 | 1(Win) |
| jeaiii::to_text | 832.288 | 1.31937 | 28.7951ms | 188827 | 30 | 2.44476e+08 | 216367 | 2(Loss) |
| std::to_chars | 772.973 | 0.891983 | 43.6501ms | 188827 | 30 | 1.29549e+08 | 232970 | 3(Loss) |
| fmt::format_to | 534.503 | 0.948866 | 46.6461ms | 188827 | 30 | 3.06591e+08 | 336910 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2394.91 | 0.400993 | 138.479ms | 1887900 | 30 | 2.72632e+08 | 751780 | 1(Win) |
| jeaiii::to_text | 1476.31 | 0.289209 | 222.316ms | 1887900 | 30 | 3.73205e+08 | 1.21955e+06 | 2(Loss) |
| fmt::format_to | 821.278 | 0.112581 | 397.08ms | 1887900 | 30 | 1.82738e+08 | 2.19224e+06 | 3(Loss) |
| std::to_chars | 780.368 | 0.157022 | 417.172ms | 1887900 | 30 | 3.93731e+08 | 2.30717e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3135.81 | 0.944214 | 0.3028ms | 1940 | 30 | 931.034 | 590 | 1(Win) |
| jeaiii::to_text | 1947.5 | 0.977344 | 0.197ms | 1940 | 30 | 2586.21 | 950 | 2(Loss) |
| std::to_chars | 768.751 | 0.192468 | 0.4596ms | 1940 | 30 | 643.678 | 2406.67 | 3(Loss) |
| fmt::format_to | 755.154 | 0.37897 | 0.4691ms | 1940 | 30 | 2586.21 | 2450 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3159.34 | 0.461434 | 1.1375ms | 19391 | 30 | 21885.1 | 5853.33 | 1(Win) |
| jeaiii::to_text | 2014.46 | 0.080913 | 1.7339ms | 19391 | 30 | 1655.17 | 9180 | 2(Loss) |
| std::to_chars **STATISTICAL TIE** | 660.139 | 2.43689 | 5.0524ms | 19391 | 30 | 1.39805e+07 | 28013.3 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 642.926 | 1.98297 | 5.2638ms | 19391 | 30 | 9.75964e+06 | 28763.3 | 3(Tie) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2349.36 | 0.900358 | 14.7631ms | 193958 | 30 | 1.50754e+07 | 78733.3 | 1(Win) |
| jeaiii::to_text | 1700.64 | 0.989549 | 20.1092ms | 193958 | 30 | 3.47526e+07 | 108767 | 2(Loss) |
| fmt::format_to | 631.68 | 0.993438 | 52.4145ms | 193958 | 30 | 2.53877e+08 | 292827 | 3(Loss) |
| std::to_chars | 607.55 | 0.479036 | 56.2585ms | 193958 | 30 | 6.38129e+07 | 304457 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1865.18 | 0.246696 | 179.592ms | 1939665 | 30 | 1.7958e+08 | 991760 | 1(Win) |
| jeaiii::to_text | 1396.54 | 0.273409 | 240.897ms | 1939665 | 30 | 3.93453e+08 | 1.32457e+06 | 2(Loss) |
| fmt::format_to | 636.954 | 0.0878089 | 528.181ms | 1939665 | 30 | 1.9509e+08 | 2.90415e+06 | 3(Loss) |
| std::to_chars | 591.628 | 0.200299 | 560.907ms | 1939665 | 30 | 1.17662e+09 | 3.12664e+06 | 4(Loss) |
