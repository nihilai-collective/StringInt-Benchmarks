# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Linux 7.0.0-1017-azure using the Clang 24.0.0 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (INTEL(R) XEON(R) PLATINUM 8573C-AVX512): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 266.5 | 1.52008 | 1.24314ms | 264 | 30 | 6189.96 | 944.967 | 1.48687 | 7.95254 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 261.014 | 0.832794 | 1.23492ms | 264 | 48 | 3087.63 | 963.062 | 0.496367 | 8.08631 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 289.151 | 0.376872 | 10.8864ms | 2641 | 30 | 32322.9 | 8709.63 | 0.217857 | 7.55121 | 1(Win) | true |
| jeaiii::to_text | 280.161 | 0.435034 | 11.1513ms | 2642 | 30 | 45934.4 | 8994.67 | 0.828026 | 7.79425 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 281.527 | 0.871634 | 107.621ms | 26458 | 48 | 2.92933e+07 | 89625.1 | 0.921896 | 7.78407 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 280.486 | 0.529723 | 105.688ms | 26473 | 30 | 6.82019e+06 | 90009.7 | 3.66602 | 7.81475 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 278.199 | 0.180642 | 1083.67ms | 264799 | 30 | 8.06641e+07 | 907738 | 0.0299295 | 7.8828 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 277.683 | 0.332991 | 1084.04ms | 264741 | 30 | 2.74999e+08 | 909228 | 0.360209 | 7.89761 | 1(Tie) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 590.085 | 1.82093 | 0.662896ms | 316 | 30 | 2586.3 | 509.9 | 1.02232 | 3.4859 | 1(Win) | true |
| vn (unchecked core) | 546.175 | 1.83394 | 0.691809ms | 314 | 30 | 3028.6 | 547.867 | 1.21313 | 3.77924 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 633.494 | 0.561706 | 5.91488ms | 3146 | 30 | 21234.2 | 4736.4 | 1.18639 | 3.43325 | 1(Win) | true |
| vn (unchecked core) | 623.442 | 0.498185 | 5.9151ms | 3146 | 30 | 17246.1 | 4812.77 | 0.564873 | 3.48796 | 2(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 663.125 | 0.775233 | 54.6751ms | 31438 | 48 | 5.89683e+06 | 45212.3 | 0.33252 | 3.30356 | 1(Win) | true |
| vn (unchecked core) | 637.069 | 1.40447 | 56.2984ms | 31459 | 30 | 1.31241e+07 | 47093.6 | 3.14726 | 3.43854 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 636.182 | 0.521407 | 563.859ms | 314516 | 30 | 1.813e+08 | 471478 | 0.82784 | 3.44694 | 1(Win) | true |
| vn (unchecked core) | 623.668 | 0.433511 | 578.261ms | 314463 | 30 | 1.30363e+08 | 480857 | 0.0799373 | 3.51616 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 389.996 | 2.15132 | 0.702921ms | 213 | 48 | 6042.21 | 521.521 | 0.945711 | 5.24509 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 385.288 | 1.68919 | 0.660724ms | 215 | 30 | 2414.51 | 531.1 | 0.682464 | 5.3208 | 1(Tie) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 461.453 | 0.465236 | 5.54907ms | 2146 | 30 | 12768.5 | 4434.4 | 0.364583 | 4.70974 | 1(Win) | true |
| jeaiii::to_text | 427.264 | 0.589759 | 6.11711ms | 2149 | 30 | 24000.3 | 4795.93 | 1.86278 | 5.09097 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 467.597 | 0.768981 | 53.6304ms | 21498 | 48 | 5.45678e+06 | 43846.2 | 0.0868083 | 4.68458 | 1(Win) | true |
| vn (unchecked core) | 457.259 | 0.677154 | 53.5683ms | 21479 | 30 | 2.76055e+06 | 44797.1 | 0.119387 | 4.79097 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| jeaiii::to_text | 472.224 | 0.291633 | 542.023ms | 214786 | 30 | 4.80076e+07 | 433768 | 0.143618 | 4.64359 | 1(Win) | true |
| vn (unchecked core) | 438.845 | 0.367281 | 568.012ms | 214855 | 30 | 8.82241e+07 | 466911 | 0.161063 | 4.9968 | 2(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 388.818 | 1.48857 | 0.787201ms | 257 | 30 | 2637.29 | 629.867 | 1.06806 | 5.35462 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 382.805 | 1.21038 | 0.821596ms | 256 | 48 | 2850.07 | 636.625 | 0.261169 | 5.436 | 1(Tie) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 434.272 | 0.737428 | 7.10096ms | 2575 | 30 | 52184.1 | 5655.73 | 0.447313 | 5.0136 | 1(Win) | true |
| jeaiii::to_text | 410.217 | 0.64347 | 7.19604ms | 2571 | 30 | 44361.8 | 5976.07 | 3.56177 | 5.30936 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 427.411 | 0.935717 | 68.2467ms | 25708 | 30 | 8.643e+06 | 57362.4 | 0.627566 | 5.12647 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 425.458 | 0.619579 | 69.2186ms | 25702 | 48 | 6.11572e+06 | 57611.1 | 2.99803 | 5.1505 | 1(Tie) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 468.872 | 0.259754 | 637.76ms | 257047 | 48 | 8.85285e+07 | 522828 | 2.42312 | 4.67708 | 1(Win) | true |
| jeaiii::to_text | 440.84 | 0.217935 | 673.927ms | 257032 | 30 | 4.40544e+07 | 556041 | 0.451305 | 4.9743 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 494.522 | 0.953459 | 1.24117ms | 515 | 48 | 4308.69 | 993.688 | 0.101789 | 4.29143 | 1(Win) | true |
| jeaiii::to_text | 456.515 | 1.14044 | 1.31261ms | 515 | 48 | 7233.52 | 1076.42 | 0.246795 | 4.65855 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 543.934 | 0.322437 | 11.2705ms | 5160 | 48 | 40844.5 | 9046.94 | 0.359003 | 4.00948 | 1(Win) | true |
| jeaiii::to_text | 497.114 | 0.414394 | 12.2454ms | 5160 | 30 | 50480.7 | 9898.93 | 2.96622 | 4.39431 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 552.955 | 0.488455 | 108.845ms | 51624 | 48 | 9.07857e+06 | 89035.6 | 1.34164 | 3.9638 | 1(Win) | true |
| jeaiii::to_text | 497.43 | 0.590753 | 120.141ms | 51624 | 48 | 1.64095e+07 | 98973.9 | 0.500206 | 4.40655 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 536.466 | 0.256813 | 1101.81ms | 516137 | 30 | 1.66572e+08 | 917536 | 0.0494101 | 4.08728 | 1(Win) | true |
| jeaiii::to_text | 491.089 | 0.390119 | 1222.29ms | 516058 | 30 | 4.58556e+08 | 1.00216e+06 | 0.228177 | 4.46543 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 916.957 | 1.86666 | 0.745782ms | 564 | 30 | 3601.86 | 587 | 0.113443 | 2.26163 | 1(Win) | true |
| jeaiii::to_text | 867.951 | 1.27645 | 0.804609ms | 567 | 30 | 1897.17 | 623 | 1.13727 | 2.39706 | 2(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1049.03 | 0.613995 | 6.48693ms | 5659 | 30 | 29936.3 | 5144.87 | 0.155415 | 2.0696 | 1(Win) | true |
| jeaiii::to_text | 951.166 | 0.593476 | 7.14324ms | 5662 | 30 | 34057.8 | 5677.33 | 1.35127 | 2.28938 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1119.94 | 0.746234 | 58.4964ms | 56610 | 30 | 3.88214e+06 | 48205.9 | 1.04978 | 1.95579 | 1(Win) | true |
| jeaiii::to_text | 945.496 | 0.69681 | 69.4177ms | 56609 | 30 | 4.74891e+06 | 57098.1 | 0.340645 | 2.3173 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1026.57 | 0.480224 | 636.633ms | 566152 | 30 | 1.9138e+08 | 525950 | 0.0373344 | 2.1355 | 1(Win) | true |
| jeaiii::to_text | 938.735 | 0.440835 | 688.884ms | 566042 | 30 | 1.9279e+08 | 575050 | 0.143498 | 2.33541 | 2(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 783.73 | 1.60748 | 0.736586ms | 465 | 30 | 2483.69 | 566.033 | 0.672672 | 2.61412 | 1(Win) | true |
| jeaiii::to_text | 710.128 | 1.94501 | 0.762868ms | 465 | 30 | 4427.15 | 624.567 | 1.10074 | 2.92976 | 2(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 893.477 | 0.503545 | 6.24254ms | 4656 | 48 | 30065.4 | 4970.21 | 0.393376 | 2.42908 | 1(Win) | true |
| jeaiii::to_text | 808.279 | 0.700888 | 6.7131ms | 4664 | 30 | 44624.1 | 5502.7 | 0.186924 | 2.69363 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 869.032 | 0.726854 | 61.7242ms | 46617 | 30 | 4.14788e+06 | 51157 | 0.0223219 | 2.52089 | 1(Win) | true |
| jeaiii::to_text | 821.12 | 0.653192 | 65.1052ms | 46611 | 48 | 6.00176e+06 | 54135 | 0.0922534 | 2.66838 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 908.772 | 0.319356 | 588.47ms | 466156 | 30 | 7.32189e+07 | 489188 | 0.160631 | 2.41244 | 1(Win) | true |
| jeaiii::to_text | 815.14 | 0.469799 | 664.206ms | 466085 | 30 | 1.96884e+08 | 545297 | 0.66766 | 2.68968 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1171.5 | 2.40462 | 0.53632ms | 484 | 30 | 2689.17 | 393.733 | 1.99795 | 1.7173 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1146.48 | 2.00721 | 0.53169ms | 483 | 30 | 1949.69 | 401.633 | 0.108009 | 1.75091 | 1(Tie) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1289.77 | 0.837835 | 4.53999ms | 4830 | 30 | 26863.1 | 3571.57 | 0.984425 | 1.67524 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1289.51 | 0.910844 | 4.34123ms | 4830 | 30 | 31761.8 | 3572.3 | 1.24013 | 1.68201 | 1(Tie) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1326.03 | 1.35812 | 41.2115ms | 48310 | 30 | 6.67972e+06 | 34744.1 | 1.03541 | 1.65062 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1299.07 | 0.898645 | 42.8098ms | 48302 | 48 | 4.87405e+06 | 35459.8 | 0.129304 | 1.68458 | 1(Tie) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1327.46 | 0.460395 | 412.831ms | 483038 | 30 | 7.65775e+07 | 347024 | 0.721195 | 1.65125 | 1(Win) | true |
| jeaiii::to_text | 1301.34 | 0.477211 | 430.244ms | 483053 | 30 | 8.56145e+07 | 354000 | 0.306048 | 1.68433 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1014.79 | 1.02882 | 1.1765ms | 998 | 30 | 2792.46 | 937.767 | 0.774173 | 2.08471 | 1(Win) | true |
| jeaiii::to_text | 735.659 | 0.916416 | 1.67633ms | 999 | 30 | 4228.67 | 1295.53 | 2.08842 | 2.90244 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1155.14 | 0.383677 | 10.1642ms | 9981 | 30 | 29986.5 | 8240.17 | 0.852661 | 1.88677 | 1(Win) | true |
| jeaiii::to_text | 763.728 | 0.329968 | 15.3228ms | 9974 | 30 | 50664.4 | 12454.3 | 1.42902 | 2.86139 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1015.44 | 0.606291 | 114.02ms | 99827 | 30 | 9.69312e+06 | 93754 | 0.248543 | 2.1579 | 1(Win) | true |
| jeaiii::to_text | 749.154 | 0.484072 | 154.007ms | 99829 | 48 | 1.81651e+07 | 127083 | 0.0232963 | 2.92603 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1112.14 | 0.149909 | 1035.33ms | 998323 | 48 | 7.90536e+07 | 856077 | 0.0297028 | 1.97141 | 1(Win) | true |
| jeaiii::to_text | 754.433 | 0.171878 | 1524.68ms | 998248 | 30 | 1.41122e+08 | 1.26188e+06 | 0.000575858 | 2.90671 | 2(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1835.42 | 2.43176 | 0.711387ms | 1049 | 30 | 5267.4 | 544.9 | 0.790751 | 1.12202 | 1(Win) | true |
| jeaiii::to_text | 1048.6 | 1.48401 | 1.22895ms | 1049 | 30 | 6010.05 | 953.767 | 1.03906 | 2.02034 | 2(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1986.63 | 0.660428 | 6.26561ms | 10475 | 48 | 52933.9 | 5028.29 | 0.157857 | 1.09383 | 1(Win) | true |
| jeaiii::to_text | 1095.97 | 0.545656 | 11.3915ms | 10486 | 30 | 74361 | 9124.17 | 0.831406 | 1.99125 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1985.86 | 1.2459 | 60.9883ms | 104849 | 30 | 1.18065e+07 | 50351.9 | 0.867743 | 1.10249 | 1(Win) | true |
| jeaiii::to_text | 1074.72 | 0.780072 | 111.773ms | 104824 | 30 | 1.57951e+07 | 93017.7 | 0.275003 | 2.03924 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2021.06 | 0.385926 | 596.214ms | 1048281 | 30 | 1.09328e+08 | 494652 | 0.0167688 | 1.08456 | 1(Win) | true |
| jeaiii::to_text | 1074.32 | 0.387203 | 1105.5ms | 1048259 | 30 | 3.89462e+08 | 930535 | 0.359309 | 2.04104 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1761.55 | 1.71844 | 0.695021ms | 948 | 48 | 3733.36 | 513.208 | 0.438711 | 1.16122 | 1(Win) | true |
| jeaiii::to_text | 957.082 | 1.00696 | 1.19226ms | 948 | 48 | 4342.55 | 944.583 | 0.153743 | 2.20847 | 2(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1968.38 | 0.770543 | 5.79673ms | 9484 | 48 | 60174.6 | 4595.04 | 0.194577 | 1.0993 | 1(Win) | true |
| jeaiii::to_text | 986.406 | 0.473412 | 11.0667ms | 9479 | 30 | 56468.4 | 9164.37 | 1.34987 | 2.21155 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1904.73 | 1.30012 | 57.3384ms | 94828 | 30 | 1.14312e+07 | 47479 | 0.344563 | 1.14902 | 1(Win) | true |
| jeaiii::to_text | 1018.41 | 0.800923 | 106.775ms | 94827 | 30 | 1.51747e+07 | 88799.1 | 0.201477 | 2.1509 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1929.01 | 0.467036 | 563.466ms | 948261 | 30 | 1.43817e+08 | 468806 | 0.297137 | 1.13644 | 1(Win) | true |
| jeaiii::to_text | 1014.96 | 0.219577 | 1069.06ms | 948285 | 30 | 1.14835e+08 | 891025 | 0.38821 | 2.1602 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1850.32 | 2.88355 | 0.672474ms | 975 | 30 | 6292.82 | 502.267 | 0.35298 | 1.10737 | 1(Win) | true |
| jeaiii::to_text | 1342.44 | 1.40999 | 0.894324ms | 973 | 48 | 4563.32 | 691.521 | 1.06998 | 1.55509 | 2(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2047.78 | 0.754403 | 5.71348ms | 9740 | 30 | 35131.7 | 4536.13 | 1.15383 | 1.06003 | 1(Win) | true |
| jeaiii::to_text | 1431.05 | 0.645159 | 8.02769ms | 9738 | 30 | 52587.9 | 6489.57 | 0.024661 | 1.5219 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2011.46 | 1.04526 | 55.3388ms | 97405 | 30 | 6.99046e+06 | 46181.6 | 0.317518 | 1.08883 | 1(Win) | true |
| jeaiii::to_text | 1416.42 | 0.803631 | 78.6392ms | 97408 | 48 | 1.33341e+07 | 65584.9 | 0.586178 | 1.54653 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1996.54 | 0.505582 | 558.173ms | 974153 | 30 | 1.66037e+08 | 465318 | 0.313669 | 1.09803 | 1(Win) | true |
| jeaiii::to_text | 1410.38 | 0.27939 | 788.707ms | 974153 | 30 | 1.01607e+08 | 658704 | 0.358998 | 1.5546 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1626.77 | 1.05052 | 1.41646ms | 1936 | 30 | 4263.54 | 1134.8 | 1.24732 | 1.30858 | 1(Win) | true |
| jeaiii::to_text | 1395.51 | 1.32186 | 1.63976ms | 1938 | 30 | 9196.87 | 1324.57 | 0.133199 | 1.53201 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1761.06 | 0.385604 | 12.9744ms | 19371 | 30 | 49084.1 | 10489.8 | 2.45324 | 1.23918 | 1(Win) | true |
| jeaiii::to_text | 1420.82 | 3.67791 | 15.2978ms | 19371 | 30 | 6.86004e+06 | 13001.7 | 2.97111 | 1.53739 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1684.95 | 0.461578 | 132.171ms | 193786 | 48 | 1.23027e+07 | 109682 | 0.278432 | 1.30074 | 1(Win) | true |
| jeaiii::to_text | 1463.8 | 0.685693 | 152.169ms | 193785 | 30 | 2.24832e+07 | 126252 | 0.91748 | 1.49743 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1695.35 | 0.241646 | 1312.04ms | 1937937 | 30 | 2.08181e+08 | 1.09013e+06 | 0.194182 | 1.2932 | 1(Win) | true |
| jeaiii::to_text | 1455.45 | 0.335347 | 1524.41ms | 1937911 | 48 | 8.70366e+08 | 1.2698e+06 | 0.05248 | 1.50658 | 2(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2243.04 | 2.6077 | 1.09389ms | 1989 | 30 | 14585.8 | 845.567 | 0.658704 | 0.936929 | 1(Win) | true |
| jeaiii::to_text | 1839.46 | 1.33152 | 1.32408ms | 1988 | 48 | 9041.51 | 1030.75 | 0.092081 | 1.15092 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2607.09 | 0.661472 | 8.9385ms | 19878 | 30 | 69404.7 | 7271.47 | 1.24994 | 0.834209 | 1(Win) | true |
| jeaiii::to_text | 2010.25 | 2.16302 | 11.3668ms | 19880 | 48 | 1.99757e+06 | 9431.25 | 1.05957 | 1.08393 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2428.53 | 0.801736 | 94.0623ms | 198785 | 48 | 1.88011e+07 | 78062.1 | 0.205997 | 0.90199 | 1(Win) | true |
| jeaiii::to_text | 2036.39 | 0.888304 | 112.147ms | 198807 | 30 | 2.05204e+07 | 93104.4 | 0.452898 | 1.07632 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2439.88 | 0.236915 | 935.106ms | 1987965 | 30 | 1.01668e+08 | 777033 | 0.00253964 | 0.898728 | 1(Win) | true |
| jeaiii::to_text | 2036.48 | 0.674908 | 1118ms | 1987951 | 30 | 1.1843e+09 | 930948 | 0.227392 | 1.07669 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2366.84 | 2.17176 | 1.00072ms | 1888 | 30 | 8187.2 | 760.667 | 0.262238 | 0.884188 | 1(Win) | true |
| jeaiii::to_text | 1844.27 | 2.17599 | 1.28466ms | 1888 | 30 | 13536.6 | 976.2 | 0.977177 | 1.14809 | 2(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2565.17 | 0.737246 | 8.63133ms | 18881 | 30 | 80344.2 | 7019.47 | 3.34498 | 0.847895 | 1(Win) | true |
| jeaiii::to_text | 1999.68 | 0.545356 | 11.1659ms | 18881 | 30 | 72343.7 | 9004.5 | 0.301897 | 1.09043 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2593.79 | 1.14764 | 84.3532ms | 188801 | 30 | 1.90402e+07 | 69417.5 | 0.696477 | 0.844725 | 1(Win) | true |
| jeaiii::to_text | 1981.2 | 0.841892 | 110.482ms | 188799 | 30 | 1.75621e+07 | 90880.7 | 0.308777 | 1.1061 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2559.32 | 0.297211 | 846.304ms | 1887943 | 48 | 2.09845e+08 | 703501 | 0.0448299 | 0.856749 | 1(Win) | true |
| jeaiii::to_text | 1958.46 | 0.192042 | 1102.01ms | 1887943 | 48 | 1.49618e+08 | 919337 | 0.448192 | 1.11962 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2272.29 | 1.84334 | 1.08769ms | 1940 | 30 | 6755.96 | 814.1 | 1.03839 | 0.91394 | 1(Win) | true |
| jeaiii::to_text | 1480.57 | 1.36186 | 1.53819ms | 1940 | 30 | 8690 | 1249.73 | 0.338212 | 1.44325 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2380.03 | 0.789636 | 9.54994ms | 19399 | 30 | 113026 | 7773.23 | 0.00986388 | 0.915821 | 1(Win) | true |
| jeaiii::to_text | 1528.2 | 0.503571 | 14.8322ms | 19398 | 30 | 111477 | 12105.2 | 0.723308 | 1.42918 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2387.92 | 0.859107 | 92.7356ms | 193990 | 30 | 1.32903e+07 | 77474.6 | 0.574802 | 0.917584 | 1(Win) | true |
| jeaiii::to_text | 1553.48 | 0.633823 | 144.903ms | 193967 | 48 | 2.73416e+07 | 119076 | 0.0568328 | 1.41096 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2391.02 | 0.26267 | 930.056ms | 1939780 | 30 | 1.23903e+08 | 773693 | 0.373705 | 0.916943 | 1(Win) | true |
| jeaiii::to_text | 1538.94 | 0.256814 | 1435.67ms | 1939766 | 48 | 4.57443e+08 | 1.20207e+06 | 0.397528 | 1.42479 | 2(Loss) | true |
