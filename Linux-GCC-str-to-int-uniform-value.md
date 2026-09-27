# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 144.218 | 1.56856 | 3.91411ms | 100 | 48 | 5164.16 | 661.271 | 20.3323 | 1(Win) |
| std::from_chars | 124.854 | 2.05434 | 5.02976ms | 100 | 48 | 11819.1 | 763.833 | 23.5471 | 2(Loss) |
| strtoll/strtoull | 85.0204 | 1.15799 | 4.6061ms | 100 | 30 | 5061.6 | 1121.7 | 35.1467 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 143.311 | 1.55141 | 11.1436ms | 1000 | 48 | 511606 | 6654.56 | 21.1248 | 1(Win) |
| std::from_chars | 132.89 | 0.373066 | 12.1218ms | 1000 | 48 | 34405.6 | 7176.42 | 22.7926 | 2(Loss) |
| strtoll/strtoull | 85.2121 | 1.05164 | 17.3569ms | 1000 | 30 | 415577 | 11191.8 | 35.5936 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.912 | 0.567324 | 87.0536ms | 10000 | 30 | 4.36061e+06 | 67201.9 | 21.4032 | 1(Win) |
| std::from_chars | 125.297 | 0.620388 | 100.933ms | 10000 | 30 | 6.68907e+06 | 76113 | 24.2344 | 2(Loss) |
| strtoll/strtoull | 84.6388 | 0.858606 | 140.358ms | 10000 | 48 | 4.49252e+07 | 112676 | 35.8901 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 148.337 | 1.45067 | 810.251ms | 100000 | 48 | 4.1752e+09 | 642911 | 20.4733 | 1(Win) |
| std::from_chars | 129.995 | 0.779701 | 920.464ms | 100000 | 30 | 9.81571e+08 | 733622 | 23.3669 | 2(Loss) |
| strtoll/strtoull | 86.0708 | 0.51547 | 1344.32ms | 100000 | 30 | 9.78627e+08 | 1.10801e+06 | 35.2937 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 210.71 | 3.53939 | 3.74927ms | 100 | 30 | 7698.52 | 452.6 | 13.6573 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 194.893 | 1.81023 | 3.69928ms | 100 | 30 | 2353.95 | 489.333 | 14.8557 | 1(Tie) |
| strtoll/strtoull | 111.925 | 0.897793 | 4.1053ms | 100 | 30 | 1755.58 | 852.067 | 26.5593 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 226.402 | 1.11147 | 81.9793ms | 10000 | 30 | 6.5759e+06 | 42123 | 13.4041 | 1(Win) |
| std::from_chars | 192.695 | 1.00555 | 63.3353ms | 10000 | 30 | 7.42991e+06 | 49491.3 | 15.7551 | 2(Loss) |
| strtoll/strtoull | 114.457 | 1.0849 | 110.317ms | 10000 | 30 | 2.45144e+07 | 83321.8 | 26.5132 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 222.973 | 1.8554 | 518.074ms | 100000 | 30 | 1.88926e+09 | 427708 | 13.6032 | 1(Win) |
| std::from_chars | 200.359 | 1.35308 | 582.494ms | 100000 | 48 | 1.991e+09 | 475984 | 15.1507 | 2(Loss) |
| strtoll/strtoull | 114.664 | 0.885481 | 1049.3ms | 100000 | 30 | 1.62714e+09 | 831710 | 26.4891 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 242.174 | 0.574 | 471.38ms | 100000 | 30 | 1.53282e+08 | 393797 | 12.5395 | 1(Win) |
| std::from_chars | 215.376 | 0.860591 | 548.605ms | 100000 | 48 | 6.97014e+08 | 442796 | 14.1021 | 2(Loss) |
| strtoll/strtoull | 119.774 | 0.533388 | 980.846ms | 100000 | 48 | 8.65774e+08 | 796230 | 25.3662 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 204.88 | 1.12853 | 3.69988ms | 100 | 48 | 1324.55 | 465.479 | 14.0131 | 1(Win) |
| std::from_chars | 187.117 | 1.22721 | 3.74298ms | 100 | 48 | 1877.8 | 509.667 | 15.4902 | 2(Loss) |
| strtoll/strtoull | 105.378 | 0.882596 | 4.48556ms | 100 | 30 | 1914 | 905 | 28.2203 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 207.064 | 0.52897 | 8.69175ms | 1000 | 30 | 17806.4 | 4605.7 | 14.5986 | 1(Win) |
| std::from_chars | 182.545 | 0.52593 | 9.38932ms | 1000 | 30 | 22648.4 | 5224.33 | 16.5706 | 2(Loss) |
| strtoll/strtoull | 107.964 | 0.274067 | 14.3749ms | 1000 | 48 | 28132 | 8833.29 | 28.0822 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 204.4 | 1.23252 | 62.1262ms | 10000 | 30 | 9.92083e+06 | 46657.2 | 14.8449 | 1(Win) |
| std::from_chars | 178.055 | 0.894083 | 68.4572ms | 10000 | 30 | 6.87972e+06 | 53560.8 | 17.0565 | 2(Loss) |
| strtoll/strtoull | 103.07 | 0.660741 | 113.718ms | 10000 | 30 | 1.12129e+07 | 92526.8 | 29.4733 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 212.333 | 0.393176 | 555.857ms | 100000 | 48 | 1.49685e+08 | 449140 | 14.3097 | 1(Win) |
| std::from_chars | 187.943 | 0.429114 | 631.218ms | 100000 | 30 | 1.42238e+08 | 507427 | 16.1632 | 2(Loss) |
| strtoll/strtoull | 105.852 | 0.276365 | 1095.98ms | 100000 | 48 | 2.97584e+08 | 900950 | 28.7048 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 251.784 | 1.97729 | 3.99425ms | 200 | 30 | 6730.81 | 757.533 | 11.6787 | 1(Win) |
| std::from_chars | 210.5 | 1.29634 | 4.46688ms | 200 | 48 | 6622.69 | 906.104 | 14.1164 | 2(Loss) |
| strtoll/strtoull | 142.478 | 1.16123 | 4.6953ms | 200 | 30 | 7249.73 | 1338.7 | 21.0245 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 252.387 | 0.438407 | 12.4578ms | 2000 | 30 | 32930.7 | 7557.23 | 12.0021 | 1(Win) |
| std::from_chars | 211.716 | 0.350643 | 14.1291ms | 2000 | 30 | 29936.7 | 9009 | 14.3163 | 2(Loss) |
| strtoll/strtoull | 141.039 | 2.82401 | 20.5169ms | 2000 | 30 | 4.37558e+06 | 13523.6 | 21.5021 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 256.196 | 0.444751 | 96.0725ms | 20000 | 30 | 3.28907e+06 | 74448.9 | 11.8559 | 1(Win) |
| std::from_chars | 203.763 | 0.499336 | 129.346ms | 20000 | 30 | 6.55415e+06 | 93606.2 | 14.909 | 2(Loss) |
| strtoll/strtoull | 142.422 | 0.661153 | 165.044ms | 20000 | 30 | 2.35198e+07 | 133923 | 21.3328 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 265.948 | 0.320156 | 890.08ms | 200000 | 48 | 2.53065e+08 | 717189 | 11.4238 | 1(Win) |
| std::from_chars | 219.773 | 0.409767 | 1085.66ms | 200000 | 30 | 3.7941e+08 | 867873 | 13.8232 | 2(Loss) |
| strtoll/strtoull | 142.481 | 0.749654 | 1627.56ms | 200000 | 30 | 3.02129e+09 | 1.33867e+06 | 21.3178 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 340.051 | 2.75013 | 3.75942ms | 200 | 30 | 7138.37 | 560.9 | 8.52067 | 1(Win) |
| std::from_chars | 297.977 | 2.33332 | 3.8015ms | 200 | 30 | 6692.16 | 640.1 | 9.84733 | 2(Loss) |
| strtoll/strtoull | 174.986 | 1.8172 | 4.49339ms | 200 | 30 | 11770.1 | 1090 | 17.0242 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 358.71 | 0.307422 | 68.3407ms | 20000 | 30 | 801613 | 53172.5 | 8.46463 | 1(Win) |
| std::from_chars | 318.721 | 0.690905 | 89.4087ms | 20000 | 30 | 5.12857e+06 | 59843.8 | 9.5291 | 2(Loss) |
| strtoll/strtoull | 182.94 | 0.662255 | 130.541ms | 20000 | 48 | 2.2884e+07 | 104261 | 16.6019 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 370.215 | 2.79583 | 3.6863ms | 200 | 30 | 6224.37 | 515.2 | 7.84117 | 1(Win) |
| std::from_chars | 306.987 | 1.90129 | 4.10605ms | 200 | 48 | 6698.18 | 621.312 | 9.56979 | 2(Loss) |
| strtoll/strtoull | 177.466 | 1.1634 | 4.50343ms | 200 | 30 | 4690.39 | 1074.77 | 16.8332 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 374.349 | 1.06955 | 65.0381ms | 20000 | 30 | 8.90908e+06 | 50951.1 | 8.11124 | 1(Win) |
| std::from_chars | 321.872 | 0.588037 | 73.7811ms | 20000 | 30 | 3.64272e+06 | 59258.1 | 9.43617 | 2(Loss) |
| strtoll/strtoull | 184.196 | 1.82376 | 126.852ms | 20000 | 30 | 1.06994e+08 | 103550 | 16.49 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 412.319 | 0.881766 | 577.516ms | 200000 | 30 | 4.99138e+08 | 462590 | 7.36129 | 1(Win) |
| std::from_chars | 359.427 | 0.475775 | 662.864ms | 200000 | 30 | 1.91233e+08 | 530663 | 8.44893 | 2(Loss) |
| strtoll/strtoull | 190.039 | 0.468963 | 1230.05ms | 200000 | 30 | 6.64621e+08 | 1.00366e+06 | 15.9868 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 484.611 | 0.821063 | 8.08418ms | 2000 | 30 | 31329.1 | 3935.83 | 6.23135 | 1(Win) |
| std::from_chars | 447.916 | 0.902282 | 8.3977ms | 2000 | 48 | 70858.5 | 4258.27 | 6.74615 | 2(Loss) |
| strtoll/strtoull | 205.862 | 0.390947 | 14.6715ms | 2000 | 30 | 39360.8 | 9265.17 | 14.7321 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 469.075 | 1.10175 | 52.4274ms | 20000 | 30 | 6.02096e+06 | 40661.9 | 6.4661 | 1(Win) |
| std::from_chars | 419.122 | 1.67476 | 55.7836ms | 20000 | 30 | 1.74264e+07 | 45508.2 | 7.24123 | 2(Loss) |
| strtoll/strtoull | 199.704 | 1.69102 | 119.079ms | 20000 | 30 | 7.82537e+07 | 95508.9 | 15.0394 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 515.298 | 2.17846 | 431.584ms | 200000 | 30 | 1.95058e+09 | 370145 | 5.88665 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 498.27 | 0.614716 | 493.718ms | 200000 | 30 | 1.66112e+08 | 382795 | 6.09418 | 1(Tie) |
| strtoll/strtoull | 202.37 | 0.63083 | 1151.73ms | 200000 | 30 | 1.06051e+09 | 942506 | 15.0112 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 380.376 | 1.12111 | 123.825ms | 40000 | 30 | 3.79239e+07 | 100287 | 7.98368 | 1(Win) |
| std::from_chars | 304.122 | 0.657078 | 152.318ms | 40000 | 30 | 2.03788e+07 | 125433 | 9.98983 | 2(Loss) |
| strtoll/strtoull | 219.412 | 0.748511 | 212.594ms | 40000 | 30 | 5.0806e+07 | 173860 | 13.8477 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 406.334 | 0.909373 | 1117.7ms | 400000 | 30 | 2.18654e+09 | 938807 | 7.47441 | 1(Win) |
| std::from_chars | 330.29 | 0.29972 | 1433.34ms | 400000 | 30 | 3.59486e+08 | 1.15495e+06 | 9.19464 | 2(Loss) |
| strtoll/strtoull | 228.476 | 0.374001 | 2028.03ms | 400000 | 30 | 1.16978e+09 | 1.66963e+06 | 13.2948 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 511.754 | 1.47417 | 3.97033ms | 400 | 48 | 5796.08 | 745.417 | 5.78656 | 1(Win) |
| std::from_chars | 407.379 | 1.23032 | 4.19574ms | 400 | 30 | 3981.83 | 936.4 | 7.26342 | 2(Loss) |
| strtoll/strtoull | 257.2 | 1.52199 | 4.76912ms | 400 | 48 | 24459.4 | 1483.17 | 11.637 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 471.158 | 0.825234 | 97.7525ms | 40000 | 30 | 1.33925e+07 | 80964.3 | 6.43654 | 1(Win) |
| std::from_chars | 405.857 | 0.757616 | 114.342ms | 40000 | 30 | 1.52123e+07 | 93991.2 | 7.48383 | 2(Loss) |
| strtoll/strtoull | 268.977 | 1.08236 | 175.698ms | 40000 | 48 | 1.13102e+08 | 141822 | 11.292 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 561.803 | 0.656332 | 843.695ms | 400000 | 30 | 5.95828e+08 | 679009 | 5.40483 | 1(Win) |
| std::from_chars | 457.073 | 0.44334 | 1040.56ms | 400000 | 30 | 4.10717e+08 | 834592 | 6.64508 | 2(Loss) |
| strtoll/strtoull | 277.565 | 0.779024 | 1673.7ms | 400000 | 30 | 3.43885e+09 | 1.37434e+06 | 10.9434 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 602.394 | 0.655737 | 791.743ms | 400000 | 30 | 5.17296e+08 | 633256 | 5.04022 | 1(Win) |
| std::from_chars | 455.499 | 0.320661 | 1035.97ms | 400000 | 30 | 2.16351e+08 | 837476 | 6.6683 | 2(Loss) |
| strtoll/strtoull | 288.145 | 0.691795 | 1612.51ms | 400000 | 48 | 4.02618e+09 | 1.32388e+06 | 10.541 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 646.143 | 1.00796 | 83.815ms | 40000 | 30 | 1.06236e+07 | 59038 | 4.69736 | 1(Win) |
| std::from_chars | 544.029 | 0.617688 | 91.3266ms | 40000 | 30 | 5.62777e+06 | 70119.4 | 5.58164 | 2(Loss) |
| strtoll/strtoull | 287.544 | 0.627413 | 166.983ms | 40000 | 30 | 2.07845e+07 | 132665 | 10.566 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 816.357 | 0.671484 | 612.055ms | 400000 | 30 | 2.95361e+08 | 467283 | 3.71757 | 1(Win) |
| std::from_chars | 564.839 | 1.1576 | 827.406ms | 400000 | 48 | 2.93377e+09 | 675360 | 5.37484 | 2(Loss) |
| strtoll/strtoull | 286.832 | 0.458635 | 1607.48ms | 400000 | 48 | 1.78583e+09 | 1.32994e+06 | 10.589 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 799.67 | 2.55876 | 125.674ms | 80000 | 30 | 1.78789e+08 | 95406.8 | 3.73354 | 1(Win) |
| std::from_chars | 528.485 | 1.66702 | 179.999ms | 80000 | 48 | 2.77995e+08 | 144364 | 5.74739 | 2(Loss) |
| strtoll/strtoull | 342.602 | 1.54317 | 274.873ms | 80000 | 48 | 5.66854e+08 | 222690 | 8.86806 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 884.04 | 0.829909 | 1067.09ms | 800000 | 48 | 2.46229e+09 | 863015 | 3.43358 | 1(Win) |
| std::from_chars | 567.544 | 1.05011 | 1620.72ms | 800000 | 48 | 9.56525e+09 | 1.34428e+06 | 5.348 | 2(Loss) |
| strtoll/strtoull | 354.751 | 0.786391 | 2657.61ms | 800000 | 48 | 1.37294e+10 | 2.15063e+06 | 8.56147 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 970.373 | 2.30119 | 4.04042ms | 800 | 30 | 9820.39 | 786.233 | 3.05146 | 1(Win) |
| std::from_chars | 638.479 | 1.41392 | 4.74394ms | 800 | 30 | 8563.58 | 1194.93 | 4.68467 | 2(Loss) |
| strtoll/strtoull | 452.068 | 1.682 | 5.30039ms | 800 | 30 | 24174 | 1687.67 | 6.64779 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 734.773 | 2.22066 | 4.56774ms | 800 | 30 | 15950 | 1038.33 | 4.05854 | 1(Win) |
| std::from_chars | 540.083 | 1.21662 | 4.99213ms | 800 | 30 | 8861.21 | 1412.63 | 5.53246 | 2(Loss) |
| strtoll/strtoull | 299.517 | 0.506319 | 6.83609ms | 800 | 48 | 7984.1 | 2547.23 | 10.0717 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 784.613 | 0.770947 | 14.1394ms | 8000 | 30 | 168593 | 9723.77 | 3.86178 | 1(Win) |
| std::from_chars | 531.776 | 1.95694 | 18.8242ms | 8000 | 30 | 2.36481e+06 | 14347 | 5.69764 | 2(Loss) |
| strtoll/strtoull | 306.856 | 0.37525 | 32.7556ms | 8000 | 30 | 261141 | 24863.1 | 9.89208 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 950.794 | 1.44289 | 106.156ms | 80000 | 48 | 6.43448e+07 | 80242.3 | 3.19228 | 1(Win) |
| std::from_chars | 617.152 | 0.598892 | 161.957ms | 80000 | 30 | 1.64443e+07 | 123623 | 4.9199 | 2(Loss) |
| strtoll/strtoull | 305.56 | 1.36171 | 298.046ms | 80000 | 30 | 3.46797e+08 | 249686 | 9.94318 | 3(Loss) |
