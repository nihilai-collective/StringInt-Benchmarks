# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 463.796 | 0.701432 | 266 | 60 | 177 |
| vn::to_chars **STATISTICAL TIE** | 463.33 | 0.8568 | 266 | 60 | 48 |
| fmt::format_to **STATISTICAL TIE** | 452.278 | 0.85695 | 266 | 60 | 156 |
| std::to_chars | 282.075 | 0.791235 | 263 | 60 | 254 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 504.306 | 0.23892 | 2647 | 60 | 178 |
| vn::to_chars **STATISTICAL TIE** | 499.728 | 0.267894 | 2650 | 60 | 143 |
| std::to_chars | 394.031 | 0.360532 | 2647 | 60 | 180 |
| fmt::format_to | 345.425 | 0.321221 | 2650 | 60 | 5 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 489.476 | 0.602288 | 26492 | 60 | 31 |
| vn::to_chars | 471.03 | 0.588041 | 26485 | 60 | 44 |
| fmt::format_to | 434.659 | 0.660139 | 26485 | 60 | 43 |
| std::to_chars | 412.463 | 0.374828 | 26490 | 60 | 13 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 490.763 | 0.630319 | 264814 | 60 | 360 |
| vn::to_chars | 474.516 | 0.805447 | 264843 | 60 | 407 |
| fmt::format_to | 465.179 | 0.664274 | 264803 | 60 | 150 |
| std::to_chars | 424.872 | 0.981065 | 264836 | 60 | 395 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1056.64 | 1.03 | 313 | 60 | 130 |
| jeaiii::to_text | 1004.07 | 1.13424 | 314 | 60 | 174 |
| fmt::format_to | 940.419 | 1.08816 | 314 | 60 | 60 |
| std::to_chars | 841.792 | 1.21356 | 314 | 60 | 160 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1136.33 | 0.402866 | 3144 | 60 | 34 |
| jeaiii::to_text | 1089.72 | 0.376384 | 3143 | 60 | 5 |
| fmt::format_to | 1045.63 | 0.324185 | 3145 | 60 | 59 |
| std::to_chars | 844.951 | 0.590637 | 3142 | 60 | 9 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1078.86 | 0.695689 | 31442 | 60 | 377 |
| jeaiii::to_text | 1030.31 | 0.650541 | 31441 | 60 | 177 |
| fmt::format_to | 975.21 | 0.757716 | 31439 | 60 | 120 |
| std::to_chars | 851.491 | 0.566065 | 31437 | 60 | 172 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1101.28 | 0.4945 | 314437 | 60 | 155 |
| jeaiii::to_text | 1052.35 | 0.31526 | 314423 | 60 | 166 |
| fmt::format_to | 1036.93 | 0.33832 | 314431 | 60 | 160 |
| std::to_chars | 850.54 | 0.399795 | 314460 | 60 | 15 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 735.797 | 0.97101 | 215 | 60 | 174 |
| jeaiii::to_text | 707.487 | 0.885651 | 215 | 60 | 175 |
| fmt::format_to | 679.09 | 0.870519 | 215 | 60 | 175 |
| std::to_chars | 565.085 | 1.0249 | 215 | 60 | 179 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 803.591 | 0.288411 | 2153 | 60 | 59 |
| vn::to_chars | 782.459 | 0.300183 | 2151 | 60 | 142 |
| fmt::format_to | 732.53 | 0.254224 | 2152 | 60 | 56 |
| std::to_chars | 586.693 | 0.647224 | 2152 | 60 | 49 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 784.548 | 0.205926 | 21527 | 60 | 741 |
| fmt::format_to | 718.992 | 0.173651 | 21504 | 60 | 413 |
| jeaiii::to_text | 703.173 | 0.262161 | 21503 | 60 | 418 |
| std::to_chars | 618.581 | 0.417618 | 21519 | 60 | 274 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 767.887 | 0.507996 | 215242 | 60 | 53 |
| jeaiii::to_text | 739.165 | 0.984597 | 215255 | 60 | 60 |
| fmt::format_to | 696.126 | 0.362305 | 215241 | 60 | 24 |
| std::to_chars | 588.093 | 1.28891 | 215248 | 60 | 52 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 708.454 | 1.17048 | 257 | 60 | 159 |
| jeaiii::to_text **STATISTICAL TIE** | 684.765 | 0.948006 | 257 | 60 | 130 |
| fmt::format_to | 630.282 | 1.02645 | 257 | 60 | 142 |
| std::to_chars | 400.722 | 0.835478 | 257 | 60 | 55 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 789.467 | 0.35562 | 2569 | 60 | 180 |
| vn::to_chars | 767.981 | 0.410074 | 2569 | 60 | 180 |
| fmt::format_to | 744.788 | 0.457494 | 2570 | 60 | 60 |
| std::to_chars | 628.665 | 0.545877 | 2569 | 60 | 153 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 766.63 | 0.42967 | 25706 | 60 | 360 |
| vn::to_chars **STATISTICAL TIE** | 764.941 | 0.220682 | 25710 | 60 | 848 |
| fmt::format_to | 686.729 | 0.449167 | 25708 | 60 | 158 |
| std::to_chars | 644.133 | 0.53507 | 25706 | 60 | 295 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 762.745 | 0.420631 | 257034 | 60 | 169 |
| vn::to_chars | 744.258 | 0.509365 | 257012 | 60 | 31 |
| fmt::format_to | 699.51 | 0.49013 | 257018 | 60 | 20 |
| std::to_chars | 635.379 | 1.07967 | 257082 | 60 | 287 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 872 | 0.774121 | 516 | 60 | 30 |
| jeaiii::to_text | 845.316 | 0.74226 | 515 | 60 | 55 |
| fmt::format_to | 755.071 | 0.821396 | 515 | 60 | 41 |
| std::to_chars | 601.436 | 0.609387 | 516 | 60 | 12 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 925.79 | 0.942376 | 5161 | 60 | 3 |
| jeaiii::to_text | 877.745 | 0.274802 | 5163 | 60 | 23 |
| fmt::format_to | 789.352 | 0.30087 | 5162 | 60 | 5 |
| std::to_chars | 656.83 | 0.308545 | 5166 | 60 | 57 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 879.57 | 0.502038 | 51622 | 60 | 8 |
| jeaiii::to_text | 823.389 | 0.545283 | 51604 | 60 | 35 |
| fmt::format_to | 754.122 | 0.361764 | 51599 | 60 | 55 |
| std::to_chars | 658.002 | 0.405971 | 51601 | 60 | 53 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 862.919 | 0.793775 | 516099 | 60 | 4 |
| jeaiii::to_text | 825.519 | 0.732708 | 516086 | 60 | 27 |
| fmt::format_to | 736.211 | 0.663713 | 516094 | 60 | 16 |
| std::to_chars | 636.452 | 1.36551 | 516092 | 60 | 10 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1729.43 | 1.12766 | 566 | 60 | 33 |
| jeaiii::to_text | 1514.07 | 0.899216 | 566 | 60 | 33 |
| fmt::format_to | 1238.65 | 0.786068 | 566 | 60 | 17 |
| std::to_chars | 1049.12 | 0.912977 | 565 | 60 | 40 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1958.55 | 0.416719 | 5659 | 60 | 6 |
| jeaiii::to_text | 1652.15 | 0.410069 | 5659 | 60 | 2 |
| fmt::format_to | 1383.72 | 0.334678 | 5658 | 60 | 34 |
| std::to_chars | 1179.1 | 0.547832 | 5659 | 60 | 42 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1748.22 | 0.632682 | 56613 | 60 | 16 |
| jeaiii::to_text | 1425.78 | 0.605244 | 56613 | 60 | 9 |
| fmt::format_to | 1208.77 | 0.721294 | 56619 | 60 | 36 |
| std::to_chars | 1010.27 | 0.501233 | 56613 | 60 | 22 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1857.37 | 0.520807 | 566096 | 60 | 15 |
| jeaiii::to_text | 1523 | 1.06622 | 566125 | 60 | 53 |
| fmt::format_to | 1318.51 | 0.761194 | 566101 | 60 | 47 |
| std::to_chars | 1037.68 | 0.823281 | 566088 | 60 | 19 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1411.43 | 0.991933 | 466 | 60 | 26 |
| jeaiii::to_text | 1245.63 | 1.07324 | 466 | 60 | 16 |
| fmt::format_to | 1101.74 | 0.828482 | 466 | 60 | 20 |
| std::to_chars | 930.14 | 1.08205 | 466 | 60 | 10 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1498.47 | 0.37732 | 4661 | 60 | 60 |
| jeaiii::to_text | 1363.97 | 0.410503 | 4661 | 60 | 39 |
| fmt::format_to | 1212.79 | 0.390805 | 4659 | 60 | 13 |
| std::to_chars | 929.979 | 0.960472 | 4660 | 60 | 37 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1326.76 | 0.642943 | 46609 | 60 | 14 |
| jeaiii::to_text | 1215.69 | 0.782829 | 46607 | 60 | 56 |
| fmt::format_to | 1069.16 | 0.490295 | 46603 | 60 | 20 |
| std::to_chars | 676.85 | 2.77181 | 46600 | 60 | 28 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1425.24 | 0.328686 | 466119 | 60 | 31 |
| jeaiii::to_text | 1272.58 | 0.486654 | 466120 | 60 | 21 |
| fmt::format_to | 1099.38 | 1.27487 | 466119 | 60 | 17 |
| std::to_chars | 943.821 | 0.956923 | 466114 | 60 | 24 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2044.34 | 1.36043 | 482 | 60 | 60 |
| jeaiii::to_text | 1903.6 | 1.55872 | 482 | 60 | 33 |
| fmt::format_to | 1380.9 | 1.12663 | 483 | 60 | 15 |
| std::to_chars | 1177.22 | 0.925415 | 482 | 60 | 32 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2360.93 | 0.537806 | 4830 | 60 | 44 |
| jeaiii::to_text | 2283.77 | 0.499249 | 4829 | 60 | 29 |
| fmt::format_to | 1632.71 | 0.356825 | 4833 | 60 | 52 |
| std::to_chars | 1246.41 | 0.723108 | 4829 | 60 | 19 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1896.3 | 0.383848 | 48309 | 60 | 8 |
| vn::to_chars | 1753.23 | 1.80797 | 48310 | 60 | 60 |
| fmt::format_to | 1455.58 | 0.443922 | 48308 | 60 | 24 |
| std::to_chars | 1160.67 | 0.513934 | 48309 | 60 | 5 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2149.76 | 0.387222 | 483044 | 60 | 27 |
| jeaiii::to_text | 2114.01 | 0.400338 | 483044 | 60 | 27 |
| fmt::format_to | 1518.57 | 0.399084 | 483076 | 60 | 55 |
| std::to_chars | 1233.27 | 1.30656 | 483067 | 60 | 60 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1294.95 | 0.540146 | 996 | 60 | 23 |
| jeaiii::to_text | 1216.64 | 0.59337 | 998 | 60 | 59 |
| fmt::format_to | 1121.7 | 0.554637 | 998 | 60 | 59 |
| std::to_chars | 880.468 | 0.593517 | 998 | 60 | 59 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1282.34 | 0.158164 | 9985 | 60 | 60 |
| vn::to_chars | 962.104 | 0.443021 | 9977 | 60 | 3 |
| std::to_chars | 910.048 | 0.369777 | 9978 | 60 | 36 |
| fmt::format_to | 746.504 | 0.40415 | 9977 | 60 | 25 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1236.73 | 0.579131 | 99834 | 60 | 1 |
| jeaiii::to_text | 1113.17 | 0.676943 | 99830 | 60 | 46 |
| fmt::format_to | 1066.83 | 0.47304 | 99826 | 60 | 22 |
| std::to_chars | 861.143 | 0.360466 | 99823 | 60 | 53 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1276.32 | 0.793359 | 998248 | 60 | 10 |
| jeaiii::to_text | 1206.61 | 1.03917 | 998234 | 60 | 38 |
| fmt::format_to | 1068.81 | 0.972849 | 998216 | 60 | 60 |
| std::to_chars | 850.859 | 0.804471 | 998253 | 60 | 0 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1973.1 | 0.74172 | 1048 | 60 | 60 |
| jeaiii::to_text | 1726.82 | 0.765455 | 1048 | 60 | 60 |
| fmt::format_to | 1505.99 | 0.670436 | 1048 | 60 | 58 |
| std::to_chars | 1236.26 | 0.710331 | 1048 | 60 | 60 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2070.31 | 0.944181 | 10477 | 60 | 60 |
| jeaiii::to_text | 1849.61 | 0.263779 | 10477 | 60 | 59 |
| fmt::format_to | 1584.25 | 0.234802 | 10481 | 60 | 19 |
| std::to_chars | 1250.96 | 0.405057 | 10477 | 60 | 50 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1868.51 | 0.709384 | 104813 | 60 | 128 |
| jeaiii::to_text | 1725.59 | 0.943738 | 104815 | 60 | 139 |
| fmt::format_to | 1466.9 | 0.705465 | 104828 | 60 | 180 |
| std::to_chars | 1180.34 | 0.529465 | 104817 | 60 | 28 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1901.55 | 1.02485 | 1048290 | 60 | 52 |
| jeaiii::to_text | 1762.52 | 1.20937 | 1048283 | 60 | 59 |
| fmt::format_to | 1467.7 | 0.707657 | 1048285 | 60 | 49 |
| std::to_chars | 1146.23 | 1.12824 | 1048297 | 60 | 2 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1804.09 | 0.762768 | 948 | 60 | 56 |
| jeaiii::to_text | 1614.85 | 0.815128 | 948 | 60 | 33 |
| fmt::format_to | 1318.34 | 0.594747 | 948 | 60 | 1 |
| std::to_chars | 1100.95 | 0.63739 | 948 | 60 | 58 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1913.19 | 0.224751 | 9483 | 60 | 15 |
| jeaiii::to_text | 1700.43 | 0.273683 | 9483 | 60 | 60 |
| fmt::format_to | 1383.76 | 0.309116 | 9484 | 60 | 12 |
| std::to_chars | 1119.91 | 0.462691 | 9482 | 60 | 43 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1718.52 | 0.547914 | 94826 | 60 | 0 |
| jeaiii::to_text | 1493.02 | 0.707677 | 94827 | 60 | 13 |
| fmt::format_to | 1276.31 | 0.580766 | 94825 | 60 | 26 |
| std::to_chars | 1087.52 | 0.438595 | 94825 | 60 | 31 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1778.57 | 1.00869 | 948256 | 60 | 55 |
| jeaiii::to_text | 1583.74 | 1.0517 | 948232 | 60 | 7 |
| fmt::format_to | 1339.71 | 0.627504 | 948250 | 60 | 60 |
| std::to_chars | 1039.06 | 1.14779 | 948226 | 60 | 9 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3093.07 | 1.13255 | 974 | 60 | 33 |
| jeaiii::to_text | 2714.57 | 1.11665 | 974 | 60 | 25 |
| fmt::format_to | 1984.84 | 0.875309 | 974 | 60 | 6 |
| std::to_chars | 1404.48 | 0.8449 | 974 | 60 | 32 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3456.85 | 0.385608 | 9740 | 60 | 31 |
| jeaiii::to_text | 2996.18 | 0.51974 | 9736 | 60 | 16 |
| fmt::format_to | 2108.67 | 0.440462 | 9737 | 60 | 15 |
| std::to_chars | 1390.67 | 0.546373 | 9737 | 60 | 14 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2785.43 | 0.649403 | 97409 | 60 | 42 |
| jeaiii::to_text | 2505.18 | 1.08162 | 97413 | 60 | 45 |
| fmt::format_to | 1940.34 | 0.420616 | 97414 | 60 | 10 |
| std::to_chars | 1419.77 | 0.746826 | 97413 | 60 | 3 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2886.77 | 0.966219 | 974128 | 60 | 47 |
| jeaiii::to_text | 2164.51 | 2.70333 | 974121 | 60 | 11 |
| fmt::format_to | 1885.34 | 1.06963 | 974119 | 60 | 60 |
| std::to_chars | 1273.19 | 2.64522 | 974135 | 60 | 0 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2795.48 | 0.57526 | 1938 | 60 | 11 |
| jeaiii::to_text | 2348.79 | 0.519968 | 1938 | 60 | 38 |
| fmt::format_to | 1957.8 | 0.479112 | 1938 | 60 | 27 |
| std::to_chars | 1359.5 | 1.08043 | 1938 | 60 | 14 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2867.15 | 0.41582 | 19385 | 60 | 15 |
| jeaiii::to_text | 2376.02 | 0.414987 | 19385 | 60 | 10 |
| fmt::format_to | 1983.19 | 0.336162 | 19384 | 60 | 31 |
| std::to_chars | 1423.04 | 0.380694 | 19382 | 60 | 60 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2543.3 | 1.21393 | 193796 | 60 | 59 |
| jeaiii::to_text | 2208.92 | 0.684804 | 193799 | 60 | 60 |
| fmt::format_to | 1809.78 | 0.659858 | 193793 | 60 | 9 |
| std::to_chars | 1357.19 | 0.444178 | 193788 | 60 | 22 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2659.41 | 1.06487 | 1937929 | 60 | 3 |
| jeaiii::to_text | 2204.06 | 1.39063 | 1937938 | 60 | 10 |
| fmt::format_to | 1879.6 | 0.978486 | 1937942 | 60 | 9 |
| std::to_chars | 1423.4 | 0.971898 | 1937968 | 60 | 46 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5495.84 | 0.833902 | 1988 | 60 | 34 |
| jeaiii::to_text | 3777.29 | 0.425263 | 1988 | 60 | 21 |
| fmt::format_to | 2508.12 | 0.503356 | 1988 | 60 | 45 |
| std::to_chars | 1944.77 | 0.749241 | 1988 | 60 | 59 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 6014.11 | 0.547571 | 19877 | 60 | 46 |
| jeaiii::to_text | 3966 | 0.537664 | 19877 | 60 | 60 |
| fmt::format_to | 2622.7 | 0.253635 | 19878 | 60 | 2 |
| std::to_chars | 1899.61 | 0.608315 | 19877 | 60 | 3 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4161.32 | 1.69051 | 198796 | 60 | 60 |
| jeaiii::to_text | 3284.22 | 0.715822 | 198800 | 60 | 10 |
| fmt::format_to | 2400.49 | 0.457842 | 198796 | 60 | 59 |
| std::to_chars | 1862.81 | 0.790966 | 198801 | 60 | 11 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4925.86 | 1.266 | 1987931 | 60 | 16 |
| jeaiii::to_text | 3545.45 | 1.41018 | 1987924 | 60 | 0 |
| fmt::format_to | 2391.81 | 1.23604 | 1987931 | 60 | 9 |
| std::to_chars | 1945.24 | 1.10611 | 1987942 | 60 | 43 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5590.72 | 0.803273 | 1888 | 60 | 16 |
| jeaiii::to_text | 3622.06 | 0.418029 | 1888 | 60 | 16 |
| fmt::format_to | 2386.98 | 0.499881 | 1888 | 60 | 1 |
| std::to_chars | 1913.57 | 0.399608 | 1888 | 60 | 40 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 5995.03 | 0.367621 | 18881 | 60 | 43 |
| jeaiii::to_text | 3885.79 | 0.200694 | 18881 | 60 | 46 |
| fmt::format_to | 2518.76 | 0.194521 | 18880 | 60 | 2 |
| std::to_chars | 1958.54 | 0.289779 | 18882 | 60 | 28 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4485.9 | 0.83343 | 188800 | 60 | 30 |
| jeaiii::to_text | 2856.68 | 3.22937 | 188800 | 60 | 60 |
| fmt::format_to | 2235.4 | 0.457366 | 188795 | 60 | 10 |
| std::to_chars | 1779.69 | 0.609325 | 188800 | 60 | 43 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4778.32 | 1.59036 | 1887956 | 60 | 18 |
| jeaiii::to_text | 3437.13 | 1.2555 | 1887966 | 60 | 36 |
| fmt::format_to | 2340.9 | 1.11756 | 1887958 | 60 | 43 |
| std::to_chars | 1824.2 | 1.08162 | 1887955 | 60 | 20 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2053.45 | 1.34719 | 1939 | 60 | 35 |
| jeaiii::to_text | 1449.38 | 0.200641 | 1939 | 60 | 4 |
| fmt::format_to | 974.563 | 0.470821 | 1939 | 60 | 35 |
| std::to_chars | 757.035 | 0.848441 | 1939 | 60 | 5 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3225.42 | 0.852062 | 19397 | 60 | 60 |
| jeaiii::to_text | 2612.58 | 1.22382 | 19397 | 60 | 60 |
| fmt::format_to | 1566.73 | 0.468253 | 19396 | 60 | 50 |
| std::to_chars | 1240.19 | 0.650739 | 19394 | 60 | 36 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2869.35 | 0.659969 | 193983 | 60 | 0 |
| jeaiii::to_text | 2566.81 | 0.765765 | 193972 | 60 | 52 |
| fmt::format_to | 1523.3 | 0.420768 | 193986 | 60 | 4 |
| std::to_chars | 1331.93 | 0.551815 | 193986 | 60 | 10 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3091.95 | 0.949507 | 1939729 | 60 | 9 |
| jeaiii::to_text | 2739.39 | 0.939841 | 1939733 | 60 | 60 |
| fmt::format_to | 1551.96 | 0.96874 | 1939733 | 60 | 60 |
| std::to_chars | 1363.01 | 0.991076 | 1939729 | 60 | 7 |
