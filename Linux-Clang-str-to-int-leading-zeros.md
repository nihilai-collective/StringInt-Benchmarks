# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 58.1101 | 0.492756 | 100 | 60 | 178 |
| vn::from_chars **STATISTICAL TIE** | 57.6706 | 0.375751 | 100 | 60 | 47 |
| strtoll/strtoull | 42.8005 | 0.315551 | 100 | 60 | 165 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 59.6014 | 0.64135 | 1000 | 60 | 59 |
| strtoll/strtoull | 43.9908 | 0.205863 | 1000 | 60 | 39 |
| std::from_chars | 37.6598 | 0.670348 | 1000 | 60 | 18 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 55.104 | 0.435771 | 10000 | 60 | 5 |
| std::from_chars | 52.5074 | 1.36794 | 10000 | 60 | 22 |
| strtoll/strtoull | 43.1041 | 0.274862 | 10000 | 60 | 10 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 53.0609 | 1.16689 | 100000 | 60 | 8 |
| std::from_chars | 50.6343 | 1.17418 | 100000 | 60 | 4 |
| strtoll/strtoull | 40.6031 | 1.28362 | 100000 | 60 | 15 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 70.5281 | 0.498972 | 100 | 60 | 151 |
| vn::from_chars | 68.3602 | 0.399459 | 100 | 60 | 180 |
| strtoll/strtoull | 49.3964 | 0.243443 | 100 | 60 | 60 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 72.0781 | 0.206434 | 1000 | 60 | 60 |
| vn::from_chars | 69.0786 | 0.22102 | 1000 | 60 | 9 |
| strtoll/strtoull | 49.1276 | 0.830907 | 1000 | 60 | 5 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 65.1847 | 1.13136 | 10000 | 60 | 0 |
| std::from_chars | 61.3062 | 1.27919 | 10000 | 60 | 60 |
| strtoll/strtoull | 48.1353 | 0.718642 | 10000 | 60 | 56 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 64.5943 | 0.977859 | 100000 | 60 | 123 |
| std::from_chars | 61.3699 | 1.04864 | 100000 | 60 | 15 |
| strtoll/strtoull | 46.4066 | 1.29867 | 100000 | 60 | 122 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 68.8376 | 0.464596 | 100 | 60 | 130 |
| std::from_chars | 65.7729 | 0.77303 | 100 | 60 | 177 |
| strtoll/strtoull | 47.1618 | 0.323573 | 100 | 60 | 10 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 69.3677 | 1.42274 | 1000 | 60 | 60 |
| std::from_chars | 64.4074 | 0.818862 | 1000 | 60 | 5 |
| strtoll/strtoull | 50.1473 | 1.0434 | 1000 | 60 | 0 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars **STATISTICAL TIE** | 62.9652 | 0.346937 | 10000 | 60 | 894 |
| vn::from_chars **STATISTICAL TIE** | 62.3217 | 0.389415 | 10000 | 60 | 363 |
| strtoll/strtoull | 49.4995 | 0.425992 | 10000 | 60 | 369 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 60.6829 | 0.952781 | 100000 | 60 | 38 |
| vn::from_chars | 43.975 | 0.743228 | 100000 | 60 | 411 |
| strtoll/strtoull | 27.1866 | 1.13089 | 100000 | 60 | 280 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.2178 | 1.33159 | 100 | 60 | 177 |
| vn::from_chars | 54.2721 | 0.887535 | 100 | 60 | 132 |
| strtoll/strtoull | 38.41 | 1.89597 | 100 | 60 | 17 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 58.6304 | 1.31506 | 1000 | 60 | 60 |
| vn::from_chars | 52.4045 | 0.985401 | 1000 | 60 | 21 |
| strtoll/strtoull | 42.2024 | 0.342255 | 1000 | 60 | 49 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 48.9562 | 2.29786 | 10000 | 60 | 12 |
| std::from_chars | 43.2704 | 2.38294 | 10000 | 60 | 2 |
| strtoll/strtoull | 29.9779 | 1.54183 | 10000 | 60 | 54 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 46.7851 | 3.6527 | 100000 | 60 | 411 |
| std::from_chars **STATISTICAL TIE** | 46.4374 | 2.79653 | 100000 | 60 | 38 |
| strtoll/strtoull | 28.2391 | 3.4722 | 100000 | 60 | 25 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 85.2815 | 0.570854 | 200 | 60 | 1 |
| std::from_chars | 63.8683 | 1.55579 | 200 | 60 | 14 |
| strtoll/strtoull | 49.8701 | 0.265512 | 200 | 60 | 32 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 74.233 | 1.35474 | 2000 | 60 | 416 |
| std::from_chars | 62.3865 | 1.39655 | 2000 | 60 | 362 |
| strtoll/strtoull | 43.9618 | 0.905738 | 2000 | 60 | 31 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 63.0399 | 1.70966 | 20000 | 60 | 60 |
| std::from_chars | 56.6511 | 2.94456 | 20000 | 60 | 36 |
| strtoll/strtoull | 41.7756 | 1.84067 | 20000 | 60 | 59 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 82.8725 | 1.74802 | 200000 | 60 | 27 |
| strtoll/strtoull | 55.8702 | 1.57831 | 200000 | 60 | 53 |
| std::from_chars | 46.1575 | 3.64746 | 200000 | 60 | 0 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 99.9328 | 0.583437 | 200 | 60 | 161 |
| std::from_chars | 91.5722 | 0.953172 | 200 | 60 | 168 |
| strtoll/strtoull | 64.4367 | 0.949386 | 200 | 60 | 20 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 83.9777 | 1.14304 | 2000 | 60 | 20 |
| std::from_chars | 67.3667 | 0.938022 | 2000 | 60 | 48 |
| strtoll/strtoull | 51.2054 | 1.81741 | 2000 | 60 | 57 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 104.612 | 0.840569 | 20000 | 60 | 5 |
| std::from_chars | 88.7074 | 1.34903 | 20000 | 60 | 31 |
| strtoll/strtoull | 61.8354 | 1.99056 | 20000 | 60 | 0 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 130.372 | 1.48238 | 200000 | 60 | 59 |
| std::from_chars | 110.015 | 1.32902 | 200000 | 60 | 55 |
| strtoll/strtoull | 83.5623 | 1.6979 | 200000 | 60 | 3 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 142.297 | 0.434154 | 200 | 60 | 22 |
| std::from_chars | 119.871 | 0.532279 | 200 | 60 | 47 |
| strtoll/strtoull | 89.3367 | 0.25813 | 200 | 60 | 57 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 142.7 | 0.678422 | 2000 | 60 | 178 |
| std::from_chars | 125.241 | 0.174742 | 2000 | 60 | 176 |
| strtoll/strtoull | 92.6022 | 0.581297 | 2000 | 60 | 180 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 144.21 | 0.324806 | 20000 | 60 | 16 |
| std::from_chars | 129.371 | 0.461539 | 20000 | 60 | 22 |
| strtoll/strtoull | 92.492 | 0.501939 | 20000 | 60 | 23 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 141.607 | 0.982307 | 200000 | 60 | 41 |
| std::from_chars | 109.867 | 1.07953 | 200000 | 60 | 1 |
| strtoll/strtoull | 89.9823 | 1.28969 | 200000 | 60 | 19 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 161.308 | 0.413052 | 200 | 60 | 28 |
| std::from_chars | 118.647 | 0.485692 | 200 | 60 | 15 |
| strtoll/strtoull | 72.564 | 0.306962 | 200 | 60 | 30 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 161.318 | 0.160033 | 2000 | 60 | 22 |
| std::from_chars | 124.915 | 0.432223 | 2000 | 60 | 60 |
| strtoll/strtoull | 91.2218 | 0.130021 | 2000 | 60 | 59 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 150.858 | 0.623547 | 20000 | 60 | 15 |
| std::from_chars | 130.168 | 0.665319 | 20000 | 60 | 5 |
| strtoll/strtoull | 93.0605 | 0.360624 | 20000 | 60 | 10 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 146.289 | 1.03025 | 200000 | 60 | 4 |
| std::from_chars | 115.631 | 0.981781 | 200000 | 60 | 17 |
| strtoll/strtoull | 82.7068 | 1.12221 | 200000 | 60 | 24 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 226.09 | 0.337229 | 400 | 60 | 7 |
| std::from_chars | 192.727 | 0.618441 | 400 | 60 | 41 |
| strtoll/strtoull | 148.035 | 0.273407 | 400 | 60 | 6 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 230.742 | 0.65928 | 4000 | 60 | 1 |
| std::from_chars | 182.353 | 0.299127 | 4000 | 60 | 55 |
| strtoll/strtoull | 148.749 | 0.443885 | 4000 | 60 | 53 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 220.588 | 0.474125 | 40000 | 60 | 2 |
| std::from_chars | 180.663 | 0.555708 | 40000 | 60 | 45 |
| strtoll/strtoull | 142.449 | 0.318502 | 40000 | 60 | 11 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 217.208 | 1.0418 | 400000 | 60 | 51 |
| std::from_chars | 179.014 | 0.95526 | 400000 | 60 | 52 |
| strtoll/strtoull | 137.755 | 1.15961 | 400000 | 60 | 36 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 273.69 | 0.365998 | 400 | 60 | 52 |
| std::from_chars | 236.799 | 0.67557 | 400 | 60 | 57 |
| strtoll/strtoull | 172.689 | 0.21839 | 400 | 60 | 52 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 270.92 | 0.430242 | 4000 | 60 | 58 |
| strtoll/strtoull | 142.112 | 0.20057 | 4000 | 60 | 15 |
| std::from_chars | 136.351 | 0.594942 | 4000 | 60 | 14 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 252.891 | 1.15066 | 40000 | 60 | 60 |
| std::from_chars | 221.587 | 0.436808 | 40000 | 60 | 0 |
| strtoll/strtoull | 165.217 | 0.482606 | 40000 | 60 | 60 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 262.934 | 1.06948 | 400000 | 60 | 50 |
| std::from_chars | 222.278 | 1.0414 | 400000 | 60 | 52 |
| strtoll/strtoull | 162.116 | 1.26065 | 400000 | 60 | 51 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 271.317 | 0.389607 | 400 | 60 | 52 |
| std::from_chars | 234.846 | 0.671751 | 400 | 60 | 6 |
| strtoll/strtoull | 169.836 | 0.274568 | 400 | 60 | 14 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 219.817 | 0.674241 | 4000 | 60 | 60 |
| vn::from_chars | 190.73 | 1.23397 | 4000 | 60 | 35 |
| strtoll/strtoull | 164.34 | 0.497181 | 4000 | 60 | 30 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 261.831 | 0.472283 | 40000 | 60 | 59 |
| std::from_chars | 214.539 | 1.51232 | 40000 | 60 | 60 |
| strtoll/strtoull | 168.038 | 0.517701 | 40000 | 60 | 60 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 259.155 | 0.961676 | 400000 | 60 | 3 |
| std::from_chars | 215.769 | 1.23153 | 400000 | 60 | 4 |
| strtoll/strtoull | 159.131 | 1.16955 | 400000 | 60 | 50 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 295.774 | 0.424876 | 400 | 60 | 26 |
| std::from_chars | 190.302 | 0.439779 | 400 | 60 | 21 |
| strtoll/strtoull | 145.048 | 0.551168 | 400 | 60 | 8 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 277.35 | 0.368826 | 4000 | 60 | 22 |
| std::from_chars | 193.698 | 0.224739 | 4000 | 60 | 14 |
| strtoll/strtoull | 149.52 | 0.580198 | 4000 | 60 | 20 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 282.529 | 0.482964 | 40000 | 60 | 60 |
| std::from_chars | 160.365 | 2.54675 | 40000 | 60 | 1 |
| strtoll/strtoull | 129.472 | 2.26174 | 40000 | 60 | 44 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 283.029 | 1.22429 | 400000 | 60 | 3 |
| std::from_chars | 216.059 | 1.01622 | 400000 | 60 | 55 |
| strtoll/strtoull | 144.227 | 0.914931 | 400000 | 60 | 57 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 437.507 | 0.316633 | 800 | 60 | 57 |
| std::from_chars | 350.268 | 0.623208 | 800 | 60 | 59 |
| strtoll/strtoull | 255.703 | 0.152554 | 800 | 60 | 48 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 429.192 | 0.166008 | 8000 | 60 | 19 |
| std::from_chars | 322.591 | 0.445656 | 8000 | 60 | 43 |
| strtoll/strtoull | 246.441 | 0.501667 | 8000 | 60 | 37 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 381.204 | 1.94848 | 80000 | 60 | 60 |
| std::from_chars | 317.407 | 0.609973 | 80000 | 60 | 0 |
| strtoll/strtoull | 232.395 | 0.645445 | 80000 | 60 | 28 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 380.996 | 1.26844 | 800000 | 60 | 2 |
| std::from_chars | 303.183 | 1.24707 | 800000 | 60 | 59 |
| strtoll/strtoull | 229.016 | 1.4271 | 800000 | 60 | 14 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 499.486 | 0.340242 | 800 | 60 | 38 |
| std::from_chars | 388.848 | 0.7367 | 800 | 60 | 60 |
| strtoll/strtoull | 256.488 | 0.209063 | 800 | 60 | 43 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 498.38 | 1.00672 | 8000 | 60 | 35 |
| std::from_chars | 342.861 | 0.310902 | 8000 | 60 | 10 |
| strtoll/strtoull | 269.529 | 0.600148 | 8000 | 60 | 0 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 501.284 | 0.465075 | 80000 | 60 | 10 |
| std::from_chars | 367.61 | 0.488182 | 80000 | 60 | 0 |
| strtoll/strtoull | 263.632 | 0.325837 | 80000 | 60 | 50 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 487.65 | 1.3165 | 800000 | 60 | 1 |
| std::from_chars | 349.084 | 1.23201 | 800000 | 60 | 10 |
| strtoll/strtoull | 255.255 | 1.42195 | 800000 | 60 | 59 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 526.426 | 0.272756 | 800 | 60 | 22 |
| std::from_chars | 375.133 | 1.86046 | 800 | 60 | 4 |
| strtoll/strtoull | 294.168 | 0.15042 | 800 | 60 | 35 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 479.857 | 0.256428 | 8000 | 60 | 21 |
| std::from_chars | 348.359 | 0.878919 | 8000 | 60 | 1 |
| strtoll/strtoull | 268.856 | 0.32276 | 8000 | 60 | 0 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 470.164 | 0.461519 | 80000 | 60 | 1 |
| std::from_chars | 351.119 | 0.501343 | 80000 | 60 | 56 |
| strtoll/strtoull | 279.989 | 0.351076 | 80000 | 60 | 12 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 431.223 | 1.11395 | 800000 | 60 | 5 |
| std::from_chars | 310.607 | 1.76409 | 800000 | 60 | 32 |
| strtoll/strtoull | 264.382 | 0.934699 | 800000 | 60 | 36 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 298.528 | 0.215222 | 800 | 60 | 2 |
| std::from_chars | 216.477 | 0.622889 | 800 | 60 | 58 |
| strtoll/strtoull | 159.318 | 0.16882 | 800 | 60 | 20 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 387.685 | 1.0176 | 8000 | 60 | 60 |
| std::from_chars | 346.171 | 1.01791 | 8000 | 60 | 58 |
| strtoll/strtoull | 258.32 | 0.329228 | 8000 | 60 | 19 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 414.277 | 0.84204 | 80000 | 60 | 180 |
| std::from_chars | 343.304 | 0.359768 | 80000 | 60 | 59 |
| strtoll/strtoull | 254.428 | 1.413 | 80000 | 60 | 144 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 415.49 | 1.20796 | 800000 | 60 | 50 |
| std::from_chars | 363.224 | 1.33247 | 800000 | 60 | 16 |
| strtoll/strtoull | 256.434 | 1.38526 | 800000 | 60 | 45 |
