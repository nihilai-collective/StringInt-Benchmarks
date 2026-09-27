# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 618.613 | 1.45741 | 3.56066ms | 265 | 48 | 1697.87 | 408.083 | 4.62671 | 1(Win) |
| jeaiii::to_text | 411.386 | 1.19327 | 5.87898ms | 265 | 48 | 2573.68 | 613.646 | 7.0835 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 632.095 | 1.9113 | 50.1141ms | 26452 | 48 | 2.7928e+07 | 39908.9 | 4.80191 | 1(Win) |
| jeaiii::to_text | 436.37 | 1.03708 | 73.5197ms | 26471 | 30 | 1.07991e+07 | 57852.3 | 6.95679 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 647.203 | 1.1217 | 453.645ms | 264607 | 30 | 5.73847e+08 | 389907 | 4.69227 | 1(Win) |
| jeaiii::to_text | 444.525 | 0.932467 | 697.608ms | 264641 | 30 | 8.40833e+08 | 567755 | 6.83121 | 2(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1992.61 | 4.70492 | 3.3994ms | 316 | 30 | 1521.55 | 151.367 | 1.31882 | 1(Win) |
| jeaiii::to_text | 890.947 | 1.77154 | 3.47068ms | 316 | 30 | 1079.02 | 338.533 | 3.20204 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2076.04 | 1.69875 | 5.06199ms | 3142 | 30 | 18039.8 | 1443.53 | 1.43244 | 1(Win) |
| jeaiii::to_text | 987.863 | 0.821778 | 7.17898ms | 3145 | 30 | 18671.8 | 3035.83 | 3.05118 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2088.88 | 0.807162 | 21.5769ms | 31424 | 30 | 402295 | 14346.7 | 1.45156 | 1(Win) |
| jeaiii::to_text | 981.489 | 0.299058 | 44.9338ms | 31443 | 30 | 250438 | 30551.6 | 3.09312 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2493.48 | 1.00571 | 157.751ms | 314496 | 30 | 4.3902e+07 | 120284 | 1.21789 | 1(Win) |
| jeaiii::to_text | 1040.32 | 0.822158 | 363.531ms | 314496 | 30 | 1.68549e+08 | 288302 | 2.91933 | 2(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1778.74 | 2.68759 | 3.27182ms | 216 | 48 | 466.702 | 116.021 | 1.43285 | 1(Win) |
| jeaiii::to_text | 607.57 | 1.45495 | 3.44911ms | 216 | 48 | 1172.31 | 339.667 | 4.65553 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1326.88 | 0.96106 | 21.7271ms | 21489 | 30 | 660995 | 15445 | 2.28046 | 1(Win) |
| jeaiii::to_text | 655.069 | 0.503751 | 41.0642ms | 21498 | 30 | 745722 | 31297.7 | 4.63367 | 2(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2042.57 | 3.90892 | 3.37391ms | 257 | 48 | 1059.43 | 120.188 | 1.25283 | 1(Win) |
| jeaiii::to_text | 605.404 | 1.87006 | 3.5129ms | 257 | 30 | 1714.62 | 404.267 | 4.75464 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1937.87 | 1.59523 | 4.80335ms | 2565 | 30 | 12168.3 | 1262.5 | 1.53906 | 1(Win) |
| jeaiii::to_text | 663.977 | 0.528831 | 7.70853ms | 2574 | 48 | 18343.5 | 3696.6 | 4.54673 | 2(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 821.587 | 0.55615 | 10.5988ms | 5166 | 30 | 33362.8 | 5996.23 | 3.67964 | 1(Win) |
| jeaiii::to_text | 799.71 | 0.370731 | 10.6716ms | 5163 | 48 | 25012 | 6157.35 | 3.784 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 796.749 | 0.696996 | 77.1359ms | 51645 | 30 | 5.5692e+06 | 61816.7 | 3.80961 | 1(Win) |
| jeaiii::to_text | 753.799 | 2.45813 | 80.4411ms | 51625 | 30 | 7.73272e+07 | 65313.2 | 4.02847 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 833.223 | 0.662861 | 718.714ms | 516132 | 48 | 7.36014e+08 | 590745 | 3.64442 | 1(Win) |
| jeaiii::to_text | 813.254 | 0.598144 | 744.868ms | 516140 | 30 | 3.93201e+08 | 605259 | 3.7343 | 2(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1533.91 | 1.78301 | 3.60313ms | 565 | 30 | 1178.81 | 351.567 | 1.85935 | 1(Win) |
| jeaiii::to_text | 1433.98 | 1.59102 | 3.67336ms | 565 | 30 | 1074 | 376.067 | 1.98715 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1536.9 | 0.929003 | 7.56628ms | 5666 | 30 | 32004 | 3515.8 | 1.95981 | 1(Win) |
| jeaiii::to_text | 1441.13 | 0.698628 | 7.70551ms | 5662 | 48 | 32886.2 | 3746.62 | 2.09502 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1669.25 | 0.962018 | 407.489ms | 566125 | 48 | 4.64719e+08 | 323438 | 1.81859 | 1(Win) |
| jeaiii::to_text | 1536.37 | 2.14539 | 430.271ms | 566125 | 48 | 2.72825e+09 | 351411 | 1.97595 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1240.41 | 0.825089 | 8.08942ms | 4666 | 30 | 26277.6 | 3587 | 2.42759 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1219.4 | 0.666834 | 7.69076ms | 4664 | 48 | 28402.9 | 3647.9 | 2.47585 | 1(Tie) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1171.03 | 1.0142 | 48.5593ms | 46618 | 30 | 4.44777e+06 | 37965.4 | 2.5908 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1168.38 | 1.95127 | 49.1678ms | 46618 | 30 | 1.65386e+07 | 38051.4 | 2.59743 | 1(Tie) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1292.31 | 0.855161 | 429.26ms | 466107 | 48 | 4.15312e+08 | 343969 | 2.34962 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1259.4 | 1.73889 | 435.335ms | 466107 | 48 | 1.80812e+09 | 352956 | 2.39496 | 1(Tie) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1783.31 | 1.27333 | 6.56805ms | 4832 | 30 | 32479.8 | 2584.07 | 1.67931 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1745.71 | 1.09993 | 6.52985ms | 4829 | 30 | 25263.2 | 2638.27 | 1.72442 | 1(Tie) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1755.41 | 0.496031 | 35.0882ms | 48315 | 30 | 508560 | 26248.3 | 1.72849 | 1(Win) |
| jeaiii::to_text | 1695.72 | 0.62872 | 37.4814ms | 48312 | 48 | 1.40073e+06 | 27170.6 | 1.78917 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2088.82 | 1.76382 | 283.108ms | 483022 | 30 | 4.53906e+08 | 220530 | 1.4525 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2063.87 | 0.639415 | 291.184ms | 483022 | 30 | 6.11021e+07 | 223195 | 1.47094 | 1(Tie) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1159.72 | 0.985135 | 4.0927ms | 998 | 48 | 3140.4 | 821.062 | 2.53835 | 1(Win) |
| jeaiii::to_text | 1109.49 | 1.8885 | 4.1619ms | 998 | 30 | 7873.98 | 857.867 | 2.66347 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1203.29 | 0.999853 | 100.061ms | 99819 | 30 | 1.87708e+07 | 79112.3 | 2.52379 | 1(Win) |
| jeaiii::to_text | 1122.21 | 0.735813 | 105.967ms | 99819 | 30 | 1.1688e+07 | 84828.4 | 2.70691 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1288.57 | 0.666204 | 904.976ms | 998315 | 30 | 7.26863e+08 | 738854 | 2.35553 | 1(Win) |
| jeaiii::to_text | 986.261 | 3.00339 | 1008.7ms | 998246 | 30 | 2.52137e+10 | 965263 | 3.07662 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1770.4 | 0.632498 | 10.4278ms | 10480 | 30 | 38249.3 | 5645.37 | 1.70485 | 1(Win) |
| jeaiii::to_text | 1570.78 | 0.625623 | 11.5086ms | 10484 | 30 | 47573.1 | 6365.13 | 1.92591 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1835.96 | 1.18857 | 71.9929ms | 104805 | 30 | 1.25607e+07 | 54440.3 | 1.65233 | 1(Win) |
| jeaiii::to_text | 1641.9 | 0.225993 | 78.5204ms | 104805 | 30 | 567783 | 60874.6 | 1.84919 | 2(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2114.14 | 0.720048 | 588.884ms | 1048286 | 30 | 3.47804e+08 | 472874 | 1.4355 | 1(Win) |
| jeaiii::to_text | 1837.11 | 0.955084 | 674.31ms | 1048277 | 48 | 1.29659e+09 | 544177 | 1.6523 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1773.87 | 1.57485 | 3.71603ms | 950 | 30 | 1941.59 | 510.833 | 1.63399 | 1(Win) |
| jeaiii::to_text | 1482.1 | 1.86242 | 4.02433ms | 947 | 30 | 3865.22 | 609.467 | 1.96966 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1691.64 | 0.67768 | 9.62066ms | 9487 | 30 | 39414 | 5348.6 | 1.78374 | 1(Win) |
| jeaiii::to_text | 1541.62 | 0.585899 | 10.3492ms | 9482 | 30 | 35434.9 | 5865.87 | 1.96153 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1694.84 | 0.701395 | 164.532ms | 94823 | 30 | 4.2016e+06 | 53356.1 | 1.79127 | 1(Win) |
| jeaiii::to_text | 1572.11 | 1.02245 | 76.723ms | 94848 | 30 | 1.03825e+07 | 57537 | 1.92996 | 2(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1870.42 | 0.893833 | 584.923ms | 948245 | 48 | 8.9643e+08 | 483483 | 1.62315 | 1(Win) |
| jeaiii::to_text | 1655.02 | 0.335002 | 678.409ms | 948245 | 48 | 1.60831e+08 | 546407 | 1.83451 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2276.74 | 1.06068 | 8.30772ms | 9741 | 30 | 56196.1 | 4080.47 | 1.32186 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2271.25 | 1.01094 | 8.07938ms | 9741 | 30 | 51296.9 | 4090.33 | 1.32551 | 1(Tie) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2243.01 | 1.09068 | 51.6478ms | 97406 | 30 | 6.12101e+06 | 41414.6 | 1.35277 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2204.23 | 1.0321 | 54.5391ms | 97406 | 30 | 5.6757e+06 | 42143.2 | 1.37671 | 1(Tie) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 2755.08 | 0.547517 | 429.702ms | 974110 | 48 | 1.636e+08 | 337189 | 1.10212 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 2739.1 | 0.794288 | 426.937ms | 974128 | 30 | 2.17718e+08 | 339163 | 1.10826 | 1(Tie) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2437.56 | 2.03275 | 4.02432ms | 1936 | 30 | 7113.64 | 757.533 | 1.20507 | 1(Win) |
| jeaiii::to_text | 1896.87 | 2.67564 | 4.2759ms | 1936 | 30 | 20352.6 | 973.467 | 1.56169 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2350.79 | 0.425824 | 12.7497ms | 19383 | 48 | 53818 | 7863.44 | 1.28743 | 1(Win) |
| jeaiii::to_text | 2062.67 | 0.455804 | 13.977ms | 19384 | 30 | 50061.5 | 8962.17 | 1.468 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2427.69 | 0.693739 | 95.0233ms | 193808 | 30 | 8.36894e+06 | 76134 | 1.25084 | 1(Win) |
| jeaiii::to_text | 2128.71 | 0.710779 | 107.79ms | 193808 | 30 | 1.14261e+07 | 86826.8 | 1.42651 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3725.13 | 2.79504 | 3.75846ms | 1989 | 30 | 6079.18 | 509.3 | 0.776964 | 1(Win) |
| jeaiii::to_text | 2768.73 | 2.7453 | 4.31553ms | 1989 | 30 | 10612.3 | 685.1 | 1.06248 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3522.79 | 0.646154 | 68.1608ms | 198794 | 30 | 3.62766e+06 | 53816.6 | 0.861622 | 1(Win) |
| jeaiii::to_text | 2871.85 | 1.10007 | 79.9519ms | 198786 | 48 | 2.53121e+07 | 66012.2 | 1.05695 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4414.5 | 0.378378 | 545.555ms | 1987985 | 30 | 7.92203e+07 | 429469 | 0.687788 | 1(Win) |
| jeaiii::to_text | 3502.47 | 0.384794 | 684.658ms | 1987985 | 30 | 1.30153e+08 | 541300 | 0.866891 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3347.29 | 3.89588 | 3.80874ms | 1888 | 30 | 13177.8 | 537.967 | 0.871271 | 1(Win) |
| jeaiii::to_text | 2628.61 | 2.88898 | 3.97264ms | 1887 | 30 | 11738.5 | 684.7 | 1.12336 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3349.09 | 0.486336 | 9.7596ms | 18877 | 48 | 32804.9 | 5375.42 | 0.901767 | 1(Win) |
| jeaiii::to_text | 2700.85 | 0.792191 | 11.2021ms | 18880 | 30 | 83668.9 | 6666.4 | 1.11947 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4124.66 | 0.585188 | 543.074ms | 1887981 | 30 | 1.95764e+08 | 436526 | 0.736056 | 1(Win) |
| jeaiii::to_text | 3274.02 | 0.593122 | 670.78ms | 1887951 | 48 | 5.10678e+08 | 549932 | 0.927348 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2730.42 | 2.52725 | 3.9339ms | 1939 | 30 | 8791.55 | 677.367 | 1.07107 | 1(Win) |
| jeaiii::to_text | 2223.08 | 1.52607 | 4.18041ms | 1940 | 48 | 7741.25 | 832.167 | 1.32646 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2701.88 | 0.516793 | 12.0344ms | 19400 | 48 | 60109.7 | 6847.54 | 1.11909 | 1(Win) |
| jeaiii::to_text | 2313.64 | 0.394564 | 13.1923ms | 19395 | 30 | 29851 | 7994.7 | 1.30821 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2587.61 | 1.20537 | 84.4817ms | 193998 | 30 | 2.22821e+07 | 71498.6 | 1.17327 | 1(Win) |
| jeaiii::to_text | 2251.44 | 0.64762 | 98.7713ms | 193962 | 30 | 8.49334e+06 | 82159.6 | 1.34855 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3208.91 | 0.63672 | 710.65ms | 1939737 | 48 | 6.46711e+08 | 576482 | 0.945988 | 1(Win) |
| jeaiii::to_text | 2613.1 | 0.364685 | 892.452ms | 1939737 | 48 | 3.19928e+08 | 707925 | 1.16205 | 2(Loss) |
