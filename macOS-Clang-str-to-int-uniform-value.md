# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 10.000000% AND mean shift < 5.000000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 136.838 | 0.919222 | 0.918625ms | 100 | 48 | 1970.02 | 696.938 | 1(Win) |
| vn::from_chars | 114.822 | 1.04556 | 1.09692ms | 100 | 30 | 2262.39 | 830.567 | 2(Loss) |
| strtoll/strtoull | 66.7948 | 0.711502 | 2.10771ms | 100 | 30 | 3095.91 | 1427.77 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 142.84 | 0.675968 | 82.1921ms | 10000 | 30 | 6.11048e+06 | 66765.3 | 1(Win) |
| vn::from_chars | 120.018 | 0.753718 | 97.2289ms | 10000 | 30 | 1.07609e+07 | 79461.1 | 2(Loss) |
| strtoll/strtoull | 68.0163 | 0.940081 | 168.72ms | 10000 | 30 | 5.21226e+07 | 140213 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 128.646 | 1.58427 | 902.126ms | 100000 | 48 | 6.62077e+09 | 741318 | 1(Win) |
| vn::from_chars | 117.747 | 0.912485 | 973.002ms | 100000 | 30 | 1.63861e+09 | 809936 | 2(Loss) |
| strtoll/strtoull | 66.8733 | 0.759827 | 1691.04ms | 100000 | 30 | 3.52245e+09 | 1.42609e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 188.442 | 2.28775 | 0.706833ms | 100 | 48 | 6434.29 | 506.083 | 1(Win) |
| std::from_chars | 126.465 | 3.3032 | 1.03208ms | 100 | 30 | 18614.4 | 754.1 | 2(Loss) |
| strtoll/strtoull | 92.7887 | 1.44075 | 1.29625ms | 100 | 48 | 10525.2 | 1027.79 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 215.249 | 0.612546 | 5.49058ms | 1000 | 48 | 35353.8 | 4430.56 | 1(Win) |
| std::from_chars | 136.508 | 0.760747 | 9.38342ms | 1000 | 30 | 84739 | 6986.2 | 2(Loss) |
| strtoll/strtoull | 96.861 | 1.06143 | 13.2493ms | 1000 | 30 | 327644 | 9845.8 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 215.88 | 0.514132 | 55.702ms | 10000 | 48 | 2.4761e+06 | 44176.2 | 1(Win) |
| std::from_chars | 143.072 | 0.640278 | 81.8897ms | 10000 | 30 | 5.4645e+06 | 66657 | 2(Loss) |
| strtoll/strtoull | 98.5328 | 0.731334 | 121.148ms | 10000 | 30 | 1.50311e+07 | 96787.5 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.165 | 2.66852 | 735.888ms | 100000 | 30 | 4.61587e+09 | 464832 | 1(Win) |
| std::from_chars | 142.547 | 0.638857 | 821.048ms | 100000 | 30 | 5.48037e+08 | 669022 | 2(Loss) |
| strtoll/strtoull | 95.5132 | 0.411153 | 1234.25ms | 100000 | 48 | 8.08949e+08 | 998474 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 204.12 | 2.14441 | 5.77412ms | 1000 | 30 | 301139 | 4672.13 | 1(Win) |
| std::from_chars | 140.707 | 0.410769 | 8.27587ms | 1000 | 30 | 23253.4 | 6777.73 | 2(Loss) |
| strtoll/strtoull | 96.4814 | 0.956824 | 11.8602ms | 1000 | 48 | 429357 | 9884.54 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.667 | 1.25254 | 57.2584ms | 10000 | 30 | 9.55438e+06 | 45055.5 | 1(Win) |
| std::from_chars | 139.812 | 0.497503 | 103.65ms | 10000 | 30 | 3.4548e+06 | 68211 | 2(Loss) |
| strtoll/strtoull | 95.5146 | 1.43027 | 129.025ms | 10000 | 30 | 6.11814e+07 | 99845.9 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 217.497 | 0.530118 | 573.251ms | 100000 | 30 | 1.62092e+08 | 438478 | 1(Win) |
| std::from_chars | 138.808 | 0.963413 | 826.83ms | 100000 | 30 | 1.31437e+09 | 687046 | 2(Loss) |
| strtoll/strtoull | 97.5342 | 0.384157 | 1302.45ms | 100000 | 30 | 4.23279e+08 | 977785 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 161.704 | 2.06847 | 72.9619ms | 10000 | 30 | 4.46454e+07 | 58976.5 | 1(Win) |
| std::from_chars | 133.576 | 0.842812 | 99.3662ms | 10000 | 48 | 1.738e+07 | 71395.9 | 2(Loss) |
| strtoll/strtoull | 72.3821 | 1.27966 | 140.881ms | 10000 | 30 | 8.52808e+07 | 131756 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 133.642 | 0.63296 | 889.048ms | 100000 | 30 | 6.12049e+08 | 713603 | 1(Win) |
| vn::from_chars | 118.542 | 1.28694 | 872.524ms | 100000 | 30 | 3.21584e+09 | 804506 | 2(Loss) |
| strtoll/strtoull | 88.6128 | 0.776404 | 1308.41ms | 100000 | 30 | 2.09461e+09 | 1.07623e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 193.143 | 1.61107 | 1.33667ms | 200 | 30 | 7593.71 | 987.533 | 1(Win) |
| vn::from_chars | 184.089 | 1.43853 | 1.30779ms | 200 | 30 | 6664.44 | 1036.1 | 2(Loss) |
| strtoll/strtoull | 115.604 | 1.09456 | 2.14117ms | 200 | 30 | 9784.02 | 1649.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 194.261 | 0.238227 | 12.0155ms | 2000 | 48 | 26260.9 | 9818.48 | 1(Win) |
| std::from_chars | 173.944 | 2.02809 | 12.0616ms | 2000 | 48 | 2.37386e+06 | 10965.3 | 2(Loss) |
| strtoll/strtoull | 120.751 | 0.277967 | 19.574ms | 2000 | 30 | 57834.4 | 15795.7 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 212.052 | 0.616189 | 110.503ms | 20000 | 30 | 9.21563e+06 | 89947.3 | 1(Win) |
| vn::from_chars | 194.204 | 0.600317 | 119.041ms | 20000 | 30 | 1.04286e+07 | 98213.8 | 2(Loss) |
| strtoll/strtoull | 117.671 | 0.643866 | 196.459ms | 20000 | 48 | 5.22818e+07 | 162091 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 191.538 | 0.52199 | 1199.89ms | 200000 | 30 | 8.10579e+08 | 995807 | 1(Win) |
| strtoll/strtoull | 111.79 | 0.340705 | 2035.06ms | 200000 | 48 | 1.62199e+09 | 1.70618e+06 | 2(Loss) |
| std::from_chars | 66.417 | 0.634028 | 3721.23ms | 200000 | 48 | 1.59133e+10 | 2.87178e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 317.222 | 1.5827 | 0.817708ms | 200 | 30 | 2716.75 | 601.267 | 1(Win) |
| std::from_chars | 200.177 | 0.829285 | 1.23433ms | 200 | 30 | 1873.11 | 952.833 | 2(Loss) |
| strtoll/strtoull | 151.409 | 0.517541 | 1.61917ms | 200 | 30 | 1275.17 | 1259.73 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.521 | 0.489285 | 7.28058ms | 2000 | 30 | 23917 | 5770.73 | 1(Win) |
| std::from_chars | 194.163 | 3.65685 | 11.5431ms | 2000 | 30 | 3.87134e+06 | 9823.43 | 2(Loss) |
| strtoll/strtoull | 145.492 | 3.88534 | 15.3951ms | 2000 | 30 | 7.78324e+06 | 13109.6 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 329.855 | 0.413408 | 70.106ms | 20000 | 48 | 2.74292e+06 | 57823.8 | 1(Win) |
| std::from_chars | 211.295 | 0.895838 | 108.894ms | 20000 | 30 | 1.96183e+07 | 90269.5 | 2(Loss) |
| strtoll/strtoull | 156.075 | 0.647032 | 148.467ms | 20000 | 30 | 1.8757e+07 | 122207 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 315.753 | 1.50124 | 739.404ms | 200000 | 30 | 2.4671e+09 | 604064 | 1(Win) |
| std::from_chars | 183.62 | 3.14396 | 1259.89ms | 200000 | 30 | 3.19962e+10 | 1.03875e+06 | 2(Loss) |
| strtoll/strtoull | 144.36 | 0.434 | 1559.96ms | 200000 | 30 | 9.86432e+08 | 1.32125e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 322.365 | 0.77236 | 7.31817ms | 2000 | 30 | 62650.5 | 5916.73 | 1(Win) |
| std::from_chars | 209.823 | 1.37067 | 11.3012ms | 2000 | 30 | 465738 | 9090.27 | 2(Loss) |
| strtoll/strtoull | 157.917 | 0.677319 | 14.8875ms | 2000 | 48 | 321239 | 12078.1 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 399.194 | 1.55408 | 0.60875ms | 200 | 30 | 1654.1 | 477.8 | 1(Win) |
| strtoll/strtoull | 162.526 | 0.452252 | 1.55187ms | 200 | 30 | 845.082 | 1173.57 | 2(Loss) |
| std::from_chars | 99.15 | 0.673618 | 2.38837ms | 200 | 30 | 5037.6 | 1923.7 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 396.783 | 1.75509 | 69.5028ms | 20000 | 48 | 3.41662e+07 | 48070.3 | 1(Win) |
| std::from_chars | 306.628 | 0.68681 | 78.1371ms | 20000 | 30 | 5.47561e+06 | 62204.1 | 2(Loss) |
| strtoll/strtoull | 161.834 | 1.17423 | 151.379ms | 20000 | 30 | 5.74581e+07 | 117858 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 436.442 | 0.482633 | 535.53ms | 200000 | 30 | 1.33464e+08 | 437022 | 1(Win) |
| std::from_chars | 268.246 | 0.542698 | 869.345ms | 200000 | 30 | 4.46715e+08 | 711044 | 2(Loss) |
| strtoll/strtoull | 162.636 | 0.523849 | 1413.33ms | 200000 | 30 | 1.1323e+09 | 1.17277e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 313.472 | 0.594512 | 1.57221ms | 400 | 48 | 2512.38 | 1216.92 | 1(Win) |
| std::from_chars | 233.636 | 0.576785 | 2.00867ms | 400 | 48 | 4257.04 | 1632.75 | 2(Loss) |
| strtoll/strtoull | 172.195 | 0.433439 | 2.83817ms | 400 | 30 | 2766.02 | 2215.33 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.272 | 0.320422 | 14.2356ms | 4000 | 30 | 40842.8 | 11515.3 | 1(Win) |
| std::from_chars | 237.414 | 1.58484 | 20.0657ms | 4000 | 48 | 3.11257e+06 | 16067.7 | 2(Loss) |
| strtoll/strtoull | 172.362 | 1.0985 | 29.0573ms | 4000 | 30 | 1.77321e+06 | 22131.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 329.41 | 0.713674 | 141.547ms | 40000 | 48 | 3.27859e+07 | 115804 | 1(Win) |
| std::from_chars | 237.175 | 0.863213 | 201.012ms | 40000 | 30 | 5.78282e+07 | 160839 | 2(Loss) |
| strtoll/strtoull | 172.219 | 0.793102 | 267.01ms | 40000 | 30 | 9.25842e+07 | 221503 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 103.235 | 0.50056 | 6014.32ms | 400000 | 30 | 1.02637e+10 | 3.69517e+06 | 1(Win) |
| vn::from_chars | 89.7477 | 4.58711 | 5634.46ms | 400000 | 48 | 1.82471e+12 | 4.25047e+06 | 2(Loss) |
| strtoll/strtoull | 65.473 | 3.18327 | 7121.96ms | 400000 | 30 | 1.03196e+12 | 5.82637e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 442.318 | 1.25003 | 1.114ms | 400 | 30 | 3486.67 | 862.433 | 1(Win) |
| std::from_chars | 246.321 | 0.411329 | 2.0535ms | 400 | 48 | 1947.76 | 1548.67 | 2(Loss) |
| strtoll/strtoull | 221.862 | 0.327623 | 2.179ms | 400 | 30 | 951.972 | 1719.4 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 403.843 | 2.84817 | 12.878ms | 4000 | 30 | 2.17144e+06 | 9446 | 1(Win) |
| std::from_chars | 255.377 | 1.4827 | 18.5542ms | 4000 | 30 | 1.47159e+06 | 14937.5 | 2(Loss) |
| strtoll/strtoull | 210.177 | 0.170675 | 27.8087ms | 4000 | 30 | 28788.1 | 18149.9 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 218.552 | 0.713062 | 239.591ms | 40000 | 30 | 4.64716e+07 | 174544 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 189.285 | 1.83926 | 266.527ms | 40000 | 30 | 4.12187e+08 | 201532 | 2(Tie) |
| vn::from_chars STATISTICAL TIE | 177.238 | 6.91479 | 217.321ms | 40000 | 30 | 6.64487e+09 | 215230 | 2(Tie) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.211 | 8.29439 | 1.41562ms | 400 | 30 | 291092 | 1187.6 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 160.156 | 7.96848 | 2.92217ms | 400 | 30 | 1.0807e+06 | 2381.87 | 2(Tie) |
| std::from_chars STATISTICAL TIE | 160.154 | 5.97324 | 2.66571ms | 400 | 48 | 971644 | 2381.9 | 2(Tie) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 466.304 | 0.823415 | 98.9362ms | 40000 | 30 | 1.36126e+07 | 81807.1 | 1(Win) |
| std::from_chars | 232.592 | 1.35039 | 386.738ms | 40000 | 30 | 1.47153e+08 | 164008 | 2(Loss) |
| strtoll/strtoull | 141.922 | 1.46162 | 313.901ms | 40000 | 30 | 4.6303e+08 | 268788 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 135.119 | 0.85852 | 4830.43ms | 400000 | 30 | 1.76242e+10 | 2.82321e+06 | 1(Win) |
| vn::from_chars | 82.3812 | 3.82275 | 10670.2ms | 400000 | 30 | 9.40018e+11 | 4.63054e+06 | 2(Loss) |
| strtoll/strtoull | 68.1573 | 4.43368 | 6728.64ms | 400000 | 30 | 1.84733e+12 | 5.5969e+06 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 545.095 | 1.19571 | 9.01487ms | 4000 | 48 | 336103 | 6998.23 | 1(Win) |
| std::from_chars | 334.593 | 0.52601 | 15.0904ms | 4000 | 48 | 172629 | 11401 | 2(Loss) |
| strtoll/strtoull | 168.843 | 7.48846 | 27.429ms | 4000 | 30 | 8.58734e+07 | 22593.1 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 789.365 | 0.24328 | 12.5545ms | 8000 | 30 | 16586.6 | 9665.23 | 1(Win) |
| strtoll/strtoull | 256.69 | 0.861641 | 36.9519ms | 8000 | 30 | 1.9676e+06 | 29722.2 | 2(Loss) |
| std::from_chars | 208.343 | 1.73017 | 45.0964ms | 8000 | 30 | 1.20427e+07 | 36619.5 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 724.315 | 1.14584 | 118.92ms | 80000 | 48 | 6.9922e+07 | 105332 | 1(Win) |
| std::from_chars | 321.998 | 0.683028 | 288.821ms | 80000 | 48 | 1.25716e+08 | 236939 | 2(Loss) |
| strtoll/strtoull | 266.392 | 0.698075 | 345.863ms | 80000 | 30 | 1.19912e+08 | 286397 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 890.321 | 2.00974 | 10.456ms | 8000 | 30 | 889792 | 8569.27 | 1(Win) |
| std::from_chars | 328.99 | 1.27219 | 29.6541ms | 8000 | 30 | 2.61118e+06 | 23190.3 | 2(Loss) |
| strtoll/strtoull | 251.645 | 1.43153 | 34.1114ms | 8000 | 30 | 5.651e+06 | 30318 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 661.912 | 2.09571 | 20.3137ms | 8000 | 30 | 1.7505e+06 | 11526.3 | 1(Win) |
| std::from_chars | 364.948 | 0.0948745 | 25.5087ms | 8000 | 48 | 18882.4 | 20905.4 | 2(Loss) |
| strtoll/strtoull | 245.67 | 1.76571 | 37.4236ms | 8000 | 30 | 9.02066e+06 | 31055.5 | 3(Loss) |
