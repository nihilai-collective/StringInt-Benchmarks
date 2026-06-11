# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 132.054 | 0.818384 | 100 | 60 | 7 |
| vn::from_chars | 107.652 | 0.860884 | 100 | 60 | 4 |
| strtoll/strtoull | 65.4153 | 0.47299 | 100 | 60 | 7 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 144.323 | 0.251434 | 1000 | 60 | 34 |
| vn::from_chars | 114.976 | 0.515137 | 1000 | 60 | 10 |
| strtoll/strtoull | 68.6976 | 0.778755 | 1000 | 60 | 39 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 146.667 | 0.117259 | 10000 | 60 | 53 |
| vn::from_chars | 120.109 | 0.133003 | 10000 | 60 | 30 |
| strtoll/strtoull | 70.4936 | 0.370949 | 10000 | 60 | 60 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 145.655 | 0.123771 | 100000 | 60 | 38 |
| vn::from_chars | 120.131 | 0.0589165 | 100000 | 60 | 31 |
| strtoll/strtoull | 67.8534 | 0.19777 | 100000 | 60 | 49 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 188.278 | 1.1533 | 100 | 60 | 57 |
| std::from_chars | 129.745 | 0.627592 | 100 | 60 | 48 |
| strtoll/strtoull | 98.2372 | 0.5896 | 100 | 60 | 45 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 213.638 | 0.39414 | 1000 | 60 | 41 |
| std::from_chars | 145.985 | 0.229414 | 1000 | 60 | 44 |
| strtoll/strtoull | 103.501 | 0.148535 | 1000 | 60 | 44 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 207.393 | 0.375481 | 10000 | 60 | 10 |
| std::from_chars | 139.141 | 0.320439 | 10000 | 60 | 20 |
| strtoll/strtoull | 97.2528 | 0.337556 | 10000 | 60 | 25 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 213.854 | 0.30768 | 100000 | 60 | 60 |
| std::from_chars | 138.646 | 0.197931 | 100000 | 60 | 19 |
| strtoll/strtoull | 103.264 | 0.0504801 | 100000 | 60 | 6 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 196.408 | 1.05862 | 100 | 60 | 28 |
| std::from_chars | 126.302 | 1.43939 | 100 | 60 | 58 |
| strtoll/strtoull | 92.898 | 0.553416 | 100 | 60 | 14 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 218.489 | 0.478339 | 1000 | 60 | 33 |
| std::from_chars | 133.934 | 0.366741 | 1000 | 60 | 6 |
| strtoll/strtoull | 96.7779 | 0.157473 | 1000 | 60 | 11 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 239.938 | 0.130682 | 10000 | 60 | 33 |
| std::from_chars | 146.386 | 0.171809 | 10000 | 60 | 42 |
| strtoll/strtoull | 104.495 | 0.144712 | 10000 | 60 | 35 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 225.72 | 0.262594 | 100000 | 60 | 4 |
| std::from_chars | 135.371 | 0.168555 | 100000 | 60 | 52 |
| strtoll/strtoull | 96.652 | 0.162078 | 100000 | 60 | 44 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 155.534 | 0.981779 | 100 | 60 | 60 |
| std::from_chars | 124.292 | 0.687357 | 100 | 60 | 16 |
| strtoll/strtoull | 85.4697 | 0.50391 | 100 | 60 | 4 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 160.864 | 0.424773 | 1000 | 60 | 2 |
| std::from_chars | 127.697 | 0.412833 | 1000 | 60 | 20 |
| strtoll/strtoull | 93.2783 | 0.169623 | 1000 | 60 | 6 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 168.512 | 0.291487 | 10000 | 60 | 34 |
| std::from_chars | 132.523 | 0.332144 | 10000 | 60 | 4 |
| strtoll/strtoull | 92.7313 | 0.312286 | 10000 | 60 | 33 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 177.083 | 0.0969299 | 100000 | 60 | 60 |
| std::from_chars | 138.213 | 0.0643125 | 100000 | 60 | 11 |
| strtoll/strtoull | 97.5884 | 0.0397357 | 100000 | 60 | 25 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 211.66 | 0.665266 | 200 | 60 | 128 |
| vn::from_chars | 205.162 | 0.734075 | 200 | 60 | 152 |
| strtoll/strtoull | 120.537 | 0.321161 | 200 | 60 | 36 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 230.342 | 0.172522 | 2000 | 60 | 50 |
| vn::from_chars | 208.746 | 0.213358 | 2000 | 60 | 54 |
| strtoll/strtoull | 122.736 | 0.120507 | 2000 | 60 | 8 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 226.332 | 0.436723 | 20000 | 60 | 60 |
| vn::from_chars | 209.761 | 0.208392 | 20000 | 60 | 40 |
| strtoll/strtoull | 122.059 | 0.0867069 | 20000 | 60 | 18 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 227.38 | 0.0940237 | 200000 | 60 | 30 |
| vn::from_chars | 210.181 | 0.075535 | 200000 | 60 | 11 |
| strtoll/strtoull | 120.873 | 0.0862814 | 200000 | 60 | 60 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 328.331 | 1.04288 | 200 | 60 | 26 |
| std::from_chars | 198.891 | 0.722496 | 200 | 60 | 60 |
| strtoll/strtoull | 158.585 | 0.444674 | 200 | 60 | 47 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 352.251 | 0.319092 | 2000 | 60 | 19 |
| std::from_chars | 230.312 | 0.18963 | 2000 | 60 | 60 |
| strtoll/strtoull | 163.466 | 0.292833 | 2000 | 60 | 52 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 354.856 | 0.414057 | 20000 | 60 | 2 |
| std::from_chars | 230.753 | 0.154367 | 20000 | 60 | 48 |
| strtoll/strtoull | 163.25 | 0.117327 | 20000 | 60 | 42 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 359.602 | 0.0762825 | 200000 | 60 | 8 |
| std::from_chars | 226.832 | 0.13703 | 200000 | 60 | 42 |
| strtoll/strtoull | 163.771 | 0.183764 | 200000 | 60 | 29 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 343.911 | 0.969246 | 200 | 60 | 59 |
| std::from_chars | 196.893 | 1.12717 | 200 | 60 | 38 |
| strtoll/strtoull | 163.266 | 0.419225 | 200 | 60 | 38 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 346.935 | 0.305552 | 2000 | 60 | 60 |
| std::from_chars | 229.161 | 0.18838 | 2000 | 60 | 60 |
| strtoll/strtoull | 165.332 | 0.123417 | 2000 | 60 | 9 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 347.157 | 0.320621 | 20000 | 60 | 2 |
| std::from_chars | 230.35 | 0.161373 | 20000 | 60 | 50 |
| strtoll/strtoull | 167.803 | 0.133251 | 20000 | 60 | 54 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 324.455 | 0.248123 | 200000 | 60 | 53 |
| std::from_chars | 212.439 | 0.0998617 | 200000 | 60 | 11 |
| strtoll/strtoull | 154.383 | 0.0998679 | 200000 | 60 | 60 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 402.688 | 1.20182 | 200 | 60 | 28 |
| std::from_chars | 287.705 | 0.765032 | 200 | 60 | 53 |
| strtoll/strtoull | 171.689 | 0.352215 | 200 | 60 | 56 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 451.751 | 0.565239 | 2000 | 60 | 40 |
| std::from_chars | 308.322 | 0.333653 | 2000 | 60 | 3 |
| strtoll/strtoull | 171.403 | 0.350863 | 2000 | 60 | 2 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 477.006 | 0.278458 | 20000 | 60 | 20 |
| std::from_chars | 305.13 | 0.2932 | 20000 | 60 | 48 |
| strtoll/strtoull | 183.015 | 0.0928781 | 20000 | 60 | 10 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 448.139 | 0.15467 | 200000 | 60 | 1 |
| std::from_chars | 302.075 | 0.155985 | 200000 | 60 | 2 |
| strtoll/strtoull | 170.079 | 0.0382287 | 200000 | 60 | 59 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 310.237 | 0.48272 | 400 | 60 | 56 |
| std::from_chars | 253.447 | 0.729259 | 400 | 60 | 54 |
| strtoll/strtoull | 166.103 | 0.384664 | 400 | 60 | 55 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 315.437 | 0.154935 | 4000 | 60 | 8 |
| std::from_chars | 256.797 | 0.12165 | 4000 | 60 | 60 |
| strtoll/strtoull | 169.726 | 0.102257 | 4000 | 60 | 25 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 318.441 | 0.238675 | 40000 | 60 | 30 |
| std::from_chars | 257.921 | 0.233139 | 40000 | 60 | 12 |
| strtoll/strtoull | 167.778 | 0.140442 | 40000 | 60 | 13 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 338.129 | 0.163426 | 400000 | 60 | 9 |
| std::from_chars | 273.805 | 0.0641478 | 400000 | 60 | 22 |
| strtoll/strtoull | 181.346 | 0.0592177 | 400000 | 60 | 4 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 439.625 | 0.571708 | 400 | 60 | 44 |
| std::from_chars | 251.806 | 0.440227 | 400 | 60 | 27 |
| strtoll/strtoull | 219.546 | 0.233519 | 400 | 60 | 2 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 459.194 | 0.37543 | 4000 | 60 | 45 |
| std::from_chars | 274.799 | 0.274166 | 4000 | 60 | 47 |
| strtoll/strtoull | 214.713 | 0.42519 | 4000 | 60 | 12 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 436.12 | 0.310722 | 40000 | 60 | 8 |
| std::from_chars | 256.851 | 0.302205 | 40000 | 60 | 38 |
| strtoll/strtoull | 210.431 | 0.387115 | 40000 | 60 | 0 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 431.633 | 0.292796 | 400000 | 60 | 5 |
| std::from_chars | 273.542 | 0.115675 | 400000 | 60 | 53 |
| strtoll/strtoull | 224.57 | 0.0529722 | 400000 | 60 | 20 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 430.909 | 0.649014 | 400 | 60 | 50 |
| std::from_chars | 248.229 | 0.400753 | 400 | 60 | 30 |
| strtoll/strtoull | 211.109 | 0.269409 | 400 | 60 | 59 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 421.353 | 0.275821 | 4000 | 60 | 42 |
| std::from_chars | 253.07 | 0.263921 | 4000 | 60 | 47 |
| strtoll/strtoull | 207.113 | 0.150116 | 4000 | 60 | 44 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 435.492 | 0.311711 | 40000 | 60 | 1 |
| std::from_chars | 255.833 | 0.25868 | 40000 | 60 | 4 |
| strtoll/strtoull | 210.028 | 0.341033 | 40000 | 60 | 41 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 462.019 | 0.0818156 | 400000 | 60 | 58 |
| std::from_chars | 273.808 | 0.130266 | 400000 | 60 | 44 |
| strtoll/strtoull | 222.985 | 0.0670229 | 400000 | 60 | 49 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 561.509 | 0.685558 | 400 | 60 | 50 |
| std::from_chars | 350.86 | 0.385215 | 400 | 60 | 24 |
| strtoll/strtoull | 241.839 | 0.193058 | 400 | 60 | 26 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 588.41 | 0.206765 | 4000 | 60 | 43 |
| std::from_chars | 379.792 | 0.12515 | 4000 | 60 | 26 |
| strtoll/strtoull | 246.168 | 0.0575905 | 4000 | 60 | 44 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 592.069 | 0.176269 | 40000 | 60 | 53 |
| std::from_chars | 384.697 | 0.148296 | 40000 | 60 | 49 |
| strtoll/strtoull | 246.146 | 0.13222 | 40000 | 60 | 60 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 591.77 | 0.066933 | 400000 | 60 | 25 |
| std::from_chars | 385.9 | 0.0817999 | 400000 | 60 | 11 |
| strtoll/strtoull | 246.084 | 0.0778156 | 400000 | 60 | 60 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 582.935 | 0.552975 | 800 | 60 | 60 |
| std::from_chars | 366.897 | 0.450836 | 800 | 60 | 60 |
| strtoll/strtoull | 270.211 | 0.228676 | 800 | 60 | 16 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 608.748 | 0.152744 | 8000 | 60 | 19 |
| std::from_chars | 391.187 | 0.11783 | 8000 | 60 | 11 |
| strtoll/strtoull | 273.273 | 0.0699894 | 8000 | 60 | 26 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 605.925 | 0.160509 | 80000 | 60 | 16 |
| std::from_chars | 388.976 | 0.138977 | 80000 | 60 | 30 |
| strtoll/strtoull | 271.725 | 0.126637 | 80000 | 60 | 33 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 614.311 | 0.0836222 | 800000 | 60 | 1 |
| std::from_chars | 390.018 | 0.0796642 | 800000 | 60 | 24 |
| strtoll/strtoull | 272.824 | 0.0452624 | 800000 | 60 | 58 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 811.915 | 0.319809 | 800 | 60 | 59 |
| std::from_chars | 358.28 | 0.302262 | 800 | 60 | 42 |
| strtoll/strtoull | 321.944 | 0.132849 | 800 | 60 | 5 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 839.152 | 0.1093 | 8000 | 60 | 60 |
| std::from_chars | 373.297 | 0.233096 | 8000 | 60 | 51 |
| strtoll/strtoull | 307.682 | 0.291001 | 8000 | 60 | 32 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 826.404 | 0.199402 | 80000 | 60 | 39 |
| std::from_chars | 390.002 | 0.116564 | 80000 | 60 | 54 |
| strtoll/strtoull | 323.84 | 0.180871 | 80000 | 60 | 59 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 832.988 | 0.070086 | 800000 | 60 | 15 |
| std::from_chars | 386.888 | 0.202923 | 800000 | 60 | 3 |
| strtoll/strtoull | 324.244 | 0.0493874 | 800000 | 60 | 10 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 727.944 | 0.27888 | 800 | 60 | 33 |
| std::from_chars | 360.518 | 0.297718 | 800 | 60 | 40 |
| strtoll/strtoull | 322.312 | 0.141701 | 800 | 60 | 27 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 742.395 | 0.0830045 | 8000 | 60 | 17 |
| std::from_chars | 392.155 | 0.0726367 | 8000 | 60 | 28 |
| strtoll/strtoull | 325.195 | 0.0363165 | 8000 | 60 | 58 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 739.527 | 0.146242 | 80000 | 60 | 30 |
| std::from_chars | 390.844 | 0.0657868 | 80000 | 60 | 56 |
| strtoll/strtoull | 324.261 | 0.0727416 | 80000 | 60 | 52 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 623.115 | 0.714719 | 800000 | 60 | 57 |
| std::from_chars | 377.749 | 0.448462 | 800000 | 60 | 39 |
| strtoll/strtoull | 305.217 | 0.0904144 | 800000 | 60 | 58 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 533.438 | 0.3296 | 800 | 60 | 6 |
| std::from_chars | 332.125 | 0.238445 | 800 | 60 | 60 |
| strtoll/strtoull | 268.908 | 0.114359 | 800 | 60 | 14 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 591.838 | 0.129598 | 8000 | 60 | 3 |
| std::from_chars | 350.413 | 0.465848 | 8000 | 60 | 3 |
| strtoll/strtoull | 290.907 | 0.0379877 | 8000 | 60 | 35 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 591.259 | 0.137707 | 80000 | 60 | 57 |
| std::from_chars | 361.145 | 0.0963873 | 80000 | 60 | 7 |
| strtoll/strtoull | 289.697 | 0.0797606 | 80000 | 60 | 0 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 592.904 | 0.071605 | 800000 | 60 | 55 |
| std::from_chars | 361.075 | 0.0755412 | 800000 | 60 | 0 |
| strtoll/strtoull | 289.908 | 0.0386039 | 800000 | 60 | 48 |
