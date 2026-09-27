# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 10.000000% AND mean shift < 5.000000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 123.32 | 8.03703 | 0.964096ms | 100 | 48 | 185424 | 773.333 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 117.641 | 7.11945 | 1.59795ms | 100 | 48 | 159889 | 810.667 | 1(Tie) |
| strtoll/strtoull | 76.091 | 4.98691 | 1.54496ms | 100 | 48 | 187515 | 1253.33 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.027 | 0.843022 | 8.34099ms | 1000 | 48 | 158233 | 6810.67 | 1(Win) |
| std::from_chars | 118.138 | 0.603109 | 10.3101ms | 1000 | 30 | 71110.3 | 8072.53 | 2(Loss) |
| strtoll/strtoull | 78.1529 | 0.563046 | 14.8329ms | 1000 | 30 | 141618 | 12202.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 139.228 | 0.65539 | 82.476ms | 10000 | 30 | 6.04596e+06 | 68497.1 | 1(Win) |
| std::from_chars | 121.899 | 0.314007 | 94.5759ms | 10000 | 48 | 2.8968e+06 | 78234.7 | 2(Loss) |
| strtoll/strtoull | 74.9555 | 1.03939 | 155.383ms | 10000 | 30 | 5.2465e+07 | 127232 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 134.665 | 0.21055 | 921.25ms | 100000 | 30 | 6.66991e+07 | 708181 | 1(Win) |
| std::from_chars | 115.174 | 0.839316 | 982.82ms | 100000 | 30 | 1.449e+09 | 828032 | 2(Loss) |
| strtoll/strtoull | 79.9969 | 0.600011 | 1434.7ms | 100000 | 48 | 2.45592e+09 | 1.19214e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.788 | 1.4392 | 5.12614ms | 1000 | 48 | 174269 | 4186.67 | 1(Win) |
| std::from_chars | 191.655 | 0.528558 | 6.06413ms | 1000 | 48 | 33203.7 | 4976 | 2(Loss) |
| strtoll/strtoull | 109.999 | 1.01828 | 10.4822ms | 1000 | 30 | 233820 | 8669.87 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.847 | 0.801893 | 50.0168ms | 10000 | 48 | 5.40742e+06 | 41856 | 1(Win) |
| std::from_chars | 192.025 | 0.491193 | 60.6679ms | 10000 | 30 | 1.78529e+06 | 49664 | 2(Loss) |
| strtoll/strtoull | 103.402 | 0.952023 | 111.553ms | 10000 | 48 | 3.70062e+07 | 92229.3 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 217.586 | 0.407802 | 518.891ms | 100000 | 30 | 9.58423e+07 | 438298 | 1(Win) |
| std::from_chars | 189.399 | 0.347179 | 602.967ms | 100000 | 48 | 1.46687e+08 | 503525 | 2(Loss) |
| strtoll/strtoull | 100.68 | 0.664356 | 1092.55ms | 100000 | 30 | 1.18806e+09 | 947234 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 247.322 | 1.41728 | 4.68198ms | 1000 | 48 | 143360 | 3856 | 1(Win) |
| std::from_chars | 182.017 | 1.81058 | 6.37286ms | 1000 | 30 | 269978 | 5239.47 | 2(Loss) |
| strtoll/strtoull | 110.107 | 1.08003 | 10.463ms | 1000 | 30 | 262521 | 8661.33 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 245.522 | 0.804501 | 46.774ms | 10000 | 48 | 4.68719e+06 | 38842.7 | 1(Win) |
| std::from_chars | 205.368 | 0.181107 | 56.247ms | 10000 | 48 | 339503 | 46437.3 | 2(Loss) |
| strtoll/strtoull | 112.637 | 0.10141 | 102.205ms | 10000 | 30 | 221165 | 84667.7 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 239.117 | 0.596856 | 506.482ms | 100000 | 30 | 1.69996e+08 | 398831 | 1(Win) |
| std::from_chars | 204.998 | 0.147727 | 565.619ms | 100000 | 48 | 2.26705e+07 | 465211 | 2(Loss) |
| strtoll/strtoull | 111.134 | 0.171457 | 1036.69ms | 100000 | 30 | 6.49436e+07 | 858129 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 165.568 | 1.741 | 7.40608ms | 1000 | 30 | 301692 | 5760 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 156.306 | 2.98445 | 7.23686ms | 1000 | 30 | 994716 | 6101.33 | 1(Tie) |
| strtoll/strtoull | 100.176 | 0.766531 | 11.5121ms | 1000 | 48 | 255608 | 9520 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.367 | 0.235563 | 65.9011ms | 10000 | 30 | 481275 | 53768.5 | 1(Win) |
| std::from_chars | 166.209 | 0.48297 | 70.6089ms | 10000 | 30 | 2.30385e+06 | 57378.1 | 2(Loss) |
| strtoll/strtoull | 100.831 | 0.335389 | 114.585ms | 10000 | 48 | 4.83003e+06 | 94581.3 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.494 | 0.298461 | 665.577ms | 100000 | 30 | 8.16865e+07 | 552875 | 1(Win) |
| std::from_chars | 150.533 | 0.639227 | 732.708ms | 100000 | 30 | 4.92003e+08 | 633532 | 2(Loss) |
| strtoll/strtoull | 100.772 | 0.111759 | 1140.74ms | 100000 | 30 | 3.35587e+07 | 946364 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 215.959 | 1.23328 | 11.6012ms | 2000 | 30 | 355928 | 8832 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 213.484 | 2.61874 | 11.008ms | 2000 | 30 | 1.64224e+06 | 8934.4 | 1(Tie) |
| strtoll/strtoull | 133.443 | 0.474985 | 17.3391ms | 2000 | 48 | 221242 | 14293.3 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.754 | 0.140376 | 100.829ms | 20000 | 30 | 414609 | 83746.1 | 1(Win) |
| std::from_chars | 194.988 | 1.16304 | 117.024ms | 20000 | 48 | 6.2126e+07 | 97818.7 | 2(Loss) |
| strtoll/strtoull | 134.544 | 0.25709 | 171.187ms | 20000 | 30 | 3.98497e+06 | 141764 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.048 | 0.333212 | 1007.44ms | 200000 | 30 | 2.35065e+08 | 840064 | 1(Win) |
| strtoll/strtoull | 132.925 | 0.405699 | 1778.98ms | 200000 | 30 | 1.01666e+09 | 1.43491e+06 | 2(Loss) |
| std::from_chars | 69.2433 | 1.39064 | 3250.63ms | 200000 | 30 | 4.40205e+10 | 2.75456e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 312.612 | 0.912347 | 7.41888ms | 2000 | 48 | 148734 | 6101.33 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 292.18 | 4.3358 | 7.73709ms | 2000 | 30 | 2.40336e+06 | 6528 | 1(Tie) |
| strtoll/strtoull | 173.944 | 0.31825 | 13.2122ms | 2000 | 30 | 36534.4 | 10965.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 318.446 | 0.891963 | 71.6411ms | 20000 | 30 | 8.56254e+06 | 59895.5 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 312.776 | 0.481828 | 73.3379ms | 20000 | 48 | 4.14399e+06 | 60981.3 | 1(Tie) |
| strtoll/strtoull | 167.755 | 0.645813 | 138.126ms | 20000 | 30 | 1.61749e+07 | 113698 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 324.413 | 0.160459 | 743.376ms | 200000 | 30 | 2.67002e+07 | 587938 | 1(Win) |
| std::from_chars | 292.077 | 1.03897 | 763.031ms | 200000 | 30 | 1.38101e+09 | 653030 | 2(Loss) |
| strtoll/strtoull | 172.767 | 0.35879 | 1340.74ms | 200000 | 30 | 4.70697e+08 | 1.104e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 347.617 | 1.72819 | 6.59098ms | 2000 | 30 | 269752 | 5486.93 | 1(Win) |
| std::from_chars | 316.149 | 1.10844 | 7.29293ms | 2000 | 30 | 134160 | 6033.07 | 2(Loss) |
| strtoll/strtoull | 173.944 | 0.549328 | 13.3499ms | 2000 | 30 | 108850 | 10965.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 352.997 | 0.848119 | 66.2318ms | 20000 | 30 | 6.30019e+06 | 54033.1 | 1(Win) |
| std::from_chars | 326.828 | 0.185135 | 70.3119ms | 20000 | 30 | 350203 | 58359.5 | 2(Loss) |
| strtoll/strtoull | 156.645 | 0.942056 | 144.763ms | 20000 | 30 | 3.94729e+07 | 121762 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 354.812 | 0.252764 | 646.935ms | 200000 | 30 | 5.5388e+07 | 537566 | 1(Win) |
| std::from_chars | 301.81 | 0.319225 | 777.263ms | 200000 | 30 | 1.22098e+08 | 631970 | 2(Loss) |
| strtoll/strtoull | 172.985 | 0.273926 | 1335.37ms | 200000 | 48 | 4.37876e+08 | 1.10261e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 447.931 | 2.00712 | 5.248ms | 2000 | 30 | 219131 | 4258.13 | 1(Win) |
| std::from_chars | 382.081 | 0.476142 | 6.07002ms | 2000 | 30 | 16949 | 4992 | 2(Loss) |
| strtoll/strtoull | 186.42 | 0.753814 | 12.406ms | 2000 | 30 | 178454 | 10231.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 449.677 | 0.172512 | 51.2102ms | 20000 | 48 | 257002 | 42416 | 1(Win) |
| std::from_chars | 396.307 | 0.873095 | 57.664ms | 20000 | 30 | 5.29712e+06 | 48128 | 2(Loss) |
| strtoll/strtoull | 186.537 | 0.265639 | 123.251ms | 20000 | 48 | 3.54127e+06 | 102251 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 448.898 | 0.303959 | 523.802ms | 200000 | 48 | 8.00641e+07 | 424896 | 1(Win) |
| std::from_chars | 399.588 | 0.176246 | 594.53ms | 200000 | 30 | 2.12322e+07 | 477329 | 2(Loss) |
| strtoll/strtoull | 184.657 | 0.165733 | 1274.46ms | 200000 | 48 | 1.40664e+08 | 1.03291e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 369.45 | 3.66076 | 1.24979ms | 400 | 30 | 42862.1 | 1032.53 | 1(Win) |
| std::from_chars | 261.042 | 5.02898 | 1.72902ms | 400 | 48 | 259239 | 1461.33 | 2(Loss) |
| strtoll/strtoull | 179.262 | 2.21257 | 2.82598ms | 400 | 48 | 106409 | 2128 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 398.249 | 0.754222 | 11.6639ms | 4000 | 48 | 250524 | 9578.67 | 1(Win) |
| std::from_chars | 301.847 | 0.742741 | 15.2031ms | 4000 | 30 | 264329 | 12637.9 | 2(Loss) |
| strtoll/strtoull | 193.365 | 0.677421 | 23.6969ms | 4000 | 48 | 857284 | 19728 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 400.425 | 0.130591 | 115.672ms | 40000 | 30 | 464326 | 95266.1 | 1(Win) |
| std::from_chars | 304.675 | 0.280822 | 150.552ms | 40000 | 48 | 5.93403e+06 | 125205 | 2(Loss) |
| strtoll/strtoull | 194.135 | 0.341548 | 237.067ms | 40000 | 30 | 1.35125e+07 | 196497 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 303.872 | 0.222219 | 3351.32ms | 400000 | 30 | 2.33465e+08 | 1.25536e+06 | 1(Win) |
| vn::from_chars | 121.344 | 1.04435 | 4028ms | 400000 | 30 | 3.23367e+10 | 3.14371e+06 | 2(Loss) |
| strtoll/strtoull | 74.9809 | 0.805808 | 5510.44ms | 400000 | 30 | 5.042e+10 | 5.08756e+06 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 521.323 | 0.183816 | 88.628ms | 40000 | 30 | 542744 | 73173.3 | 1(Win) |
| std::from_chars | 383.639 | 0.419992 | 119.691ms | 40000 | 48 | 8.37141e+06 | 99434.7 | 2(Loss) |
| strtoll/strtoull | 230.252 | 0.33017 | 199.411ms | 40000 | 30 | 8.97655e+06 | 165675 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 129.624 | 0.93482 | 3665.45ms | 400000 | 48 | 3.63282e+10 | 2.94289e+06 | 1(Win) |
| std::from_chars | 120.602 | 2.21402 | 2694.17ms | 400000 | 30 | 1.47129e+11 | 3.16306e+06 | 2(Loss) |
| strtoll/strtoull | 102.031 | 0.8808 | 4572.83ms | 400000 | 48 | 5.20538e+10 | 3.73877e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 525.923 | 8.99909 | 0.923136ms | 400 | 48 | 204510 | 725.333 | 1(Win) |
| std::from_chars | 372.529 | 2.35389 | 1.29894ms | 400 | 48 | 27887.7 | 1024 | 2(Loss) |
| strtoll/strtoull | 224.641 | 4.92802 | 2.09382ms | 400 | 30 | 210092 | 1698.13 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 550.536 | 1.07654 | 8.40192ms | 4000 | 30 | 166928 | 6929.07 | 1(Win) |
| std::from_chars | 330.372 | 2.28317 | 14.0628ms | 4000 | 48 | 3.33603e+06 | 11546.7 | 2(Loss) |
| strtoll/strtoull | 229.764 | 0.418234 | 20.148ms | 4000 | 48 | 231439 | 16602.7 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 553.689 | 0.442764 | 84.4521ms | 40000 | 48 | 4.46656e+06 | 68896 | 1(Win) |
| std::from_chars | 380.455 | 0.642111 | 120.505ms | 40000 | 30 | 1.24353e+07 | 100267 | 2(Loss) |
| strtoll/strtoull | 221.656 | 0.39645 | 205.937ms | 40000 | 30 | 1.39656e+07 | 172100 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 784.272 | 1.33531 | 5.97222ms | 4000 | 30 | 126552 | 4864 | 1(Win) |
| std::from_chars | 440.971 | 1.66939 | 10.6501ms | 4000 | 48 | 1.00105e+06 | 8650.67 | 2(Loss) |
| strtoll/strtoull | 248.094 | 0.452732 | 26.9361ms | 4000 | 48 | 232601 | 15376 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 798.134 | 0.227026 | 58.0119ms | 40000 | 30 | 353216 | 47795.2 | 1(Win) |
| std::from_chars | 454.275 | 0.414622 | 100.575ms | 40000 | 48 | 5.81873e+06 | 83973.3 | 2(Loss) |
| strtoll/strtoull | 228.557 | 0.976006 | 201.942ms | 40000 | 30 | 7.96081e+07 | 166903 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 856.594 | 5.13403 | 1.82989ms | 800 | 48 | 100367 | 890.667 | 1(Win) |
| std::from_chars | 447.035 | 3.92754 | 2.10611ms | 800 | 48 | 215665 | 1706.67 | 2(Loss) |
| strtoll/strtoull | 278.526 | 3.17327 | 3.27322ms | 800 | 30 | 226664 | 2739.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 873.968 | 0.915014 | 10.668ms | 8000 | 30 | 191410 | 8729.6 | 1(Win) |
| std::from_chars | 412.394 | 1.70309 | 22.4801ms | 8000 | 30 | 2.9782e+06 | 18500.3 | 2(Loss) |
| strtoll/strtoull | 287.945 | 0.375632 | 32.4209ms | 8000 | 30 | 297172 | 26496 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 871.307 | 0.351443 | 105.411ms | 80000 | 48 | 4.54557e+06 | 87562.7 | 1(Win) |
| std::from_chars | 455.577 | 0.318814 | 202.005ms | 80000 | 30 | 8.55169e+06 | 167467 | 2(Loss) |
| strtoll/strtoull | 286.533 | 0.206894 | 320.784ms | 80000 | 30 | 9.10431e+06 | 266266 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1138.94 | 1.30962 | 8.11213ms | 8000 | 30 | 230883 | 6698.67 | 1(Win) |
| std::from_chars | 514.424 | 0.474947 | 18.901ms | 8000 | 30 | 148850 | 14830.9 | 2(Loss) |
| strtoll/strtoull | 325.471 | 0.885035 | 28.106ms | 8000 | 30 | 1.29121e+06 | 23441.1 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1098.77 | 0.82188 | 82.2001ms | 80000 | 30 | 9.77021e+06 | 69435.7 | 1(Win) |
| std::from_chars | 489.579 | 0.594235 | 186.608ms | 80000 | 30 | 2.5726e+07 | 155836 | 2(Loss) |
| strtoll/strtoull | 324.703 | 0.353068 | 283.607ms | 80000 | 30 | 2.06465e+07 | 234965 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 973.932 | 2.06447 | 9.38701ms | 8000 | 30 | 784624 | 7833.6 | 1(Win) |
| std::from_chars | 431.267 | 1.42201 | 21.3788ms | 8000 | 48 | 3.03763e+06 | 17690.7 | 2(Loss) |
| strtoll/strtoull | 279.048 | 1.82822 | 34.517ms | 8000 | 30 | 7.49551e+06 | 27340.8 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1078.09 | 0.876939 | 86.2111ms | 80000 | 48 | 1.84865e+07 | 70768 | 1(Win) |
| std::from_chars | 498.756 | 0.444356 | 207.995ms | 80000 | 30 | 1.38608e+07 | 152969 | 2(Loss) |
| strtoll/strtoull | 311.502 | 0.464309 | 324.645ms | 80000 | 48 | 6.20744e+07 | 244923 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 715.256 | 4.16223 | 1.25901ms | 800 | 30 | 59133.1 | 1066.67 | 1(Win) |
| std::from_chars | 373.502 | 7.61535 | 2.71898ms | 800 | 48 | 1.16149e+06 | 2042.67 | 2(Loss) |
| strtoll/strtoull | 272.582 | 2.7363 | 3.40403ms | 800 | 30 | 175968 | 2798.93 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 676.045 | 4.618 | 13.858ms | 8000 | 48 | 1.3037e+07 | 11285.3 | 1(Win) |
| std::from_chars | 423.128 | 1.19794 | 22.0531ms | 8000 | 30 | 1.39968e+06 | 18030.9 | 2(Loss) |
| strtoll/strtoull | 268.651 | 0.337381 | 37.7441ms | 8000 | 30 | 275402 | 28398.9 | 3(Loss) |
