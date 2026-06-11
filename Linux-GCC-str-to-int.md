# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 164.837 | 0.969361 | 100 | 60 | 60 |
| std::from_chars | 138.046 | 0.800088 | 100 | 60 | 21 |
| strtoll/strtoull | 86.7399 | 0.575009 | 100 | 60 | 4 |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 169.798 | 0.240701 | 1000 | 60 | 22 |
| std::from_chars | 147.739 | 0.369013 | 1000 | 60 | 27 |
| strtoll/strtoull | 85.1909 | 0.174024 | 1000 | 60 | 60 |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 165.276 | 0.416362 | 10000 | 60 | 29 |
| std::from_chars | 145.553 | 0.358344 | 10000 | 60 | 50 |
| strtoll/strtoull | 86.9977 | 0.393301 | 10000 | 60 | 9 |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 161.227 | 0.865716 | 100000 | 60 | 50 |
| std::from_chars | 141.285 | 0.380258 | 100000 | 60 | 20 |
| strtoll/strtoull | 83.5041 | 0.758255 | 100000 | 60 | 59 |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 257.89 | 1.14962 | 100 | 60 | 6 |
| std::from_chars | 213.284 | 1.05991 | 100 | 60 | 31 |
| strtoll/strtoull | 123.534 | 0.725262 | 100 | 60 | 56 |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 272.012 | 0.423037 | 1000 | 60 | 55 |
| std::from_chars | 237.726 | 0.526398 | 1000 | 60 | 17 |
| strtoll/strtoull | 123.83 | 0.334061 | 1000 | 60 | 55 |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 272.135 | 0.509048 | 10000 | 60 | 1 |
| std::from_chars | 224.245 | 0.636379 | 10000 | 60 | 4 |
| strtoll/strtoull | 122.98 | 0.597151 | 10000 | 60 | 7 |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 270.716 | 0.404256 | 100000 | 60 | 49 |
| std::from_chars | 222.566 | 0.806198 | 100000 | 60 | 0 |
| strtoll/strtoull | 119.435 | 0.753161 | 100000 | 60 | 14 |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 281.777 | 1.02019 | 100 | 60 | 25 |
| std::from_chars | 223.779 | 1.0675 | 100 | 60 | 23 |
| strtoll/strtoull | 131.911 | 0.869819 | 100 | 60 | 60 |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 309.115 | 0.437789 | 1000 | 60 | 1 |
| std::from_chars | 246.119 | 0.509011 | 1000 | 60 | 43 |
| strtoll/strtoull | 134.563 | 0.360639 | 1000 | 60 | 60 |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 289.47 | 0.601597 | 10000 | 60 | 2 |
| std::from_chars | 246.564 | 0.425404 | 10000 | 60 | 47 |
| strtoll/strtoull | 129.289 | 0.589631 | 10000 | 60 | 60 |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 281.307 | 0.976337 | 100000 | 60 | 51 |
| std::from_chars | 236.094 | 0.802156 | 100000 | 60 | 50 |
| strtoll/strtoull | 130.341 | 0.396027 | 100000 | 60 | 52 |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 210.171 | 0.750338 | 100 | 60 | 16 |
| std::from_chars | 178.175 | 1.46524 | 100 | 60 | 31 |
| strtoll/strtoull | 100.35 | 0.480147 | 100 | 60 | 16 |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 242.853 | 0.258382 | 1000 | 60 | 53 |
| std::from_chars | 206.726 | 0.594763 | 1000 | 60 | 59 |
| strtoll/strtoull | 109.514 | 0.281988 | 1000 | 60 | 16 |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 229.361 | 0.59819 | 10000 | 60 | 33 |
| std::from_chars | 205.054 | 1.29557 | 10000 | 60 | 50 |
| strtoll/strtoull | 106.896 | 1.23378 | 10000 | 60 | 50 |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 224.149 | 0.910017 | 100000 | 60 | 13 |
| std::from_chars | 203.432 | 0.849268 | 100000 | 60 | 22 |
| strtoll/strtoull | 102.354 | 0.812158 | 100000 | 60 | 8 |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 257.049 | 0.572233 | 200 | 60 | 6 |
| std::from_chars | 233.172 | 0.596694 | 200 | 60 | 60 |
| strtoll/strtoull | 147.299 | 0.513787 | 200 | 60 | 5 |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 263.225 | 0.165656 | 2000 | 60 | 5 |
| std::from_chars | 228.73 | 0.236901 | 2000 | 60 | 30 |
| strtoll/strtoull | 150.457 | 0.605135 | 2000 | 60 | 3 |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 251.94 | 0.511686 | 20000 | 60 | 60 |
| std::from_chars | 219.411 | 0.803843 | 20000 | 60 | 60 |
| strtoll/strtoull | 146.369 | 0.414141 | 20000 | 60 | 50 |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 247.281 | 0.87924 | 200000 | 60 | 54 |
| std::from_chars | 202.537 | 1.82055 | 200000 | 60 | 60 |
| strtoll/strtoull | 127.585 | 1.04118 | 200000 | 60 | 16 |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 393.998 | 0.627965 | 200 | 60 | 9 |
| std::from_chars | 348.338 | 0.615785 | 200 | 60 | 23 |
| strtoll/strtoull | 184.815 | 0.277522 | 200 | 60 | 31 |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 414.686 | 0.204697 | 2000 | 60 | 52 |
| std::from_chars | 273.45 | 0.837086 | 2000 | 60 | 55 |
| strtoll/strtoull | 182.921 | 0.274434 | 2000 | 60 | 59 |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 388.121 | 0.453772 | 20000 | 60 | 59 |
| std::from_chars | 354.094 | 0.408411 | 20000 | 60 | 50 |
| strtoll/strtoull | 187.057 | 0.43857 | 20000 | 60 | 60 |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 389.62 | 0.878763 | 200000 | 60 | 7 |
| std::from_chars | 346.17 | 1.06653 | 200000 | 60 | 3 |
| strtoll/strtoull | 183.283 | 0.734519 | 200000 | 60 | 60 |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 439.168 | 0.710882 | 200 | 60 | 40 |
| std::from_chars | 371.003 | 0.837489 | 200 | 60 | 56 |
| strtoll/strtoull | 203.162 | 0.515387 | 200 | 60 | 52 |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 446.416 | 0.430742 | 2000 | 60 | 41 |
| std::from_chars | 340.57 | 0.399502 | 2000 | 60 | 36 |
| strtoll/strtoull | 200.875 | 0.778161 | 2000 | 60 | 58 |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 429.359 | 0.398789 | 20000 | 60 | 57 |
| std::from_chars | 362.237 | 0.548498 | 20000 | 60 | 28 |
| strtoll/strtoull | 195.892 | 0.530041 | 20000 | 60 | 59 |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 434.497 | 0.881817 | 200000 | 60 | 26 |
| std::from_chars | 339.284 | 1.99728 | 200000 | 60 | 17 |
| strtoll/strtoull | 193.016 | 0.938559 | 200000 | 60 | 34 |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 390.647 | 0.55797 | 200 | 60 | 16 |
| std::from_chars | 298.561 | 4.68459 | 200 | 60 | 15 |
| strtoll/strtoull | 127.057 | 1.4833 | 200 | 60 | 43 |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 507.605 | 0.0828333 | 2000 | 60 | 35 |
| std::from_chars | 491.486 | 0.312464 | 2000 | 60 | 58 |
| strtoll/strtoull | 191.837 | 0.822316 | 2000 | 60 | 0 |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 480.19 | 0.57444 | 20000 | 60 | 7 |
| std::from_chars **STATISTICAL TIE** | 472.18 | 1.06491 | 20000 | 60 | 27 |
| strtoll/strtoull | 193.235 | 0.495663 | 20000 | 60 | 5 |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars **STATISTICAL TIE** | 490.801 | 0.846402 | 200000 | 60 | 131 |
| std::from_chars **STATISTICAL TIE** | 486.226 | 0.812093 | 200000 | 60 | 165 |
| strtoll/strtoull | 187.533 | 0.611476 | 200000 | 60 | 180 |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 421.751 | 0.451591 | 400 | 60 | 23 |
| std::from_chars | 326.498 | 0.742215 | 400 | 60 | 51 |
| strtoll/strtoull | 231.641 | 0.385581 | 400 | 60 | 13 |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 438.186 | 0.22748 | 4000 | 60 | 1 |
| std::from_chars | 335.952 | 0.346047 | 4000 | 60 | 48 |
| strtoll/strtoull | 240.914 | 0.58601 | 4000 | 60 | 28 |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 407.246 | 0.549629 | 40000 | 60 | 41 |
| std::from_chars | 325.543 | 0.4656 | 40000 | 60 | 27 |
| strtoll/strtoull | 232.708 | 0.598073 | 40000 | 60 | 8 |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 404.328 | 0.872213 | 400000 | 60 | 9 |
| std::from_chars | 324.921 | 0.879888 | 400000 | 60 | 54 |
| strtoll/strtoull | 229.427 | 0.759199 | 400000 | 60 | 53 |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 557.828 | 0.612103 | 400 | 60 | 6 |
| std::from_chars | 458.049 | 0.709019 | 400 | 60 | 55 |
| strtoll/strtoull | 284.478 | 0.32944 | 400 | 60 | 12 |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 569.076 | 0.416146 | 4000 | 60 | 48 |
| std::from_chars | 454.351 | 0.665992 | 4000 | 60 | 59 |
| strtoll/strtoull | 293.65 | 0.445504 | 4000 | 60 | 59 |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 512.084 | 1.11925 | 40000 | 60 | 46 |
| std::from_chars | 453.747 | 0.604313 | 40000 | 60 | 54 |
| strtoll/strtoull | 262.383 | 1.90908 | 40000 | 60 | 60 |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 532.154 | 1.00896 | 400000 | 60 | 37 |
| std::from_chars | 451.852 | 0.665595 | 400000 | 60 | 52 |
| strtoll/strtoull | 273.615 | 1.03976 | 400000 | 60 | 12 |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 571.596 | 0.622459 | 400 | 60 | 13 |
| std::from_chars | 468.465 | 0.618214 | 400 | 60 | 60 |
| strtoll/strtoull | 279.818 | 0.302942 | 400 | 60 | 60 |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 471.957 | 0.30546 | 4000 | 60 | 50 |
| vn::from_chars | 447.056 | 0.26764 | 4000 | 60 | 37 |
| strtoll/strtoull | 244.327 | 0.115692 | 4000 | 60 | 60 |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 547.188 | 0.652364 | 40000 | 60 | 45 |
| std::from_chars | 470.083 | 0.447884 | 40000 | 60 | 55 |
| strtoll/strtoull | 300.534 | 0.821842 | 40000 | 60 | 11 |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 546.977 | 0.780583 | 400000 | 60 | 13 |
| std::from_chars | 460.501 | 0.872104 | 400000 | 60 | 60 |
| strtoll/strtoull | 286.224 | 1.13471 | 400000 | 60 | 30 |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| std::from_chars | 590.418 | 1.52401 | 400 | 60 | 12 |
| vn::from_chars | 512.151 | 1.38626 | 400 | 60 | 29 |
| strtoll/strtoull | 200.639 | 0.549231 | 400 | 60 | 60 |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 800.296 | 0.244322 | 4000 | 60 | 40 |
| std::from_chars | 593.189 | 1.11243 | 4000 | 60 | 1 |
| strtoll/strtoull | 224.212 | 1.40807 | 4000 | 60 | 26 |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 699.906 | 0.630209 | 40000 | 60 | 8 |
| std::from_chars | 562.153 | 1.16185 | 40000 | 60 | 39 |
| strtoll/strtoull | 230.395 | 1.17983 | 40000 | 60 | 28 |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 735.71 | 0.9896 | 400000 | 60 | 53 |
| std::from_chars | 612.033 | 0.646794 | 400000 | 60 | 17 |
| strtoll/strtoull | 238.579 | 1.13196 | 400000 | 60 | 0 |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 733.644 | 0.342595 | 800 | 60 | 60 |
| std::from_chars | 538.494 | 0.908773 | 800 | 60 | 27 |
| strtoll/strtoull | 381.46 | 0.596676 | 800 | 60 | 6 |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 754.442 | 0.146206 | 8000 | 60 | 1 |
| std::from_chars | 557.952 | 0.362402 | 8000 | 60 | 58 |
| strtoll/strtoull | 372.828 | 0.64894 | 8000 | 60 | 57 |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 699.331 | 0.510205 | 80000 | 60 | 60 |
| std::from_chars | 550.88 | 0.417579 | 80000 | 60 | 26 |
| strtoll/strtoull | 371.703 | 0.553928 | 80000 | 60 | 24 |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 721.357 | 0.771346 | 800000 | 60 | 23 |
| std::from_chars | 563.695 | 0.99729 | 800000 | 60 | 48 |
| strtoll/strtoull | 362.102 | 1.25454 | 800000 | 60 | 47 |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 922.143 | 0.230541 | 800 | 60 | 34 |
| std::from_chars | 691.572 | 0.863619 | 800 | 60 | 19 |
| strtoll/strtoull | 435.676 | 0.623314 | 800 | 60 | 30 |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 956.158 | 0.129135 | 8000 | 60 | 47 |
| std::from_chars | 727.715 | 0.340101 | 8000 | 60 | 42 |
| strtoll/strtoull | 437.54 | 0.301351 | 8000 | 60 | 47 |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 807.172 | 0.916685 | 80000 | 60 | 20 |
| std::from_chars | 727.607 | 0.459905 | 80000 | 60 | 36 |
| strtoll/strtoull | 390.456 | 1.4408 | 80000 | 60 | 28 |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 898.336 | 0.882901 | 800000 | 60 | 15 |
| std::from_chars | 736.584 | 0.89495 | 800000 | 60 | 48 |
| strtoll/strtoull | 382.038 | 1.59104 | 800000 | 60 | 58 |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 945.461 | 0.220806 | 800 | 60 | 18 |
| std::from_chars | 734.547 | 1.23145 | 800 | 60 | 32 |
| strtoll/strtoull | 416.429 | 0.146075 | 800 | 60 | 18 |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 944.387 | 0.283579 | 8000 | 60 | 0 |
| std::from_chars | 759.452 | 0.340513 | 8000 | 60 | 56 |
| strtoll/strtoull | 508.684 | 0.198335 | 8000 | 60 | 51 |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 866.597 | 0.655648 | 80000 | 60 | 16 |
| std::from_chars | 758.392 | 0.498494 | 80000 | 60 | 27 |
| strtoll/strtoull | 435.191 | 1.48732 | 80000 | 60 | 47 |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 903.117 | 0.979416 | 800000 | 60 | 3 |
| std::from_chars | 765.629 | 0.72851 | 800000 | 60 | 23 |
| strtoll/strtoull | 468.741 | 1.39414 | 800000 | 60 | 0 |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 768.206 | 0.310426 | 800 | 60 | 45 |
| std::from_chars | 627.359 | 0.955116 | 800 | 60 | 19 |
| strtoll/strtoull | 333.365 | 0.0311907 | 800 | 60 | 15 |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 768.811 | 0.727094 | 8000 | 60 | 35 |
| std::from_chars | 617.99 | 0.370144 | 8000 | 60 | 60 |
| strtoll/strtoull | 342.045 | 0.179148 | 8000 | 60 | 30 |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 713.45 | 0.587704 | 80000 | 60 | 60 |
| std::from_chars | 604.009 | 0.574979 | 80000 | 60 | 48 |
| strtoll/strtoull | 319.54 | 0.325356 | 80000 | 60 | 60 |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| vn::from_chars | 761.462 | 0.673372 | 800000 | 60 | 32 |
| std::from_chars | 630.683 | 0.897136 | 800000 | 60 | 4 |
| strtoll/strtoull | 320.489 | 0.73579 | 800000 | 60 | 32 |
