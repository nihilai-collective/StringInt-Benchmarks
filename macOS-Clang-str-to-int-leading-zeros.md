# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 46.8672 | 0.311386 | 100 | 60 | 56 |
| vn::from_chars | 44.3858 | 0.464937 | 100 | 60 | 29 |
| strtoll/strtoull | 34.6688 | 0.347376 | 100 | 60 | 1 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 49.8791 | 0.16355 | 1000 | 60 | 12 |
| vn::from_chars | 47.8542 | 0.147268 | 1000 | 60 | 50 |
| strtoll/strtoull | 35.1644 | 0.402005 | 1000 | 60 | 27 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 51.0674 | 0.236335 | 10000 | 60 | 41 |
| vn::from_chars | 47.698 | 0.110703 | 10000 | 60 | 24 |
| strtoll/strtoull | 35.1187 | 0.38466 | 10000 | 60 | 29 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 50.151 | 0.330847 | 100000 | 60 | 60 |
| vn::from_chars | 48.3935 | 0.0732687 | 100000 | 60 | 54 |
| strtoll/strtoull | 35.484 | 0.0838149 | 100000 | 60 | 31 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 54.4406 | 0.478228 | 100 | 60 | 52 |
| std::from_chars | 47.5418 | 0.441519 | 100 | 60 | 60 |
| strtoll/strtoull | 41.4766 | 0.337007 | 100 | 60 | 40 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 55.4211 | 0.142329 | 1000 | 60 | 54 |
| std::from_chars | 49.9429 | 0.129108 | 1000 | 60 | 14 |
| strtoll/strtoull | 41.932 | 0.0868453 | 1000 | 60 | 43 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 53.916 | 0.249493 | 10000 | 60 | 4 |
| std::from_chars | 51.0146 | 0.136863 | 10000 | 60 | 59 |
| strtoll/strtoull | 41.8473 | 0.0866448 | 10000 | 60 | 45 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 51.2586 | 0.174143 | 100000 | 60 | 28 |
| std::from_chars | 45.6611 | 0.404483 | 100000 | 60 | 50 |
| strtoll/strtoull | 38.762 | 0.303545 | 100000 | 60 | 47 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 52.0785 | 0.515119 | 100 | 60 | 16 |
| std::from_chars | 47.2838 | 0.390969 | 100 | 60 | 47 |
| strtoll/strtoull | 38.7904 | 0.287944 | 100 | 60 | 3 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 53.1635 | 0.130637 | 1000 | 60 | 59 |
| std::from_chars | 46.6196 | 0.143275 | 1000 | 60 | 49 |
| strtoll/strtoull | 39.1267 | 0.128069 | 1000 | 60 | 12 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 53.107 | 0.344353 | 10000 | 60 | 4 |
| std::from_chars | 50.736 | 0.2712 | 10000 | 60 | 59 |
| strtoll/strtoull | 38.5275 | 0.306072 | 10000 | 60 | 58 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 54.236 | 0.179647 | 100000 | 60 | 38 |
| std::from_chars | 44.8796 | 0.327817 | 100000 | 60 | 8 |
| strtoll/strtoull | 38.8316 | 0.128495 | 100000 | 60 | 59 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 53.0956 | 0.544788 | 100 | 60 | 2 |
| std::from_chars | 49.7545 | 0.346705 | 100 | 60 | 32 |
| strtoll/strtoull | 42.013 | 0.335268 | 100 | 60 | 20 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 52.1205 | 0.100502 | 1000 | 60 | 49 |
| vn::from_chars | 50.2402 | 0.215456 | 1000 | 60 | 13 |
| strtoll/strtoull | 40.787 | 0.100255 | 1000 | 60 | 47 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 54.6638 | 0.265489 | 10000 | 60 | 400 |
| vn::from_chars **STATISTICAL TIE** | 54.4943 | 0.241251 | 10000 | 60 | 163 |
| strtoll/strtoull | 42.2001 | 0.0906626 | 10000 | 60 | 289 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 54.2898 | 0.330593 | 100000 | 60 | 54 |
| std::from_chars | 52.7644 | 0.305475 | 100000 | 60 | 26 |
| strtoll/strtoull | 42.2314 | 0.0600821 | 100000 | 60 | 15 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 96.9963 | 0.506303 | 200 | 60 | 31 |
| std::from_chars | 89.8536 | 0.270275 | 200 | 60 | 30 |
| strtoll/strtoull | 65.3203 | 0.299682 | 200 | 60 | 36 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 98.6569 | 0.140879 | 2000 | 60 | 29 |
| std::from_chars | 92.6038 | 0.0909767 | 2000 | 60 | 58 |
| strtoll/strtoull | 65.6742 | 0.103701 | 2000 | 60 | 54 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 97.0151 | 0.266637 | 20000 | 60 | 57 |
| std::from_chars | 93.3712 | 0.107978 | 20000 | 60 | 37 |
| strtoll/strtoull | 65.1744 | 0.13966 | 20000 | 60 | 11 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 97.0345 | 0.0992856 | 200000 | 60 | 60 |
| std::from_chars | 88.8263 | 0.293831 | 200000 | 60 | 40 |
| strtoll/strtoull | 64.7775 | 0.0702737 | 200000 | 60 | 46 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 109.203 | 0.576883 | 200 | 60 | 4 |
| std::from_chars | 85.3401 | 0.369377 | 200 | 60 | 7 |
| strtoll/strtoull | 75.3245 | 0.279713 | 200 | 60 | 47 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 115.038 | 0.179106 | 2000 | 60 | 25 |
| std::from_chars | 91.9708 | 0.116307 | 2000 | 60 | 11 |
| strtoll/strtoull | 76.3281 | 0.235376 | 2000 | 60 | 56 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 113.123 | 0.116509 | 20000 | 60 | 26 |
| std::from_chars | 92.456 | 0.251002 | 20000 | 60 | 60 |
| strtoll/strtoull | 76.0886 | 0.0844872 | 20000 | 60 | 36 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 112.988 | 0.198085 | 200000 | 60 | 8 |
| std::from_chars | 90.8884 | 0.110717 | 200000 | 60 | 60 |
| strtoll/strtoull | 75.2832 | 0.283127 | 200000 | 60 | 29 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 115.794 | 0.596819 | 200 | 60 | 31 |
| std::from_chars | 85.2129 | 0.313439 | 200 | 60 | 1 |
| strtoll/strtoull | 75.6909 | 0.245036 | 200 | 60 | 37 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 116.029 | 0.180975 | 2000 | 60 | 5 |
| std::from_chars | 92.9749 | 0.0757704 | 2000 | 60 | 49 |
| strtoll/strtoull | 76.5063 | 0.0940775 | 2000 | 60 | 7 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 115.846 | 0.11292 | 20000 | 60 | 11 |
| std::from_chars | 93.2285 | 0.196412 | 20000 | 60 | 23 |
| strtoll/strtoull | 76.1625 | 0.254951 | 20000 | 60 | 60 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 116.554 | 0.0713836 | 200000 | 60 | 22 |
| std::from_chars | 85.2972 | 0.435496 | 200000 | 60 | 2 |
| strtoll/strtoull | 72.1351 | 0.177733 | 200000 | 60 | 57 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 125.086 | 0.563056 | 200 | 60 | 1 |
| std::from_chars | 89.5726 | 0.306132 | 200 | 60 | 40 |
| strtoll/strtoull | 71.3866 | 0.260752 | 200 | 60 | 44 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 126.171 | 0.182349 | 2000 | 60 | 17 |
| std::from_chars | 101.107 | 0.158648 | 2000 | 60 | 60 |
| strtoll/strtoull | 77.5768 | 0.0825405 | 2000 | 60 | 37 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 127.596 | 0.141793 | 20000 | 60 | 56 |
| std::from_chars | 102.138 | 0.0935166 | 20000 | 60 | 27 |
| strtoll/strtoull | 77.1983 | 0.0696694 | 20000 | 60 | 43 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 128.5 | 0.0608818 | 200000 | 60 | 60 |
| std::from_chars | 101.566 | 0.096169 | 200000 | 60 | 58 |
| strtoll/strtoull | 77.2624 | 0.0397346 | 200000 | 60 | 32 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 182.014 | 0.393255 | 400 | 60 | 48 |
| std::from_chars | 137.083 | 0.448299 | 400 | 60 | 43 |
| strtoll/strtoull | 112.786 | 0.302013 | 400 | 60 | 19 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 185.583 | 0.117373 | 4000 | 60 | 25 |
| std::from_chars | 149.395 | 0.0898957 | 4000 | 60 | 32 |
| strtoll/strtoull | 113.035 | 0.0794205 | 4000 | 60 | 15 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 183.046 | 0.128601 | 40000 | 60 | 20 |
| std::from_chars | 151.401 | 0.0860564 | 40000 | 60 | 4 |
| strtoll/strtoull | 112.662 | 0.081922 | 40000 | 60 | 28 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 183.857 | 0.0484385 | 400000 | 60 | 23 |
| std::from_chars | 129.785 | 0.43998 | 400000 | 60 | 0 |
| strtoll/strtoull | 110.686 | 0.187194 | 400000 | 60 | 60 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 208.835 | 0.491747 | 400 | 60 | 58 |
| std::from_chars | 145.309 | 0.27294 | 400 | 60 | 59 |
| strtoll/strtoull | 128.056 | 0.232779 | 400 | 60 | 1 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 216.52 | 0.132646 | 4000 | 60 | 28 |
| std::from_chars | 148.817 | 0.0890424 | 4000 | 60 | 60 |
| strtoll/strtoull | 129.26 | 0.0897831 | 4000 | 60 | 8 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 216.534 | 0.114909 | 40000 | 60 | 20 |
| std::from_chars | 150.124 | 0.203054 | 40000 | 60 | 9 |
| strtoll/strtoull | 126.22 | 0.701514 | 40000 | 60 | 2 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 212.261 | 0.0723736 | 400000 | 60 | 56 |
| strtoll/strtoull | 126.94 | 0.0870934 | 400000 | 60 | 2 |
| std::from_chars | 100.331 | 1.31884 | 400000 | 60 | 1 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 193.08 | 0.426819 | 400 | 60 | 55 |
| std::from_chars | 134.829 | 0.270178 | 400 | 60 | 28 |
| strtoll/strtoull | 118.831 | 0.288385 | 400 | 60 | 28 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 195.66 | 0.216029 | 4000 | 60 | 60 |
| std::from_chars | 138.091 | 0.243242 | 4000 | 60 | 51 |
| strtoll/strtoull | 119.062 | 0.169783 | 4000 | 60 | 7 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 204.726 | 0.603258 | 40000 | 60 | 17 |
| std::from_chars | 139.129 | 0.238402 | 40000 | 60 | 22 |
| strtoll/strtoull | 120.327 | 0.209323 | 40000 | 60 | 23 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 204.587 | 0.473128 | 400000 | 60 | 17 |
| std::from_chars | 132.318 | 0.782052 | 400000 | 60 | 29 |
| strtoll/strtoull | 128.147 | 0.0858713 | 400000 | 60 | 36 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 228.122 | 0.526996 | 400 | 60 | 55 |
| std::from_chars | 145.934 | 0.296063 | 400 | 60 | 14 |
| strtoll/strtoull | 124.332 | 0.254337 | 400 | 60 | 55 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 236.836 | 0.150782 | 4000 | 60 | 3 |
| std::from_chars | 159.52 | 0.0861308 | 4000 | 60 | 60 |
| strtoll/strtoull | 130.04 | 0.082023 | 4000 | 60 | 1 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 236.172 | 0.150459 | 40000 | 60 | 22 |
| std::from_chars | 159.473 | 0.184167 | 40000 | 60 | 44 |
| strtoll/strtoull | 129.308 | 0.0900568 | 40000 | 60 | 17 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 236.803 | 0.0668462 | 400000 | 60 | 59 |
| std::from_chars | 156.388 | 1.15259 | 400000 | 60 | 60 |
| strtoll/strtoull | 129.587 | 0.048724 | 400000 | 60 | 28 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 334.417 | 0.307957 | 800 | 60 | 54 |
| std::from_chars | 219.677 | 0.248481 | 800 | 60 | 60 |
| strtoll/strtoull | 174.41 | 0.228223 | 800 | 60 | 57 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 338.098 | 0.0899123 | 8000 | 60 | 3 |
| std::from_chars | 224.114 | 0.0785496 | 8000 | 60 | 41 |
| strtoll/strtoull | 174.797 | 0.237093 | 8000 | 60 | 5 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 316.793 | 0.254003 | 80000 | 60 | 58 |
| std::from_chars | 213.308 | 0.202422 | 80000 | 60 | 3 |
| strtoll/strtoull | 165.001 | 0.218761 | 80000 | 60 | 1 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 332.132 | 0.336547 | 800000 | 60 | 0 |
| strtoll/strtoull | 161.316 | 0.898069 | 800000 | 60 | 5 |
| std::from_chars | 70.9234 | 3.75372 | 800000 | 60 | 23 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 354.101 | 0.642628 | 800 | 60 | 36 |
| std::from_chars | 199.518 | 0.230528 | 800 | 60 | 11 |
| strtoll/strtoull | 175.346 | 0.649262 | 800 | 60 | 55 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 361.481 | 0.113985 | 8000 | 60 | 1 |
| std::from_chars | 187.175 | 1.15831 | 8000 | 60 | 8 |
| strtoll/strtoull | 176.441 | 0.258204 | 8000 | 60 | 17 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 356.669 | 0.246811 | 80000 | 60 | 23 |
| std::from_chars | 191.325 | 0.345092 | 80000 | 60 | 41 |
| strtoll/strtoull | 175.908 | 0.141295 | 80000 | 60 | 57 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 385.398 | 0.0730702 | 800000 | 60 | 42 |
| strtoll/strtoull | 178.098 | 1.02139 | 800000 | 60 | 23 |
| std::from_chars | 73.4158 | 3.04017 | 800000 | 60 | 60 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 356.556 | 0.316252 | 800 | 60 | 7 |
| std::from_chars | 201.327 | 0.245833 | 800 | 60 | 39 |
| strtoll/strtoull | 178.299 | 0.193112 | 800 | 60 | 58 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 340.277 | 1.47001 | 8000 | 60 | 3 |
| std::from_chars | 196.071 | 1.14751 | 8000 | 60 | 55 |
| strtoll/strtoull | 169.116 | 1.05065 | 8000 | 60 | 53 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 377.239 | 0.442851 | 80000 | 60 | 24 |
| std::from_chars | 209.579 | 0.146795 | 80000 | 60 | 58 |
| strtoll/strtoull | 170.875 | 0.155928 | 80000 | 60 | 35 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 379.786 | 0.267737 | 800000 | 60 | 50 |
| strtoll/strtoull | 187.805 | 0.255329 | 800000 | 60 | 56 |
| std::from_chars | 63.5189 | 4.2963 | 800000 | 60 | 51 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 300.301 | 1.30358 | 800 | 60 | 24 |
| std::from_chars | 200.04 | 1.23953 | 800 | 60 | 60 |
| strtoll/strtoull | 174.859 | 1.53783 | 800 | 60 | 35 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 305.823 | 0.169388 | 8000 | 60 | 26 |
| std::from_chars | 189.888 | 1.58627 | 8000 | 60 | 27 |
| strtoll/strtoull | 161.249 | 1.40572 | 8000 | 60 | 24 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 330.923 | 0.10257 | 80000 | 60 | 51 |
| std::from_chars | 227.001 | 0.0913882 | 80000 | 60 | 60 |
| strtoll/strtoull | 192.363 | 0.0664222 | 80000 | 60 | 41 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 303.798 | 0.20508 | 800000 | 60 | 60 |
| strtoll/strtoull | 136.416 | 2.9975 | 800000 | 60 | 37 |
| std::from_chars | 119.852 | 3.62107 | 800000 | 60 | 2 |
