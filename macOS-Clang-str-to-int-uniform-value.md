# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.3 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 135.42 | 1.53555 | 0.933584ms | 100 | 30 | 3508.19 | 704.233 | 0.765618 | 1(Win) | true |
| vn::from_chars | 110.914 | 1.79097 | 1.10467ms | 100 | 30 | 7114.21 | 859.833 | 0.510443 | 2(Loss) | true |
| strtoll/strtoull | 53.4801 | 1.64426 | 2.12821ms | 100 | 30 | 25791.5 | 1783.23 | 0.771614 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 119.356 | 4.86498 | 14.8386ms | 1000 | 30 | 4.53313e+06 | 7990.2 | 1.64173 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 112.935 | 1.46985 | 11.0677ms | 1000 | 30 | 462175 | 8444.43 | 1.75569 | 1(Tie) | true |
| strtoll/strtoull | 31.6793 | 7.62854 | 28.0072ms | 1000 | 30 | 1.58217e+08 | 30104 | 4.35352 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 129.722 | 2.97265 | 93.9434ms | 10000 | 30 | 1.43279e+08 | 73516.7 | 2.60195 | 1(Win) | true |
| vn::from_chars | 107.944 | 1.19642 | 102.062ms | 10000 | 48 | 5.363e+07 | 88348.9 | 1.38239 | 2(Loss) | true |
| strtoll/strtoull | 62.8063 | 1.59649 | 197.744ms | 10000 | 48 | 2.82076e+08 | 151844 | 0.433117 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars DID NOT CONVERGE | 130.265 | 2.28443 | 1085.89ms | 100000 | 48 | 1.34258e+10 | 732103 | 6.70196 | -(Win) | false |
| vn::from_chars | 85.8807 | 0.307778 | 1224.55ms | 100000 | 30 | 3.50433e+08 | 1.11046e+06 | 0.829794 | 2(Loss) | true |
| strtoll/strtoull | 41.4187 | 5.38767 | 2853.48ms | 100000 | 30 | 4.6167e+11 | 2.30252e+06 | 2.43953 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 196.533 | 1.47769 | 0.697542ms | 100 | 48 | 2467.98 | 485.25 | 1.23435 | 1(Win) | true |
| std::from_chars | 123.456 | 2.19975 | 0.989291ms | 100 | 48 | 13860 | 772.479 | 0.140583 | 2(Loss) | true |
| strtoll/strtoull | 98.9357 | 2.38995 | 1.29392ms | 100 | 30 | 15921.8 | 963.933 | 0.305238 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 204.413 | 1.38854 | 5.54904ms | 1000 | 30 | 125899 | 4665.43 | 2.80347 | 1(Win) | true |
| std::from_chars | 122.68 | 1.99546 | 12.1077ms | 1000 | 30 | 721878 | 7773.7 | 3.11588 | 2(Loss) | true |
| strtoll/strtoull | 87.049 | 1.82434 | 12.8742ms | 1000 | 30 | 1.19841e+06 | 10955.6 | 0.804799 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 216.648 | 1.41405 | 52.4383ms | 10000 | 30 | 1.16237e+07 | 44019.5 | 3.20803 | 1(Win) | true |
| std::from_chars | 138.442 | 1.42089 | 86.5265ms | 10000 | 30 | 2.87414e+07 | 68886.3 | 0.507061 | 2(Loss) | true |
| strtoll/strtoull | 97.9522 | 0.748189 | 121.273ms | 10000 | 48 | 2.54704e+07 | 97361.2 | 2.84404 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 134.28 | 0.927915 | 872.681ms | 100000 | 30 | 1.30292e+09 | 710214 | 0.712263 | 1(Win) | true |
| vn::from_chars | 120.641 | 2.80504 | 963.176ms | 100000 | 48 | 2.3601e+10 | 790507 | 1.12829 | 2(Loss) | true |
| strtoll/strtoull | 90.4473 | 0.821754 | 1240.6ms | 100000 | 30 | 2.25223e+09 | 1.0544e+06 | 0.89099 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 206.88 | 1.43313 | 0.6245ms | 100 | 48 | 2094.96 | 460.979 | 2.11456 | 1(Win) | true |
| std::from_chars | 136.233 | 1.40964 | 0.9225ms | 100 | 30 | 2921.27 | 700.033 | 2.89004 | 2(Loss) | true |
| strtoll/strtoull | 78.2085 | 0.834202 | 1.3575ms | 100 | 30 | 3104.25 | 1219.4 | 1.57133 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 239.164 | 0.565256 | 4.84588ms | 1000 | 30 | 15241.2 | 3987.53 | 0.0342617 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 128.971 | 1.10692 | 10.009ms | 1000 | 30 | 200988 | 7394.47 | 17.4817 | -(Loss) | false |
| strtoll/strtoull | 103.411 | 0.235345 | 11.468ms | 1000 | 30 | 14131.7 | 9222.17 | 0.421113 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 244.358 | 0.275743 | 47.3339ms | 10000 | 30 | 347438 | 39027.8 | 0.142515 | 1(Win) | true |
| std::from_chars | 154.323 | 0.534242 | 74.8047ms | 10000 | 30 | 3.2699e+06 | 61797.2 | 0.0920983 | 2(Loss) | true |
| strtoll/strtoull | 107.544 | 0.0791366 | 107.064ms | 10000 | 30 | 147743 | 88677.8 | 0.509432 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 243.621 | 0.476302 | 484.365ms | 100000 | 30 | 1.04293e+08 | 391458 | 0.109147 | 1(Win) | true |
| std::from_chars | 154.001 | 0.346776 | 970.354ms | 100000 | 30 | 1.38348e+08 | 619267 | 4.59491 | 2(Loss) | true |
| strtoll/strtoull | 100.109 | 1.03239 | 1123.02ms | 100000 | 48 | 4.6429e+09 | 952640 | 3.9393 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 167.497 | 1.57775 | 0.734125ms | 100 | 30 | 2420.93 | 569.367 | 0.489368 | 1(Win) | true |
| std::from_chars | 144.562 | 1.13738 | 0.842ms | 100 | 30 | 1688.98 | 659.7 | 0.422642 | 2(Loss) | true |
| strtoll/strtoull | 94.5761 | 0.50261 | 1.26192ms | 100 | 30 | 770.585 | 1008.37 | 0.798098 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 136.049 | 2.53592 | 8.85417ms | 1000 | 30 | 947981 | 7009.77 | 1.96173 | 1(Win) | true |
| vn::from_chars DID NOT CONVERGE | 105.974 | 6.08885 | 11.6898ms | 1000 | 48 | 1.44117e+07 | 8999.15 | 18.7531 | -(Loss) | false |
| strtoll/strtoull | 92.0802 | 0.233833 | 12.7616ms | 1000 | 30 | 17595.5 | 10357 | 0.0533975 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 178.48 | 0.52444 | 65.6055ms | 10000 | 30 | 2.35579e+06 | 53433.2 | 0.427115 | 1(Win) | true |
| std::from_chars | 137.799 | 0.298958 | 86.124ms | 10000 | 48 | 2.05479e+06 | 69207.4 | 3.17718 | 2(Loss) | true |
| strtoll/strtoull | 93.0767 | 0.916927 | 134.972ms | 10000 | 30 | 2.64794e+07 | 102461 | 0.0337047 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 183.393 | 0.359913 | 689.515ms | 100000 | 30 | 1.05088e+08 | 520018 | 0.716886 | 1(Win) | true |
| std::from_chars | 139.917 | 0.450819 | 895.756ms | 100000 | 30 | 2.8326e+08 | 681600 | 0.996777 | 2(Loss) | true |
| strtoll/strtoull | 97.4428 | 0.310162 | 1394.12ms | 100000 | 30 | 2.7644e+08 | 978701 | 0.493709 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 192.351 | 1.19733 | 1.41667ms | 200 | 30 | 4228.87 | 991.6 | 1.01323 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 189.685 | 1.91252 | 1.2885ms | 200 | 30 | 11094.9 | 1005.53 | 0.694305 | 1(Tie) | true |
| strtoll/strtoull | 99.3014 | 2.05166 | 2.23996ms | 200 | 30 | 46588.6 | 1920.77 | 4.43154 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 198.423 | 1.23713 | 10.5952ms | 2000 | 30 | 424253 | 9612.53 | 0.816669 | 1(Win) | true |
| vn::from_chars STATISTICAL TIE | 147.208 | 6.16157 | 15.6565ms | 2000 | 30 | 1.91206e+07 | 12956.8 | 4.06349 | 2(Tie) | true |
| strtoll/strtoull STATISTICAL TIE | 130.902 | 0.211587 | 17.9578ms | 2000 | 30 | 28514.5 | 14570.8 | 0.123611 | 2(Tie) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 201.156 | 0.875353 | 119.584ms | 20000 | 30 | 2.06673e+07 | 94819.5 | 4.19044 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 199.472 | 0.87016 | 115.607ms | 20000 | 48 | 3.32304e+07 | 95619.9 | 1.50739 | 1(Tie) | true |
| strtoll/strtoull | 129.306 | 0.405925 | 198.663ms | 20000 | 30 | 1.07557e+07 | 147507 | 0.782893 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 180.08 | 1.94737 | 1325.41ms | 200000 | 30 | 1.27628e+10 | 1.05917e+06 | 0.626514 | 1(Win) | true |
| strtoll/strtoull | 78.4404 | 0.516773 | 2237.7ms | 200000 | 30 | 4.73697e+09 | 2.43159e+06 | 3.60829 | 2(Loss) | true |
| std::from_chars DID NOT CONVERGE | 54.3912 | 1.32556 | 5516.93ms | 200000 | 30 | 6.48221e+10 | 3.50672e+06 | 15.1405 | -(Loss) | false |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 298.552 | 2.28877 | 0.852291ms | 200 | 30 | 6414.26 | 638.867 | 0.556139 | 1(Win) | true |
| std::from_chars | 195.146 | 0.877877 | 1.26183ms | 200 | 48 | 3533.86 | 977.396 | 0.170656 | 2(Loss) | true |
| strtoll/strtoull | 121.322 | 8.84253 | 2.03483ms | 200 | 30 | 579767 | 1572.13 | 2.26366 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 320.861 | 0.502037 | 7.24188ms | 2000 | 30 | 26718.9 | 5944.47 | 1.1096 | 1(Win) | true |
| std::from_chars | 214.849 | 0.226188 | 11.3737ms | 2000 | 48 | 19354 | 8877.6 | 0.484587 | 2(Loss) | true |
| strtoll/strtoull | 150.961 | 1.00682 | 15.5347ms | 2000 | 30 | 485460 | 12634.7 | 0.459831 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 321.976 | 1.18618 | 87.2664ms | 20000 | 30 | 1.48128e+07 | 59238.9 | 2.41202 | 1(Win) | true |
| std::from_chars | 194.603 | 1.35518 | 171.986ms | 20000 | 30 | 5.2927e+07 | 98012.5 | 3.21875 | 2(Loss) | true |
| strtoll/strtoull | 152.557 | 1.17322 | 179.883ms | 20000 | 30 | 6.45461e+07 | 125025 | 0.19347 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 187.736 | 6.65835 | 1795.31ms | 200000 | 30 | 1.37284e+11 | 1.01597e+06 | 9.70732 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 172.393 | 0.941736 | 1931.12ms | 200000 | 48 | 5.21099e+09 | 1.1064e+06 | 14.8622 | -(Tie) | false |
| strtoll/strtoull DID NOT CONVERGE | 117.403 | 1.01629 | 2234.33ms | 200000 | 30 | 8.17821e+09 | 1.62462e+06 | 7.78138 | -(Loss) | false |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 288.526 | 2.48664 | 0.8675ms | 200 | 30 | 8106.55 | 661.067 | 5.32689 | -(Win) | false |
| std::from_chars | 184.348 | 2.13444 | 1.4415ms | 200 | 48 | 23409.6 | 1034.65 | 0.00523501 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 148.648 | 1.33524 | 1.72683ms | 200 | 30 | 8806.05 | 1283.13 | 10.8213 | -(Loss) | false |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 318.486 | 0.533906 | 7.43879ms | 2000 | 30 | 30671.2 | 5988.8 | 0.279074 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 213.044 | 0.331921 | 12.3959ms | 2000 | 30 | 26491.9 | 8952.83 | 7.1713 | -(Loss) | false |
| strtoll/strtoull | 155.738 | 0.370738 | 16.4094ms | 2000 | 30 | 61848.4 | 12247.2 | 0.810804 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 309.572 | 1.35852 | 74.9053ms | 20000 | 30 | 2.10179e+07 | 61612.4 | 0.573611 | 1(Win) | true |
| std::from_chars | 195.904 | 1.7425 | 114.666ms | 20000 | 30 | 8.63457e+07 | 97361.3 | 2.36157 | 2(Loss) | true |
| strtoll/strtoull | 150.784 | 0.788271 | 184.874ms | 20000 | 48 | 4.77247e+07 | 126496 | 2.30639 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 303.835 | 0.668031 | 896.814ms | 200000 | 30 | 5.27594e+08 | 627758 | 1.34713 | 1(Win) | true |
| strtoll/strtoull | 148.589 | 0.71633 | 1684.72ms | 200000 | 30 | 2.5365e+09 | 1.28364e+06 | 0.128154 | 2(Loss) | true |
| std::from_chars | 140.498 | 2.55447 | 1424.32ms | 200000 | 30 | 3.60781e+10 | 1.35756e+06 | 2.95635 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 405.273 | 1.75687 | 0.705958ms | 200 | 30 | 2051 | 470.633 | 0.619413 | 1(Win) | true |
| std::from_chars | 292.838 | 0.943888 | 1.35537ms | 200 | 30 | 1133.89 | 651.333 | 1.2632 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 159.865 | 0.614606 | 1.6715ms | 200 | 30 | 1613.13 | 1193.1 | 11.8008 | -(Loss) | false |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 435.272 | 0.387219 | 5.39675ms | 2000 | 30 | 8637.21 | 4381.97 | 0.126116 | 1(Win) | true |
| std::from_chars | 304.971 | 0.395416 | 7.69262ms | 2000 | 30 | 18347.3 | 6254.2 | 2.86121 | 2(Loss) | true |
| strtoll/strtoull | 158.23 | 1.62737 | 14.5584ms | 2000 | 30 | 1.15446e+06 | 12054.3 | 2.98273 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 414.503 | 2.56588 | 56.967ms | 20000 | 30 | 4.18216e+07 | 46015.3 | 0.443797 | 1(Win) | true |
| std::from_chars | 278.626 | 2.99922 | 79.538ms | 20000 | 30 | 1.26461e+08 | 68455.5 | 1.05167 | 2(Loss) | true |
| strtoll/strtoull | 155.392 | 1.42679 | 148.866ms | 20000 | 30 | 9.20126e+07 | 122745 | 1.50237 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 371.64 | 1.43402 | 624.921ms | 200000 | 30 | 1.62497e+09 | 513225 | 0.975538 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 187.198 | 0.951938 | 1519.1ms | 200000 | 30 | 2.82225e+09 | 1.01889e+06 | 6.61296 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 166.841 | 0.214062 | 1529.3ms | 200000 | 30 | 1.7966e+08 | 1.14321e+06 | 7.45529 | -(Loss) | false |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 299.184 | 1.91838 | 1.61733ms | 400 | 30 | 17948.7 | 1275.03 | 0.970849 | 1(Win) | true |
| std::from_chars | 232.4 | 0.951927 | 2.09175ms | 400 | 48 | 11719.2 | 1641.44 | 0.502327 | 2(Loss) | true |
| strtoll/strtoull | 163.298 | 1.50992 | 3.07917ms | 400 | 30 | 37324 | 2336.03 | 0.563762 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 321.728 | 1.43409 | 14.6985ms | 4000 | 30 | 867398 | 11856.9 | 3.07685 | 1(Win) | true |
| std::from_chars | 246.065 | 0.243904 | 23.2447ms | 4000 | 30 | 42892.4 | 15502.8 | 4.07395 | 2(Loss) | true |
| strtoll/strtoull | 171.1 | 0.619889 | 26.7018ms | 4000 | 48 | 916829 | 22295.1 | 0.195754 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 335.969 | 0.418052 | 147.016ms | 40000 | 30 | 6.75933e+06 | 113543 | 0.775434 | 1(Win) | true |
| std::from_chars | 237.217 | 0.768165 | 198.92ms | 40000 | 48 | 7.32455e+07 | 160811 | 0.276967 | 2(Loss) | true |
| strtoll/strtoull | 174.194 | 0.490055 | 265.351ms | 40000 | 48 | 5.52822e+07 | 218991 | 0.270717 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 52.0271 | 4.17253 | 8474.89ms | 400000 | 30 | 2.8079e+12 | 7.33214e+06 | 1.76051 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 48.4771 | 5.08589 | 8717.54ms | 400000 | 30 | 4.80508e+12 | 7.86906e+06 | 1.07649 | 1(Tie) | true |
| strtoll/strtoull | 35.5562 | 5.91685 | 10283.9ms | 400000 | 48 | 1.93425e+13 | 1.07286e+07 | 2.21252 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 439.448 | 1.08449 | 1.11662ms | 400 | 30 | 2658.75 | 868.067 | 1.83347 | 1(Win) | true |
| std::from_chars | 235.766 | 0.55248 | 2.01821ms | 400 | 30 | 2397.24 | 1618 | 0.256858 | 2(Loss) | true |
| strtoll/strtoull | 206.037 | 0.39834 | 2.32008ms | 400 | 30 | 1631.77 | 1851.47 | 0.00967608 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 440.951 | 2.46892 | 10.1776ms | 4000 | 48 | 2.18974e+06 | 8651.06 | 1.33481 | 1(Win) | true |
| std::from_chars | 244.227 | 0.288515 | 19.2371ms | 4000 | 30 | 60924.5 | 15619.5 | 0.177667 | 2(Loss) | true |
| strtoll/strtoull | 206.634 | 1.13026 | 22.1457ms | 4000 | 30 | 1.30615e+06 | 18461.1 | 0.879778 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 442.747 | 1.228 | 107.618ms | 40000 | 30 | 3.35834e+07 | 86159.8 | 10.0989 | -(Win) | false |
| std::from_chars | 237.3 | 0.748982 | 195.107ms | 40000 | 30 | 4.34899e+07 | 160754 | 0.0891387 | 2(Loss) | true |
| strtoll/strtoull | 208.253 | 0.681254 | 226.187ms | 40000 | 30 | 4.67174e+07 | 183176 | 0.186212 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars DID NOT CONVERGE | 64.3133 | 6.94308 | 8878.17ms | 400000 | 30 | 5.08796e+12 | 5.93143e+06 | 32.0319 | -(Win) | false |
| vn::from_chars DID NOT CONVERGE | 53.3188 | 3.73078 | 8900.39ms | 400000 | 30 | 2.13737e+12 | 7.15451e+06 | 6.01798 | -(Loss) | false |
| strtoll/strtoull | 41.1381 | 6.97242 | 11701.2ms | 400000 | 30 | 1.25406e+13 | 9.2729e+06 | 3.27208 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 418.469 | 2.62261 | 1.21863ms | 400 | 48 | 27434.8 | 911.583 | 0.550929 | 1(Win) | true |
| std::from_chars STATISTICAL TIE | 221.103 | 5.80829 | 2.08604ms | 400 | 30 | 301264 | 1725.3 | 0.172247 | 2(Tie) | true |
| strtoll/strtoull STATISTICAL TIE | 198.589 | 0.789277 | 2.46925ms | 400 | 30 | 6895.89 | 1920.9 | 0.880541 | 2(Tie) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 456.549 | 0.434978 | 10.3664ms | 4000 | 30 | 39627.8 | 8355.5 | 0.234927 | 1(Win) | true |
| std::from_chars | 243.144 | 0.218322 | 19.4593ms | 4000 | 30 | 35197.2 | 15689 | 1.05766 | 2(Loss) | true |
| strtoll/strtoull | 197.809 | 1.87957 | 24.229ms | 4000 | 30 | 3.94156e+06 | 19284.7 | 1.43204 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 447.947 | 1.21956 | 107.25ms | 40000 | 30 | 3.23588e+07 | 85159.6 | 4.63784 | 1(Win) | true |
| std::from_chars | 172.35 | 5.50335 | 218.886ms | 40000 | 48 | 7.12185e+09 | 221334 | 2.32281 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 147.12 | 5.39964 | 275.18ms | 40000 | 30 | 5.88068e+09 | 259292 | 13.5992 | -(Loss) | false |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 100.321 | 3.52252 | 7583.39ms | 400000 | 30 | 5.38224e+11 | 3.80248e+06 | 2.6821 | 1(Win) | true |
| vn::from_chars STATISTICAL TIE | 57.1203 | 4.10322 | 8288.19ms | 400000 | 30 | 2.25273e+12 | 6.67836e+06 | 1.57989 | 2(Tie) | true |
| strtoll/strtoull STATISTICAL TIE | 49.3143 | 6.30265 | 10282ms | 400000 | 30 | 7.13085e+12 | 7.73547e+06 | 2.33091 | 2(Tie) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 583.584 | 2.79647 | 0.869916ms | 400 | 48 | 16038.9 | 653.667 | 4.33626 | 1(Win) | true |
| std::from_chars | 318.599 | 1.91019 | 1.52754ms | 400 | 30 | 15693 | 1197.33 | 1.01411 | 2(Loss) | true |
| strtoll/strtoull | 212.916 | 0.976732 | 2.27767ms | 400 | 48 | 14699.3 | 1791.65 | 0.00860401 | 3(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 668.876 | 0.319465 | 7.04675ms | 4000 | 48 | 15933.7 | 5703.15 | 0.227511 | 1(Win) | true |
| std::from_chars | 334.54 | 1.36927 | 13.5801ms | 4000 | 30 | 731349 | 11402.8 | 2.12357 | 2(Loss) | true |
| strtoll/strtoull | 217.584 | 1.07805 | 22.0511ms | 4000 | 30 | 1.07168e+06 | 17532.1 | 0.980477 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 657.53 | 1.03516 | 69.0702ms | 40000 | 48 | 1.7312e+07 | 58015.6 | 0.116757 | 1(Win) | true |
| std::from_chars | 338.27 | 0.761031 | 138.697ms | 40000 | 48 | 3.53541e+07 | 112771 | 0.440305 | 2(Loss) | true |
| strtoll/strtoull | 180.904 | 6.11467 | 235.16ms | 40000 | 30 | 4.98756e+09 | 210868 | 3.30905 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 60.5989 | 4.3568 | 8448.96ms | 400000 | 30 | 2.25657e+12 | 6.295e+06 | 6.46114 | -(Win) | false |
| strtoll/strtoull STATISTICAL TIE | 49.172 | 5.99062 | 9884.74ms | 400000 | 30 | 6.47962e+12 | 7.75786e+06 | 1.75124 | 2(Tie) | true |
| std::from_chars STATISTICAL TIE | 48.8309 | 8.709 | 7125.14ms | 400000 | 30 | 1.38863e+13 | 7.81205e+06 | 1.63019 | 2(Tie) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 727.62 | 0.722608 | 1.37479ms | 800 | 48 | 2755.62 | 1048.54 | 0.928317 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 330.52 | 0.318926 | 2.90575ms | 800 | 30 | 1625.87 | 2308.3 | 7.25746 | -(Loss) | false |
| strtoll/strtoull | 258.501 | 0.351813 | 3.84054ms | 800 | 30 | 3234.46 | 2951.4 | 0.235754 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 559.494 | 2.76786 | 16.2002ms | 8000 | 48 | 6.83784e+06 | 13636.2 | 8.36244 | -(Win) | false |
| std::from_chars | 320.823 | 1.40326 | 28.0174ms | 8000 | 30 | 3.34078e+06 | 23780.7 | 1.38026 | 2(Loss) | true |
| strtoll/strtoull | 232.161 | 1.96556 | 37.4783ms | 8000 | 30 | 1.25169e+07 | 32862.6 | 1.17518 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 748.362 | 0.782563 | 202.518ms | 80000 | 48 | 3.05518e+07 | 101948 | 0.669933 | 1(Win) | true |
| std::from_chars | 323.308 | 0.965283 | 292.6ms | 80000 | 30 | 1.5566e+08 | 235979 | 1.29693 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 164.676 | 3.08865 | 664.357ms | 80000 | 48 | 9.82876e+09 | 463298 | 31.6755 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull | 69.6221 | 5.47859 | 31387.5ms | 800000 | 30 | 1.0813e+13 | 1.09583e+07 | 4.66692 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 22.5347 | 6.13419 | 30437.2ms | 800000 | 30 | 1.29394e+14 | 3.38563e+07 | 13.6975 | -(Loss) | false |
| vn::from_chars DID NOT CONVERGE | 9.4335 | 6.60822 | 35176.9ms | 800000 | 30 | 8.56889e+14 | 8.08756e+07 | 7.57835 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 883.134 | 3.16222 | 1.36787ms | 800 | 30 | 22388.9 | 863.9 | 1.71786 | 1(Win) | true |
| strtoll/strtoull STATISTICAL TIE | 297.736 | 0.169588 | 3.56937ms | 800 | 30 | 566.533 | 2562.47 | 0.110448 | 2(Tie) | true |
| std::from_chars STATISTICAL TIE | 267.179 | 5.91985 | 4.74362ms | 800 | 30 | 857268 | 2855.53 | 0.967596 | 2(Tie) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1016.32 | 2.10221 | 8.81837ms | 8000 | 30 | 747119 | 7506.87 | 4.00203 | 1(Win) | true |
| std::from_chars | 305.583 | 2.29915 | 30.6604ms | 8000 | 30 | 9.88506e+06 | 24966.7 | 0.126292 | 2(Loss) | true |
| strtoll/strtoull | 275.278 | 1.40235 | 35.1398ms | 8000 | 48 | 7.25085e+06 | 27715.2 | 0.374573 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1042.09 | 1.22951 | 98.0006ms | 80000 | 30 | 2.43085e+07 | 73212.5 | 3.92948 | 1(Win) | true |
| std::from_chars | 315.005 | 3.16564 | 284.601ms | 80000 | 48 | 2.82168e+09 | 242199 | 0.772642 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 267.27 | 2.37252 | 396.106ms | 80000 | 48 | 2.20162e+09 | 285457 | 8.4402 | -(Loss) | false |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull DID NOT CONVERGE | 80.6462 | 4.6411 | 23306.4ms | 800000 | 30 | 5.7833e+12 | 9.46033e+06 | 5.87131 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 31.2523 | 9.9763 | 28749.4ms | 800000 | 30 | 1.77942e+14 | 2.44123e+07 | 22.6745 | -(Loss) | false |
| vn::from_chars DID NOT CONVERGE | 13.8193 | 9.24177 | 23392.2ms | 800000 | 30 | 7.80974e+14 | 5.52081e+07 | 17.692 | -(Loss) | false |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 1130.39 | 1.04243 | 1.15321ms | 800 | 30 | 1485.03 | 674.933 | 7.43771 | -(Win) | false |
| std::from_chars | 283.308 | 2.09945 | 4.0745ms | 800 | 30 | 95894.2 | 2692.97 | 1.51661 | 2(Loss) | true |
| strtoll/strtoull | 228.349 | 7.19903 | 4.27246ms | 800 | 48 | 2.77695e+06 | 3341.1 | 3.69885 | 3(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1147.26 | 1.26331 | 8.3495ms | 8000 | 30 | 211737 | 6650.1 | 2.35227 | 1(Win) | true |
| strtoll/strtoull | 309.579 | 0.688241 | 30.429ms | 8000 | 30 | 863056 | 24644.4 | 0.961555 | 2(Loss) | true |
| std::from_chars | 282.424 | 1.69861 | 30.4223ms | 8000 | 30 | 6.31664e+06 | 27014 | 1.98812 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1068.73 | 3.70538 | 81.8563ms | 80000 | 30 | 2.0991e+08 | 71387.6 | 0.065133 | 1(Win) | true |
| strtoll/strtoull | 300.431 | 0.397984 | 307.68ms | 80000 | 30 | 3.06439e+07 | 253949 | 0.850559 | 2(Loss) | true |
| std::from_chars | 236.066 | 5.47922 | 372.186ms | 80000 | 30 | 9.40743e+09 | 323189 | 4.12807 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 131.047 | 1.60694 | 22503.3ms | 800000 | 30 | 2.62571e+11 | 5.82188e+06 | 4.34341 | 1(Win) | true |
| vn::from_chars DID NOT CONVERGE | 70.7012 | 10.2919 | 30434.8ms | 800000 | 30 | 3.70031e+13 | 1.0791e+07 | 40.2443 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 17.072 | 12.7117 | 23316.1ms | 800000 | 30 | 9.68143e+14 | 4.46896e+07 | 42.7188 | -(Loss) | false |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 444.026 | 11.6313 | 2.66567ms | 800 | 30 | 1.19823e+06 | 1718.23 | 6.55851 | -(Win) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 225.502 | 8.03277 | 3.97104ms | 800 | 30 | 2.21581e+06 | 3383.3 | 25.6428 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 189.555 | 8.89911 | 7.97717ms | 800 | 30 | 3.8488e+06 | 4024.9 | 37.451 | -(Tie) | false |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 431.819 | 1.01524 | 14.6669ms | 8000 | 30 | 965241 | 17668 | 5.69353 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 307.379 | 2.09556 | 47.176ms | 8000 | 30 | 8.11619e+06 | 24820.8 | 13.0657 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 196.003 | 5.8457 | 67.338ms | 8000 | 30 | 1.55328e+08 | 38925 | 8.62376 | -(Loss) | false |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 685.771 | 1.33696 | 201.054ms | 80000 | 30 | 6.63708e+07 | 111253 | 38.5022 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 286.159 | 5.50156 | 388.521ms | 80000 | 30 | 6.45443e+09 | 266614 | 16.5362 | -(Loss) | false |
| strtoll/strtoull | 215.707 | 7.16261 | 466.532ms | 80000 | 30 | 1.92537e+10 | 353692 | 1.91851 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull DID NOT CONVERGE | 40.7226 | 13.7847 | 35715.1ms | 800000 | 30 | 2.00091e+14 | 1.87351e+07 | 7.01367 | -(Win) | false |
| std::from_chars | 12.2193 | 5.95817 | 48046.8ms | 800000 | 48 | 6.64283e+14 | 6.24371e+07 | 4.83799 | 2(Loss) | true |
| vn::from_chars DID NOT CONVERGE | 7.39537 | 10.0225 | 33039.3ms | 800000 | 30 | 3.20726e+15 | 1.03165e+08 | 1.19403 | -(Loss) | false |
