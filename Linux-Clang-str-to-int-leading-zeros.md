# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 294.162 | 0.145205 | 0.097158ms | 100 | 30 | 6.64828 | 324.2 | 1(Win) |
| std::from_chars | 111.645 | 0.0578984 | 0.184474ms | 100 | 30 | 7.33793 | 854.2 | 2(Loss) |
| strtoll/strtoull | 75.298 | 0.52545 | 0.31644ms | 100 | 30 | 1328.67 | 1266.53 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.676 | 0.0533579 | 0.573601ms | 1000 | 30 | 71.9092 | 2901.57 | 1(Win) |
| std::from_chars | 125.778 | 0.0724877 | 1.43317ms | 1000 | 30 | 906.234 | 7582.2 | 2(Loss) |
| strtoll/strtoull | 52.5555 | 0.161624 | 3.41527ms | 1000 | 30 | 25804.7 | 18146 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 69.8063 | 1.81235 | 58.9589ms | 10000 | 30 | 1.83915e+08 | 136617 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 68.0947 | 1.28601 | 26.7974ms | 10000 | 30 | 9.73153e+07 | 140051 | 1(Tie) |
| strtoll/strtoull | 47.054 | 0.545392 | 198.121ms | 10000 | 48 | 5.86496e+07 | 202677 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 62.8028 | 1.83806 | 277.232ms | 100000 | 30 | 2.33712e+10 | 1.51852e+06 | 1(Win) |
| vn::from_chars | 57.6812 | 1.80132 | 735.265ms | 100000 | 30 | 2.66094e+10 | 1.65335e+06 | 2(Loss) |
| strtoll/strtoull | 42.0058 | 2.16157 | 403.372ms | 100000 | 30 | 7.22508e+10 | 2.27034e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.959 | 0.129191 | 0.096879ms | 100 | 30 | 5.56897 | 333.5 | 1(Win) |
| std::from_chars | 65.9131 | 0.0266619 | 0.243637ms | 100 | 30 | 4.46437 | 1446.87 | 2(Loss) |
| strtoll/strtoull | 62.0491 | 0.486383 | 0.433ms | 100 | 30 | 1676.52 | 1536.97 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 307.61 | 1.22466 | 0.632753ms | 1000 | 30 | 43246.3 | 3100.27 | 1(Win) |
| std::from_chars | 117.483 | 0.187749 | 4.55269ms | 1000 | 30 | 6968.26 | 8117.53 | 2(Loss) |
| strtoll/strtoull | 54.152 | 0.228823 | 3.76478ms | 1000 | 30 | 48718.4 | 17611.1 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 95.0397 | 1.54001 | 21.3311ms | 10000 | 30 | 7.16404e+07 | 100345 | 1(Win) |
| std::from_chars | 86.0406 | 1.17452 | 21.9879ms | 10000 | 30 | 5.08439e+07 | 110840 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 76.2974 | 1.32398 | 1212.51ms | 100000 | 48 | 1.31457e+10 | 1.24994e+06 | 1(Win) |
| vn::from_chars | 69.3735 | 2.14005 | 301.109ms | 100000 | 30 | 2.59646e+10 | 1.3747e+06 | 2(Loss) |
| strtoll/strtoull | 46.1284 | 1.87092 | 1918.81ms | 100000 | 48 | 7.18147e+10 | 2.06743e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.374 | 0.111363 | 0.087194ms | 100 | 30 | 3.51264 | 307.267 | 1(Win) |
| std::from_chars | 117.025 | 0.0815095 | 0.178633ms | 100 | 30 | 13.2368 | 814.933 | 2(Loss) |
| strtoll/strtoull | 34.8298 | 0.0431189 | 0.564354ms | 100 | 30 | 41.8172 | 2738.1 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 343.782 | 0.158049 | 0.563785ms | 1000 | 30 | 576.685 | 2774.07 | 1(Win) |
| std::from_chars | 112.642 | 0.123244 | 3.66002ms | 1000 | 30 | 3266.25 | 8466.4 | 2(Loss) |
| strtoll/strtoull | 56.8793 | 0.120483 | 3.21824ms | 1000 | 30 | 12242.3 | 16766.6 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 93.9034 | 0.969809 | 21.6458ms | 10000 | 30 | 2.91026e+07 | 101559 | 1(Win) |
| std::from_chars | 84.1242 | 0.594333 | 109.145ms | 10000 | 48 | 2.17901e+07 | 113365 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 74.4602 | 2.48401 | 231.756ms | 100000 | 30 | 3.03655e+10 | 1.28078e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 70.3924 | 2.14249 | 244.569ms | 100000 | 30 | 2.52758e+10 | 1.3548e+06 | 1(Tie) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 159.14 | 0.132904 | 0.164602ms | 100 | 30 | 19.0299 | 599.267 | 1(Win) |
| std::from_chars | 136.35 | 0.0827397 | 0.151567ms | 100 | 30 | 10.0471 | 699.433 | 2(Loss) |
| strtoll/strtoull | 59.6568 | 0.766198 | 0.325987ms | 100 | 30 | 4500.73 | 1598.6 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.569 | 0.0446282 | 0.642567ms | 1000 | 30 | 57.8207 | 3110.8 | 1(Win) |
| std::from_chars | 141.091 | 0.0304037 | 1.27848ms | 1000 | 30 | 126.7 | 6759.3 | 2(Loss) |
| strtoll/strtoull | 50.4063 | 1.72796 | 3.41112ms | 1000 | 30 | 3.20639e+06 | 18919.7 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 91.5709 | 0.578926 | 23.9524ms | 10000 | 30 | 1.09057e+07 | 104146 | 1(Win) |
| std::from_chars | 87.8548 | 0.79946 | 80.4607ms | 10000 | 30 | 2.25935e+07 | 108551 | 2(Loss) |
| strtoll/strtoull | 49.7047 | 1.08522 | 35.4587ms | 10000 | 30 | 1.30067e+08 | 191868 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 81.3029 | 2.28035 | 1096.75ms | 100000 | 48 | 3.43424e+10 | 1.17299e+06 | 1(Win) |
| vn::from_chars | 64.6454 | 2.36026 | 316.255ms | 100000 | 30 | 3.63721e+10 | 1.47524e+06 | 2(Loss) |
| strtoll/strtoull | 48.0643 | 2.35564 | 360.494ms | 100000 | 30 | 6.55383e+10 | 1.98416e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 376.203 | 0.116208 | 0.121712ms | 200 | 30 | 10.4138 | 507 | 1(Win) |
| std::from_chars | 209.261 | 0.0520039 | 0.192644ms | 200 | 30 | 6.74023 | 911.467 | 2(Loss) |
| strtoll/strtoull | 131.475 | 0.26945 | 0.306421ms | 200 | 30 | 458.409 | 1450.73 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.374 | 0.182088 | 0.943883ms | 2000 | 30 | 2462.07 | 4975.17 | 1(Win) |
| std::from_chars | 189.722 | 0.0720517 | 1.90711ms | 2000 | 30 | 1574.11 | 10053.4 | 2(Loss) |
| strtoll/strtoull | 91.5337 | 0.393391 | 4.1428ms | 2000 | 30 | 201590 | 20837.7 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 115.281 | 0.687797 | 30.589ms | 20000 | 30 | 3.88499e+07 | 165453 | 1(Win) |
| strtoll/strtoull | 85.1923 | 0.697881 | 265.577ms | 20000 | 48 | 1.17183e+08 | 223887 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 114.296 | 1.99039 | 297.281ms | 200000 | 30 | 3.30974e+10 | 1.66878e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 112.183 | 2.39426 | 306.57ms | 200000 | 30 | 4.97128e+10 | 1.70021e+06 | 1(Tie) |
| strtoll/strtoull | 79.737 | 2.29176 | 433.072ms | 200000 | 30 | 9.01573e+10 | 2.39205e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 369.021 | 0.114266 | 0.123145ms | 200 | 30 | 10.4644 | 516.867 | 1(Win) |
| std::from_chars | 201.559 | 0.0655058 | 0.197968ms | 200 | 30 | 11.5276 | 946.3 | 2(Loss) |
| strtoll/strtoull | 117.178 | 0.391497 | 0.332914ms | 200 | 30 | 1218.27 | 1627.73 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 367.826 | 0.0686081 | 2.22351ms | 2000 | 30 | 379.706 | 5185.47 | 1(Win) |
| std::from_chars | 107.299 | 0.0693122 | 5.29785ms | 2000 | 30 | 4554.13 | 17775.9 | 2(Loss) |
| strtoll/strtoull | 101.251 | 0.297983 | 3.9275ms | 2000 | 30 | 94529.2 | 18837.8 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.047 | 0.662164 | 20.3974ms | 20000 | 30 | 1.06426e+07 | 89949.3 | 1(Win) |
| std::from_chars | 137.068 | 1.15991 | 25.6569ms | 20000 | 30 | 7.81549e+07 | 139154 | 2(Loss) |
| strtoll/strtoull | 91.9166 | 1.30115 | 38.6559ms | 20000 | 30 | 2.18699e+08 | 207509 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 135.933 | 2.30556 | 577.61ms | 200000 | 30 | 3.13969e+10 | 1.40315e+06 | 1(Win) |
| strtoll/strtoull | 86.9633 | 2.35855 | 2004.82ms | 200000 | 48 | 1.28445e+11 | 2.19328e+06 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 358.524 | 0.246652 | 0.123664ms | 200 | 30 | 51.6552 | 532 | 1(Win) |
| std::from_chars | 199.96 | 0.0600524 | 0.199702ms | 200 | 30 | 9.84368 | 953.867 | 2(Loss) |
| strtoll/strtoull | 112.519 | 0.431532 | 0.330476ms | 200 | 30 | 1605.29 | 1695.13 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 385.85 | 0.0554028 | 0.930674ms | 2000 | 30 | 225.013 | 4943.23 | 1(Win) |
| std::from_chars | 185.105 | 0.112042 | 2.1925ms | 2000 | 30 | 3998.63 | 10304.2 | 2(Loss) |
| strtoll/strtoull | 106.594 | 0.143213 | 3.40993ms | 2000 | 30 | 19700.9 | 17893.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 189.899 | 0.784288 | 20.5638ms | 20000 | 30 | 1.8616e+07 | 100440 | 1(Win) |
| std::from_chars | 145.748 | 0.578934 | 24.6214ms | 20000 | 30 | 1.72201e+07 | 130866 | 2(Loss) |
| strtoll/strtoull | 97.8191 | 1.86451 | 86.5111ms | 20000 | 30 | 3.96519e+08 | 194987 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 139.208 | 2.18972 | 628.044ms | 200000 | 30 | 2.70042e+10 | 1.37015e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 137.61 | 2.14868 | 623.306ms | 200000 | 30 | 2.66089e+10 | 1.38606e+06 | 1(Tie) |
| strtoll/strtoull | 92.9737 | 1.89923 | 933.904ms | 200000 | 30 | 4.55422e+10 | 2.05149e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 248.407 | 0.0569174 | 0.168672ms | 200 | 30 | 5.72989 | 767.833 | 1(Win) |
| vn::from_chars | 216.073 | 0.17541 | 0.207554ms | 200 | 30 | 71.9264 | 882.733 | 2(Loss) |
| strtoll/strtoull | 119.997 | 0.612024 | 0.336025ms | 200 | 30 | 2839.09 | 1589.5 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 370.599 | 0.0450295 | 1.00611ms | 2000 | 30 | 161.126 | 5146.67 | 1(Win) |
| std::from_chars | 223.981 | 1.82333 | 1.55441ms | 2000 | 30 | 723248 | 8515.67 | 2(Loss) |
| strtoll/strtoull | 96.2768 | 1.44552 | 9.83124ms | 2000 | 30 | 2.46029e+06 | 19811.1 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.941 | 0.759222 | 18.5617ms | 20000 | 30 | 1.28874e+07 | 86328.3 | 1(Win) |
| std::from_chars | 143.666 | 0.383312 | 59.4547ms | 20000 | 30 | 7.76926e+06 | 132763 | 2(Loss) |
| strtoll/strtoull | 94.3936 | 0.470187 | 39.6289ms | 20000 | 30 | 2.70794e+07 | 202063 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 152.759 | 1.56783 | 548.255ms | 200000 | 30 | 1.14964e+10 | 1.2486e+06 | 1(Win) |
| std::from_chars | 141.809 | 2.19776 | 245.863ms | 200000 | 30 | 2.6214e+10 | 1.34501e+06 | 2(Loss) |
| strtoll/strtoull | 90.0157 | 2.42918 | 387.404ms | 200000 | 30 | 7.94813e+10 | 2.11891e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 501.78 | 0.0857082 | 0.163473ms | 400 | 30 | 12.7368 | 760.233 | 1(Win) |
| std::from_chars | 292.778 | 0.0581762 | 0.267009ms | 400 | 30 | 17.2368 | 1302.93 | 2(Loss) |
| strtoll/strtoull | 191.668 | 0.136274 | 0.406524ms | 400 | 30 | 220.685 | 1990.27 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 529.976 | 0.0840729 | 1.37474ms | 4000 | 30 | 1098.6 | 7197.87 | 1(Win) |
| std::from_chars | 271.967 | 2.48407 | 2.5634ms | 4000 | 30 | 3.64199e+06 | 14026.3 | 2(Loss) |
| strtoll/strtoull | 149.507 | 0.136572 | 4.46201ms | 4000 | 30 | 36428.5 | 25515.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.897 | 1.88999 | 27.8152ms | 40000 | 30 | 2.43821e+08 | 150840 | 1(Win) |
| std::from_chars | 193.028 | 0.325663 | 88.6078ms | 40000 | 30 | 1.24262e+07 | 197624 | 2(Loss) |
| strtoll/strtoull | 152.996 | 0.7063 | 240.228ms | 40000 | 48 | 1.4886e+08 | 249333 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 217.723 | 2.00705 | 314.807ms | 400000 | 30 | 3.70978e+10 | 1.75209e+06 | 1(Win) |
| std::from_chars | 194.211 | 2.30152 | 351.32ms | 400000 | 30 | 6.13092e+10 | 1.96421e+06 | 2(Loss) |
| strtoll/strtoull | 140.59 | 2.12328 | 484.333ms | 400000 | 30 | 9.95739e+10 | 2.71335e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 532.358 | 0.0710278 | 0.184832ms | 400 | 30 | 7.77126 | 716.567 | 1(Win) |
| std::from_chars | 308.018 | 0.0628715 | 0.290369ms | 400 | 30 | 18.1885 | 1238.47 | 2(Loss) |
| strtoll/strtoull | 182.309 | 0.475482 | 0.432099ms | 400 | 30 | 2969.56 | 2092.43 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 549.993 | 0.0375864 | 1.27246ms | 4000 | 30 | 203.886 | 6935.9 | 1(Win) |
| std::from_chars | 279.84 | 0.915897 | 13.8703ms | 4000 | 48 | 748227 | 13631.7 | 2(Loss) |
| strtoll/strtoull | 167.135 | 1.94099 | 4.15517ms | 4000 | 30 | 5.88778e+06 | 22824 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 296.927 | 0.546605 | 24.0805ms | 40000 | 30 | 1.47941e+07 | 128472 | 1(Win) |
| std::from_chars | 216.358 | 1.86984 | 161.968ms | 40000 | 48 | 5.21702e+08 | 176314 | 2(Loss) |
| strtoll/strtoull | 169.831 | 0.896987 | 104.278ms | 40000 | 30 | 1.21781e+08 | 224618 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 258.306 | 2.04662 | 314.675ms | 400000 | 30 | 2.7406e+10 | 1.47681e+06 | 1(Win) |
| std::from_chars | 228.168 | 2.3082 | 303.901ms | 400000 | 30 | 4.46764e+10 | 1.67188e+06 | 2(Loss) |
| strtoll/strtoull | 158.316 | 2.32385 | 439.42ms | 400000 | 30 | 9.4061e+10 | 2.40955e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.616 | 0.103199 | 0.169313ms | 400 | 30 | 18.5517 | 762 | 1(Win) |
| std::from_chars **STATISTICAL TIE** | 182.769 | 0.0321676 | 0.486022ms | 400 | 30 | 13.523 | 2087.17 | 2(Tie) |
| strtoll/strtoull **STATISTICAL TIE** | 182.585 | 0.285452 | 0.42096ms | 400 | 30 | 1067.03 | 2089.27 | 2(Tie) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 494.39 | 0.484508 | 1.51471ms | 4000 | 30 | 41928 | 7715.97 | 1(Win) |
| std::from_chars | 277.312 | 0.0897145 | 2.64832ms | 4000 | 30 | 4569.1 | 13756 | 2(Loss) |
| strtoll/strtoull | 172.451 | 1.7875 | 10.6583ms | 4000 | 30 | 4.69035e+06 | 22120.5 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 329.736 | 1.77042 | 49.3014ms | 40000 | 30 | 1.25853e+08 | 115690 | 1(Win) |
| std::from_chars | 228.689 | 1.0445 | 32.1653ms | 40000 | 30 | 9.1069e+07 | 166807 | 2(Loss) |
| strtoll/strtoull | 177.126 | 0.745142 | 43.3281ms | 40000 | 30 | 7.72598e+07 | 215366 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 255.743 | 1.9866 | 268.88ms | 400000 | 30 | 2.63423e+10 | 1.49161e+06 | 1(Win) |
| strtoll/strtoull | 161.01 | 2.02835 | 457.351ms | 400000 | 30 | 6.92829e+10 | 2.36924e+06 | 2(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 506.174 | 0.105211 | 0.181843ms | 400 | 30 | 18.8609 | 753.633 | 1(Win) |
| std::from_chars | 317.662 | 0.0620767 | 0.257159ms | 400 | 30 | 16.6713 | 1200.87 | 2(Loss) |
| strtoll/strtoull | 166.797 | 0.151401 | 0.462432ms | 400 | 30 | 359.689 | 2287.03 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 520.669 | 0.107599 | 1.36597ms | 4000 | 30 | 1864.4 | 7326.53 | 1(Win) |
| std::from_chars | 284.831 | 0.114288 | 2.50422ms | 4000 | 30 | 7028.67 | 13392.9 | 2(Loss) |
| strtoll/strtoull | 171.141 | 0.131448 | 4.12386ms | 4000 | 30 | 25753.7 | 22289.8 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 379.259 | 0.623862 | 20.7063ms | 40000 | 30 | 1.18126e+07 | 100583 | 1(Win) |
| std::from_chars | 254.423 | 0.72064 | 27.5312ms | 40000 | 30 | 3.5024e+07 | 149935 | 2(Loss) |
| strtoll/strtoull | 165.125 | 0.610108 | 217.477ms | 40000 | 48 | 9.53564e+07 | 231019 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 286.035 | 2.3829 | 243.383ms | 400000 | 30 | 3.02982e+10 | 1.33365e+06 | 1(Win) |
| std::from_chars | 210.415 | 2.46917 | 320.249ms | 400000 | 30 | 6.01163e+10 | 1.81294e+06 | 2(Loss) |
| strtoll/strtoull | 156.207 | 2.32598 | 2392.32ms | 400000 | 48 | 1.54873e+11 | 2.44209e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 694.887 | 0.0946668 | 0.225743ms | 800 | 30 | 32.4092 | 1097.93 | 1(Win) |
| std::from_chars | 396.985 | 0.0367581 | 0.898856ms | 800 | 30 | 14.9713 | 1921.83 | 2(Loss) |
| strtoll/strtoull | 267.023 | 0.168365 | 0.550056ms | 800 | 30 | 694.234 | 2857.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 712.867 | 0.218516 | 11.1205ms | 8000 | 48 | 26252.6 | 10702.4 | 1(Win) |
| std::from_chars | 428.069 | 0.0847376 | 7.74788ms | 8000 | 30 | 6842.7 | 17822.8 | 2(Loss) |
| strtoll/strtoull | 260.182 | 0.655572 | 13.6726ms | 8000 | 30 | 1.10863e+06 | 29323.3 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 490.735 | 0.490531 | 30.7947ms | 80000 | 30 | 1.74478e+07 | 155469 | 1(Win) |
| std::from_chars | 324.907 | 0.654273 | 46.5088ms | 80000 | 30 | 7.08112e+07 | 234818 | 2(Loss) |
| strtoll/strtoull | 247.479 | 1.79265 | 59.9837ms | 80000 | 30 | 9.16253e+08 | 308284 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.912 | 2.20581 | 1888.51ms | 800000 | 48 | 8.71682e+10 | 1.93192e+06 | 1(Win) |
| std::from_chars | 291.798 | 2.2737 | 1142.83ms | 800000 | 30 | 1.06024e+11 | 2.61461e+06 | 2(Loss) |
| strtoll/strtoull | 238.917 | 1.90077 | 1448.92ms | 800000 | 30 | 1.10527e+11 | 3.19333e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 717.385 | 0.0566243 | 0.221371ms | 800 | 30 | 10.8793 | 1063.5 | 1(Win) |
| std::from_chars | 431.616 | 0.0332742 | 0.346015ms | 800 | 30 | 10.3782 | 1767.63 | 2(Loss) |
| strtoll/strtoull | 286.554 | 0.0362737 | 0.513208ms | 800 | 30 | 27.9816 | 2662.47 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.569 | 1.66756 | 1.957ms | 8000 | 30 | 932628 | 10573.3 | 1(Win) |
| std::from_chars | 447.628 | 1.84446 | 7.57793ms | 8000 | 30 | 2.96488e+06 | 17044.1 | 2(Loss) |
| strtoll/strtoull | 281.6 | 1.03312 | 5.56572ms | 8000 | 30 | 2.35038e+06 | 27093 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 559.265 | 0.600613 | 62.6178ms | 80000 | 30 | 2.01398e+07 | 136418 | 1(Win) |
| std::from_chars | 376.577 | 0.697883 | 39.182ms | 80000 | 30 | 5.99735e+07 | 202599 | 2(Loss) |
| strtoll/strtoull | 274.87 | 0.722161 | 52.3453ms | 80000 | 30 | 1.20535e+08 | 277564 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 486.073 | 2.17843 | 283.762ms | 800000 | 30 | 3.50741e+10 | 1.5696e+06 | 1(Win) |
| std::from_chars | 330.866 | 2.09962 | 472.78ms | 800000 | 30 | 7.03196e+10 | 2.30588e+06 | 2(Loss) |
| strtoll/strtoull | 259.219 | 2.38053 | 1357.91ms | 800000 | 30 | 1.4727e+11 | 2.94322e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 700.63 | 0.0704397 | 0.226337ms | 800 | 30 | 17.6506 | 1088.93 | 1(Win) |
| std::from_chars | 467.87 | 0.0381483 | 0.324371ms | 800 | 30 | 11.6092 | 1630.67 | 2(Loss) |
| strtoll/strtoull | 165.648 | 0.0419563 | 0.904482ms | 800 | 30 | 112.028 | 4605.8 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 714.494 | 0.0424542 | 1.96732ms | 8000 | 30 | 616.516 | 10678 | 1(Win) |
| std::from_chars | 457.805 | 1.93088 | 2.99381ms | 8000 | 30 | 3.10635e+06 | 16665.2 | 2(Loss) |
| strtoll/strtoull | 286.378 | 1.41897 | 11.1435ms | 8000 | 30 | 4.28715e+06 | 26641 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 507.544 | 0.858771 | 29.0319ms | 80000 | 30 | 4.99931e+07 | 150320 | 1(Win) |
| std::from_chars | 387.826 | 0.359081 | 195.193ms | 80000 | 48 | 2.39516e+07 | 196722 | 2(Loss) |
| strtoll/strtoull | 282.743 | 0.607822 | 263.343ms | 80000 | 48 | 1.29119e+08 | 269835 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 449.618 | 2.20379 | 309.446ms | 800000 | 30 | 4.19521e+10 | 1.69686e+06 | 1(Win) |
| std::from_chars | 337.125 | 2.07481 | 456.017ms | 800000 | 30 | 6.61419e+10 | 2.26308e+06 | 2(Loss) |
| strtoll/strtoull | 265.507 | 1.77013 | 592.159ms | 800000 | 30 | 7.76172e+10 | 2.87352e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 682.944 | 0.090205 | 0.229777ms | 800 | 30 | 30.4644 | 1117.13 | 1(Win) |
| strtoll/strtoull | 281.054 | 0.0816441 | 0.565996ms | 800 | 30 | 147.357 | 2714.57 | 2(Loss) |
| std::from_chars | 277.134 | 0.0561517 | 0.547701ms | 800 | 30 | 71.6885 | 2752.97 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 682.822 | 0.104397 | 2.0994ms | 8000 | 30 | 4081.89 | 11173.3 | 1(Win) |
| std::from_chars | 420.298 | 1.21439 | 3.34953ms | 8000 | 30 | 1.45782e+06 | 18152.3 | 2(Loss) |
| strtoll/strtoull | 279.386 | 0.289023 | 6.84908ms | 8000 | 30 | 186878 | 27307.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 468.907 | 0.498111 | 30.8835ms | 80000 | 30 | 1.97052e+07 | 162706 | 1(Win) |
| std::from_chars | 410.346 | 0.441749 | 35.5179ms | 80000 | 30 | 2.02373e+07 | 185926 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.364 | 2.49551 | 321.124ms | 800000 | 30 | 5.81728e+10 | 1.76458e+06 | 1(Win) |
| std::from_chars | 359.652 | 2.45725 | 382.149ms | 800000 | 30 | 8.15145e+10 | 2.12133e+06 | 2(Loss) |
| strtoll/strtoull | 254.341 | 2.47844 | 537.306ms | 800000 | 30 | 1.65815e+11 | 2.99967e+06 | 3(Loss) |
