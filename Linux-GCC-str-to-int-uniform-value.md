# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-38-generic using the GCC 16.2.1 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 142.761 | 0.988263 | 9.58909ms | 100 | 48 | 2092.02 | 668.021 | 1.20958 | 37.7342 | 44.7627 | 11.4765 | 0.834583 | 0.277708 | 0.138542 | 1(Win) | true |
| std::from_chars | 126.159 | 1.58109 | 9.73906ms | 100 | 30 | 4285.51 | 755.933 | 0.768718 | 42.415 | 80.7063 | 17.888 | 0.828 | 0.270333 | 0.123 | 2(Loss) | true |
| strtoll/strtoull | 82.27 | 0.722188 | 10.1846ms | 100 | 30 | 2102.51 | 1159.2 | 0.0517331 | 63.6207 | 146.125 | 34.7823 | 0.837333 | 0.275 | 0.104 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 142.455 | 0.442247 | 16.9661ms | 1000 | 30 | 26296.4 | 6694.57 | 0.149711 | 35.7297 | 43.9076 | 11.0819 | 0.807 | 0.268533 | 0.103633 | 1(Win) | true |
| std::from_chars | 132.654 | 0.336079 | 17.5563ms | 1000 | 48 | 28021.2 | 7189.21 | 0.17243 | 38.3792 | 78.6671 | 17.4934 | 0.801917 | 0.268062 | 0.114333 | 2(Loss) | true |
| strtoll/strtoull | 84.4974 | 0.423932 | 22.557ms | 1000 | 30 | 68679.4 | 11286.4 | 0.489554 | 60.0653 | 144.268 | 34.4634 | 0.8075 | 0.266967 | 0.0892667 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 141.535 | 0.370876 | 89.3587ms | 10000 | 30 | 1.8735e+06 | 67381 | 0.211125 | 35.6705 | 43.6548 | 11.0316 | 0.801133 | 0.26684 | 0.10525 | 1(Win) | true |
| std::from_chars | 133.533 | 0.280384 | 94.5676ms | 10000 | 30 | 1.20296e+06 | 71418.9 | 0.137126 | 37.8436 | 78.4358 | 17.4482 | 0.80541 | 0.267893 | 0.109133 | 2(Loss) | true |
| strtoll/strtoull | 86.5413 | 0.544219 | 140.628ms | 10000 | 30 | 1.079e+07 | 110199 | 0.290025 | 58.3284 | 143.975 | 34.3992 | 0.80771 | 0.266953 | 0.0800367 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 146.715 | 0.0912298 | 791.056ms | 100000 | 48 | 1.68797e+07 | 650017 | 0.114434 | 34.4369 | 43.6411 | 11.0295 | 0.800791 | 0.267337 | 0.109915 | 1(Win) | true |
| std::from_chars | 131.442 | 0.127404 | 876.326ms | 100000 | 30 | 2.56339e+07 | 725545 | 0.0791065 | 38.4686 | 78.4296 | 17.4467 | 0.803797 | 0.266985 | 0.10654 | 2(Loss) | true |
| strtoll/strtoull | 89.6985 | 0.189725 | 1289.19ms | 100000 | 30 | 1.22067e+08 | 1.0632e+06 | 0.0709464 | 56.5119 | 143.973 | 34.399 | 0.833214 | 0.267343 | 0.083083 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 239.396 | 2.18784 | 9.26084ms | 100 | 30 | 2278.86 | 398.367 | 0.0501798 | 23.4737 | 47.482 | 11.9537 | 0.329 | 0.281333 | 0.142667 | 1(Win) | true |
| std::from_chars | 203.039 | 1.81413 | 9.39439ms | 100 | 30 | 2178.22 | 469.7 | 0.141733 | 27.1877 | 82.1843 | 17.882 | 0.333667 | 0.292333 | 0.172667 | 2(Loss) | true |
| strtoll/strtoull | 114.272 | 1.03818 | 9.82134ms | 100 | 30 | 2252.12 | 834.567 | 0.107957 | 46.3723 | 147.219 | 34.3313 | 0.34 | 0.279 | 0.115667 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 229.749 | 0.701476 | 14.0075ms | 1000 | 30 | 25435.4 | 4150.93 | 0.315783 | 22.236 | 47.4438 | 11.5647 | 0.3039 | 0.2686 | 0.135733 | 1(Win) | true |
| std::from_chars | 219.543 | 0.497484 | 14.1387ms | 1000 | 30 | 14010 | 4343.9 | 0.220718 | 23.2626 | 80.1209 | 17.483 | 0.310233 | 0.266867 | 0.131767 | 2(Loss) | true |
| strtoll/strtoull | 120.46 | 0.548384 | 18.5636ms | 1000 | 30 | 56546.3 | 7916.93 | 0.6463 | 42.8707 | 145.149 | 33.9289 | 0.322033 | 0.268633 | 0.0885 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 238.106 | 0.430078 | 57.1093ms | 10000 | 30 | 890176 | 40052.6 | 0.0437151 | 21.2428 | 47.2648 | 11.5324 | 0.301783 | 0.267163 | 0.13308 | 1(Win) | true |
| std::from_chars | 220.881 | 0.599289 | 60.8455ms | 10000 | 30 | 2.00852e+06 | 43175.9 | 0.155159 | 22.8364 | 79.9442 | 17.4504 | 0.31303 | 0.267263 | 0.131507 | 2(Loss) | true |
| strtoll/strtoull | 122.28 | 0.352319 | 102.547ms | 10000 | 48 | 3.62414e+06 | 77991.3 | 0.114465 | 41.4564 | 144.995 | 33.9064 | 0.323775 | 0.266808 | 0.0806667 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 250.362 | 0.11618 | 467.216ms | 100000 | 30 | 5.8755e+06 | 380918 | 0.0745729 | 20.1733 | 47.2363 | 11.5268 | 0.309814 | 0.26712 | 0.134711 | 1(Win) | true |
| std::from_chars | 212.487 | 0.163065 | 548.673ms | 100000 | 30 | 1.60687e+07 | 448816 | 0.0179542 | 23.7606 | 79.9201 | 17.4457 | 0.327252 | 0.267061 | 0.131486 | 2(Loss) | true |
| strtoll/strtoull | 126.252 | 0.28679 | 917.985ms | 100000 | 30 | 1.4079e+08 | 755371 | 0.0850719 | 40.1271 | 144.956 | 33.8967 | 0.339719 | 0.267254 | 0.0875907 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 208.453 | 2.81176 | 9.40352ms | 100 | 30 | 4964.33 | 457.5 | 1.30553 | 26.629 | 41.932 | 10.9823 | 0.354 | 0.257 | 0.154333 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 198.544 | 0.931441 | 9.39389ms | 100 | 30 | 600.506 | 480.333 | 0.285442 | 27.735 | 79.243 | 17.893 | 0.342333 | 0.273667 | 0.164 | 1(Tie) | true |
| strtoll/strtoull | 122.743 | 0.698396 | 9.76305ms | 100 | 30 | 883.344 | 776.967 | 0.662366 | 43.43 | 145.3 | 35.3507 | 0.337333 | 0.265333 | 0.146667 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 253.781 | 0.629899 | 13.4683ms | 1000 | 30 | 16809.2 | 3757.87 | 0.226705 | 20.5319 | 40.2732 | 10.575 | 0.308567 | 0.267867 | 0.1368 | 1(Win) | true |
| std::from_chars | 219.525 | 0.438059 | 14.1393ms | 1000 | 30 | 10864.8 | 4344.27 | 0.0852423 | 23.2647 | 77.1534 | 17.4881 | 0.313267 | 0.267967 | 0.1373 | 2(Loss) | true |
| strtoll/strtoull | 125.175 | 0.41718 | 18.0481ms | 1000 | 30 | 30306.3 | 7618.73 | 0.0700519 | 40.6404 | 143.19 | 34.9363 | 0.316967 | 0.269 | 0.0978 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 258.607 | 0.476197 | 53.4937ms | 10000 | 48 | 1.48024e+06 | 36877.3 | 0.391012 | 19.6622 | 40.0844 | 10.5399 | 0.305785 | 0.266983 | 0.131994 | 1(Win) | true |
| std::from_chars | 217.756 | 0.601602 | 61.5952ms | 10000 | 30 | 2.08256e+06 | 43795.5 | 0.589416 | 23.1641 | 76.9576 | 17.4509 | 0.321793 | 0.267037 | 0.131023 | 2(Loss) | true |
| strtoll/strtoull | 130.326 | 0.34138 | 97.2773ms | 10000 | 30 | 1.87213e+06 | 73176.1 | 0.222104 | 38.7485 | 142.989 | 34.8982 | 0.3112 | 0.266953 | 0.08135 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 259.729 | 0.223743 | 451.148ms | 100000 | 30 | 2.02479e+07 | 367181 | 0.0370978 | 19.6265 | 40.047 | 10.5321 | 0.306325 | 0.26714 | 0.137908 | 1(Win) | true |
| std::from_chars | 213.032 | 0.1826 | 549.456ms | 100000 | 48 | 3.20742e+07 | 447668 | 0.073629 | 23.8097 | 76.9295 | 17.4452 | 0.316879 | 0.266807 | 0.133135 | 2(Loss) | true |
| strtoll/strtoull | 132.151 | 0.313509 | 882.185ms | 100000 | 30 | 1.53561e+08 | 721655 | 0.318499 | 38.5009 | 142.974 | 34.8958 | 0.321925 | 0.267178 | 0.0832923 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 206.153 | 1.09992 | 9.36686ms | 100 | 48 | 1242.75 | 462.604 | 1.36372 | 26.8733 | 44.2519 | 11.8004 | 0.45625 | 0.273333 | 0.116667 | 1(Win) | true |
| std::from_chars | 181.551 | 0.922489 | 9.44652ms | 100 | 48 | 1127.1 | 525.292 | 0.746388 | 30.3779 | 77.6494 | 16.1406 | 0.440417 | 0.2675 | 0.117708 | 2(Loss) | true |
| strtoll/strtoull | 103.314 | 0.604616 | 9.88065ms | 100 | 48 | 1495.14 | 923.083 | 0.501222 | 51.2398 | 156.051 | 35.8446 | 0.475208 | 0.27375 | 0.107708 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 222.778 | 0.505258 | 14.1563ms | 1000 | 30 | 14034.8 | 4280.83 | 0.787021 | 22.9236 | 42.2439 | 11.4193 | 0.417567 | 0.267233 | 0.128833 | 1(Win) | true |
| std::from_chars | 188.468 | 0.825485 | 14.9105ms | 1000 | 30 | 52343.6 | 5060.13 | 0.291629 | 27.0659 | 75.5775 | 15.7398 | 0.428967 | 0.2681 | 0.1377 | 2(Loss) | true |
| strtoll/strtoull | 109.322 | 0.323859 | 19.4546ms | 1000 | 30 | 23945.4 | 8723.57 | 0.162228 | 46.4817 | 154.082 | 35.4752 | 0.464367 | 0.268067 | 0.0944 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 210.6 | 0.426445 | 63.6258ms | 10000 | 30 | 1.11874e+06 | 45283.6 | 0.910557 | 23.9881 | 42.0033 | 11.3708 | 0.41975 | 0.26683 | 0.128163 | 1(Win) | true |
| std::from_chars | 194.447 | 0.755595 | 67.9341ms | 10000 | 30 | 4.12001e+06 | 49045.5 | 0.454238 | 26.3837 | 75.457 | 15.72 | 0.41415 | 0.2675 | 0.12662 | 2(Loss) | true |
| strtoll/strtoull | 111.416 | 0.217525 | 111.761ms | 10000 | 48 | 1.66406e+06 | 85596.1 | 0.093822 | 45.3581 | 153.88 | 35.4371 | 0.473304 | 0.267163 | 0.0775667 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 215.676 | 0.333854 | 547.757ms | 100000 | 30 | 6.53778e+07 | 442179 | 0.446474 | 23.6475 | 42.0045 | 11.3736 | 0.424091 | 0.267185 | 0.131761 | 1(Win) | true |
| std::from_chars | 194.849 | 0.147293 | 599.039ms | 100000 | 48 | 2.49467e+07 | 489444 | 0.0560543 | 25.9637 | 75.4216 | 15.7126 | 0.411597 | 0.266909 | 0.126268 | 2(Loss) | true |
| strtoll/strtoull | 110.393 | 0.141096 | 1047.35ms | 100000 | 48 | 7.13162e+07 | 863889 | 0.0209962 | 45.8762 | 153.846 | 35.4286 | 0.470668 | 0.267217 | 0.0758154 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 262.191 | 0.831879 | 9.69477ms | 200 | 30 | 1098.67 | 727.467 | 0.559843 | 20.3865 | 34.7362 | 8.43533 | 0.413167 | 0.209667 | 0.108167 | 1(Win) | true |
| std::from_chars | 219.493 | 0.993678 | 9.88263ms | 200 | 48 | 3578.91 | 868.979 | 0.2511 | 24.6672 | 55.6531 | 12.7025 | 0.430312 | 0.201042 | 0.120938 | 2(Loss) | true |
| strtoll/strtoull | 137.533 | 0.589298 | 10.478ms | 200 | 30 | 2003.73 | 1386.83 | 0.0192248 | 37.8437 | 97.3583 | 24.9868 | 0.418167 | 0.200167 | 0.0895 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 264.177 | 0.308318 | 17.7606ms | 2000 | 30 | 14865.8 | 7219.97 | 2.4834 | 19.2566 | 34.574 | 8.26607 | 0.415117 | 0.205017 | 0.10185 | 1(Win) | true |
| std::from_chars | 222.937 | 0.382261 | 19.0743ms | 2000 | 30 | 32087.7 | 8555.57 | 0.503168 | 22.8063 | 54.5969 | 12.4996 | 0.42025 | 0.20545 | 0.0866667 | 2(Loss) | true |
| strtoll/strtoull | 144.468 | 0.438276 | 24.8817ms | 2000 | 30 | 100447 | 13202.6 | 0.170839 | 35.1141 | 96.2173 | 24.7495 | 0.427 | 0.20455 | 0.06645 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 262.971 | 0.416075 | 96.4852ms | 20000 | 30 | 2.73217e+06 | 72530.7 | 0.092427 | 19.4776 | 34.5412 | 8.26108 | 0.413 | 0.204322 | 0.0985583 | 1(Win) | true |
| std::from_chars | 228.707 | 0.363007 | 108.938ms | 20000 | 30 | 2.74948e+06 | 83396.9 | 0.387992 | 22.0721 | 54.5667 | 12.4952 | 0.412027 | 0.20398 | 0.0867133 | 2(Loss) | true |
| strtoll/strtoull | 144.218 | 0.324042 | 166.257ms | 20000 | 30 | 5.50991e+06 | 132254 | 0.207177 | 35.0356 | 96.1271 | 24.7375 | 0.44043 | 0.20391 | 0.0588067 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 257.234 | 0.973413 | 956.124ms | 200000 | 30 | 1.56286e+09 | 741485 | 2.7142 | 19.6289 | 34.5268 | 8.25791 | 0.430394 | 0.204645 | 0.0986435 | -(Win) | false |
| std::from_chars | 228.354 | 0.126709 | 1016.37ms | 200000 | 30 | 3.36031e+07 | 835260 | 0.372512 | 22.116 | 54.551 | 12.4926 | 0.408797 | 0.204343 | 0.0892243 | 2(Loss) | true |
| strtoll/strtoull | 147.827 | 0.154838 | 1557.56ms | 200000 | 30 | 1.19737e+08 | 1.29026e+06 | 0.0815531 | 34.1638 | 96.1165 | 24.735 | 0.448948 | 0.204369 | 0.0609213 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 381.422 | 1.20999 | 9.42577ms | 200 | 48 | 1757.34 | 500.062 | 0.28664 | 14.3677 | 36.7436 | 8.70729 | 0.189167 | 0.2075 | 0.102813 | 1(Win) | true |
| std::from_chars | 328.005 | 1.26416 | 9.50757ms | 200 | 30 | 1621.16 | 581.5 | 0.337066 | 16.5347 | 56.4792 | 12.7225 | 0.175667 | 0.205167 | 0.127833 | 2(Loss) | true |
| strtoll/strtoull | 171.56 | 0.688086 | 10.1306ms | 200 | 30 | 1755.63 | 1111.77 | 0.239658 | 30.617 | 97.7433 | 24.701 | 0.180833 | 0.203833 | 0.100667 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 347.648 | 0.504853 | 15.4858ms | 2000 | 30 | 23016 | 5486.43 | 0.2648 | 14.6729 | 55.362 | 12.5022 | 0.170317 | 0.205683 | 0.112233 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 336.494 | 3.58481 | 15.5946ms | 2000 | 30 | 1.23868e+06 | 5668.3 | 6.5283 | 15.152 | 36.7625 | 8.52027 | 0.254667 | 0.206183 | 0.111333 | -(Tie) | false |
| strtoll/strtoull | 180.336 | 0.551186 | 21.7059ms | 2000 | 48 | 163130 | 10576.6 | 0.475081 | 28.1614 | 96.7124 | 24.5014 | 0.174625 | 0.204854 | 0.0629062 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 391.947 | 0.446561 | 67.652ms | 20000 | 30 | 1.41673e+06 | 48663.4 | 0.126633 | 12.9 | 36.7021 | 8.50976 | 0.16564 | 0.204363 | 0.104378 | 1(Win) | true |
| std::from_chars | 348.454 | 0.421615 | 74.7723ms | 20000 | 30 | 1.5978e+06 | 54737.5 | 0.0108993 | 14.4967 | 55.3036 | 12.4927 | 0.170565 | 0.203992 | 0.103387 | 2(Loss) | true |
| strtoll/strtoull | 176.13 | 0.562471 | 137.673ms | 20000 | 30 | 1.11305e+07 | 108292 | 0.115253 | 28.6868 | 96.6171 | 24.4839 | 0.18192 | 0.203937 | 0.0607483 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 399.076 | 0.836048 | 613.488ms | 200000 | 30 | 4.78996e+08 | 477941 | 0.377295 | 12.6514 | 36.6938 | 8.50822 | 0.176242 | 0.204619 | 0.115255 | 1(Win) | true |
| std::from_chars | 350.47 | 0.32202 | 664.972ms | 200000 | 30 | 9.21394e+07 | 544226 | 0.20739 | 14.4056 | 55.2957 | 12.4913 | 0.168462 | 0.204215 | 0.106064 | 2(Loss) | true |
| strtoll/strtoull | 192.696 | 0.241108 | 1204.17ms | 200000 | 30 | 1.70868e+08 | 989822 | 0.0157023 | 26.2062 | 96.608 | 24.4823 | 0.186942 | 0.204387 | 0.0674855 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 401.917 | 1.43796 | 9.44394ms | 200 | 48 | 2235.23 | 474.562 | 0.763501 | 13.7946 | 32.4389 | 8.09771 | 0.176146 | 0.210104 | 0.107083 | 1(Win) | true |
| std::from_chars | 332.464 | 0.922011 | 9.45777ms | 200 | 30 | 839.39 | 573.7 | 0.278116 | 16.3432 | 54.9337 | 12.712 | 0.170667 | 0.208333 | 0.105 | 2(Loss) | true |
| strtoll/strtoull | 182.772 | 0.612404 | 10.0784ms | 200 | 30 | 1225.29 | 1043.57 | 0.159454 | 28.809 | 96.7533 | 25.204 | 0.184333 | 0.208167 | 0.0938333 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 360.178 | 3.66238 | 15.4372ms | 2000 | 30 | 1.12842e+06 | 5295.57 | 0.103125 | 14.0611 | 32.4931 | 8.03335 | 0.227567 | 0.206267 | 0.1072 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 347.395 | 0.427067 | 15.5793ms | 2000 | 30 | 16494 | 5490.43 | 0.211724 | 14.6818 | 53.9255 | 12.5168 | 0.17305 | 0.205167 | 0.1055 | 1(Tie) | true |
| strtoll/strtoull | 188.806 | 0.746234 | 20.9134ms | 2000 | 30 | 170491 | 10102.2 | 0.44936 | 26.8987 | 95.7625 | 25.0164 | 0.178533 | 0.205717 | 0.0676667 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 436.942 | 0.476165 | 61.7106ms | 20000 | 30 | 1.29613e+06 | 43652.2 | 0.0167203 | 11.5745 | 32.3756 | 8.01055 | 0.162092 | 0.20424 | 0.106032 | 1(Win) | true |
| std::from_chars | 348.588 | 0.458947 | 74.645ms | 20000 | 48 | 3.02692e+06 | 54716.4 | 0.145053 | 14.4875 | 53.7982 | 12.4915 | 0.17403 | 0.203911 | 0.104305 | 2(Loss) | true |
| strtoll/strtoull | 189.967 | 0.57074 | 129.622ms | 20000 | 30 | 9.85143e+06 | 100404 | 0.332496 | 26.6919 | 95.6226 | 24.9855 | 0.182282 | 0.204097 | 0.0615683 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 409.828 | 0.175265 | 566.434ms | 200000 | 30 | 1.99604e+07 | 465402 | 0.123145 | 12.3247 | 32.3658 | 8.00871 | 0.176447 | 0.204551 | 0.118094 | 1(Win) | true |
| std::from_chars | 353.952 | 0.220293 | 657.711ms | 200000 | 30 | 4.22758e+07 | 538872 | 0.168636 | 14.2474 | 53.7987 | 12.492 | 0.169261 | 0.204216 | 0.106071 | 2(Loss) | true |
| strtoll/strtoull | 201.187 | 0.315665 | 1149.47ms | 200000 | 30 | 2.68679e+08 | 948046 | 0.0662121 | 25.0994 | 95.6124 | 24.9836 | 0.191104 | 0.204312 | 0.0697243 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 539.053 | 2.11441 | 9.28061ms | 200 | 30 | 1679.18 | 353.833 | 2.10274 | 10.4927 | 33.1758 | 8.42667 | 0.0865 | 0.201833 | 0.1075 | 1(Win) | true |
| std::from_chars | 412.79 | 1.06613 | 9.369ms | 200 | 48 | 1164.83 | 462.062 | 1.41615 | 13.4373 | 52.4989 | 11.4578 | 0.0982292 | 0.201042 | 0.0997917 | 2(Loss) | true |
| strtoll/strtoull | 196.986 | 0.802002 | 9.9685ms | 200 | 30 | 1809.1 | 968.267 | 0.575878 | 26.8337 | 98.7055 | 24.767 | 0.0891667 | 0.211833 | 0.101333 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 578.955 | 0.613668 | 13.0297ms | 2000 | 30 | 12261.9 | 3294.47 | 1.34974 | 8.85165 | 32.0417 | 8.198 | 0.0798333 | 0.2031 | 0.117683 | 1(Win) | true |
| std::from_chars | 461.292 | 0.75566 | 13.9655ms | 2000 | 30 | 29287.5 | 4134.8 | 1.51623 | 11.0743 | 51.5073 | 11.2665 | 0.0795 | 0.204267 | 0.110117 | 2(Loss) | true |
| strtoll/strtoull | 212.541 | 0.588256 | 19.7938ms | 2000 | 30 | 83604.3 | 8974.03 | 0.489612 | 24.0262 | 97.4963 | 24.511 | 0.0925167 | 0.204333 | 0.0649167 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 562.959 | 0.394646 | 49.9012ms | 20000 | 30 | 536345 | 33880.8 | 0.0706282 | 8.98003 | 31.9388 | 8.17884 | 0.0818033 | 0.204222 | 0.114415 | 1(Win) | true |
| std::from_chars | 462.488 | 0.424681 | 58.7088ms | 20000 | 30 | 920253 | 41241.1 | 0.0917941 | 10.9351 | 51.4038 | 11.2466 | 0.0781067 | 0.204103 | 0.110477 | 2(Loss) | true |
| strtoll/strtoull | 209.542 | 0.305676 | 118.217ms | 20000 | 30 | 2.32254e+06 | 91024.7 | 0.111119 | 24.1089 | 97.3892 | 24.4899 | 0.0888917 | 0.204485 | 0.0620533 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 582.967 | 0.150349 | 403.675ms | 200000 | 48 | 1.16148e+07 | 327180 | 0.143942 | 8.66207 | 31.9336 | 8.17826 | 0.082438 | 0.204431 | 0.118149 | 1(Win) | true |
| std::from_chars | 460.85 | 0.189701 | 507.068ms | 200000 | 48 | 2.95884e+07 | 413876 | 0.0479681 | 10.9546 | 51.3996 | 11.246 | 0.0779348 | 0.204261 | 0.116201 | 2(Loss) | true |
| strtoll/strtoull | 203.904 | 0.366665 | 1128.53ms | 200000 | 30 | 3.52914e+08 | 935414 | 0.265953 | 24.7632 | 97.3876 | 24.4907 | 0.098726 | 0.204532 | 0.0678738 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 352.734 | 1.15642 | 10.7874ms | 400 | 30 | 4692.26 | 1081.47 | 0.894849 | 14.8891 | 18.8345 | 3.22542 | 0.270417 | 0.1705 | 0.10675 | 1(Win) | true |
| std::from_chars | 306.746 | 1.27114 | 10.2861ms | 400 | 30 | 7496.73 | 1243.6 | 0.352564 | 17.0723 | 45.6768 | 10.7337 | 0.262667 | 0.175417 | 0.0936667 | 2(Loss) | true |
| strtoll/strtoull | 207.727 | 0.809428 | 11.0421ms | 400 | 30 | 6628.46 | 1836.4 | 0.85492 | 24.8972 | 72.7622 | 19.7132 | 0.258917 | 0.175417 | 0.0848333 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 370.507 | 0.309325 | 21.3738ms | 4000 | 48 | 48685.6 | 10295.9 | 0.365513 | 13.7126 | 19.0569 | 3.11852 | 0.260896 | 0.173661 | 0.0863958 | 1(Win) | true |
| std::from_chars | 327.429 | 0.458875 | 23.1541ms | 4000 | 30 | 85742.5 | 11650.5 | 1.07336 | 15.7998 | 45.1113 | 10.6165 | 0.253825 | 0.172817 | 0.08425 | 2(Loss) | true |
| strtoll/strtoull | 213.899 | 1.17743 | 30.2366ms | 4000 | 30 | 1.32279e+06 | 17834.1 | 0.250389 | 23.6465 | 72.2094 | 19.6075 | 0.258508 | 0.173042 | 0.0612333 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 374.058 | 0.17995 | 131.935ms | 40000 | 48 | 1.61655e+06 | 101981 | 0.0152823 | 13.5003 | 18.9997 | 3.10811 | 0.259589 | 0.173053 | 0.0820198 | 1(Win) | true |
| std::from_chars | 325.166 | 0.193261 | 150.362ms | 40000 | 48 | 2.46741e+06 | 117316 | 0.0662658 | 15.5358 | 45.0567 | 10.6064 | 0.252978 | 0.172548 | 0.0806672 | 2(Loss) | true |
| strtoll/strtoull | 231.931 | 0.400267 | 206.159ms | 40000 | 48 | 2.08037e+07 | 164475 | 0.74774 | 21.7824 | 72.1664 | 19.5994 | 0.256895 | 0.172716 | 0.0599979 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 377.209 | 0.104672 | 1228.36ms | 400000 | 48 | 5.37845e+07 | 1.01129e+06 | 0.122372 | 13.42 | 18.9954 | 3.10696 | 0.259601 | 0.173214 | 0.0850574 | 1(Win) | true |
| std::from_chars | 319.186 | 0.0914558 | 1443.06ms | 400000 | 30 | 3.58408e+07 | 1.19513e+06 | 0.0354339 | 15.8114 | 45.0516 | 10.6053 | 0.252902 | 0.172732 | 0.0809813 | 2(Loss) | true |
| strtoll/strtoull | 232.965 | 0.494663 | 1973ms | 400000 | 30 | 1.96824e+09 | 1.63745e+06 | 0.0635373 | 21.6888 | 72.1621 | 19.5987 | 0.257692 | 0.172787 | 0.0609893 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 488 | 1.66484 | 9.78866ms | 400 | 30 | 5080.98 | 781.7 | 0.599496 | 10.9128 | 19.6182 | 3.47558 | 0.139667 | 0.17425 | 0.11975 | 1(Win) | true |
| std::from_chars | 414.656 | 1.03151 | 9.91229ms | 400 | 30 | 2701.55 | 919.967 | 0.119713 | 12.7432 | 46.0384 | 10.7276 | 0.131667 | 0.17375 | 0.123917 | 2(Loss) | true |
| strtoll/strtoull | 250.257 | 1.10842 | 10.6833ms | 400 | 48 | 13702.6 | 1524.31 | 0.691941 | 20.7778 | 72.944 | 19.5722 | 0.132604 | 0.176563 | 0.0838542 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 520.986 | 0.464647 | 17.9058ms | 4000 | 30 | 34724.4 | 7322.07 | 0.0491423 | 9.76606 | 19.7998 | 3.36863 | 0.137008 | 0.172992 | 0.09005 | 1(Win) | true |
| std::from_chars | 435.895 | 0.647959 | 19.4074ms | 4000 | 48 | 154345 | 8751.42 | 0.577509 | 11.6593 | 45.4876 | 10.6175 | 0.130031 | 0.17288 | 0.0877135 | 2(Loss) | true |
| strtoll/strtoull | 254.342 | 0.938037 | 27.0795ms | 4000 | 48 | 950087 | 14998.3 | 0.701323 | 19.9091 | 72.4725 | 19.4856 | 0.128885 | 0.17313 | 0.0563542 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 523.634 | 0.293979 | 96.4106ms | 40000 | 30 | 1.376e+06 | 72850.4 | 0.0174417 | 9.64926 | 19.7511 | 3.35825 | 0.134589 | 0.172789 | 0.0892542 | 1(Win) | true |
| std::from_chars | 446.232 | 0.339423 | 112.143ms | 40000 | 48 | 4.0413e+06 | 85486.8 | 0.454675 | 11.318 | 45.4327 | 10.6066 | 0.128732 | 0.17251 | 0.088474 | 2(Loss) | true |
| strtoll/strtoull | 264.321 | 1.44752 | 183.446ms | 40000 | 30 | 1.30927e+08 | 144321 | 0.465731 | 19.1849 | 72.4207 | 19.4756 | 0.128389 | 0.172652 | 0.0590617 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 520.667 | 0.108742 | 893.49ms | 400000 | 30 | 1.90422e+07 | 732656 | 0.187734 | 9.69626 | 19.7445 | 3.3572 | 0.135335 | 0.172861 | 0.0904313 | 1(Win) | true |
| std::from_chars | 431.373 | 0.107663 | 1068.13ms | 400000 | 30 | 2.71939e+07 | 884316 | 0.0556384 | 11.7054 | 45.4257 | 10.6051 | 0.127328 | 0.172721 | 0.0891234 | 2(Loss) | true |
| strtoll/strtoull | 281.661 | 0.340164 | 1609.61ms | 400000 | 30 | 6.36744e+08 | 1.35436e+06 | 0.00785058 | 17.9335 | 72.4102 | 19.473 | 0.129419 | 0.172723 | 0.0649464 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 513.096 | 1.53688 | 9.78545ms | 400 | 30 | 3916.74 | 743.467 | 0.308407 | 10.412 | 18.0941 | 2.97942 | 0.1425 | 0.174167 | 0.0965 | 1(Win) | true |
| std::from_chars | 404.114 | 1.07718 | 9.9477ms | 400 | 30 | 3101.76 | 943.967 | 0.907289 | 13.0889 | 45.2872 | 10.7271 | 0.13825 | 0.176417 | 0.0935 | 2(Loss) | true |
| strtoll/strtoull | 255.852 | 0.765746 | 10.6218ms | 400 | 48 | 6256.83 | 1490.98 | 0.930512 | 20.3199 | 72.544 | 19.8522 | 0.132344 | 0.17724 | 0.0884375 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 540.267 | 0.448801 | 17.4742ms | 4000 | 30 | 30125.4 | 7060.77 | 0.0572149 | 9.41968 | 18.3055 | 2.86868 | 0.136158 | 0.173517 | 0.0899917 | 1(Win) | true |
| std::from_chars | 437.887 | 0.918699 | 19.4213ms | 4000 | 48 | 307457 | 8711.6 | 0.0739503 | 11.5708 | 44.7462 | 10.6198 | 0.127589 | 0.173125 | 0.0896979 | 2(Loss) | true |
| strtoll/strtoull | 257.94 | 1.13408 | 26.313ms | 4000 | 30 | 843904 | 14789.1 | 0.583373 | 19.5919 | 71.9733 | 19.7358 | 0.129033 | 0.173108 | 0.0585167 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 530.343 | 0.391959 | 94.7325ms | 40000 | 30 | 2.38457e+06 | 71928.9 | 0.148583 | 9.55475 | 18.2537 | 2.85784 | 0.134514 | 0.172932 | 0.0910767 | 1(Win) | true |
| std::from_chars | 443.154 | 0.33057 | 112.113ms | 40000 | 30 | 2.42917e+06 | 86080.6 | 0.0858896 | 11.4013 | 44.6796 | 10.6058 | 0.130771 | 0.172521 | 0.088655 | 2(Loss) | true |
| strtoll/strtoull | 289.319 | 1.0911 | 168.324ms | 40000 | 30 | 6.20897e+07 | 131851 | 0.0747866 | 17.7847 | 71.9254 | 19.727 | 0.130395 | 0.17255 | 0.0663492 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 533.675 | 0.121599 | 870.227ms | 400000 | 48 | 3.62635e+07 | 714798 | 0.0642519 | 9.45894 | 18.2456 | 2.85701 | 0.134683 | 0.17318 | 0.0911917 | 1(Win) | true |
| std::from_chars | 434.235 | 0.125192 | 1067.59ms | 400000 | 30 | 3.62866e+07 | 878487 | 0.0438938 | 11.6288 | 44.68 | 10.6063 | 0.12808 | 0.1727 | 0.0891202 | 2(Loss) | true |
| strtoll/strtoull | 296.334 | 0.416649 | 1549.77ms | 400000 | 30 | 8.63015e+08 | 1.28729e+06 | 0.266038 | 17.0894 | 71.9139 | 19.7241 | 0.133665 | 0.172733 | 0.0747743 | 3(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 705.092 | 1.42093 | 9.46466ms | 400 | 48 | 2836.7 | 541.021 | 1.57889 | 7.72891 | 17.5898 | 2.66453 | 0.0756771 | 0.175208 | 0.106406 | 1(Win) | true |
| std::from_chars | 460.36 | 1.14932 | 9.77021ms | 400 | 30 | 2721 | 828.633 | 1.53991 | 11.5572 | 44.5981 | 10.2894 | 0.0706667 | 0.173333 | 0.120917 | 2(Loss) | true |
| strtoll/strtoull | 276.822 | 0.870413 | 10.4551ms | 400 | 30 | 4316.1 | 1378.03 | 0.283815 | 18.8263 | 72.5961 | 19.7235 | 0.0715833 | 0.177 | 0.08325 | 3(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 772.42 | 0.755103 | 14.9491ms | 4000 | 30 | 41720.2 | 4938.63 | 0.0917091 | 6.60198 | 17.0509 | 2.56514 | 0.0664083 | 0.173508 | 0.101117 | 1(Win) | true |
| std::from_chars | 497.007 | 0.387523 | 18.2744ms | 4000 | 48 | 42465 | 7675.33 | 0.413466 | 10.2324 | 44.0853 | 10.1897 | 0.0663542 | 0.172859 | 0.0908333 | 2(Loss) | true |
| strtoll/strtoull | 293.681 | 0.997769 | 24.666ms | 4000 | 30 | 503907 | 12989.3 | 0.882966 | 17.2861 | 72.076 | 19.6222 | 0.0729167 | 0.172775 | 0.0613583 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 776.064 | 0.500755 | 68.7837ms | 40000 | 30 | 1.8176e+06 | 49154.4 | 0.523075 | 6.51451 | 16.9948 | 2.55472 | 0.0666158 | 0.172677 | 0.0979017 | 1(Win) | true |
| std::from_chars | 516.652 | 0.298174 | 97.9969ms | 40000 | 48 | 2.32652e+06 | 73835 | 0.0519808 | 9.77714 | 44.0359 | 10.1803 | 0.0631208 | 0.172682 | 0.0904068 | 2(Loss) | true |
| strtoll/strtoull | 299.821 | 0.524053 | 161.691ms | 40000 | 30 | 1.33373e+07 | 127232 | 0.0862584 | 16.8519 | 72.0299 | 19.614 | 0.0784967 | 0.172608 | 0.0659892 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 758.971 | 0.200472 | 613.219ms | 400000 | 30 | 3.04577e+07 | 502614 | 0.118254 | 6.65588 | 16.9896 | 2.55357 | 0.0646857 | 0.172915 | 0.102318 | 1(Win) | true |
| std::from_chars | 497.758 | 0.117489 | 934.295ms | 400000 | 30 | 2.43221e+07 | 766377 | 0.472696 | 10.1569 | 44.0263 | 10.1782 | 0.0642596 | 0.172634 | 0.0909921 | 2(Loss) | true |
| strtoll/strtoull | 293.928 | 0.210288 | 1567.6ms | 400000 | 48 | 3.57526e+08 | 1.29783e+06 | 0.257786 | 17.2294 | 72.0222 | 19.6122 | 0.0722113 | 0.172707 | 0.0656393 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 786.265 | 1.13867 | 10.0426ms | 800 | 30 | 3662.37 | 970.333 | 1.09069 | 6.72187 | 15.4689 | 1.75446 | 0.079625 | 0.127167 | 0.0747917 | 1(Win) | true |
| std::from_chars | 548.573 | 0.571272 | 10.4939ms | 800 | 48 | 3029.97 | 1390.77 | 0.231648 | 9.50479 | 39.845 | 9.35865 | 0.0807292 | 0.127708 | 0.0688021 | 2(Loss) | true |
| strtoll/strtoull | 277.301 | 1.2197 | 12.0781ms | 800 | 30 | 33783.2 | 2751.3 | 0.896909 | 18.528 | 59.8772 | 16.9073 | 0.184042 | 0.127083 | 0.0587083 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 874.275 | 0.247819 | 19.6808ms | 8000 | 48 | 22448.9 | 8726.54 | 0.818223 | 5.92295 | 15.3125 | 1.70026 | 0.0784766 | 0.126128 | 0.0671432 | 1(Win) | true |
| std::from_chars | 562.021 | 0.393619 | 25.3941ms | 8000 | 30 | 85654.3 | 13574.9 | 0.233708 | 9.02645 | 39.5714 | 9.30565 | 0.0775917 | 0.126104 | 0.0617292 | 2(Loss) | true |
| strtoll/strtoull | 319.377 | 2.77597 | 38.3539ms | 8000 | 30 | 1.31924e+07 | 23888.4 | 0.833405 | 15.8659 | 59.6028 | 16.8531 | 0.148296 | 0.125746 | 0.0423958 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 894.427 | 0.394963 | 112.22ms | 80000 | 48 | 5.44809e+06 | 85299.2 | 0.0422808 | 5.64722 | 15.1591 | 1.69461 | 0.0780427 | 0.126145 | 0.0669591 | 1(Win) | true |
| std::from_chars | 558.552 | 0.329887 | 173.096ms | 80000 | 30 | 6.09123e+06 | 136592 | 0.0193238 | 9.02527 | 39.5437 | 9.30003 | 0.0776696 | 0.125624 | 0.0612771 | 2(Loss) | true |
| strtoll/strtoull | 322.597 | 0.931541 | 283.547ms | 80000 | 48 | 2.32972e+08 | 236499 | 1.03031 | 15.6738 | 59.5772 | 16.848 | 0.160207 | 0.125502 | 0.0409026 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 891.671 | 0.129905 | 1035.99ms | 800000 | 30 | 3.70633e+07 | 855629 | 0.180461 | 5.66099 | 15.1566 | 1.69413 | 0.0778387 | 0.126172 | 0.068286 | 1(Win) | true |
| std::from_chars | 564.551 | 0.0957705 | 1635.23ms | 800000 | 48 | 8.04041e+07 | 1.35141e+06 | 0.0878698 | 8.95302 | 39.5418 | 9.29978 | 0.078138 | 0.125509 | 0.0618042 | 2(Loss) | true |
| strtoll/strtoull | 379.243 | 0.506294 | 2440.41ms | 800000 | 30 | 3.11223e+09 | 2.01174e+06 | 1.32234 | 13.3166 | 59.5732 | 16.8469 | 0.108528 | 0.125563 | 0.0504819 | 3(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1067.3 | 1.49918 | 9.56439ms | 800 | 30 | 3445.39 | 714.833 | 0.0980209 | 5.03458 | 16.0754 | 1.93467 | 0.0185 | 0.127375 | 0.0822083 | 1(Win) | true |
| std::from_chars | 698.812 | 0.827839 | 10.1004ms | 800 | 30 | 2450.6 | 1091.77 | 0.236797 | 7.50975 | 39.989 | 9.34812 | 0.017625 | 0.127333 | 0.070625 | 2(Loss) | true |
| strtoll/strtoull | 315.286 | 0.815515 | 11.7514ms | 800 | 30 | 11683 | 2419.83 | 0.547983 | 16.3387 | 59.9908 | 16.8418 | 0.121833 | 0.128542 | 0.0527083 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1174.37 | 0.469569 | 16.8987ms | 8000 | 30 | 27918.2 | 6496.57 | 0.0515391 | 4.3359 | 15.9279 | 1.88083 | 0.0159 | 0.125812 | 0.0749083 | 1(Win) | true |
| std::from_chars | 738.505 | 0.185949 | 21.6232ms | 8000 | 30 | 11070.9 | 10330.9 | 0.220533 | 6.87651 | 39.7569 | 9.30504 | 0.0145042 | 0.126012 | 0.0655042 | 2(Loss) | true |
| strtoll/strtoull | 346.351 | 0.58456 | 35.6116ms | 8000 | 30 | 497423 | 22027.9 | 0.126497 | 14.6279 | 59.7266 | 16.7899 | 0.123454 | 0.125612 | 0.0412958 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1226.66 | 0.500095 | 84.7603ms | 80000 | 30 | 2.90239e+06 | 62196.3 | 0.270824 | 4.11776 | 15.6651 | 1.76406 | 0.01534 | 0.125991 | 0.07533 | 1(Win) | true |
| std::from_chars | 726.899 | 0.333 | 136.874ms | 80000 | 48 | 5.86357e+06 | 104958 | 0.0317291 | 6.94582 | 39.7325 | 9.30047 | 0.0140117 | 0.125611 | 0.0643146 | 2(Loss) | true |
| strtoll/strtoull | 356.118 | 0.315656 | 265.708ms | 80000 | 30 | 1.37196e+07 | 214238 | 0.170022 | 14.1762 | 59.7013 | 16.7851 | 0.124567 | 0.125469 | 0.0421654 | 3(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1230.63 | 0.137496 | 760.679ms | 800000 | 30 | 2.17985e+07 | 619958 | 0.0670436 | 4.10214 | 15.6625 | 1.76349 | 0.0151707 | 0.125774 | 0.0759678 | 1(Win) | true |
| std::from_chars | 735.379 | 0.186055 | 1255.32ms | 800000 | 30 | 1.1178e+08 | 1.03748e+06 | 0.205938 | 6.87792 | 39.7288 | 9.29965 | 0.0137232 | 0.12547 | 0.0686645 | 2(Loss) | true |
| strtoll/strtoull | 358.733 | 0.216068 | 2554.61ms | 800000 | 30 | 6.33491e+08 | 2.12676e+06 | 0.254305 | 14.0735 | 59.6989 | 16.7846 | 0.123536 | 0.125523 | 0.0401775 | 3(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1114.56 | 1.42753 | 9.74096ms | 800 | 48 | 4583.36 | 684.521 | 0.500872 | 4.82297 | 14.8405 | 1.57331 | 0.0185156 | 0.127031 | 0.0830469 | 1(Win) | true |
| std::from_chars | 708.108 | 0.649016 | 10.0828ms | 800 | 30 | 1466.94 | 1077.43 | 0.139026 | 7.41546 | 39.6088 | 9.34667 | 0.0182917 | 0.127042 | 0.0700417 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 352.723 | 3.16213 | 11.3901ms | 800 | 30 | 140344 | 2163 | 4.31637 | 14.6168 | 59.725 | 16.962 | 0.0923333 | 0.127292 | 0.0597917 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1228.63 | 0.525147 | 16.4965ms | 8000 | 30 | 31902.1 | 6209.67 | 0.0986733 | 4.14603 | 14.6957 | 1.51929 | 0.0155875 | 0.126183 | 0.0774542 | 1(Win) | true |
| std::from_chars | 728.415 | 0.741893 | 21.4617ms | 8000 | 30 | 181145 | 10474 | 0.328623 | 6.973 | 39.3854 | 9.30601 | 0.013875 | 0.126067 | 0.0701 | 2(Loss) | true |
| strtoll/strtoull | 360.096 | 0.598487 | 34.6689ms | 8000 | 30 | 482364 | 21187.1 | 0.913697 | 14.3387 | 59.4806 | 16.9161 | 0.124238 | 0.125812 | 0.0483708 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1263.91 | 0.52651 | 81.9048ms | 80000 | 30 | 3.0303e+06 | 60363.7 | 0.424566 | 3.99676 | 14.6525 | 1.62537 | 0.0156908 | 0.125815 | 0.0758467 | 1(Win) | true |
| std::from_chars | 729.213 | 0.399312 | 134.605ms | 80000 | 30 | 5.23621e+06 | 104625 | 0.0811809 | 6.92567 | 39.3561 | 9.30007 | 0.0136562 | 0.125595 | 0.0697312 | 2(Loss) | true |
| strtoll/strtoull | 501.907 | 1.50388 | 194.884ms | 80000 | 30 | 1.56777e+08 | 152008 | 1.10801 | 10.0619 | 59.4508 | 16.9099 | 0.0248142 | 0.125536 | 0.0594275 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 1270.22 | 0.191944 | 744.506ms | 800000 | 30 | 3.98743e+07 | 600637 | 0.173517 | 4.04809 | 14.6513 | 1.62483 | 0.0151956 | 0.125983 | 0.0775309 | 1(Win) | true |
| std::from_chars | 739.149 | 0.151273 | 1254.54ms | 800000 | 30 | 7.31407e+07 | 1.03219e+06 | 0.022585 | 6.8867 | 39.3544 | 9.29982 | 0.0141172 | 0.125489 | 0.0652987 | 2(Loss) | true |
| strtoll/strtoull | 496.838 | 1.19923 | 1874.43ms | 800000 | 30 | 1.01736e+10 | 1.53559e+06 | 0.269384 | 10.1578 | 59.4497 | 16.9099 | 0.0235693 | 0.125508 | 0.0594283 | 3(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 897.998 | 1.83589 | 9.8492ms | 800 | 30 | 7298.66 | 849.6 | 0.425532 | 5.92267 | 14.5104 | 1.62129 | 0.073875 | 0.142 | 0.0844583 | 1(Win) | true |
| std::from_chars | 582.367 | 0.595789 | 10.3859ms | 800 | 30 | 1827.65 | 1310.07 | 0.441165 | 8.96317 | 41.2274 | 9.05333 | 0.0732917 | 0.14325 | 0.0830833 | 2(Loss) | true |
| strtoll/strtoull | 327.752 | 0.39725 | 11.5793ms | 800 | 48 | 4104.47 | 2327.79 | 0.928172 | 15.999 | 59.2439 | 17.1078 | 0.126432 | 0.143151 | 0.060651 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 945.012 | 0.549248 | 18.7613ms | 8000 | 30 | 58988 | 8073.33 | 1.05845 | 5.37952 | 14.4007 | 1.56762 | 0.0679583 | 0.141579 | 0.0797333 | 1(Win) | true |
| std::from_chars | 600.513 | 0.253382 | 24.3773ms | 8000 | 30 | 31089.1 | 12704.8 | 0.0913875 | 8.45512 | 41.2234 | 9.00409 | 0.0668542 | 0.141629 | 0.0751583 | 2(Loss) | true |
| strtoll/strtoull | 320.709 | 0.312819 | 37.7606ms | 8000 | 30 | 166137 | 23789.2 | 0.135819 | 15.8039 | 58.9741 | 17.0541 | 0.125196 | 0.141421 | 0.0508875 | 3(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 959.894 | 0.390263 | 105.406ms | 80000 | 48 | 4.61839e+06 | 79481.7 | 0.42886 | 5.26103 | 14.4328 | 1.61874 | 0.0677536 | 0.141459 | 0.0802487 | 1(Win) | true |
| std::from_chars | 604.78 | 0.379699 | 161.024ms | 80000 | 30 | 6.88314e+06 | 126152 | 0.0760146 | 8.35417 | 40.946 | 8.99875 | 0.0671371 | 0.141154 | 0.0725517 | 2(Loss) | true |
| strtoll/strtoull | 327.194 | 0.264224 | 288.679ms | 80000 | 48 | 1.82202e+07 | 233176 | 0.108394 | 15.429 | 58.9498 | 17.0496 | 0.12501 | 0.141195 | 0.0514935 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Instructions/Byte | Branches/Byte | Branch Misses/Byte | Cache References/Byte | Cache Misses/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | -------- | --------- |
| vn::from_chars | 991.4 | 0.313818 | 936.756ms | 800000 | 30 | 1.74968e+08 | 769557 | 0.438066 | 5.09569 | 14.3722 | 1.56099 | 0.0675562 | 0.141811 | 0.0870678 | 1(Win) | true |
| std::from_chars | 605.126 | 0.0663883 | 1525.04ms | 800000 | 30 | 2.1018e+07 | 1.26079e+06 | 0.04141 | 8.34244 | 40.9446 | 8.99856 | 0.066663 | 0.141181 | 0.0730014 | 2(Loss) | true |
| strtoll/strtoull | 333.296 | 0.0860744 | 2771.49ms | 800000 | 48 | 1.86341e+08 | 2.28907e+06 | 0.141353 | 15.1445 | 58.9446 | 17.0483 | 0.124943 | 0.141242 | 0.047472 | 3(Loss) | true |
