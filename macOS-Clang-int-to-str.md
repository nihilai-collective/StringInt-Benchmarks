# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 368.852 | 0.761966 | 263 | 60 | 420 |
| jeaiii::to_text | 355.756 | 0.57906 | 262 | 60 | 405 |
| std::to_chars | 341.168 | 0.651454 | 263 | 60 | 403 |
| fmt::format_to | 339.884 | 0.698393 | 263 | 60 | 420 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 385.12 | 0.303806 | 2649 | 60 | 130 |
| jeaiii::to_text | 370.971 | 0.235276 | 2645 | 60 | 0 |
| fmt::format_to | 354.359 | 0.258557 | 2649 | 60 | 38 |
| std::to_chars | 352.609 | 0.257533 | 2649 | 60 | 57 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 417.935 | 0.170767 | 26475 | 60 | 14 |
| jeaiii::to_text | 403.59 | 0.300844 | 26474 | 60 | 60 |
| fmt::format_to | 388.5 | 0.082085 | 26477 | 60 | 23 |
| std::to_chars | 327.806 | 0.810595 | 26474 | 60 | 56 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 416.984 | 0.102771 | 264745 | 60 | 27 |
| jeaiii::to_text | 406.409 | 0.152398 | 264849 | 60 | 178 |
| std::to_chars | 393.809 | 0.358964 | 264885 | 60 | 130 |
| fmt::format_to | 384.642 | 0.0891033 | 264768 | 60 | 16 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 786.809 | 0.948851 | 315 | 60 | 51 |
| jeaiii::to_text | 741.942 | 1.02024 | 314 | 60 | 156 |
| std::to_chars | 720.125 | 0.884355 | 312 | 60 | 406 |
| fmt::format_to | 691.407 | 0.818046 | 313 | 60 | 399 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 792.484 | 0.552161 | 3143 | 60 | 17 |
| jeaiii::to_text | 766.489 | 0.386982 | 3143 | 60 | 21 |
| std::to_chars | 720.531 | 0.501937 | 3143 | 60 | 17 |
| fmt::format_to | 682.028 | 0.613454 | 3143 | 60 | 24 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 813.433 | 0.337086 | 31443 | 60 | 47 |
| jeaiii::to_text | 800.886 | 0.336934 | 31441 | 60 | 2 |
| std::to_chars | 738.743 | 0.337978 | 31450 | 60 | 24 |
| fmt::format_to | 710.869 | 0.401074 | 31443 | 60 | 7 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 872.994 | 0.133491 | 314457 | 60 | 900 |
| jeaiii::to_text | 845.823 | 0.111913 | 314454 | 60 | 372 |
| std::to_chars | 834.25 | 0.176369 | 314448 | 60 | 58 |
| fmt::format_to | 766.596 | 0.081771 | 314470 | 60 | 255 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 597.349 | 1.1179 | 215 | 60 | 171 |
| jeaiii::to_text | 536.665 | 1.11448 | 214 | 60 | 397 |
| std::to_chars | 529.309 | 0.976632 | 214 | 60 | 403 |
| fmt::format_to | 485.918 | 1.01001 | 214 | 60 | 398 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 645.125 | 0.36401 | 2149 | 60 | 58 |
| jeaiii::to_text | 575.53 | 0.316394 | 2148 | 60 | 21 |
| std::to_chars | 539.629 | 0.295833 | 2147 | 60 | 51 |
| fmt::format_to | 512.705 | 0.266982 | 2148 | 60 | 23 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 653.998 | 0.134169 | 21527 | 60 | 58 |
| jeaiii::to_text | 584.227 | 0.161969 | 21519 | 60 | 2 |
| std::to_chars | 572.197 | 0.116083 | 21529 | 60 | 12 |
| fmt::format_to | 518.613 | 0.121928 | 21527 | 60 | 50 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 646.25 | 0.251131 | 215229 | 60 | 40 |
| std::to_chars | 615.136 | 0.164649 | 215249 | 60 | 2 |
| jeaiii::to_text | 583.889 | 0.125341 | 215251 | 60 | 5 |
| fmt::format_to | 497.438 | 0.250814 | 215244 | 60 | 28 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 620.164 | 0.962816 | 258 | 60 | 867 |
| vn::to_chars | 559.721 | 1.2328 | 258 | 60 | 364 |
| fmt::format_to | 544.911 | 1.06717 | 256 | 60 | 403 |
| std::to_chars | 521.077 | 1.04606 | 256 | 60 | 406 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 604.207 | 0.375728 | 2569 | 60 | 60 |
| vn::to_chars | 595.102 | 0.348176 | 2567 | 60 | 18 |
| fmt::format_to | 538.031 | 0.350942 | 2566 | 60 | 36 |
| std::to_chars | 508.169 | 0.334255 | 2567 | 60 | 28 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 629.101 | 0.148017 | 25710 | 60 | 173 |
| vn::to_chars | 611.711 | 0.179875 | 25707 | 60 | 179 |
| fmt::format_to | 584.744 | 0.150294 | 25698 | 60 | 141 |
| std::to_chars | 542.097 | 0.129857 | 25701 | 60 | 11 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 625.999 | 0.141428 | 257022 | 60 | 8 |
| vn::to_chars | 606.688 | 0.125668 | 257018 | 60 | 2 |
| fmt::format_to | 586.81 | 0.127545 | 257054 | 60 | 53 |
| std::to_chars | 551.475 | 0.120685 | 257054 | 60 | 47 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 747.896 | 0.741514 | 516 | 60 | 4 |
| jeaiii::to_text | 665.657 | 0.848266 | 515 | 60 | 59 |
| fmt::format_to | 638.113 | 0.760024 | 515 | 60 | 59 |
| std::to_chars | 581.386 | 0.755116 | 515 | 60 | 17 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 769.578 | 0.263152 | 5160 | 60 | 45 |
| jeaiii::to_text | 687.965 | 0.272534 | 5158 | 60 | 27 |
| fmt::format_to | 666.286 | 0.234352 | 5161 | 60 | 59 |
| std::to_chars | 609.519 | 0.234258 | 5156 | 60 | 9 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 777.319 | 0.176134 | 51594 | 60 | 60 |
| jeaiii::to_text | 716.805 | 0.160097 | 51615 | 60 | 25 |
| fmt::format_to | 673.424 | 0.170535 | 51599 | 60 | 46 |
| std::to_chars | 656.868 | 0.151715 | 51625 | 60 | 2 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 770.543 | 0.0785354 | 516064 | 60 | 398 |
| jeaiii::to_text | 714.072 | 0.0652346 | 516147 | 60 | 885 |
| std::to_chars | 705.994 | 0.33114 | 516046 | 60 | 60 |
| fmt::format_to | 669.728 | 0.0580222 | 516030 | 60 | 59 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1360.01 | 1.12069 | 565 | 60 | 158 |
| jeaiii::to_text | 1143.19 | 1.00705 | 565 | 60 | 179 |
| std::to_chars | 1082.72 | 0.860907 | 565 | 60 | 161 |
| fmt::format_to | 1001.81 | 0.751977 | 565 | 60 | 143 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1433.45 | 0.356083 | 5658 | 60 | 6 |
| jeaiii::to_text | 1217.44 | 0.298537 | 5662 | 60 | 46 |
| fmt::format_to | 1085.33 | 0.258607 | 5662 | 60 | 46 |
| std::to_chars | 1029.38 | 0.311838 | 5661 | 60 | 48 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1466.27 | 0.130958 | 56611 | 60 | 1 |
| jeaiii::to_text | 1234.93 | 0.102942 | 56609 | 60 | 52 |
| std::to_chars | 1128.34 | 0.157748 | 56608 | 60 | 4 |
| fmt::format_to | 1092.39 | 0.0973384 | 56607 | 60 | 27 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1439.66 | 0.124935 | 566085 | 60 | 56 |
| std::to_chars | 1262.04 | 0.128167 | 566100 | 60 | 33 |
| jeaiii::to_text | 1227.42 | 0.161916 | 566091 | 60 | 15 |
| fmt::format_to | 1093.24 | 0.0895783 | 566085 | 60 | 56 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1167.22 | 1.10949 | 467 | 60 | 167 |
| jeaiii::to_text | 948.426 | 1.0502 | 466 | 60 | 159 |
| std::to_chars | 911.474 | 0.8846 | 466 | 60 | 180 |
| fmt::format_to | 842.82 | 1.1853 | 465 | 60 | 19 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1222.9 | 0.346517 | 4661 | 60 | 11 |
| jeaiii::to_text | 995.537 | 0.32585 | 4661 | 60 | 21 |
| std::to_chars | 974.352 | 0.387988 | 4660 | 60 | 60 |
| fmt::format_to | 890.254 | 0.302347 | 4660 | 60 | 59 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1260.38 | 0.128904 | 46606 | 60 | 42 |
| jeaiii::to_text | 1017.42 | 0.376592 | 46603 | 60 | 50 |
| std::to_chars | 998.438 | 0.198343 | 46609 | 60 | 32 |
| fmt::format_to | 901.332 | 0.129424 | 46606 | 60 | 42 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1269.64 | 0.249431 | 466130 | 60 | 58 |
| std::to_chars | 1067.24 | 0.191804 | 466126 | 60 | 50 |
| jeaiii::to_text | 1006.39 | 0.348641 | 466128 | 60 | 60 |
| fmt::format_to | 906.024 | 0.0999345 | 466110 | 60 | 21 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1735.58 | 1.34761 | 484 | 60 | 32 |
| jeaiii::to_text | 1457.59 | 1.44634 | 483 | 60 | 44 |
| fmt::format_to | 1376.56 | 1.2553 | 483 | 60 | 8 |
| std::to_chars | 1302.93 | 1.20565 | 484 | 60 | 35 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1833.51 | 0.402106 | 4828 | 60 | 44 |
| jeaiii::to_text | 1561.38 | 0.444379 | 4832 | 60 | 4 |
| fmt::format_to | 1404.8 | 0.342295 | 4833 | 60 | 12 |
| std::to_chars | 1371.17 | 0.388996 | 4832 | 60 | 1 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1865.32 | 0.159765 | 48308 | 60 | 42 |
| jeaiii::to_text | 1682.05 | 0.150241 | 48308 | 60 | 42 |
| std::to_chars | 1480.66 | 0.138279 | 48311 | 60 | 35 |
| fmt::format_to | 1459.49 | 0.130296 | 48308 | 60 | 42 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1852.71 | 0.184234 | 483056 | 60 | 34 |
| jeaiii::to_text | 1674.88 | 0.225551 | 483071 | 60 | 43 |
| std::to_chars | 1657.91 | 0.17611 | 483076 | 60 | 60 |
| fmt::format_to | 1454.27 | 0.2466 | 483049 | 60 | 28 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1184.77 | 0.670415 | 997 | 60 | 60 |
| jeaiii::to_text | 1030.77 | 0.572056 | 997 | 60 | 258 |
| std::to_chars | 1015.79 | 0.447878 | 998 | 60 | 148 |
| fmt::format_to | 974.471 | 0.579205 | 998 | 60 | 511 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1228.29 | 0.22228 | 9986 | 60 | 11 |
| jeaiii::to_text | 1063.13 | 0.180344 | 9987 | 60 | 60 |
| std::to_chars | 1047.67 | 0.26479 | 9987 | 60 | 59 |
| fmt::format_to | 1019.73 | 0.201728 | 9989 | 60 | 30 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1236.11 | 0.223769 | 99823 | 60 | 55 |
| jeaiii::to_text | 1060.88 | 0.147779 | 99806 | 60 | 174 |
| std::to_chars | 1055.03 | 0.155104 | 99823 | 60 | 417 |
| fmt::format_to | 998.731 | 0.111291 | 99835 | 60 | 361 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1231.72 | 0.0646391 | 998265 | 60 | 55 |
| std::to_chars | 1140.69 | 0.20229 | 998221 | 60 | 33 |
| jeaiii::to_text | 1132.9 | 0.0664322 | 998275 | 60 | 54 |
| fmt::format_to | 1012.56 | 0.0692282 | 998187 | 60 | 17 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1822.05 | 0.833124 | 1049 | 60 | 37 |
| std::to_chars | 1503.93 | 0.615051 | 1049 | 60 | 40 |
| jeaiii::to_text | 1449.28 | 0.929798 | 1047 | 60 | 8 |
| fmt::format_to | 1306.31 | 0.621096 | 1047 | 60 | 2 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1914.34 | 0.244142 | 10483 | 60 | 48 |
| jeaiii::to_text | 1576.77 | 0.222605 | 10484 | 60 | 9 |
| std::to_chars | 1529.2 | 0.325886 | 10485 | 60 | 41 |
| fmt::format_to | 1376.65 | 0.213278 | 10482 | 60 | 20 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1881.09 | 0.390402 | 104825 | 60 | 34 |
| std::to_chars | 1623.21 | 0.089985 | 104825 | 60 | 49 |
| jeaiii::to_text | 1575.39 | 0.261138 | 104823 | 60 | 17 |
| fmt::format_to | 1374.78 | 0.193761 | 104824 | 60 | 43 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1782.22 | 0.169463 | 1048233 | 60 | 30 |
| std::to_chars | 1644.12 | 0.259272 | 1048236 | 60 | 33 |
| jeaiii::to_text | 1576.97 | 0.230027 | 1048256 | 60 | 58 |
| fmt::format_to | 1279.44 | 0.208272 | 1048238 | 60 | 34 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1675.14 | 1.01872 | 948 | 60 | 8 |
| jeaiii::to_text | 1403.52 | 0.63858 | 948 | 60 | 39 |
| std::to_chars | 1327.42 | 0.616851 | 948 | 60 | 39 |
| fmt::format_to | 1201.78 | 0.658687 | 948 | 60 | 54 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1724.55 | 0.286246 | 9479 | 60 | 60 |
| jeaiii::to_text | 1453.4 | 0.215508 | 9478 | 60 | 28 |
| std::to_chars | 1364.92 | 0.308235 | 9478 | 60 | 15 |
| fmt::format_to | 1252.1 | 0.228555 | 9478 | 60 | 59 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1787.64 | 0.113744 | 94828 | 60 | 15 |
| std::to_chars | 1477.64 | 0.225514 | 94831 | 60 | 2 |
| jeaiii::to_text | 1457.21 | 0.13271 | 94830 | 60 | 18 |
| fmt::format_to | 1253.83 | 0.186084 | 94831 | 60 | 2 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1767.69 | 0.152357 | 948283 | 60 | 8 |
| std::to_chars | 1593.34 | 0.119608 | 948309 | 60 | 23 |
| jeaiii::to_text | 1526.99 | 0.155996 | 948297 | 60 | 32 |
| fmt::format_to | 1241.85 | 0.119686 | 948268 | 60 | 5 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2655.27 | 1.17785 | 974 | 60 | 244 |
| std::to_chars | 2071.08 | 0.873894 | 974 | 60 | 179 |
| jeaiii::to_text | 2061.2 | 0.94659 | 973 | 60 | 856 |
| fmt::format_to | 1817.98 | 0.867515 | 974 | 60 | 363 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2797.58 | 0.433699 | 9743 | 60 | 34 |
| jeaiii::to_text | 2197.13 | 0.340901 | 9743 | 60 | 31 |
| std::to_chars | 2014.1 | 0.339232 | 9740 | 60 | 21 |
| fmt::format_to | 1899.41 | 0.302449 | 9743 | 60 | 42 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2810.64 | 0.147667 | 97412 | 60 | 14 |
| jeaiii::to_text | 2205.29 | 0.106612 | 97402 | 60 | 49 |
| std::to_chars | 2205.11 | 0.114806 | 97419 | 60 | 368 |
| fmt::format_to | 1916.79 | 0.0854867 | 97407 | 60 | 28 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2826.6 | 0.163503 | 974171 | 60 | 58 |
| std::to_chars | 2359.66 | 0.215555 | 974176 | 60 | 56 |
| jeaiii::to_text | 2201.16 | 0.122032 | 974160 | 60 | 27 |
| fmt::format_to | 1903.28 | 0.110234 | 974168 | 60 | 49 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2621.3 | 0.750468 | 1938 | 60 | 53 |
| jeaiii::to_text | 1973.38 | 0.616875 | 1938 | 60 | 58 |
| std::to_chars | 1774.2 | 0.52361 | 1938 | 60 | 23 |
| fmt::format_to | 1639.76 | 0.629399 | 1938 | 60 | 43 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2680.5 | 0.281412 | 19378 | 60 | 53 |
| jeaiii::to_text | 2049.47 | 0.164222 | 19378 | 60 | 59 |
| std::to_chars | 1806.52 | 0.192637 | 19381 | 60 | 8 |
| fmt::format_to | 1685.97 | 0.222713 | 19380 | 60 | 37 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2679.51 | 0.222358 | 193790 | 60 | 59 |
| jeaiii::to_text | 2043.28 | 0.141942 | 193783 | 60 | 26 |
| std::to_chars | 1932.76 | 0.177052 | 193786 | 60 | 36 |
| fmt::format_to | 1680.14 | 0.14191 | 193782 | 60 | 20 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2457.85 | 0.482563 | 1937967 | 60 | 35 |
| jeaiii::to_text | 2037.91 | 0.151615 | 1937956 | 60 | 1 |
| std::to_chars | 1933.87 | 0.717322 | 1937937 | 60 | 60 |
| fmt::format_to | 1594.23 | 0.507659 | 1937961 | 60 | 17 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4661.26 | 0.984033 | 1987 | 60 | 4 |
| jeaiii::to_text | 2887.04 | 0.538412 | 1987 | 60 | 50 |
| std::to_chars | 2473.14 | 0.478606 | 1987 | 60 | 60 |
| fmt::format_to | 2027.54 | 0.69558 | 1987 | 60 | 9 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4950.19 | 0.250791 | 19879 | 60 | 18 |
| jeaiii::to_text | 2927.08 | 0.228268 | 19878 | 60 | 0 |
| std::to_chars | 2560.95 | 0.229853 | 19878 | 60 | 3 |
| fmt::format_to | 2088.45 | 0.234514 | 19879 | 60 | 8 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4666.6 | 0.284447 | 198802 | 60 | 48 |
| jeaiii::to_text | 2863.36 | 0.42553 | 198803 | 60 | 49 |
| std::to_chars | 2471.71 | 0.887175 | 198800 | 60 | 1 |
| fmt::format_to | 1950.78 | 0.340788 | 198800 | 60 | 59 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4914.8 | 0.146895 | 1987942 | 60 | 60 |
| std::to_chars | 3082.39 | 0.195662 | 1987940 | 60 | 34 |
| jeaiii::to_text | 3034.45 | 0.116467 | 1987936 | 60 | 1 |
| fmt::format_to | 2078.75 | 0.128207 | 1987936 | 60 | 3 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4558.33 | 0.999741 | 1888 | 60 | 23 |
| jeaiii::to_text | 2840.36 | 0.466258 | 1888 | 60 | 23 |
| std::to_chars | 2442.26 | 0.462929 | 1888 | 60 | 23 |
| fmt::format_to | 1898.53 | 0.739509 | 1888 | 60 | 23 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4892.02 | 0.229671 | 18878 | 60 | 13 |
| jeaiii::to_text | 2972.41 | 0.144721 | 18877 | 60 | 59 |
| std::to_chars | 2688.58 | 0.202651 | 18878 | 60 | 55 |
| fmt::format_to | 1966.75 | 0.205932 | 18878 | 60 | 23 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4848.44 | 0.311039 | 188794 | 60 | 41 |
| jeaiii::to_text | 2924.84 | 0.205703 | 188797 | 60 | 39 |
| std::to_chars | 2679.01 | 0.236456 | 188789 | 60 | 56 |
| fmt::format_to | 1954.46 | 0.188345 | 188797 | 60 | 39 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 4905.65 | 0.210411 | 1887952 | 60 | 16 |
| std::to_chars | 3007.37 | 0.282071 | 1887955 | 60 | 1 |
| jeaiii::to_text | 2934.42 | 0.117156 | 1887962 | 60 | 31 |
| fmt::format_to | 1957.75 | 0.11976 | 1887957 | 60 | 14 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2876.1 | 0.885064 | 1938 | 60 | 23 |
| jeaiii::to_text | 2229.34 | 0.715595 | 1938 | 60 | 47 |
| std::to_chars | 1967.55 | 0.468503 | 1938 | 60 | 39 |
| fmt::format_to | 1139.93 | 0.708991 | 1939 | 60 | 6 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3072.9 | 0.235821 | 19398 | 60 | 20 |
| jeaiii::to_text | 2339.84 | 0.138978 | 19397 | 60 | 19 |
| std::to_chars | 2155.11 | 0.180131 | 19399 | 60 | 32 |
| fmt::format_to | 1170.34 | 0.237777 | 19399 | 60 | 38 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3045.6 | 0.0843049 | 193981 | 60 | 50 |
| jeaiii::to_text | 2338.75 | 0.217279 | 193975 | 60 | 38 |
| std::to_chars | 2173.31 | 0.121047 | 193964 | 60 | 10 |
| fmt::format_to | 1167.3 | 0.205327 | 193977 | 60 | 39 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3035.27 | 0.101617 | 1939757 | 60 | 25 |
| jeaiii::to_text | 2326.77 | 0.144497 | 1939790 | 60 | 50 |
| std::to_chars | 2149.43 | 0.277385 | 1939766 | 60 | 2 |
| fmt::format_to | 1170.6 | 0.0715472 | 1939767 | 60 | 33 |
