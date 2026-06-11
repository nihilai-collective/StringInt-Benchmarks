# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 63.5783 | 4.60287 | 100 | 60 | 54 |
| vn::from_chars | 52.1872 | 4.03664 | 100 | 60 | 46 |
| strtoll/strtoull | 36.2926 | 2.56928 | 100 | 60 | 11 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.6112 | 0.350939 | 1000 | 60 | 18 |
| vn::from_chars | 49.6915 | 0.263008 | 1000 | 60 | 41 |
| strtoll/strtoull | 35.4183 | 0.215195 | 1000 | 60 | 26 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.1975 | 0.311013 | 10000 | 60 | 37 |
| vn::from_chars | 42.2814 | 2.97611 | 10000 | 60 | 24 |
| strtoll/strtoull | 34.5481 | 1.17522 | 10000 | 60 | 0 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 52.4114 | 0.810178 | 100000 | 60 | 58 |
| vn::from_chars | 49.9979 | 0.0431484 | 100000 | 60 | 21 |
| strtoll/strtoull | 35.223 | 0.0575851 | 100000 | 60 | 0 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 65.9625 | 4.57573 | 100 | 60 | 43 |
| vn::from_chars **STATISTICAL TIE** | 61.9888 | 4.58923 | 100 | 60 | 888 |
| strtoll/strtoull | 41.5908 | 2.41902 | 100 | 60 | 361 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.6112 | 0.350939 | 1000 | 60 | 42 |
| vn::from_chars | 53.3455 | 0.244169 | 1000 | 60 | 58 |
| strtoll/strtoull | 40.082 | 0.224464 | 1000 | 60 | 30 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.7614 | 0.290983 | 10000 | 60 | 146 |
| vn::from_chars | 53.7361 | 1.35521 | 10000 | 60 | 164 |
| strtoll/strtoull | 37.8527 | 1.89605 | 10000 | 60 | 20 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 55.1653 | 0.102275 | 100000 | 60 | 37 |
| std::from_chars | 53.5653 | 0.26433 | 100000 | 60 | 145 |
| strtoll/strtoull | 38.9432 | 1.21528 | 100000 | 60 | 60 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 65.9625 | 4.57573 | 100 | 60 | 14 |
| std::from_chars **STATISTICAL TIE** | 64.373 | 4.59972 | 100 | 60 | 122 |
| strtoll/strtoull | 42.1206 | 2.34325 | 100 | 60 | 46 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 58.7865 | 0.328412 | 1000 | 60 | 57 |
| vn::from_chars **STATISTICAL TIE** | 58.6112 | 0.350939 | 1000 | 60 | 890 |
| strtoll/strtoull | 40.1683 | 0.242466 | 1000 | 60 | 294 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 58.3498 | 0.554588 | 10000 | 60 | 120 |
| vn::from_chars **STATISTICAL TIE** | 58.053 | 0.152173 | 10000 | 60 | 45 |
| strtoll/strtoull | 39.0932 | 1.2039 | 10000 | 60 | 266 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 55.3029 | 0.472281 | 100000 | 60 | 6 |
| vn::from_chars **STATISTICAL TIE** | 54.4986 | 1.19347 | 100000 | 60 | 150 |
| strtoll/strtoull | 38.0599 | 1.13643 | 100000 | 60 | 49 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 65.1677 | 4.59053 | 100 | 60 | 176 |
| vn::from_chars **STATISTICAL TIE** | 64.373 | 4.59972 | 100 | 60 | 139 |
| strtoll/strtoull | 41.8557 | 2.38243 | 100 | 60 | 176 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 57.91 | 0.393895 | 1000 | 60 | 896 |
| vn::from_chars **STATISTICAL TIE** | 57.0919 | 0.360278 | 1000 | 60 | 172 |
| strtoll/strtoull | 39.7456 | 0.198524 | 1000 | 60 | 15 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 57.6784 | 0.265387 | 10000 | 60 | 18 |
| vn::from_chars | 53.8867 | 1.73267 | 10000 | 60 | 17 |
| strtoll/strtoull | 39.6414 | 0.128888 | 10000 | 60 | 59 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 55.1951 | 0.849102 | 100000 | 60 | 1 |
| std::from_chars | 50.6322 | 1.92246 | 100000 | 60 | 58 |
| strtoll/strtoull | 34.1783 | 2.62156 | 100000 | 60 | 58 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 122.388 | 4.57132 | 200 | 60 | 1 |
| std::from_chars | 95.3674 | 0 | 200 | 60 | 165 |
| strtoll/strtoull | 65.9625 | 1.79528 | 200 | 60 | 179 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 114.534 | 0.375745 | 2000 | 60 | 44 |
| std::from_chars | 97.8771 | 0.333818 | 2000 | 60 | 22 |
| strtoll/strtoull | 64.1264 | 0.19273 | 2000 | 60 | 31 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 114.334 | 0.162937 | 20000 | 60 | 20 |
| std::from_chars | 97.6827 | 0.338779 | 20000 | 60 | 6 |
| strtoll/strtoull | 64.1322 | 0.11677 | 20000 | 60 | 53 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 113.914 | 0.07555 | 200000 | 60 | 19 |
| std::from_chars | 92.1453 | 1.76044 | 200000 | 60 | 1 |
| strtoll/strtoull | 58.9788 | 1.19357 | 200000 | 60 | 3 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 141.462 | 4.38595 | 200 | 60 | 41 |
| std::from_chars | 103.315 | 3.32144 | 200 | 60 | 23 |
| strtoll/strtoull | 74.7045 | 2.64239 | 200 | 60 | 2 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 128.103 | 0.35511 | 2000 | 60 | 29 |
| std::from_chars | 97.9687 | 0.351932 | 2000 | 60 | 19 |
| strtoll/strtoull | 71.9622 | 0.273455 | 2000 | 60 | 46 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 128.216 | 0.20501 | 20000 | 60 | 20 |
| std::from_chars | 96.791 | 0.424351 | 20000 | 60 | 5 |
| strtoll/strtoull | 71.9247 | 0.136689 | 20000 | 60 | 56 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 127.66 | 0.322616 | 200000 | 60 | 56 |
| std::from_chars | 89.5192 | 1.59869 | 200000 | 60 | 46 |
| strtoll/strtoull | 65.9477 | 1.58288 | 200000 | 60 | 7 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 146.23 | 4.23585 | 200 | 60 | 39 |
| strtoll/strtoull | 73.6448 | 2.61413 | 200 | 60 | 60 |
| std::from_chars | 41.4848 | 1.4275 | 200 | 60 | 5 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 138.685 | 0.416099 | 2000 | 60 | 22 |
| std::from_chars | 88.9976 | 3.16557 | 2000 | 60 | 59 |
| strtoll/strtoull | 72.5897 | 0.219583 | 2000 | 60 | 56 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 138.637 | 0.16012 | 20000 | 60 | 24 |
| std::from_chars | 98.5622 | 0.116318 | 20000 | 60 | 49 |
| strtoll/strtoull | 72.4228 | 0.113158 | 20000 | 60 | 7 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 133.165 | 1.12294 | 200000 | 60 | 57 |
| std::from_chars | 83.6402 | 2.01972 | 200000 | 60 | 13 |
| strtoll/strtoull | 65.8201 | 1.5525 | 200000 | 60 | 40 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 160.535 | 3.59767 | 200 | 60 | 45 |
| strtoll/strtoull | 76.2939 | 2.65747 | 200 | 60 | 8 |
| std::from_chars | 42.4385 | 1.45546 | 200 | 60 | 15 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 146.02 | 0.233073 | 2000 | 60 | 38 |
| std::from_chars | 104.941 | 0.267716 | 2000 | 60 | 37 |
| strtoll/strtoull | 72.9103 | 0.203208 | 2000 | 60 | 22 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 145.507 | 0.146226 | 20000 | 60 | 45 |
| std::from_chars | 101.843 | 0.240188 | 20000 | 60 | 22 |
| strtoll/strtoull | 72.5063 | 0.157735 | 20000 | 60 | 4 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 140.035 | 0.311548 | 200000 | 60 | 8 |
| std::from_chars | 92.0471 | 1.4468 | 200000 | 60 | 15 |
| strtoll/strtoull | 61.7219 | 2.70587 | 200000 | 60 | 60 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 190.735 | 0 | 400 | 60 | 4 |
| std::from_chars | 161.065 | 2.5638 | 400 | 60 | 35 |
| strtoll/strtoull | 113.381 | 1.80878 | 400 | 60 | 44 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 198.933 | 0.254206 | 4000 | 60 | 16 |
| std::from_chars | 153.709 | 0.321973 | 4000 | 60 | 0 |
| strtoll/strtoull | 108.546 | 0.175815 | 4000 | 60 | 8 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 199.617 | 0.117493 | 40000 | 60 | 11 |
| std::from_chars | 148.278 | 1.47117 | 40000 | 60 | 41 |
| strtoll/strtoull | 104.621 | 1.62368 | 40000 | 60 | 59 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 199.772 | 0.0493184 | 400000 | 60 | 5 |
| std::from_chars | 117.704 | 3.09121 | 400000 | 60 | 30 |
| strtoll/strtoull | 102.179 | 1.24484 | 400000 | 60 | 42 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 238.419 | 4.50988 | 400 | 60 | 43 |
| std::from_chars | 160.005 | 2.5851 | 400 | 60 | 58 |
| strtoll/strtoull | 122.918 | 1.14454 | 400 | 60 | 28 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 221.096 | 0.355412 | 4000 | 60 | 6 |
| std::from_chars | 154.308 | 0.286912 | 4000 | 60 | 32 |
| strtoll/strtoull | 121.079 | 0.239541 | 4000 | 60 | 38 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 220.754 | 0.170308 | 40000 | 60 | 25 |
| std::from_chars | 154.302 | 0.265453 | 40000 | 60 | 60 |
| strtoll/strtoull | 120.947 | 0.154629 | 40000 | 60 | 6 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 224.259 | 0.0774562 | 400000 | 60 | 59 |
| std::from_chars | 134.932 | 2.66584 | 400000 | 60 | 2 |
| strtoll/strtoull | 120.234 | 0.592943 | 400000 | 60 | 58 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 263.85 | 4.57573 | 400 | 60 | 31 |
| std::from_chars | 141.992 | 2.46554 | 400 | 60 | 57 |
| strtoll/strtoull | 121.858 | 1.2657 | 400 | 60 | 26 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 238.278 | 0.277119 | 4000 | 60 | 46 |
| std::from_chars | 154.185 | 0.250492 | 4000 | 60 | 58 |
| strtoll/strtoull | 121.581 | 0.200203 | 4000 | 60 | 58 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 239.372 | 0.146328 | 40000 | 60 | 57 |
| std::from_chars | 154.824 | 0.13717 | 40000 | 60 | 58 |
| strtoll/strtoull | 121.373 | 0.106867 | 40000 | 60 | 41 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 237.71 | 0.0804429 | 400000 | 60 | 1 |
| std::from_chars | 148.267 | 0.141829 | 400000 | 60 | 32 |
| strtoll/strtoull | 121.135 | 0.0584647 | 400000 | 60 | 51 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 295.639 | 4.17859 | 400 | 60 | 51 |
| std::from_chars | 168.482 | 2.34325 | 400 | 60 | 19 |
| strtoll/strtoull | 121.858 | 1.2657 | 400 | 60 | 0 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 261.087 | 0.509086 | 4000 | 60 | 45 |
| std::from_chars | 164.054 | 0.318017 | 4000 | 60 | 58 |
| strtoll/strtoull | 120.687 | 0.214342 | 4000 | 60 | 53 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 255.855 | 0.44982 | 40000 | 60 | 5 |
| std::from_chars | 158.515 | 1.43884 | 40000 | 60 | 0 |
| strtoll/strtoull | 119.11 | 0.390199 | 40000 | 60 | 57 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 234.233 | 2.34001 | 400000 | 60 | 0 |
| std::from_chars | 146.878 | 1.30814 | 400000 | 60 | 31 |
| strtoll/strtoull | 110.282 | 1.65574 | 400000 | 60 | 60 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 353.919 | 1.92698 | 800 | 60 | 16 |
| std::from_chars | 221.464 | 1.8677 | 800 | 60 | 59 |
| strtoll/strtoull | 165.939 | 1.59228 | 800 | 60 | 8 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 355.323 | 0.302362 | 8000 | 60 | 52 |
| std::from_chars | 210.615 | 2.7451 | 8000 | 60 | 33 |
| strtoll/strtoull | 167.093 | 0.160598 | 8000 | 60 | 51 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 337.196 | 2.03945 | 80000 | 60 | 5 |
| std::from_chars | 213.198 | 1.875 | 80000 | 60 | 43 |
| strtoll/strtoull | 159.027 | 1.78983 | 80000 | 60 | 52 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 327.164 | 1.99193 | 800000 | 60 | 5 |
| strtoll/strtoull | 134.226 | 2.05064 | 800000 | 60 | 60 |
| std::from_chars | 61.1489 | 4.87651 | 800000 | 60 | 17 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 401.603 | 3.39689 | 800 | 60 | 4 |
| strtoll/strtoull | 176.455 | 2.13329 | 800 | 60 | 58 |
| std::from_chars | 85.407 | 4.16837 | 800 | 60 | 8 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 367.309 | 1.92325 | 8000 | 60 | 8 |
| std::from_chars | 204.864 | 1.51967 | 8000 | 60 | 60 |
| strtoll/strtoull | 167.903 | 1.25517 | 8000 | 60 | 44 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 390.15 | 0.767089 | 80000 | 60 | 1 |
| std::from_chars | 198.365 | 1.39489 | 80000 | 60 | 20 |
| strtoll/strtoull | 168.371 | 2.11329 | 80000 | 60 | 48 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 356.137 | 1.51487 | 800000 | 60 | 2 |
| strtoll/strtoull | 154.961 | 1.46584 | 800000 | 60 | 56 |
| std::from_chars | 73.7784 | 7.68133 | 800000 | 60 | 13 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 438.69 | 4.04233 | 800 | 60 | 28 |
| std::from_chars | 227.822 | 2.12799 | 800 | 60 | 37 |
| strtoll/strtoull | 183.105 | 1.08491 | 800 | 60 | 0 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 387.064 | 1.82392 | 8000 | 60 | 11 |
| std::from_chars | 199.056 | 1.57706 | 8000 | 60 | 0 |
| strtoll/strtoull | 174.943 | 0.946267 | 8000 | 60 | 11 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 390.456 | 0.770953 | 80000 | 60 | 37 |
| std::from_chars | 205.586 | 1.70737 | 80000 | 60 | 13 |
| strtoll/strtoull | 157.954 | 3.16599 | 80000 | 60 | 37 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 370.533 | 1.44601 | 800000 | 60 | 58 |
| strtoll/strtoull | 155.253 | 2.15556 | 800000 | 60 | 60 |
| std::from_chars | 120.119 | 3.26116 | 800000 | 60 | 0 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 360.277 | 1.71242 | 800 | 60 | 34 |
| std::from_chars | 233.12 | 1.67377 | 800 | 60 | 59 |
| strtoll/strtoull | 177.656 | 1.71954 | 800 | 60 | 39 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 354.653 | 0.395838 | 8000 | 60 | 6 |
| std::from_chars | 217.266 | 2.47818 | 8000 | 60 | 121 |
| strtoll/strtoull | 163.869 | 2.71891 | 8000 | 60 | 131 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 324.364 | 1.91529 | 80000 | 60 | 4 |
| std::from_chars | 194.501 | 2.85636 | 80000 | 60 | 5 |
| strtoll/strtoull | 158.297 | 2.38888 | 80000 | 60 | 56 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 329.032 | 1.36351 | 800000 | 60 | 4 |
| strtoll/strtoull | 156.991 | 2.1431 | 800000 | 60 | 38 |
| std::from_chars | 65.9863 | 2.67539 | 800000 | 60 | 149 |
