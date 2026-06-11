# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 250.305 | 0.337998 | 262 | 60 | 151 |
| std::to_chars **STATISTICAL TIE** | 250.107 | 0.354863 | 261 | 60 | 176 |
| fmt::format_to **STATISTICAL TIE** | 249.721 | 0.324679 | 262 | 60 | 152 |
| vn::to_chars **STATISTICAL TIE** | 249.407 | 0.376183 | 262 | 60 | 152 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 219.772 | 0.586556 | 2648 | 60 | 54 |
| vn::to_chars **STATISTICAL TIE** | 217.9 | 0.553157 | 2645 | 60 | 8 |
| fmt::format_to **STATISTICAL TIE** | 216.049 | 0.525891 | 2646 | 60 | 11 |
| std::to_chars | 134.498 | 0.306421 | 2652 | 60 | 139 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 385.665 | 0.128966 | 26499 | 60 | 43 |
| fmt::format_to | 376.319 | 0.335186 | 26490 | 60 | 57 |
| std::to_chars | 252.001 | 1.47972 | 26488 | 60 | 59 |
| jeaiii::to_text | 218.242 | 0.917379 | 26496 | 60 | 52 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 382.7 | 0.0917093 | 264838 | 60 | 879 |
| fmt::format_to | 375.175 | 0.115273 | 264834 | 60 | 849 |
| jeaiii::to_text | 365.803 | 0.417283 | 264831 | 60 | 844 |
| std::to_chars | 263.251 | 0.156081 | 264870 | 60 | 368 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 302.214 | 0.310816 | 316 | 60 | 168 |
| fmt::format_to **STATISTICAL TIE** | 301.612 | 0.306657 | 316 | 60 | 164 |
| std::to_chars **STATISTICAL TIE** | 301.274 | 0.201696 | 316 | 60 | 165 |
| vn::to_chars **STATISTICAL TIE** | 299.061 | 0.333849 | 314 | 60 | 10 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to **STATISTICAL TIE** | 824.651 | 1.80212 | 3144 | 60 | 402 |
| vn::to_chars **STATISTICAL TIE** | 816.104 | 1.73034 | 3144 | 60 | 42 |
| jeaiii::to_text | 762.138 | 0.905192 | 3144 | 60 | 55 |
| std::to_chars | 504.58 | 0.552102 | 3143 | 60 | 287 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to | 822.504 | 0.174544 | 31445 | 60 | 23 |
| vn::to_chars | 799.453 | 0.189348 | 31442 | 60 | 53 |
| jeaiii::to_text | 778.994 | 0.163118 | 31443 | 60 | 48 |
| std::to_chars | 508.814 | 0.21334 | 31442 | 60 | 13 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to **STATISTICAL TIE** | 789.13 | 0.55294 | 314474 | 60 | 124 |
| vn::to_chars **STATISTICAL TIE** | 770.382 | 1.34529 | 314469 | 60 | 56 |
| jeaiii::to_text **STATISTICAL TIE** | 762.274 | 0.164647 | 314474 | 60 | 151 |
| std::to_chars | 505.342 | 0.213726 | 314419 | 60 | 261 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to **STATISTICAL TIE** | 206.044 | 0.520769 | 216 | 60 | 413 |
| jeaiii::to_text **STATISTICAL TIE** | 205.755 | 0.480125 | 216 | 60 | 412 |
| vn::to_chars **STATISTICAL TIE** | 205.294 | 0.54111 | 214 | 60 | 151 |
| std::to_chars **STATISTICAL TIE** | 204.664 | 0.370019 | 214 | 60 | 383 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 615.874 | 1.77786 | 2152 | 60 | 506 |
| fmt::format_to **STATISTICAL TIE** | 592.408 | 1.8549 | 2150 | 60 | 848 |
| jeaiii::to_text **STATISTICAL TIE** | 575.806 | 1.85405 | 2152 | 60 | 862 |
| std::to_chars | 353.864 | 0.944796 | 2154 | 60 | 365 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 612.027 | 0.241368 | 21523 | 60 | 2 |
| fmt::format_to | 579.173 | 0.225343 | 21522 | 60 | 17 |
| jeaiii::to_text | 556.119 | 0.17446 | 21523 | 60 | 29 |
| std::to_chars | 358.094 | 0.150198 | 21525 | 60 | 46 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 598.772 | 0.307222 | 215255 | 60 | 0 |
| fmt::format_to | 576.099 | 0.121107 | 215215 | 60 | 36 |
| jeaiii::to_text | 554.532 | 0.183892 | 215224 | 60 | 17 |
| std::to_chars | 351.012 | 0.183369 | 215249 | 60 | 4 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 247.383 | 0.543627 | 258 | 60 | 169 |
| jeaiii::to_text **STATISTICAL TIE** | 246.942 | 0.494153 | 258 | 60 | 163 |
| std::to_chars **STATISTICAL TIE** | 246.721 | 0.314564 | 258 | 60 | 177 |
| fmt::format_to **STATISTICAL TIE** | 246.411 | 0.418441 | 258 | 60 | 164 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 585.831 | 1.17172 | 2577 | 60 | 53 |
| fmt::format_to | 518.236 | 1.2908 | 2577 | 60 | 53 |
| std::to_chars | 367.682 | 0.957975 | 2576 | 60 | 33 |
| vn::to_chars | 298.708 | 0.673429 | 2577 | 60 | 36 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 552.339 | 0.422099 | 25713 | 60 | 5 |
| fmt::format_to | 511.894 | 0.222989 | 25712 | 60 | 18 |
| std::to_chars | 367.409 | 0.329974 | 25704 | 60 | 28 |
| jeaiii::to_text | 324.019 | 0.501597 | 25707 | 60 | 1 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 578.424 | 0.148238 | 257039 | 60 | 59 |
| vn::to_chars | 523.366 | 1.5984 | 257039 | 60 | 60 |
| fmt::format_to | 510.47 | 0.147774 | 257028 | 60 | 21 |
| std::to_chars | 325.83 | 2.10378 | 257036 | 60 | 151 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::to_chars **STATISTICAL TIE** | 492.477 | 0.173903 | 516 | 60 | 404 |
| jeaiii::to_text **STATISTICAL TIE** | 492.157 | 0.213016 | 515 | 60 | 143 |
| vn::to_chars **STATISTICAL TIE** | 491.347 | 0.196228 | 514 | 60 | 879 |
| fmt::format_to **STATISTICAL TIE** | 491.275 | 0.21239 | 515 | 60 | 145 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 687.464 | 0.646751 | 5164 | 60 | 844 |
| jeaiii::to_text **STATISTICAL TIE** | 673.506 | 0.822162 | 5169 | 60 | 56 |
| fmt::format_to | 627.883 | 0.646941 | 5156 | 60 | 414 |
| std::to_chars | 520.906 | 0.676572 | 5156 | 60 | 414 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 688.851 | 0.255242 | 51611 | 60 | 4 |
| jeaiii::to_text | 669.952 | 0.386084 | 51623 | 60 | 27 |
| fmt::format_to | 632.631 | 0.246502 | 51611 | 60 | 59 |
| std::to_chars | 521.976 | 0.550514 | 51611 | 60 | 59 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 689.849 | 0.077069 | 516098 | 60 | 161 |
| jeaiii::to_text | 666.508 | 0.0952404 | 516086 | 60 | 136 |
| fmt::format_to | 632.972 | 0.0863822 | 516096 | 60 | 144 |
| std::to_chars | 500.687 | 0.645831 | 516078 | 60 | 127 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to **STATISTICAL TIE** | 541.38 | 0.141255 | 566 | 60 | 890 |
| jeaiii::to_text **STATISTICAL TIE** | 540.133 | 0.157175 | 565 | 60 | 863 |
| vn::to_chars **STATISTICAL TIE** | 539.303 | 0.186572 | 565 | 60 | 418 |
| std::to_chars **STATISTICAL TIE** | 539.275 | 0.160871 | 565 | 60 | 418 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1161.78 | 1.40159 | 5665 | 60 | 18 |
| fmt::format_to | 1097.01 | 0.991284 | 5664 | 60 | 0 |
| std::to_chars | 863.877 | 0.877641 | 5664 | 60 | 21 |
| vn::to_chars | 684.785 | 0.824802 | 5662 | 60 | 60 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1327.78 | 0.238308 | 56624 | 60 | 29 |
| jeaiii::to_text | 1174.07 | 0.162092 | 56622 | 60 | 50 |
| fmt::format_to | 1094.79 | 0.213484 | 56618 | 60 | 2 |
| std::to_chars | 876.471 | 0.219633 | 56627 | 60 | 18 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1202.07 | 2.29896 | 566099 | 60 | 47 |
| jeaiii::to_text | 1107.12 | 1.65758 | 566087 | 60 | 49 |
| fmt::format_to | 1040 | 1.26268 | 566114 | 60 | 138 |
| std::to_chars | 775.027 | 1.617 | 566090 | 60 | 2 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fmt::format_to **STATISTICAL TIE** | 447.114 | 0.185905 | 467 | 60 | 390 |
| std::to_chars **STATISTICAL TIE** | 446.919 | 0.186621 | 467 | 60 | 865 |
| vn::to_chars **STATISTICAL TIE** | 446.233 | 0.197317 | 467 | 60 | 25 |
| jeaiii::to_text **STATISTICAL TIE** | 444.326 | 0.221902 | 466 | 60 | 873 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1116.28 | 0.929236 | 4661 | 60 | 56 |
| fmt::format_to | 948.95 | 1.36773 | 4663 | 60 | 2 |
| jeaiii::to_text | 482.35 | 0.581453 | 4660 | 60 | 170 |
| std::to_chars | 292.398 | 0.962407 | 4659 | 60 | 146 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 966.398 | 0.167884 | 46623 | 60 | 9 |
| fmt::format_to | 952.149 | 0.4563 | 46619 | 60 | 59 |
| std::to_chars | 711.055 | 0.532602 | 46614 | 60 | 129 |
| vn::to_chars | 592.588 | 0.5946 | 46612 | 60 | 120 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1066.62 | 1.21537 | 466083 | 60 | 132 |
| fmt::format_to | 896.933 | 1.37878 | 466101 | 60 | 408 |
| jeaiii::to_text | 867.02 | 0.76278 | 466076 | 60 | 858 |
| std::to_chars | 700.416 | 0.30133 | 466128 | 60 | 291 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 463.168 | 0.144435 | 485 | 60 | 895 |
| std::to_chars | 459.787 | 0.105946 | 482 | 60 | 361 |
| vn::to_chars | 459.465 | 0.0863008 | 481 | 60 | 159 |
| fmt::format_to | 459.269 | 0.111513 | 481 | 60 | 362 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1958.39 | 2.54823 | 4831 | 60 | 56 |
| jeaiii::to_text **STATISTICAL TIE** | 1855.54 | 2.65909 | 4830 | 60 | 175 |
| fmt::format_to | 1317.62 | 1.88303 | 4828 | 60 | 362 |
| std::to_chars | 867.631 | 1.09876 | 4830 | 60 | 60 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1872.21 | 0.26345 | 48307 | 60 | 41 |
| jeaiii::to_text | 1751.17 | 0.549603 | 48307 | 60 | 0 |
| fmt::format_to | 1329.28 | 0.236408 | 48304 | 60 | 19 |
| std::to_chars | 852.844 | 0.301104 | 48309 | 60 | 10 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1862.16 | 0.688636 | 483071 | 60 | 130 |
| jeaiii::to_text | 1769.65 | 0.107268 | 483045 | 60 | 53 |
| fmt::format_to | 1284.57 | 0.118995 | 483070 | 60 | 148 |
| std::to_chars | 850.727 | 0.148721 | 483042 | 60 | 59 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 953.804 | 0.0854291 | 1000 | 60 | 134 |
| vn::to_chars **STATISTICAL TIE** | 952.796 | 0.0918029 | 998 | 60 | 874 |
| fmt::format_to | 908.906 | 2.1367 | 999 | 60 | 154 |
| std::to_chars | 826.208 | 3.31008 | 1000 | 60 | 176 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1113.07 | 0.759735 | 9984 | 60 | 56 |
| jeaiii::to_text | 987.84 | 1.30585 | 9984 | 60 | 3 |
| fmt::format_to | 770.13 | 0.507584 | 9984 | 60 | 5 |
| std::to_chars | 644.588 | 0.372313 | 9984 | 60 | 21 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1114.59 | 0.219369 | 99818 | 60 | 48 |
| jeaiii::to_text | 999.015 | 0.180459 | 99828 | 60 | 57 |
| fmt::format_to | 781.892 | 0.197668 | 99823 | 60 | 59 |
| std::to_chars | 655.472 | 0.171706 | 99825 | 60 | 56 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1107.68 | 0.108972 | 998283 | 60 | 180 |
| jeaiii::to_text | 998.371 | 0.102427 | 998266 | 60 | 3 |
| fmt::format_to | 773.747 | 0.0940491 | 998198 | 60 | 121 |
| std::to_chars | 644.453 | 0.215985 | 998277 | 60 | 51 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 982.276 | 1.27472 | 1048 | 60 | 9 |
| jeaiii::to_text | 899.084 | 2.89249 | 1047 | 60 | 5 |
| fmt::format_to | 632.811 | 4.5542 | 1047 | 60 | 3 |
| std::to_chars | 374.397 | 2.5119 | 1046 | 60 | 58 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1784.71 | 1.21396 | 10484 | 60 | 4 |
| jeaiii::to_text | 1418.97 | 0.74385 | 10480 | 60 | 55 |
| fmt::format_to | 997.488 | 0.477171 | 10480 | 60 | 53 |
| std::to_chars | 838.68 | 0.410155 | 10484 | 60 | 4 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1730.7 | 0.141234 | 104821 | 60 | 26 |
| jeaiii::to_text | 1407.96 | 0.192154 | 104821 | 60 | 27 |
| fmt::format_to | 994.793 | 0.26572 | 104821 | 60 | 3 |
| std::to_chars | 831.468 | 0.352574 | 104830 | 60 | 56 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1583.58 | 1.94469 | 1048264 | 60 | 36 |
| jeaiii::to_text | 1351.23 | 1.44855 | 1048273 | 60 | 58 |
| fmt::format_to | 994.994 | 0.0909258 | 1048248 | 60 | 1 |
| std::to_chars | 720.722 | 1.6868 | 1048260 | 60 | 46 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 907.128 | 0.10101 | 950 | 60 | 24 |
| fmt::format_to **STATISTICAL TIE** | 905.24 | 0.0685687 | 948 | 60 | 174 |
| jeaiii::to_text **STATISTICAL TIE** | 903.8 | 0.0913234 | 948 | 60 | 890 |
| std::to_chars | 354.43 | 2.64478 | 948 | 60 | 7 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1628.26 | 1.18332 | 9485 | 60 | 38 |
| jeaiii::to_text | 1276.03 | 0.497353 | 9484 | 60 | 34 |
| fmt::format_to | 901.027 | 0.433687 | 9484 | 60 | 28 |
| std::to_chars | 777.615 | 0.550887 | 9482 | 60 | 9 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1578.33 | 1.46231 | 94821 | 60 | 39 |
| jeaiii::to_text | 1268.32 | 0.554333 | 94824 | 60 | 60 |
| fmt::format_to | 879.686 | 0.913161 | 94817 | 60 | 37 |
| std::to_chars | 720.011 | 1.94804 | 94823 | 60 | 56 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1595.84 | 0.569007 | 948254 | 60 | 37 |
| jeaiii::to_text | 1186.74 | 1.70261 | 948251 | 60 | 12 |
| fmt::format_to | 827.988 | 1.5632 | 948251 | 60 | 59 |
| std::to_chars | 716.57 | 1.85648 | 948259 | 60 | 46 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::to_chars **STATISTICAL TIE** | 928.343 | 0.0533234 | 973 | 60 | 147 |
| fmt::format_to **STATISTICAL TIE** | 928.316 | 0.066524 | 973 | 60 | 147 |
| vn::to_chars **STATISTICAL TIE** | 928.315 | 0.0908508 | 973 | 60 | 146 |
| jeaiii::to_text **STATISTICAL TIE** | 928.288 | 0.0834248 | 973 | 60 | 148 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 2222.12 | 1.12731 | 9742 | 60 | 46 |
| vn::to_chars | 1155.46 | 0.724243 | 9743 | 60 | 9 |
| std::to_chars | 1017.03 | 0.47422 | 9743 | 60 | 8 |
| fmt::format_to | 631.219 | 0.413917 | 9742 | 60 | 59 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2571.43 | 0.155566 | 97413 | 60 | 18 |
| jeaiii::to_text | 2219.46 | 0.193804 | 97413 | 60 | 10 |
| fmt::format_to | 1384.66 | 0.275832 | 97399 | 60 | 47 |
| std::to_chars | 1003.3 | 0.280675 | 97401 | 60 | 39 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2576.08 | 0.132784 | 974134 | 60 | 8 |
| jeaiii::to_text | 2224.16 | 0.151617 | 974139 | 60 | 9 |
| fmt::format_to | 1388.99 | 0.0927758 | 974174 | 60 | 57 |
| std::to_chars | 1005.94 | 0.105653 | 974166 | 60 | 59 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1849.84 | 0.048723 | 1939 | 60 | 27 |
| jeaiii::to_text | 1767.57 | 1.98027 | 1938 | 60 | 0 |
| fmt::format_to | 1448.25 | 4.1237 | 1938 | 60 | 1 |
| std::to_chars | 1048.08 | 3.90854 | 1939 | 60 | 29 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2271.46 | 0.525387 | 19377 | 60 | 60 |
| jeaiii::to_text | 1607.77 | 0.568441 | 19378 | 60 | 51 |
| fmt::format_to | 1279.42 | 0.475186 | 19382 | 60 | 5 |
| std::to_chars | 1002.54 | 0.349957 | 19381 | 60 | 28 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2262.38 | 0.198762 | 193805 | 60 | 3 |
| jeaiii::to_text | 1610.04 | 0.170781 | 193803 | 60 | 10 |
| fmt::format_to | 1281.82 | 0.169169 | 193805 | 60 | 41 |
| std::to_chars | 1005.98 | 0.133397 | 193805 | 60 | 41 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1959.39 | 3.00806 | 1937902 | 60 | 53 |
| jeaiii::to_text | 1484.24 | 1.85058 | 1937973 | 60 | 1 |
| fmt::format_to | 1179.79 | 1.5378 | 1937972 | 60 | 20 |
| std::to_chars | 826.785 | 2.25304 | 1937915 | 60 | 60 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1895.58 | 0.0331507 | 1987 | 60 | 5 |
| fmt::format_to | 1548.54 | 3.8456 | 1988 | 60 | 34 |
| std::to_chars | 1267.15 | 4.83362 | 1987 | 60 | 1 |
| jeaiii::to_text | 879.383 | 1.92409 | 1987 | 60 | 57 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 2629.85 | 0.709347 | 19883 | 60 | 41 |
| vn::to_chars | 1549.92 | 0.490559 | 19880 | 60 | 2 |
| fmt::format_to | 1421.9 | 0.45474 | 19879 | 60 | 1 |
| std::to_chars | 1166.82 | 0.543693 | 19883 | 60 | 41 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4308.49 | 0.220295 | 198800 | 60 | 40 |
| jeaiii::to_text | 2568.53 | 1.37466 | 198801 | 60 | 55 |
| fmt::format_to | 1386.01 | 0.945669 | 198799 | 60 | 1 |
| std::to_chars | 1153.01 | 1.43427 | 198800 | 60 | 38 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4322.49 | 0.190657 | 1987961 | 60 | 39 |
| jeaiii::to_text | 2643.55 | 0.122479 | 1987962 | 60 | 14 |
| fmt::format_to | 1358.22 | 1.26059 | 1987967 | 60 | 18 |
| std::to_chars | 1176.59 | 0.239928 | 1987952 | 60 | 54 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 1801.12 | 0.0208495 | 1888 | 60 | 0 |
| vn::to_chars **STATISTICAL TIE** | 1800.95 | 0.0268842 | 1888 | 60 | 1 |
| fmt::format_to | 1560.74 | 3.31989 | 1888 | 60 | 272 |
| std::to_chars | 1305.78 | 4.4687 | 1888 | 60 | 133 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4381.01 | 0.910664 | 18878 | 60 | 2 |
| jeaiii::to_text | 2329.18 | 0.907146 | 18879 | 60 | 60 |
| fmt::format_to | 1345.38 | 0.471145 | 18878 | 60 | 7 |
| std::to_chars | 1123.67 | 0.331048 | 18879 | 60 | 52 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4369.71 | 0.235981 | 188791 | 60 | 60 |
| jeaiii::to_text | 2348.58 | 0.285041 | 188788 | 60 | 54 |
| fmt::format_to | 1342.48 | 0.204137 | 188793 | 60 | 2 |
| std::to_chars | 1092.04 | 0.782408 | 188789 | 60 | 48 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4199.7 | 1.78231 | 1887954 | 60 | 60 |
| jeaiii::to_text | 2322.52 | 1.35567 | 1887957 | 60 | 50 |
| fmt::format_to | 1261.3 | 1.56107 | 1887938 | 60 | 9 |
| std::to_chars | 1139.35 | 0.079936 | 1887937 | 60 | 1 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 1849.11 | 0.0496229 | 1938 | 60 | 123 |
| jeaiii::to_text **STATISTICAL TIE** | 1848.84 | 0.0389195 | 1938 | 60 | 123 |
| fmt::format_to | 1248.88 | 4.599 | 1940 | 60 | 153 |
| std::to_chars | 987.267 | 3.02773 | 1941 | 60 | 171 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 2044.55 | 1.13593 | 19394 | 60 | 11 |
| vn::to_chars | 1297.03 | 0.511922 | 19394 | 60 | 13 |
| std::to_chars | 922.621 | 0.135803 | 19394 | 60 | 34 |
| fmt::format_to | 472.249 | 0.781101 | 19394 | 60 | 22 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2770.79 | 0.232378 | 193963 | 60 | 297 |
| jeaiii::to_text | 2072.19 | 0.273062 | 193978 | 60 | 147 |
| std::to_chars | 886.78 | 1.67383 | 193977 | 60 | 145 |
| fmt::format_to | 827.211 | 2.31842 | 193976 | 60 | 180 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2775.79 | 0.0888136 | 1939745 | 60 | 123 |
| jeaiii::to_text | 2083.26 | 0.068915 | 1939777 | 60 | 180 |
| fmt::format_to | 897.86 | 0.0442386 | 1939760 | 60 | 142 |
| std::to_chars | 833.147 | 1.7403 | 1939762 | 60 | 24 |
