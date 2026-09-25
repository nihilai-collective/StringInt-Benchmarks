# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 25, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 5.000000% AND mean shift < 2.500000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [49d7727](https://github.com/nihilai-collective/benchmarksuite/commit/49d7727).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 143.331 | 2.3297 | 3.89431ms | 100 | 30 | 7208.45 | 665.367 | 20.4193 | 1(Win) |
| std::from_chars | 128.389 | 1.4143 | 1.44816ms | 100 | 30 | 3310.92 | 742.8 | 22.997 | 2(Loss) |
| strtoll/strtoull | 84.1279 | 1.08728 | 1.5859ms | 100 | 30 | 4557.49 | 1133.6 | 35.5203 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 153.981 | 0.63656 | 1.62411ms | 1000 | 30 | 46630.2 | 6193.47 | 19.6588 | 1(Win) |
| std::from_chars | 130.778 | 0.449507 | 4.20638ms | 1000 | 30 | 32235 | 7292.33 | 23.161 | 2(Loss) |
| strtoll/strtoull | 87.7765 | 0.333669 | 5.64781ms | 1000 | 30 | 39427.3 | 10864.8 | 34.5652 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 150.557 | 0.596376 | 28.3844ms | 10000 | 30 | 4.28112e+06 | 63342.9 | 20.175 | 1(Win) |
| std::from_chars | 126.763 | 0.759619 | 13.9298ms | 10000 | 30 | 9.79774e+06 | 75232.7 | 23.9603 | 2(Loss) |
| strtoll/strtoull | 88.3659 | 0.434672 | 20.2651ms | 10000 | 30 | 6.602e+06 | 107923 | 34.383 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 147.86 | 0.504745 | 117.028ms | 100000 | 30 | 3.17953e+08 | 644985 | 20.5486 | 1(Win) |
| std::from_chars | 124.48 | 0.904108 | 138.422ms | 100000 | 30 | 1.43935e+09 | 766129 | 24.3856 | 2(Loss) |
| strtoll/strtoull | 85.7045 | 0.252775 | 200.891ms | 100000 | 30 | 2.37346e+08 | 1.11275e+06 | 35.4549 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.256 | 0.955924 | 18.4655ms | 10000 | 30 | 4.70268e+06 | 41418 | 13.1868 | 1(Win) |
| std::from_chars | 201.552 | 1.32382 | 9.09632ms | 10000 | 30 | 1.17707e+07 | 47316.4 | 15.0661 | 2(Loss) |
| strtoll/strtoull | 117.92 | 1.03826 | 15.3452ms | 10000 | 30 | 2.11521e+07 | 80874.4 | 25.7615 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 232.675 | 0.821982 | 74.053ms | 100000 | 30 | 3.40524e+08 | 409875 | 13.0555 | 1(Win) |
| std::from_chars | 200.466 | 0.6292 | 87.7556ms | 100000 | 30 | 2.68794e+08 | 475730 | 15.1555 | 2(Loss) |
| strtoll/strtoull | 112.373 | 0.945651 | 153.077ms | 100000 | 30 | 1.93223e+09 | 848669 | 27.0376 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 223.57 | 2.64315 | 1.32269ms | 100 | 30 | 3813.63 | 426.567 | 12.6997 | 1(Win) |
| std::from_chars | 207.895 | 1.54625 | 2.67401ms | 100 | 48 | 2414.97 | 458.729 | 13.8927 | 2(Loss) |
| strtoll/strtoull | 115.758 | 0.548956 | 3.06971ms | 100 | 48 | 981.787 | 823.854 | 25.6496 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 234.817 | 1.92423 | 52.3078ms | 10000 | 30 | 1.83221e+07 | 40613.5 | 12.9264 | 1(Win) |
| std::from_chars | 209.103 | 1.40898 | 8.64017ms | 10000 | 30 | 1.23883e+07 | 45607.9 | 14.5146 | 2(Loss) |
| strtoll/strtoull | 119.234 | 0.679787 | 14.9824ms | 10000 | 30 | 8.86876e+06 | 79983.1 | 25.4782 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 194.986 | 2.56425 | 1.33108ms | 100 | 30 | 4718.85 | 489.1 | 14.8853 | 1(Win) |
| std::from_chars | 181.698 | 2.21621 | 0.609827ms | 100 | 30 | 4059.22 | 524.867 | 16.1193 | 2(Loss) |
| strtoll/strtoull | 103.469 | 0.929565 | 1.50292ms | 100 | 30 | 2202.22 | 921.7 | 28.7517 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 209.424 | 1.65662 | 20.8493ms | 10000 | 30 | 1.70733e+07 | 45538.1 | 14.4994 | 1(Win) |
| std::from_chars | 178.52 | 0.897738 | 69.3012ms | 10000 | 30 | 6.89993e+06 | 53421 | 17.0113 | 2(Loss) |
| strtoll/strtoull | 102.319 | 2.10735 | 16.9712ms | 10000 | 30 | 1.1574e+08 | 93206 | 29.6923 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 198.847 | 0.666586 | 86.3858ms | 100000 | 30 | 3.06618e+08 | 479603 | 15.2703 | 1(Win) |
| std::from_chars | 186.364 | 0.544478 | 645.861ms | 100000 | 30 | 2.32894e+08 | 511727 | 16.297 | 2(Loss) |
| strtoll/strtoull | 107.171 | 0.295734 | 382.85ms | 100000 | 30 | 2.07764e+08 | 889864 | 28.3526 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 361.903 | 2.42198 | 3.96779ms | 200 | 30 | 4888.1 | 527.033 | 8.02467 | 1(Win) |
| std::from_chars | 326.869 | 1.74895 | 2.8485ms | 200 | 48 | 4999.28 | 583.521 | 8.99625 | 2(Loss) |
| strtoll/strtoull | 183.995 | 1.74591 | 0.74573ms | 200 | 30 | 9826.86 | 1036.63 | 16.1865 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 357.125 | 1.51642 | 98.9318ms | 200000 | 30 | 1.96779e+09 | 534085 | 8.50373 | 1(Win) |
| std::from_chars | 310.341 | 3.56424 | 254.546ms | 200000 | 30 | 1.43958e+10 | 614598 | 9.78406 | 2(Loss) |
| strtoll/strtoull | 169.505 | 1.61186 | 201.76ms | 200000 | 30 | 9.8689e+09 | 1.12524e+06 | 17.924 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 368.807 | 2.67862 | 1.39604ms | 200 | 30 | 5757.11 | 517.167 | 7.8695 | 1(Win) |
| std::from_chars | 322.623 | 2.33832 | 1.36868ms | 200 | 30 | 5733.2 | 591.2 | 9.10767 | 2(Loss) |
| strtoll/strtoull | 191.754 | 0.778562 | 3.35264ms | 200 | 48 | 2878.73 | 994.688 | 15.5427 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 361.466 | 1.05373 | 10.1361ms | 20000 | 30 | 9.27477e+06 | 52767 | 8.39912 | 1(Win) |
| std::from_chars | 326.147 | 1.43092 | 22.1628ms | 20000 | 30 | 2.10079e+07 | 58481.2 | 9.3047 | 2(Loss) |
| strtoll/strtoull | 190.21 | 0.440592 | 19.067ms | 20000 | 30 | 5.85581e+06 | 100276 | 15.9702 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 371.723 | 3.29724 | 219.85ms | 200000 | 30 | 8.58704e+09 | 513110 | 8.16952 | 1(Win) |
| std::from_chars | 331.319 | 1.03361 | 107.781ms | 200000 | 30 | 1.06219e+09 | 575683 | 9.16657 | 2(Loss) |
| strtoll/strtoull | 183.678 | 0.480744 | 189.852ms | 200000 | 30 | 7.47641e+08 | 1.03842e+06 | 16.5408 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 503.834 | 2.36082 | 1.52282ms | 200 | 30 | 2396.25 | 378.567 | 5.68117 | 1(Win) |
| std::from_chars | 445.261 | 2.69358 | 3.58202ms | 200 | 30 | 3994.03 | 428.367 | 6.47883 | 2(Loss) |
| strtoll/strtoull | 197.02 | 0.631189 | 1.51842ms | 200 | 30 | 1120.16 | 968.1 | 15.1272 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 516.966 | 1.51416 | 167.318ms | 200000 | 30 | 9.36271e+08 | 368951 | 5.87296 | 1(Win) |
| std::from_chars | 463.499 | 1.89907 | 186.297ms | 200000 | 30 | 1.83217e+09 | 411511 | 6.55074 | 2(Loss) |
| strtoll/strtoull | 200.549 | 1.10967 | 172.778ms | 200000 | 30 | 3.34139e+09 | 951066 | 15.1484 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 385.18 | 1.84993 | 126.986ms | 40000 | 30 | 1.00699e+08 | 99036.9 | 7.88435 | 1(Win) |
| std::from_chars | 300.865 | 1.48186 | 23.3574ms | 40000 | 30 | 1.05904e+08 | 126791 | 10.091 | 2(Loss) |
| strtoll/strtoull | 215.305 | 3.46914 | 76.28ms | 40000 | 30 | 1.13339e+09 | 177177 | 14.1057 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 554.408 | 2.04085 | 1.37529ms | 400 | 30 | 5915.65 | 688.067 | 5.32167 | 1(Win) |
| std::from_chars | 448.261 | 1.58353 | 1.49871ms | 400 | 30 | 5447.93 | 851 | 6.59842 | 2(Loss) |
| strtoll/strtoull | 265.087 | 1.23608 | 1.79295ms | 400 | 30 | 9491.9 | 1439.03 | 11.3193 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 508.813 | 0.555555 | 9.25648ms | 4000 | 48 | 83272.1 | 7497.25 | 5.95362 | 1(Win) |
| std::from_chars | 420.437 | 0.715563 | 2.16388ms | 4000 | 30 | 126455 | 9073.17 | 7.20552 | 2(Loss) |
| strtoll/strtoull | 276.074 | 0.298174 | 15.7333ms | 4000 | 48 | 81479.4 | 13817.6 | 10.9897 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 568.738 | 0.701992 | 858.294ms | 400000 | 30 | 6.65092e+08 | 670730 | 5.3393 | 1(Win) |
| std::from_chars | 430.348 | 2.01847 | 391.266ms | 400000 | 30 | 9.6039e+09 | 886421 | 7.05753 | 2(Loss) |
| strtoll/strtoull | 267.032 | 1.33032 | 255.958ms | 400000 | 30 | 1.0835e+10 | 1.42856e+06 | 11.3774 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 577.225 | 4.29211 | 30.0048ms | 40000 | 30 | 2.41375e+08 | 66086.8 | 5.26006 | 1(Win) |
| std::from_chars | 462.448 | 1.04545 | 38.5614ms | 40000 | 30 | 2.2311e+07 | 82489.2 | 6.56374 | 2(Loss) |
| strtoll/strtoull | 288.035 | 1.06173 | 25.5484ms | 40000 | 30 | 5.93165e+07 | 132438 | 10.5467 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 603.775 | 0.925552 | 802.843ms | 400000 | 30 | 1.02587e+09 | 631808 | 5.02839 | 1(Win) |
| std::from_chars | 427.347 | 3.30873 | 397.885ms | 400000 | 30 | 2.61699e+10 | 892647 | 7.10549 | 2(Loss) |
| strtoll/strtoull | 268.3 | 1.84219 | 254.14ms | 400000 | 30 | 2.0581e+10 | 1.4218e+06 | 11.3208 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 671.582 | 1.07788 | 3.46608ms | 4000 | 30 | 112456 | 5680.17 | 4.50197 | 1(Win) |
| std::from_chars | 501.687 | 0.662499 | 4.31622ms | 4000 | 30 | 76128.3 | 7603.73 | 6.03621 | 2(Loss) |
| strtoll/strtoull | 289.883 | 0.524569 | 7.01281ms | 4000 | 30 | 142955 | 13159.4 | 10.463 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 866.916 | 2.41303 | 159.871ms | 800000 | 30 | 1.35293e+10 | 880062 | 3.50267 | 1(Win) |
| std::from_chars | 568.625 | 1.71364 | 246.754ms | 800000 | 30 | 1.58595e+10 | 1.34173e+06 | 5.34118 | 2(Loss) |
| strtoll/strtoull | 343.739 | 2.08986 | 933.194ms | 800000 | 30 | 6.45472e+10 | 2.21953e+06 | 8.83904 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 943.843 | 2.02048 | 1.75983ms | 800 | 30 | 8002.23 | 808.333 | 3.12542 | 1(Win) |
| std::from_chars | 689.258 | 1.33185 | 1.7948ms | 800 | 30 | 6520.02 | 1106.9 | 4.33563 | 2(Loss) |
| strtoll/strtoull | 345.034 | 0.968154 | 0.907706ms | 800 | 30 | 13748.9 | 2211.2 | 8.73621 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 990.179 | 0.772699 | 1.93105ms | 8000 | 30 | 106340 | 7705.07 | 3.0592 | 1(Win) |
| std::from_chars | 702.924 | 2.73697 | 5.69998ms | 8000 | 30 | 2.64743e+06 | 10853.8 | 4.30222 | 2(Loss) |
| strtoll/strtoull | 351.431 | 0.382359 | 29.6139ms | 8000 | 30 | 206712 | 21709.5 | 8.6376 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1175.55 | 0.948141 | 62.718ms | 80000 | 48 | 1.81754e+07 | 64900.5 | 2.5825 | 1(Win) |
| std::from_chars | 746.238 | 0.44899 | 46.2651ms | 80000 | 30 | 6.32151e+06 | 102238 | 4.06915 | 2(Loss) |
| strtoll/strtoull | 356.275 | 0.615496 | 92.0789ms | 80000 | 30 | 5.2117e+07 | 214143 | 8.52891 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1040.04 | 2.94958 | 133.548ms | 800000 | 30 | 1.4045e+10 | 733569 | 2.91954 | 1(Win) |
| std::from_chars | 747.644 | 0.489617 | 969.969ms | 800000 | 48 | 1.19824e+09 | 1.02046e+06 | 4.06135 | 2(Loss) |
| strtoll/strtoull | 343.55 | 1.11279 | 397.694ms | 800000 | 30 | 1.83209e+10 | 2.22075e+06 | 8.8419 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 775.371 | 2.17851 | 1.53509ms | 800 | 30 | 13784.8 | 983.967 | 3.82837 | 1(Win) |
| std::from_chars | 571.89 | 1.28185 | 1.7218ms | 800 | 30 | 8773.03 | 1334.07 | 5.22829 | 2(Loss) |
| strtoll/strtoull | 303.653 | 1.60954 | 0.989553ms | 800 | 30 | 49062.5 | 2512.53 | 9.91117 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 777.188 | 1.20326 | 15.4629ms | 8000 | 30 | 418571 | 9816.67 | 3.89824 | 1(Win) |
| std::from_chars | 564.342 | 0.543908 | 2.98519ms | 8000 | 30 | 162206 | 13519.1 | 5.37177 | 2(Loss) |
| strtoll/strtoull | 320.819 | 0.280249 | 11.4481ms | 8000 | 30 | 133251 | 23781 | 9.46334 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 888.44 | 1.83306 | 372.443ms | 800000 | 30 | 7.43361e+09 | 858741 | 3.41747 | 1(Win) |
| std::from_chars | 561.285 | 2.40383 | 246.439ms | 800000 | 30 | 3.20289e+10 | 1.35927e+06 | 5.4112 | 2(Loss) |
| strtoll/strtoull | 323.553 | 0.259578 | 427.16ms | 800000 | 30 | 1.12394e+09 | 2.358e+06 | 9.39123 | 3(Loss) |
