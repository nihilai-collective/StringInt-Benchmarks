# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 452.296 | 1.26975 | 264 | 60 | 42 |
| fmt::format_to | 407.2 | 0.895144 | 266 | 60 | 180 |
| vn::to_chars | 334.365 | 0.966842 | 263 | 60 | 380 |
| std::to_chars | 189.715 | 0.614282 | 263 | 60 | 271 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 443.288 | 0.223114 | 2647 | 60 | 27 |
| jeaiii::to_text | 410.853 | 1.74239 | 2651 | 60 | 1 |
| fmt::format_to | 362.846 | 0.226461 | 2646 | 60 | 24 |
| std::to_chars | 194.536 | 0.868541 | 2641 | 60 | 59 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 468.993 | 0.206533 | 26507 | 60 | 55 |
| vn::to_chars | 458.199 | 0.546826 | 26491 | 60 | 18 |
| fmt::format_to | 415.167 | 0.2191 | 26511 | 60 | 45 |
| std::to_chars | 300.43 | 0.442256 | 26497 | 60 | 60 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 481.254 | 0.775909 | 264816 | 60 | 29 |
| jeaiii::to_text | 454.598 | 0.791126 | 264846 | 60 | 0 |
| fmt::format_to | 417.1 | 0.778354 | 264830 | 60 | 60 |
| std::to_chars | 294.984 | 0.924548 | 264830 | 60 | 60 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 926.362 | 1.58553 | 315 | 60 | 154 |
| jeaiii::to_text **STATISTICAL TIE** | 885.301 | 1.81388 | 315 | 60 | 178 |
| fmt::format_to | 677.085 | 1.69618 | 315 | 60 | 364 |
| std::to_chars | 452.681 | 0.922377 | 315 | 60 | 371 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 920.826 | 0.345787 | 3146 | 60 | 34 |
| vn::to_chars | 874.048 | 0.295645 | 3143 | 60 | 22 |
| fmt::format_to | 804.799 | 0.283821 | 3141 | 60 | 11 |
| std::to_chars | 470.997 | 0.153856 | 3147 | 60 | 60 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 967.637 | 0.323328 | 31439 | 60 | 40 |
| vn::to_chars | 861.545 | 0.476266 | 31431 | 60 | 20 |
| fmt::format_to | 806.103 | 0.3163 | 31430 | 60 | 13 |
| std::to_chars | 487.204 | 0.330539 | 31448 | 60 | 58 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1017.13 | 0.187331 | 314459 | 60 | 59 |
| jeaiii::to_text | 944.839 | 0.819603 | 314447 | 60 | 26 |
| fmt::format_to | 792.053 | 1.07836 | 314473 | 60 | 16 |
| std::to_chars | 479.461 | 0.777685 | 314450 | 60 | 60 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 612.643 | 2.08525 | 215 | 60 | 1 |
| jeaiii::to_text | 542.633 | 1.85901 | 215 | 60 | 39 |
| fmt::format_to | 457.271 | 1.4743 | 214 | 60 | 31 |
| std::to_chars | 275.217 | 0.909951 | 214 | 60 | 52 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 661.182 | 0.314888 | 2153 | 60 | 29 |
| jeaiii::to_text **STATISTICAL TIE** | 654.608 | 0.330358 | 2154 | 60 | 57 |
| fmt::format_to | 559.644 | 0.273685 | 2153 | 60 | 179 |
| std::to_chars | 337.297 | 0.185541 | 2151 | 60 | 14 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 661.736 | 0.163557 | 21525 | 60 | 45 |
| vn::to_chars | 635.786 | 1.35202 | 21526 | 60 | 60 |
| fmt::format_to | 540.017 | 0.212378 | 21525 | 60 | 46 |
| std::to_chars | 335.438 | 0.335316 | 21530 | 60 | 58 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 715.786 | 0.291259 | 215252 | 60 | 2 |
| jeaiii::to_text | 656.854 | 0.351139 | 215235 | 60 | 44 |
| fmt::format_to | 550.62 | 0.77469 | 215240 | 60 | 48 |
| std::to_chars | 330.83 | 0.902863 | 215225 | 60 | 39 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 704.077 | 1.99396 | 257 | 60 | 43 |
| jeaiii::to_text **STATISTICAL TIE** | 673.254 | 1.86216 | 257 | 60 | 15 |
| fmt::format_to | 534.145 | 1.56674 | 258 | 60 | 58 |
| std::to_chars | 354.338 | 0.895673 | 257 | 60 | 162 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 719.387 | 0.450723 | 2570 | 60 | 38 |
| jeaiii::to_text | 671.11 | 0.401759 | 2568 | 60 | 27 |
| fmt::format_to | 610.675 | 0.336757 | 2568 | 60 | 11 |
| std::to_chars | 358.684 | 0.289935 | 2569 | 60 | 54 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 730.414 | 0.391418 | 25716 | 60 | 25 |
| jeaiii::to_text | 688.557 | 0.411799 | 25711 | 60 | 54 |
| fmt::format_to | 595.826 | 0.256634 | 25714 | 60 | 44 |
| std::to_chars | 329.719 | 2.08861 | 25711 | 60 | 4 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 710.988 | 0.480135 | 257030 | 60 | 56 |
| jeaiii::to_text | 649.414 | 0.559902 | 257020 | 60 | 59 |
| fmt::format_to | 591.668 | 0.981182 | 257023 | 60 | 60 |
| std::to_chars | 345.131 | 1.29135 | 257065 | 60 | 0 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 873.084 | 1.18255 | 516 | 60 | 21 |
| jeaiii::to_text | 817.984 | 0.967102 | 517 | 60 | 126 |
| fmt::format_to | 657.167 | 0.925122 | 516 | 60 | 18 |
| std::to_chars | 485.678 | 0.801377 | 516 | 60 | 178 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 844.278 | 0.245329 | 5155 | 60 | 35 |
| vn::to_chars | 832.806 | 0.230002 | 5155 | 60 | 35 |
| fmt::format_to | 507.096 | 0.237138 | 5152 | 60 | 60 |
| std::to_chars | 494.967 | 0.210881 | 5156 | 60 | 23 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 812.999 | 1.39925 | 51597 | 60 | 0 |
| fmt::format_to | 694.418 | 0.330383 | 51628 | 60 | 50 |
| jeaiii::to_text | 611.287 | 1.05534 | 51628 | 60 | 50 |
| std::to_chars | 484.393 | 0.250384 | 51604 | 60 | 7 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 892.275 | 0.68697 | 516040 | 60 | 37 |
| jeaiii::to_text | 822.617 | 0.711686 | 516048 | 60 | 52 |
| fmt::format_to | 700.001 | 0.674853 | 516070 | 60 | 6 |
| std::to_chars | 473.171 | 1.06259 | 516078 | 60 | 0 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1336.01 | 1.61617 | 566 | 60 | 23 |
| jeaiii::to_text | 1011.37 | 1.18608 | 566 | 60 | 55 |
| fmt::format_to | 743.897 | 0.799422 | 565 | 60 | 10 |
| std::to_chars | 429.981 | 0.693049 | 565 | 60 | 59 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1587.98 | 0.383479 | 5662 | 60 | 49 |
| jeaiii::to_text | 1446.97 | 2.11629 | 5663 | 60 | 60 |
| fmt::format_to | 1111.64 | 0.319565 | 5665 | 60 | 10 |
| std::to_chars | 678.381 | 0.205243 | 5665 | 60 | 10 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1529.79 | 0.273518 | 56593 | 60 | 138 |
| jeaiii::to_text | 1495.83 | 0.253038 | 56603 | 60 | 858 |
| fmt::format_to | 1098.28 | 0.180997 | 56619 | 60 | 297 |
| std::to_chars | 682.882 | 0.1778 | 56598 | 60 | 130 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1519.23 | 0.50222 | 566098 | 60 | 136 |
| jeaiii::to_text | 1403.91 | 1.98019 | 566031 | 60 | 58 |
| fmt::format_to | 1086.73 | 0.977701 | 566107 | 60 | 158 |
| std::to_chars | 574.519 | 2.66577 | 566103 | 60 | 120 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1342.43 | 1.82456 | 466 | 60 | 52 |
| jeaiii::to_text | 1195.23 | 1.82718 | 466 | 60 | 38 |
| fmt::format_to | 882.016 | 1.39888 | 466 | 60 | 54 |
| std::to_chars | 565.801 | 0.934575 | 466 | 60 | 59 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1409.63 | 0.421866 | 4663 | 60 | 4 |
| jeaiii::to_text | 1257.19 | 0.450896 | 4659 | 60 | 60 |
| fmt::format_to | 919.573 | 0.298873 | 4663 | 60 | 3 |
| std::to_chars | 578.612 | 0.246196 | 4663 | 60 | 2 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 799.172 | 0.659293 | 46626 | 60 | 1 |
| jeaiii::to_text | 746.114 | 2.00594 | 46613 | 60 | 30 |
| fmt::format_to | 549.036 | 1.18943 | 46626 | 60 | 3 |
| std::to_chars | 363.447 | 0.670333 | 46626 | 60 | 7 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1157.92 | 1.66245 | 466098 | 60 | 36 |
| vn::to_chars | 852.566 | 0.993428 | 466080 | 60 | 49 |
| fmt::format_to | 711.786 | 2.50582 | 466094 | 60 | 60 |
| std::to_chars | 555.238 | 0.967581 | 466088 | 60 | 20 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1328.88 | 1.89628 | 482 | 60 | 180 |
| jeaiii::to_text **STATISTICAL TIE** | 1276.02 | 1.94184 | 482 | 60 | 1 |
| fmt::format_to | 818.162 | 1.20076 | 482 | 60 | 34 |
| std::to_chars | 432.77 | 0.702368 | 482 | 60 | 295 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1377.15 | 0.374333 | 4831 | 60 | 158 |
| jeaiii::to_text **STATISTICAL TIE** | 1361.24 | 0.25617 | 4827 | 60 | 58 |
| fmt::format_to | 842.045 | 0.296801 | 4833 | 60 | 393 |
| std::to_chars | 447.422 | 0.121324 | 4832 | 60 | 295 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1357.86 | 0.326407 | 48304 | 60 | 4 |
| jeaiii::to_text | 1321.56 | 0.286252 | 48305 | 60 | 0 |
| fmt::format_to | 856.647 | 0.158297 | 48305 | 60 | 33 |
| std::to_chars | 443.565 | 0.186932 | 48300 | 60 | 53 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1340.14 | 0.563165 | 483072 | 60 | 59 |
| jeaiii::to_text **STATISTICAL TIE** | 1326.37 | 0.161605 | 483077 | 60 | 41 |
| fmt::format_to | 852.952 | 0.109993 | 483079 | 60 | 56 |
| std::to_chars | 440.348 | 0.235845 | 483079 | 60 | 55 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 941.276 | 0.633656 | 997 | 60 | 153 |
| vn::to_chars **STATISTICAL TIE** | 936.841 | 0.78209 | 998 | 60 | 381 |
| fmt::format_to | 734.62 | 0.640115 | 997 | 60 | 278 |
| std::to_chars | 414.345 | 0.405368 | 998 | 60 | 259 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 980.645 | 0.160273 | 9981 | 60 | 6 |
| jeaiii::to_text | 954.304 | 0.178367 | 9981 | 60 | 17 |
| fmt::format_to | 747.965 | 0.177468 | 9986 | 60 | 59 |
| std::to_chars | 417.548 | 0.141972 | 9985 | 60 | 56 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 972.375 | 0.186732 | 99831 | 60 | 373 |
| jeaiii::to_text | 965.186 | 0.135846 | 99823 | 60 | 878 |
| fmt::format_to | 745.952 | 0.142023 | 99840 | 60 | 272 |
| std::to_chars | 416.448 | 0.0962736 | 99842 | 60 | 266 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 985.467 | 0.198391 | 998268 | 60 | 53 |
| jeaiii::to_text | 939.954 | 0.225739 | 998245 | 60 | 27 |
| fmt::format_to | 744.571 | 0.185212 | 998260 | 60 | 55 |
| std::to_chars | 413.73 | 0.225575 | 998271 | 60 | 34 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1336.75 | 0.882275 | 1048 | 60 | 59 |
| vn::to_chars | 1269.81 | 1.00359 | 1048 | 60 | 30 |
| fmt::format_to | 957.649 | 0.67325 | 1048 | 60 | 44 |
| std::to_chars | 484.999 | 0.375696 | 1047 | 60 | 12 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1382.44 | 0.292179 | 10487 | 60 | 3 |
| vn::to_chars | 1343.91 | 0.261347 | 10487 | 60 | 36 |
| fmt::format_to | 981.043 | 0.235256 | 10484 | 60 | 51 |
| std::to_chars | 498.479 | 0.129725 | 10486 | 60 | 1 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1381.41 | 0.331885 | 104826 | 60 | 59 |
| vn::to_chars | 1307.81 | 0.240966 | 104824 | 60 | 1 |
| fmt::format_to | 963.204 | 0.324869 | 104817 | 60 | 30 |
| std::to_chars | 476.765 | 0.869543 | 104830 | 60 | 50 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1367.25 | 0.33961 | 1048255 | 60 | 0 |
| vn::to_chars | 1332.64 | 0.319182 | 1048249 | 60 | 60 |
| fmt::format_to | 951.543 | 0.21931 | 1048241 | 60 | 26 |
| std::to_chars | 489.618 | 0.112534 | 1048248 | 60 | 4 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1232.97 | 1.11166 | 947 | 60 | 163 |
| jeaiii::to_text **STATISTICAL TIE** | 1187.91 | 0.993729 | 947 | 60 | 42 |
| fmt::format_to | 845.438 | 0.70191 | 947 | 60 | 58 |
| std::to_chars | 448.234 | 0.518488 | 948 | 60 | 3 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1303.72 | 0.238012 | 9482 | 60 | 3 |
| jeaiii::to_text | 1249.68 | 0.23596 | 9482 | 60 | 24 |
| fmt::format_to | 890.233 | 0.216884 | 9483 | 60 | 14 |
| std::to_chars | 456.078 | 0.151917 | 9482 | 60 | 18 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 1240.41 | 0.28344 | 94827 | 60 | 125 |
| vn::to_chars **STATISTICAL TIE** | 1238.5 | 0.214117 | 94832 | 60 | 172 |
| fmt::format_to | 862.462 | 0.194089 | 94836 | 60 | 176 |
| std::to_chars | 452.952 | 0.118249 | 94826 | 60 | 137 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 1234.77 | 0.21635 | 948270 | 60 | 885 |
| vn::to_chars **STATISTICAL TIE** | 1233.39 | 0.22454 | 948304 | 60 | 26 |
| fmt::format_to | 861.236 | 0.0694985 | 948294 | 60 | 32 |
| std::to_chars | 449.532 | 0.168962 | 948224 | 60 | 376 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1878.03 | 1.10755 | 974 | 60 | 39 |
| jeaiii::to_text | 1766.41 | 1.07843 | 974 | 60 | 54 |
| fmt::format_to | 1197.62 | 0.958168 | 974 | 60 | 60 |
| std::to_chars | 542.512 | 0.550324 | 974 | 60 | 39 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1947.9 | 0.274247 | 9742 | 60 | 57 |
| jeaiii::to_text | 1858.25 | 0.2451 | 9742 | 60 | 37 |
| fmt::format_to | 1179.02 | 0.190344 | 9742 | 60 | 57 |
| std::to_chars | 552.374 | 0.11359 | 9744 | 60 | 48 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1810.01 | 0.359572 | 97409 | 60 | 0 |
| vn::to_chars | 1494.14 | 2.18697 | 97406 | 60 | 60 |
| fmt::format_to | 1177.57 | 0.207586 | 97410 | 60 | 33 |
| std::to_chars | 554.091 | 0.220675 | 97406 | 60 | 59 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1837.67 | 0.438235 | 974117 | 60 | 165 |
| jeaiii::to_text | 1795.61 | 0.488665 | 974121 | 60 | 136 |
| fmt::format_to | 1003.85 | 0.322876 | 974110 | 60 | 153 |
| std::to_chars | 547.208 | 0.178394 | 974120 | 60 | 126 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1689.04 | 0.731637 | 1936 | 60 | 23 |
| jeaiii::to_text | 1488.71 | 0.518313 | 1937 | 60 | 40 |
| fmt::format_to | 864.528 | 0.349694 | 1937 | 60 | 33 |
| std::to_chars | 514.71 | 0.244561 | 1937 | 60 | 40 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1746.38 | 0.169757 | 19377 | 60 | 43 |
| jeaiii::to_text | 1504.96 | 0.13965 | 19379 | 60 | 5 |
| fmt::format_to | 877.611 | 0.328783 | 19379 | 60 | 1 |
| std::to_chars | 518.992 | 0.212194 | 19377 | 60 | 53 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1717.07 | 0.2192 | 193803 | 60 | 1 |
| jeaiii::to_text | 1488.56 | 0.271657 | 193805 | 60 | 29 |
| fmt::format_to | 880.758 | 0.130136 | 193802 | 60 | 25 |
| std::to_chars | 519.784 | 0.117796 | 193802 | 60 | 30 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1813.21 | 0.411182 | 1937942 | 60 | 60 |
| jeaiii::to_text | 1485.25 | 0.180672 | 1937943 | 60 | 56 |
| fmt::format_to | 879.358 | 0.0656872 | 1937921 | 60 | 7 |
| std::to_chars | 511.269 | 0.152354 | 1937939 | 60 | 48 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2591.44 | 0.861211 | 1988 | 60 | 57 |
| jeaiii::to_text | 2022.23 | 0.677146 | 1987 | 60 | 30 |
| fmt::format_to | 1013.94 | 0.456409 | 1987 | 60 | 23 |
| std::to_chars | 563.045 | 0.221945 | 1988 | 60 | 1 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2612.44 | 0.415435 | 19880 | 60 | 8 |
| jeaiii::to_text | 2086.8 | 0.152771 | 19880 | 60 | 37 |
| fmt::format_to | 1016.04 | 0.133552 | 19881 | 60 | 27 |
| std::to_chars | 562.938 | 0.335941 | 19879 | 60 | 60 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2556.97 | 0.285728 | 198798 | 60 | 37 |
| jeaiii::to_text | 2035.07 | 0.469809 | 198802 | 60 | 14 |
| fmt::format_to | 1027.44 | 0.244957 | 198797 | 60 | 34 |
| std::to_chars | 565.192 | 0.11948 | 198802 | 60 | 10 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2626.97 | 0.507496 | 1987947 | 60 | 0 |
| jeaiii::to_text | 2006.82 | 0.690411 | 1987953 | 60 | 13 |
| fmt::format_to | 1022.41 | 0.142002 | 1987941 | 60 | 60 |
| std::to_chars | 558.026 | 0.302703 | 1987934 | 60 | 56 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2443.79 | 0.848751 | 1888 | 60 | 54 |
| jeaiii::to_text | 1941.65 | 0.663963 | 1888 | 60 | 1 |
| fmt::format_to | 957.13 | 0.438106 | 1888 | 60 | 55 |
| std::to_chars | 551.924 | 0.219908 | 1888 | 60 | 55 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2555.63 | 0.183122 | 18879 | 60 | 25 |
| jeaiii::to_text | 2007.49 | 0.156868 | 18879 | 60 | 41 |
| fmt::format_to | 977.441 | 0.091151 | 18879 | 60 | 30 |
| std::to_chars | 549.752 | 0.0716656 | 18879 | 60 | 48 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2314.63 | 0.652483 | 188800 | 60 | 38 |
| jeaiii::to_text | 1965.6 | 0.809859 | 188794 | 60 | 5 |
| fmt::format_to | 963.866 | 0.12649 | 188798 | 60 | 60 |
| std::to_chars | 554.149 | 0.2465 | 188804 | 60 | 43 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2545.93 | 0.484377 | 1887972 | 60 | 22 |
| jeaiii::to_text | 1969.87 | 0.385897 | 1887953 | 60 | 50 |
| fmt::format_to | 925.605 | 1.09084 | 1887940 | 60 | 58 |
| std::to_chars | 525.158 | 0.909659 | 1887968 | 60 | 13 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1939.93 | 0.685554 | 1940 | 60 | 54 |
| jeaiii::to_text | 1618.13 | 0.574247 | 1941 | 60 | 35 |
| fmt::format_to | 772.854 | 0.422162 | 1941 | 60 | 11 |
| std::to_chars | 463.623 | 0.221664 | 1941 | 60 | 11 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2004.27 | 0.177241 | 19397 | 60 | 1 |
| jeaiii::to_text | 1642.8 | 0.573479 | 19400 | 60 | 60 |
| fmt::format_to | 778.318 | 0.288589 | 19400 | 60 | 44 |
| std::to_chars | 461.151 | 0.669045 | 19400 | 60 | 60 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1916.82 | 0.428888 | 193971 | 60 | 1 |
| jeaiii::to_text | 1650.77 | 0.174633 | 193972 | 60 | 2 |
| fmt::format_to | 783.582 | 0.213677 | 193974 | 60 | 52 |
| std::to_chars | 467.185 | 0.270097 | 193972 | 60 | 2 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1895.3 | 0.240909 | 1939797 | 60 | 60 |
| jeaiii::to_text | 1643.65 | 0.131009 | 1939769 | 60 | 23 |
| fmt::format_to | 771.329 | 0.493652 | 1939757 | 60 | 8 |
| std::to_chars | 461.561 | 0.113766 | 1939774 | 60 | 36 |
