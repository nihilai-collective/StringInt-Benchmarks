# str-to-int  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 154.499 | 1.2968 | 100 | 60 | 58 |
| std::from_chars | 132.486 | 1.09135 | 100 | 60 | 32 |
| strtoll/strtoull | 77.3306 | 0.679696 | 100 | 60 | 3 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 151.269 | 0.366342 | 1000 | 60 | 43 |
| std::from_chars | 133.114 | 0.365516 | 1000 | 60 | 20 |
| strtoll/strtoull | 80.6204 | 0.187272 | 1000 | 60 | 60 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 154.97 | 0.19201 | 10000 | 60 | 1 |
| std::from_chars | 87.3215 | 1.00224 | 10000 | 60 | 59 |
| strtoll/strtoull | 47.35 | 1.18426 | 10000 | 60 | 29 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 140.846 | 1.58905 | 100000 | 60 | 18 |
| std::from_chars | 118.726 | 2.22172 | 100000 | 60 | 0 |
| strtoll/strtoull | 62.708 | 2.87077 | 100000 | 60 | 3 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 248.485 | 2.10107 | 100 | 60 | 53 |
| std::from_chars | 121.651 | 1.35725 | 100 | 60 | 38 |
| strtoll/strtoull | 58.4203 | 0.51148 | 100 | 60 | 38 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 261.895 | 0.496401 | 1000 | 60 | 2 |
| std::from_chars | 203.612 | 0.323548 | 1000 | 60 | 58 |
| strtoll/strtoull | 103.28 | 0.226898 | 1000 | 60 | 51 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 261.92 | 0.399575 | 10000 | 60 | 20 |
| std::from_chars | 211.446 | 0.213715 | 10000 | 60 | 51 |
| strtoll/strtoull | 102.269 | 0.613288 | 10000 | 60 | 17 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 255.338 | 1.72153 | 100000 | 60 | 3 |
| std::from_chars | 180.943 | 2.44923 | 100000 | 60 | 55 |
| strtoll/strtoull | 98.9003 | 1.06337 | 100000 | 60 | 7 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 191.151 | 1.63409 | 100 | 60 | 14 |
| std::from_chars | 126.444 | 1.25651 | 100 | 60 | 9 |
| strtoll/strtoull | 60.1968 | 0.50716 | 100 | 60 | 13 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 198.399 | 0.332069 | 1000 | 60 | 8 |
| std::from_chars | 131.251 | 0.303538 | 1000 | 60 | 54 |
| strtoll/strtoull | 60.3126 | 0.898763 | 1000 | 60 | 45 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 275.247 | 0.249942 | 10000 | 60 | 9 |
| std::from_chars | 198.834 | 1.94108 | 10000 | 60 | 60 |
| strtoll/strtoull | 102.92 | 0.360109 | 10000 | 60 | 15 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 256.762 | 0.937513 | 100000 | 60 | 55 |
| std::from_chars | 194.6 | 1.80772 | 100000 | 60 | 7 |
| strtoll/strtoull | 96.4288 | 2.29952 | 100000 | 60 | 23 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 213.782 | 1.45111 | 100 | 60 | 58 |
| std::from_chars | 128.67 | 1.06941 | 100 | 60 | 4 |
| strtoll/strtoull | 99.0762 | 0.66413 | 100 | 60 | 7 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 227.685 | 0.35261 | 1000 | 60 | 130 |
| std::from_chars **STATISTICAL TIE** | 226.438 | 0.366802 | 1000 | 60 | 841 |
| strtoll/strtoull | 100.176 | 0.172875 | 1000 | 60 | 31 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 227.132 | 0.448388 | 10000 | 60 | 28 |
| vn::from_chars | 220.294 | 0.266711 | 10000 | 60 | 4 |
| strtoll/strtoull | 95.8095 | 1.39624 | 10000 | 60 | 60 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 222.034 | 0.997857 | 100000 | 60 | 409 |
| vn::from_chars | 212.341 | 1.0922 | 100000 | 60 | 45 |
| strtoll/strtoull | 97.0776 | 0.972437 | 100000 | 60 | 146 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 222.701 | 0.832944 | 200 | 60 | 58 |
| vn::from_chars | 170.876 | 1.65209 | 200 | 60 | 52 |
| strtoll/strtoull | 81.3724 | 0.435921 | 200 | 60 | 40 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 255.803 | 0.214793 | 2000 | 60 | 11 |
| std::from_chars | 227.223 | 0.22455 | 2000 | 60 | 53 |
| strtoll/strtoull | 136.37 | 0.148137 | 2000 | 60 | 50 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 229.08 | 0.182585 | 20000 | 60 | 58 |
| vn::from_chars | 176.627 | 0.848641 | 20000 | 60 | 0 |
| strtoll/strtoull | 130.675 | 1.40348 | 20000 | 60 | 2 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 225.027 | 2.70773 | 200000 | 60 | 2 |
| std::from_chars | 186.961 | 2.67233 | 200000 | 60 | 22 |
| strtoll/strtoull | 130.299 | 1.0623 | 200000 | 60 | 10 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 358.158 | 1.11368 | 200 | 60 | 1 |
| std::from_chars | 317.816 | 1.51292 | 200 | 60 | 4 |
| strtoll/strtoull | 170.505 | 0.680117 | 200 | 60 | 49 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 379.656 | 0.305853 | 2000 | 60 | 17 |
| std::from_chars | 344.205 | 0.44298 | 2000 | 60 | 52 |
| strtoll/strtoull | 170.585 | 0.177039 | 2000 | 60 | 12 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 252.812 | 0.702234 | 20000 | 60 | 59 |
| std::from_chars | 197.902 | 0.781634 | 20000 | 60 | 50 |
| strtoll/strtoull | 94.3849 | 0.385448 | 20000 | 60 | 11 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 350.421 | 2.44837 | 200000 | 60 | 0 |
| std::from_chars | 314.062 | 2.31105 | 200000 | 60 | 1 |
| strtoll/strtoull | 157.967 | 1.60751 | 200000 | 60 | 60 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 257.035 | 1.54397 | 200 | 60 | 11 |
| std::from_chars | 203.097 | 0.669746 | 200 | 60 | 20 |
| strtoll/strtoull | 98.806 | 0.625157 | 200 | 60 | 14 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 276.322 | 0.23985 | 2000 | 60 | 32 |
| std::from_chars | 203.678 | 0.196503 | 2000 | 60 | 1 |
| strtoll/strtoull | 100.514 | 0.0764936 | 2000 | 60 | 56 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 277.16 | 0.158661 | 20000 | 60 | 30 |
| std::from_chars | 206.744 | 0.109159 | 20000 | 60 | 60 |
| strtoll/strtoull | 100.948 | 0.104461 | 20000 | 60 | 13 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 278.896 | 0.107097 | 200000 | 60 | 51 |
| std::from_chars | 206.517 | 0.320947 | 200000 | 60 | 57 |
| strtoll/strtoull | 100.041 | 0.200011 | 200000 | 60 | 58 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 296.699 | 0.994127 | 200 | 60 | 21 |
| std::from_chars | 255.448 | 0.867926 | 200 | 60 | 31 |
| strtoll/strtoull | 103.919 | 0.336694 | 200 | 60 | 46 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 309.35 | 0.166035 | 2000 | 60 | 16 |
| std::from_chars | 262.314 | 0.219882 | 2000 | 60 | 16 |
| strtoll/strtoull | 105.467 | 0.043233 | 2000 | 60 | 21 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 309.713 | 0.181468 | 20000 | 60 | 27 |
| std::from_chars | 263.499 | 0.170834 | 20000 | 60 | 59 |
| strtoll/strtoull | 104.93 | 0.115783 | 20000 | 60 | 38 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 315.046 | 0.521661 | 200000 | 60 | 42 |
| std::from_chars | 263.577 | 0.167388 | 200000 | 60 | 49 |
| strtoll/strtoull | 104.315 | 0.180124 | 200000 | 60 | 12 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 272.245 | 0.5095 | 400 | 60 | 55 |
| std::from_chars | 231.366 | 0.54344 | 400 | 60 | 49 |
| strtoll/strtoull | 116.752 | 0.226087 | 400 | 60 | 5 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 273.872 | 0.122372 | 4000 | 60 | 37 |
| std::from_chars | 230.696 | 0.16708 | 4000 | 60 | 32 |
| strtoll/strtoull | 120.586 | 0.286255 | 4000 | 60 | 12 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 268.869 | 0.161176 | 40000 | 60 | 27 |
| std::from_chars | 233.244 | 0.269942 | 40000 | 60 | 60 |
| strtoll/strtoull | 118.689 | 0.306233 | 40000 | 60 | 37 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 284.171 | 0.337347 | 400000 | 60 | 30 |
| std::from_chars | 231.371 | 0.265205 | 400000 | 60 | 24 |
| strtoll/strtoull | 116.431 | 0.410338 | 400000 | 60 | 41 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 350.74 | 0.614957 | 400 | 60 | 1 |
| std::from_chars | 281.608 | 0.506114 | 400 | 60 | 18 |
| strtoll/strtoull | 133.655 | 0.227656 | 400 | 60 | 30 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 347.941 | 0.539759 | 4000 | 60 | 1 |
| std::from_chars | 271.365 | 0.2949 | 4000 | 60 | 35 |
| strtoll/strtoull | 133.724 | 0.0975689 | 4000 | 60 | 0 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 346.33 | 0.304867 | 40000 | 60 | 44 |
| std::from_chars | 278.685 | 0.159036 | 40000 | 60 | 0 |
| strtoll/strtoull | 130.825 | 0.466871 | 40000 | 60 | 49 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 369.616 | 0.540455 | 400000 | 60 | 26 |
| std::from_chars | 276.399 | 0.494029 | 400000 | 60 | 40 |
| strtoll/strtoull | 132.213 | 0.358193 | 400000 | 60 | 60 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 361.24 | 0.616166 | 400 | 60 | 59 |
| std::from_chars | 272.726 | 0.593947 | 400 | 60 | 45 |
| strtoll/strtoull | 136.46 | 0.268659 | 400 | 60 | 26 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 364.766 | 0.243843 | 4000 | 60 | 1 |
| std::from_chars | 284.435 | 0.152035 | 4000 | 60 | 33 |
| strtoll/strtoull | 136.869 | 0.0598035 | 4000 | 60 | 5 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 358.483 | 0.423962 | 40000 | 60 | 0 |
| std::from_chars | 272.633 | 1.68086 | 40000 | 60 | 36 |
| strtoll/strtoull | 134.292 | 0.814705 | 40000 | 60 | 44 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 382.4 | 0.333197 | 400000 | 60 | 25 |
| std::from_chars | 288.295 | 0.344584 | 400000 | 60 | 35 |
| strtoll/strtoull | 133.76 | 0.432862 | 400000 | 60 | 56 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 422.796 | 0.721532 | 400 | 60 | 33 |
| std::from_chars | 397.525 | 0.802811 | 400 | 60 | 46 |
| strtoll/strtoull | 142.579 | 0.27213 | 400 | 60 | 15 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 433.51 | 0.375255 | 4000 | 60 | 1 |
| std::from_chars | 402.357 | 0.208546 | 4000 | 60 | 54 |
| strtoll/strtoull | 141.236 | 0.0620705 | 4000 | 60 | 15 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 427.646 | 0.24457 | 40000 | 60 | 0 |
| std::from_chars | 384.081 | 0.988317 | 40000 | 60 | 0 |
| strtoll/strtoull | 139.498 | 0.466126 | 40000 | 60 | 50 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 425.536 | 0.438088 | 400000 | 60 | 28 |
| std::from_chars **STATISTICAL TIE** | 425.003 | 0.399523 | 400000 | 60 | 16 |
| strtoll/strtoull | 143.062 | 0.297011 | 400000 | 60 | 125 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 454.138 | 0.414942 | 800 | 60 | 46 |
| std::from_chars | 381.081 | 0.708744 | 800 | 60 | 51 |
| strtoll/strtoull | 173.095 | 0.164377 | 800 | 60 | 2 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 445.842 | 0.234511 | 8000 | 60 | 60 |
| std::from_chars | 382.437 | 0.182142 | 8000 | 60 | 53 |
| strtoll/strtoull | 175.594 | 0.277647 | 8000 | 60 | 37 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 448.137 | 0.182365 | 80000 | 60 | 128 |
| std::from_chars | 390.434 | 0.226558 | 80000 | 60 | 150 |
| strtoll/strtoull | 170.4 | 0.430928 | 80000 | 60 | 21 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 433.92 | 0.829923 | 800000 | 60 | 2 |
| std::from_chars | 388.706 | 0.528778 | 800000 | 60 | 33 |
| strtoll/strtoull | 169.042 | 0.497169 | 800000 | 60 | 53 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 537.085 | 0.362803 | 800 | 60 | 56 |
| std::from_chars | 432.431 | 0.606541 | 800 | 60 | 46 |
| strtoll/strtoull | 188.723 | 0.168731 | 800 | 60 | 58 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 548.303 | 0.0738963 | 8000 | 60 | 60 |
| std::from_chars | 448.938 | 0.0815148 | 8000 | 60 | 21 |
| strtoll/strtoull | 190.151 | 0.212253 | 8000 | 60 | 54 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 506.461 | 0.79724 | 80000 | 60 | 35 |
| std::from_chars | 430.227 | 0.60578 | 80000 | 60 | 30 |
| strtoll/strtoull | 188.84 | 0.298485 | 80000 | 60 | 16 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 550.737 | 0.426562 | 800000 | 60 | 56 |
| std::from_chars | 443.501 | 0.26437 | 800000 | 60 | 0 |
| strtoll/strtoull | 187.198 | 0.352286 | 800000 | 60 | 0 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 549.242 | 0.342389 | 800 | 60 | 52 |
| std::from_chars | 431.74 | 0.740206 | 800 | 60 | 22 |
| strtoll/strtoull | 191.795 | 0.136764 | 800 | 60 | 29 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 558.468 | 0.067642 | 8000 | 60 | 33 |
| std::from_chars | 452.533 | 0.0831592 | 8000 | 60 | 21 |
| strtoll/strtoull | 189.546 | 0.407557 | 8000 | 60 | 7 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 535.225 | 0.499413 | 80000 | 60 | 60 |
| std::from_chars | 440.132 | 0.423258 | 80000 | 60 | 19 |
| strtoll/strtoull | 190.606 | 0.32232 | 80000 | 60 | 25 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 562.806 | 0.369937 | 800000 | 60 | 29 |
| std::from_chars | 444.04 | 0.32221 | 800000 | 60 | 41 |
| strtoll/strtoull | 188.869 | 0.288712 | 800000 | 60 | 33 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 468.422 | 0.357246 | 800 | 60 | 7 |
| std::from_chars | 423.145 | 0.689769 | 800 | 60 | 14 |
| strtoll/strtoull | 167.098 | 0.177944 | 800 | 60 | 24 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 463.499 | 1.26958 | 8000 | 60 | 0 |
| std::from_chars | 442.827 | 0.106719 | 8000 | 60 | 31 |
| strtoll/strtoull | 167.186 | 0.208019 | 8000 | 60 | 3 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 469.833 | 0.251403 | 80000 | 60 | 0 |
| std::from_chars | 436.633 | 0.169977 | 80000 | 60 | 26 |
| strtoll/strtoull | 177.4 | 0.220843 | 80000 | 60 | 60 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 706.176 | 1.0764 | 800000 | 60 | 174 |
| vn::from_chars **STATISTICAL TIE** | 683.936 | 0.964367 | 800000 | 60 | 387 |
| strtoll/strtoull | 305.407 | 1.21518 | 800000 | 60 | 291 |
