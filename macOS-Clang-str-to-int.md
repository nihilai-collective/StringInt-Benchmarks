# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the Clang 22.1.8 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 473.601 | 2.00256 | 0.07675ms | 100 | 30 | 487.826 | 201.367 | 1(Win) |
| std::from_chars | 183.646 | 2.10117 | 0.095917ms | 100 | 30 | 3571.73 | 519.3 | 2(Loss) |
| strtoll/strtoull | 97.1188 | 0.390019 | 0.210625ms | 100 | 30 | 440.033 | 981.967 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 616.932 | 0.148914 | 0.331167ms | 1000 | 30 | 158.971 | 1545.83 | 1(Win) |
| strtoll/strtoull | 82.7189 | 0.630109 | 2.088ms | 1000 | 30 | 158323 | 11529.1 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 251.022 | 0.0177403 | 7.72317ms | 10000 | 30 | 1362.77 | 37991.7 | 1(Win) |
| std::from_chars | 178.206 | 0.542309 | 9.79679ms | 10000 | 30 | 2.52679e+06 | 53515.2 | 2(Loss) |
| strtoll/strtoull | 74.3146 | 0.0372325 | 23.1473ms | 10000 | 30 | 68488.3 | 128329 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 148.705 | 0.157933 | 115.703ms | 100000 | 30 | 3.07763e+07 | 641321 | 1(Win) |
| vn::from_chars | 127.176 | 0.168372 | 136.845ms | 100000 | 30 | 4.78247e+07 | 749888 | 2(Loss) |
| strtoll/strtoull | 72.6581 | 0.211175 | 237.665ms | 100000 | 30 | 2.30482e+08 | 1.31255e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 493.961 | 2.18624 | 0.04725ms | 100 | 30 | 534.478 | 193.067 | 1(Win) |
| std::from_chars | 223.675 | 0.767199 | 0.088375ms | 100 | 30 | 320.999 | 426.367 | 2(Loss) |
| strtoll/strtoull | 103.563 | 0.333662 | 0.178416ms | 100 | 30 | 283.223 | 920.867 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.18 | 1.37607 | 0.7825ms | 1000 | 30 | 18948 | 1826.33 | 1(Win) |
| std::from_chars | 213.977 | 0.503379 | 0.825458ms | 1000 | 30 | 15100 | 4456.9 | 2(Loss) |
| strtoll/strtoull | 104.465 | 0.0254279 | 1.74679ms | 1000 | 30 | 161.661 | 9129.17 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 577.451 | 0.0426662 | 3.091ms | 10000 | 30 | 1489.56 | 16515.2 | 1(Win) |
| std::from_chars | 179.967 | 0.0178999 | 9.6415ms | 10000 | 30 | 2699.22 | 52991.8 | 2(Loss) |
| strtoll/strtoull | 105.44 | 0.370194 | 16.219ms | 10000 | 30 | 3.36333e+06 | 90447.2 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 235.455 | 0.193921 | 74.2428ms | 100000 | 30 | 1.85078e+07 | 405035 | 1(Win) |
| std::from_chars | 147.92 | 0.165693 | 116.091ms | 100000 | 30 | 3.42355e+07 | 644723 | 2(Loss) |
| strtoll/strtoull | 105.522 | 0.0801521 | 163.854ms | 100000 | 30 | 1.57422e+07 | 903768 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 618.6 | 2.30039 | 0.039625ms | 100 | 30 | 377.316 | 154.167 | 1(Win) |
| std::from_chars | 225.136 | 0.831803 | 0.088833ms | 100 | 30 | 372.455 | 423.6 | 2(Loss) |
| strtoll/strtoull | 103.879 | 0.555849 | 0.189583ms | 100 | 30 | 781.237 | 918.067 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 698.475 | 0.237507 | 0.263833ms | 1000 | 30 | 315.482 | 1365.37 | 1(Win) |
| std::from_chars | 227.665 | 0.103944 | 0.777125ms | 1000 | 30 | 568.754 | 4188.93 | 2(Loss) |
| strtoll/strtoull | 106.654 | 0.0654824 | 1.63062ms | 1000 | 30 | 1028.53 | 8941.77 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 301.213 | 0.0301029 | 5.83537ms | 10000 | 30 | 2725.15 | 31661.1 | 1(Win) |
| std::from_chars | 177.933 | 0.563463 | 9.66725ms | 10000 | 30 | 2.73614e+06 | 53597.3 | 2(Loss) |
| strtoll/strtoull | 106.665 | 0.19196 | 16.2095ms | 10000 | 30 | 883690 | 89408.3 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 248.805 | 0.228791 | 69.0082ms | 100000 | 30 | 2.30718e+07 | 383301 | 1(Win) |
| std::from_chars | 144.63 | 0.94908 | 115.786ms | 100000 | 30 | 1.17492e+09 | 659388 | 2(Loss) |
| strtoll/strtoull | 106.269 | 0.119926 | 161.752ms | 100000 | 30 | 3.47487e+07 | 897418 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 536.576 | 1.90733 | 0.066167ms | 100 | 30 | 344.754 | 177.733 | 1(Win) |
| std::from_chars | 292.18 | 0.880705 | 0.0725ms | 100 | 30 | 247.903 | 326.4 | 2(Loss) |
| strtoll/strtoull | 103.104 | 0.336752 | 0.202375ms | 100 | 30 | 291.068 | 924.967 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 607.127 | 0.225531 | 0.339417ms | 1000 | 30 | 376.51 | 1570.8 | 1(Win) |
| std::from_chars | 307.766 | 0.119945 | 0.576333ms | 1000 | 30 | 414.424 | 3098.7 | 2(Loss) |
| strtoll/strtoull | 100.519 | 0.0635892 | 1.73421ms | 1000 | 30 | 1091.91 | 9487.47 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 384.054 | 0.0326926 | 5.21413ms | 10000 | 30 | 1977.13 | 24831.8 | 1(Win) |
| std::from_chars | 159.097 | 0.478105 | 10.808ms | 10000 | 30 | 2.46403e+06 | 59943 | 2(Loss) |
| strtoll/strtoull | 98.3944 | 0.527846 | 17.403ms | 10000 | 30 | 7.85229e+06 | 96923.7 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 175.428 | 0.892592 | 99.6907ms | 100000 | 30 | 7.06363e+08 | 543626 | 1(Win) |
| std::from_chars | 144.395 | 0.243801 | 118.919ms | 100000 | 30 | 7.77834e+07 | 660462 | 2(Loss) |
| strtoll/strtoull | 98.3358 | 0.150354 | 175.44ms | 100000 | 30 | 6.37864e+07 | 969814 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 715.256 | 1.42159 | 0.084584ms | 200 | 30 | 431.126 | 266.667 | 1(Win) |
| std::from_chars | 309.333 | 0.598018 | 0.12325ms | 200 | 30 | 407.903 | 616.6 | 2(Loss) |
| strtoll/strtoull | 150.739 | 0.334083 | 0.2405ms | 200 | 30 | 536.092 | 1265.33 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 709.706 | 0.386168 | 2.59475ms | 2000 | 48 | 5170.08 | 2687.52 | 1(Win) |
| std::from_chars | 321.617 | 0.084661 | 1.09417ms | 2000 | 30 | 756.259 | 5930.5 | 2(Loss) |
| strtoll/strtoull | 130.517 | 0.0907983 | 2.65704ms | 2000 | 30 | 5282.07 | 14613.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 287.155 | 0.0140369 | 12.6883ms | 20000 | 30 | 2607.91 | 66422.2 | 1(Win) |
| std::from_chars | 266.343 | 0.0176788 | 12.994ms | 20000 | 30 | 4808.46 | 71612.5 | 2(Loss) |
| strtoll/strtoull | 124.554 | 0.173724 | 27.7213ms | 20000 | 30 | 2.12319e+06 | 153135 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.81 | 0.13448 | 155.151ms | 200000 | 30 | 3.97584e+07 | 856045 | 1(Win) |
| std::from_chars | 212.664 | 0.565512 | 160.225ms | 200000 | 30 | 7.7175e+08 | 896883 | 2(Loss) |
| strtoll/strtoull | 123.563 | 0.111102 | 278.168ms | 200000 | 30 | 8.82372e+07 | 1.54363e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 700.802 | 1.41494 | 0.060291ms | 200 | 30 | 444.902 | 272.167 | 1(Win) |
| std::from_chars | 299.176 | 0.557678 | 0.12675ms | 200 | 30 | 379.223 | 637.533 | 2(Loss) |
| strtoll/strtoull | 157.841 | 0.328404 | 0.229083ms | 200 | 30 | 472.455 | 1208.4 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 746.789 | 0.341784 | 0.477208ms | 2000 | 30 | 2286.06 | 2554.07 | 1(Win) |
| std::from_chars | 323.126 | 0.0853782 | 1.08042ms | 2000 | 30 | 761.959 | 5902.8 | 2(Loss) |
| strtoll/strtoull | 163.974 | 1.814 | 2.06288ms | 2000 | 30 | 1.33569e+06 | 11632 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 759.439 | 0.0304071 | 4.6275ms | 20000 | 30 | 1749.63 | 25115.2 | 1(Win) |
| std::from_chars | 270.509 | 0.180677 | 12.7937ms | 20000 | 30 | 486880 | 70509.7 | 2(Loss) |
| strtoll/strtoull | 166.361 | 0.256569 | 20.6701ms | 20000 | 30 | 2.5959e+06 | 114651 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 381.04 | 0.358581 | 90.8296ms | 200000 | 30 | 9.66528e+07 | 500564 | 1(Win) |
| std::from_chars | 233.775 | 0.148966 | 147.45ms | 200000 | 30 | 4.43162e+07 | 815892 | 2(Loss) |
| strtoll/strtoull | 167.306 | 0.0989728 | 215.345ms | 200000 | 30 | 3.81937e+07 | 1.14004e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 715.166 | 1.60778 | 0.064167ms | 200 | 30 | 551.597 | 266.7 | 1(Win) |
| std::from_chars | 311.37 | 0.663031 | 0.122834ms | 200 | 30 | 494.875 | 612.567 | 2(Loss) |
| strtoll/strtoull | 167.679 | 0.311737 | 0.216417ms | 200 | 30 | 377.224 | 1137.5 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 618.84 | 0.165019 | 0.581625ms | 2000 | 30 | 776.051 | 3082.13 | 1(Win) |
| std::from_chars | 323.132 | 0.0914928 | 1.08062ms | 2000 | 30 | 874.976 | 5902.7 | 2(Loss) |
| strtoll/strtoull | 168.812 | 0.0504291 | 2.03829ms | 2000 | 30 | 973.954 | 11298.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 355.472 | 1.37858 | 21.2414ms | 20000 | 30 | 1.64147e+07 | 53656.8 | 1(Win) |
| std::from_chars | 270.722 | 0.328087 | 12.799ms | 20000 | 30 | 1.60292e+06 | 70454.2 | 2(Loss) |
| strtoll/strtoull | 146.157 | 1.19629 | 22.8362ms | 20000 | 30 | 7.3116e+07 | 130500 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.074 | 0.114481 | 91.5097ms | 200000 | 30 | 1.00068e+07 | 504490 | 1(Win) |
| std::from_chars | 219.788 | 0.5926 | 164.792ms | 200000 | 30 | 7.9341e+08 | 867814 | 2(Loss) |
| strtoll/strtoull | 147.896 | 1.21083 | 228.923ms | 200000 | 30 | 7.31529e+09 | 1.28965e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 602.321 | 1.73846 | 0.071709ms | 200 | 30 | 909.195 | 316.667 | 1(Win) |
| std::from_chars | 411.155 | 0.567074 | 0.096583ms | 200 | 30 | 207.61 | 463.9 | 2(Loss) |
| strtoll/strtoull | 171.226 | 0.305962 | 0.235334ms | 200 | 30 | 348.478 | 1113.93 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 591.438 | 1.9894 | 1.2855ms | 2000 | 30 | 123483 | 3224.93 | 1(Win) |
| std::from_chars | 373.175 | 2.18425 | 0.914667ms | 2000 | 30 | 373905 | 5111.13 | 2(Loss) |
| strtoll/strtoull | 177.244 | 0.0615602 | 1.97492ms | 2000 | 30 | 1316.56 | 10761.2 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 570.376 | 0.900168 | 14.8462ms | 20000 | 30 | 2.71836e+06 | 33440.2 | 1(Win) |
| std::from_chars | 380.329 | 0.419733 | 9.035ms | 20000 | 30 | 1.32925e+06 | 50149.9 | 2(Loss) |
| strtoll/strtoull | 181.163 | 0.353606 | 18.8753ms | 20000 | 30 | 4.15797e+06 | 105283 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 492.219 | 0.811704 | 68.5512ms | 200000 | 30 | 2.96798e+08 | 387500 | 1(Win) |
| std::from_chars | 335.693 | 0.174485 | 102.686ms | 200000 | 30 | 2.94858e+07 | 568182 | 2(Loss) |
| strtoll/strtoull | 182.061 | 0.168955 | 188.834ms | 200000 | 30 | 9.39921e+07 | 1.04764e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 832.479 | 0.439793 | 0.116584ms | 400 | 30 | 121.84 | 458.233 | 1(Win) |
| std::from_chars | 350.809 | 0.281662 | 0.207333ms | 400 | 30 | 281.421 | 1087.4 | 2(Loss) |
| strtoll/strtoull | 190.073 | 0.175627 | 0.371167ms | 400 | 30 | 372.723 | 2006.97 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 878.942 | 0.104005 | 0.826ms | 4000 | 30 | 611.266 | 4340.1 | 1(Win) |
| std::from_chars | 303.556 | 0.0494086 | 2.29417ms | 4000 | 30 | 1156.56 | 12566.7 | 2(Loss) |
| strtoll/strtoull | 167.936 | 1.54467 | 4.15892ms | 4000 | 30 | 3.69341e+06 | 22715.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 777.43 | 0.0305652 | 9.72546ms | 40000 | 30 | 6748 | 49068.1 | 1(Win) |
| std::from_chars | 285.831 | 0.218359 | 24.1881ms | 40000 | 30 | 2.54779e+06 | 133460 | 2(Loss) |
| strtoll/strtoull | 182.451 | 0.291734 | 37.6478ms | 40000 | 30 | 1.11615e+07 | 209081 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 351.346 | 0.0883039 | 196.662ms | 400000 | 30 | 2.7576e+07 | 1.08574e+06 | 1(Win) |
| std::from_chars | 273.636 | 0.169968 | 250.688ms | 400000 | 30 | 1.68434e+08 | 1.39408e+06 | 2(Loss) |
| strtoll/strtoull | 182.498 | 0.140823 | 376.67ms | 400000 | 30 | 2.5994e+08 | 2.09026e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 813.022 | 1.03917 | 0.093ms | 400 | 30 | 713.2 | 469.2 | 1(Win) |
| std::from_chars | 352.104 | 0.259851 | 0.207042ms | 400 | 30 | 237.766 | 1083.4 | 2(Loss) |
| strtoll/strtoull | 224.398 | 0.181945 | 0.317625ms | 400 | 30 | 286.999 | 1699.97 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 908.261 | 0.137673 | 0.774542ms | 4000 | 30 | 1003.03 | 4200 | 1(Win) |
| std::from_chars | 313.606 | 0.0676263 | 2.21817ms | 4000 | 30 | 2030.03 | 12164 | 2(Loss) |
| strtoll/strtoull | 224.045 | 0.0249715 | 3.08887ms | 4000 | 30 | 542.328 | 17026.5 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 548.384 | 1.71795 | 12.7962ms | 40000 | 30 | 4.28442e+07 | 69562.5 | 1(Win) |
| std::from_chars | 284.972 | 0.297539 | 24.1594ms | 40000 | 30 | 4.75912e+06 | 133862 | 2(Loss) |
| strtoll/strtoull | 219.67 | 0.968701 | 31.0269ms | 40000 | 30 | 8.48942e+07 | 173656 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 430.233 | 1.00636 | 160.343ms | 400000 | 30 | 2.38859e+09 | 886658 | 1(Win) |
| std::from_chars | 272.499 | 0.358797 | 252.562ms | 400000 | 30 | 7.56847e+08 | 1.39989e+06 | 2(Loss) |
| strtoll/strtoull | 225.252 | 0.121874 | 305.717ms | 400000 | 30 | 1.27799e+08 | 1.69353e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 805.355 | 0.785664 | 0.096458ms | 400 | 30 | 415.471 | 473.667 | 1(Win) |
| std::from_chars | 342.463 | 0.354015 | 0.2125ms | 400 | 30 | 466.507 | 1113.9 | 2(Loss) |
| strtoll/strtoull | 228.124 | 0.197079 | 0.3125ms | 400 | 30 | 325.821 | 1672.2 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 859.676 | 0.125085 | 0.843792ms | 4000 | 30 | 924.24 | 4437.37 | 1(Win) |
| std::from_chars | 296.128 | 0.399506 | 2.39167ms | 4000 | 30 | 79456.6 | 12881.9 | 2(Loss) |
| strtoll/strtoull | 225.187 | 0.032635 | 3.06946ms | 4000 | 30 | 916.902 | 16940.2 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 731.857 | 0.824607 | 9.58267ms | 40000 | 30 | 5.54221e+06 | 52123.6 | 1(Win) |
| std::from_chars | 282.309 | 0.428549 | 24.2779ms | 40000 | 30 | 1.00599e+07 | 135125 | 2(Loss) |
| strtoll/strtoull | 226.644 | 0.167847 | 30.3594ms | 40000 | 30 | 2.39432e+06 | 168313 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 477.427 | 0.11188 | 144.064ms | 400000 | 30 | 2.39736e+07 | 799012 | 1(Win) |
| std::from_chars | 274.061 | 0.453896 | 251.338ms | 400000 | 30 | 1.19746e+09 | 1.39192e+06 | 2(Loss) |
| strtoll/strtoull | 224.152 | 0.19796 | 327.826ms | 400000 | 30 | 3.40494e+08 | 1.70183e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 798.499 | 0.809701 | 0.098208ms | 400 | 30 | 448.892 | 477.733 | 1(Win) |
| std::from_chars | 406.858 | 0.413378 | 0.204667ms | 400 | 30 | 450.662 | 937.6 | 2(Loss) |
| strtoll/strtoull | 236.365 | 0.245833 | 0.3045ms | 400 | 30 | 472.231 | 1613.9 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 835.86 | 0.104702 | 0.836875ms | 4000 | 30 | 684.993 | 4563.8 | 1(Win) |
| std::from_chars | 398.924 | 0.0404017 | 2.44458ms | 4000 | 30 | 447.775 | 9562.47 | 2(Loss) |
| strtoll/strtoull | 245.516 | 0.0393815 | 2.84071ms | 4000 | 30 | 1123.22 | 15537.5 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 746.112 | 0.0178905 | 9.29125ms | 40000 | 30 | 2510.02 | 51127.7 | 1(Win) |
| std::from_chars | 383.172 | 0.399168 | 17.839ms | 40000 | 30 | 4.73766e+06 | 99555.6 | 2(Loss) |
| strtoll/strtoull | 243.554 | 0.354774 | 28.268ms | 40000 | 30 | 9.26308e+06 | 156626 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 607.21 | 0.154147 | 113.513ms | 400000 | 30 | 2.8134e+07 | 628233 | 1(Win) |
| std::from_chars | 380.728 | 0.119895 | 180.484ms | 400000 | 30 | 4.32926e+07 | 1.00195e+06 | 2(Loss) |
| strtoll/strtoull | 222.645 | 0.381621 | 309.795ms | 400000 | 30 | 1.28256e+09 | 1.71335e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 794.067 | 0.358965 | 0.186ms | 800 | 30 | 356.855 | 960.8 | 1(Win) |
| std::from_chars | 383.882 | 0.249008 | 0.370042ms | 800 | 30 | 734.737 | 1987.43 | 2(Loss) |
| strtoll/strtoull | 276.735 | 0.127442 | 0.530542ms | 800 | 30 | 370.34 | 2756.93 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 822.074 | 0.0678932 | 3.95579ms | 8000 | 30 | 1191.06 | 9280.67 | 1(Win) |
| std::from_chars | 396.186 | 0.0389631 | 3.51429ms | 8000 | 30 | 1688.92 | 19257.1 | 2(Loss) |
| strtoll/strtoull | 275.692 | 0.0146221 | 5.01892ms | 8000 | 30 | 491.214 | 27673.6 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 746.322 | 1.26154 | 18.8949ms | 80000 | 30 | 4.98944e+07 | 102227 | 1(Win) |
| std::from_chars | 391.24 | 0.327464 | 35.4367ms | 80000 | 30 | 1.22332e+07 | 195005 | 2(Loss) |
| strtoll/strtoull | 275.583 | 0.203243 | 50.1525ms | 80000 | 30 | 9.49795e+06 | 276846 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 320.829 | 0.975499 | 2285.49ms | 800000 | 48 | 2.58302e+10 | 2.37802e+06 | 1(Win) |
| strtoll/strtoull | 235.537 | 2.02024 | 3228.39ms | 800000 | 48 | 2.05546e+11 | 3.23915e+06 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 791.568 | 0.576663 | 0.188125ms | 800 | 30 | 926.764 | 963.833 | 1(Win) |
| std::from_chars | 361.869 | 0.22489 | 0.490375ms | 800 | 30 | 674.437 | 2108.33 | 2(Loss) |
| strtoll/strtoull | 275.347 | 2.09314 | 0.604666ms | 800 | 30 | 100911 | 2770.83 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 726.97 | 1.51156 | 9.04ms | 8000 | 48 | 1.20793e+06 | 10494.8 | 1(Win) |
| std::from_chars | 330.537 | 2.02176 | 4.11754ms | 8000 | 30 | 6.53312e+06 | 23081.8 | 2(Loss) |
| strtoll/strtoull | 289.022 | 0.822263 | 4.88788ms | 8000 | 30 | 1.41339e+06 | 26397.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 790.815 | 1.55307 | 42.3841ms | 80000 | 30 | 6.73495e+07 | 96475.1 | 1(Win) |
| std::from_chars | 390.27 | 0.361643 | 35.1254ms | 80000 | 30 | 1.49945e+07 | 195490 | 2(Loss) |
| strtoll/strtoull | 321.524 | 0.209457 | 44.8551ms | 80000 | 30 | 7.41083e+06 | 237289 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 306.164 | 2.14545 | 1472.38ms | 800000 | 30 | 8.57493e+10 | 2.49193e+06 | 1(Win) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 671.562 | 0.945647 | 0.239667ms | 800 | 30 | 3462.48 | 1136.07 | 1(Win) |
| std::from_chars STATISTICAL TIE | 290.04 | 2.12357 | 1.69371ms | 800 | 30 | 93609.1 | 2630.47 | 2(Tie) |
| strtoll/strtoull STATISTICAL TIE | 277.999 | 1.87504 | 1.34858ms | 800 | 30 | 79439.9 | 2744.4 | 2(Tie) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 690.014 | 1.69306 | 2.05029ms | 8000 | 30 | 1.05131e+06 | 11056.9 | 1(Win) |
| strtoll/strtoull | 294.49 | 0.889517 | 4.75679ms | 8000 | 30 | 1.59319e+06 | 25907.1 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 632.976 | 1.40905 | 175.578ms | 80000 | 48 | 1.38452e+08 | 120532 | 1(Win) |
| strtoll/strtoull | 263.146 | 1.87778 | 51.881ms | 80000 | 30 | 8.89197e+08 | 289930 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 674.451 | 0.417246 | 208.173ms | 800000 | 30 | 6.68321e+08 | 1.1312e+06 | 1(Win) |
| strtoll/strtoull | 254.926 | 1.74738 | 1330.25ms | 800000 | 30 | 8.20447e+10 | 2.99279e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 712.428 | 0.379305 | 0.511958ms | 800 | 30 | 494.99 | 1070.9 | 1(Win) |
| std::from_chars | 305.351 | 1.92561 | 0.604917ms | 800 | 30 | 69444.9 | 2498.57 | 2(Loss) |
| strtoll/strtoull | 259.23 | 0.374608 | 0.570208ms | 800 | 30 | 3646.58 | 2943.1 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 691.837 | 0.206033 | 2.13871ms | 8000 | 30 | 15487 | 11027.7 | 1(Win) |
| std::from_chars | 289.954 | 1.31157 | 4.81296ms | 8000 | 30 | 3.57294e+06 | 26312.5 | 2(Loss) |
| strtoll/strtoull | 258.369 | 1.46346 | 5.87237ms | 8000 | 30 | 5.60249e+06 | 29529 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 644.578 | 1.22246 | 22.5879ms | 80000 | 30 | 6.28085e+07 | 118363 | 1(Win) |
| std::from_chars | 320.628 | 0.897877 | 40.5865ms | 80000 | 30 | 1.3694e+08 | 237951 | 2(Loss) |
| strtoll/strtoull | 264.27 | 0.669466 | 51.4945ms | 80000 | 30 | 1.12063e+08 | 288697 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 557.543 | 0.721588 | 618.931ms | 800000 | 30 | 2.92499e+09 | 1.3684e+06 | 1(Win) |
| strtoll/strtoull | 257.543 | 1.10834 | 567.88ms | 800000 | 30 | 3.23403e+10 | 2.96238e+06 | 2(Loss) |
