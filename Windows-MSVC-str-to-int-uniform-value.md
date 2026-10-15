# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36257.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 143.77 | 1.84044 | 0.8548ms | 100 | 30 | 4471.26 | 663.333 | 0 | 20.589 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 136.891 | 1.75238 | 0.9024ms | 100 | 30 | 4471.26 | 696.667 | 0.47619 | 21.916 | 1(Tie) | true |
| strtoll/strtoull | 75.6884 | 0.90049 | 1.6017ms | 100 | 30 | 3862.07 | 1260 | 0 | 39.9793 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 150.343 | 0.457796 | 7.8608ms | 1000 | 30 | 25298.9 | 6343.33 | 0.369198 | 20.0932 | 1(Win) | true |
| std::from_chars | 135.98 | 0.519451 | 8.6464ms | 1000 | 30 | 39816.1 | 7013.33 | 0.237079 | 22.2763 | 2(Loss) | true |
| strtoll/strtoull | 74.6224 | 0.274154 | 15.7182ms | 1000 | 30 | 36827.6 | 12780 | 1.1091 | 40.6776 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 148.247 | 0.333496 | 77.9027ms | 10000 | 30 | 1.38079e+06 | 64330 | 0.376833 | 20.4918 | 1(Win) | true |
| std::from_chars | 133.605 | 0.377616 | 85.4173ms | 10000 | 30 | 2.17959e+06 | 71380 | 0.089231 | 22.7354 | 2(Loss) | true |
| strtoll/strtoull | 75.0649 | 0.33672 | 154.486ms | 10000 | 30 | 5.49016e+06 | 127047 | 0.467448 | 40.4831 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 147.942 | 0.255771 | 775.223ms | 100000 | 30 | 8.15531e+07 | 644627 | 0.0320496 | 20.5416 | 1(Win) | true |
| std::from_chars | 138.603 | 0.294867 | 829.968ms | 100000 | 30 | 1.23488e+08 | 688060 | 0.0174434 | 21.9249 | 2(Loss) | true |
| strtoll/strtoull | 74.4752 | 0.474251 | 1548.28ms | 100000 | 30 | 1.10641e+09 | 1.28053e+06 | 0.0330484 | 40.8042 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 220.079 | 2.7769 | 0.5681ms | 100 | 48 | 6950.35 | 433.333 | 5.7971 | 13.2119 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 200.072 | 2.78815 | 0.6051ms | 100 | 30 | 5298.85 | 476.667 | 4.02685 | 14.2803 | -(Loss) | false |
| strtoll/strtoull | 99.298 | 1.01597 | 1.251ms | 100 | 48 | 4570.04 | 960.417 | 0.743007 | 29.9348 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 250.555 | 0.612991 | 4.8747ms | 1000 | 48 | 26130.3 | 3806.25 | 0.185752 | 12.0566 | 1(Win) | true |
| std::from_chars | 229.986 | 0.719612 | 5.2002ms | 1000 | 30 | 26712.6 | 4146.67 | 1.1718 | 13.1224 | 2(Loss) | true |
| strtoll/strtoull | 101.925 | 0.334783 | 11.483ms | 1000 | 30 | 29436.8 | 9356.67 | 0.178444 | 29.7305 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 245.35 | 0.608826 | 46.8053ms | 10000 | 30 | 1.6801e+06 | 38870 | 0.240695 | 12.3733 | 1(Win) | true |
| std::from_chars | 224.517 | 0.327281 | 51.5201ms | 10000 | 30 | 579782 | 42476.7 | 0.196572 | 13.5223 | 2(Loss) | true |
| strtoll/strtoull | 100.634 | 0.663465 | 114.564ms | 10000 | 30 | 1.18595e+07 | 94766.7 | 0.367969 | 30.1946 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 241.62 | 0.922724 | 466.097ms | 100000 | 30 | 3.97923e+08 | 394700 | 0.729033 | 12.5739 | 1(Win) | true |
| std::from_chars | 224.665 | 0.581901 | 505.825ms | 100000 | 30 | 1.83041e+08 | 424487 | 0.105336 | 13.5218 | 2(Loss) | true |
| strtoll/strtoull | 98.6757 | 0.300637 | 1156.64ms | 100000 | 48 | 4.05235e+08 | 966473 | 0.0852189 | 30.7987 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 231.194 | 2.11983 | 0.5277ms | 100 | 48 | 3670.21 | 412.5 | 2.55906 | 12.4625 | -(Win) | false |
| std::from_chars | 199.028 | 2.63325 | 0.5975ms | 100 | 48 | 7641.84 | 479.167 | 0.862069 | 14.4742 | 2(Loss) | true |
| strtoll/strtoull | 103.66 | 0.960964 | 1.1921ms | 100 | 30 | 2344.83 | 920 | 0 | 28.394 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 260.33 | 0.734377 | 4.4458ms | 1000 | 30 | 21712.6 | 3663.33 | 0.548948 | 11.591 | 1(Win) | true |
| std::from_chars | 226.526 | 0.758438 | 5.2532ms | 1000 | 30 | 30586.2 | 4210 | 0.0791139 | 13.3309 | 2(Loss) | true |
| strtoll/strtoull | 104.345 | 0.217904 | 11.1314ms | 1000 | 48 | 19038.1 | 9139.58 | 0.113843 | 29.0762 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 252.17 | 0.820515 | 45.8898ms | 10000 | 48 | 4.62198e+06 | 37818.8 | 0.00330513 | 12.0401 | 1(Win) | true |
| std::from_chars | 219.498 | 0.365139 | 51.5256ms | 10000 | 48 | 1.20808e+06 | 43447.9 | 0.0278033 | 13.8271 | 2(Loss) | true |
| strtoll/strtoull | 100.312 | 1.56301 | 111.576ms | 10000 | 48 | 1.05988e+08 | 95070.8 | 0.0324425 | 30.2824 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 254.017 | 0.500376 | 446.646ms | 100000 | 30 | 1.05873e+08 | 375437 | 0.0773031 | 11.9599 | 1(Win) | true |
| std::from_chars | 223.007 | 0.592109 | 514.908ms | 100000 | 30 | 1.92348e+08 | 427643 | 0.0804151 | 13.624 | 2(Loss) | true |
| strtoll/strtoull | 102.406 | 0.46356 | 1115.12ms | 100000 | 30 | 5.59094e+08 | 931270 | 0.468574 | 29.6739 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 193.968 | 1.899 | 0.6521ms | 100 | 48 | 4184.4 | 491.667 | 0.337838 | 15.2498 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 189.472 | 2.01697 | 0.6523ms | 100 | 30 | 3091.95 | 503.333 | 0.657895 | 15.2253 | 1(Tie) | true |
| strtoll/strtoull | 90.6463 | 1.05852 | 1.2912ms | 100 | 48 | 5953.01 | 1052.08 | 2.14401 | 32.7123 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 208.834 | 1.03583 | 5.7818ms | 1000 | 30 | 67126.4 | 4566.67 | 1.10701 | 14.493 | 1(Win) | true |
| std::from_chars | 197.176 | 1.38954 | 5.8474ms | 1000 | 30 | 135506 | 4836.67 | 0.502165 | 15.3064 | 2(Loss) | true |
| strtoll/strtoull | 92.9205 | 1.22222 | 12.4514ms | 1000 | 30 | 472057 | 10263.3 | 0.581208 | 32.6152 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 202.608 | 0.599095 | 57.6438ms | 10000 | 30 | 2.38562e+06 | 47070 | 4.04974 | 14.9927 | -(Win) | false |
| std::from_chars | 195.659 | 0.40307 | 59.3973ms | 10000 | 48 | 1.8527e+06 | 48741.7 | 0.560484 | 15.5191 | 2(Loss) | true |
| strtoll/strtoull | 94.1165 | 0.424342 | 122.18ms | 10000 | 48 | 8.87445e+06 | 101329 | 1.18726 | 32.2875 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 203.229 | 1.04858 | 563.815ms | 100000 | 30 | 7.26353e+08 | 469260 | 1 | 14.9508 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 202.017 | 0.474325 | 568.408ms | 100000 | 30 | 1.50418e+08 | 472077 | 0.00759 | 15.0418 | 1(Tie) | true |
| strtoll/strtoull | 93.7662 | 0.340558 | 1232.67ms | 100000 | 30 | 3.59924e+08 | 1.01708e+06 | 0.30177 | 32.4106 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 219.235 | 1.47363 | 1.0887ms | 200 | 30 | 4931.03 | 870 | 0.381679 | 13.6407 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 208.834 | 1.01432 | 1.1568ms | 200 | 30 | 2574.71 | 913.333 | 3.00885 | 14.0788 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 127.44 | 0.815698 | 1.8627ms | 200 | 30 | 4471.26 | 1496.67 | 3.69515 | 23.4558 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 236.84 | 0.370529 | 9.8417ms | 2000 | 30 | 26712.6 | 8053.33 | 0.247729 | 12.7864 | 1(Win) | true |
| std::from_chars | 214.309 | 0.742578 | 10.905ms | 2000 | 30 | 131034 | 8900 | 0.595681 | 14.1137 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 124.772 | 0.808661 | 18.2345ms | 2000 | 30 | 458437 | 15286.7 | 9.27794 | 24.3366 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 236.702 | 0.472331 | 98.0154ms | 20000 | 30 | 4.34579e+06 | 80580 | 1.0985 | 12.8336 | 1(Win) | true |
| std::from_chars | 208.805 | 1.14215 | 110.418ms | 20000 | 48 | 5.22472e+07 | 91345.8 | 0.284528 | 14.5485 | 2(Loss) | true |
| strtoll/strtoull | 126.962 | 0.944041 | 177.422ms | 20000 | 30 | 6.03415e+07 | 150230 | 0.58922 | 23.9341 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 233.948 | 0.31448 | 978.457ms | 200000 | 30 | 1.97209e+08 | 815287 | 0.0400517 | 12.9886 | 1(Win) | true |
| std::from_chars | 210.838 | 0.343678 | 1102.36ms | 200000 | 30 | 2.89994e+08 | 904653 | 0.218024 | 14.413 | 2(Loss) | true |
| strtoll/strtoull | 130.094 | 0.427784 | 1774.09ms | 200000 | 30 | 1.18009e+09 | 1.46613e+06 | 0.907537 | 23.361 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 332.919 | 1.24507 | 0.7585ms | 200 | 48 | 2442.38 | 572.917 | 1.22126 | 8.86948 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 304.364 | 2.41138 | 0.8122ms | 200 | 30 | 6850.57 | 626.667 | 2.65372 | 9.77183 | -(Loss) | false |
| strtoll/strtoull | 158.946 | 1.2635 | 1.4966ms | 200 | 30 | 6896.55 | 1200 | 1.03093 | 18.7313 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 359.425 | 0.477524 | 6.5549ms | 2000 | 30 | 19264.4 | 5306.67 | 0.0628536 | 8.40408 | 1(Win) | true |
| std::from_chars | 317.539 | 1.7758 | 7.1852ms | 2000 | 30 | 341333 | 6006.67 | 0.200762 | 9.51035 | 2(Loss) | true |
| strtoll/strtoull | 167.851 | 0.265129 | 13.7809ms | 2000 | 30 | 27229.9 | 11363.3 | 0.619835 | 18.0647 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 356.029 | 0.233144 | 64.7949ms | 20000 | 48 | 748825 | 53572.9 | 0.0490227 | 8.53139 | 1(Win) | true |
| std::from_chars | 322.314 | 0.2485 | 71.1557ms | 20000 | 30 | 648747 | 59176.7 | 0.555084 | 9.42252 | 2(Loss) | true |
| strtoll/strtoull | 166.858 | 0.664895 | 139.851ms | 20000 | 30 | 1.73299e+07 | 114310 | 1.85175 | 18.2095 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 356.166 | 0.30997 | 642.968ms | 200000 | 48 | 1.32262e+08 | 535523 | 0.108266 | 8.53087 | 1(Win) | true |
| std::from_chars | 325.87 | 0.443425 | 704.469ms | 200000 | 30 | 2.02085e+08 | 585310 | 0.176428 | 9.32401 | 2(Loss) | true |
| strtoll/strtoull | 164.125 | 0.21564 | 1398.24ms | 200000 | 48 | 3.01447e+08 | 1.16213e+06 | 0.0753791 | 18.516 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 328.853 | 2.79113 | 0.7362ms | 200 | 30 | 7862.07 | 580 | 0 | 8.96633 | 1(Win) | true |
| std::from_chars | 299.584 | 2.19344 | 0.7979ms | 200 | 30 | 5850.57 | 636.667 | 1.0582 | 9.97617 | 2(Loss) | true |
| strtoll/strtoull | 164.427 | 1.13947 | 1.4636ms | 200 | 30 | 5241.38 | 1160 | 1.69492 | 18.1843 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 361.012 | 0.817171 | 6.4608ms | 2000 | 30 | 55919.5 | 5283.33 | 0.502197 | 8.37803 | 1(Win) | true |
| std::from_chars | 317.121 | 0.907408 | 7.0883ms | 2000 | 48 | 142974 | 6014.58 | 0.0899779 | 9.53131 | 2(Loss) | true |
| strtoll/strtoull | 167.372 | 0.641036 | 13.5835ms | 2000 | 48 | 256152 | 11395.8 | 0.905797 | 18.1153 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 366.986 | 0.446153 | 62.7179ms | 20000 | 30 | 1.61306e+06 | 51973.3 | 0.847293 | 8.27172 | 1(Win) | true |
| std::from_chars | 319.364 | 0.248051 | 71.9156ms | 20000 | 30 | 658402 | 59723.3 | 0.470333 | 9.51204 | 2(Loss) | true |
| strtoll/strtoull | 166.126 | 0.942485 | 136.517ms | 20000 | 30 | 3.51281e+07 | 114813 | 0.869165 | 18.2802 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 360.459 | 0.48536 | 638.209ms | 200000 | 48 | 3.16604e+08 | 529144 | 0.281971 | 8.42914 | 1(Win) | true |
| std::from_chars | 319.354 | 0.245547 | 716.626ms | 200000 | 48 | 1.03234e+08 | 597252 | 0.272331 | 9.51469 | 2(Loss) | true |
| strtoll/strtoull | 167.629 | 0.425411 | 1360.51ms | 200000 | 48 | 1.12466e+09 | 1.13784e+06 | 0.162069 | 18.1263 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 436.797 | 2.32491 | 0.559ms | 200 | 30 | 3091.95 | 436.667 | 0 | 6.4105 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 423.855 | 2.06328 | 0.5673ms | 200 | 30 | 2586.21 | 450 | 0.746269 | 6.76867 | 1(Tie) | true |
| strtoll/strtoull | 178.814 | 1.29759 | 1.3321ms | 200 | 30 | 5747.13 | 1066.67 | 0 | 16.7108 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| std::from_chars | 504.59 | 0.529101 | 4.5769ms | 2000 | 30 | 12000 | 3780 | 1.25 | 5.96915 | 1(Win) | true |
| vn::from_chars | 497.029 | 0.429373 | 4.7528ms | 2000 | 48 | 13031.9 | 3837.5 | 0.195822 | 6.06127 | 2(Loss) | true |
| strtoll/strtoull | 189.597 | 0.155171 | 12.1787ms | 2000 | 30 | 7310.34 | 10060 | 0.532978 | 16.0188 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| std::from_chars | 514.526 | 0.444326 | 49.2715ms | 20000 | 30 | 813897 | 37070 | 0.340532 | 5.90226 | 1(Win) | true |
| vn::from_chars | 497.396 | 0.62401 | 46.7706ms | 20000 | 30 | 1.71775e+06 | 38346.7 | 0.367523 | 6.10369 | 2(Loss) | true |
| strtoll/strtoull | 189.66 | 0.259226 | 122.845ms | 20000 | 30 | 2.03885e+06 | 100567 | 1.63988 | 16.022 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| std::from_chars | 515.23 | 0.284816 | 447.372ms | 200000 | 48 | 5.33614e+07 | 370194 | 0.0187929 | 5.89703 | 1(Win) | true |
| vn::from_chars | 495.282 | 0.280409 | 466.457ms | 200000 | 30 | 3.49831e+07 | 385103 | 0.209892 | 6.13423 | 2(Loss) | true |
| strtoll/strtoull | 190.252 | 0.193297 | 1212.19ms | 200000 | 30 | 1.12661e+08 | 1.00254e+06 | 0.157181 | 15.9732 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 364.027 | 1.17114 | 1.3002ms | 400 | 48 | 7229.61 | 1047.92 | 0.198413 | 8.20427 | 1(Win) | true |
| std::from_chars | 306.709 | 1.26463 | 1.5551ms | 400 | 48 | 11875 | 1243.75 | 0.0335121 | 9.74536 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 170.299 | 0.663198 | 2.6064ms | 400 | 30 | 6620.69 | 2240 | 3.7037 | 17.6178 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 378.442 | 1.48707 | 12.1481ms | 4000 | 30 | 674069 | 10080 | 1.47651 | 8.00911 | 1(Win) | true |
| std::from_chars | 316.135 | 0.333234 | 14.6181ms | 4000 | 30 | 48505.7 | 12066.7 | 0.527631 | 9.58962 | 2(Loss) | true |
| strtoll/strtoull | 191.309 | 0.226333 | 24.0304ms | 4000 | 30 | 61103.4 | 19940 | 1.93443 | 15.866 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 388.845 | 0.889205 | 118.844ms | 40000 | 30 | 2.28293e+07 | 98103.3 | 0.0407567 | 7.81041 | 1(Win) | true |
| std::from_chars | 317.231 | 0.341175 | 146.108ms | 40000 | 30 | 5.04948e+06 | 120250 | 0.0969261 | 9.57717 | 2(Loss) | true |
| strtoll/strtoull | 191.661 | 0.527005 | 245.268ms | 40000 | 48 | 5.28108e+07 | 199033 | 0.473381 | 15.8529 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 383.52 | 0.379866 | 1182.22ms | 400000 | 30 | 4.28278e+08 | 994653 | 0.182641 | 7.92345 | 1(Win) | true |
| std::from_chars | 315.541 | 0.243517 | 1450.47ms | 400000 | 48 | 4.16012e+08 | 1.20894e+06 | 0.128254 | 9.63012 | 2(Loss) | true |
| strtoll/strtoull | 187.07 | 0.540586 | 2451.71ms | 400000 | 30 | 3.64557e+09 | 2.03919e+06 | 0.15668 | 16.2462 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 480.844 | 2.89423 | 0.9782ms | 400 | 30 | 15816.1 | 793.333 | 1.2766 | 6.16142 | 1(Win) | true |
| std::from_chars | 417.668 | 1.87326 | 1.1529ms | 400 | 30 | 8781.61 | 913.333 | 0.735294 | 7.061 | 2(Loss) | true |
| strtoll/strtoull | 224.945 | 0.655963 | 2.0912ms | 400 | 48 | 5939.72 | 1695.83 | 0.634766 | 13.3206 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 541.092 | 0.278339 | 8.7028ms | 4000 | 30 | 11551.7 | 7050 | 0.610902 | 5.59912 | 1(Win) | true |
| std::from_chars | 453.591 | 0.481567 | 10.4769ms | 4000 | 30 | 49206.9 | 8410 | 0.178042 | 6.68307 | 2(Loss) | true |
| strtoll/strtoull | 230.206 | 0.125723 | 20.2226ms | 4000 | 48 | 20833.3 | 16570.8 | 0.535214 | 13.1929 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 537.092 | 0.406258 | 85.5344ms | 40000 | 48 | 3.99638e+06 | 71025 | 1.26657 | 5.65485 | 1(Win) | true |
| std::from_chars | 445.833 | 0.313876 | 104.684ms | 40000 | 30 | 2.16378e+06 | 85563.3 | 0.112849 | 6.81343 | 2(Loss) | true |
| strtoll/strtoull | 229.074 | 0.286571 | 200.564ms | 40000 | 48 | 1.09314e+07 | 166527 | 0.301094 | 13.2652 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 535.85 | 0.334174 | 856.723ms | 400000 | 30 | 1.69786e+08 | 711897 | 0.167204 | 5.67074 | 1(Win) | true |
| std::from_chars | 436.368 | 0.34837 | 1054.42ms | 400000 | 30 | 2.78239e+08 | 874193 | 0.0605906 | 6.96375 | 2(Loss) | true |
| strtoll/strtoull | 227.848 | 0.177546 | 2010.18ms | 400000 | 48 | 4.24122e+08 | 1.67423e+06 | 0.0005724 | 13.338 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 501.659 | 1.78317 | 0.9624ms | 400 | 48 | 8825.35 | 760.417 | 0.940265 | 5.88516 | 1(Win) | true |
| std::from_chars | 413.144 | 1.43937 | 1.1372ms | 400 | 30 | 5298.85 | 923.333 | 0.727273 | 7.16108 | 2(Loss) | true |
| strtoll/strtoull | 221.785 | 1.05781 | 2.0952ms | 400 | 30 | 9931.03 | 1720 | 0.289855 | 13.5207 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 559.613 | 0.416614 | 8.388ms | 4000 | 30 | 24195.4 | 6816.67 | 0.21348 | 5.4157 | 1(Win) | true |
| std::from_chars | 436.132 | 0.530713 | 10.5327ms | 4000 | 30 | 64643.7 | 8746.67 | 0.961908 | 6.94517 | 2(Loss) | true |
| strtoll/strtoull | 234.992 | 0.667477 | 19.9267ms | 4000 | 48 | 563546 | 16233.3 | 0.733795 | 12.9139 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 569.046 | 0.430414 | 81.7467ms | 40000 | 30 | 2.49757e+06 | 67036.7 | 0.477545 | 5.33796 | 1(Win) | true |
| std::from_chars | 438.018 | 0.294543 | 104.836ms | 40000 | 30 | 1.97403e+06 | 87090 | 1.13025 | 6.93586 | 2(Loss) | true |
| strtoll/strtoull | 232.443 | 0.739211 | 197.541ms | 40000 | 30 | 4.41515e+07 | 164113 | 0.0692638 | 13.0709 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 569.368 | 0.412767 | 804.128ms | 400000 | 48 | 3.671e+08 | 669988 | 0.0439256 | 5.33663 | 1(Win) | true |
| std::from_chars | 434.046 | 0.442229 | 1053.34ms | 400000 | 30 | 4.53175e+08 | 878870 | 0.0638197 | 6.9997 | 2(Loss) | true |
| strtoll/strtoull | 230.013 | 0.245894 | 1982.63ms | 400000 | 48 | 7.98276e+08 | 1.65847e+06 | 0.0019596 | 13.2124 | 3(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 669.245 | 3.27406 | 0.7381ms | 400 | 30 | 10448.3 | 570 | 0.588235 | 4.36725 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 560.985 | 2.38067 | 0.934ms | 400 | 30 | 7862.07 | 680 | 3.31754 | 5.24917 | -(Loss) | false |
| strtoll/strtoull | 251.519 | 0.555105 | 1.8774ms | 400 | 30 | 2126.44 | 1516.67 | 0.441501 | 11.8488 | 3(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 745.543 | 0.714158 | 6.347ms | 4000 | 30 | 40057.5 | 5116.67 | 1.32013 | 4.05919 | 1(Win) | true |
| std::from_chars | 610.352 | 0.706228 | 8.1097ms | 4000 | 30 | 58448.3 | 6250 | 0.860678 | 4.96605 | 2(Loss) | true |
| strtoll/strtoull | 258.989 | 0.522055 | 17.8568ms | 4000 | 48 | 283812 | 14729.2 | 0.631974 | 11.7153 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 739.426 | 0.589207 | 61.9665ms | 40000 | 30 | 2.77197e+06 | 51590 | 0.673854 | 4.10863 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 600.078 | 0.450026 | 80.0055ms | 40000 | 30 | 2.45528e+06 | 63570 | 2.86624 | 5.06109 | -(Loss) | false |
| strtoll/strtoull | 258.553 | 0.406755 | 177.734ms | 40000 | 30 | 1.08046e+07 | 147540 | 0.189982 | 11.7513 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 737.929 | 0.514594 | 619.438ms | 400000 | 30 | 2.12296e+08 | 516947 | 0.362403 | 4.11715 | 1(Win) | true |
| std::from_chars | 564.58 | 1.52818 | 823.427ms | 400000 | 30 | 3.19846e+09 | 675670 | 1.62772 | 5.38147 | 2(Loss) | true |
| strtoll/strtoull | 257.438 | 0.240069 | 1778.5ms | 400000 | 48 | 6.07418e+08 | 1.48179e+06 | 0.000112476 | 11.8046 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 829.282 | 1.59783 | 1.1622ms | 800 | 30 | 6482.76 | 920 | 1.07527 | 3.61004 | 1(Win) | true |
| std::from_chars | 543.34 | 0.763311 | 1.7213ms | 800 | 48 | 5514.18 | 1404.17 | 1.99758 | 5.48336 | 2(Loss) | true |
| strtoll/strtoull | 299.192 | 0.769525 | 3.19ms | 800 | 30 | 11551.7 | 2550 | 2.17391 | 10.0738 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 828.382 | 0.625467 | 11.239ms | 8000 | 30 | 99551.7 | 9210 | 0.647249 | 3.66334 | 1(Win) | true |
| std::from_chars | 570.351 | 0.311823 | 16.4478ms | 8000 | 30 | 52195.4 | 13376.7 | 2.0174 | 5.32015 | 2(Loss) | true |
| strtoll/strtoull | 281.354 | 0.345167 | 31.8126ms | 8000 | 30 | 262816 | 27116.7 | 0.90145 | 10.8001 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 869.715 | 0.542325 | 107.801ms | 80000 | 48 | 1.08639e+07 | 87722.9 | 0.266221 | 3.49164 | 1(Win) | true |
| std::from_chars | 553.47 | 0.86962 | 165.148ms | 80000 | 30 | 4.31095e+07 | 137847 | 1.00969 | 5.48966 | 2(Loss) | true |
| strtoll/strtoull | 297.516 | 1.01173 | 305.973ms | 80000 | 30 | 2.01933e+08 | 256437 | 0.196666 | 10.2141 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 874.62 | 0.37422 | 1050.13ms | 800000 | 30 | 3.19682e+08 | 872310 | 0.0806939 | 3.47414 | 1(Win) | true |
| std::from_chars | 533.078 | 0.36353 | 1720.78ms | 800000 | 30 | 8.12082e+08 | 1.4312e+06 | 0.139267 | 5.70028 | 2(Loss) | true |
| strtoll/strtoull | 299.843 | 0.436945 | 3051.89ms | 800000 | 30 | 3.70822e+09 | 2.54446e+06 | 0.0885057 | 10.1352 | 3(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1103.04 | 1.65794 | 0.8777ms | 800 | 48 | 6312.06 | 691.667 | 1.65877 | 2.69789 | 1(Win) | true |
| std::from_chars | 719.754 | 1.24697 | 1.3089ms | 800 | 30 | 5241.38 | 1060 | 0.315457 | 4.10754 | 2(Loss) | true |
| strtoll/strtoull | 350.508 | 0.476695 | 2.6775ms | 800 | 30 | 3229.89 | 2176.67 | 0.152905 | 8.57867 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1185.92 | 0.443008 | 7.9131ms | 8000 | 30 | 24367.8 | 6433.33 | 0.31185 | 2.55073 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 742.37 | 0.341867 | 12.3804ms | 8000 | 48 | 59250.9 | 10277.1 | 2.59983 | 4.08494 | -(Loss) | false |
| strtoll/strtoull | 356.959 | 0.0806749 | 26.0282ms | 8000 | 30 | 8919.54 | 21373.3 | 0.865801 | 8.50631 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1152.3 | 0.438599 | 80.0032ms | 80000 | 30 | 2.5299e+06 | 66210 | 0.903013 | 2.63621 | 1(Win) | true |
| std::from_chars | 759.065 | 0.34044 | 130.097ms | 80000 | 48 | 5.6201e+06 | 100510 | 0.550379 | 4.00263 | 2(Loss) | true |
| strtoll/strtoull | 351.079 | 0.532556 | 261.012ms | 80000 | 48 | 6.42896e+07 | 217312 | 0.274196 | 8.65552 | 3(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1190.07 | 0.519976 | 772.745ms | 800000 | 30 | 3.33366e+08 | 641087 | 0.0223629 | 2.55284 | 1(Win) | true |
| std::from_chars | 722.295 | 0.364709 | 1265.6ms | 800000 | 48 | 7.12334e+08 | 1.05627e+06 | 0.656399 | 4.20669 | 2(Loss) | true |
| strtoll/strtoull | 351.494 | 0.188275 | 2616.19ms | 800000 | 30 | 5.01014e+08 | 2.17056e+06 | 0.0566353 | 8.64636 | 3(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1133.08 | 2.56083 | 0.8351ms | 800 | 30 | 8919.54 | 673.333 | 2.0202 | 2.60158 | 1(Win) | true |
| strtoll/strtoull | 351.046 | 0.490004 | 2.6649ms | 800 | 30 | 3402.3 | 2173.33 | 0.836502 | 8.53213 | 2(Loss) | true |
| std::from_chars DID NOT CONVERGE | 229.025 | 7.90853 | 3.8558ms | 800 | 48 | 3.33156e+06 | 3331.25 | 3.56218 | 13.1842 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1240.55 | 0.617571 | 7.6403ms | 8000 | 30 | 43275.9 | 6150 | 0.108519 | 2.43807 | 1(Win) | true |
| std::from_chars | 750.432 | 0.28033 | 12.4303ms | 8000 | 30 | 24367.8 | 10166.7 | 1.36258 | 4.04233 | 2(Loss) | true |
| strtoll/strtoull | 351.855 | 0.886438 | 26.3958ms | 8000 | 30 | 1.10833e+06 | 21683.3 | 0.570103 | 8.62595 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1245.68 | 0.618133 | 75.1635ms | 80000 | 30 | 4.29982e+06 | 61246.7 | 0.124342 | 2.4382 | 1(Win) | true |
| std::from_chars | 760.556 | 0.489926 | 123.562ms | 80000 | 30 | 7.24602e+06 | 100313 | 0.666755 | 3.99465 | 2(Loss) | true |
| strtoll/strtoull | 355.987 | 0.326574 | 260.899ms | 80000 | 30 | 1.46959e+07 | 214317 | 0.76975 | 8.53565 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 1269.9 | 0.506801 | 731.845ms | 800000 | 30 | 2.78123e+08 | 600787 | 0.343505 | 2.3926 | 1(Win) | true |
| std::from_chars | 732.898 | 0.295893 | 1255.14ms | 800000 | 30 | 2.84633e+08 | 1.04099e+06 | 0.189204 | 4.14646 | 2(Loss) | true |
| strtoll/strtoull | 355.286 | 0.148529 | 2602.4ms | 800000 | 30 | 3.05187e+08 | 2.1474e+06 | 0.216421 | 8.55431 | 3(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 786.536 | 1.79245 | 1.2189ms | 800 | 30 | 9068.97 | 970 | 0 | 3.77862 | 1(Win) | true |
| std::from_chars | 585.376 | 1.74434 | 1.6543ms | 800 | 30 | 15505.7 | 1303.33 | 0 | 5.15271 | 2(Loss) | true |
| strtoll/strtoull | 308.466 | 0.472196 | 3.0768ms | 800 | 30 | 4091.95 | 2473.33 | 1.06667 | 9.76446 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 862.078 | 0.314738 | 11.1258ms | 8000 | 30 | 23275.9 | 8850 | 0.0470588 | 3.51835 | 1(Win) | true |
| std::from_chars | 496.382 | 1.02286 | 18.6753ms | 8000 | 30 | 741483 | 15370 | 0.0433557 | 6.11576 | 2(Loss) | true |
| strtoll/strtoull | 307.596 | 0.965656 | 30.1641ms | 8000 | 30 | 1.72102e+06 | 24803.3 | 0.454849 | 9.86523 | 3(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 803.658 | 1.62043 | 111.061ms | 80000 | 48 | 1.1359e+08 | 94933.3 | 1.41576 | 3.78009 | 1(Win) | true |
| std::from_chars | 659.127 | 0.226112 | 168.657ms | 80000 | 30 | 2.055e+06 | 115750 | 0.442918 | 4.60882 | 2(Loss) | true |
| strtoll/strtoull | 305.227 | 0.458132 | 300.187ms | 80000 | 48 | 6.29446e+07 | 249958 | 0.281254 | 9.95605 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 850.527 | 0.427403 | 1082.04ms | 800000 | 30 | 4.40962e+08 | 897020 | 0.370085 | 3.57191 | 1(Win) | true |
| std::from_chars | 657.72 | 0.451867 | 1403.87ms | 800000 | 30 | 8.24215e+08 | 1.15998e+06 | 0.111981 | 4.61978 | 2(Loss) | true |
| strtoll/strtoull | 306.778 | 0.246151 | 2985.13ms | 800000 | 30 | 1.12423e+09 | 2.48694e+06 | 0.559756 | 9.90472 | 3(Loss) | true |
