# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36257.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 648.346 | 1.83606 | 0.5129ms | 266 | 48 | 2482.27 | 391.667 | 4.50708 | 1(Win) |
| jeaiii::to_text | 435.052 | 1.79932 | 0.7593ms | 263 | 30 | 3229.89 | 576.667 | 6.76863 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 690.818 | 1.30095 | 44.748ms | 26465 | 48 | 1.0844e+07 | 36535.4 | 4.39369 | 1(Win) |
| jeaiii::to_text | 434.399 | 1.57776 | 68.0708ms | 26496 | 30 | 2.52698e+07 | 58170 | 6.99257 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 658.055 | 0.540371 | 458.926ms | 264759 | 30 | 1.28968e+08 | 383697 | 4.61689 | 1(Win) |
| jeaiii::to_text | 463.452 | 0.562009 | 654.445ms | 264722 | 48 | 4.49883e+08 | 544735 | 6.55616 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2174.92 | 4.67967 | 17.0926ms | 31439 | 48 | 1.99762e+07 | 13785.4 | 1.39264 | 1(Win) |
| jeaiii::to_text | 969.054 | 2.06786 | 37.6415ms | 31436 | 30 | 1.22776e+07 | 30936.7 | 3.13248 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1664.48 | 0.748796 | 15.2869ms | 21468 | 30 | 254483 | 12300 | 1.82096 | 1(Win) |
| jeaiii::to_text | 672.321 | 2.82861 | 36.5635ms | 21481 | 30 | 2.22849e+07 | 30470 | 4.51524 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1578.81 | 1.59565 | 158.027ms | 214884 | 30 | 1.28691e+08 | 129800 | 1.92345 | 1(Win) |
| jeaiii::to_text | 644.961 | 0.594592 | 381.015ms | 214873 | 30 | 1.07067e+08 | 317723 | 4.71075 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1919.27 | 1.5625 | 1.5779ms | 2576 | 30 | 12000 | 1280 | 1.55839 | 1(Win) |
| jeaiii::to_text | 661.652 | 0.57952 | 4.576ms | 2567 | 30 | 13793.1 | 3700 | 4.55566 | 2(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1935.91 | 1.65632 | 15.588ms | 25692 | 30 | 1.3184e+06 | 12656.7 | 1.56392 | 1(Win) |
| jeaiii::to_text | 646.571 | 1.70088 | 45.2583ms | 25716 | 30 | 1.24863e+07 | 37930 | 4.69613 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1904.5 | 1.67541 | 153.369ms | 256983 | 30 | 1.39446e+08 | 128683 | 1.59479 | 1(Win) |
| jeaiii::to_text | 646.652 | 0.492586 | 453.793ms | 257068 | 30 | 1.04626e+08 | 379120 | 4.69842 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 805.36 | 1.63934 | 0.8193ms | 515 | 30 | 3000 | 610 | 3.68332 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 802.123 | 1.29242 | 0.7953ms | 516 | 30 | 1885.06 | 613.333 | 3.69256 | 1(Tie) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 857.542 | 0.293689 | 7.0323ms | 5155 | 30 | 8505.75 | 5733.33 | 3.52696 | 1(Win) |
| jeaiii::to_text | 826.993 | 0.384352 | 7.3642ms | 5160 | 30 | 15689.7 | 5950 | 3.65866 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 819.005 | 1.01246 | 72.5036ms | 51606 | 48 | 1.77676e+07 | 60091.7 | 3.70825 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 809.607 | 1.34341 | 73.3259ms | 51615 | 30 | 2.00145e+07 | 60800 | 3.75064 | 1(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 857.469 | 0.440611 | 690.038ms | 516174 | 30 | 1.91949e+08 | 574087 | 3.54338 | 1(Win) |
| jeaiii::to_text | 762.382 | 0.442353 | 751.716ms | 516116 | 30 | 2.44686e+08 | 645617 | 3.98447 | 2(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1497.8 | 3.67164 | 0.4978ms | 565 | 30 | 5241.38 | 360 | 1.95319 | 1(Win) |
| jeaiii::to_text | 1348.02 | 1.69516 | 0.5101ms | 565 | 30 | 1379.31 | 400 | 2.10217 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1791.01 | 0.758647 | 3.8226ms | 5659 | 30 | 15678.2 | 3013.33 | 1.67377 | 1(Win) |
| jeaiii::to_text | 1478.59 | 0.727564 | 4.6178ms | 5664 | 30 | 21195.4 | 3653.33 | 2.03499 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1565.15 | 1.68293 | 42.0083ms | 56615 | 30 | 1.01114e+07 | 34496.7 | 1.93942 | 1(Win) |
| jeaiii::to_text | 1410.97 | 3.39686 | 45.0962ms | 56625 | 48 | 8.11297e+07 | 38272.9 | 2.15103 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1687.53 | 0.914033 | 387.02ms | 566127 | 30 | 2.56551e+08 | 319937 | 1.8001 | 1(Win) |
| jeaiii::to_text | 1412.65 | 0.598946 | 458.238ms | 566120 | 48 | 2.51515e+08 | 382185 | 2.15042 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1235.1 | 3.15171 | 0.5233ms | 466 | 30 | 3862.07 | 360 | 2.46021 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1184.89 | 2.17443 | 0.4992ms | 466 | 48 | 3191.49 | 375 | 2.50286 | 1(Tie) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1272.68 | 2.20519 | 42.1011ms | 46605 | 30 | 1.77929e+07 | 34923.3 | 2.3851 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1215.13 | 1.77765 | 44.3001ms | 46613 | 30 | 1.26876e+07 | 36583.3 | 2.49874 | 1(Tie) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1288.01 | 1.06186 | 415.159ms | 466045 | 30 | 4.02782e+08 | 345070 | 2.3578 | 1(Win) |
| jeaiii::to_text | 1157.8 | 0.787856 | 462.759ms | 466085 | 48 | 4.39132e+08 | 383910 | 2.62325 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2002.59 | 0.942104 | 2.9704ms | 4837 | 30 | 14126.4 | 2303.33 | 1.49118 | 1(Win) |
| jeaiii::to_text | 1639.4 | 1.36119 | 3.5406ms | 4828 | 48 | 70141.8 | 2808.33 | 1.83411 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1879.61 | 0.884862 | 294.256ms | 483051 | 48 | 2.25758e+08 | 245090 | 1.61568 | 1(Win) |
| jeaiii::to_text | 1685.87 | 0.882799 | 331.397ms | 483025 | 30 | 1.74556e+08 | 273240 | 1.80158 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1240.79 | 1.05169 | 0.9763ms | 997 | 48 | 3120.57 | 766.667 | 2.3786 | 1(Win) |
| jeaiii::to_text | 1173.8 | 0.988539 | 1.1996ms | 997 | 48 | 3080.67 | 810.417 | 2.48886 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1268.34 | 1.31573 | 90.3069ms | 99821 | 48 | 4.6811e+07 | 75056.2 | 2.39459 | 1(Win) |
| jeaiii::to_text | 1180.08 | 3.20738 | 98.2647ms | 99829 | 30 | 2.00872e+08 | 80676.7 | 2.57349 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1260.74 | 0.477979 | 913.473ms | 998327 | 30 | 3.9087e+08 | 755173 | 2.40949 | 1(Win) |
| jeaiii::to_text | 1165.82 | 0.608292 | 971.212ms | 998193 | 48 | 1.18422e+09 | 816550 | 2.60607 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1937.19 | 2.09228 | 0.8553ms | 1050 | 30 | 3505.75 | 516.667 | 1.50799 | 1(Win) |
| jeaiii::to_text | 1704.42 | 2.1207 | 0.7601ms | 1049 | 30 | 4643.68 | 586.667 | 1.73047 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2037.8 | 1.34967 | 60.7981ms | 104824 | 30 | 1.31515e+07 | 49056.7 | 1.4896 | 1(Win) |
| jeaiii::to_text | 1772.76 | 2.5509 | 67.1661ms | 104825 | 48 | 9.9325e+07 | 56391.7 | 1.71241 | 2(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1971.32 | 0.905092 | 613.839ms | 1048277 | 30 | 6.32041e+08 | 507130 | 1.54095 | 1(Win) |
| jeaiii::to_text | 1768.49 | 0.603652 | 677.447ms | 1048293 | 48 | 5.58953e+08 | 565302 | 1.71796 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1766.2 | 1.8024 | 0.6684ms | 949 | 48 | 4095.74 | 512.5 | 1.6397 | 1(Win) |
| jeaiii::to_text | 1624.96 | 1.65303 | 0.7364ms | 949 | 30 | 2540.23 | 556.667 | 1.83096 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1822.77 | 1.16116 | 6.2342ms | 9486 | 30 | 99643.7 | 4963.33 | 1.65094 | 1(Win) |
| jeaiii::to_text | 1699.06 | 0.514914 | 6.6623ms | 9484 | 30 | 22540.2 | 5323.33 | 1.77793 | 2(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1839.18 | 0.64787 | 598.674ms | 948273 | 30 | 3.04449e+08 | 491710 | 1.65155 | 1(Win) |
| jeaiii::to_text | 1579.5 | 0.914537 | 680.847ms | 948263 | 30 | 8.22509e+08 | 572543 | 1.92254 | 2(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2380.84 | 3.09797 | 0.5656ms | 974 | 30 | 4379.31 | 390 | 1.18481 | 1(Win) |
| jeaiii::to_text | 2111.3 | 3.37628 | 0.59ms | 974 | 30 | 6620.69 | 440 | 1.38035 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2788.2 | 0.677638 | 4.2292ms | 9736 | 30 | 15275.9 | 3330 | 1.08043 | 1(Win) |
| jeaiii::to_text | 2422.1 | 1.07838 | 4.8862ms | 9736 | 30 | 51264.4 | 3833.33 | 1.24674 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2724.44 | 1.73196 | 42.0643ms | 97410 | 48 | 1.67406e+07 | 34097.9 | 1.11338 | 1(Win) |
| jeaiii::to_text | 2387.86 | 1.4994 | 48.8553ms | 97410 | 48 | 1.63332e+07 | 38904.2 | 1.27108 | 2(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2559.19 | 0.858645 | 438.604ms | 974122 | 30 | 2.91454e+08 | 363003 | 1.18655 | 1(Win) |
| jeaiii::to_text | 2319.28 | 0.897542 | 480.542ms | 974153 | 30 | 3.87775e+08 | 400567 | 1.3097 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2408.4 | 1.44427 | 1.011ms | 1936 | 30 | 3678.16 | 766.667 | 1.25523 | 1(Win) |
| jeaiii::to_text | 2139.84 | 1.88196 | 1.1029ms | 1937 | 30 | 7919.54 | 863.333 | 1.38246 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2478.67 | 0.448643 | 9.6554ms | 19380 | 30 | 33574.7 | 7456.67 | 1.21861 | 1(Win) |
| jeaiii::to_text | 2263.49 | 0.396108 | 10.2255ms | 19375 | 30 | 31367.8 | 8163.33 | 1.33666 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2510.86 | 1.23984 | 89.5939ms | 193785 | 30 | 2.49831e+07 | 73603.3 | 1.20934 | 1(Win) |
| jeaiii::to_text | 2161.9 | 2.16391 | 99.4377ms | 193799 | 30 | 1.02666e+08 | 85490 | 1.40444 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2473.74 | 0.399284 | 902.366ms | 1937905 | 30 | 2.66958e+08 | 747100 | 1.22797 | 1(Win) |
| jeaiii::to_text | 2214.65 | 0.413887 | 1000.15ms | 1937943 | 30 | 3.57895e+08 | 834517 | 1.37183 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3791.24 | 3.45746 | 0.683ms | 1988 | 30 | 8965.52 | 500 | 0.786923 | 1(Win) |
| jeaiii::to_text | 3159.36 | 3.66196 | 0.7839ms | 1988 | 30 | 14482.8 | 600 | 0.93926 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4065.74 | 1.3541 | 57.2431ms | 198809 | 30 | 1.19623e+07 | 46633.3 | 0.746517 | 1(Win) |
| jeaiii::to_text | 3279.03 | 1.46731 | 69.2535ms | 198799 | 48 | 3.45479e+07 | 57818.8 | 0.925889 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3993.29 | 0.521686 | 584.093ms | 1987949 | 48 | 2.94448e+08 | 474760 | 0.760706 | 1(Win) |
| jeaiii::to_text | 3304.47 | 0.708509 | 694.379ms | 1987949 | 48 | 7.93121e+08 | 573725 | 0.919147 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3956.83 | 0.772562 | 5.7053ms | 18878 | 30 | 37069 | 4550 | 0.761336 | 1(Win) |
| jeaiii::to_text | 3260.97 | 0.575723 | 6.9485ms | 18878 | 48 | 48492.9 | 5520.83 | 0.927237 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3881.88 | 1.4692 | 56.4353ms | 188801 | 30 | 1.39318e+07 | 46383.3 | 0.781611 | 1(Win) |
| jeaiii::to_text | 3130.81 | 2.03399 | 68.2786ms | 188794 | 48 | 6.56752e+07 | 57508.3 | 0.969743 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3878.07 | 0.707839 | 566.809ms | 1887961 | 30 | 3.23999e+08 | 464277 | 0.783255 | 1(Win) |
| jeaiii::to_text | 3075.87 | 0.509819 | 688.576ms | 1887943 | 30 | 2.67174e+08 | 585357 | 0.987487 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2920 | 1.74833 | 0.8349ms | 1939 | 30 | 3678.16 | 633.333 | 1.00997 | 1(Win) |
| jeaiii::to_text | 2255.15 | 1.77549 | 1.1076ms | 1941 | 48 | 10195 | 820.833 | 1.30246 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2911.43 | 0.542252 | 8.0167ms | 19406 | 30 | 35643.7 | 6356.67 | 1.03996 | 1(Win) |
| jeaiii::to_text | 2423.26 | 0.537888 | 9.6083ms | 19396 | 30 | 50574.7 | 7633.33 | 1.24851 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2741.63 | 2.25081 | 80.4725ms | 193982 | 30 | 6.91998e+07 | 67476.7 | 1.10767 | 1(Win) |
| jeaiii::to_text | 2336.1 | 0.969262 | 95.8728ms | 193971 | 48 | 2.82757e+07 | 79185.4 | 1.29994 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2886.69 | 0.427835 | 775.498ms | 1939729 | 30 | 2.25505e+08 | 640827 | 1.0524 | 1(Win) |
| jeaiii::to_text | 2342.71 | 0.376483 | 960.907ms | 1939799 | 30 | 2.65148e+08 | 789657 | 1.29668 | 2(Loss) |
