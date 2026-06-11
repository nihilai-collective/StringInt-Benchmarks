# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 488.978 | 0.746261 | 265 | 60 | 878 |
| jeaiii::to_text **STATISTICAL TIE** | 484.269 | 0.756935 | 263 | 60 | 179 |
| fmt::format_to | 427.696 | 0.668502 | 264 | 60 | 145 |
| std::to_chars | 420.622 | 0.706916 | 266 | 60 | 417 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 507.022 | 0.311197 | 2648 | 60 | 33 |
| jeaiii::to_text **STATISTICAL TIE** | 506.777 | 0.274032 | 2649 | 60 | 130 |
| fmt::format_to | 448.472 | 0.261879 | 2644 | 60 | 392 |
| std::to_chars | 429.338 | 0.276178 | 2651 | 60 | 255 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 511.059 | 0.96075 | 26485 | 60 | 131 |
| vn::to_chars **STATISTICAL TIE** | 502.585 | 0.365317 | 26485 | 60 | 134 |
| fmt::format_to | 434.968 | 0.477679 | 26484 | 60 | 58 |
| std::to_chars | 409.237 | 0.807251 | 26488 | 60 | 180 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 497.862 | 0.952707 | 264837 | 60 | 130 |
| vn::to_chars | 479.623 | 0.761362 | 264870 | 60 | 292 |
| fmt::format_to | 431.301 | 0.928984 | 264874 | 60 | 169 |
| std::to_chars | 414.988 | 1.34431 | 264815 | 60 | 407 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1013.03 | 1.00195 | 315 | 60 | 172 |
| jeaiii::to_text | 930.126 | 0.94659 | 314 | 60 | 167 |
| fmt::format_to | 803.644 | 0.91687 | 314 | 60 | 166 |
| std::to_chars | 749.563 | 1.04986 | 314 | 60 | 167 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1060.66 | 0.503817 | 3145 | 60 | 60 |
| jeaiii::to_text | 975.045 | 0.308259 | 3146 | 60 | 59 |
| fmt::format_to | 849.288 | 0.33917 | 3145 | 60 | 57 |
| std::to_chars | 782.468 | 1.44687 | 3145 | 60 | 53 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1081.81 | 0.349333 | 31440 | 60 | 1 |
| jeaiii::to_text | 1026.04 | 0.969141 | 31439 | 60 | 0 |
| std::to_chars | 857.302 | 0.681667 | 31447 | 60 | 53 |
| fmt::format_to | 828.659 | 0.727885 | 31446 | 60 | 35 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1168.21 | 0.380653 | 314475 | 60 | 534 |
| jeaiii::to_text | 1113.38 | 0.457165 | 314448 | 60 | 180 |
| fmt::format_to | 890.657 | 0.504726 | 314432 | 60 | 244 |
| std::to_chars | 883.881 | 0.554631 | 314454 | 60 | 780 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 758.212 | 1.14854 | 214 | 60 | 20 |
| jeaiii::to_text | 682.62 | 1.12541 | 214 | 60 | 53 |
| fmt::format_to | 560.06 | 0.934558 | 214 | 60 | 40 |
| std::to_chars | 501.015 | 1.18942 | 214 | 60 | 60 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 810.425 | 0.417679 | 2155 | 60 | 10 |
| jeaiii::to_text | 746.643 | 0.355439 | 2154 | 60 | 17 |
| fmt::format_to | 617.922 | 0.294436 | 2155 | 60 | 10 |
| std::to_chars | 591.238 | 0.542205 | 2149 | 60 | 60 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 776.518 | 0.778084 | 21531 | 60 | 10 |
| jeaiii::to_text | 735.511 | 0.651039 | 21526 | 60 | 15 |
| fmt::format_to | 568.476 | 0.760963 | 21537 | 60 | 0 |
| std::to_chars | 545.177 | 1.08435 | 21519 | 60 | 54 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 755.378 | 0.499169 | 215231 | 60 | 130 |
| jeaiii::to_text | 735.55 | 0.343443 | 215226 | 60 | 145 |
| fmt::format_to | 623.919 | 0.352009 | 215182 | 60 | 392 |
| std::to_chars | 586.881 | 0.698322 | 215189 | 60 | 178 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 705.551 | 1.19407 | 256 | 60 | 179 |
| vn::to_chars **STATISTICAL TIE** | 672.672 | 1.46023 | 256 | 60 | 896 |
| fmt::format_to | 634.778 | 0.992519 | 256 | 60 | 250 |
| std::to_chars | 454.854 | 1.56995 | 256 | 60 | 841 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 806.163 | 0.494338 | 2573 | 60 | 59 |
| vn::to_chars | 772.518 | 0.43135 | 2568 | 60 | 132 |
| std::to_chars | 714.019 | 0.545164 | 2573 | 60 | 6 |
| fmt::format_to | 618.601 | 0.403687 | 2571 | 60 | 413 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 788.767 | 0.383331 | 25708 | 60 | 517 |
| std::to_chars | 734.932 | 0.485865 | 25692 | 60 | 881 |
| jeaiii::to_text | 713.188 | 0.490459 | 25704 | 60 | 844 |
| fmt::format_to | 661.312 | 0.352088 | 25702 | 60 | 406 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 785.31 | 0.456574 | 257056 | 60 | 165 |
| jeaiii::to_text | 763.909 | 0.547682 | 257045 | 60 | 122 |
| std::to_chars | 722.865 | 0.398644 | 257023 | 60 | 60 |
| fmt::format_to | 680.189 | 0.850343 | 257062 | 60 | 148 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 911.091 | 0.743301 | 515 | 60 | 406 |
| jeaiii::to_text | 880.957 | 0.737142 | 516 | 60 | 168 |
| fmt::format_to | 864.18 | 0.661723 | 517 | 60 | 164 |
| std::to_chars | 699.243 | 0.639093 | 516 | 60 | 39 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 951.029 | 0.300579 | 5164 | 60 | 42 |
| jeaiii::to_text | 794.535 | 0.321635 | 5170 | 60 | 56 |
| fmt::format_to | 753.118 | 1.38625 | 5169 | 60 | 60 |
| std::to_chars | 656.961 | 0.433403 | 5163 | 60 | 4 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 913.739 | 0.515557 | 51614 | 60 | 130 |
| jeaiii::to_text | 882.371 | 0.647776 | 51618 | 60 | 124 |
| fmt::format_to | 716.703 | 0.82888 | 51623 | 60 | 36 |
| std::to_chars | 713.44 | 0.541795 | 51607 | 60 | 150 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 920.548 | 1.16068 | 516127 | 60 | 48 |
| jeaiii::to_text | 877.869 | 0.918149 | 516128 | 60 | 60 |
| fmt::format_to | 745.186 | 0.541942 | 516130 | 60 | 55 |
| std::to_chars | 658.976 | 1.70168 | 516124 | 60 | 59 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1595.4 | 1.2118 | 565 | 60 | 47 |
| jeaiii::to_text | 1497.82 | 1.0158 | 565 | 60 | 47 |
| fmt::format_to | 1389.16 | 0.853087 | 565 | 60 | 59 |
| std::to_chars | 1130.77 | 0.907985 | 565 | 60 | 51 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1975.33 | 0.389718 | 5658 | 60 | 36 |
| jeaiii::to_text | 1691.18 | 0.376004 | 5660 | 60 | 60 |
| fmt::format_to | 1496.5 | 0.315473 | 5659 | 60 | 11 |
| std::to_chars | 1220.77 | 0.40346 | 5659 | 60 | 58 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1779.16 | 0.387073 | 56598 | 60 | 46 |
| jeaiii::to_text | 1603.55 | 0.612418 | 56598 | 60 | 60 |
| fmt::format_to | 1416.52 | 0.681688 | 56597 | 60 | 58 |
| std::to_chars | 1214.79 | 0.495513 | 56598 | 60 | 60 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1722.34 | 1.04015 | 566122 | 60 | 0 |
| jeaiii::to_text | 1623.65 | 0.491249 | 566167 | 60 | 49 |
| fmt::format_to | 1381.7 | 1.15935 | 566122 | 60 | 0 |
| std::to_chars | 1156.05 | 1.38237 | 566132 | 60 | 16 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1484.79 | 1.25712 | 465 | 60 | 36 |
| jeaiii::to_text | 1290.94 | 1.20096 | 466 | 60 | 12 |
| fmt::format_to | 1175.69 | 0.850899 | 465 | 60 | 30 |
| std::to_chars | 981.171 | 0.918225 | 466 | 60 | 60 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1543.4 | 0.434668 | 4663 | 60 | 56 |
| jeaiii::to_text | 1409.15 | 0.482813 | 4659 | 60 | 16 |
| fmt::format_to | 1070.77 | 0.675182 | 4660 | 60 | 38 |
| std::to_chars | 993.762 | 0.516258 | 4659 | 60 | 23 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1510.17 | 0.765336 | 46616 | 60 | 0 |
| jeaiii::to_text | 1327.45 | 0.662528 | 46611 | 60 | 30 |
| fmt::format_to | 1210.9 | 0.618546 | 46616 | 60 | 59 |
| std::to_chars | 989.05 | 0.852276 | 46609 | 60 | 42 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1492.18 | 0.398565 | 466137 | 60 | 178 |
| jeaiii::to_text | 1357.74 | 0.889772 | 466110 | 60 | 280 |
| std::to_chars | 1015.59 | 0.952993 | 466111 | 60 | 368 |
| fmt::format_to | 979.764 | 1.01792 | 466110 | 60 | 403 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2316.91 | 1.41838 | 482 | 60 | 59 |
| jeaiii::to_text | 2071.6 | 1.4274 | 482 | 60 | 59 |
| fmt::format_to | 1644.23 | 1.17215 | 482 | 60 | 59 |
| std::to_chars | 1390.46 | 1.73161 | 482 | 60 | 59 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 2308.09 | 0.506323 | 4826 | 60 | 10 |
| fmt::format_to | 1826.54 | 0.414104 | 4827 | 60 | 44 |
| vn::to_chars | 1643.97 | 0.4496 | 4826 | 60 | 9 |
| std::to_chars | 1643.22 | 0.416924 | 4829 | 60 | 60 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2584.38 | 0.332861 | 48317 | 60 | 8 |
| jeaiii::to_text | 2121.42 | 1.01316 | 48308 | 60 | 0 |
| fmt::format_to | 1731.35 | 0.635976 | 48320 | 60 | 39 |
| std::to_chars | 1584.44 | 0.468332 | 48321 | 60 | 54 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2394.9 | 0.716492 | 483052 | 60 | 38 |
| jeaiii::to_text | 2255.32 | 0.41279 | 483042 | 60 | 24 |
| fmt::format_to | 1701.81 | 0.918157 | 483043 | 60 | 60 |
| std::to_chars | 1550.42 | 0.675483 | 483046 | 60 | 45 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1161.16 | 1.17118 | 1000 | 60 | 11 |
| jeaiii::to_text | 866.903 | 0.37207 | 998 | 60 | 51 |
| fmt::format_to | 821.411 | 0.539586 | 999 | 60 | 14 |
| std::to_chars | 648.556 | 0.786072 | 998 | 60 | 41 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1454.46 | 0.363181 | 9977 | 60 | 60 |
| fmt::format_to | 1302.35 | 0.217651 | 9977 | 60 | 60 |
| jeaiii::to_text | 1211.31 | 0.273599 | 9980 | 60 | 11 |
| std::to_chars | 986.42 | 0.267168 | 9979 | 60 | 43 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1336.34 | 0.983046 | 99816 | 60 | 57 |
| fmt::format_to | 1215.23 | 0.647258 | 99852 | 60 | 2 |
| jeaiii::to_text | 1147.8 | 0.746389 | 99832 | 60 | 26 |
| std::to_chars | 996.854 | 0.462661 | 99818 | 60 | 53 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1371.36 | 0.589838 | 998299 | 60 | 391 |
| jeaiii::to_text | 1333.9 | 0.826156 | 998231 | 60 | 870 |
| fmt::format_to | 1200.98 | 1.10864 | 998320 | 60 | 366 |
| std::to_chars | 971.651 | 0.818609 | 998248 | 60 | 413 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2128.59 | 0.857554 | 1048 | 60 | 167 |
| jeaiii::to_text | 1829.56 | 0.782481 | 1049 | 60 | 17 |
| fmt::format_to | 1776.28 | 0.74232 | 1050 | 60 | 30 |
| std::to_chars | 1408.42 | 0.526959 | 1047 | 60 | 180 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2297.35 | 0.277946 | 10481 | 60 | 44 |
| jeaiii::to_text | 1914.04 | 0.304227 | 10482 | 60 | 60 |
| fmt::format_to | 1866.33 | 0.268823 | 10482 | 60 | 60 |
| std::to_chars | 1380.41 | 0.357693 | 10477 | 60 | 0 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2073.62 | 0.542 | 104819 | 60 | 3 |
| jeaiii::to_text | 1724.7 | 0.694273 | 104827 | 60 | 38 |
| fmt::format_to | 1668.69 | 0.589955 | 104823 | 60 | 0 |
| std::to_chars | 1405.47 | 0.590256 | 104822 | 60 | 58 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2063.71 | 1.20653 | 1048230 | 60 | 27 |
| jeaiii::to_text | 1954.01 | 1.45587 | 1048278 | 60 | 60 |
| fmt::format_to | 1732.63 | 0.89594 | 1048242 | 60 | 2 |
| std::to_chars | 1360.05 | 1.11354 | 1048242 | 60 | 8 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1931.96 | 1.12456 | 947 | 60 | 59 |
| jeaiii::to_text | 1634.18 | 0.691966 | 946 | 60 | 2 |
| fmt::format_to | 1559.63 | 0.699463 | 947 | 60 | 10 |
| std::to_chars | 1243.02 | 0.673396 | 946 | 60 | 37 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2112.49 | 0.32677 | 9482 | 60 | 4 |
| jeaiii::to_text | 1740.78 | 0.56875 | 9481 | 60 | 60 |
| fmt::format_to | 1708.41 | 0.326733 | 9484 | 60 | 11 |
| std::to_chars | 1296.06 | 0.314561 | 9479 | 60 | 39 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1901.88 | 0.465531 | 94823 | 60 | 17 |
| jeaiii::to_text | 1669 | 0.768287 | 94826 | 60 | 167 |
| fmt::format_to | 1589.01 | 0.535656 | 94825 | 60 | 56 |
| std::to_chars | 1276.92 | 0.536999 | 94825 | 60 | 56 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1895.6 | 0.924095 | 948240 | 60 | 32 |
| jeaiii::to_text | 1785.72 | 1.08002 | 948228 | 60 | 18 |
| fmt::format_to | 1576.31 | 1.07413 | 948233 | 60 | 22 |
| std::to_chars | 1276.19 | 0.801982 | 948236 | 60 | 54 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3158.68 | 1.0097 | 974 | 60 | 36 |
| jeaiii::to_text | 2467.66 | 0.857736 | 973 | 60 | 57 |
| fmt::format_to | 2271.48 | 0.791464 | 974 | 60 | 18 |
| std::to_chars | 1712.2 | 0.894648 | 974 | 60 | 59 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3676.16 | 0.434481 | 9744 | 60 | 60 |
| jeaiii::to_text | 2793.87 | 0.427576 | 9744 | 60 | 60 |
| fmt::format_to | 2378.19 | 0.437793 | 9742 | 60 | 32 |
| std::to_chars | 1683.16 | 1.00871 | 9744 | 60 | 60 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2962.28 | 0.830216 | 97398 | 60 | 58 |
| jeaiii::to_text | 2443.33 | 0.666491 | 97402 | 60 | 14 |
| fmt::format_to | 2236.8 | 0.640936 | 97405 | 60 | 0 |
| std::to_chars | 1725.83 | 0.597191 | 97405 | 60 | 46 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2965.57 | 0.942098 | 974156 | 60 | 60 |
| jeaiii::to_text | 2426.08 | 1.28104 | 974170 | 60 | 32 |
| fmt::format_to | 2141.92 | 1.36994 | 974156 | 60 | 60 |
| std::to_chars | 1715.37 | 1.07377 | 974143 | 60 | 11 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2823.31 | 0.854928 | 1936 | 60 | 19 |
| jeaiii::to_text | 2330.49 | 0.568417 | 1935 | 60 | 21 |
| fmt::format_to | 1983.12 | 0.567357 | 1935 | 60 | 48 |
| std::to_chars | 1414.45 | 0.630394 | 1935 | 60 | 22 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2944.39 | 0.32395 | 19381 | 60 | 57 |
| fmt::format_to | 1857.56 | 0.157241 | 19380 | 60 | 42 |
| std::to_chars | 1426.6 | 0.193066 | 19381 | 60 | 1 |
| jeaiii::to_text | 1367.86 | 0.812456 | 19380 | 60 | 39 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2827.88 | 0.735951 | 193797 | 60 | 15 |
| jeaiii::to_text | 2216.64 | 0.851656 | 193800 | 60 | 12 |
| fmt::format_to | 1967.76 | 0.678293 | 193800 | 60 | 5 |
| std::to_chars | 1455.96 | 0.526731 | 193798 | 60 | 1 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2815.64 | 1.2069 | 1937944 | 60 | 42 |
| jeaiii::to_text | 2282.54 | 1.22595 | 1937954 | 60 | 40 |
| fmt::format_to | 1959.09 | 1.50402 | 1937962 | 60 | 33 |
| std::to_chars | 1434.39 | 1.26709 | 1937955 | 60 | 41 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5518.3 | 0.754228 | 1987 | 60 | 28 |
| jeaiii::to_text | 3954.44 | 0.545949 | 1987 | 60 | 28 |
| fmt::format_to | 2588.6 | 0.526051 | 1987 | 60 | 60 |
| std::to_chars | 2004.88 | 0.363764 | 1987 | 60 | 60 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5638.77 | 0.28723 | 19880 | 60 | 50 |
| jeaiii::to_text | 3612.18 | 0.684482 | 19879 | 60 | 24 |
| fmt::format_to | 2578.77 | 0.203099 | 19880 | 60 | 47 |
| std::to_chars | 1926.28 | 0.334381 | 19880 | 60 | 1 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4798.05 | 0.853469 | 198808 | 60 | 0 |
| jeaiii::to_text | 3292.19 | 0.965735 | 198795 | 60 | 59 |
| fmt::format_to | 2543.15 | 0.774325 | 198795 | 60 | 56 |
| std::to_chars | 1934.08 | 0.856762 | 198795 | 60 | 59 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5041.2 | 1.376 | 1987963 | 60 | 59 |
| jeaiii::to_text | 3483.13 | 1.08199 | 1987960 | 60 | 4 |
| fmt::format_to | 2414.23 | 1.50036 | 1987949 | 60 | 34 |
| std::to_chars | 1942.91 | 1.3003 | 1987951 | 60 | 37 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5458.82 | 0.876705 | 1888 | 60 | 60 |
| jeaiii::to_text | 3682.27 | 0.548051 | 1888 | 60 | 34 |
| fmt::format_to | 2400.48 | 0.616793 | 1887 | 60 | 20 |
| std::to_chars | 1871.02 | 0.970988 | 1888 | 60 | 28 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5708.19 | 0.368696 | 18881 | 60 | 60 |
| jeaiii::to_text | 3176.65 | 0.426099 | 18880 | 60 | 24 |
| fmt::format_to | 2535.96 | 0.195506 | 18880 | 60 | 14 |
| std::to_chars | 1033.84 | 0.241757 | 18880 | 60 | 15 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4416.19 | 1.09132 | 188796 | 60 | 24 |
| jeaiii::to_text | 3510.52 | 0.730591 | 188793 | 60 | 55 |
| fmt::format_to | 2429.82 | 0.656337 | 188794 | 60 | 31 |
| std::to_chars | 1850.96 | 0.622228 | 188792 | 60 | 49 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4887.26 | 1.432 | 1887943 | 60 | 25 |
| jeaiii::to_text | 3498.26 | 1.26501 | 1887937 | 60 | 20 |
| fmt::format_to | 2384.95 | 1.09389 | 1887938 | 60 | 11 |
| std::to_chars | 1885.08 | 1.02617 | 1887948 | 60 | 60 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3749.83 | 0.593712 | 1940 | 60 | 31 |
| jeaiii::to_text | 2747.4 | 0.468868 | 1940 | 60 | 10 |
| std::to_chars | 1449.04 | 0.514092 | 1939 | 60 | 45 |
| fmt::format_to | 1412.02 | 0.517497 | 1940 | 60 | 16 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 2821.65 | 0.226366 | 19396 | 60 | 55 |
| vn::to_chars | 2623.99 | 2.35213 | 19400 | 60 | 19 |
| fmt::format_to | 1724.27 | 0.702148 | 19401 | 60 | 0 |
| std::to_chars | 1448.97 | 0.23599 | 19401 | 60 | 4 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3286.05 | 1.32586 | 193989 | 60 | 11 |
| jeaiii::to_text | 2524.27 | 0.877384 | 193977 | 60 | 56 |
| fmt::format_to | 1603.79 | 0.547965 | 193983 | 60 | 3 |
| std::to_chars | 1399.14 | 0.534812 | 193985 | 60 | 1 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3319.3 | 1.39068 | 1939739 | 60 | 42 |
| jeaiii::to_text | 2498.98 | 1.34601 | 1939751 | 60 | 37 |
| fmt::format_to | 1561.81 | 1.12713 | 1939765 | 60 | 25 |
| std::to_chars | 1381.03 | 1.15648 | 1939744 | 60 | 39 |
