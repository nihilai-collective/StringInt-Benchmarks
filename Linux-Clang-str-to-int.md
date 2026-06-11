# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 163.57 | 0.676775 | 100 | 60 | 31 |
| std::from_chars | 132.837 | 0.934511 | 100 | 60 | 21 |
| strtoll/strtoull | 89.1697 | 0.470033 | 100 | 60 | 54 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 173.323 | 0.221435 | 1000 | 60 | 60 |
| std::from_chars | 136.699 | 0.284808 | 1000 | 60 | 44 |
| strtoll/strtoull | 93.0908 | 0.167809 | 1000 | 60 | 46 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 164.31 | 0.412634 | 10000 | 60 | 23 |
| std::from_chars | 134.087 | 0.861268 | 10000 | 60 | 0 |
| strtoll/strtoull | 90.414 | 0.423199 | 10000 | 60 | 23 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 163.941 | 0.94059 | 100000 | 60 | 18 |
| std::from_chars | 135.159 | 0.742234 | 100000 | 60 | 57 |
| strtoll/strtoull | 85.3288 | 0.995914 | 100000 | 60 | 60 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 268.339 | 0.994005 | 100 | 60 | 55 |
| std::from_chars | 231.362 | 0.783202 | 100 | 60 | 56 |
| strtoll/strtoull | 121.817 | 0.772618 | 100 | 60 | 56 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 300.101 | 0.420046 | 1000 | 60 | 52 |
| std::from_chars | 233.874 | 1.42379 | 1000 | 60 | 52 |
| strtoll/strtoull | 126.589 | 0.24604 | 1000 | 60 | 3 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 298.757 | 0.556893 | 10000 | 60 | 180 |
| std::from_chars | 240.311 | 0.690645 | 10000 | 60 | 148 |
| strtoll/strtoull | 131.156 | 0.55416 | 10000 | 60 | 1 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 292.109 | 0.574032 | 100000 | 60 | 47 |
| std::from_chars | 238.28 | 1.5545 | 100000 | 60 | 56 |
| strtoll/strtoull | 120.514 | 1.41586 | 100000 | 60 | 11 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 297.88 | 0.967994 | 100 | 60 | 12 |
| std::from_chars | 237.626 | 0.74574 | 100 | 60 | 45 |
| strtoll/strtoull | 133.311 | 0.774525 | 100 | 60 | 12 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 329.415 | 0.33213 | 1000 | 60 | 12 |
| std::from_chars | 236.346 | 0.666578 | 1000 | 60 | 15 |
| strtoll/strtoull | 137.267 | 0.281832 | 1000 | 60 | 33 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 303.687 | 0.486542 | 10000 | 60 | 5 |
| std::from_chars | 226.76 | 0.50695 | 10000 | 60 | 27 |
| strtoll/strtoull | 133.467 | 0.589547 | 10000 | 60 | 1 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 310.224 | 0.443381 | 100000 | 60 | 10 |
| std::from_chars | 234.676 | 1.07489 | 100000 | 60 | 6 |
| strtoll/strtoull | 122.522 | 1.56578 | 100000 | 60 | 1 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 235.804 | 0.969583 | 100 | 60 | 53 |
| std::from_chars | 212.211 | 0.665437 | 100 | 60 | 43 |
| strtoll/strtoull | 113.357 | 0.535022 | 100 | 60 | 1 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 237.102 | 0.381984 | 1000 | 60 | 57 |
| std::from_chars | 220.019 | 0.435418 | 1000 | 60 | 42 |
| strtoll/strtoull | 74.7098 | 0.314786 | 1000 | 60 | 59 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 249.581 | 0.530734 | 10000 | 60 | 20 |
| std::from_chars | 229.205 | 0.418418 | 10000 | 60 | 9 |
| strtoll/strtoull | 112.728 | 0.484264 | 10000 | 60 | 39 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 235.771 | 1.10165 | 100000 | 60 | 60 |
| std::from_chars | 222.217 | 1.03969 | 100000 | 60 | 40 |
| strtoll/strtoull | 109.132 | 1.26021 | 100000 | 60 | 54 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 271.856 | 0.55941 | 200 | 60 | 35 |
| std::from_chars | 225.213 | 1.02393 | 200 | 60 | 5 |
| strtoll/strtoull | 146.983 | 0.491316 | 200 | 60 | 38 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 292.03 | 0.201913 | 2000 | 60 | 7 |
| std::from_chars | 242.204 | 0.408925 | 2000 | 60 | 1 |
| strtoll/strtoull | 154.426 | 0.712337 | 2000 | 60 | 51 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 276.336 | 0.79944 | 20000 | 60 | 43 |
| std::from_chars | 235.049 | 0.511454 | 20000 | 60 | 60 |
| strtoll/strtoull | 149.447 | 0.434006 | 20000 | 60 | 12 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 272.548 | 0.771032 | 200000 | 60 | 54 |
| std::from_chars | 219.579 | 1.03321 | 200000 | 60 | 42 |
| strtoll/strtoull | 146.215 | 1.02054 | 200000 | 60 | 60 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 382.928 | 0.93008 | 200 | 60 | 60 |
| vn::from_chars | 299.715 | 0.612179 | 200 | 60 | 32 |
| strtoll/strtoull | 120.255 | 0.420432 | 200 | 60 | 21 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 465.169 | 0.277104 | 2000 | 60 | 35 |
| std::from_chars | 380.406 | 0.50344 | 2000 | 60 | 6 |
| strtoll/strtoull | 201.671 | 0.17626 | 2000 | 60 | 35 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 462.008 | 0.434018 | 20000 | 60 | 59 |
| std::from_chars | 393.195 | 0.640728 | 20000 | 60 | 59 |
| strtoll/strtoull | 198.721 | 0.537634 | 20000 | 60 | 60 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 429.968 | 1.04905 | 200000 | 60 | 31 |
| std::from_chars | 358.97 | 1.29998 | 200000 | 60 | 46 |
| strtoll/strtoull | 186.098 | 1.08594 | 200000 | 60 | 10 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 465.007 | 0.735182 | 200 | 60 | 47 |
| std::from_chars | 376.21 | 1.04632 | 200 | 60 | 51 |
| strtoll/strtoull | 198.758 | 0.578886 | 200 | 60 | 22 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 489.4 | 0.283791 | 2000 | 60 | 23 |
| std::from_chars | 373.095 | 1.06792 | 2000 | 60 | 59 |
| strtoll/strtoull | 206.967 | 0.266903 | 2000 | 60 | 55 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 449.355 | 0.761263 | 20000 | 60 | 22 |
| std::from_chars | 383.309 | 0.647519 | 20000 | 60 | 60 |
| strtoll/strtoull | 203.817 | 0.546433 | 20000 | 60 | 46 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 447.673 | 1.01569 | 200000 | 60 | 59 |
| std::from_chars | 366.329 | 0.893674 | 200000 | 60 | 43 |
| strtoll/strtoull | 203.385 | 0.986885 | 200000 | 60 | 47 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 545.64 | 0.948449 | 200 | 60 | 56 |
| std::from_chars | 503.874 | 1.0742 | 200 | 60 | 52 |
| strtoll/strtoull | 200.177 | 0.520544 | 200 | 60 | 8 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 596.75 | 0.322545 | 2000 | 60 | 37 |
| std::from_chars | 531.031 | 0.541192 | 2000 | 60 | 15 |
| strtoll/strtoull | 207.433 | 0.380332 | 2000 | 60 | 47 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 548.319 | 1.20329 | 20000 | 60 | 60 |
| std::from_chars | 521.552 | 0.484037 | 20000 | 60 | 7 |
| strtoll/strtoull | 199.402 | 0.505459 | 20000 | 60 | 56 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 561.857 | 0.489 | 200000 | 60 | 155 |
| vn::from_chars **STATISTICAL TIE** | 557.252 | 1.22523 | 200000 | 60 | 24 |
| strtoll/strtoull | 190.13 | 0.744075 | 200000 | 60 | 121 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 400.996 | 0.518437 | 400 | 60 | 58 |
| std::from_chars | 309.545 | 0.722813 | 400 | 60 | 19 |
| strtoll/strtoull | 232.455 | 0.410742 | 400 | 60 | 43 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 332.495 | 0.302493 | 4000 | 60 | 52 |
| vn::from_chars | 294.761 | 1.42651 | 4000 | 60 | 34 |
| strtoll/strtoull | 249.285 | 0.167886 | 4000 | 60 | 4 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 417.367 | 0.383515 | 40000 | 60 | 21 |
| std::from_chars | 325.934 | 0.639379 | 40000 | 60 | 41 |
| strtoll/strtoull | 229.517 | 0.867382 | 40000 | 60 | 2 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 398.325 | 0.900706 | 400000 | 60 | 3 |
| std::from_chars | 316.618 | 1.06305 | 400000 | 60 | 51 |
| strtoll/strtoull | 227.986 | 1.29245 | 400000 | 60 | 52 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 539.404 | 0.555327 | 400 | 60 | 60 |
| std::from_chars | 427.778 | 0.537243 | 400 | 60 | 59 |
| strtoll/strtoull | 277.49 | 0.346771 | 400 | 60 | 60 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 589.226 | 0.190521 | 4000 | 60 | 52 |
| std::from_chars | 447.51 | 0.308281 | 4000 | 60 | 13 |
| strtoll/strtoull | 293.612 | 0.220498 | 4000 | 60 | 55 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 496.663 | 1.88887 | 40000 | 60 | 60 |
| std::from_chars | 452.252 | 0.593256 | 40000 | 60 | 13 |
| strtoll/strtoull | 296.468 | 0.7076 | 40000 | 60 | 55 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 504.341 | 1.26969 | 400000 | 60 | 3 |
| std::from_chars | 425.884 | 1.20725 | 400000 | 60 | 17 |
| strtoll/strtoull | 277.456 | 1.39526 | 400000 | 60 | 58 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 560.349 | 0.398483 | 400 | 60 | 52 |
| std::from_chars | 426.583 | 0.770943 | 400 | 60 | 58 |
| strtoll/strtoull | 297.771 | 0.430527 | 400 | 60 | 1 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 601.799 | 0.75315 | 4000 | 60 | 55 |
| std::from_chars | 458.032 | 0.356647 | 4000 | 60 | 8 |
| strtoll/strtoull | 324.135 | 0.176558 | 4000 | 60 | 44 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 505.398 | 1.53419 | 40000 | 60 | 35 |
| std::from_chars | 460.55 | 0.548477 | 40000 | 60 | 8 |
| strtoll/strtoull | 281.6 | 0.893759 | 40000 | 60 | 31 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 558.977 | 1.02113 | 400000 | 60 | 17 |
| std::from_chars | 437.166 | 1.41001 | 400000 | 60 | 58 |
| strtoll/strtoull | 290.288 | 1.37906 | 400000 | 60 | 8 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 651.985 | 0.447944 | 400 | 60 | 23 |
| std::from_chars | 360.558 | 1.09087 | 400 | 60 | 7 |
| strtoll/strtoull | 237.826 | 0.336701 | 400 | 60 | 1 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 728.836 | 0.171034 | 4000 | 60 | 55 |
| std::from_chars | 579.002 | 0.295142 | 4000 | 60 | 12 |
| strtoll/strtoull | 291.743 | 1.30773 | 4000 | 60 | 11 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 679.088 | 0.775333 | 40000 | 60 | 5 |
| std::from_chars | 567.198 | 0.897999 | 40000 | 60 | 9 |
| strtoll/strtoull | 242.717 | 1.31304 | 40000 | 60 | 53 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 672.623 | 1.16624 | 400000 | 60 | 55 |
| std::from_chars | 535.685 | 0.720364 | 400000 | 60 | 49 |
| strtoll/strtoull | 227.367 | 1.08877 | 400000 | 60 | 40 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 742.588 | 0.315304 | 800 | 60 | 37 |
| std::from_chars | 512.572 | 0.701447 | 800 | 60 | 54 |
| strtoll/strtoull | 328.304 | 0.15191 | 800 | 60 | 60 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 739.11 | 0.131507 | 8000 | 60 | 60 |
| std::from_chars | 513.17 | 0.171023 | 8000 | 60 | 25 |
| strtoll/strtoull | 380.041 | 1.31927 | 8000 | 60 | 6 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 655.662 | 1.46526 | 80000 | 60 | 43 |
| std::from_chars | 525.655 | 0.931523 | 80000 | 60 | 19 |
| strtoll/strtoull | 333.149 | 0.850521 | 80000 | 60 | 23 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 673.691 | 1.47259 | 800000 | 60 | 19 |
| std::from_chars | 537.36 | 1.30455 | 800000 | 60 | 28 |
| strtoll/strtoull | 329.342 | 1.46345 | 800000 | 60 | 57 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 918.854 | 0.200406 | 800 | 60 | 1 |
| std::from_chars | 599.879 | 0.741058 | 800 | 60 | 26 |
| strtoll/strtoull | 321.118 | 0.323226 | 800 | 60 | 0 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 987.2 | 0.149068 | 8000 | 60 | 34 |
| std::from_chars | 610.865 | 0.182152 | 8000 | 60 | 18 |
| strtoll/strtoull | 324.668 | 0.188649 | 8000 | 60 | 11 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 856.564 | 0.649234 | 80000 | 60 | 46 |
| std::from_chars | 737.017 | 1.23067 | 80000 | 60 | 0 |
| strtoll/strtoull | 419.857 | 0.884587 | 80000 | 60 | 21 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 896.886 | 1.29332 | 800000 | 60 | 19 |
| std::from_chars | 685.941 | 1.39443 | 800000 | 60 | 10 |
| strtoll/strtoull | 382.13 | 1.57706 | 800000 | 60 | 24 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 942.388 | 0.157427 | 800 | 60 | 22 |
| std::from_chars | 588.669 | 0.696109 | 800 | 60 | 9 |
| strtoll/strtoull | 347.761 | 0.0412865 | 800 | 60 | 24 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 817.028 | 0.203884 | 8000 | 60 | 21 |
| std::from_chars | 616.166 | 0.920363 | 8000 | 60 | 1 |
| strtoll/strtoull | 269.594 | 1.39346 | 8000 | 60 | 11 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 809.073 | 0.916031 | 80000 | 60 | 15 |
| std::from_chars | 713.317 | 1.25443 | 80000 | 60 | 60 |
| strtoll/strtoull | 487.205 | 1.33192 | 80000 | 60 | 45 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 784.925 | 1.53493 | 800000 | 60 | 53 |
| std::from_chars | 715.005 | 1.33607 | 800000 | 60 | 18 |
| strtoll/strtoull | 448.757 | 2.03908 | 800000 | 60 | 60 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 509.08 | 0.190228 | 800 | 60 | 34 |
| std::from_chars | 393.876 | 1.05586 | 800 | 60 | 9 |
| strtoll/strtoull | 239.703 | 0.135266 | 800 | 60 | 23 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 828.235 | 0.171391 | 8000 | 60 | 13 |
| std::from_chars | 572.562 | 0.426462 | 8000 | 60 | 59 |
| strtoll/strtoull | 350.91 | 0.56298 | 8000 | 60 | 4 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 755.163 | 1.44695 | 80000 | 60 | 0 |
| std::from_chars | 589.968 | 0.780711 | 80000 | 60 | 54 |
| strtoll/strtoull | 336.028 | 0.755894 | 80000 | 60 | 53 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 768.974 | 1.11912 | 800000 | 60 | 60 |
| std::from_chars | 612.8 | 1.19191 | 800000 | 60 | 47 |
| strtoll/strtoull | 321.044 | 0.956287 | 800000 | 60 | 53 |
