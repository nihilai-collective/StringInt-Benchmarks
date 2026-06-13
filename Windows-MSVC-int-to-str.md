# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36246.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 293.87 | 0.842168 | 264 | 60 | 14 |
| jeaiii::to_text | 283.168 | 0.884558 | 266 | 60 | 56 |
| fmt::format_to | 262.196 | 0.845853 | 265 | 60 | 32 |
| std::to_chars | 159.756 | 1.30764 | 263 | 60 | 4 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 305.195 | 0.212684 | 2647 | 60 | 1 |
| jeaiii::to_text | 293.651 | 0.273694 | 2648 | 60 | 8 |
| fmt::format_to | 257.781 | 0.783808 | 2647 | 60 | 59 |
| std::to_chars | 174.007 | 0.228186 | 2649 | 60 | 14 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 301.514 | 0.631491 | 26491 | 60 | 52 |
| jeaiii::to_text | 274.423 | 1.38809 | 26489 | 60 | 32 |
| fmt::format_to | 253.665 | 0.581573 | 26492 | 60 | 55 |
| std::to_chars | 175.658 | 0.762634 | 26489 | 60 | 41 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 301.216 | 0.215161 | 264821 | 60 | 0 |
| jeaiii::to_text | 288.091 | 0.286717 | 264890 | 60 | 59 |
| fmt::format_to | 251.917 | 0.233699 | 264892 | 60 | 56 |
| std::to_chars | 171.607 | 0.261237 | 264894 | 60 | 60 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 602.131 | 1.50927 | 314 | 60 | 38 |
| jeaiii::to_text | 568.296 | 1.18362 | 314 | 60 | 121 |
| fmt::format_to | 436.495 | 0.996388 | 314 | 60 | 159 |
| std::to_chars | 272.681 | 1.14914 | 314 | 60 | 133 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 628.925 | 0.31138 | 3141 | 60 | 3 |
| jeaiii::to_text | 595.566 | 0.408451 | 3142 | 60 | 30 |
| fmt::format_to | 453.221 | 0.19935 | 3141 | 60 | 22 |
| std::to_chars | 287.776 | 0.507461 | 3141 | 60 | 3 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 618.234 | 0.645061 | 31455 | 60 | 1 |
| jeaiii::to_text | 562.624 | 0.678995 | 31455 | 60 | 4 |
| fmt::format_to | 442.957 | 0.694881 | 31453 | 60 | 0 |
| std::to_chars | 287.598 | 0.867985 | 31448 | 60 | 43 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 575.54 | 0.356605 | 314427 | 60 | 60 |
| jeaiii::to_text | 562.468 | 0.3874 | 314468 | 60 | 15 |
| fmt::format_to | 431.306 | 0.335767 | 314473 | 60 | 6 |
| std::to_chars | 284.349 | 0.356431 | 314475 | 60 | 5 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 387.812 | 1.28659 | 215 | 60 | 27 |
| jeaiii::to_text | 354.141 | 1.1752 | 214 | 60 | 50 |
| fmt::format_to | 313.155 | 1.0147 | 214 | 60 | 8 |
| std::to_chars | 190.458 | 1.09124 | 215 | 60 | 28 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 426.013 | 0.391146 | 2154 | 60 | 17 |
| jeaiii::to_text | 389.119 | 0.436341 | 2152 | 60 | 55 |
| fmt::format_to | 319.752 | 0.274276 | 2156 | 60 | 1 |
| std::to_chars | 204.622 | 0.283395 | 2153 | 60 | 28 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 423.337 | 0.588626 | 21531 | 60 | 18 |
| jeaiii::to_text | 396.812 | 0.675854 | 21532 | 60 | 11 |
| fmt::format_to | 312.082 | 0.516044 | 21527 | 60 | 22 |
| std::to_chars | 197.767 | 0.947972 | 21518 | 60 | 50 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 408.181 | 0.371644 | 215217 | 60 | 15 |
| jeaiii::to_text | 382.165 | 0.435373 | 215236 | 60 | 25 |
| fmt::format_to | 300.079 | 0.394977 | 215221 | 60 | 0 |
| std::to_chars | 197.787 | 0.383744 | 215255 | 60 | 51 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 413.562 | 1.3734 | 257 | 60 | 58 |
| jeaiii::to_text **STATISTICAL TIE** | 403.759 | 1.32681 | 256 | 60 | 167 |
| fmt::format_to | 357.218 | 1.2165 | 256 | 60 | 414 |
| std::to_chars | 214.263 | 0.785973 | 257 | 60 | 261 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 409.173 | 0.543478 | 2570 | 60 | 156 |
| jeaiii::to_text | 398.916 | 0.437534 | 2567 | 60 | 870 |
| fmt::format_to | 362.167 | 0.298408 | 2569 | 60 | 13 |
| std::to_chars | 136.81 | 0.196502 | 2569 | 60 | 60 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 431.264 | 0.667112 | 25706 | 60 | 33 |
| jeaiii::to_text | 409.693 | 0.632868 | 25698 | 60 | 50 |
| fmt::format_to | 362.283 | 0.813751 | 25701 | 60 | 57 |
| std::to_chars | 215.239 | 0.915465 | 25706 | 60 | 39 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars **STATISTICAL TIE** | 405.091 | 0.573473 | 257015 | 60 | 60 |
| jeaiii::to_text **STATISTICAL TIE** | 398.817 | 0.294639 | 257054 | 60 | 167 |
| fmt::format_to | 346.788 | 0.316075 | 257046 | 60 | 180 |
| std::to_chars | 212.84 | 0.368183 | 257029 | 60 | 47 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 541.523 | 1.03661 | 515 | 60 | 33 |
| jeaiii::to_text | 485.48 | 0.89762 | 515 | 60 | 31 |
| fmt::format_to | 409.549 | 0.685321 | 515 | 60 | 32 |
| std::to_chars | 278.406 | 1.80587 | 517 | 60 | 4 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 551.637 | 0.443203 | 5163 | 60 | 21 |
| jeaiii::to_text | 502.394 | 0.268005 | 5162 | 60 | 17 |
| fmt::format_to | 423.281 | 0.193277 | 5166 | 60 | 60 |
| std::to_chars | 317.131 | 0.230894 | 5166 | 60 | 45 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 548.322 | 0.555064 | 51620 | 60 | 11 |
| jeaiii::to_text | 488.99 | 0.740624 | 51614 | 60 | 6 |
| fmt::format_to | 420.11 | 0.583781 | 51613 | 60 | 4 |
| std::to_chars | 308.611 | 0.815645 | 51625 | 60 | 21 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 528.161 | 0.195933 | 516125 | 60 | 1 |
| jeaiii::to_text | 483.676 | 0.271191 | 516092 | 60 | 42 |
| fmt::format_to | 412.831 | 0.18041 | 516088 | 60 | 55 |
| std::to_chars | 305.846 | 0.275244 | 516096 | 60 | 43 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 910.795 | 1.41872 | 565 | 60 | 33 |
| jeaiii::to_text | 797.201 | 1.26497 | 564 | 60 | 1 |
| fmt::format_to | 608.808 | 1.00613 | 566 | 60 | 60 |
| std::to_chars | 427.029 | 1.26968 | 565 | 60 | 11 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1015.48 | 0.388527 | 5660 | 60 | 59 |
| jeaiii::to_text | 801.907 | 1.13011 | 5659 | 60 | 48 |
| fmt::format_to | 634.845 | 0.233528 | 5657 | 60 | 19 |
| std::to_chars | 423.524 | 1.1376 | 5659 | 60 | 60 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 966.955 | 0.474957 | 56611 | 60 | 60 |
| jeaiii::to_text | 797.387 | 0.742729 | 56627 | 60 | 19 |
| fmt::format_to | 630.978 | 0.576752 | 56611 | 60 | 60 |
| std::to_chars | 424.759 | 0.923548 | 56619 | 60 | 0 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 934.297 | 0.375066 | 566150 | 60 | 5 |
| jeaiii::to_text | 801.352 | 0.35434 | 566137 | 60 | 1 |
| fmt::format_to | 623.389 | 0.260026 | 566094 | 60 | 34 |
| std::to_chars | 424.126 | 0.38377 | 566078 | 60 | 60 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 760.846 | 1.57072 | 466 | 60 | 58 |
| jeaiii::to_text | 683.296 | 1.37575 | 466 | 60 | 52 |
| fmt::format_to | 507.797 | 1.05794 | 465 | 60 | 1 |
| std::to_chars | 357.093 | 1.49142 | 465 | 60 | 28 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 807.08 | 0.350603 | 4655 | 60 | 13 |
| jeaiii::to_text | 692.474 | 0.397803 | 4655 | 60 | 3 |
| fmt::format_to | 541.281 | 0.248863 | 4655 | 60 | 6 |
| std::to_chars | 380.959 | 0.32436 | 4655 | 60 | 13 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 795.401 | 0.518736 | 46614 | 60 | 13 |
| jeaiii::to_text | 674.63 | 0.800753 | 46608 | 60 | 53 |
| fmt::format_to | 537.976 | 0.510938 | 46613 | 60 | 26 |
| std::to_chars | 369.384 | 0.98388 | 46610 | 60 | 58 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 752.072 | 0.325264 | 466148 | 60 | 0 |
| jeaiii::to_text | 651.746 | 0.400211 | 466112 | 60 | 60 |
| fmt::format_to | 522.613 | 0.291628 | 466111 | 60 | 56 |
| std::to_chars | 362.813 | 0.370369 | 466111 | 60 | 56 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 993.045 | 1.98555 | 483 | 60 | 46 |
| jeaiii::to_text | 699.586 | 2.26769 | 482 | 60 | 7 |
| fmt::format_to | 439.822 | 1.59618 | 482 | 60 | 16 |
| std::to_chars | 319.466 | 3.89276 | 483 | 60 | 26 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1377.86 | 0.463497 | 4829 | 60 | 22 |
| jeaiii::to_text | 1099.8 | 0.582802 | 4830 | 60 | 20 |
| fmt::format_to | 732.232 | 0.272553 | 4830 | 60 | 15 |
| std::to_chars | 441.992 | 0.205689 | 4827 | 60 | 52 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1131.67 | 1.0924 | 48309 | 60 | 2 |
| jeaiii::to_text | 960.661 | 0.780444 | 48305 | 60 | 47 |
| fmt::format_to | 713.224 | 0.532445 | 48311 | 60 | 22 |
| std::to_chars | 431.532 | 0.893765 | 48305 | 60 | 57 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1200.41 | 0.443649 | 483047 | 60 | 27 |
| jeaiii::to_text | 1004.46 | 0.608636 | 483037 | 60 | 37 |
| fmt::format_to | 712.204 | 0.390955 | 483023 | 60 | 60 |
| std::to_chars | 428.854 | 0.387272 | 483077 | 60 | 1 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 791.499 | 0.718848 | 998 | 60 | 9 |
| jeaiii::to_text | 587.962 | 0.664111 | 998 | 60 | 35 |
| fmt::format_to | 567.418 | 0.539309 | 997 | 60 | 33 |
| std::to_chars | 367.672 | 0.592312 | 997 | 60 | 54 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 834.667 | 0.200978 | 9984 | 60 | 19 |
| jeaiii::to_text | 743.094 | 0.213868 | 9989 | 60 | 56 |
| fmt::format_to | 580.882 | 0.191332 | 9988 | 60 | 39 |
| std::to_chars | 466.578 | 0.200572 | 9984 | 60 | 19 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 822.717 | 0.53295 | 99817 | 60 | 28 |
| jeaiii::to_text | 730.288 | 0.509596 | 99824 | 60 | 13 |
| fmt::format_to | 568.208 | 0.45977 | 99817 | 60 | 32 |
| std::to_chars | 455.109 | 0.910078 | 99823 | 60 | 6 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 810.36 | 0.295421 | 998334 | 60 | 0 |
| jeaiii::to_text | 726.118 | 0.190884 | 998313 | 60 | 7 |
| fmt::format_to | 568.502 | 0.115866 | 998260 | 60 | 60 |
| std::to_chars | 453.938 | 0.131538 | 998305 | 60 | 9 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1209.53 | 1.10867 | 1049 | 60 | 60 |
| jeaiii::to_text | 1099.26 | 0.94619 | 1049 | 60 | 54 |
| fmt::format_to | 777.697 | 0.654767 | 1049 | 60 | 60 |
| std::to_chars | 547.872 | 1.11546 | 1047 | 60 | 1 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1216.44 | 0.291549 | 10482 | 60 | 57 |
| jeaiii::to_text | 1108.08 | 0.320153 | 10482 | 60 | 57 |
| fmt::format_to | 774.96 | 0.181739 | 10482 | 60 | 57 |
| std::to_chars | 573.388 | 0.215832 | 10480 | 60 | 60 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1169.69 | 0.633125 | 104816 | 60 | 15 |
| jeaiii::to_text | 1053.57 | 0.785364 | 104826 | 60 | 35 |
| fmt::format_to | 754.284 | 0.472336 | 104816 | 60 | 0 |
| std::to_chars | 566.817 | 0.807611 | 104816 | 60 | 0 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1160.65 | 0.24378 | 1048253 | 60 | 37 |
| jeaiii::to_text | 1057.66 | 0.295833 | 1048272 | 60 | 45 |
| fmt::format_to | 758.851 | 0.15547 | 1048282 | 60 | 58 |
| std::to_chars | 560.467 | 0.247338 | 1048284 | 60 | 57 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1089.46 | 1.00637 | 948 | 60 | 59 |
| jeaiii::to_text | 991.933 | 0.928635 | 947 | 60 | 12 |
| fmt::format_to | 688.364 | 0.717395 | 947 | 60 | 16 |
| std::to_chars | 508.193 | 1.1439 | 946 | 60 | 5 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1089.66 | 0.236423 | 9478 | 60 | 32 |
| jeaiii::to_text | 1013.3 | 0.210556 | 9478 | 60 | 38 |
| fmt::format_to | 719.809 | 0.210054 | 9478 | 60 | 38 |
| std::to_chars | 556.974 | 0.266335 | 9479 | 60 | 60 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1064.83 | 0.625739 | 94824 | 60 | 14 |
| jeaiii::to_text | 956.82 | 0.557285 | 94825 | 60 | 15 |
| fmt::format_to | 699.416 | 0.46146 | 94832 | 60 | 38 |
| std::to_chars | 529.499 | 0.795357 | 94834 | 60 | 1 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1029.71 | 0.293403 | 948289 | 60 | 38 |
| jeaiii::to_text | 962.37 | 0.248415 | 948289 | 60 | 38 |
| fmt::format_to | 702.261 | 0.159841 | 948259 | 60 | 13 |
| std::to_chars | 525.161 | 0.205555 | 948285 | 60 | 26 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1631.44 | 1.34112 | 973 | 60 | 16 |
| jeaiii::to_text | 1525.54 | 1.58302 | 974 | 60 | 60 |
| fmt::format_to | 955.082 | 0.809165 | 974 | 60 | 59 |
| std::to_chars | 526.08 | 2.50175 | 974 | 60 | 54 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1640.3 | 0.310724 | 9741 | 60 | 48 |
| jeaiii::to_text | 1609.93 | 0.347172 | 9744 | 60 | 28 |
| fmt::format_to | 1006.33 | 0.237363 | 9745 | 60 | 23 |
| std::to_chars | 693.023 | 0.246096 | 9741 | 60 | 40 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1613.13 | 0.608478 | 97411 | 60 | 8 |
| jeaiii::to_text | 1401.91 | 1.03948 | 97407 | 60 | 23 |
| fmt::format_to | 967.477 | 0.518008 | 97403 | 60 | 49 |
| std::to_chars | 649.401 | 0.816031 | 97410 | 60 | 20 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1549.33 | 0.364497 | 974145 | 60 | 33 |
| jeaiii::to_text | 1417.36 | 0.46519 | 974121 | 60 | 2 |
| fmt::format_to | 924.548 | 0.256303 | 974121 | 60 | 3 |
| std::to_chars | 644.842 | 0.262424 | 974132 | 60 | 60 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1661.68 | 0.927879 | 1938 | 60 | 54 |
| jeaiii::to_text | 1179.65 | 0.882117 | 1939 | 60 | 60 |
| fmt::format_to | 833.778 | 0.46253 | 1937 | 60 | 10 |
| std::to_chars | 768.296 | 0.872542 | 1938 | 60 | 56 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1683.54 | 0.192566 | 19373 | 60 | 8 |
| jeaiii::to_text | 1232.79 | 0.165698 | 19374 | 60 | 18 |
| fmt::format_to | 853.096 | 0.114922 | 19381 | 60 | 58 |
| std::to_chars | 823.991 | 0.142347 | 19380 | 60 | 55 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1520.48 | 0.558093 | 193793 | 60 | 58 |
| jeaiii::to_text | 1167.41 | 0.659088 | 193793 | 60 | 58 |
| fmt::format_to | 826.687 | 0.508119 | 193788 | 60 | 14 |
| std::to_chars | 775.637 | 0.729941 | 193795 | 60 | 59 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1542.76 | 0.197469 | 1937964 | 60 | 34 |
| jeaiii::to_text | 1155.71 | 0.217228 | 1937952 | 60 | 60 |
| fmt::format_to | 821.495 | 0.134539 | 1937946 | 60 | 45 |
| std::to_chars | 768.929 | 0.334295 | 1937942 | 60 | 51 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2679.89 | 0.972614 | 1989 | 60 | 8 |
| jeaiii::to_text | 1723.28 | 0.663285 | 1988 | 60 | 21 |
| fmt::format_to | 968.79 | 0.457968 | 1988 | 60 | 21 |
| std::to_chars | 856.603 | 0.767471 | 1987 | 60 | 38 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2801.5 | 0.213921 | 19882 | 60 | 10 |
| jeaiii::to_text | 1763.45 | 0.269245 | 19881 | 60 | 60 |
| fmt::format_to | 985.839 | 0.104728 | 19882 | 60 | 28 |
| std::to_chars | 915.211 | 1.02752 | 19882 | 60 | 44 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2332.51 | 0.778949 | 198794 | 60 | 8 |
| jeaiii::to_text | 1455.85 | 1.43157 | 198793 | 60 | 60 |
| fmt::format_to | 948.837 | 0.557169 | 198796 | 60 | 10 |
| std::to_chars | 876.939 | 0.664517 | 198794 | 60 | 8 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2321.62 | 0.396718 | 1987967 | 60 | 60 |
| jeaiii::to_text | 1577.31 | 0.348739 | 1987964 | 60 | 43 |
| fmt::format_to | 941.87 | 0.0721015 | 1987964 | 60 | 53 |
| std::to_chars | 874.29 | 0.135068 | 1987968 | 60 | 17 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2477.45 | 1.10523 | 1887 | 60 | 10 |
| jeaiii::to_text | 1594.31 | 0.930073 | 1887 | 60 | 41 |
| fmt::format_to | 938.635 | 0.448202 | 1887 | 60 | 57 |
| std::to_chars | 817.914 | 0.80591 | 1887 | 60 | 10 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2630.78 | 0.262346 | 18879 | 60 | 35 |
| jeaiii::to_text | 1588.33 | 0.431475 | 18877 | 60 | 60 |
| fmt::format_to | 949.583 | 0.144302 | 18878 | 60 | 1 |
| std::to_chars | 875.862 | 0.313738 | 18878 | 60 | 5 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2189.13 | 0.781876 | 188799 | 60 | 60 |
| jeaiii::to_text | 1554.67 | 0.689327 | 188794 | 60 | 23 |
| fmt::format_to | 917.395 | 0.609092 | 188790 | 60 | 0 |
| std::to_chars | 848.616 | 0.775863 | 188802 | 60 | 55 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 2265.91 | 0.396492 | 1887949 | 60 | 1 |
| jeaiii::to_text | 1538.13 | 0.283548 | 1887959 | 60 | 60 |
| fmt::format_to | 927.846 | 0.112362 | 1887949 | 60 | 4 |
| std::to_chars | 835.481 | 0.395941 | 1887950 | 60 | 10 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1803.1 | 0.783813 | 1940 | 60 | 18 |
| jeaiii::to_text | 1478.85 | 0.610135 | 1939 | 60 | 60 |
| fmt::format_to | 712.432 | 0.493323 | 1940 | 60 | 1 |
| std::to_chars | 629.307 | 0.60026 | 1939 | 60 | 27 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1842.57 | 0.18381 | 19397 | 60 | 144 |
| jeaiii::to_text | 1449.25 | 0.283589 | 19396 | 60 | 167 |
| fmt::format_to | 709.148 | 0.120873 | 19397 | 60 | 156 |
| std::to_chars | 628.476 | 0.450258 | 19396 | 60 | 167 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1705.53 | 0.512053 | 193975 | 60 | 10 |
| jeaiii::to_text | 1392.71 | 0.841738 | 193980 | 60 | 47 |
| fmt::format_to | 695.84 | 0.372561 | 193980 | 60 | 53 |
| std::to_chars | 625.053 | 0.560598 | 193978 | 60 | 58 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::to_chars | 1692.37 | 0.199756 | 1939770 | 60 | 38 |
| jeaiii::to_text | 1405.69 | 0.223833 | 1939770 | 60 | 46 |
| fmt::format_to | 695.2 | 0.0742316 | 1939764 | 60 | 42 |
| std::to_chars | 617.791 | 0.178693 | 1939724 | 60 | 12 |
