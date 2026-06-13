# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (AMD EPYC 9V74 80-Core Processor): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 363.484 | 0.640056 | 265 | 60 | 60 |
| vn::to_chars | 349.26 | 0.798169 | 265 | 60 | 6 |
| fmt::format_to | 322.261 | 0.734012 | 264 | 60 | 58 |
| std::to_chars | 308.525 | 0.632635 | 264 | 60 | 57 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 369.635 | 0.246371 | 2646 | 60 | 180 |
| jeaiii::to_text | 364.628 | 0.224608 | 2646 | 60 | 126 |
| fmt::format_to | 336.95 | 0.234567 | 2646 | 60 | 180 |
| std::to_chars | 312.748 | 0.229031 | 2648 | 60 | 16 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 381.722 | 0.312909 | 26471 | 60 | 2 |
| vn::to_chars | 372.281 | 0.434181 | 26471 | 60 | 2 |
| fmt::format_to | 335.03 | 0.342955 | 26468 | 60 | 6 |
| std::to_chars | 313.057 | 0.35851 | 26471 | 60 | 1 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 377.619 | 0.206064 | 264836 | 60 | 8 |
| jeaiii::to_text | 375.361 | 0.091926 | 264813 | 60 | 39 |
| fmt::format_to | 337.198 | 0.174726 | 264851 | 60 | 31 |
| std::to_chars | 305.73 | 0.081344 | 264853 | 60 | 21 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 654.289 | 0.727868 | 314 | 60 | 180 |
| vn::to_chars | 608.929 | 0.713929 | 313 | 60 | 59 |
| fmt::format_to | 577.165 | 0.688702 | 314 | 60 | 180 |
| std::to_chars | 413.141 | 0.716168 | 314 | 60 | 126 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 751.298 | 0.318547 | 3146 | 60 | 20 |
| jeaiii::to_text | 719.005 | 0.301509 | 3143 | 60 | 139 |
| std::to_chars | 617.749 | 0.33812 | 3145 | 60 | 59 |
| fmt::format_to | 606.845 | 0.284026 | 3141 | 60 | 180 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 766.14 | 0.409958 | 31451 | 60 | 60 |
| jeaiii::to_text | 735.347 | 0.442211 | 31444 | 60 | 0 |
| std::to_chars | 657.827 | 0.395855 | 31439 | 60 | 27 |
| fmt::format_to | 612.847 | 0.339237 | 31438 | 60 | 29 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 803.748 | 0.158022 | 314468 | 60 | 1 |
| jeaiii::to_text | 752.555 | 0.142828 | 314460 | 60 | 28 |
| std::to_chars | 633.545 | 0.185436 | 314467 | 60 | 3 |
| fmt::format_to | 597.814 | 0.174337 | 314442 | 60 | 60 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 517.766 | 0.916025 | 215 | 60 | 17 |
| jeaiii::to_text | 469.316 | 0.889488 | 215 | 60 | 19 |
| fmt::format_to | 370.719 | 0.837648 | 214 | 60 | 41 |
| std::to_chars | 307.9 | 0.963552 | 215 | 60 | 60 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 589.608 | 0.413228 | 2150 | 60 | 21 |
| jeaiii::to_text | 514.694 | 0.437256 | 2151 | 60 | 47 |
| fmt::format_to | 426.519 | 0.292377 | 2150 | 60 | 21 |
| std::to_chars | 408.747 | 0.316428 | 2154 | 60 | 59 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 611.592 | 0.440215 | 21525 | 60 | 163 |
| jeaiii::to_text | 534.323 | 0.409846 | 21525 | 60 | 142 |
| std::to_chars | 439.702 | 0.35058 | 21525 | 60 | 163 |
| fmt::format_to | 437.26 | 0.345794 | 21517 | 60 | 175 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 567.263 | 0.142012 | 215229 | 60 | 50 |
| jeaiii::to_text | 529.915 | 0.142686 | 215238 | 60 | 54 |
| fmt::format_to | 428.167 | 0.126294 | 215234 | 60 | 46 |
| std::to_chars | 413.869 | 0.122943 | 215242 | 60 | 52 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 512.593 | 0.88527 | 256 | 60 | 59 |
| jeaiii::to_text **STATISTICAL TIE** | 504.983 | 0.939637 | 257 | 60 | 419 |
| std::to_chars | 480.862 | 0.909514 | 256 | 60 | 742 |
| fmt::format_to | 478.147 | 0.743183 | 256 | 60 | 60 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 550.585 | 0.346208 | 2570 | 60 | 60 |
| vn::to_chars | 539.188 | 0.312184 | 2571 | 60 | 30 |
| std::to_chars | 520.102 | 0.319485 | 2570 | 60 | 60 |
| fmt::format_to | 511.954 | 0.322764 | 2571 | 60 | 46 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 553.603 | 0.368978 | 25695 | 60 | 416 |
| vn::to_chars | 541.555 | 0.370138 | 25705 | 60 | 178 |
| std::to_chars | 533.904 | 0.359662 | 25702 | 60 | 173 |
| fmt::format_to | 515.508 | 0.362707 | 25704 | 60 | 2 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 533.618 | 0.125508 | 257051 | 60 | 173 |
| jeaiii::to_text | 530.896 | 0.121885 | 257025 | 60 | 258 |
| std::to_chars | 528.917 | 0.125798 | 257019 | 60 | 418 |
| fmt::format_to | 515.805 | 0.120802 | 257025 | 60 | 299 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 658.673 | 0.756318 | 517 | 60 | 45 |
| jeaiii::to_text | 615.511 | 0.677568 | 517 | 60 | 47 |
| fmt::format_to | 593.447 | 0.456479 | 516 | 60 | 60 |
| std::to_chars | 369.05 | 0.703514 | 516 | 60 | 58 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 718.132 | 0.276978 | 5158 | 60 | 58 |
| jeaiii::to_text | 655.18 | 0.278817 | 5158 | 60 | 58 |
| fmt::format_to | 604.212 | 0.20174 | 5158 | 60 | 43 |
| std::to_chars | 494.325 | 0.226548 | 5158 | 60 | 9 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 679.781 | 0.318615 | 51615 | 60 | 58 |
| jeaiii::to_text | 657.463 | 0.319707 | 51612 | 60 | 48 |
| fmt::format_to | 600.318 | 0.35175 | 51612 | 60 | 48 |
| std::to_chars | 515.497 | 0.327813 | 51620 | 60 | 23 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 682.615 | 0.0974362 | 516033 | 60 | 34 |
| jeaiii::to_text | 640.973 | 0.0781173 | 516088 | 60 | 4 |
| fmt::format_to | 599.568 | 0.0809567 | 516042 | 60 | 22 |
| std::to_chars | 516.148 | 0.0522538 | 516074 | 60 | 7 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1114.73 | 1.04363 | 565 | 60 | 60 |
| jeaiii::to_text | 961.15 | 0.79736 | 565 | 60 | 4 |
| fmt::format_to | 871.608 | 0.708802 | 565 | 60 | 51 |
| std::to_chars | 636.64 | 1.16059 | 565 | 60 | 60 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1311.16 | 0.900259 | 5666 | 60 | 60 |
| jeaiii::to_text | 1067.95 | 0.34593 | 5660 | 60 | 5 |
| fmt::format_to | 899.201 | 0.269204 | 5659 | 60 | 0 |
| std::to_chars | 803.129 | 0.269323 | 5660 | 60 | 5 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1200.77 | 0.342199 | 56608 | 60 | 57 |
| jeaiii::to_text | 1101.37 | 0.342232 | 56607 | 60 | 20 |
| fmt::format_to | 914.451 | 0.346465 | 56606 | 60 | 35 |
| std::to_chars | 815.38 | 0.46032 | 56608 | 60 | 60 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1232.26 | 0.174141 | 566049 | 60 | 2 |
| jeaiii::to_text | 1074.39 | 0.124354 | 566071 | 60 | 60 |
| fmt::format_to | 926.199 | 0.111339 | 566067 | 60 | 34 |
| std::to_chars | 812.53 | 0.0980748 | 566061 | 60 | 58 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 893.627 | 1.04422 | 466 | 60 | 60 |
| jeaiii::to_text | 852.733 | 0.922846 | 466 | 60 | 60 |
| fmt::format_to | 720.076 | 0.766712 | 466 | 60 | 60 |
| std::to_chars | 503.234 | 1.02389 | 466 | 60 | 58 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1069.51 | 0.378843 | 4658 | 60 | 5 |
| jeaiii::to_text | 925.204 | 0.38821 | 4660 | 60 | 59 |
| fmt::format_to | 748.987 | 0.275644 | 4658 | 60 | 1 |
| std::to_chars | 669.462 | 0.281125 | 4660 | 60 | 43 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1040.9 | 0.439235 | 46611 | 60 | 18 |
| jeaiii::to_text | 949.141 | 0.411558 | 46610 | 60 | 32 |
| fmt::format_to | 775.521 | 0.360351 | 46610 | 60 | 32 |
| std::to_chars | 673.88 | 0.4478 | 46617 | 60 | 53 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1034.16 | 0.138298 | 466095 | 60 | 32 |
| jeaiii::to_text | 924.996 | 0.144737 | 466109 | 60 | 0 |
| fmt::format_to | 778.385 | 0.120259 | 466145 | 60 | 57 |
| std::to_chars | 684.398 | 0.10891 | 466101 | 60 | 39 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1487.97 | 1.45861 | 482 | 60 | 60 |
| jeaiii::to_text | 1212.31 | 1.02166 | 482 | 60 | 55 |
| fmt::format_to | 975.185 | 0.717079 | 483 | 60 | 33 |
| std::to_chars | 669.394 | 2.0424 | 482 | 60 | 59 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1722.58 | 0.400992 | 4829 | 60 | 8 |
| jeaiii::to_text | 1384.02 | 0.310402 | 4829 | 60 | 6 |
| fmt::format_to | 1076.13 | 0.317869 | 4830 | 60 | 60 |
| std::to_chars | 935.04 | 0.206264 | 4828 | 60 | 17 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1721.16 | 0.542425 | 48306 | 60 | 48 |
| jeaiii::to_text | 1367.5 | 0.995761 | 48306 | 60 | 58 |
| fmt::format_to | 1108.46 | 0.458874 | 48314 | 60 | 39 |
| std::to_chars | 966.345 | 0.394541 | 48317 | 60 | 17 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1701.01 | 0.225788 | 483027 | 60 | 9 |
| jeaiii::to_text | 1439.16 | 0.158773 | 483041 | 60 | 58 |
| fmt::format_to | 1093.59 | 0.130592 | 483027 | 60 | 12 |
| std::to_chars | 977.762 | 0.122082 | 483010 | 60 | 20 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1003.21 | 0.640991 | 999 | 60 | 16 |
| jeaiii::to_text | 901.154 | 0.499035 | 998 | 60 | 52 |
| fmt::format_to | 851.441 | 0.42484 | 998 | 60 | 11 |
| std::to_chars | 535.522 | 1.27828 | 998 | 60 | 54 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1047.67 | 0.56325 | 9977 | 60 | 48 |
| jeaiii::to_text | 922.719 | 0.190264 | 9975 | 60 | 21 |
| fmt::format_to | 884.98 | 0.184818 | 9977 | 60 | 50 |
| std::to_chars | 712.207 | 0.139302 | 9978 | 60 | 58 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1040.77 | 0.336768 | 99847 | 60 | 35 |
| jeaiii::to_text | 920.203 | 0.331086 | 99832 | 60 | 13 |
| fmt::format_to | 880.659 | 0.307355 | 99847 | 60 | 57 |
| std::to_chars | 711.751 | 0.323359 | 99838 | 60 | 1 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 1047.22 | 0.042447 | 998256 | 60 | 51 |
| vn::to_chars | 1027.8 | 0.0409586 | 998262 | 60 | 17 |
| fmt::format_to | 883.829 | 0.0486323 | 998295 | 60 | 0 |
| std::to_chars | 714.619 | 0.0510817 | 998277 | 60 | 12 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1489.8 | 0.907009 | 1048 | 60 | 53 |
| jeaiii::to_text | 1310.45 | 0.675995 | 1047 | 60 | 6 |
| fmt::format_to | 1085.12 | 0.538249 | 1047 | 60 | 2 |
| std::to_chars | 783.799 | 1.17934 | 1048 | 60 | 14 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1565.68 | 0.210827 | 10486 | 60 | 60 |
| jeaiii::to_text | 1362.71 | 0.225181 | 10480 | 60 | 6 |
| fmt::format_to | 1140.19 | 0.176222 | 10480 | 60 | 11 |
| std::to_chars | 955.716 | 0.174472 | 10483 | 60 | 53 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1566.71 | 0.358801 | 104829 | 60 | 55 |
| jeaiii::to_text | 1367.67 | 0.388853 | 104830 | 60 | 12 |
| fmt::format_to | 1135.18 | 0.317226 | 104828 | 60 | 60 |
| std::to_chars | 950.743 | 0.364313 | 104832 | 60 | 26 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1589.94 | 0.12436 | 1048271 | 60 | 58 |
| jeaiii::to_text | 1507.13 | 0.0815388 | 1048268 | 60 | 21 |
| fmt::format_to | 1149.69 | 0.0737139 | 1048266 | 60 | 9 |
| std::to_chars | 945.503 | 0.0476511 | 1048259 | 60 | 45 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1299.7 | 1.07088 | 948 | 60 | 16 |
| jeaiii::to_text | 1198.31 | 0.680289 | 948 | 60 | 10 |
| fmt::format_to | 965.059 | 0.402387 | 948 | 60 | 10 |
| std::to_chars | 711.513 | 1.19201 | 949 | 60 | 8 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1426.21 | 0.260016 | 9484 | 60 | 19 |
| jeaiii::to_text | 1264.53 | 0.23796 | 9485 | 60 | 52 |
| fmt::format_to | 1048.43 | 0.183033 | 9484 | 60 | 60 |
| std::to_chars | 877.175 | 0.189252 | 9484 | 60 | 1 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1418 | 0.395168 | 94821 | 60 | 7 |
| jeaiii::to_text | 1251.41 | 0.365509 | 94822 | 60 | 46 |
| fmt::format_to | 1041.36 | 0.32849 | 94828 | 60 | 24 |
| std::to_chars | 872.087 | 0.357173 | 94823 | 60 | 16 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1397.63 | 0.104993 | 948244 | 60 | 44 |
| jeaiii::to_text | 1381.82 | 0.109218 | 948269 | 60 | 3 |
| fmt::format_to | 1049.17 | 0.0515274 | 948273 | 60 | 21 |
| std::to_chars | 877.104 | 0.0386417 | 948244 | 60 | 44 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2035.42 | 0.90862 | 974 | 60 | 38 |
| jeaiii::to_text | 1643.88 | 0.706319 | 974 | 60 | 29 |
| fmt::format_to | 1331.97 | 0.630989 | 974 | 60 | 51 |
| std::to_chars | 732.362 | 0.92399 | 974 | 60 | 27 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2237.2 | 0.342143 | 9741 | 60 | 35 |
| jeaiii::to_text | 1765.03 | 0.249242 | 9739 | 60 | 15 |
| fmt::format_to | 1395.31 | 0.199242 | 9740 | 60 | 11 |
| std::to_chars | 1109.25 | 0.166974 | 9740 | 60 | 12 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2200.5 | 0.377598 | 97415 | 60 | 22 |
| jeaiii::to_text | 1775.95 | 0.373968 | 97418 | 60 | 39 |
| fmt::format_to | 1388.25 | 0.361495 | 97414 | 60 | 58 |
| std::to_chars | 1109.17 | 0.411077 | 97414 | 60 | 60 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2159.87 | 0.200107 | 974131 | 60 | 60 |
| jeaiii::to_text | 1777.43 | 0.108104 | 974126 | 60 | 58 |
| fmt::format_to | 1390.47 | 0.0898377 | 974136 | 60 | 8 |
| std::to_chars | 1111.48 | 0.0633636 | 974130 | 60 | 55 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2089.34 | 0.586938 | 1937 | 60 | 60 |
| jeaiii::to_text | 1571.25 | 0.355236 | 1938 | 60 | 10 |
| fmt::format_to | 1205.24 | 0.295708 | 1938 | 60 | 28 |
| std::to_chars | 674.357 | 1.56184 | 1938 | 60 | 1 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2180.14 | 0.565387 | 19386 | 60 | 59 |
| jeaiii::to_text | 1608.24 | 0.140393 | 19379 | 60 | 1 |
| fmt::format_to | 1222.98 | 0.110726 | 19380 | 60 | 29 |
| std::to_chars | 930.876 | 0.524446 | 19386 | 60 | 60 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2192.03 | 0.356073 | 193792 | 60 | 57 |
| jeaiii::to_text | 1606.03 | 0.269607 | 193799 | 60 | 48 |
| fmt::format_to | 1203.94 | 0.211387 | 193810 | 60 | 12 |
| std::to_chars | 929.338 | 0.207217 | 193796 | 60 | 51 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2079.67 | 0.0761958 | 1937967 | 60 | 7 |
| jeaiii::to_text | 1606.06 | 0.0870586 | 1937965 | 60 | 60 |
| fmt::format_to | 1216 | 0.0390821 | 1937969 | 60 | 58 |
| std::to_chars | 917.922 | 0.127843 | 1937976 | 60 | 11 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3113.89 | 0.719939 | 1988 | 60 | 37 |
| jeaiii::to_text | 2087.12 | 0.231113 | 1988 | 60 | 59 |
| fmt::format_to | 1279.5 | 0.288832 | 1987 | 60 | 26 |
| std::to_chars | 1121.26 | 0.309503 | 1988 | 60 | 59 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3417.51 | 0.216769 | 19878 | 60 | 29 |
| jeaiii::to_text | 2154.66 | 0.115907 | 19878 | 60 | 4 |
| fmt::format_to | 1417.2 | 0.110091 | 19878 | 60 | 29 |
| std::to_chars | 1141.51 | 0.655789 | 19878 | 60 | 52 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3281.51 | 0.408963 | 198787 | 60 | 55 |
| jeaiii::to_text | 2150.75 | 0.311543 | 198791 | 60 | 43 |
| fmt::format_to | 1413.87 | 0.257967 | 198791 | 60 | 14 |
| std::to_chars | 1145.86 | 0.262423 | 198787 | 60 | 54 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3341.59 | 0.192228 | 1987954 | 60 | 36 |
| jeaiii::to_text | 2151.61 | 0.0604467 | 1987971 | 60 | 7 |
| fmt::format_to | 1411.59 | 0.0511441 | 1987959 | 60 | 58 |
| std::to_chars | 1154.05 | 0.0427725 | 1987967 | 60 | 11 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3028.53 | 0.443096 | 1887 | 60 | 46 |
| jeaiii::to_text | 1928.7 | 0.24437 | 1887 | 60 | 10 |
| fmt::format_to | 1272.6 | 0.265099 | 1887 | 60 | 24 |
| std::to_chars | 736.705 | 1.47732 | 1887 | 60 | 19 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3254.23 | 0.294886 | 18879 | 60 | 34 |
| jeaiii::to_text | 1998.72 | 0.129662 | 18878 | 60 | 12 |
| fmt::format_to | 1304.74 | 0.113158 | 18879 | 60 | 40 |
| std::to_chars | 1078.3 | 0.701958 | 18878 | 60 | 4 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3221.82 | 0.518815 | 188793 | 60 | 60 |
| jeaiii::to_text | 1999.16 | 0.330151 | 188800 | 60 | 43 |
| fmt::format_to | 1295.73 | 0.28402 | 188800 | 60 | 38 |
| std::to_chars | 1082.8 | 0.278777 | 188795 | 60 | 56 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3287.48 | 0.17667 | 1887948 | 60 | 24 |
| jeaiii::to_text | 2001.1 | 0.0610428 | 1887948 | 60 | 48 |
| fmt::format_to | 1296.49 | 0.0616468 | 1887942 | 60 | 3 |
| std::to_chars | 1082.93 | 0.0525895 | 1887949 | 60 | 43 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2621.63 | 0.45295 | 1940 | 60 | 28 |
| jeaiii::to_text | 1845.63 | 0.291199 | 1939 | 60 | 58 |
| fmt::format_to | 1017.76 | 0.382463 | 1939 | 60 | 49 |
| std::to_chars | 723.021 | 1.60376 | 1940 | 60 | 7 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2516.55 | 0.1814 | 19394 | 60 | 13 |
| jeaiii::to_text | 1918.61 | 0.121434 | 19400 | 60 | 60 |
| fmt::format_to | 1033.55 | 0.516956 | 19395 | 60 | 8 |
| std::to_chars | 932.793 | 0.525313 | 19400 | 60 | 60 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2722.88 | 0.392225 | 193977 | 60 | 50 |
| jeaiii::to_text | 1903.04 | 0.265798 | 193981 | 60 | 46 |
| fmt::format_to | 1029.97 | 0.217081 | 193973 | 60 | 4 |
| std::to_chars | 923.256 | 0.260456 | 193973 | 60 | 5 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2442.4 | 0.089166 | 1939781 | 60 | 35 |
| jeaiii::to_text | 1908.95 | 0.0628997 | 1939771 | 60 | 24 |
| fmt::format_to | 1030.74 | 0.0414665 | 1939749 | 60 | 0 |
| std::to_chars | 920.894 | 0.0628862 | 1939754 | 60 | 12 |
