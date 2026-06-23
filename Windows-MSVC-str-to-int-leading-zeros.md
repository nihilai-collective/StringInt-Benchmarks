# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36247.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 138.214 | 0.807371 | 0.1768ms | 100 | 30 | 931.034 | 690 | 1(Win) |
| std::from_chars | 58.3882 | 0.535945 | 0.3246ms | 100 | 30 | 2298.85 | 1633.33 | 2(Loss) |
| strtoll/strtoull | 28.8992 | 0.145292 | 0.6348ms | 100 | 30 | 689.655 | 3300 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 132.516 | 0.124343 | 1.3613ms | 1000 | 30 | 2402.3 | 7196.67 | 1(Win) |
| std::from_chars | 53.7584 | 0.0512806 | 7.4281ms | 1000 | 30 | 2482.76 | 17740 | 2(Loss) |
| strtoll/strtoull | 21.4759 | 1.22878 | 8.0348ms | 1000 | 30 | 8.93237e+06 | 44406.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 44.4327 | 0.740677 | 38.2133ms | 10000 | 30 | 7.58182e+07 | 214633 | 1(Win) |
| std::from_chars | 42.1209 | 0.604686 | 41.1655ms | 10000 | 30 | 5.62322e+07 | 226413 | 2(Loss) |
| strtoll/strtoull | 21.4674 | 0.466852 | 80.3209ms | 10000 | 30 | 1.29039e+08 | 444243 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 40.5937 | 0.276967 | 421.963ms | 100000 | 30 | 1.27016e+09 | 2.34931e+06 | 1(Win) |
| vn::from_chars | 38.602 | 0.135565 | 445.027ms | 100000 | 30 | 3.36508e+08 | 2.47053e+06 | 2(Loss) |
| strtoll/strtoull | 21.3153 | 0.0971185 | 817.657ms | 100000 | 30 | 5.66427e+08 | 4.47414e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 130.64 | 1.1657 | 0.179ms | 100 | 30 | 2172.41 | 730 | 1(Win) |
| std::from_chars | 61.5274 | 0.599017 | 0.3209ms | 100 | 30 | 2586.21 | 1550 | 2(Loss) |
| strtoll/strtoull | 27.9124 | 0.20255 | 0.6546ms | 100 | 30 | 1436.78 | 3416.67 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 129.166 | 0.0937308 | 1.4551ms | 1000 | 30 | 1436.78 | 7383.33 | 1(Win) |
| std::from_chars | 50.2463 | 0.039135 | 8.0784ms | 1000 | 30 | 1655.17 | 18980 | 2(Loss) |
| strtoll/strtoull | 20.6259 | 1.09834 | 8.3749ms | 1000 | 30 | 7.73689e+06 | 46236.7 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 49.3646 | 0.937158 | 88.9207ms | 10000 | 30 | 9.83368e+07 | 193190 | 1(Win) |
| std::from_chars | 44.8225 | 0.864464 | 38.4427ms | 10000 | 30 | 1.0149e+08 | 212767 | 2(Loss) |
| strtoll/strtoull | 23.3872 | 0.579636 | 73.4868ms | 10000 | 30 | 1.67601e+08 | 407777 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 45.9335 | 0.168397 | 375.314ms | 100000 | 30 | 3.66717e+08 | 2.07621e+06 | 1(Win) |
| vn::from_chars | 44.4854 | 0.31775 | 386.029ms | 100000 | 30 | 1.39206e+09 | 2.14379e+06 | 2(Loss) |
| strtoll/strtoull | 23.2761 | 0.110106 | 739.812ms | 100000 | 30 | 6.10558e+08 | 4.09723e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 141.635 | 1.21957 | 0.1469ms | 100 | 30 | 2022.99 | 673.333 | 1(Win) |
| std::from_chars | 57.6819 | 0.560329 | 0.3208ms | 100 | 30 | 2574.71 | 1653.33 | 2(Loss) |
| strtoll/strtoull | 28.6963 | 0.824792 | 0.6207ms | 100 | 30 | 22540.2 | 3323.33 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 133.755 | 0.152605 | 1.403ms | 1000 | 30 | 3551.72 | 7130 | 1(Win) |
| std::from_chars | 56.6315 | 0.0540212 | 3.116ms | 1000 | 30 | 2482.76 | 16840 | 2(Loss) |
| strtoll/strtoull | 21.3016 | 1.1697 | 8.1618ms | 1000 | 30 | 8.227e+06 | 44770 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 50.869 | 0.683777 | 33.735ms | 10000 | 30 | 4.92998e+07 | 187477 | 1(Win) |
| std::from_chars | 48.3796 | 0.736621 | 35.3345ms | 10000 | 30 | 6.32536e+07 | 197123 | 2(Loss) |
| strtoll/strtoull | 23.5086 | 0.509047 | 73.1011ms | 10000 | 30 | 1.27933e+08 | 405670 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 48.3789 | 0.141109 | 367.266ms | 100000 | 30 | 2.32123e+08 | 1.97126e+06 | 1(Win) |
| vn::from_chars | 45.2112 | 0.132576 | 379.213ms | 100000 | 30 | 2.34616e+08 | 2.10938e+06 | 2(Loss) |
| strtoll/strtoull | 23.4132 | 0.0913743 | 733.466ms | 100000 | 30 | 4.15573e+08 | 4.07323e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 141.635 | 1.21957 | 0.1478ms | 100 | 30 | 2022.99 | 673.333 | 1(Win) |
| std::from_chars | 58.5076 | 0.522063 | 0.3298ms | 100 | 30 | 2172.41 | 1630 | 2(Loss) |
| strtoll/strtoull | 30.7306 | 0.107411 | 0.5846ms | 100 | 30 | 333.333 | 3103.33 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 141.591 | 0.103574 | 6.2788ms | 1000 | 48 | 2335.99 | 6735.42 | 1(Win) |
| std::from_chars | 48.2222 | 0.134293 | 3.362ms | 1000 | 30 | 21160.9 | 19776.7 | 2(Loss) |
| strtoll/strtoull | 24.493 | 0.971512 | 7.127ms | 1000 | 30 | 4.29275e+06 | 38936.7 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 52.4747 | 0.636035 | 33.0622ms | 10000 | 30 | 4.00852e+07 | 181740 | 1(Win) |
| std::from_chars | 45.0193 | 0.74834 | 37.6651ms | 10000 | 30 | 7.53914e+07 | 211837 | 2(Loss) |
| strtoll/strtoull | 22.9477 | 0.922312 | 73.2373ms | 10000 | 30 | 4.40758e+08 | 415587 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 47.4286 | 0.116013 | 362.96ms | 100000 | 30 | 1.6325e+08 | 2.01076e+06 | 1(Win) |
| std::from_chars | 45.4685 | 0.140212 | 377.307ms | 100000 | 30 | 2.59459e+08 | 2.09744e+06 | 2(Loss) |
| strtoll/strtoull | 23.2093 | 0.15838 | 741.256ms | 100000 | 30 | 1.27056e+09 | 4.10901e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.661 | 0.562713 | 0.2167ms | 200 | 30 | 931.034 | 990 | 1(Win) |
| std::from_chars | 88.9898 | 0.429325 | 0.4627ms | 200 | 30 | 2540.23 | 2143.33 | 2(Loss) |
| strtoll/strtoull | 48.3281 | 0.234733 | 0.7382ms | 200 | 30 | 2574.71 | 3946.67 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.144 | 0.0827242 | 1.913ms | 2000 | 30 | 2022.99 | 9926.67 | 1(Win) |
| std::from_chars | 74.7687 | 2.01453 | 10.6851ms | 2000 | 30 | 7.923e+06 | 25510 | 2(Loss) |
| strtoll/strtoull | 41.0212 | 1.87622 | 8.2586ms | 2000 | 30 | 2.28314e+07 | 46496.7 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 90.4385 | 0.701355 | 38.0414ms | 20000 | 30 | 6.56372e+07 | 210900 | 1(Win) |
| std::from_chars | 71.6994 | 0.793847 | 48.0227ms | 20000 | 30 | 1.3379e+08 | 266020 | 2(Loss) |
| strtoll/strtoull | 39.172 | 0.529038 | 88.5605ms | 20000 | 30 | 1.99069e+08 | 486917 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 84.0937 | 0.455909 | 406.593ms | 200000 | 30 | 3.20783e+09 | 2.26812e+06 | 1(Win) |
| std::from_chars | 70.8944 | 0.300374 | 484.911ms | 200000 | 30 | 1.95921e+09 | 2.69041e+06 | 2(Loss) |
| strtoll/strtoull | 38.2522 | 0.255135 | 893.876ms | 200000 | 30 | 4.85523e+09 | 4.98625e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 184.582 | 0.847138 | 0.4946ms | 200 | 30 | 2298.85 | 1033.33 | 1(Win) |
| std::from_chars | 88.4397 | 0.426671 | 0.416ms | 200 | 30 | 2540.23 | 2156.67 | 2(Loss) |
| strtoll/strtoull | 46.4829 | 0.142311 | 0.7908ms | 200 | 30 | 1022.99 | 4103.33 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 188.473 | 0.748209 | 4.4121ms | 2000 | 30 | 172000 | 10120 | 1(Win) |
| std::from_chars | 84.8465 | 0.0393277 | 9.7841ms | 2000 | 30 | 2344.83 | 22480 | 2(Loss) |
| strtoll/strtoull | 42.5874 | 1.61208 | 10.8308ms | 2000 | 30 | 1.56384e+07 | 44786.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 102.792 | 0.92284 | 33.3722ms | 20000 | 30 | 8.79653e+07 | 185553 | 1(Win) |
| std::from_chars | 81.7435 | 0.787571 | 42.4034ms | 20000 | 30 | 1.01311e+08 | 233333 | 2(Loss) |
| strtoll/strtoull | 41.9563 | 0.959086 | 81.6144ms | 20000 | 30 | 5.70298e+08 | 454603 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 98.4411 | 0.154007 | 350.413ms | 200000 | 30 | 2.67123e+08 | 1.93755e+06 | 1(Win) |
| std::from_chars | 79.4871 | 0.213662 | 430.866ms | 200000 | 30 | 7.88574e+08 | 2.39957e+06 | 2(Loss) |
| strtoll/strtoull | 41.695 | 0.213767 | 825.58ms | 200000 | 30 | 2.86876e+09 | 4.57453e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.774 | 0.977344 | 0.1987ms | 200 | 30 | 2586.21 | 950 | 1(Win) |
| std::from_chars | 91.5527 | 0.332182 | 0.4136ms | 200 | 30 | 1436.78 | 2083.33 | 2(Loss) |
| strtoll/strtoull | 48.8646 | 0.0853971 | 0.7207ms | 200 | 30 | 333.333 | 3903.33 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.132 | 0.0987779 | 1.826ms | 2000 | 30 | 2712.64 | 9626.67 | 1(Win) |
| std::from_chars | 79.154 | 2.40649 | 4.3654ms | 2000 | 30 | 1.00879e+07 | 24096.7 | 2(Loss) |
| strtoll/strtoull | 43.5302 | 1.31068 | 7.9323ms | 2000 | 30 | 9.89454e+06 | 43816.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 103.591 | 0.799556 | 32.9735ms | 20000 | 30 | 6.50184e+07 | 184123 | 1(Win) |
| std::from_chars | 78.3928 | 1.29838 | 45.4729ms | 20000 | 30 | 2.99388e+08 | 243307 | 2(Loss) |
| strtoll/strtoull | 43.5952 | 0.576309 | 81.4834ms | 20000 | 30 | 1.90728e+08 | 437513 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 99.2961 | 0.216567 | 345.979ms | 200000 | 30 | 5.19161e+08 | 1.92087e+06 | 1(Win) |
| std::from_chars | 79.71 | 0.311773 | 430.155ms | 200000 | 30 | 1.66967e+09 | 2.39286e+06 | 2(Loss) |
| strtoll/strtoull | 42.3709 | 0.118954 | 810.743ms | 200000 | 30 | 8.60216e+08 | 4.50156e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.091 | 0.915014 | 0.2069ms | 200 | 30 | 2172.41 | 930 | 1(Win) |
| std::from_chars | 107.154 | 0.417293 | 0.3502ms | 200 | 30 | 1655.17 | 1780 | 2(Loss) |
| strtoll/strtoull | 51.411 | 0.150158 | 1.6367ms | 200 | 30 | 931.034 | 3710 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 206.721 | 0.0890003 | 1.7742ms | 2000 | 30 | 2022.99 | 9226.67 | 1(Win) |
| std::from_chars | 93.7579 | 0.350913 | 3.7204ms | 2000 | 30 | 152885 | 20343.3 | 2(Loss) |
| strtoll/strtoull | 43.1234 | 2.01159 | 7.8724ms | 2000 | 30 | 2.37484e+07 | 44230 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 116.776 | 0.78178 | 29.4888ms | 20000 | 30 | 4.89147e+07 | 163333 | 1(Win) |
| std::from_chars | 89.1632 | 0.715024 | 38.5161ms | 20000 | 30 | 7.01863e+07 | 213917 | 2(Loss) |
| strtoll/strtoull | 42.4951 | 0.366915 | 80.7907ms | 20000 | 30 | 8.13646e+07 | 448840 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 109.173 | 0.223153 | 314.148ms | 200000 | 30 | 4.55995e+08 | 1.74709e+06 | 1(Win) |
| std::from_chars | 89.993 | 0.0873803 | 901.668ms | 200000 | 30 | 1.02894e+08 | 2.11944e+06 | 2(Loss) |
| strtoll/strtoull | 42.8916 | 0.0760401 | 802.005ms | 200000 | 30 | 3.43022e+08 | 4.4469e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.667 | 0.388161 | 0.2461ms | 400 | 30 | 643.678 | 1193.33 | 1(Win) |
| std::from_chars | 156.34 | 0.372835 | 0.4514ms | 400 | 30 | 2482.76 | 2440 | 2(Loss) |
| strtoll/strtoull | 78.7618 | 0.18999 | 0.8944ms | 400 | 30 | 2540.23 | 4843.33 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 340.902 | 0.0497843 | 2.1401ms | 4000 | 30 | 931.034 | 11190 | 1(Win) |
| std::from_chars | 153.016 | 0.0436452 | 4.6096ms | 4000 | 30 | 3551.72 | 24930 | 2(Loss) |
| strtoll/strtoull | 69.4044 | 1.568 | 9.9163ms | 4000 | 30 | 2.22824e+07 | 54963.3 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 169.001 | 0.507443 | 40.2663ms | 40000 | 30 | 3.93582e+07 | 225720 | 1(Win) |
| std::from_chars | 144.578 | 0.700715 | 47.6029ms | 40000 | 30 | 1.02546e+08 | 263850 | 2(Loss) |
| strtoll/strtoull | 67.3804 | 0.393756 | 102.55ms | 40000 | 30 | 1.49083e+08 | 566143 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 154.904 | 0.604451 | 437.108ms | 400000 | 30 | 6.64719e+09 | 2.46262e+06 | 1(Win) |
| std::from_chars | 144.254 | 0.19298 | 477.248ms | 400000 | 30 | 7.81289e+08 | 2.64444e+06 | 2(Loss) |
| strtoll/strtoull | 67.0168 | 0.128049 | 1035.53ms | 400000 | 30 | 1.59378e+09 | 5.69215e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.563 | 0.46814 | 0.2373ms | 400 | 30 | 931.034 | 1190 | 1(Win) |
| std::from_chars | 160.732 | 0.988321 | 1.0293ms | 400 | 30 | 16505.7 | 2373.33 | 2(Loss) |
| strtoll/strtoull | 79.9727 | 0.178399 | 2.0849ms | 400 | 30 | 2172.41 | 4770 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.911 | 0.230704 | 2.1883ms | 4000 | 30 | 21609.2 | 11633.3 | 1(Win) |
| std::from_chars | 168.197 | 0.132697 | 9.7204ms | 4000 | 30 | 27172.4 | 22680 | 2(Loss) |
| strtoll/strtoull | 71.3428 | 1.55835 | 9.5403ms | 4000 | 30 | 2.08291e+07 | 53470 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 195.579 | 0.497369 | 35.4241ms | 40000 | 30 | 2.82329e+07 | 195047 | 1(Win) |
| std::from_chars | 164.972 | 0.708624 | 41.473ms | 40000 | 30 | 8.05478e+07 | 231233 | 2(Loss) |
| strtoll/strtoull | 71.7885 | 0.497544 | 95.9602ms | 40000 | 30 | 2.09698e+08 | 531380 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 180.608 | 0.156642 | 379.306ms | 400000 | 30 | 3.28384e+08 | 2.11214e+06 | 1(Win) |
| std::from_chars | 164.185 | 0.414791 | 419.173ms | 400000 | 30 | 2.78634e+09 | 2.32341e+06 | 2(Loss) |
| strtoll/strtoull | 70.8212 | 0.141952 | 971.332ms | 400000 | 30 | 1.75388e+09 | 5.38638e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.713 | 0.807371 | 0.2332ms | 400 | 30 | 2586.21 | 1150 | 1(Win) |
| std::from_chars | 177.98 | 0.429325 | 0.9632ms | 400 | 30 | 2540.23 | 2143.33 | 2(Loss) |
| strtoll/strtoull | 79.5834 | 0.0966354 | 0.8834ms | 400 | 30 | 643.678 | 4793.33 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 351.261 | 0.0837677 | 2.0446ms | 4000 | 30 | 2482.76 | 10860 | 1(Win) |
| std::from_chars | 163.692 | 0.0219753 | 21.5111ms | 4000 | 48 | 1258.87 | 23304.2 | 2(Loss) |
| strtoll/strtoull | 73.7187 | 1.07356 | 9.3604ms | 4000 | 30 | 9.25844e+06 | 51746.7 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.132 | 0.939582 | 34.4331ms | 40000 | 30 | 9.81754e+07 | 192533 | 1(Win) |
| std::from_chars | 159.342 | 0.627576 | 43.3154ms | 40000 | 30 | 6.77196e+07 | 239403 | 2(Loss) |
| strtoll/strtoull | 72.2376 | 0.455148 | 95.2351ms | 40000 | 30 | 1.73309e+08 | 528077 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 188.608 | 0.269394 | 364.961ms | 400000 | 30 | 8.9063e+08 | 2.02256e+06 | 1(Win) |
| std::from_chars | 164.212 | 0.424414 | 418.986ms | 400000 | 30 | 2.91617e+09 | 2.32304e+06 | 2(Loss) |
| strtoll/strtoull | 69.6196 | 1.30571 | 994.888ms | 400000 | 30 | 1.53558e+11 | 5.47934e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.754 | 0.803247 | 0.2287ms | 400 | 30 | 2574.71 | 1153.33 | 1(Win) |
| std::from_chars | 161.64 | 0.385474 | 0.4853ms | 400 | 30 | 2482.76 | 2360 | 2(Loss) |
| strtoll/strtoull | 78.5995 | 0.190881 | 0.8969ms | 400 | 30 | 2574.71 | 4853.33 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 342.253 | 0.0652072 | 11.3877ms | 4000 | 48 | 2535.46 | 11145.8 | 1(Win) |
| std::from_chars | 153.447 | 0.108417 | 4.6035ms | 4000 | 30 | 21793.1 | 24860 | 2(Loss) |
| strtoll/strtoull | 74.9302 | 0.150494 | 10.4184ms | 4000 | 30 | 176103 | 50910 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.912 | 0.63765 | 31.0041ms | 40000 | 30 | 3.57222e+07 | 171130 | 1(Win) |
| std::from_chars | 180.983 | 0.709329 | 96.4415ms | 40000 | 30 | 6.70598e+07 | 210777 | 2(Loss) |
| strtoll/strtoull | 72.6337 | 0.470578 | 94.6396ms | 40000 | 30 | 1.83244e+08 | 525197 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 215.119 | 0.172849 | 320.414ms | 400000 | 30 | 2.81849e+08 | 1.7733e+06 | 1(Win) |
| std::from_chars | 148.962 | 0.114641 | 461.988ms | 400000 | 30 | 2.58567e+08 | 2.56086e+06 | 2(Loss) |
| strtoll/strtoull | 68.936 | 1.06021 | 963.548ms | 400000 | 30 | 1.03259e+11 | 5.53368e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 453.231 | 0.411116 | 0.3381ms | 800 | 30 | 1436.78 | 1683.33 | 1(Win) |
| std::from_chars | 259.503 | 0.309428 | 0.5561ms | 800 | 30 | 2482.76 | 2940 | 2(Loss) |
| strtoll/strtoull | 110.678 | 0.0967118 | 1.287ms | 800 | 30 | 1333.33 | 6893.33 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 469.381 | 1.69509 | 14.7911ms | 8000 | 48 | 3.64381e+06 | 16254.2 | 1(Win) |
| std::from_chars | 229.318 | 1.69344 | 14.0252ms | 8000 | 30 | 9.52286e+06 | 33270 | 2(Loss) |
| strtoll/strtoull | 105.929 | 0.790921 | 13.0962ms | 8000 | 30 | 9.73495e+06 | 72023.3 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.445 | 0.763224 | 44.3164ms | 80000 | 30 | 1.05545e+08 | 245757 | 1(Win) |
| std::from_chars | 226.083 | 1.18564 | 320.822ms | 80000 | 48 | 7.68415e+08 | 337460 | 2(Loss) |
| strtoll/strtoull | 104.222 | 0.459155 | 131.685ms | 80000 | 30 | 3.38921e+08 | 732030 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 295.186 | 0.179944 | 468.048ms | 800000 | 30 | 6.48914e+08 | 2.58461e+06 | 1(Win) |
| std::from_chars | 235.849 | 0.198535 | 590.01ms | 800000 | 30 | 1.2374e+09 | 3.23487e+06 | 2(Loss) |
| strtoll/strtoull | 103.893 | 0.125 | 1325.43ms | 800000 | 30 | 2.5278e+09 | 7.34349e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 441.005 | 0.491886 | 0.7905ms | 800 | 30 | 2172.41 | 1730 | 1(Win) |
| std::from_chars | 266.451 | 0.312522 | 1.0661ms | 800 | 30 | 2402.3 | 2863.33 | 2(Loss) |
| strtoll/strtoull | 71.5479 | 0.343857 | 1.4459ms | 800 | 30 | 40333.3 | 10663.3 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 453.411 | 0.048802 | 7.6195ms | 8000 | 30 | 2022.99 | 16826.7 | 1(Win) |
| std::from_chars | 266.018 | 0.0258989 | 5.4511ms | 8000 | 30 | 1655.17 | 28680 | 2(Loss) |
| strtoll/strtoull | 110.721 | 1.20386 | 12.552ms | 8000 | 30 | 2.06441e+07 | 68906.7 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.08 | 0.589932 | 40.3438ms | 80000 | 30 | 5.22387e+07 | 223683 | 1(Win) |
| std::from_chars | 260.297 | 0.632918 | 52.9116ms | 80000 | 30 | 1.03242e+08 | 293103 | 2(Loss) |
| strtoll/strtoull | 105.095 | 1.6811 | 125.257ms | 80000 | 30 | 4.46808e+09 | 725950 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.189 | 0.263878 | 419.488ms | 800000 | 30 | 1.10856e+09 | 2.30364e+06 | 1(Win) |
| std::from_chars | 264.689 | 0.13641 | 1312.78ms | 800000 | 30 | 4.6379e+08 | 2.8824e+06 | 2(Loss) |
| strtoll/strtoull | 110.045 | 0.134631 | 1269.41ms | 800000 | 30 | 2.61367e+09 | 6.93297e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 478.832 | 0.290715 | 0.3139ms | 800 | 30 | 643.678 | 1593.33 | 1(Win) |
| std::from_chars | 261.879 | 0.216674 | 0.5646ms | 800 | 30 | 1195.4 | 2913.33 | 2(Loss) |
| strtoll/strtoull | 114.785 | 0.13938 | 1.2727ms | 800 | 30 | 2574.71 | 6646.67 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 497.245 | 0.0599731 | 2.8649ms | 8000 | 30 | 2540.23 | 15343.3 | 1(Win) |
| std::from_chars | 261.4 | 0.0216278 | 5.3834ms | 8000 | 30 | 1195.4 | 29186.7 | 2(Loss) |
| strtoll/strtoull | 112.39 | 0.811485 | 12.3484ms | 8000 | 30 | 9.10351e+06 | 67883.3 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 376.531 | 0.60578 | 36.8227ms | 80000 | 30 | 4.51991e+07 | 202623 | 1(Win) |
| std::from_chars | 257.596 | 0.697965 | 53.4545ms | 80000 | 30 | 1.282e+08 | 296177 | 2(Loss) |
| strtoll/strtoull | 113.78 | 0.432593 | 120.48ms | 80000 | 30 | 2.5242e+08 | 670537 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 336.049 | 0.226616 | 404.397ms | 800000 | 30 | 7.941e+08 | 2.27032e+06 | 1(Win) |
| std::from_chars | 244.628 | 1.05182 | 549.013ms | 800000 | 30 | 3.22829e+10 | 3.11877e+06 | 2(Loss) |
| strtoll/strtoull | 106.901 | 0.17253 | 1290.22ms | 800000 | 30 | 4.54845e+09 | 7.13685e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.653 | 0.556185 | 0.3387ms | 800 | 30 | 2172.41 | 1530 | 1(Win) |
| strtoll/strtoull | 110.438 | 0.112665 | 6.6047ms | 800 | 48 | 2907.8 | 6908.33 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 488.646 | 2.3479 | 2.922ms | 8000 | 30 | 4.03154e+06 | 15613.3 | 1(Win) |
| strtoll/strtoull | 105.983 | 1.95152 | 32.0675ms | 8000 | 30 | 5.92067e+07 | 71986.7 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.996 | 2.08891 | 41.5969ms | 80000 | 30 | 7.08283e+08 | 232607 | 1(Win) |
| std::from_chars | 210.047 | 0.698408 | 65.2339ms | 80000 | 30 | 1.93058e+08 | 363223 | 2(Loss) |
| strtoll/strtoull | 108.505 | 0.549806 | 128.561ms | 80000 | 30 | 4.48356e+08 | 703140 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 324.659 | 0.0915504 | 425.331ms | 800000 | 30 | 1.38857e+08 | 2.34997e+06 | 1(Win) |
| std::from_chars | 275.885 | 0.136345 | 505.248ms | 800000 | 30 | 4.26504e+08 | 2.76543e+06 | 2(Loss) |
| strtoll/strtoull | 111.724 | 0.0690839 | 1230.47ms | 800000 | 30 | 6.67672e+08 | 6.8288e+06 | 3(Loss) |
