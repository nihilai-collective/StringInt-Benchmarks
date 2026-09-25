# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.40.1-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 25, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 5.000000% AND mean shift < 2.500000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [49d7727](https://github.com/nihilai-collective/benchmarksuite/commit/49d7727).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 144.686 | 1.80426 | 0.626233ms | 100 | 30 | 4242.95 | 659.133 | 20.3127 | 1(Win) |
| std::from_chars | 137.213 | 1.20824 | 3.94614ms | 100 | 30 | 2115.62 | 695.033 | 21.4803 | 2(Loss) |
| strtoll/strtoull | 84.1818 | 1.37661 | 3.52866ms | 100 | 48 | 11674.2 | 1132.88 | 35.4006 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 140.084 | 1.24995 | 64.0563ms | 10000 | 48 | 3.47574e+07 | 68078.7 | 21.6438 | 1(Win) |
| std::from_chars | 125.452 | 1.30946 | 14.4905ms | 10000 | 30 | 2.97268e+07 | 76019 | 24.1657 | 2(Loss) |
| strtoll/strtoull | 77.8241 | 2.99368 | 149.032ms | 10000 | 30 | 4.03742e+08 | 122542 | 39.0059 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 145.641 | 0.374896 | 120.236ms | 100000 | 30 | 1.80792e+08 | 654813 | 20.86 | 1(Win) |
| std::from_chars | 109.821 | 0.89966 | 156.488ms | 100000 | 30 | 1.83107e+09 | 868387 | 27.6509 | 2(Loss) |
| strtoll/strtoull | 84.1804 | 0.464559 | 205.169ms | 100000 | 30 | 8.30961e+08 | 1.13289e+06 | 36.0871 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 258.374 | 0.835128 | 2.71696ms | 1000 | 30 | 28505.7 | 3691.07 | 11.6867 | 1(Win) |
| std::from_chars | 225.32 | 0.852967 | 1.28656ms | 1000 | 30 | 39100.9 | 4232.53 | 13.4103 | 2(Loss) |
| strtoll/strtoull | 128.132 | 0.476117 | 1.86129ms | 1000 | 30 | 37673.5 | 7442.93 | 23.6532 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 232.799 | 1.95187 | 74.6082ms | 100000 | 30 | 1.91805e+09 | 409656 | 13.0482 | 1(Win) |
| std::from_chars | 216.394 | 0.886881 | 412.795ms | 100000 | 48 | 7.33302e+08 | 440713 | 14.0324 | 2(Loss) |
| strtoll/strtoull | 121.515 | 0.424917 | 142.858ms | 100000 | 30 | 3.33634e+08 | 784819 | 25.0046 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 249.421 | 0.550449 | 360.621ms | 100000 | 48 | 2.12623e+08 | 382355 | 12.1773 | 1(Win) |
| std::from_chars | 209.584 | 0.868933 | 81.3648ms | 100000 | 30 | 4.69007e+08 | 455033 | 14.4914 | 2(Loss) |
| strtoll/strtoull | 124.446 | 0.797009 | 137.268ms | 100000 | 30 | 1.11915e+09 | 766337 | 24.4157 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 208.834 | 2.06451 | 1.33095ms | 100 | 30 | 2666.57 | 456.667 | 13.853 | 1(Win) |
| std::from_chars | 194.107 | 1.53011 | 2.70534ms | 100 | 48 | 2712.69 | 491.312 | 15.0644 | 2(Loss) |
| strtoll/strtoull | 106.576 | 1.14949 | 0.633593ms | 100 | 30 | 3174.07 | 894.833 | 27.8633 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 222.352 | 1.033 | 1.27283ms | 1000 | 30 | 58889.7 | 4289.03 | 13.5892 | 1(Win) |
| std::from_chars | 209.966 | 0.978929 | 1.33208ms | 1000 | 30 | 59309.6 | 4542.03 | 14.3977 | 2(Loss) |
| strtoll/strtoull | 106.304 | 2.34333 | 2.1054ms | 1000 | 30 | 1.32582e+06 | 8971.17 | 28.5076 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 202.231 | 0.706439 | 84.9386ms | 100000 | 30 | 3.32947e+08 | 471576 | 15.0193 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 201.792 | 0.544739 | 86.3037ms | 100000 | 30 | 1.98835e+08 | 472603 | 15.0572 | 1(Tie) |
| strtoll/strtoull | 107.972 | 0.274251 | 160.52ms | 100000 | 30 | 1.76035e+08 | 883263 | 28.1421 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 251.928 | 1.71572 | 0.648975ms | 200 | 30 | 5061.96 | 757.1 | 11.7058 | 1(Win) |
| std::from_chars | 214.197 | 1.18808 | 0.73442ms | 200 | 30 | 3357.77 | 890.467 | 13.8173 | 2(Loss) |
| strtoll/strtoull | 144.932 | 1.1929 | 1.71042ms | 200 | 30 | 7393.69 | 1316.03 | 20.5857 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 249.434 | 0.373343 | 12.2743ms | 2000 | 30 | 24450.4 | 7646.7 | 12.1458 | 1(Win) |
| std::from_chars | 219.267 | 0.520331 | 13.5965ms | 2000 | 30 | 61460.6 | 8698.77 | 13.8222 | 2(Loss) |
| strtoll/strtoull | 140.054 | 1.17134 | 19.2932ms | 2000 | 30 | 763415 | 13618.7 | 21.6503 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 247.145 | 0.428932 | 33.6395ms | 20000 | 30 | 3.2874e+06 | 77175.2 | 12.2892 | 1(Win) |
| std::from_chars | 212.183 | 0.793788 | 16.8848ms | 20000 | 30 | 1.52745e+07 | 89891.5 | 14.3158 | 2(Loss) |
| strtoll/strtoull | 145.007 | 0.730119 | 57.88ms | 20000 | 30 | 2.76689e+07 | 131535 | 20.9495 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 241.499 | 1.64292 | 143.045ms | 200000 | 30 | 5.05104e+09 | 789794 | 12.5794 | 1(Win) |
| std::from_chars | 209.934 | 0.657038 | 165.663ms | 200000 | 30 | 1.06905e+09 | 908548 | 14.4696 | 2(Loss) |
| strtoll/strtoull | 144.549 | 0.497039 | 1206.03ms | 200000 | 48 | 2.06467e+09 | 1.31951e+06 | 21.0166 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 392.539 | 2.29225 | 1.286ms | 200 | 30 | 3721.68 | 485.9 | 7.367 | 1(Win) |
| std::from_chars | 356.558 | 1.15616 | 1.34103ms | 200 | 30 | 1147.51 | 534.933 | 8.15067 | 2(Loss) |
| strtoll/strtoull | 189.951 | 1.25807 | 3.19746ms | 200 | 48 | 7659.98 | 1004.12 | 15.7019 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 409.656 | 1.02533 | 436.768ms | 200000 | 48 | 1.09393e+09 | 465598 | 7.41281 | 1(Win) |
| std::from_chars | 361.831 | 0.396666 | 663.059ms | 200000 | 30 | 1.31165e+08 | 527138 | 8.39655 | 2(Loss) |
| strtoll/strtoull | 179.151 | 0.614318 | 193.939ms | 200000 | 30 | 1.2833e+09 | 1.06466e+06 | 16.9602 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 382.546 | 0.683745 | 8.84249ms | 2000 | 30 | 34866.1 | 4985.93 | 7.90575 | 1(Win) |
| std::from_chars | 352.469 | 0.629842 | 9.71317ms | 2000 | 30 | 34850.1 | 5411.4 | 8.58427 | 2(Loss) |
| strtoll/strtoull | 192.587 | 0.605052 | 2.38275ms | 2000 | 30 | 107724 | 9903.83 | 15.7503 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 471.105 | 2.61142 | 0.557813ms | 200 | 30 | 3353.5 | 404.867 | 6.11433 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 464.452 | 3.11303 | 1.34164ms | 200 | 30 | 4903.06 | 410.667 | 6.207 | 1(Tie) |
| strtoll/strtoull | 195.185 | 1.11286 | 0.689928ms | 200 | 30 | 3547.89 | 977.2 | 15.2788 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 523.647 | 0.525186 | 1.13414ms | 2000 | 30 | 10978.2 | 3642.43 | 5.7653 | 1(Win) |
| std::from_chars | 495.862 | 0.895094 | 1.25359ms | 2000 | 30 | 35562.9 | 3846.53 | 6.0908 | 2(Loss) |
| strtoll/strtoull | 207.55 | 0.382203 | 2.16729ms | 2000 | 30 | 37010.6 | 9189.83 | 14.6125 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 478.901 | 0.683482 | 52.466ms | 20000 | 30 | 2.22302e+06 | 39827.6 | 6.33909 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 478.713 | 0.980742 | 17.5861ms | 20000 | 30 | 4.5808e+06 | 39843.3 | 6.34021 | 1(Tie) |
| strtoll/strtoull | 202.898 | 0.812315 | 17.4496ms | 20000 | 30 | 1.74934e+07 | 94005.2 | 14.9734 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 520.561 | 1.44951 | 162.425ms | 200000 | 30 | 8.46217e+08 | 366403 | 5.83167 | 1(Win) |
| std::from_chars | 490.423 | 1.82393 | 170.026ms | 200000 | 30 | 1.50958e+09 | 388919 | 6.19274 | 2(Loss) |
| strtoll/strtoull | 202.894 | 1.29198 | 855.316ms | 200000 | 48 | 7.0807e+09 | 940070 | 14.9751 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 388.764 | 0.57646 | 5.29473ms | 4000 | 30 | 95985.9 | 9812.37 | 7.79626 | 1(Win) |
| std::from_chars | 304.61 | 0.351149 | 6.4512ms | 4000 | 30 | 58014.5 | 12523.2 | 9.95511 | 2(Loss) |
| strtoll/strtoull | 225.25 | 1.48967 | 8.31391ms | 4000 | 30 | 1.90936e+06 | 16935.4 | 13.4677 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 392.342 | 1.00807 | 92.8943ms | 40000 | 48 | 4.6112e+07 | 97229 | 7.7395 | 1(Win) |
| std::from_chars | 287.052 | 1.04991 | 57.1135ms | 40000 | 30 | 5.84021e+07 | 132892 | 10.5828 | 2(Loss) |
| strtoll/strtoull | 224.49 | 0.812625 | 31.3524ms | 40000 | 30 | 5.72039e+07 | 169927 | 13.5339 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 421.139 | 0.635953 | 851.691ms | 400000 | 48 | 1.5928e+09 | 905805 | 7.21007 | 1(Win) |
| std::from_chars | 303.852 | 0.584707 | 536.284ms | 400000 | 30 | 1.61657e+09 | 1.25545e+06 | 9.99544 | 2(Loss) |
| strtoll/strtoull | 219.459 | 1.16332 | 314.104ms | 400000 | 30 | 1.22668e+10 | 1.73823e+06 | 13.8452 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 525.263 | 0.580458 | 13.582ms | 40000 | 30 | 5.33127e+06 | 72624.6 | 5.78027 | 1(Win) |
| std::from_chars | 355.752 | 3.5297 | 44.0549ms | 40000 | 30 | 4.29756e+08 | 107229 | 8.53135 | 2(Loss) |
| strtoll/strtoull | 270.533 | 1.42257 | 26.2138ms | 40000 | 30 | 1.2071e+08 | 141007 | 11.2294 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.464 | 2.21411 | 4.55408ms | 400 | 30 | 8213.11 | 747.3 | 5.77767 | 1(Win) |
| std::from_chars | 387.689 | 1.71928 | 3.13864ms | 400 | 48 | 13736.9 | 983.958 | 7.66766 | 2(Loss) |
| strtoll/strtoull | 270.159 | 0.97301 | 3.59724ms | 400 | 48 | 9060.62 | 1412.02 | 11.0939 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 542.832 | 0.587036 | 8.78617ms | 4000 | 48 | 81688.2 | 7027.4 | 5.57798 | 1(Win) |
| std::from_chars | 431.211 | 0.345718 | 2.11969ms | 4000 | 30 | 28061.1 | 8846.47 | 7.02657 | 2(Loss) |
| strtoll/strtoull | 303.119 | 0.457834 | 2.7989ms | 4000 | 30 | 99593.3 | 12584.8 | 10.0063 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 564.105 | 1.83577 | 86.2627ms | 40000 | 30 | 4.62335e+07 | 67623.9 | 5.38136 | 1(Win) |
| std::from_chars | 396.257 | 1.84705 | 123.141ms | 40000 | 30 | 9.48517e+07 | 96268.4 | 7.66591 | 2(Loss) |
| strtoll/strtoull | 269.465 | 1.75692 | 25.735ms | 40000 | 30 | 1.85585e+08 | 141566 | 11.275 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 592.554 | 1.88724 | 586.882ms | 400000 | 48 | 7.08535e+09 | 643772 | 5.12463 | 1(Win) |
| std::from_chars | 436.956 | 0.547325 | 821.287ms | 400000 | 48 | 1.09591e+09 | 873016 | 6.95151 | 2(Loss) |
| strtoll/strtoull | 274.069 | 1.42144 | 582.377ms | 400000 | 30 | 1.1743e+10 | 1.39188e+06 | 11.085 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 798.708 | 0.554453 | 444.346ms | 400000 | 48 | 3.36601e+08 | 477609 | 3.79862 | 1(Win) |
| std::from_chars | 566.57 | 0.385959 | 632.513ms | 400000 | 48 | 3.24142e+08 | 673297 | 5.36009 | 2(Loss) |
| strtoll/strtoull | 293.528 | 0.29287 | 236.697ms | 400000 | 30 | 4.34602e+08 | 1.2996e+06 | 10.3514 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 892.57 | 1.45074 | 1.5633ms | 800 | 30 | 4613.15 | 854.767 | 3.32204 | 1(Win) |
| std::from_chars | 519.973 | 2.08636 | 0.763167ms | 800 | 30 | 28113.6 | 1467.27 | 5.75158 | 2(Loss) |
| strtoll/strtoull | 374.449 | 1.79159 | 0.871813ms | 800 | 30 | 39975.6 | 2037.5 | 8.03483 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 876.801 | 3.82176 | 13.5479ms | 8000 | 30 | 3.31761e+06 | 8701.4 | 3.4449 | 1(Win) |
| std::from_chars | 502.66 | 0.252503 | 22.38ms | 8000 | 30 | 44064.1 | 15178 | 6.03325 | 2(Loss) |
| strtoll/strtoull | 383.101 | 0.517405 | 28.1596ms | 8000 | 30 | 318520 | 19914.8 | 7.92276 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 842.051 | 1.14312 | 116.302ms | 80000 | 30 | 3.21817e+07 | 90604.9 | 3.6056 | 1(Win) |
| std::from_chars | 518.026 | 0.818353 | 62.8558ms | 80000 | 30 | 4.35793e+07 | 147278 | 5.86316 | 2(Loss) |
| strtoll/strtoull | 350.366 | 1.64223 | 39.2643ms | 80000 | 30 | 3.83641e+08 | 217755 | 8.67243 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 934.945 | 0.744285 | 1007.39ms | 800000 | 30 | 1.10664e+09 | 816026 | 3.24803 | 1(Win) |
| std::from_chars | 542.358 | 0.656716 | 594.353ms | 800000 | 30 | 2.56026e+09 | 1.40671e+06 | 5.59905 | 2(Loss) |
| strtoll/strtoull | 355.503 | 0.730841 | 2556.87ms | 800000 | 30 | 7.38007e+09 | 2.14608e+06 | 8.545 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1089.39 | 3.56341 | 1.38228ms | 800 | 30 | 18683.7 | 700.333 | 2.66579 | 1(Win) |
| std::from_chars | 662.214 | 0.919592 | 3.42293ms | 800 | 48 | 5387.84 | 1152.1 | 4.50635 | 2(Loss) |
| strtoll/strtoull | 475.965 | 1.56604 | 2.01643ms | 800 | 30 | 18904.1 | 1602.93 | 6.30917 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1101.95 | 0.919328 | 13.2183ms | 80000 | 30 | 1.2154e+07 | 69235.4 | 2.75488 | 1(Win) |
| std::from_chars | 664.375 | 0.737564 | 21.7277ms | 80000 | 30 | 2.15216e+07 | 114836 | 4.57188 | 2(Loss) |
| strtoll/strtoull | 339.764 | 1.13265 | 214.627ms | 80000 | 48 | 3.10498e+08 | 224550 | 8.94217 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1314.28 | 1.59722 | 256.556ms | 800000 | 30 | 2.57902e+09 | 580499 | 2.31015 | 1(Win) |
| std::from_chars | 694.894 | 0.220609 | 472.644ms | 800000 | 30 | 1.75999e+08 | 1.09792e+06 | 4.37009 | 2(Loss) |
| strtoll/strtoull | 342.433 | 0.572986 | 405.192ms | 800000 | 30 | 4.8892e+09 | 2.228e+06 | 8.87247 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 743.47 | 0.636754 | 16.4786ms | 8000 | 30 | 128091 | 10261.9 | 4.07597 | 1(Win) |
| std::from_chars | 541.715 | 0.614649 | 15.2693ms | 8000 | 48 | 359694 | 14083.8 | 5.59766 | 2(Loss) |
| strtoll/strtoull | 326.043 | 0.338965 | 4.77423ms | 8000 | 30 | 188738 | 23399.9 | 9.30979 | 3(Loss) |
