# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 152.142 | 0.149514 | 0.153486ms | 100 | 30 | 26.3506 | 626.833 | 1(Win) |
| std::from_chars | 64.8552 | 0.048553 | 0.690448ms | 100 | 30 | 15.292 | 1470.47 | 2(Loss) |
| strtoll/strtoull | 30.7789 | 0.0415716 | 0.610989ms | 100 | 30 | 49.7747 | 3098.47 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 161.566 | 0.0401084 | 1.19652ms | 1000 | 30 | 168.148 | 5902.7 | 1(Win) |
| std::from_chars | 50.371 | 0.0198678 | 8.21475ms | 1000 | 30 | 424.483 | 18933 | 2(Loss) |
| strtoll/strtoull | 27.3992 | 0.717008 | 6.36445ms | 1000 | 30 | 1.8685e+06 | 34806.6 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 72.2904 | 0.440126 | 27.7445ms | 10000 | 30 | 1.01138e+07 | 131923 | 1(Win) |
| std::from_chars | 43.9142 | 0.317696 | 39.329ms | 10000 | 30 | 1.42802e+07 | 217167 | 2(Loss) |
| strtoll/strtoull | 26.6108 | 0.213142 | 64.7224ms | 10000 | 30 | 1.75043e+07 | 358379 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 43.3956 | 0.0720626 | 395.821ms | 100000 | 30 | 7.52403e+07 | 2.19763e+06 | 1(Win) |
| std::from_chars | 42.8949 | 0.113992 | 400.839ms | 100000 | 30 | 1.92689e+08 | 2.22328e+06 | 2(Loss) |
| strtoll/strtoull | 26.3765 | 0.0567551 | 651.577ms | 100000 | 30 | 1.26327e+08 | 3.61562e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 148.733 | 0.0115842 | 0.174936ms | 100 | 30 | 0.165517 | 641.2 | 1(Win) |
| std::from_chars | 63.3432 | 0.0544822 | 0.310288ms | 100 | 30 | 20.1851 | 1505.57 | 2(Loss) |
| strtoll/strtoull | 29.0746 | 0.0355159 | 0.645963ms | 100 | 30 | 40.7138 | 3280.1 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 154.114 | 0.0486369 | 1.21108ms | 1000 | 30 | 271.748 | 6188.1 | 1(Win) |
| std::from_chars | 52.4591 | 1.48566 | 3.32923ms | 1000 | 30 | 2.18836e+06 | 18179.4 | 2(Loss) |
| strtoll/strtoull | 29.1158 | 0.797076 | 5.94725ms | 1000 | 30 | 2.04486e+06 | 32754.5 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 67.1358 | 1.72209 | 23.5117ms | 10000 | 30 | 1.79524e+08 | 142052 | 1(Win) |
| std::from_chars | 51.0008 | 0.663171 | 33.4145ms | 10000 | 30 | 4.61338e+07 | 186992 | 2(Loss) |
| strtoll/strtoull | 29.0347 | 0.23073 | 59.1937ms | 10000 | 30 | 1.72304e+07 | 328460 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 51.4407 | 0.0806173 | 334.074ms | 100000 | 30 | 6.70139e+07 | 1.85393e+06 | 1(Win) |
| vn::from_chars | 50.3278 | 0.0424986 | 342.196ms | 100000 | 30 | 1.94561e+07 | 1.89493e+06 | 2(Loss) |
| strtoll/strtoull | 28.9558 | 0.045564 | 593.156ms | 100000 | 30 | 6.75609e+07 | 3.29356e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 166.61 | 0.163843 | 0.15005ms | 100 | 30 | 26.3862 | 572.4 | 1(Win) |
| std::from_chars | 70.4044 | 0.0559306 | 0.284811ms | 100 | 30 | 17.2195 | 1354.57 | 2(Loss) |
| strtoll/strtoull | 33.2785 | 0.0307564 | 0.556817ms | 100 | 30 | 23.3057 | 2865.73 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 168.496 | 0.0505364 | 1.10517ms | 1000 | 30 | 245.444 | 5659.93 | 1(Win) |
| std::from_chars | 57.2055 | 1.61229 | 2.9928ms | 1000 | 30 | 2.16738e+06 | 16671 | 2(Loss) |
| strtoll/strtoull | 30.541 | 0.892175 | 5.66376ms | 1000 | 30 | 2.32838e+06 | 31226 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 59.2098 | 1.42702 | 28.4382ms | 10000 | 30 | 1.58486e+08 | 161067 | 1(Win) |
| std::from_chars | 50.5953 | 0.293722 | 34.2907ms | 10000 | 30 | 9.19546e+06 | 188491 | 2(Loss) |
| strtoll/strtoull | 30.829 | 0.221437 | 55.9372ms | 10000 | 30 | 1.40768e+07 | 309343 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 50.9868 | 0.119603 | 337.412ms | 100000 | 30 | 1.50137e+08 | 1.87043e+06 | 1(Win) |
| std::from_chars | 50.1366 | 0.0463218 | 342.951ms | 100000 | 30 | 2.32907e+07 | 1.90215e+06 | 2(Loss) |
| strtoll/strtoull | 30.7335 | 0.0792474 | 558.801ms | 100000 | 30 | 1.81413e+08 | 3.10305e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 147.483 | 0.148014 | 0.159667ms | 100 | 30 | 27.4816 | 646.633 | 1(Win) |
| std::from_chars | 66.8135 | 0.067054 | 0.296923ms | 100 | 30 | 27.4816 | 1427.37 | 2(Loss) |
| strtoll/strtoull | 27.2782 | 0.0606589 | 0.701998ms | 100 | 30 | 134.921 | 3496.1 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 153.038 | 0.0614254 | 1.22397ms | 1000 | 30 | 439.559 | 6231.6 | 1(Win) |
| std::from_chars | 62.0494 | 0.485229 | 2.85779ms | 1000 | 30 | 166855 | 15369.6 | 2(Loss) |
| strtoll/strtoull | 27.6176 | 0.722714 | 6.2797ms | 1000 | 30 | 1.86845e+06 | 34531.4 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 86.2596 | 0.506688 | 21.5568ms | 10000 | 30 | 9.41429e+06 | 110559 | 1(Win) |
| std::from_chars | 51.5762 | 0.369065 | 33.5496ms | 10000 | 30 | 1.3971e+07 | 184906 | 2(Loss) |
| strtoll/strtoull | 27.6078 | 0.213359 | 62.2623ms | 10000 | 30 | 1.6296e+07 | 345436 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 49.5521 | 0.174828 | 346.228ms | 100000 | 30 | 3.3964e+08 | 1.92459e+06 | 1(Win) |
| vn::from_chars | 48.8445 | 0.105692 | 351.818ms | 100000 | 30 | 1.27754e+08 | 1.95247e+06 | 2(Loss) |
| strtoll/strtoull | 27.2268 | 0.0417909 | 631.031ms | 100000 | 30 | 6.42821e+07 | 3.5027e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 197.865 | 0.0774523 | 0.214199ms | 200 | 30 | 16.723 | 963.967 | 1(Win) |
| std::from_chars | 104.333 | 0.0512422 | 0.369118ms | 200 | 30 | 26.3264 | 1828.13 | 2(Loss) |
| strtoll/strtoull | 55.8935 | 0.0360887 | 0.653447ms | 200 | 30 | 45.4989 | 3412.47 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 201.8 | 0.042651 | 1.80073ms | 2000 | 30 | 487.528 | 9451.7 | 1(Win) |
| std::from_chars | 105.213 | 1.43807 | 3.3177ms | 2000 | 30 | 2.03893e+06 | 18128.4 | 2(Loss) |
| strtoll/strtoull | 50.6294 | 0.693179 | 15.9671ms | 2000 | 30 | 2.04582e+06 | 37672.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 111.475 | 0.351521 | 32.0556ms | 20000 | 30 | 1.08525e+07 | 171101 | 1(Win) |
| std::from_chars | 77.5021 | 0.523456 | 44.1526ms | 20000 | 30 | 4.97869e+07 | 246103 | 2(Loss) |
| strtoll/strtoull | 48.45 | 0.205774 | 70.9905ms | 20000 | 30 | 1.96868e+07 | 393674 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 85.2458 | 0.119096 | 402.665ms | 200000 | 30 | 2.13024e+08 | 2.23747e+06 | 1(Win) |
| std::from_chars | 75.8298 | 0.111174 | 452.728ms | 200000 | 30 | 2.3459e+08 | 2.5153e+06 | 2(Loss) |
| strtoll/strtoull | 48.1349 | 0.0661107 | 713.575ms | 200000 | 30 | 2.05876e+08 | 3.96251e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 195.385 | 0.0954152 | 0.239095ms | 200 | 30 | 26.0276 | 976.2 | 1(Win) |
| std::from_chars | 106.314 | 0.0278931 | 0.361303ms | 200 | 30 | 7.51264 | 1794.07 | 2(Loss) |
| strtoll/strtoull | 54.3311 | 0.025971 | 0.700706ms | 200 | 30 | 24.9379 | 3510.6 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 197.366 | 0.0402341 | 1.83828ms | 2000 | 30 | 453.551 | 9664.03 | 1(Win) |
| std::from_chars | 98.3328 | 1.42859 | 3.57574ms | 2000 | 30 | 2.30355e+06 | 19396.9 | 2(Loss) |
| strtoll/strtoull | 52.9112 | 0.763645 | 6.55071ms | 2000 | 30 | 2.27337e+06 | 36048.1 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 111.049 | 0.472165 | 31.2701ms | 20000 | 30 | 1.97305e+07 | 171757 | 1(Win) |
| std::from_chars | 85.3792 | 0.427223 | 40.6028ms | 20000 | 30 | 2.73267e+07 | 223397 | 2(Loss) |
| strtoll/strtoull | 52.6664 | 0.211734 | 65.6175ms | 20000 | 30 | 1.76399e+07 | 362157 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 99.0194 | 0.112103 | 346.3ms | 200000 | 30 | 1.39886e+08 | 1.92624e+06 | 1(Win) |
| std::from_chars | 89.536 | 0.129421 | 383.385ms | 200000 | 30 | 2.28031e+08 | 2.13026e+06 | 2(Loss) |
| strtoll/strtoull | 52.5377 | 0.0568792 | 653.707ms | 200000 | 30 | 1.27922e+08 | 3.63044e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 194.727 | 0.0787392 | 0.215872ms | 200 | 30 | 17.8448 | 979.5 | 1(Win) |
| std::from_chars | 107.41 | 0.0461132 | 0.370129ms | 200 | 30 | 20.1161 | 1775.77 | 2(Loss) |
| strtoll/strtoull | 57.2525 | 0.0313247 | 1.49246ms | 200 | 30 | 32.6713 | 3331.47 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 204.62 | 0.0476606 | 1.76719ms | 2000 | 30 | 592.11 | 9321.4 | 1(Win) |
| std::from_chars | 95.4155 | 1.31865 | 3.57358ms | 2000 | 30 | 2.0845e+06 | 19989.9 | 2(Loss) |
| strtoll/strtoull | 56.4293 | 0.741227 | 6.13486ms | 2000 | 30 | 1.8831e+06 | 33800.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 127.835 | 0.402781 | 27.855ms | 20000 | 30 | 1.08347e+07 | 149204 | 1(Win) |
| std::from_chars | 90.094 | 0.515512 | 38.2882ms | 20000 | 30 | 3.57329e+07 | 211707 | 2(Loss) |
| strtoll/strtoull | 55.5741 | 0.214753 | 61.9022ms | 20000 | 30 | 1.62973e+07 | 343208 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 99.4616 | 0.0704179 | 344.58ms | 200000 | 30 | 5.47062e+07 | 1.91767e+06 | 1(Win) |
| std::from_chars | 91.5259 | 0.0720567 | 375.688ms | 200000 | 30 | 6.7646e+07 | 2.08394e+06 | 2(Loss) |
| strtoll/strtoull | 55.4332 | 0.0642851 | 619.808ms | 200000 | 30 | 1.46778e+08 | 3.4408e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 191.533 | 0.104611 | 0.218156ms | 200 | 30 | 32.5575 | 995.833 | 1(Win) |
| std::from_chars | 124.661 | 0.0535926 | 0.315218ms | 200 | 30 | 20.1713 | 1530.03 | 2(Loss) |
| strtoll/strtoull | 51.5101 | 0.0276422 | 0.738145ms | 200 | 30 | 31.4299 | 3702.87 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.332 | 0.0376981 | 4.19741ms | 2000 | 30 | 394.309 | 9616.97 | 1(Win) |
| std::from_chars | 107.276 | 1.44262 | 3.29143ms | 2000 | 30 | 1.97369e+06 | 17779.8 | 2(Loss) |
| strtoll/strtoull | 49.2031 | 0.647173 | 7.04486ms | 2000 | 30 | 1.88816e+06 | 38764.8 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 126.194 | 0.492382 | 27.1951ms | 20000 | 30 | 1.66153e+07 | 151144 | 1(Win) |
| std::from_chars | 96.7556 | 0.353463 | 36.2433ms | 20000 | 30 | 1.45652e+07 | 197131 | 2(Loss) |
| strtoll/strtoull | 49.415 | 0.627162 | 69.2777ms | 20000 | 30 | 1.75802e+08 | 385985 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 104.474 | 0.112771 | 329.262ms | 200000 | 30 | 1.27163e+08 | 1.82567e+06 | 1(Win) |
| std::from_chars | 89.0756 | 0.0600765 | 386.207ms | 200000 | 30 | 4.96447e+07 | 2.14127e+06 | 2(Loss) |
| strtoll/strtoull | 49.5793 | 0.0607621 | 692.708ms | 200000 | 30 | 1.63925e+08 | 3.84706e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 266.154 | 0.0467059 | 0.296433ms | 400 | 30 | 13.4437 | 1433.27 | 1(Win) |
| std::from_chars | 174.578 | 0.0342294 | 0.430262ms | 400 | 30 | 16.7828 | 2185.1 | 2(Loss) |
| strtoll/strtoull | 91.9492 | 0.0411393 | 0.79426ms | 400 | 30 | 87.3897 | 4148.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 264.49 | 0.552431 | 2.675ms | 4000 | 30 | 190450 | 14422.9 | 1(Win) |
| std::from_chars | 131.523 | 0.929387 | 5.28228ms | 4000 | 30 | 2.17988e+06 | 29004.1 | 2(Loss) |
| strtoll/strtoull | 83.5973 | 1.13059 | 8.20425ms | 4000 | 30 | 7.98485e+06 | 45631.8 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.138 | 0.320912 | 40.5348ms | 40000 | 30 | 1.51725e+07 | 221607 | 1(Win) |
| std::from_chars | 123.867 | 1.97272 | 55.2782ms | 40000 | 30 | 1.10729e+09 | 307967 | 2(Loss) |
| strtoll/strtoull | 84.0817 | 0.190785 | 81.7437ms | 40000 | 30 | 2.24765e+07 | 453690 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.538 | 0.0511981 | 442.706ms | 400000 | 30 | 4.73015e+07 | 2.45258e+06 | 1(Win) |
| std::from_chars | 132.945 | 0.0324299 | 517.593ms | 400000 | 30 | 2.59768e+07 | 2.86937e+06 | 2(Loss) |
| strtoll/strtoull | 83.1603 | 0.127684 | 825.145ms | 400000 | 30 | 1.02916e+09 | 4.58716e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 278.337 | 0.0537126 | 0.282186ms | 400 | 30 | 16.2575 | 1370.53 | 1(Win) |
| std::from_chars | 171.106 | 0.04135 | 0.437164ms | 400 | 30 | 25.4954 | 2229.43 | 2(Loss) |
| strtoll/strtoull | 91.7274 | 0.0180802 | 0.818715ms | 400 | 30 | 16.9609 | 4158.73 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 274.329 | 2.40828 | 2.55599ms | 4000 | 30 | 3.36443e+06 | 13905.5 | 1(Win) |
| std::from_chars | 142.583 | 1.01605 | 11.1296ms | 4000 | 30 | 2.21685e+06 | 26754.2 | 2(Loss) |
| strtoll/strtoull | 91.9285 | 0.620322 | 7.54577ms | 4000 | 30 | 1.98781e+06 | 41496.4 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 194.02 | 0.575065 | 35.4347ms | 40000 | 30 | 3.83516e+07 | 196614 | 1(Win) |
| std::from_chars | 145.928 | 0.583736 | 47.4949ms | 40000 | 30 | 6.98553e+07 | 261410 | 2(Loss) |
| strtoll/strtoull | 90.812 | 0.502522 | 75.7483ms | 40000 | 30 | 1.3368e+08 | 420065 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 178.59 | 0.0850019 | 385.07ms | 400000 | 30 | 9.88969e+07 | 2.136e+06 | 1(Win) |
| std::from_chars | 151.582 | 0.0545149 | 453.668ms | 400000 | 30 | 5.64646e+07 | 2.51659e+06 | 2(Loss) |
| strtoll/strtoull | 89.7471 | 0.729826 | 761.815ms | 400000 | 30 | 2.88695e+10 | 4.2505e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 250.04 | 0.0551082 | 0.315197ms | 400 | 30 | 21.2057 | 1525.63 | 1(Win) |
| std::from_chars | 155.857 | 0.0343616 | 0.48829ms | 400 | 30 | 21.2195 | 2447.57 | 2(Loss) |
| strtoll/strtoull | 95.5945 | 0.0365179 | 0.774432ms | 400 | 30 | 63.7069 | 3990.5 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 255.144 | 1.85944 | 2.72522ms | 4000 | 30 | 2.31864e+06 | 14951.2 | 1(Win) |
| std::from_chars | 143.668 | 1.54476 | 4.79601ms | 4000 | 30 | 5.04715e+06 | 26552.2 | 2(Loss) |
| strtoll/strtoull | 96.3238 | 0.636888 | 7.1954ms | 4000 | 30 | 1.90854e+06 | 39602.8 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.252 | 0.34291 | 36.0189ms | 40000 | 30 | 1.38887e+07 | 198422 | 1(Win) |
| std::from_chars | 145.468 | 0.301227 | 47.446ms | 40000 | 30 | 1.87196e+07 | 262236 | 2(Loss) |
| strtoll/strtoull | 95.5803 | 0.28493 | 71.9051ms | 40000 | 30 | 3.87954e+07 | 399109 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 180.444 | 0.118261 | 380.896ms | 400000 | 30 | 1.87515e+08 | 2.11406e+06 | 1(Win) |
| std::from_chars | 150.641 | 0.108507 | 455.968ms | 400000 | 30 | 2.26499e+08 | 2.5323e+06 | 2(Loss) |
| strtoll/strtoull | 94.6137 | 0.089107 | 726.091ms | 400000 | 30 | 3.87219e+08 | 4.03187e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 258.887 | 0.0458732 | 0.699984ms | 400 | 30 | 13.7069 | 1473.5 | 1(Win) |
| std::from_chars | 181.135 | 0.0531002 | 0.98803ms | 400 | 30 | 37.5172 | 2106 | 2(Loss) |
| strtoll/strtoull | 86.1566 | 0.0325314 | 0.833974ms | 400 | 30 | 62.2402 | 4427.63 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 259.473 | 0.184367 | 2.70789ms | 4000 | 30 | 22040.8 | 14701.7 | 1(Win) |
| std::from_chars | 158.326 | 1.78958 | 4.38066ms | 4000 | 30 | 5.57749e+06 | 24093.9 | 2(Loss) |
| strtoll/strtoull | 83.5272 | 0.821183 | 8.26304ms | 4000 | 30 | 4.21955e+06 | 45670.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 202.448 | 0.372093 | 34.2245ms | 40000 | 30 | 1.47475e+07 | 188428 | 1(Win) |
| std::from_chars | 155.895 | 0.498307 | 43.9878ms | 40000 | 30 | 4.46037e+07 | 244696 | 2(Loss) |
| strtoll/strtoull | 82.7924 | 0.208104 | 83.1837ms | 40000 | 30 | 2.75816e+07 | 460755 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 187.422 | 0.0328485 | 366.762ms | 400000 | 30 | 1.34101e+07 | 2.03536e+06 | 1(Win) |
| std::from_chars | 150.97 | 0.294155 | 453.546ms | 400000 | 30 | 1.65734e+09 | 2.52679e+06 | 2(Loss) |
| strtoll/strtoull | 82.7423 | 0.0353695 | 830.547ms | 400000 | 30 | 7.97709e+07 | 4.61034e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 400.816 | 0.0801996 | 0.411517ms | 800 | 30 | 69.9126 | 1903.47 | 1(Win) |
| std::from_chars | 242.91 | 0.0298394 | 0.605468ms | 800 | 30 | 26.3506 | 3140.83 | 2(Loss) |
| strtoll/strtoull | 136.564 | 0.023222 | 1.07446ms | 800 | 30 | 50.4931 | 5586.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 399.193 | 1.35837 | 3.49783ms | 8000 | 30 | 2.02194e+06 | 19112 | 1(Win) |
| std::from_chars | 235.196 | 0.85676 | 5.93687ms | 8000 | 30 | 2.31719e+06 | 32438.5 | 2(Loss) |
| strtoll/strtoull | 130.026 | 1.38755 | 10.559ms | 8000 | 30 | 1.98856e+07 | 58676.1 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.922 | 0.43338 | 47.8926ms | 80000 | 30 | 4.01184e+07 | 266835 | 1(Win) |
| std::from_chars | 217.67 | 0.288569 | 63.2837ms | 80000 | 30 | 3.06904e+07 | 350502 | 2(Loss) |
| strtoll/strtoull | 130.369 | 0.164515 | 105.729ms | 80000 | 30 | 2.78074e+07 | 585215 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 273.275 | 0.0503772 | 502.592ms | 800000 | 30 | 5.93429e+07 | 2.79184e+06 | 1(Win) |
| std::from_chars | 209.628 | 0.111156 | 654.592ms | 800000 | 30 | 4.90988e+08 | 3.6395e+06 | 2(Loss) |
| strtoll/strtoull | 129.143 | 0.564159 | 1058.11ms | 800000 | 30 | 3.33245e+10 | 5.90771e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 424.705 | 0.0486758 | 0.361153ms | 800 | 30 | 22.9379 | 1796.4 | 1(Win) |
| std::from_chars | 249.514 | 0.02485 | 0.631927ms | 800 | 30 | 17.3207 | 3057.7 | 2(Loss) |
| strtoll/strtoull | 146.23 | 0.0223708 | 1.01096ms | 800 | 30 | 40.869 | 5217.4 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 421.153 | 0.0363271 | 3.36601ms | 8000 | 30 | 1299.22 | 18115.5 | 1(Win) |
| std::from_chars | 232.468 | 0.860212 | 5.96754ms | 8000 | 30 | 2.39104e+06 | 32819.2 | 2(Loss) |
| strtoll/strtoull | 143.12 | 0.671805 | 9.67029ms | 8000 | 30 | 3.84756e+06 | 53307.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 335.777 | 0.913872 | 40.5645ms | 80000 | 30 | 1.29351e+08 | 227216 | 1(Win) |
| std::from_chars | 231.296 | 0.288505 | 59.6263ms | 80000 | 30 | 2.71687e+07 | 329854 | 2(Loss) |
| strtoll/strtoull | 142.466 | 0.20245 | 96.5965ms | 80000 | 30 | 3.52625e+07 | 535522 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.393 | 0.0573522 | 418.895ms | 800000 | 30 | 5.32616e+07 | 2.32325e+06 | 1(Win) |
| std::from_chars | 231.25 | 0.141392 | 591.366ms | 800000 | 30 | 6.52817e+08 | 3.2992e+06 | 2(Loss) |
| strtoll/strtoull | 141.58 | 0.0494478 | 970.794ms | 800000 | 30 | 2.13006e+08 | 5.38875e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 381.641 | 0.0463424 | 0.421546ms | 800 | 30 | 25.7483 | 1999.1 | 1(Win) |
| std::from_chars | 236.253 | 0.027107 | 0.620105ms | 800 | 30 | 22.9885 | 3229.33 | 2(Loss) |
| strtoll/strtoull | 147.676 | 0.0168629 | 1.00076ms | 800 | 30 | 22.769 | 5166.3 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 388.094 | 0.137916 | 3.61145ms | 8000 | 30 | 22052.3 | 19658.6 | 1(Win) |
| std::from_chars | 235.874 | 0.916014 | 5.93794ms | 8000 | 30 | 2.63358e+06 | 32345.2 | 2(Loss) |
| strtoll/strtoull | 146.51 | 1.58432 | 9.33369ms | 8000 | 30 | 2.04197e+07 | 52074.1 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 287.084 | 0.310516 | 48.5831ms | 80000 | 30 | 2.04292e+07 | 265755 | 1(Win) |
| std::from_chars | 232.236 | 0.277919 | 59.4583ms | 80000 | 30 | 2.50081e+07 | 328519 | 2(Loss) |
| strtoll/strtoull | 147.238 | 0.19437 | 93.4841ms | 80000 | 30 | 3.04312e+07 | 518168 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 282.96 | 0.0610858 | 485.044ms | 800000 | 30 | 8.13827e+07 | 2.69628e+06 | 1(Win) |
| std::from_chars | 231.976 | 0.134001 | 593.905ms | 800000 | 30 | 5.82683e+08 | 3.28887e+06 | 2(Loss) |
| strtoll/strtoull | 146.632 | 0.0506812 | 938.294ms | 800000 | 30 | 2.08611e+08 | 5.20308e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.486 | 0.0365931 | 0.400867ms | 800 | 30 | 16.323 | 2015.77 | 1(Win) |
| std::from_chars | 245.784 | 0.0228764 | 0.597204ms | 800 | 30 | 15.1276 | 3104.1 | 2(Loss) |
| strtoll/strtoull | 124.912 | 0.0214034 | 1.14753ms | 800 | 30 | 51.269 | 6107.8 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 380.36 | 1.24006 | 3.6687ms | 8000 | 30 | 1.85609e+06 | 20058.4 | 1(Win) |
| std::from_chars | 229.264 | 0.788533 | 6.04265ms | 8000 | 30 | 2.06571e+06 | 33277.7 | 2(Loss) |
| strtoll/strtoull | 126.996 | 0.433959 | 10.9129ms | 8000 | 30 | 2.03899e+06 | 60075.6 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.309 | 0.38599 | 44.5592ms | 80000 | 30 | 2.7729e+07 | 249075 | 1(Win) |
| std::from_chars | 224.574 | 0.290694 | 61.1634ms | 80000 | 30 | 2.92586e+07 | 339727 | 2(Loss) |
| strtoll/strtoull | 125.141 | 0.486635 | 109.428ms | 80000 | 30 | 2.64062e+08 | 609661 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 292.075 | 0.132322 | 470.201ms | 800000 | 30 | 3.58408e+08 | 2.61214e+06 | 1(Win) |
| std::from_chars | 224.835 | 0.0718888 | 611.087ms | 800000 | 30 | 1.78524e+08 | 3.39333e+06 | 2(Loss) |
| strtoll/strtoull | 125.385 | 0.0669703 | 1095.75ms | 800000 | 30 | 4.98164e+08 | 6.08476e+06 | 3(Loss) |
