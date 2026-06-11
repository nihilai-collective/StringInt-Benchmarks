# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |
| strtoll/strtoull | 85.036 | 3.00754 | 100 | 60 | 35 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 193.914 | 0.798561 | 1000 | 60 | 38 |
| vn::from_chars | 125.454 | 0.851638 | 1000 | 60 | 55 |
| strtoll/strtoull | 75.9068 | 0.516918 | 1000 | 60 | 38 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 124.539 | 0.222113 | 10000 | 60 | 52 |
| std::from_chars | 87.0532 | 0.672509 | 10000 | 60 | 45 |
| strtoll/strtoull | 76.0386 | 0.24376 | 10000 | 60 | 43 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 174.953 | 2.24672 | 100000 | 60 | 7 |
| vn::from_chars | 113.315 | 2.00162 | 100000 | 60 | 45 |
| strtoll/strtoull | 71.2251 | 1.50793 | 100000 | 60 | 34 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |
| strtoll/strtoull **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 1 |
| std::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 201.861 | 1.30072 | 1000 | 60 | 0 |
| std::from_chars | 169.263 | 3.24641 | 1000 | 60 | 0 |
| strtoll/strtoull | 104.021 | 0.51316 | 1000 | 60 | 23 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 195.505 | 1.53482 | 10000 | 60 | 55 |
| std::from_chars **STATISTICAL TIE** | 194.376 | 0.511631 | 10000 | 60 | 42 |
| strtoll/strtoull | 103.414 | 0.226302 | 10000 | 60 | 171 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 204.229 | 0.236777 | 100000 | 60 | 148 |
| std::from_chars | 191.723 | 0.356993 | 100000 | 60 | 170 |
| strtoll/strtoull | 98.1775 | 1.5635 | 100000 | 60 | 129 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |
| strtoll/strtoull **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 1 |
| std::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 227.027 | 1.38324 | 1000 | 60 | 1 |
| std::from_chars | 190.735 | 0 | 1000 | 60 | 13 |
| strtoll/strtoull | 101.637 | 1.09774 | 1000 | 60 | 58 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 224.669 | 0.263674 | 10000 | 60 | 12 |
| std::from_chars | 193.946 | 0.196526 | 10000 | 60 | 54 |
| strtoll/strtoull | 103.535 | 0.255692 | 10000 | 60 | 60 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 224.27 | 0.112979 | 100000 | 60 | 22 |
| std::from_chars | 193.844 | 0.11127 | 100000 | 60 | 60 |
| strtoll/strtoull | 103.534 | 0.068236 | 100000 | 60 | 50 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 95.3674 | 0 | 100 | 60 | 49 |
| strtoll/strtoull | 94.5727 | 0.840336 | 100 | 60 | 37 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 164.244 | 0.939069 | 1000 | 60 | 148 |
| std::from_chars **STATISTICAL TIE** | 163.714 | 0.902655 | 1000 | 60 | 33 |
| strtoll/strtoull | 93.9225 | 0.447863 | 1000 | 60 | 408 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 163.363 | 0.1291 | 10000 | 60 | 897 |
| vn::from_chars | 158.672 | 1.31344 | 10000 | 60 | 129 |
| strtoll/strtoull | 93.7896 | 0.344492 | 10000 | 60 | 371 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 163.1 | 0.0973958 | 100000 | 60 | 897 |
| std::from_chars | 159.222 | 0.373366 | 100000 | 60 | 841 |
| strtoll/strtoull | 92.8728 | 0.0609691 | 100000 | 60 | 401 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 59 |
| strtoll/strtoull | 144.641 | 4.28956 | 200 | 60 | 246 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 271.721 | 0.577958 | 2000 | 60 | 45 |
| vn::from_chars | 214.135 | 0.445142 | 2000 | 60 | 60 |
| strtoll/strtoull | 121.609 | 0.415467 | 2000 | 60 | 58 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 271.99 | 0.22902 | 20000 | 60 | 58 |
| vn::from_chars | 216.772 | 0.220039 | 20000 | 60 | 58 |
| strtoll/strtoull | 125.092 | 0.208427 | 20000 | 60 | 0 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 240.844 | 2.66803 | 200000 | 60 | 58 |
| vn::from_chars | 203.159 | 2.17829 | 200000 | 60 | 0 |
| strtoll/strtoull | 110.849 | 2.73003 | 200000 | 60 | 44 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| strtoll/strtoull | 176.43 | 2.5128 | 200 | 60 | 3 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 305.024 | 0.873429 | 2000 | 60 | 60 |
| std::from_chars | 269.072 | 0.494388 | 2000 | 60 | 0 |
| strtoll/strtoull | 160.946 | 0.483843 | 2000 | 60 | 0 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 300.583 | 0.718773 | 20000 | 60 | 7 |
| std::from_chars | 270.659 | 0.254983 | 20000 | 60 | 28 |
| strtoll/strtoull | 160.084 | 0.16555 | 20000 | 60 | 54 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 306.375 | 0.0883577 | 200000 | 60 | 47 |
| std::from_chars | 269.592 | 0.131674 | 200000 | 60 | 26 |
| strtoll/strtoull | 159.297 | 0.114107 | 200000 | 60 | 60 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| strtoll/strtoull | 174.84 | 2.64647 | 200 | 60 | 40 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 338.025 | 1.13907 | 2000 | 60 | 49 |
| std::from_chars | 269.64 | 0.454513 | 2000 | 60 | 9 |
| strtoll/strtoull | 159.946 | 0.353767 | 2000 | 60 | 10 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 333.887 | 0.151849 | 20000 | 60 | 10 |
| std::from_chars | 271.568 | 0.187164 | 20000 | 60 | 2 |
| strtoll/strtoull | 161.684 | 0.145295 | 20000 | 60 | 29 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 315.213 | 1.99798 | 200000 | 60 | 9 |
| std::from_chars | 272.067 | 0.0787675 | 200000 | 60 | 20 |
| strtoll/strtoull | 146.07 | 1.96878 | 200000 | 60 | 42 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 190.735 | 0 | 200 | 60 | 0 |
| strtoll/strtoull | 182.788 | 1.87734 | 200 | 60 | 363 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 389.152 | 1.25643 | 2000 | 60 | 44 |
| std::from_chars | 366.635 | 0.954862 | 2000 | 60 | 4 |
| strtoll/strtoull | 172.914 | 0.195289 | 2000 | 60 | 51 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 390.898 | 0.1447 | 20000 | 60 | 172 |
| std::from_chars | 364.153 | 0.135318 | 20000 | 60 | 123 |
| strtoll/strtoull | 171.39 | 1.02571 | 20000 | 60 | 178 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 358.141 | 2.61187 | 200000 | 60 | 19 |
| std::from_chars **STATISTICAL TIE** | 347.234 | 1.56503 | 200000 | 60 | 46 |
| strtoll/strtoull | 159.609 | 1.93028 | 200000 | 60 | 29 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 346.502 | 2.77295 | 400 | 60 | 54 |
| vn::from_chars **STATISTICAL TIE** | 343.323 | 2.89309 | 400 | 60 | 127 |
| strtoll/strtoull | 184.377 | 1.34678 | 400 | 60 | 0 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 319.485 | 0.380068 | 4000 | 60 | 4 |
| vn::from_chars | 313.001 | 0.40684 | 4000 | 60 | 22 |
| strtoll/strtoull | 178.625 | 0.290003 | 4000 | 60 | 55 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 325.054 | 0.531098 | 40000 | 60 | 45 |
| vn::from_chars | 311.034 | 1.16413 | 40000 | 60 | 42 |
| strtoll/strtoull | 168.182 | 2.11291 | 40000 | 60 | 0 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 324.916 | 0.0638929 | 400000 | 60 | 58 |
| vn::from_chars | 315.643 | 0.0502226 | 400000 | 60 | 57 |
| strtoll/strtoull | 162.88 | 1.95673 | 400000 | 60 | 38 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 381.47 | 0 | 400 | 60 | 25 |
| std::from_chars | 343.323 | 2.89309 | 400 | 60 | 58 |
| strtoll/strtoull | 232.061 | 4.40831 | 400 | 60 | 25 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 368.668 | 2.1659 | 4000 | 60 | 60 |
| std::from_chars | 322.375 | 0.499441 | 4000 | 60 | 1 |
| strtoll/strtoull | 211.616 | 0.807958 | 4000 | 60 | 10 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 387.944 | 0.174563 | 40000 | 60 | 14 |
| std::from_chars | 304.843 | 2.39799 | 40000 | 60 | 14 |
| strtoll/strtoull | 209.994 | 1.41115 | 40000 | 60 | 1 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 392.752 | 0.0687879 | 400000 | 60 | 58 |
| std::from_chars | 325.874 | 0.0929877 | 400000 | 60 | 55 |
| strtoll/strtoull | 215.274 | 0.0510848 | 400000 | 60 | 59 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 183.317 | 1.44949 | 400 | 60 | 19 |
| std::from_chars | 145.17 | 2.56928 | 400 | 60 | 48 |
| strtoll/strtoull | 74.5985 | 0.754359 | 400 | 60 | 5 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 434.452 | 0.635068 | 4000 | 60 | 58 |
| std::from_chars | 321.745 | 0.397506 | 4000 | 60 | 45 |
| strtoll/strtoull | 214.213 | 0.293163 | 4000 | 60 | 47 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 434.98 | 0.183142 | 40000 | 60 | 54 |
| std::from_chars | 326.879 | 0.147941 | 40000 | 60 | 56 |
| strtoll/strtoull | 215.36 | 0.131592 | 40000 | 60 | 29 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 392.39 | 2.02552 | 400000 | 60 | 34 |
| std::from_chars | 303.652 | 1.52391 | 400000 | 60 | 56 |
| strtoll/strtoull | 187.872 | 1.76772 | 400000 | 60 | 42 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 381.47 | 0 | 400 | 60 | 0 |
| std::from_chars **STATISTICAL TIE** | 381.47 | 0 | 400 | 60 | 0 |
| strtoll/strtoull | 270.208 | 4.53064 | 400 | 60 | 158 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 497.273 | 0.817261 | 4000 | 60 | 60 |
| std::from_chars | 411.846 | 0.60376 | 4000 | 60 | 51 |
| strtoll/strtoull | 224.989 | 2.00931 | 4000 | 60 | 0 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 494.731 | 0.594567 | 40000 | 60 | 39 |
| std::from_chars | 423.362 | 0.584686 | 40000 | 60 | 5 |
| strtoll/strtoull | 199.906 | 3.88552 | 40000 | 60 | 12 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 500.468 | 0.0939902 | 400000 | 60 | 46 |
| std::from_chars | 425.919 | 0.10632 | 400000 | 60 | 35 |
| strtoll/strtoull | 232.553 | 0.0670795 | 400000 | 60 | 3 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 572.205 | 4.33963 | 800 | 60 | 137 |
| std::from_chars **STATISTICAL TIE** | 495.911 | 4.58923 | 800 | 60 | 413 |
| strtoll/strtoull | 254.313 | 1.01848e-14 | 800 | 60 | 170 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 504.918 | 0.263129 | 8000 | 60 | 25 |
| std::from_chars | 447.126 | 0.181086 | 8000 | 60 | 57 |
| strtoll/strtoull | 249.589 | 2.31078 | 8000 | 60 | 0 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 506.055 | 0.1512 | 80000 | 60 | 4 |
| std::from_chars | 446.096 | 0.194341 | 80000 | 60 | 49 |
| strtoll/strtoull | 256.407 | 0.13704 | 80000 | 60 | 12 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 493.815 | 0.604874 | 800000 | 60 | 26 |
| std::from_chars | 362.439 | 3.59827 | 800000 | 60 | 60 |
| strtoll/strtoull | 220.31 | 2.88609 | 800000 | 60 | 0 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 661.214 | 3.32144 | 800 | 60 | 1 |
| std::from_chars | 476.837 | 4.50988 | 800 | 60 | 56 |
| strtoll/strtoull | 307.295 | 2.65589 | 800 | 60 | 40 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 608.186 | 0.546393 | 8000 | 60 | 55 |
| std::from_chars | 440.521 | 0.368341 | 8000 | 60 | 2 |
| strtoll/strtoull | 302.591 | 0.360081 | 8000 | 60 | 34 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 617.084 | 0.134497 | 80000 | 60 | 60 |
| std::from_chars | 447.919 | 0.138466 | 80000 | 60 | 35 |
| strtoll/strtoull | 306.433 | 0.129144 | 80000 | 60 | 7 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 566.145 | 1.39752 | 800000 | 60 | 28 |
| std::from_chars | 408.805 | 1.72216 | 800000 | 60 | 58 |
| strtoll/strtoull | 266.73 | 2.54839 | 800000 | 60 | 55 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 693.003 | 2.77295 | 800 | 60 | 20 |
| strtoll/strtoull | 298.818 | 2.64239 | 800 | 60 | 18 |
| std::from_chars | 165.939 | 1.4275 | 800 | 60 | 5 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 626.817 | 0.393045 | 8000 | 60 | 29 |
| std::from_chars | 445.879 | 0.233701 | 8000 | 60 | 53 |
| strtoll/strtoull | 302.828 | 0.798017 | 8000 | 60 | 4 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 628.883 | 0.147682 | 80000 | 60 | 17 |
| std::from_chars | 448.28 | 0.150205 | 80000 | 60 | 58 |
| strtoll/strtoull | 291.686 | 0.116766 | 80000 | 60 | 36 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 574.413 | 1.99996 | 800000 | 60 | 12 |
| std::from_chars | 429.757 | 1.26806 | 800000 | 60 | 0 |
| strtoll/strtoull | 252.771 | 2.13786 | 800000 | 60 | 0 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 578.562 | 4.28956 | 800 | 60 | 12 |
| std::from_chars | 406.299 | 6.12516 | 800 | 60 | 60 |
| strtoll/strtoull | 283.983 | 2.46554 | 800 | 60 | 16 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 502.798 | 0.318495 | 8000 | 60 | 2 |
| std::from_chars | 424.446 | 0.282174 | 8000 | 60 | 19 |
| strtoll/strtoull | 273.488 | 0.144121 | 8000 | 60 | 45 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 507.834 | 0.18618 | 80000 | 60 | 1 |
| std::from_chars | 420.339 | 0.723702 | 80000 | 60 | 24 |
| strtoll/strtoull | 251.518 | 2.50617 | 80000 | 60 | 49 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 465.526 | 1.75893 | 800000 | 60 | 60 |
| std::from_chars | 363.747 | 2.5035 | 800000 | 60 | 58 |
| strtoll/strtoull | 248.277 | 1.18517 | 800000 | 60 | 21 |
