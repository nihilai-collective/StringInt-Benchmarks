# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 114.624 | 9.18428 | 1.04294ms | 100 | 48 | 280271 | 832 | 4.83871 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 109.033 | 6.39394 | 1.1561ms | 100 | 48 | 150129 | 874.667 | 0.490196 | 1(Tie) | true |
| strtoll/strtoull DID NOT CONVERGE | 69.3077 | 5.12587 | 1.86496ms | 100 | 48 | 238788 | 1376 | 8.22148 | -(Loss) | false |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 134.325 | 1.05066 | 8.67098ms | 1000 | 30 | 166928 | 7099.73 | 0.543807 | 1(Win) | true |
| std::from_chars | 120.69 | 1.64194 | 10.2339ms | 1000 | 30 | 505004 | 7901.87 | 0.433839 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 71.3657 | 0.598092 | 16.758ms | 1000 | 30 | 191636 | 13363.2 | 6.11511 | -(Loss) | false |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 129.801 | 0.21782 | 89.6888ms | 10000 | 30 | 768353 | 73472 | 0.404858 | 1(Win) | true |
| std::from_chars | 123.695 | 0.570264 | 92.546ms | 10000 | 30 | 5.79918e+06 | 77098.7 | 0.013837 | 2(Loss) | true |
| strtoll/strtoull | 75.0512 | 0.411802 | 154.202ms | 10000 | 30 | 8.21452e+06 | 127070 | 0.314634 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 126.564 | 0.244258 | 896.834ms | 100000 | 30 | 1.01624e+08 | 753510 | 0.227111 | 1(Win) | true |
| std::from_chars | 115.123 | 0.419984 | 963.916ms | 100000 | 30 | 3.63132e+08 | 828399 | 1.17779 | 2(Loss) | true |
| strtoll/strtoull | 74.55 | 0.218444 | 1524.56ms | 100000 | 30 | 2.34264e+08 | 1.27924e+06 | 0.825621 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 203.198 | 19.9315 | 0.591872ms | 100 | 30 | 262521 | 469.333 | 2.32558 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 157.407 | 15.2257 | 0.74496ms | 100 | 30 | 255289 | 605.867 | 0 | -(Tie) | false |
| strtoll/strtoull | 92.3626 | 3.66076 | 1.24698ms | 100 | 30 | 42862.1 | 1032.53 | 0 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 232.347 | 1.38606 | 5.03219ms | 1000 | 30 | 97098.7 | 4104.53 | 0.0780234 | 1(Win) | true |
| std::from_chars | 186.887 | 2.08215 | 6.42278ms | 1000 | 30 | 338678 | 5102.93 | 0.664452 | 2(Loss) | true |
| strtoll/strtoull | 100.053 | 0.986463 | 12.4439ms | 1000 | 30 | 265232 | 9531.73 | 3.49892 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 217.514 | 0.24555 | 53.536ms | 10000 | 30 | 347717 | 43844.3 | 0.351563 | 1(Win) | true |
| std::from_chars | 204.2 | 0.705543 | 56.5302ms | 10000 | 30 | 3.25729e+06 | 46702.9 | 0.321002 | 2(Loss) | true |
| strtoll/strtoull | 94.5505 | 1.1169 | 118.505ms | 10000 | 48 | 6.09178e+07 | 100864 | 0.328864 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 217.819 | 0.239755 | 528.251ms | 100000 | 30 | 3.3057e+07 | 437828 | 0.0635462 | 1(Win) | true |
| std::from_chars | 205.654 | 0.26289 | 564.478ms | 100000 | 30 | 4.45856e+07 | 463727 | 2.05857 | 2(Loss) | true |
| strtoll/strtoull | 100.289 | 0.454499 | 1105.84ms | 100000 | 30 | 5.60381e+08 | 950929 | 0.129388 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 218.066 | 16.6224 | 0.547072ms | 100 | 48 | 253662 | 437.333 | 5.09259 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 159.655 | 15.2852 | 0.716032ms | 100 | 30 | 250091 | 597.333 | 1.40845 | -(Tie) | false |
| strtoll/strtoull | 95.5203 | 1.42843 | 1.21498ms | 100 | 30 | 6101.63 | 998.4 | 1.73913 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 229.014 | 1.69151 | 5.13715ms | 1000 | 30 | 148850 | 4164.27 | 0 | 1(Win) | true |
| std::from_chars | 198.506 | 1.97376 | 5.85907ms | 1000 | 30 | 269752 | 4804.27 | 1.21348 | 2(Loss) | true |
| strtoll/strtoull | 99.4295 | 0.972352 | 11.6762ms | 1000 | 30 | 260939 | 9591.47 | 1.57618 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 226.95 | 1.10097 | 53.5639ms | 10000 | 48 | 1.02738e+07 | 42021.3 | 0.456446 | 1(Win) | true |
| std::from_chars | 209.6 | 0.335783 | 54.878ms | 10000 | 30 | 700256 | 45499.7 | 0 | 2(Loss) | true |
| strtoll/strtoull | 107.388 | 0.749846 | 112.539ms | 10000 | 30 | 1.33031e+07 | 88806.4 | 1.66421 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 227.423 | 0.408018 | 521.134ms | 100000 | 48 | 1.40517e+08 | 419339 | 1.51659 | 1(Win) | true |
| std::from_chars | 203.869 | 0.257611 | 567.74ms | 100000 | 48 | 6.97051e+07 | 467787 | 0.0305646 | 2(Loss) | true |
| strtoll/strtoull | 103.233 | 0.273169 | 1089.65ms | 100000 | 30 | 1.91051e+08 | 923810 | 0.265926 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 189.422 | 18.6441 | 0.687104ms | 100 | 30 | 264329 | 503.467 | 0 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 143.28 | 13.2467 | 0.838144ms | 100 | 30 | 233218 | 665.6 | 0 | -(Tie) | false |
| strtoll/strtoull | 84.0291 | 4.67468 | 1.36397ms | 100 | 30 | 84443.5 | 1134.93 | 0 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 198.022 | 1.27264 | 5.94304ms | 1000 | 48 | 180311 | 4816 | 0.287102 | 1(Win) | true |
| std::from_chars | 141.243 | 1.00734 | 8.10598ms | 1000 | 48 | 222055 | 6752 | 3.16167 | 2(Loss) | true |
| strtoll/strtoull | 87.5166 | 2.41761 | 12.9518ms | 1000 | 30 | 2.08216e+06 | 10897.1 | 0.205983 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 184.329 | 1.02106 | 62.2208ms | 10000 | 30 | 8.37211e+06 | 51737.6 | 2.02777 | 1(Win) | true |
| std::from_chars | 174.913 | 0.177656 | 66.2331ms | 10000 | 48 | 450357 | 54522.7 | 0.924562 | 2(Loss) | true |
| strtoll/strtoull | 92.2025 | 0.518285 | 124.977ms | 10000 | 30 | 8.6213e+06 | 103433 | 0.988401 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 172.707 | 0.559463 | 644.337ms | 100000 | 30 | 2.86315e+08 | 552192 | 1.7133 | 1(Win) | true |
| vn::from_chars | 149.408 | 0.853494 | 809.675ms | 100000 | 30 | 8.90379e+08 | 638302 | 2.86873 | 2(Loss) | true |
| strtoll/strtoull | 92.9804 | 0.386134 | 1269.88ms | 100000 | 30 | 4.70561e+08 | 1.02567e+06 | 0.18671 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 221.304 | 7.46603 | 1.14586ms | 200 | 30 | 124217 | 861.867 | 0 | 1(Win) | true |
| std::from_chars | 178.814 | 4.16223 | 1.41414ms | 200 | 30 | 59133.1 | 1066.67 | 4.71204 | 2(Loss) | true |
| strtoll/strtoull | 119.528 | 5.9424 | 1.98989ms | 200 | 30 | 269752 | 1595.73 | 0.266667 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 210.468 | 0.934449 | 11.1849ms | 2000 | 30 | 215139 | 9062.4 | 0.223136 | 1(Win) | true |
| std::from_chars | 204.312 | 0.963787 | 12.577ms | 2000 | 30 | 242860 | 9335.47 | 3.23936 | 2(Loss) | true |
| strtoll/strtoull | 120.171 | 0.74175 | 19.1519ms | 2000 | 30 | 415815 | 15872 | 0.431965 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 227.919 | 0.541252 | 100.085ms | 20000 | 48 | 9.8478e+06 | 83685.3 | 0.831534 | 1(Win) | true |
| vn::from_chars | 215.917 | 0.556475 | 106.643ms | 20000 | 30 | 7.24934e+06 | 88337.1 | 1.56488 | 2(Loss) | true |
| strtoll/strtoull | 123.164 | 0.513897 | 186.099ms | 20000 | 30 | 1.90006e+07 | 154863 | 0.476138 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 178.279 | 3.51671 | 1184.53ms | 200000 | 30 | 4.24672e+10 | 1.06987e+06 | 6.74414 | -(Win) | false |
| strtoll/strtoull | 114.286 | 1.19798 | 1971.27ms | 200000 | 48 | 1.91871e+10 | 1.66892e+06 | 0.00351537 | 2(Loss) | true |
| std::from_chars | 65.683 | 1.82217 | 3537.86ms | 200000 | 30 | 8.39949e+10 | 2.90387e+06 | 0.521223 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 286.561 | 13.2467 | 0.860928ms | 200 | 30 | 233218 | 665.6 | 4.87805 | -(Tie) | false |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 282.933 | 13.1905 | 0.770048ms | 200 | 30 | 237210 | 674.133 | 1.28205 | -(Tie) | false |
| strtoll/strtoull | 157.407 | 6.48077 | 1.54906ms | 200 | 30 | 185007 | 1211.73 | 3.64964 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 332.987 | 1.23135 | 6.97011ms | 2000 | 48 | 238788 | 5728 | 0.111607 | 1(Win) | true |
| vn::from_chars | 314.37 | 1.75377 | 7.62086ms | 2000 | 30 | 339657 | 6067.2 | 1.65975 | 2(Loss) | true |
| strtoll/strtoull | 156.786 | 0.438544 | 14.7791ms | 2000 | 48 | 136620 | 12165.3 | 1.06697 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 350.231 | 0.588128 | 65.4198ms | 20000 | 30 | 3.07763e+06 | 54459.7 | 0.436817 | 1(Win) | true |
| vn::from_chars | 279.331 | 1.87645 | 85.6369ms | 20000 | 48 | 7.88014e+07 | 68282.7 | 4.62604 | 2(Loss) | true |
| strtoll/strtoull | 160.377 | 0.535948 | 140.803ms | 20000 | 30 | 1.21883e+07 | 118929 | 0.374391 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 306.516 | 0.323184 | 764.025ms | 200000 | 30 | 1.21332e+08 | 622268 | 0.355059 | 1(Win) | true |
| std::from_chars | 298.489 | 0.99337 | 761.075ms | 200000 | 30 | 1.20878e+09 | 639002 | 3.96661 | 2(Loss) | true |
| strtoll/strtoull | 153.823 | 0.518898 | 1458.54ms | 200000 | 30 | 1.24194e+09 | 1.23996e+06 | 0.112301 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 338.663 | 16.3671 | 0.731904ms | 200 | 30 | 254912 | 563.2 | 13.5484 | -(Win) | false |
| std::from_chars | 228.079 | 8.42303 | 0.907008ms | 200 | 30 | 148850 | 836.267 | 2 | 2(Loss) | true |
| strtoll/strtoull | 132.455 | 4.95492 | 1.79814ms | 200 | 48 | 244366 | 1440 | 2.89634 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 338.984 | 2.17799 | 6.88486ms | 2000 | 48 | 720867 | 5626.67 | 0.821865 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 331.137 | 1.68803 | 6.98803ms | 2000 | 30 | 283613 | 5760 | 0.147929 | 1(Tie) | true |
| strtoll/strtoull DID NOT CONVERGE | 147.536 | 2.06215 | 19.264ms | 2000 | 30 | 2.13218e+06 | 12928 | 6.66153 | -(Loss) | false |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 349.301 | 0.213426 | 66.1519ms | 20000 | 30 | 407453 | 54604.8 | 0.329257 | 1(Win) | true |
| vn::from_chars | 339.744 | 0.493817 | 70.014ms | 20000 | 30 | 2.30574e+06 | 56140.8 | 2.18555 | 2(Loss) | true |
| strtoll/strtoull | 161.828 | 0.500482 | 145.452ms | 20000 | 30 | 1.04388e+07 | 117862 | 0.570503 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 330.735 | 0.29322 | 704.744ms | 200000 | 30 | 8.57841e+07 | 576700 | 2.33109 | 1(Win) | true |
| strtoll/strtoull | 153.77 | 0.464427 | 1506.96ms | 200000 | 30 | 9.95568e+08 | 1.24039e+06 | 2.51188 | 2(Loss) | true |
| std::from_chars | 122.438 | 7.25519 | 1320.86ms | 200000 | 30 | 3.83217e+11 | 1.5578e+06 | 2.51579 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 354.79 | 17.4404 | 1.11718ms | 200 | 30 | 263726 | 537.6 | 1.6129 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 286.561 | 15.162 | 0.793088ms | 200 | 30 | 305533 | 665.6 | 5.40541 | -(Tie) | false |
| strtoll/strtoull | 167.116 | 4.72038 | 1.46611ms | 200 | 48 | 139322 | 1141.33 | 2.37226 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 447.035 | 1.55057 | 5.34784ms | 2000 | 48 | 210087 | 4266.67 | 0 | 1(Win) | true |
| std::from_chars | 342.293 | 1.82553 | 6.79501ms | 2000 | 30 | 310430 | 5572.27 | 0.0766284 | 2(Loss) | true |
| strtoll/strtoull | 176.137 | 0.622384 | 13.1712ms | 2000 | 30 | 136270 | 10828.8 | 0.554675 | 3(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE | 436.046 | 1.49296 | 53.801ms | 20000 | 30 | 1.27941e+07 | 43741.9 | 0.391696 | 1(Tie) | true |
| vn::from_chars STATISTICAL TIE | 431.251 | 0.217961 | 53.4228ms | 20000 | 30 | 278792 | 44228.3 | 0.173344 | 1(Tie) | true |
| strtoll/strtoull | 172.72 | 0.309923 | 134.087ms | 20000 | 30 | 3.51401e+06 | 110430 | 0.450206 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 415.45 | 0.877488 | 545.407ms | 200000 | 48 | 7.79016e+08 | 459104 | 0.0283531 | 1(Win) | true |
| std::from_chars | 221.629 | 2.25541 | 938.039ms | 200000 | 48 | 1.80842e+10 | 860603 | 2.67987 | 2(Loss) | true |
| strtoll/strtoull | 176.846 | 0.475646 | 1325.35ms | 200000 | 30 | 7.89512e+08 | 1.07854e+06 | 3.26134 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 336.116 | 5.58657 | 1.35091ms | 400 | 30 | 120601 | 1134.93 | 0 | 1(Win) | true |
| std::from_chars | 261.424 | 6.46931 | 1.82502ms | 400 | 30 | 267342 | 1459.2 | 0.581395 | 2(Loss) | true |
| strtoll/strtoull | 171.114 | 3.15147 | 2.75891ms | 400 | 48 | 236929 | 2229.33 | 0.0957854 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 382.735 | 0.614928 | 12.0809ms | 4000 | 30 | 112692 | 9966.93 | 0.343643 | 1(Win) | true |
| std::from_chars | 294.102 | 0.691086 | 15.722ms | 4000 | 30 | 241052 | 12970.7 | 0 | 2(Loss) | true |
| strtoll/strtoull | 182.65 | 0.458504 | 26.5352ms | 4000 | 48 | 440160 | 20885.3 | 0.102041 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 402.44 | 0.281186 | 113.044ms | 40000 | 48 | 3.40993e+06 | 94789.3 | 0.0641834 | 1(Win) | true |
| std::from_chars | 285.244 | 0.62765 | 164.854ms | 40000 | 30 | 2.11369e+07 | 133734 | 0.860324 | 2(Loss) | true |
| strtoll/strtoull | 181.39 | 0.65656 | 249.195ms | 40000 | 30 | 5.7196e+07 | 210304 | 1.32527 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 111.936 | 0.839619 | 4170ms | 400000 | 48 | 3.92994e+10 | 3.40793e+06 | 0.511471 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 88.8338 | 1.5299 | 4921.69ms | 400000 | 48 | 2.07171e+11 | 4.2942e+06 | 5.28296 | -(Loss) | false |
| strtoll/strtoull | 84.7323 | 1.09871 | 5474.75ms | 400000 | 30 | 7.34016e+10 | 4.50206e+06 | 0.324248 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 460.861 | 8.47751 | 1.00506ms | 400 | 30 | 147720 | 827.733 | 1.02041 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 382.081 | 1.42843 | 1.33709ms | 400 | 30 | 6101.63 | 998.4 | 6.4 | -(Loss) | false |
| strtoll/strtoull | 200.464 | 3.00355 | 2.31603ms | 400 | 30 | 98002.7 | 1902.93 | 0.446429 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 522.237 | 1.27678 | 8.77901ms | 4000 | 30 | 260939 | 7304.53 | 0.943396 | 1(Win) | true |
| std::from_chars | 391.278 | 1.05426 | 12.159ms | 4000 | 48 | 507091 | 9749.33 | 2.18322 | 2(Loss) | true |
| strtoll/strtoull | 211.764 | 0.268115 | 21.652ms | 4000 | 30 | 69980.4 | 18013.9 | 1.17041 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 543.342 | 0.470924 | 84.5079ms | 40000 | 48 | 5.24706e+06 | 70208 | 0.188038 | 1(Win) | true |
| std::from_chars | 356.288 | 0.50137 | 129.829ms | 40000 | 30 | 8.6448e+06 | 107068 | 0.135674 | 2(Loss) | true |
| strtoll/strtoull | 211.975 | 0.375595 | 218.937ms | 40000 | 30 | 1.3706e+07 | 179959 | 0.533918 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 296.425 | 0.404573 | 2761.51ms | 400000 | 30 | 8.13218e+08 | 1.2869e+06 | 0.0781835 | 1(Win) | true |
| vn::from_chars DID NOT CONVERGE | 120.499 | 1.44938 | 4832.2ms | 400000 | 30 | 6.31595e+10 | 3.16575e+06 | 12.6966 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 95.3447 | 1.02018 | 5002.78ms | 400000 | 48 | 7.99685e+10 | 4.00095e+06 | 11.5965 | -(Loss) | false |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 493.28 | 8.03703 | 1.02195ms | 400 | 48 | 185424 | 773.333 | 3.59043 | 1(Win) | true |
| std::from_chars | 319.311 | 6.44361 | 1.45894ms | 400 | 30 | 177776 | 1194.67 | 3.44828 | 2(Loss) | true |
| strtoll/strtoull | 205.533 | 2.91846 | 2.36109ms | 400 | 48 | 140833 | 1856 | 2.02703 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 518.677 | 1.03504 | 8.99686ms | 4000 | 48 | 278150 | 7354.67 | 0.591119 | 1(Win) | true |
| std::from_chars | 376.609 | 1.51198 | 12.437ms | 4000 | 30 | 703646 | 10129.1 | 3.30722 | 2(Loss) | true |
| strtoll/strtoull | 218.385 | 0.556333 | 21.067ms | 4000 | 30 | 283311 | 17467.7 | 0 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 598.52 | 0.265094 | 79.177ms | 40000 | 30 | 856412 | 63735.5 | 0.837046 | 1(Win) | true |
| std::from_chars | 361.715 | 0.662771 | 126.883ms | 40000 | 48 | 2.34506e+07 | 105461 | 0.163583 | 2(Loss) | true |
| strtoll/strtoull | 221.986 | 0.316053 | 209.978ms | 40000 | 30 | 8.84932e+06 | 171844 | 0.154798 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars | 154.111 | 5.78025 | 3674.86ms | 400000 | 30 | 6.14143e+11 | 2.4753e+06 | 3.59638 | 1(Win) | true |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 105.251 | 12.2354 | 4942.73ms | 400000 | 30 | 5.89966e+12 | 3.6244e+06 | 8.02561 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE | 87.5456 | 1.15533 | 4971.17ms | 400000 | 30 | 7.60305e+10 | 4.35738e+06 | 2.81459 | 2(Tie) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 604.101 | 14.2484 | 0.97408ms | 400 | 30 | 242860 | 631.467 | 12.1212 | -(Win) | false |
| std::from_chars | 390.85 | 2.42683 | 1.22394ms | 400 | 48 | 26929 | 976 | 4.93119 | 2(Loss) | true |
| strtoll/strtoull | 232.831 | 5.58615 | 2.02522ms | 400 | 30 | 251297 | 1638.4 | 2.04082 | 3(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 756.884 | 1.29354 | 6.21901ms | 4000 | 48 | 204016 | 5040 | 0.275891 | 1(Win) | true |
| std::from_chars | 382.285 | 1.37174 | 12.2729ms | 4000 | 48 | 899348 | 9978.67 | 1.77328 | 2(Loss) | true |
| strtoll/strtoull | 225.661 | 0.373662 | 20.6121ms | 4000 | 30 | 119697 | 16904.5 | 0 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 698.71 | 2.18131 | 68.0069ms | 40000 | 30 | 4.25484e+07 | 54596.3 | 3.01079 | 1(Win) | true |
| std::from_chars | 497.369 | 0.739214 | 93.3612ms | 40000 | 30 | 9.64328e+06 | 76697.6 | 0.822069 | 2(Loss) | true |
| strtoll/strtoull | 229.742 | 0.334757 | 201.474ms | 40000 | 48 | 1.48299e+07 | 166043 | 0.309955 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull DID NOT CONVERGE | 197.91 | 0.690636 | 4311.07ms | 400000 | 30 | 5.31624e+09 | 1.92749e+06 | 14.1905 | -(Win) | false |
| std::from_chars STATISTICAL TIE | 121.142 | 1.21011 | 2887.77ms | 400000 | 30 | 4.35611e+10 | 3.14894e+06 | 2.44131 | 2(Tie) | true |
| vn::from_chars STATISTICAL TIE DID NOT CONVERGE | 111.083 | 16.6099 | 6879.84ms | 400000 | 30 | 9.76077e+12 | 3.4341e+06 | 14.372 | -(Tie) | false |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 738.901 | 3.66076 | 1.30483ms | 800 | 30 | 42862.1 | 1032.53 | 0 | 1(Win) | true |
| std::from_chars | 475.569 | 5.97236 | 2.23514ms | 800 | 30 | 275402 | 1604.27 | 2.08333 | 2(Loss) | true |
| strtoll/strtoull | 269.298 | 2.40964 | 3.47392ms | 800 | 30 | 139810 | 2833.07 | 0.3003 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 802.576 | 0.946484 | 11.6239ms | 8000 | 30 | 242860 | 9506.13 | 0.268577 | 1(Win) | true |
| std::from_chars | 397.541 | 0.69027 | 23.273ms | 8000 | 30 | 526473 | 19191.5 | 0.49151 | 2(Loss) | true |
| strtoll/strtoull | 257.657 | 1.23964 | 36.0172ms | 8000 | 30 | 4.04214e+06 | 29610.7 | 0.634403 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 861.702 | 0.582237 | 107.394ms | 80000 | 48 | 1.27558e+07 | 88538.7 | 0.339785 | 1(Win) | true |
| std::from_chars | 384.587 | 0.648868 | 238.786ms | 80000 | 48 | 7.95324e+07 | 198379 | 1.57957 | 2(Loss) | true |
| strtoll/strtoull | 243.403 | 1.01541 | 381.425ms | 80000 | 30 | 3.039e+08 | 313446 | 1.41638 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| strtoll/strtoull DID NOT CONVERGE | 75.1837 | 3.35083 | 26462.3ms | 800000 | 48 | 5.54981e+12 | 1.01477e+07 | 5.53149 | -(Win) | false |
| std::from_chars | 27.6512 | 7.88181 | 31714.6ms | 800000 | 30 | 1.41881e+14 | 2.75915e+07 | 2.63426 | 2(Loss) | true |
| vn::from_chars DID NOT CONVERGE | 12.1766 | 7.42495 | 25194.4ms | 800000 | 30 | 6.49281e+14 | 6.26559e+07 | 10.7191 | -(Loss) | false |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 1039.62 | 11.3108 | 1.35091ms | 800 | 30 | 206702 | 733.867 | 13.1313 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 468.099 | 5.55872 | 2.26918ms | 800 | 30 | 246250 | 1629.87 | 19.375 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 152.572 | 30.0291 | 4.65894ms | 800 | 30 | 6.76455e+07 | 5000.53 | 10.1504 | -(Loss) | false |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 986.832 | 3.54791 | 11.0159ms | 8000 | 30 | 2.25715e+06 | 7731.2 | 6.53772 | -(Win) | false |
| std::from_chars DID NOT CONVERGE | 394.037 | 2.93359 | 25.9341ms | 8000 | 30 | 9.67891e+06 | 19362.1 | 6.66392 | -(Loss) | false |
| strtoll/strtoull | 236.902 | 3.92591 | 44.8261ms | 8000 | 30 | 4.79561e+07 | 32204.8 | 0.0761211 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 813.752 | 15.3393 | 113.594ms | 80000 | 30 | 6.2048e+09 | 93755.7 | 16.995 | -(Win) | false |
| std::from_chars | 407.298 | 3.43674 | 232.986ms | 80000 | 48 | 1.98925e+09 | 187317 | 0.565093 | 2(Loss) | true |
| strtoll/strtoull | 244.562 | 2.53434 | 380.738ms | 80000 | 30 | 1.87523e+09 | 311962 | 3.33541 | 3(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 32.4176 | 7.68096 | 45639.5ms | 800000 | 30 | 9.80325e+13 | 2.35347e+07 | 36.538 | -(Tie) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 29.8034 | 11.7464 | 40070.3ms | 800000 | 30 | 2.71257e+14 | 2.55991e+07 | 13.602 | -(Tie) | false |
| vn::from_chars DID NOT CONVERGE | 9.66424 | 6.23342 | 29651.4ms | 800000 | 30 | 7.26472e+14 | 7.89446e+07 | 12.888 | -(Loss) | false |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 1146.24 | 13.2467 | 0.896ms | 800 | 30 | 233218 | 665.6 | 0.16 | -(Win) | false |
| std::from_chars | 488.563 | 6.1061 | 2.35494ms | 800 | 30 | 272765 | 1561.6 | 4.57143 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 249.044 | 2.67227 | 3.80723ms | 800 | 30 | 201052 | 3063.47 | 5.58824 | -(Loss) | false |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1162.64 | 2.19319 | 8.2729ms | 8000 | 30 | 621387 | 6562.13 | 0.935193 | 1(Win) | true |
| std::from_chars | 450.555 | 1.63665 | 20.6858ms | 8000 | 48 | 3.68672e+06 | 16933.3 | 0.979291 | 2(Loss) | true |
| strtoll/strtoull | 298.023 | 0.927238 | 31.3961ms | 8000 | 30 | 1.69038e+06 | 25600 | 0.265957 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 1170.34 | 0.45413 | 82.665ms | 80000 | 48 | 4.20682e+06 | 65189.3 | 0.16499 | 1(Win) | true |
| std::from_chars | 444.258 | 1.46015 | 216.267ms | 80000 | 30 | 1.88636e+08 | 171733 | 3.72642 | 2(Loss) | true |
| strtoll/strtoull | 305.081 | 0.507936 | 311.127ms | 80000 | 30 | 4.8405e+07 | 250078 | 0.352703 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| std::from_chars DID NOT CONVERGE | 125.994 | 5.05817 | 23793.2ms | 800000 | 30 | 2.81443e+12 | 6.05537e+06 | 27.0221 | -(Win) | false |
| vn::from_chars DID NOT CONVERGE | 71.4998 | 10.2328 | 47273ms | 800000 | 30 | 3.57665e+13 | 1.06705e+07 | 11.1895 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 21.3788 | 5.96469 | 20672.9ms | 800000 | 30 | 1.35928e+14 | 3.56867e+07 | 45.1278 | -(Loss) | false |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 653.202 | 5.00868 | 1.52294ms | 800 | 48 | 164276 | 1168 | 2.91353 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 358.524 | 5.9739 | 4.03712ms | 800 | 48 | 775713 | 2128 | 11.2544 | -(Loss) | false |
| strtoll/strtoull DID NOT CONVERGE | 229.249 | 2.71025 | 5.20883ms | 800 | 30 | 244065 | 3328 | 5.10949 | -(Loss) | false |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 760.263 | 1.68329 | 16.747ms | 8000 | 30 | 856036 | 10035.2 | 8.92546 | -(Win) | false |
| strtoll/strtoull STATISTICAL TIE DID NOT CONVERGE | 139.808 | 21.7719 | 54.1171ms | 8000 | 30 | 4.23481e+09 | 54570.7 | 16.0828 | -(Tie) | false |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 135.732 | 8.548 | 48.3031ms | 8000 | 30 | 6.92569e+08 | 56209.1 | 15.5209 | -(Tie) | false |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars | 836.283 | 0.907884 | 119.931ms | 80000 | 30 | 2.05805e+07 | 91229.9 | 1.26524 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 312.605 | 4.37235 | 297.769ms | 80000 | 48 | 5.46588e+09 | 244059 | 9.80813 | -(Loss) | false |
| strtoll/strtoull | 243.948 | 0.782429 | 397.469ms | 80000 | 48 | 2.8742e+08 | 312747 | 0.358717 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 50.9112 | 5.25388 | 38332ms | 800000 | 48 | 2.97547e+13 | 1.49857e+07 | 3.29689 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE DID NOT CONVERGE | 36.7829 | 18.6066 | 44444.6ms | 800000 | 30 | 4.46829e+14 | 2.07417e+07 | 47.1761 | -(Tie) | false |
| strtoll/strtoull | 27.2323 | 6.11387 | 22243.8ms | 800000 | 48 | 1.40827e+14 | 2.8016e+07 | 0.0214993 | 3(Loss) | true |
