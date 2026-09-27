# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 140.764 | 2.2058 | 3.92082ms | 100 | 30 | 6699.98 | 677.5 | 20.7863 | 1(Win) |
| std::from_chars | 118.024 | 2.51978 | 4.11398ms | 100 | 30 | 12436.7 | 808.033 | 25.1007 | 2(Loss) |
| strtoll/strtoull | 81.7973 | 1.3222 | 4.46591ms | 100 | 30 | 7129.2 | 1165.9 | 36.2343 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 149.44 | 0.922949 | 11.4587ms | 1000 | 48 | 166518 | 6381.65 | 20.0722 | 1(Win) |
| std::from_chars | 131.73 | 0.324541 | 11.8867ms | 1000 | 30 | 16561.3 | 7239.63 | 22.9942 | 2(Loss) |
| strtoll/strtoull | 89.216 | 0.362446 | 16.1501ms | 1000 | 48 | 72051.6 | 10689.5 | 33.9929 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 156.456 | 0.944416 | 83.5717ms | 10000 | 30 | 9.94174e+06 | 60954.7 | 19.408 | 1(Win) |
| std::from_chars | 133.806 | 0.730043 | 93.026ms | 10000 | 30 | 8.12206e+06 | 71272.8 | 22.6996 | 2(Loss) |
| strtoll/strtoull | 86.9251 | 0.824263 | 136.758ms | 10000 | 30 | 2.45336e+07 | 109712 | 34.9431 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 153.475 | 0.678987 | 772.485ms | 100000 | 30 | 5.34031e+08 | 621386 | 19.7937 | 1(Win) |
| std::from_chars | 123.563 | 0.410131 | 913.916ms | 100000 | 30 | 3.00602e+08 | 771815 | 24.5847 | 2(Loss) |
| strtoll/strtoull | 87.4712 | 0.265303 | 1317.97ms | 100000 | 30 | 2.51001e+08 | 1.09027e+06 | 34.7382 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 269.434 | 0.879194 | 7.56692ms | 1000 | 48 | 46484.1 | 3539.54 | 11.2027 | 1(Win) |
| std::from_chars | 224.731 | 0.553911 | 8.33119ms | 1000 | 48 | 26521.3 | 4243.62 | 13.4461 | 2(Loss) |
| strtoll/strtoull | 127.012 | 0.348401 | 12.399ms | 1000 | 48 | 32848 | 7508.52 | 23.8658 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 229.675 | 0.368668 | 58.8277ms | 10000 | 30 | 703014 | 41522.7 | 13.2214 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 227.946 | 0.988928 | 53.1755ms | 10000 | 48 | 8.21688e+06 | 41837.8 | 13.2749 | 1(Tie) |
| strtoll/strtoull | 119.979 | 0.902709 | 108.344ms | 10000 | 48 | 2.4713e+07 | 79486.6 | 25.3147 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 256.332 | 0.516051 | 477.081ms | 100000 | 30 | 1.10587e+08 | 372047 | 11.8511 | 1(Win) |
| std::from_chars | 202.01 | 0.634686 | 556.464ms | 100000 | 30 | 2.69335e+08 | 472092 | 15.0355 | 2(Loss) |
| strtoll/strtoull | 122.374 | 0.849502 | 953.854ms | 100000 | 30 | 1.31483e+09 | 779309 | 24.825 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 205.33 | 1.4026 | 3.62534ms | 100 | 48 | 2037.06 | 464.458 | 14.1385 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 191.092 | 3.20162 | 3.75178ms | 100 | 30 | 7659.1 | 499.067 | 15.3047 | 1(Tie) |
| strtoll/strtoull | 104.822 | 0.817755 | 4.21576ms | 100 | 30 | 1660.58 | 909.8 | 28.392 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 227.517 | 0.656222 | 8.47788ms | 1000 | 30 | 22698.4 | 4191.67 | 13.2808 | 1(Win) |
| std::from_chars | 212.913 | 0.665899 | 8.75063ms | 1000 | 30 | 26689 | 4479.17 | 14.1975 | 2(Loss) |
| strtoll/strtoull | 106.86 | 0.440166 | 13.7268ms | 1000 | 48 | 74070.3 | 8924.52 | 28.3799 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 222.39 | 1.2167 | 62.7285ms | 10000 | 30 | 8.16688e+06 | 42882.9 | 13.6511 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 215.994 | 1.2205 | 62.9331ms | 10000 | 30 | 8.7119e+06 | 44152.8 | 14.0514 | 1(Tie) |
| strtoll/strtoull | 105.904 | 0.506995 | 113.074ms | 10000 | 48 | 1.00052e+07 | 90051.1 | 28.6834 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 203.702 | 1.42358 | 582.077ms | 100000 | 48 | 2.13215e+09 | 468172 | 14.8997 | 1(Win) |
| vn::from_chars | 194.395 | 0.620441 | 574.65ms | 100000 | 30 | 2.7794e+08 | 490585 | 15.6231 | 2(Loss) |
| strtoll/strtoull | 100.562 | 1.35754 | 1134.63ms | 100000 | 30 | 4.97234e+09 | 948343 | 30.2116 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 208.715 | 1.20069 | 105.511ms | 20000 | 30 | 3.6119e+07 | 91385.2 | 14.552 | 1(Win) |
| std::from_chars | 200.54 | 0.864352 | 121.1ms | 20000 | 30 | 2.0275e+07 | 95110.6 | 15.1427 | 2(Loss) |
| strtoll/strtoull | 138.068 | 1.02627 | 168.639ms | 20000 | 30 | 6.03003e+07 | 138145 | 22.0057 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 362.428 | 1.71934 | 65.2413ms | 20000 | 30 | 2.45618e+07 | 52627 | 8.37914 | 1(Win) |
| std::from_chars | 323.479 | 0.515446 | 75.6298ms | 20000 | 30 | 2.77112e+06 | 58963.6 | 9.38887 | 2(Loss) |
| strtoll/strtoull | 180.015 | 0.599362 | 129.719ms | 20000 | 48 | 1.93582e+07 | 105955 | 16.877 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 348.369 | 2.83217 | 622.016ms | 200000 | 30 | 7.21346e+09 | 547509 | 8.7166 | 1(Win) |
| std::from_chars | 312.456 | 0.561007 | 698.468ms | 200000 | 30 | 3.51836e+08 | 610437 | 9.71788 | 2(Loss) |
| strtoll/strtoull | 176.182 | 0.33229 | 1298.31ms | 200000 | 30 | 3.88232e+08 | 1.0826e+06 | 17.2461 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 345.701 | 2.84821 | 3.69566ms | 200 | 30 | 7408.41 | 551.733 | 8.4745 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 329.82 | 1.97834 | 3.71789ms | 200 | 30 | 3926.7 | 578.3 | 8.905 | 1(Tie) |
| strtoll/strtoull | 193.286 | 0.978163 | 4.24965ms | 200 | 30 | 2795.13 | 986.8 | 15.424 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 448.911 | 0.702782 | 8.44626ms | 2000 | 30 | 26748.6 | 4248.83 | 6.73162 | 1(Win) |
| std::from_chars | 376.24 | 0.597791 | 9.36891ms | 2000 | 30 | 27551.8 | 5069.5 | 8.03733 | 2(Loss) |
| strtoll/strtoull | 194.731 | 0.353317 | 15.1408ms | 2000 | 30 | 35928.5 | 9794.77 | 15.5727 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 374.328 | 1.19505 | 63.6623ms | 20000 | 48 | 1.77978e+07 | 50953.9 | 8.10835 | 1(Win) |
| std::from_chars | 319.11 | 0.603198 | 77.8083ms | 20000 | 48 | 6.23935e+06 | 59770.9 | 9.51268 | 2(Loss) |
| strtoll/strtoull | 187.21 | 0.854676 | 126.16ms | 20000 | 48 | 3.63953e+07 | 101883 | 16.2281 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 419.371 | 0.506244 | 577.502ms | 200000 | 30 | 1.59039e+08 | 454811 | 7.24318 | 1(Win) |
| std::from_chars | 314.9 | 0.571124 | 688.853ms | 200000 | 30 | 3.59001e+08 | 605699 | 9.63392 | 2(Loss) |
| strtoll/strtoull | 187.459 | 0.422363 | 1253.11ms | 200000 | 30 | 5.54038e+08 | 1.01747e+06 | 16.2087 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 505.083 | 0.931788 | 481.67ms | 200000 | 30 | 3.71441e+08 | 377630 | 6.012 | 1(Win) |
| vn::from_chars | 453.446 | 0.461504 | 460.964ms | 200000 | 30 | 1.13053e+08 | 420634 | 6.69776 | 2(Loss) |
| strtoll/strtoull | 202.766 | 0.537602 | 1143.64ms | 200000 | 30 | 7.67206e+08 | 940664 | 14.983 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 380.329 | 0.878019 | 4.21597ms | 400 | 48 | 3722.64 | 1003 | 7.82891 | 1(Win) |
| std::from_chars | 293.905 | 1.13071 | 4.76172ms | 400 | 30 | 6461.44 | 1297.93 | 10.1563 | 2(Loss) |
| strtoll/strtoull | 223.321 | 0.798835 | 5.14238ms | 400 | 30 | 5585.94 | 1708.17 | 13.457 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 378.405 | 1.90562 | 125.596ms | 40000 | 48 | 1.77141e+08 | 100810 | 8.02473 | 1(Win) |
| std::from_chars | 295.679 | 0.451908 | 163.956ms | 40000 | 48 | 1.63163e+07 | 129015 | 10.2745 | 2(Loss) |
| strtoll/strtoull | 219.395 | 1.29581 | 212.114ms | 40000 | 30 | 1.5229e+08 | 173874 | 13.8464 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 424.903 | 0.445293 | 1159.22ms | 400000 | 30 | 4.79461e+08 | 897780 | 7.14423 | 1(Win) |
| std::from_chars | 312.935 | 0.64504 | 1513.56ms | 400000 | 30 | 1.85484e+09 | 1.21901e+06 | 9.70147 | 2(Loss) |
| strtoll/strtoull | 216.618 | 0.894043 | 2078.24ms | 400000 | 30 | 7.43652e+09 | 1.76103e+06 | 14.0231 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 537.685 | 1.82505 | 4.04704ms | 400 | 30 | 5029.64 | 709.467 | 5.49425 | 1(Win) |
| std::from_chars | 410.654 | 1.07645 | 4.35593ms | 400 | 30 | 2999.72 | 928.933 | 7.23783 | 2(Loss) |
| strtoll/strtoull | 256.986 | 0.937342 | 4.86042ms | 400 | 30 | 5807.9 | 1484.4 | 11.6562 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 500.876 | 1.04675 | 94.1199ms | 40000 | 48 | 3.0506e+07 | 76160.5 | 6.06117 | 1(Win) |
| std::from_chars | 378.129 | 1.1037 | 123.844ms | 40000 | 48 | 5.95087e+07 | 100883 | 8.02651 | 2(Loss) |
| strtoll/strtoull | 267.533 | 0.693844 | 174.683ms | 40000 | 48 | 4.69819e+07 | 142588 | 11.3541 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 573.889 | 0.563809 | 841.806ms | 400000 | 30 | 4.21357e+08 | 664710 | 5.2861 | 1(Win) |
| std::from_chars | 429.867 | 1.19689 | 1101.59ms | 400000 | 30 | 3.38438e+09 | 887413 | 7.06444 | 2(Loss) |
| strtoll/strtoull | 263.172 | 1.35556 | 1721.29ms | 400000 | 30 | 1.15823e+10 | 1.4495e+06 | 11.5436 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 475.688 | 3.50496 | 4.15786ms | 400 | 30 | 23700.9 | 801.933 | 6.19575 | 1(Win) |
| std::from_chars | 385.479 | 1.97718 | 4.43432ms | 400 | 30 | 11485.1 | 989.6 | 7.73475 | 2(Loss) |
| strtoll/strtoull | 255.255 | 1.50398 | 4.81131ms | 400 | 30 | 15155.8 | 1494.47 | 11.7302 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 511.033 | 0.433399 | 95.7303ms | 40000 | 48 | 5.02388e+06 | 74646.8 | 5.94387 | 1(Win) |
| std::from_chars | 395.199 | 1.33871 | 158.861ms | 40000 | 48 | 8.01502e+07 | 96526.1 | 7.68271 | 2(Loss) |
| strtoll/strtoull | 270.465 | 1.37806 | 174.986ms | 40000 | 48 | 1.81333e+08 | 141042 | 11.2302 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 647.161 | 0.924287 | 76.1225ms | 40000 | 48 | 1.42479e+07 | 58945.1 | 4.68948 | 1(Win) |
| std::from_chars | 468.446 | 0.593238 | 138.45ms | 40000 | 30 | 7.00133e+06 | 81433.1 | 6.48436 | 2(Loss) |
| strtoll/strtoull | 277.388 | 0.658652 | 169.646ms | 40000 | 30 | 2.46138e+07 | 137522 | 10.9498 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 805.342 | 1.82589 | 124.584ms | 80000 | 30 | 8.97614e+07 | 94734.9 | 3.76811 | 1(Win) |
| std::from_chars | 496.053 | 1.82504 | 193.807ms | 80000 | 30 | 2.3637e+08 | 153802 | 6.11937 | 2(Loss) |
| strtoll/strtoull | 371.757 | 1.27223 | 258.578ms | 80000 | 30 | 2.04509e+08 | 205225 | 8.17254 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1183.4 | 2.3986 | 3.89521ms | 800 | 30 | 7173.87 | 644.7 | 2.492 | 1(Win) |
| std::from_chars | 607.178 | 0.610662 | 4.82578ms | 800 | 30 | 1766.33 | 1256.53 | 4.91046 | 2(Loss) |
| strtoll/strtoull | 351.148 | 0.654409 | 5.80537ms | 800 | 30 | 6064.84 | 2172.7 | 8.56196 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 928.891 | 1.57199 | 99.0136ms | 80000 | 30 | 5.00115e+07 | 82134.5 | 3.26831 | 1(Win) |
| std::from_chars | 632.977 | 0.899887 | 149.392ms | 80000 | 30 | 3.5294e+07 | 120532 | 4.79861 | 2(Loss) |
| strtoll/strtoull | 329.595 | 1.85261 | 330.544ms | 80000 | 48 | 8.82736e+08 | 231478 | 9.21117 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1281.44 | 0.811607 | 755.751ms | 800000 | 30 | 7.0048e+08 | 595376 | 2.36908 | 1(Win) |
| std::from_chars | 606.351 | 1.1843 | 1508.52ms | 800000 | 48 | 1.06586e+10 | 1.25825e+06 | 5.00561 | 2(Loss) |
| strtoll/strtoull | 336.243 | 0.979367 | 2720.01ms | 800000 | 30 | 1.48145e+10 | 2.26901e+06 | 9.03388 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1251.06 | 2.42102 | 3.82602ms | 800 | 30 | 6539.45 | 609.833 | 2.35446 | 1(Win) |
| std::from_chars | 588.068 | 1.61666 | 4.62254ms | 800 | 30 | 13197.3 | 1297.37 | 5.07279 | 2(Loss) |
| strtoll/strtoull | 349.758 | 0.888477 | 5.71084ms | 800 | 48 | 18029.2 | 2181.33 | 8.59552 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1014.04 | 1.09138 | 92.1121ms | 80000 | 30 | 2.02273e+07 | 75237.4 | 2.99456 | 1(Win) |
| std::from_chars | 602.86 | 2.86291 | 156.713ms | 80000 | 48 | 6.3009e+08 | 126553 | 5.03317 | 2(Loss) |
| strtoll/strtoull | 431.308 | 2.50846 | 214.389ms | 80000 | 30 | 5.90667e+08 | 176890 | 7.03957 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1285.63 | 1.111 | 735.262ms | 800000 | 48 | 2.08649e+09 | 593435 | 2.36121 | 1(Win) |
| std::from_chars | 608.288 | 0.485032 | 1557.14ms | 800000 | 30 | 1.11026e+09 | 1.25424e+06 | 4.98982 | 2(Loss) |
| strtoll/strtoull | 346.805 | 0.607796 | 2689.45ms | 800000 | 30 | 5.36349e+09 | 2.19991e+06 | 8.75886 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 840.18 | 1.70466 | 4.20144ms | 800 | 30 | 7188.41 | 908.067 | 3.53254 | 1(Win) |
| std::from_chars | 533.052 | 0.697435 | 4.83768ms | 800 | 30 | 2989.31 | 1431.27 | 5.60421 | 2(Loss) |
| strtoll/strtoull | 317.724 | 0.648884 | 5.9965ms | 800 | 30 | 7283.44 | 2401.27 | 9.45858 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 734.003 | 0.446537 | 15.2256ms | 8000 | 30 | 64628 | 10394.2 | 4.1306 | 1(Win) |
| std::from_chars | 573.748 | 0.608081 | 20.029ms | 8000 | 30 | 196147 | 13297.5 | 5.28183 | 2(Loss) |
| strtoll/strtoull | 317.716 | 0.704575 | 32.3127ms | 8000 | 48 | 1.37404e+06 | 24013.3 | 9.55528 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 781.965 | 0.927197 | 125.123ms | 80000 | 30 | 2.45511e+07 | 97566.9 | 3.88286 | 1(Win) |
| std::from_chars | 525.609 | 0.82846 | 173.665ms | 80000 | 30 | 4.33829e+07 | 145153 | 5.77852 | 2(Loss) |
| strtoll/strtoull | 308.492 | 0.709287 | 300.598ms | 80000 | 30 | 9.23118e+07 | 247312 | 9.84935 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 894.777 | 0.563759 | 1076.92ms | 800000 | 48 | 1.10912e+09 | 852658 | 3.39222 | 1(Win) |
| std::from_chars | 552.734 | 0.554993 | 1706.34ms | 800000 | 30 | 1.76053e+09 | 1.3803e+06 | 5.49558 | 2(Loss) |
| strtoll/strtoull | 325.328 | 0.577872 | 2821.18ms | 800000 | 48 | 8.81541e+09 | 2.34514e+06 | 9.33953 | 3(Loss) |
