# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (AMD EPYC 7763 64-Core Processor): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 320.3 | 0.737568 | 265 | 60 | 120 |
| vn::to_chars | 309.073 | 0.82388 | 264 | 60 | 59 |
| fmt::format_to | 249.614 | 0.642773 | 265 | 60 | 10 |
| std::to_chars | 234.877 | 0.645822 | 264 | 60 | 58 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 334.66 | 0.283578 | 2652 | 60 | 2 |
| vn::to_chars | 328.167 | 0.248007 | 2652 | 60 | 24 |
| fmt::format_to | 260.316 | 0.839048 | 2650 | 60 | 60 |
| std::to_chars | 246.162 | 0.320592 | 2652 | 60 | 6 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text **STATISTICAL TIE** | 337.347 | 0.398617 | 26488 | 60 | 2 |
| vn::to_chars **STATISTICAL TIE** | 332.27 | 0.387873 | 26476 | 60 | 55 |
| fmt::format_to | 269.395 | 0.354924 | 26468 | 60 | 176 |
| std::to_chars | 245.48 | 0.371612 | 26474 | 60 | 278 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 334.388 | 0.102051 | 264847 | 60 | 5 |
| vn::to_chars | 326.434 | 0.100019 | 264841 | 60 | 4 |
| fmt::format_to | 264.61 | 0.0662566 | 264839 | 60 | 7 |
| std::to_chars | 246.556 | 0.0534328 | 264878 | 60 | 40 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 640.803 | 0.81804 | 313 | 60 | 396 |
| jeaiii::to_text | 607.243 | 0.820681 | 315 | 60 | 867 |
| fmt::format_to | 466.117 | 0.728348 | 312 | 60 | 292 |
| std::to_chars | 462.345 | 0.55334 | 313 | 60 | 729 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 712.219 | 0.369203 | 3143 | 60 | 134 |
| jeaiii::to_text | 677.938 | 0.316786 | 3145 | 60 | 60 |
| fmt::format_to | 517.602 | 0.272612 | 3143 | 60 | 134 |
| std::to_chars | 505.022 | 0.210333 | 3143 | 60 | 176 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 733.189 | 0.619868 | 31449 | 60 | 20 |
| jeaiii::to_text | 701.502 | 0.696378 | 31449 | 60 | 20 |
| fmt::format_to | 543.01 | 0.539568 | 31447 | 60 | 33 |
| std::to_chars | 510.37 | 0.710643 | 31453 | 60 | 6 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 725.633 | 0.209808 | 314398 | 60 | 5 |
| jeaiii::to_text | 683.02 | 0.16015 | 314399 | 60 | 3 |
| fmt::format_to | 530.381 | 0.146763 | 314460 | 60 | 55 |
| std::to_chars | 500.005 | 0.138966 | 314412 | 60 | 21 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 433.68 | 0.844034 | 216 | 60 | 372 |
| jeaiii::to_text | 419 | 0.807394 | 216 | 60 | 380 |
| fmt::format_to | 338.377 | 0.607036 | 215 | 60 | 168 |
| std::to_chars | 319.764 | 0.586649 | 215 | 60 | 179 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 481.109 | 0.290639 | 2152 | 60 | 37 |
| jeaiii::to_text | 475.629 | 0.27775 | 2154 | 60 | 23 |
| fmt::format_to | 364.09 | 0.175544 | 2155 | 60 | 51 |
| std::to_chars | 347.625 | 0.210489 | 2155 | 60 | 21 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 501.156 | 0.486917 | 21513 | 60 | 43 |
| jeaiii::to_text | 485.09 | 0.473583 | 21517 | 60 | 60 |
| fmt::format_to | 390.396 | 0.483803 | 21511 | 60 | 37 |
| std::to_chars | 358.176 | 0.48746 | 21507 | 60 | 19 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 487.492 | 0.192915 | 215250 | 60 | 6 |
| jeaiii::to_text | 477.84 | 0.185583 | 215232 | 60 | 9 |
| fmt::format_to | 365.03 | 0.144954 | 215260 | 60 | 37 |
| std::to_chars | 349.01 | 0.136446 | 215230 | 60 | 58 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 446.563 | 1.04005 | 257 | 60 | 60 |
| vn::to_chars | 428.441 | 0.944464 | 257 | 60 | 6 |
| fmt::format_to | 366.014 | 0.7613 | 257 | 60 | 36 |
| std::to_chars | 262.907 | 0.873262 | 257 | 60 | 47 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 489.335 | 0.356767 | 2571 | 60 | 10 |
| vn::to_chars | 477.358 | 0.282639 | 2574 | 60 | 45 |
| fmt::format_to | 394.109 | 0.25574 | 2574 | 60 | 45 |
| std::to_chars | 385.844 | 0.296527 | 2573 | 60 | 33 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 490.425 | 0.514436 | 25691 | 60 | 12 |
| vn::to_chars | 476.144 | 0.51044 | 25704 | 60 | 57 |
| fmt::format_to | 390.338 | 0.423868 | 25690 | 60 | 10 |
| std::to_chars | 381.701 | 0.501997 | 25690 | 60 | 13 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| jeaiii::to_text | 489.899 | 0.157304 | 257027 | 60 | 17 |
| vn::to_chars | 474.197 | 0.150295 | 256989 | 60 | 58 |
| fmt::format_to | 389.845 | 0.128554 | 256992 | 60 | 41 |
| std::to_chars | 385.876 | 0.182411 | 257027 | 60 | 5 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 561.935 | 0.751523 | 514 | 60 | 60 |
| jeaiii::to_text | 539.055 | 0.675569 | 513 | 60 | 35 |
| fmt::format_to | 417.137 | 0.526093 | 514 | 60 | 57 |
| std::to_chars | 278.891 | 0.701088 | 514 | 60 | 60 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 598.995 | 0.253165 | 5163 | 60 | 12 |
| jeaiii::to_text | 573.364 | 0.252616 | 5163 | 60 | 11 |
| fmt::format_to | 437.776 | 0.209405 | 5163 | 60 | 44 |
| std::to_chars | 400.577 | 0.193282 | 5162 | 60 | 40 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 598.988 | 0.390173 | 51622 | 60 | 51 |
| jeaiii::to_text | 500.623 | 0.478059 | 51595 | 60 | 0 |
| fmt::format_to | 435.213 | 0.337443 | 51601 | 60 | 10 |
| std::to_chars | 397.261 | 0.415146 | 51619 | 60 | 40 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 598.103 | 0.0804347 | 516080 | 60 | 12 |
| jeaiii::to_text | 571.889 | 0.080434 | 516070 | 60 | 23 |
| fmt::format_to | 434.777 | 0.0610178 | 516111 | 60 | 43 |
| std::to_chars | 396.802 | 0.0956289 | 516058 | 60 | 1 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1022.36 | 1.14302 | 565 | 60 | 26 |
| jeaiii::to_text | 895.01 | 1.06176 | 566 | 60 | 12 |
| fmt::format_to | 665.79 | 0.657821 | 566 | 60 | 15 |
| std::to_chars | 478.566 | 1.3723 | 566 | 60 | 38 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1127.39 | 0.365068 | 5661 | 60 | 59 |
| jeaiii::to_text | 975.245 | 0.332738 | 5662 | 60 | 19 |
| fmt::format_to | 717.46 | 0.264596 | 5661 | 60 | 34 |
| std::to_chars | 665.065 | 0.225347 | 5661 | 60 | 33 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1136.6 | 0.453965 | 56614 | 60 | 18 |
| jeaiii::to_text | 855.508 | 0.40719 | 56611 | 60 | 1 |
| fmt::format_to | 719.233 | 0.409433 | 56614 | 60 | 16 |
| std::to_chars | 668.252 | 0.451106 | 56610 | 60 | 60 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1124.99 | 0.159832 | 566070 | 60 | 2 |
| jeaiii::to_text | 972.837 | 0.143979 | 566075 | 60 | 16 |
| fmt::format_to | 715.803 | 0.0812887 | 566102 | 60 | 38 |
| std::to_chars | 664.734 | 0.0803518 | 566098 | 60 | 46 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 876.191 | 0.970191 | 466 | 60 | 60 |
| jeaiii::to_text | 765.315 | 1.03086 | 466 | 60 | 12 |
| fmt::format_to | 587.575 | 0.774842 | 466 | 60 | 5 |
| std::to_chars | 355.909 | 0.908376 | 466 | 60 | 16 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 946.638 | 0.346505 | 4660 | 60 | 8 |
| jeaiii::to_text | 807.432 | 0.36429 | 4661 | 60 | 60 |
| fmt::format_to | 627.794 | 0.557056 | 4661 | 60 | 60 |
| std::to_chars | 556.792 | 0.278428 | 4660 | 60 | 3 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 950.663 | 0.440107 | 46621 | 60 | 57 |
| jeaiii::to_text | 734.575 | 0.409207 | 46620 | 60 | 34 |
| fmt::format_to | 632.776 | 0.42787 | 46620 | 60 | 27 |
| std::to_chars | 552.745 | 0.4347 | 46619 | 60 | 47 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 945.059 | 0.156653 | 466131 | 60 | 28 |
| jeaiii::to_text | 805.891 | 0.184416 | 466108 | 60 | 60 |
| fmt::format_to | 630.51 | 0.109749 | 466112 | 60 | 55 |
| std::to_chars | 550.446 | 0.154438 | 466106 | 60 | 8 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1287.79 | 1.21043 | 483 | 60 | 52 |
| jeaiii::to_text | 1115.59 | 1.02149 | 482 | 60 | 10 |
| fmt::format_to | 722.087 | 0.760897 | 483 | 60 | 22 |
| std::to_chars | 433.213 | 1.29002 | 483 | 60 | 48 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1475.27 | 0.357218 | 4828 | 60 | 51 |
| jeaiii::to_text | 1287.67 | 0.332012 | 4828 | 60 | 18 |
| fmt::format_to | 753.723 | 0.208993 | 4828 | 60 | 60 |
| std::to_chars | 668.069 | 0.221896 | 4827 | 60 | 7 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1500.74 | 0.473863 | 48306 | 60 | 4 |
| jeaiii::to_text | 1310.66 | 0.570494 | 48307 | 60 | 37 |
| fmt::format_to | 788.932 | 0.437696 | 48300 | 60 | 60 |
| std::to_chars | 666.383 | 0.49957 | 48300 | 60 | 51 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1491.14 | 0.224763 | 483058 | 60 | 2 |
| jeaiii::to_text | 1305.13 | 0.20393 | 483054 | 60 | 51 |
| fmt::format_to | 785.445 | 0.136685 | 483046 | 60 | 58 |
| std::to_chars | 666.774 | 0.153275 | 483044 | 60 | 60 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 814.521 | 0.587513 | 999 | 60 | 19 |
| jeaiii::to_text | 762.799 | 0.406377 | 999 | 60 | 51 |
| fmt::format_to | 657.22 | 0.357485 | 999 | 60 | 48 |
| std::to_chars | 449.273 | 2.09707 | 999 | 60 | 40 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 849.006 | 0.200041 | 9981 | 60 | 14 |
| jeaiii::to_text | 784.793 | 0.612697 | 9981 | 60 | 0 |
| fmt::format_to | 680.368 | 0.18619 | 9983 | 60 | 10 |
| std::to_chars | 511.644 | 0.674283 | 9981 | 60 | 15 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 840.351 | 0.340274 | 99816 | 60 | 3 |
| jeaiii::to_text | 785.402 | 0.329113 | 99824 | 60 | 7 |
| fmt::format_to | 674.569 | 0.295119 | 99829 | 60 | 11 |
| std::to_chars | 507.736 | 0.320541 | 99832 | 60 | 46 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 839.613 | 0.0618484 | 998326 | 60 | 43 |
| jeaiii::to_text | 798.839 | 0.0615275 | 998307 | 60 | 58 |
| fmt::format_to | 674.154 | 0.0571794 | 998264 | 60 | 11 |
| std::to_chars | 499.465 | 0.110406 | 998267 | 60 | 3 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1136.29 | 0.725289 | 1048 | 60 | 43 |
| jeaiii::to_text | 1023.91 | 0.59506 | 1048 | 60 | 1 |
| fmt::format_to | 833.96 | 0.377176 | 1048 | 60 | 52 |
| std::to_chars | 469.85 | 1.42815 | 1048 | 60 | 1 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1205.18 | 0.185792 | 10482 | 60 | 27 |
| jeaiii::to_text | 1063.62 | 0.173807 | 10483 | 60 | 14 |
| fmt::format_to | 861.203 | 0.147532 | 10481 | 60 | 34 |
| std::to_chars | 664.889 | 0.208243 | 10483 | 60 | 51 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1195.26 | 0.413614 | 104830 | 60 | 23 |
| jeaiii::to_text | 1061 | 0.359098 | 104831 | 60 | 38 |
| fmt::format_to | 855.101 | 0.347354 | 104828 | 60 | 60 |
| std::to_chars | 658.085 | 0.372022 | 104831 | 60 | 35 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1193.16 | 0.0753856 | 1048258 | 60 | 55 |
| jeaiii::to_text | 1105.12 | 0.0585534 | 1048248 | 60 | 30 |
| fmt::format_to | 854.135 | 0.0729585 | 1048319 | 60 | 2 |
| std::to_chars | 658.152 | 0.0787114 | 1048270 | 60 | 16 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1132.22 | 0.630004 | 949 | 60 | 46 |
| jeaiii::to_text | 944.071 | 0.548846 | 948 | 60 | 15 |
| fmt::format_to | 747.13 | 0.419518 | 948 | 60 | 7 |
| std::to_chars | 462.982 | 2.31533 | 949 | 60 | 60 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1195.49 | 0.184958 | 9484 | 60 | 7 |
| jeaiii::to_text | 989.11 | 0.195277 | 9483 | 60 | 16 |
| fmt::format_to | 773.424 | 0.173456 | 9484 | 60 | 57 |
| std::to_chars | 618.813 | 0.23071 | 9483 | 60 | 1 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1192.94 | 0.3958 | 94818 | 60 | 45 |
| jeaiii::to_text | 832.685 | 3.24611 | 94816 | 60 | 60 |
| fmt::format_to | 765.937 | 0.415157 | 94818 | 60 | 58 |
| std::to_chars | 615.229 | 0.378699 | 94822 | 60 | 32 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1189.9 | 0.0899234 | 948213 | 60 | 53 |
| jeaiii::to_text | 1008.31 | 0.0745296 | 948215 | 60 | 56 |
| fmt::format_to | 765.842 | 0.0801027 | 948242 | 60 | 11 |
| std::to_chars | 608.209 | 0.107662 | 948231 | 60 | 4 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1829.88 | 0.948792 | 975 | 60 | 27 |
| jeaiii::to_text | 1552.82 | 0.694764 | 974 | 60 | 29 |
| fmt::format_to | 997.023 | 0.524124 | 975 | 60 | 7 |
| std::to_chars | 473.871 | 0.942144 | 975 | 60 | 2 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2024.87 | 0.383053 | 9744 | 60 | 52 |
| jeaiii::to_text | 1720.45 | 0.257252 | 9743 | 60 | 58 |
| fmt::format_to | 1031.82 | 0.575941 | 9743 | 60 | 55 |
| std::to_chars | 771.915 | 0.210575 | 9743 | 60 | 58 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2027.7 | 0.462004 | 97407 | 60 | 53 |
| jeaiii::to_text | 1732.7 | 0.477431 | 97405 | 60 | 57 |
| fmt::format_to | 1039.84 | 0.37299 | 97407 | 60 | 53 |
| std::to_chars | 762.134 | 0.462911 | 97418 | 60 | 10 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2020.31 | 0.191267 | 974188 | 60 | 11 |
| jeaiii::to_text | 1725.04 | 0.219002 | 974135 | 60 | 54 |
| fmt::format_to | 1035.91 | 0.103966 | 974125 | 60 | 60 |
| std::to_chars | 767.26 | 0.113274 | 974125 | 60 | 60 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1818.26 | 0.527914 | 1937 | 60 | 60 |
| jeaiii::to_text | 1301.49 | 0.382748 | 1937 | 60 | 31 |
| fmt::format_to | 1004.56 | 0.330541 | 1937 | 60 | 18 |
| std::to_chars | 749.542 | 0.323116 | 1937 | 60 | 32 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1865.32 | 0.227765 | 19376 | 60 | 26 |
| jeaiii::to_text | 1295.58 | 0.875174 | 19374 | 60 | 31 |
| fmt::format_to | 1015.19 | 0.641179 | 19377 | 60 | 14 |
| std::to_chars | 755.689 | 0.533083 | 19374 | 60 | 33 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1854.17 | 0.368481 | 193794 | 60 | 60 |
| jeaiii::to_text | 1307.09 | 0.313525 | 193791 | 60 | 30 |
| fmt::format_to | 979.67 | 0.612354 | 193795 | 60 | 50 |
| std::to_chars | 756.528 | 0.256296 | 193792 | 60 | 56 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1844.16 | 0.100343 | 1937934 | 60 | 12 |
| jeaiii::to_text | 1306.04 | 0.0605987 | 1937931 | 60 | 58 |
| fmt::format_to | 984.341 | 0.126547 | 1937933 | 60 | 34 |
| std::to_chars | 754.738 | 0.064934 | 1937915 | 60 | 4 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2891.01 | 0.686677 | 1987 | 60 | 25 |
| jeaiii::to_text | 1645.88 | 0.242604 | 1987 | 60 | 29 |
| fmt::format_to | 1089.97 | 0.278336 | 1986 | 60 | 31 |
| std::to_chars | 543.767 | 1.57205 | 1987 | 60 | 1 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3121.83 | 0.238559 | 19880 | 60 | 35 |
| jeaiii::to_text | 1744.72 | 0.133416 | 19880 | 60 | 26 |
| fmt::format_to | 1115.58 | 0.646011 | 19880 | 60 | 4 |
| std::to_chars | 934.298 | 0.597331 | 19880 | 60 | 35 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3107.44 | 0.450955 | 198799 | 60 | 35 |
| jeaiii::to_text | 1734.69 | 0.359406 | 198798 | 60 | 39 |
| fmt::format_to | 1114.64 | 0.303754 | 198798 | 60 | 20 |
| std::to_chars | 934.986 | 0.260753 | 198797 | 60 | 59 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 3073.84 | 0.152856 | 1987972 | 60 | 4 |
| jeaiii::to_text | 1729 | 0.121972 | 1987953 | 60 | 60 |
| fmt::format_to | 1105.61 | 0.0517127 | 1987949 | 60 | 48 |
| std::to_chars | 933.998 | 0.0423186 | 1987954 | 60 | 55 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2773.89 | 0.650797 | 1887 | 60 | 56 |
| jeaiii::to_text | 1595.91 | 0.241264 | 1887 | 60 | 56 |
| fmt::format_to | 1026.87 | 0.339814 | 1887 | 60 | 1 |
| std::to_chars | 816.622 | 2.64261 | 1887 | 60 | 60 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2964.99 | 0.211356 | 18878 | 60 | 58 |
| jeaiii::to_text | 1688.4 | 0.350869 | 18879 | 60 | 35 |
| fmt::format_to | 1030.79 | 0.634764 | 18879 | 60 | 35 |
| std::to_chars | 905.59 | 0.611148 | 18878 | 60 | 56 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2943.12 | 0.487179 | 188788 | 60 | 60 |
| jeaiii::to_text | 1684.13 | 0.353837 | 188801 | 60 | 18 |
| fmt::format_to | 1020.72 | 0.267734 | 188790 | 60 | 50 |
| std::to_chars | 905.949 | 0.280516 | 188788 | 60 | 60 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2944.25 | 0.228365 | 1887991 | 60 | 5 |
| jeaiii::to_text | 1679.17 | 0.13297 | 1887948 | 60 | 59 |
| fmt::format_to | 1026.15 | 0.0677859 | 1887988 | 60 | 10 |
| std::to_chars | 906.057 | 0.0632414 | 1887995 | 60 | 8 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2054.07 | 0.498218 | 1941 | 60 | 47 |
| jeaiii::to_text | 1541.08 | 0.284334 | 1940 | 60 | 50 |
| fmt::format_to | 866.941 | 1.02603 | 1939 | 60 | 6 |
| std::to_chars | 719.981 | 1.37917 | 1940 | 60 | 60 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2132.63 | 0.172014 | 19395 | 60 | 60 |
| jeaiii::to_text | 1588.85 | 0.08571 | 19402 | 60 | 1 |
| fmt::format_to | 881.317 | 0.550399 | 19399 | 60 | 25 |
| std::to_chars | 754.076 | 0.522869 | 19395 | 60 | 55 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2115.32 | 0.406195 | 193982 | 60 | 35 |
| jeaiii::to_text | 1579.87 | 0.35037 | 193979 | 60 | 12 |
| fmt::format_to | 879.442 | 0.273863 | 193977 | 60 | 0 |
| std::to_chars | 745.754 | 0.336103 | 193972 | 60 | 58 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2107.16 | 0.0824439 | 1939827 | 60 | 23 |
| jeaiii::to_text | 1577.46 | 0.092187 | 1939793 | 60 | 1 |
| fmt::format_to | 871.399 | 0.042326 | 1939791 | 60 | 2 |
| std::to_chars | 748.184 | 0.0725214 | 1939800 | 60 | 60 |
