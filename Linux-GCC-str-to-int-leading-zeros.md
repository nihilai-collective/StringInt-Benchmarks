# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 59.7241 | 0.388691 | 100 | 60 | 132 |
| std::from_chars | 57.9314 | 0.764985 | 100 | 60 | 127 |
| strtoll/strtoull | 41.2529 | 0.331609 | 100 | 60 | 138 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 61.5431 | 0.435891 | 1000 | 60 | 14 |
| std::from_chars | 57.3016 | 0.513157 | 1000 | 60 | 55 |
| strtoll/strtoull | 40.5008 | 0.164929 | 1000 | 60 | 25 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 60.0158 | 0.398331 | 10000 | 60 | 48 |
| vn::from_chars | 55.1476 | 0.473566 | 10000 | 60 | 27 |
| strtoll/strtoull | 41.1146 | 0.31461 | 10000 | 60 | 60 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 62.6556 | 0.757643 | 100000 | 60 | 58 |
| vn::from_chars | 55.8697 | 0.746624 | 100000 | 60 | 10 |
| strtoll/strtoull | 40.1444 | 1.048 | 100000 | 60 | 46 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 72.2004 | 1.31522 | 100 | 60 | 3 |
| vn::from_chars | 59.7842 | 0.552926 | 100 | 60 | 25 |
| strtoll/strtoull | 48.9559 | 0.265252 | 100 | 60 | 7 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 78.7022 | 0.316042 | 1000 | 60 | 60 |
| vn::from_chars | 52.1587 | 1.16566 | 1000 | 60 | 1 |
| strtoll/strtoull | 47.0007 | 0.459075 | 1000 | 60 | 35 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 73.8852 | 0.741213 | 10000 | 60 | 50 |
| vn::from_chars | 62.066 | 0.42913 | 10000 | 60 | 57 |
| strtoll/strtoull | 47.1735 | 0.368611 | 10000 | 60 | 48 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 75.6019 | 0.582819 | 100000 | 60 | 2 |
| vn::from_chars | 63.5991 | 0.43204 | 100000 | 60 | 48 |
| strtoll/strtoull | 46.221 | 0.599858 | 100000 | 60 | 46 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 73.732 | 0.647752 | 100 | 60 | 59 |
| vn::from_chars | 67.8131 | 0.409817 | 100 | 60 | 45 |
| strtoll/strtoull | 48.4823 | 0.290243 | 100 | 60 | 60 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 79.1994 | 0.347868 | 1000 | 60 | 35 |
| vn::from_chars | 68.9785 | 0.81453 | 1000 | 60 | 34 |
| strtoll/strtoull | 45.1867 | 1.32468 | 1000 | 60 | 60 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 75.3126 | 0.349508 | 10000 | 60 | 34 |
| vn::from_chars | 66.2852 | 0.34515 | 10000 | 60 | 32 |
| strtoll/strtoull | 47.8474 | 0.48463 | 10000 | 60 | 16 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 75.3176 | 0.869607 | 100000 | 60 | 0 |
| vn::from_chars | 65.076 | 0.737223 | 100000 | 60 | 6 |
| strtoll/strtoull | 47.623 | 0.826035 | 100000 | 60 | 50 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 73.7902 | 0.649518 | 100 | 60 | 5 |
| vn::from_chars | 69.0214 | 0.367613 | 100 | 60 | 24 |
| strtoll/strtoull | 45.5224 | 0.497794 | 100 | 60 | 10 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 74.7433 | 0.465699 | 1000 | 60 | 59 |
| vn::from_chars | 62.8104 | 0.257245 | 1000 | 60 | 9 |
| strtoll/strtoull | 49.1312 | 0.20116 | 1000 | 60 | 28 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 74.5069 | 0.428876 | 10000 | 60 | 53 |
| vn::from_chars | 60.2421 | 1.09923 | 10000 | 60 | 43 |
| strtoll/strtoull | 43.655 | 0.849448 | 10000 | 60 | 60 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 73.6615 | 0.719848 | 100000 | 60 | 14 |
| vn::from_chars | 65.571 | 0.706897 | 100000 | 60 | 28 |
| strtoll/strtoull | 46.7938 | 0.71303 | 100000 | 60 | 43 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 124.035 | 0.387817 | 200 | 60 | 47 |
| std::from_chars | 108.967 | 0.594013 | 200 | 60 | 15 |
| strtoll/strtoull | 76.8331 | 0.300515 | 200 | 60 | 59 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 128.447 | 0.481505 | 2000 | 60 | 13 |
| std::from_chars | 118.684 | 0.730256 | 2000 | 60 | 3 |
| strtoll/strtoull | 77.7125 | 0.112712 | 2000 | 60 | 9 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 120.097 | 0.290843 | 20000 | 60 | 168 |
| vn::from_chars | 116.598 | 0.367996 | 20000 | 60 | 180 |
| strtoll/strtoull | 77.2939 | 0.575985 | 20000 | 60 | 58 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 121.662 | 0.685552 | 200000 | 60 | 420 |
| std::from_chars **STATISTICAL TIE** | 119.799 | 0.840944 | 200000 | 60 | 887 |
| strtoll/strtoull | 75.5913 | 0.826606 | 200000 | 60 | 59 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 152.843 | 0.373036 | 200 | 60 | 19 |
| std::from_chars | 145.06 | 0.45908 | 200 | 60 | 49 |
| strtoll/strtoull | 89.631 | 0.218707 | 200 | 60 | 9 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 161.009 | 0.157653 | 2000 | 60 | 48 |
| std::from_chars | 144.634 | 0.332281 | 2000 | 60 | 45 |
| strtoll/strtoull | 85.751 | 0.585248 | 2000 | 60 | 42 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 142.663 | 0.684039 | 20000 | 60 | 54 |
| std::from_chars | 137.01 | 0.385101 | 20000 | 60 | 44 |
| strtoll/strtoull | 91.0428 | 0.338728 | 20000 | 60 | 58 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 146.23 | 0.730274 | 200000 | 60 | 41 |
| std::from_chars | 141.02 | 0.7612 | 200000 | 60 | 2 |
| strtoll/strtoull | 85.2297 | 0.794208 | 200000 | 60 | 18 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 163.806 | 0.403555 | 200 | 60 | 14 |
| std::from_chars | 146.107 | 0.539728 | 200 | 60 | 27 |
| strtoll/strtoull | 94.7227 | 0.221899 | 200 | 60 | 56 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 173.52 | 0.166406 | 2000 | 60 | 42 |
| std::from_chars | 144.493 | 0.311206 | 2000 | 60 | 4 |
| strtoll/strtoull | 95.8301 | 0.113137 | 2000 | 60 | 54 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 152.094 | 0.526491 | 20000 | 60 | 0 |
| std::from_chars | 139.814 | 0.55404 | 20000 | 60 | 1 |
| strtoll/strtoull | 91.2703 | 0.406048 | 20000 | 60 | 7 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 153.724 | 0.80837 | 200000 | 60 | 8 |
| std::from_chars | 143.308 | 0.634549 | 200000 | 60 | 22 |
| strtoll/strtoull | 90.3825 | 0.714813 | 200000 | 60 | 54 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 176.609 | 0.356446 | 200 | 60 | 55 |
| std::from_chars | 130.397 | 0.517989 | 200 | 60 | 26 |
| strtoll/strtoull | 87.1256 | 0.291754 | 200 | 60 | 60 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 187.258 | 0.188305 | 2000 | 60 | 24 |
| std::from_chars | 136.225 | 0.332601 | 2000 | 60 | 60 |
| strtoll/strtoull | 94.4402 | 0.11665 | 2000 | 60 | 34 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 162.316 | 1.0123 | 20000 | 60 | 0 |
| std::from_chars | 128.978 | 0.48118 | 20000 | 60 | 58 |
| strtoll/strtoull | 80.3766 | 1.32536 | 20000 | 60 | 59 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 171.893 | 0.634103 | 200000 | 60 | 44 |
| std::from_chars | 139.552 | 0.757563 | 200000 | 60 | 34 |
| strtoll/strtoull | 88.2727 | 1.2123 | 200000 | 60 | 29 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 249.152 | 0.43353 | 400 | 60 | 4 |
| std::from_chars | 208.747 | 0.612269 | 400 | 60 | 13 |
| strtoll/strtoull | 146.127 | 0.315171 | 400 | 60 | 60 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 234.6 | 1.61446 | 4000 | 60 | 10 |
| std::from_chars | 180.273 | 1.69319 | 4000 | 60 | 60 |
| strtoll/strtoull | 141.932 | 1.02683 | 4000 | 60 | 60 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 233.199 | 0.411675 | 40000 | 60 | 35 |
| std::from_chars | 204.47 | 0.378145 | 40000 | 60 | 60 |
| strtoll/strtoull | 141.864 | 0.393596 | 40000 | 60 | 21 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 236.079 | 0.914495 | 400000 | 60 | 48 |
| std::from_chars | 184.196 | 1.2791 | 400000 | 60 | 4 |
| strtoll/strtoull | 139.522 | 0.71835 | 400000 | 60 | 17 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 284.104 | 0.348042 | 400 | 60 | 57 |
| std::from_chars | 240.886 | 0.578731 | 400 | 60 | 2 |
| strtoll/strtoull | 158.657 | 0.201132 | 400 | 60 | 53 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 292.781 | 0.693191 | 4000 | 60 | 54 |
| std::from_chars | 206.867 | 0.249407 | 4000 | 60 | 59 |
| strtoll/strtoull | 159.789 | 0.562995 | 4000 | 60 | 36 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 266.168 | 0.577654 | 40000 | 60 | 60 |
| std::from_chars | 234.513 | 0.462338 | 40000 | 60 | 33 |
| strtoll/strtoull | 156.144 | 0.692921 | 40000 | 60 | 60 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 273.363 | 0.849222 | 400000 | 60 | 58 |
| std::from_chars | 217.063 | 0.811947 | 400000 | 60 | 54 |
| strtoll/strtoull | 156.69 | 0.806652 | 400000 | 60 | 13 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 301.492 | 0.476612 | 400 | 60 | 35 |
| std::from_chars | 241.28 | 0.681333 | 400 | 60 | 60 |
| strtoll/strtoull | 168.118 | 0.207527 | 400 | 60 | 60 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 265.62 | 0.526907 | 4000 | 60 | 58 |
| std::from_chars | 227.611 | 0.305065 | 4000 | 60 | 34 |
| strtoll/strtoull | 169.425 | 0.48835 | 4000 | 60 | 0 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 261.352 | 0.876529 | 40000 | 60 | 40 |
| std::from_chars | 236.592 | 0.524076 | 40000 | 60 | 55 |
| strtoll/strtoull | 160.946 | 0.628188 | 40000 | 60 | 35 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 289.029 | 0.81878 | 400000 | 60 | 55 |
| std::from_chars | 224.047 | 0.893543 | 400000 | 60 | 0 |
| strtoll/strtoull | 160.501 | 0.794658 | 400000 | 60 | 60 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 342.529 | 0.452387 | 400 | 60 | 11 |
| std::from_chars | 221.862 | 0.782795 | 400 | 60 | 60 |
| strtoll/strtoull | 160.153 | 0.164882 | 400 | 60 | 16 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 306.154 | 1.38751 | 4000 | 60 | 0 |
| std::from_chars | 234.066 | 0.22116 | 4000 | 60 | 60 |
| strtoll/strtoull | 160.899 | 0.685275 | 4000 | 60 | 60 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 271.451 | 1.80206 | 40000 | 60 | 60 |
| std::from_chars | 210.417 | 1.70035 | 40000 | 60 | 18 |
| strtoll/strtoull | 152.204 | 1.29115 | 40000 | 60 | 35 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 320.061 | 1.15568 | 400000 | 60 | 23 |
| std::from_chars | 233.651 | 0.989115 | 400000 | 60 | 26 |
| strtoll/strtoull | 159.086 | 0.67512 | 400000 | 60 | 22 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 475.958 | 0.287459 | 800 | 60 | 25 |
| std::from_chars | 330.849 | 0.659419 | 800 | 60 | 9 |
| strtoll/strtoull | 245.613 | 0.492329 | 800 | 60 | 25 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 473.28 | 0.372745 | 8000 | 60 | 19 |
| std::from_chars | 295.667 | 1.04815 | 8000 | 60 | 45 |
| strtoll/strtoull | 247.31 | 0.64763 | 8000 | 60 | 22 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 447.428 | 0.537425 | 80000 | 60 | 60 |
| std::from_chars | 335.16 | 0.385607 | 80000 | 60 | 52 |
| strtoll/strtoull | 235.756 | 0.682973 | 80000 | 60 | 15 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 431.275 | 1.60717 | 800000 | 60 | 39 |
| std::from_chars | 336.479 | 0.946159 | 800000 | 60 | 60 |
| strtoll/strtoull | 236 | 0.840396 | 800000 | 60 | 38 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 552.683 | 0.312357 | 800 | 60 | 9 |
| std::from_chars | 388.672 | 0.547047 | 800 | 60 | 60 |
| strtoll/strtoull | 270.7 | 0.138708 | 800 | 60 | 41 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 540.096 | 0.324604 | 8000 | 60 | 21 |
| std::from_chars | 379.962 | 0.448537 | 8000 | 60 | 3 |
| strtoll/strtoull | 266.813 | 0.347136 | 8000 | 60 | 26 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 518.281 | 0.380256 | 80000 | 60 | 52 |
| std::from_chars | 316.137 | 1.89394 | 80000 | 60 | 60 |
| strtoll/strtoull | 246.82 | 1.25846 | 80000 | 60 | 59 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 529.926 | 0.971186 | 800000 | 60 | 17 |
| std::from_chars | 387.024 | 0.848716 | 800000 | 60 | 37 |
| strtoll/strtoull | 259.322 | 0.817104 | 800000 | 60 | 59 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 550.737 | 0.393875 | 800 | 60 | 23 |
| std::from_chars | 355.471 | 0.99369 | 800 | 60 | 1 |
| strtoll/strtoull | 278.131 | 0.19878 | 800 | 60 | 60 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 470.748 | 0.76004 | 8000 | 60 | 39 |
| std::from_chars | 372.026 | 0.332222 | 8000 | 60 | 6 |
| strtoll/strtoull | 234.618 | 0.478052 | 8000 | 60 | 50 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 449.15 | 0.454315 | 80000 | 60 | 4 |
| std::from_chars | 370.366 | 1.11865 | 80000 | 60 | 2 |
| strtoll/strtoull | 259.741 | 1.32798 | 80000 | 60 | 47 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 540.655 | 0.812507 | 800000 | 60 | 51 |
| std::from_chars | 383.963 | 1.07711 | 800000 | 60 | 16 |
| strtoll/strtoull | 268.412 | 0.770194 | 800000 | 60 | 39 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 478.95 | 0.37487 | 800 | 60 | 1 |
| std::from_chars | 380.995 | 0.677567 | 800 | 60 | 13 |
| strtoll/strtoull | 250.45 | 0.163329 | 800 | 60 | 56 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 434.323 | 0.618574 | 8000 | 60 | 17 |
| std::from_chars | 278.782 | 2.89512 | 8000 | 60 | 54 |
| strtoll/strtoull | 235.169 | 0.988892 | 8000 | 60 | 32 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 461.707 | 0.414385 | 80000 | 60 | 57 |
| std::from_chars | 378.906 | 0.530144 | 80000 | 60 | 19 |
| strtoll/strtoull | 230.231 | 1.15236 | 80000 | 60 | 60 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 465.641 | 0.822013 | 800000 | 60 | 51 |
| std::from_chars | 387.592 | 0.948941 | 800000 | 60 | 48 |
| strtoll/strtoull | 239.078 | 0.649201 | 800000 | 60 | 6 |
