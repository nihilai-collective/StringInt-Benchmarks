# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 485.907 | 1.91059 | 0.421888ms | 1000 | 30 | 42184.1 | 1962.67 | 1(Win) |
| std::from_chars | 329.307 | 1.64698 | 2.75994ms | 1000 | 48 | 109198 | 2896 | 2(Loss) |
| strtoll/strtoull | 106.033 | 0.962409 | 1.82298ms | 1000 | 30 | 224781 | 8994.13 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 260.085 | 0.347365 | 9.21702ms | 10000 | 30 | 486699 | 36667.7 | 1(Win) |
| std::from_chars | 202.461 | 1.4699 | 8.25882ms | 10000 | 30 | 1.43818e+07 | 47104 | 2(Loss) |
| strtoll/strtoull | 75.4107 | 0.494421 | 23.0431ms | 10000 | 30 | 1.17287e+07 | 126464 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 192.78 | 0.180796 | 89.2239ms | 100000 | 30 | 2.39979e+07 | 494694 | 1(Win) |
| vn::from_chars | 129.987 | 0.263593 | 132.544ms | 100000 | 30 | 1.12199e+08 | 733670 | 2(Loss) |
| strtoll/strtoull | 72.5395 | 0.29764 | 236.108ms | 100000 | 30 | 4.59361e+08 | 1.3147e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 458.497 | 1.96063 | 1.9991ms | 1000 | 48 | 79828.4 | 2080 | 1(Win) |
| std::from_chars | 322.071 | 1.28991 | 0.59904ms | 1000 | 30 | 43766 | 2961.07 | 2(Loss) |
| strtoll/strtoull | 111.424 | 1.08918 | 1.6ms | 1000 | 30 | 260713 | 8558.93 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 288.708 | 0.114428 | 6.63706ms | 10000 | 30 | 42862.1 | 33032.5 | 1(Win) |
| std::from_chars | 214.344 | 0.714287 | 8.30182ms | 10000 | 30 | 3.03002e+06 | 44492.8 | 2(Loss) |
| strtoll/strtoull | 101.368 | 0.213483 | 17.2411ms | 10000 | 30 | 1.21016e+06 | 94080 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.558 | 0.216185 | 80.993ms | 100000 | 30 | 2.82239e+07 | 448666 | 1(Win) |
| std::from_chars | 192.108 | 0.547261 | 90.0342ms | 100000 | 30 | 2.21422e+08 | 496427 | 2(Loss) |
| strtoll/strtoull | 104.758 | 0.149595 | 165.203ms | 100000 | 30 | 5.56394e+07 | 910362 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 483.804 | 1.88354 | 0.84608ms | 1000 | 30 | 41355.5 | 1971.2 | 1(Win) |
| std::from_chars | 313.929 | 1.384 | 1.3161ms | 1000 | 30 | 53031.4 | 3037.87 | 2(Loss) |
| strtoll/strtoull | 107.979 | 0.819245 | 1.63712ms | 1000 | 30 | 157060 | 8832 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.168 | 0.225253 | 4.93107ms | 10000 | 30 | 74123.5 | 22067.2 | 1(Win) |
| std::from_chars | 216.713 | 0.336269 | 7.94394ms | 10000 | 30 | 656942 | 44006.4 | 2(Loss) |
| strtoll/strtoull | 101.96 | 0.532644 | 16.811ms | 10000 | 30 | 7.44617e+06 | 93533.9 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 233.707 | 0.549916 | 74.3611ms | 100000 | 30 | 1.51067e+08 | 408064 | 1(Win) |
| std::from_chars | 194.865 | 0.160354 | 215.421ms | 100000 | 30 | 1.84763e+07 | 489404 | 2(Loss) |
| strtoll/strtoull | 106.192 | 0.102633 | 163.496ms | 100000 | 30 | 2.54864e+07 | 898065 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.813 | 2.29689 | 1.36602ms | 1000 | 30 | 67494.5 | 2065.07 | 1(Win) |
| std::from_chars | 244.549 | 1.43143 | 0.756992ms | 1000 | 30 | 93483 | 3899.73 | 2(Loss) |
| strtoll/strtoull | 103.672 | 0.8109 | 3.94701ms | 1000 | 30 | 166928 | 9198.93 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 293.176 | 0.284713 | 6.6199ms | 10000 | 30 | 257323 | 32529.1 | 1(Win) |
| std::from_chars | 183.844 | 0.126282 | 9.3952ms | 10000 | 30 | 128737 | 51874.1 | 2(Loss) |
| strtoll/strtoull | 93.28 | 0.426745 | 18.6621ms | 10000 | 30 | 5.7106e+06 | 102238 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 167.96 | 0.236741 | 102.406ms | 100000 | 30 | 5.42072e+07 | 567799 | 1(Win) |
| std::from_chars | 162.622 | 0.339378 | 103.023ms | 100000 | 30 | 1.18831e+08 | 586436 | 2(Loss) |
| strtoll/strtoull | 93.0896 | 0.196293 | 185.092ms | 100000 | 30 | 1.21319e+08 | 1.02447e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 489.097 | 1.43143 | 1.71008ms | 2000 | 30 | 93483 | 3899.73 | 1(Win) |
| std::from_chars | 327.258 | 1.2928 | 1.07392ms | 2000 | 30 | 170318 | 5828.27 | 2(Loss) |
| strtoll/strtoull | 136.541 | 0.85047 | 3.61421ms | 2000 | 30 | 423423 | 13969.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.196 | 0.349578 | 11.2822ms | 20000 | 30 | 1.14567e+06 | 55901.9 | 1(Win) |
| std::from_chars | 270.766 | 0.481648 | 12.5932ms | 20000 | 30 | 3.45345e+06 | 70442.7 | 2(Loss) |
| strtoll/strtoull | 119.733 | 0.435726 | 28.855ms | 20000 | 30 | 1.44538e+07 | 159300 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 270.855 | 0.167762 | 128.46ms | 200000 | 30 | 4.18693e+07 | 704196 | 1(Win) |
| vn::from_chars | 217.098 | 0.343921 | 156.844ms | 200000 | 30 | 2.73897e+08 | 878566 | 2(Loss) |
| strtoll/strtoull | 123.172 | 0.100039 | 278.846ms | 200000 | 30 | 7.19944e+07 | 1.54853e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 458.027 | 1.79129 | 0.795904ms | 2000 | 30 | 166928 | 4164.27 | 1(Win) |
| std::from_chars | 331.137 | 1.45701 | 2.01395ms | 2000 | 30 | 211297 | 5760 | 2(Loss) |
| strtoll/strtoull | 167.932 | 0.7602 | 2.10893ms | 2000 | 30 | 223651 | 11357.9 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 337.589 | 0.180655 | 10.5879ms | 20000 | 30 | 312539 | 56499.2 | 1(Win) |
| std::from_chars | 279.676 | 0.769417 | 12.2808ms | 20000 | 30 | 8.26025e+06 | 68198.4 | 2(Loss) |
| strtoll/strtoull | 155.913 | 0.296238 | 22.1171ms | 20000 | 30 | 3.93999e+06 | 122334 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.023 | 0.111859 | 107.676ms | 200000 | 30 | 1.34176e+07 | 597871 | 1(Win) |
| std::from_chars | 274.382 | 0.226918 | 125.945ms | 200000 | 30 | 7.4646e+07 | 695142 | 2(Loss) |
| strtoll/strtoull | 154.918 | 0.131794 | 221.777ms | 200000 | 30 | 7.89889e+07 | 1.2312e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 336.623 | 1.55809 | 2.17011ms | 2000 | 30 | 233820 | 5666.13 | 1(Win) |
| strtoll/strtoull | 157.185 | 0.96811 | 2.22208ms | 2000 | 30 | 414007 | 12134.4 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 483.699 | 0.229759 | 8.18688ms | 20000 | 30 | 246250 | 39432.5 | 1(Win) |
| std::from_chars | 280.484 | 0.292988 | 29.547ms | 20000 | 30 | 1.19087e+06 | 68002.1 | 2(Loss) |
| strtoll/strtoull | 155.447 | 0.705304 | 21.9668ms | 20000 | 30 | 2.24682e+07 | 122701 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 334.797 | 0.321076 | 102.34ms | 200000 | 30 | 1.00377e+08 | 569702 | 1(Win) |
| std::from_chars | 269.373 | 0.266332 | 127.532ms | 200000 | 30 | 1.0669e+08 | 708070 | 2(Loss) |
| strtoll/strtoull | 158.854 | 0.150375 | 215.337ms | 200000 | 30 | 9.77996e+07 | 1.20069e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 505.696 | 2.27644 | 1.29408ms | 2000 | 30 | 221165 | 3771.73 | 1(Win) |
| std::from_chars | 387.379 | 1.07753 | 2.17984ms | 2000 | 30 | 84443.5 | 4923.73 | 2(Loss) |
| strtoll/strtoull | 173.437 | 0.067851 | 11.8351ms | 2000 | 48 | 2672.57 | 10997.3 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 502.399 | 0.709177 | 7.61805ms | 20000 | 30 | 2.17467e+06 | 37964.8 | 1(Win) |
| std::from_chars | 359.006 | 1.43513 | 9.46099ms | 20000 | 30 | 1.74404e+07 | 53128.5 | 2(Loss) |
| strtoll/strtoull | 170.351 | 0.554933 | 20.0159ms | 20000 | 30 | 1.15817e+07 | 111966 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 407.432 | 0.191083 | 85.428ms | 200000 | 30 | 2.40058e+07 | 468139 | 1(Win) |
| std::from_chars | 352.902 | 0.60703 | 97.2749ms | 200000 | 30 | 3.22919e+08 | 540476 | 2(Loss) |
| strtoll/strtoull | 171.843 | 0.215275 | 200.276ms | 200000 | 30 | 1.7128e+08 | 1.10994e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 587.431 | 1.43306 | 2.60992ms | 4000 | 30 | 259809 | 6493.87 | 1(Win) |
| std::from_chars | 371.6 | 0.814021 | 1.90208ms | 4000 | 30 | 209489 | 10265.6 | 2(Loss) |
| strtoll/strtoull | 183.437 | 1.28324 | 5.32096ms | 4000 | 30 | 2.1364e+06 | 20795.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 429.717 | 0.363114 | 16.7291ms | 40000 | 30 | 3.11718e+06 | 88772.3 | 1(Win) |
| std::from_chars | 323.751 | 1.00069 | 53.449ms | 40000 | 30 | 4.17077e+07 | 117828 | 2(Loss) |
| strtoll/strtoull | 177.24 | 0.397773 | 38.9471ms | 40000 | 30 | 2.19882e+07 | 215228 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 324.324 | 0.183335 | 213.14ms | 400000 | 30 | 1.395e+08 | 1.1762e+06 | 1(Win) |
| vn::from_chars | 318.778 | 0.253839 | 215.886ms | 400000 | 30 | 2.76809e+08 | 1.19666e+06 | 2(Loss) |
| strtoll/strtoull | 176.479 | 0.192855 | 393.437ms | 400000 | 30 | 5.21339e+08 | 2.16156e+06 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 534.731 | 2.41941 | 3.03104ms | 4000 | 30 | 893700 | 7133.87 | 1(Win) |
| std::from_chars | 353.108 | 0.704058 | 3.45498ms | 4000 | 30 | 173557 | 10803.2 | 2(Loss) |
| strtoll/strtoull | 217.535 | 1.39946 | 3.13114ms | 4000 | 30 | 1.80676e+06 | 17536 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 473.654 | 0.278362 | 14.4852ms | 40000 | 30 | 1.50778e+06 | 80537.6 | 1(Win) |
| std::from_chars | 333.459 | 0.309435 | 20.5481ms | 40000 | 30 | 3.75921e+06 | 114398 | 2(Loss) |
| strtoll/strtoull | 211.925 | 0.350744 | 32.3679ms | 40000 | 30 | 1.1958e+07 | 180002 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.705 | 0.173885 | 173.968ms | 400000 | 30 | 8.47264e+07 | 966468 | 1(Win) |
| std::from_chars | 321.162 | 0.491932 | 206.791ms | 400000 | 30 | 1.02424e+09 | 1.18778e+06 | 2(Loss) |
| strtoll/strtoull | 212.629 | 0.249722 | 323.713ms | 400000 | 30 | 6.02158e+08 | 1.79407e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 382.081 | 1.42843 | 1.41594ms | 400 | 30 | 6101.63 | 998.4 | 1(Win) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 625.224 | 0.901547 | 1.12691ms | 4000 | 30 | 90771.1 | 6101.33 | 1(Win) |
| std::from_chars | 371.6 | 0.814021 | 1.9712ms | 4000 | 30 | 209489 | 10265.6 | 2(Loss) |
| strtoll/strtoull | 212.267 | 1.45912 | 4.60109ms | 4000 | 30 | 2.0628e+06 | 17971.2 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 551.759 | 0.206226 | 12.598ms | 40000 | 30 | 609861 | 69137.1 | 1(Win) |
| std::from_chars | 352.69 | 0.176811 | 19.5169ms | 40000 | 30 | 1.09716e+06 | 108160 | 2(Loss) |
| strtoll/strtoull | 212.52 | 0.258411 | 32.2732ms | 40000 | 30 | 6.45454e+06 | 179499 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 444.864 | 0.250187 | 154.653ms | 400000 | 30 | 1.38076e+08 | 857498 | 1(Win) |
| std::from_chars | 327.237 | 0.143188 | 211.796ms | 400000 | 30 | 8.35854e+07 | 1.16573e+06 | 2(Loss) |
| strtoll/strtoull | 212.518 | 0.163556 | 318.857ms | 400000 | 30 | 2.58573e+08 | 1.795e+06 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 614.903 | 1.11367 | 1.17786ms | 4000 | 30 | 143200 | 6203.73 | 1(Win) |
| std::from_chars | 435.282 | 0.904248 | 1.62586ms | 4000 | 30 | 188397 | 8763.73 | 2(Loss) |
| strtoll/strtoull | 234.05 | 0.528949 | 3.02285ms | 4000 | 30 | 222973 | 16298.7 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 588.668 | 0.138844 | 12.693ms | 40000 | 30 | 242860 | 64802.1 | 1(Win) |
| std::from_chars | 418.925 | 0.475262 | 16.3789ms | 40000 | 30 | 5.6187e+06 | 91059.2 | 2(Loss) |
| strtoll/strtoull | 216.744 | 1.57468 | 183.279ms | 40000 | 48 | 3.6868e+08 | 176000 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 529.01 | 0.0636069 | 131.191ms | 400000 | 30 | 6.31134e+06 | 721101 | 1(Win) |
| std::from_chars | 434.525 | 0.127891 | 391.915ms | 400000 | 30 | 3.78172e+07 | 877901 | 2(Loss) |
| strtoll/strtoull | 229.262 | 0.332391 | 299.176ms | 400000 | 30 | 9.17651e+08 | 1.66391e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 267.886 | 1.94152 | 4.34893ms | 800 | 48 | 146759 | 2848 | 1(Win) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 625.661 | 0.968002 | 2.1929ms | 8000 | 30 | 417999 | 12194.1 | 1(Win) |
| std::from_chars | 414.689 | 0.532612 | 3.76499ms | 8000 | 30 | 288057 | 18397.9 | 2(Loss) |
| strtoll/strtoull | 249.322 | 1.92021 | 6.84698ms | 8000 | 30 | 1.0358e+07 | 30600.5 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 625.661 | 0.239753 | 22.1ms | 80000 | 30 | 2.56419e+06 | 121941 | 1(Win) |
| std::from_chars | 452.442 | 0.211859 | 30.3508ms | 80000 | 30 | 3.82888e+06 | 168627 | 2(Loss) |
| strtoll/strtoull | 255.909 | 0.377264 | 53.836ms | 80000 | 30 | 3.79507e+07 | 298129 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 543.96 | 0.208323 | 257.933ms | 800000 | 30 | 2.56118e+08 | 1.40256e+06 | 1(Win) |
| std::from_chars | 421.28 | 1.69975 | 371.457ms | 800000 | 30 | 2.8427e+10 | 1.811e+06 | 2(Loss) |
| strtoll/strtoull | 256.278 | 0.177222 | 542.8ms | 800000 | 30 | 8.35052e+08 | 2.977e+06 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 671.223 | 0.805211 | 2.09613ms | 8000 | 30 | 251297 | 11366.4 | 1(Win) |
| std::from_chars | 432.545 | 0.707443 | 3.71686ms | 8000 | 30 | 467113 | 17638.4 | 2(Loss) |
| strtoll/strtoull | 297.231 | 1.32255 | 4.64794ms | 8000 | 30 | 3.45729e+06 | 25668.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 630.737 | 0.590447 | 21.878ms | 80000 | 30 | 1.53027e+07 | 120960 | 1(Win) |
| std::from_chars | 440.993 | 0.222373 | 31.4598ms | 80000 | 30 | 4.44018e+06 | 173005 | 2(Loss) |
| strtoll/strtoull | 305.947 | 0.144626 | 45.4569ms | 80000 | 30 | 3.9021e+06 | 249370 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 617.648 | 0.122334 | 224.451ms | 800000 | 30 | 6.85043e+07 | 1.23523e+06 | 1(Win) |
| std::from_chars | 424.13 | 1.0527 | 361.817ms | 800000 | 30 | 1.07576e+10 | 1.79884e+06 | 2(Loss) |
| strtoll/strtoull | 304.166 | 0.223661 | 466.191ms | 800000 | 30 | 9.44191e+08 | 2.5083e+06 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 670.72 | 0.790617 | 2.22694ms | 8000 | 30 | 242634 | 11374.9 | 1(Win) |
| std::from_chars | 441.08 | 0.534257 | 8.0169ms | 8000 | 30 | 256193 | 17297.1 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 400.712 | 1.02905 | 35.6119ms | 80000 | 30 | 1.15162e+08 | 190396 | 1(Win) |
| strtoll/strtoull | 238.52 | 2.47891 | 148.352ms | 80000 | 30 | 1.88614e+09 | 319863 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 589.914 | 2.36913 | 1305.1ms | 800000 | 48 | 4.50631e+10 | 1.29331e+06 | 1(Win) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 648.817 | 0.66783 | 2.39181ms | 8000 | 30 | 185007 | 11758.9 | 1(Win) |
| std::from_chars | 424.736 | 0.23753 | 3.46982ms | 8000 | 30 | 54613.3 | 17962.7 | 2(Loss) |
| strtoll/strtoull | 283.652 | 0.253807 | 4.89907ms | 8000 | 30 | 139810 | 26897.1 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 571.072 | 0.37744 | 24.2189ms | 80000 | 30 | 7.62809e+06 | 133598 | 1(Win) |
| std::from_chars | 417.829 | 0.347599 | 32.875ms | 80000 | 30 | 1.20854e+07 | 182596 | 2(Loss) |
| strtoll/strtoull | 276.126 | 0.11763 | 49.8399ms | 80000 | 30 | 3.169e+06 | 276301 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 458.942 | 1.53905 | 296.988ms | 800000 | 30 | 1.96377e+10 | 1.66239e+06 | 1(Win) |
| std::from_chars | 415.643 | 0.157064 | 454.067ms | 800000 | 30 | 2.49354e+08 | 1.83556e+06 | 2(Loss) |
| strtoll/strtoull | 260.055 | 0.46464 | 1636.83ms | 800000 | 30 | 5.57447e+09 | 2.93376e+06 | 3(Loss) |
