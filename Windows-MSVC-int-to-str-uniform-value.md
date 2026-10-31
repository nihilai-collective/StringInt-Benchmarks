# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36260.0 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 284.74 | 2.21201 | 1.1299ms | 265 | 30 | 11540.2 | 886.667 | 1.48148 | 7.88152 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 276.426 | 1.79819 | 1.1717ms | 265 | 30 | 8091.95 | 913.333 | 0.320366 | 7.92206 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 331.894 | 0.446188 | 9.355ms | 2643 | 30 | 34436.8 | 7593.33 | 0.0877193 | 6.98148 | 1(Win) | true |
| jeaiii::to_text | 308.698 | 0.40037 | 10.005ms | 2650 | 30 | 32229.9 | 8186.67 | 0.163132 | 7.52392 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 321.675 | 1.15205 | 96.0908ms | 26476 | 30 | 2.45317e+07 | 78493.3 | 0.237248 | 7.2463 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 316.609 | 1.07314 | 99.3986ms | 26488 | 30 | 2.19936e+07 | 79786.7 | 0.123615 | 7.36188 | 1(Tie) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 312.063 | 0.311565 | 980.335ms | 264776 | 30 | 1.90673e+08 | 809163 | 0.150546 | 7.47253 | 1(Win) | true |
| jeaiii::to_text | 302.498 | 0.231973 | 1011.75ms | 264748 | 48 | 1.79944e+08 | 834662 | 1.05554 | 7.70869 | 2(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 565.847 | 3.63551 | 0.6988ms | 314 | 30 | 11137.9 | 530 | 1.76 | 3.74475 | 1(Win) | true |
| jeaiii::to_text | 505.447 | 2.7915 | 0.7813ms | 314 | 30 | 8229.89 | 593.333 | 0.636042 | 4.29266 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 697.915 | 0.557636 | 5.3231ms | 3142 | 30 | 17195.4 | 4293.33 | 1.07527 | 3.30261 | 1(Win) | true |
| jeaiii::to_text | 604.682 | 0.667958 | 6.1666ms | 3143 | 30 | 32885.1 | 4956.67 | 0.368509 | 3.82944 | 2(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 715.286 | 0.284733 | 51.0068ms | 31446 | 30 | 427540 | 41926.7 | 1.9565 | 3.25606 | 1(Win) | true |
| jeaiii::to_text | 638.401 | 0.296035 | 57.2199ms | 31449 | 30 | 580276 | 46980 | 0.306028 | 3.64884 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 666.11 | 0.503215 | 541.89ms | 314447 | 30 | 1.53969e+08 | 450197 | 0.0510627 | 3.50044 | 1(Win) | true |
| jeaiii::to_text | 595.551 | 0.384643 | 606.934ms | 314427 | 48 | 1.80036e+08 | 503502 | 0.0746167 | 3.91538 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 395.488 | 2.67103 | 0.7426ms | 215 | 48 | 9215.43 | 518.75 | 0.403226 | 5.59462 | 1(Win) | true |
| jeaiii::to_text | 344.601 | 2.47459 | 0.7576ms | 216 | 30 | 6540.23 | 596.667 | 0 | 6.10637 | 2(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 502.191 | 0.633462 | 5.102ms | 2152 | 48 | 32180.9 | 4087.5 | 0.547445 | 4.59689 | 1(Win) | true |
| jeaiii::to_text | 418.903 | 0.653061 | 6.0565ms | 2151 | 30 | 30678.2 | 4896.67 | 0.70131 | 5.53819 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 497.439 | 0.253121 | 50.4397ms | 21487 | 30 | 326161 | 41193.3 | 0.105084 | 4.68296 | 1(Win) | true |
| jeaiii::to_text | 441.194 | 1.59975 | 55.7119ms | 21481 | 30 | 1.65533e+07 | 46433.3 | 0.518649 | 5.28141 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 447.201 | 0.44963 | 551.74ms | 214856 | 48 | 2.03724e+08 | 458190 | 0.0960313 | 5.21381 | 1(Win) | true |
| jeaiii::to_text | 412.635 | 0.499545 | 597.14ms | 214843 | 30 | 1.84578e+08 | 496540 | 0.00344059 | 5.65077 | 2(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 400.9 | 2.04082 | 0.8358ms | 257 | 48 | 7500 | 612.5 | 1.51934 | 5.52885 | 1(Win) | true |
| jeaiii::to_text | 345.338 | 1.95137 | 0.9575ms | 257 | 30 | 5758.62 | 710 | 2.73973 | 6.30533 | 2(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 463.941 | 0.445624 | 6.586ms | 2572 | 48 | 26648.9 | 5287.5 | 0.39557 | 4.99038 | 1(Win) | true |
| jeaiii::to_text | 403.382 | 0.607497 | 7.3104ms | 2567 | 30 | 40793.1 | 6070 | 2.64938 | 5.73311 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 466.95 | 0.818272 | 63.4723ms | 25710 | 48 | 8.86121e+06 | 52508.3 | 0.44956 | 4.98652 | 1(Win) | true |
| jeaiii::to_text | 414.35 | 1.44246 | 71.1766ms | 25704 | 30 | 2.18466e+07 | 59160 | 0.0112701 | 5.62392 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 464.853 | 0.504308 | 637.069ms | 257066 | 30 | 2.12213e+08 | 527387 | 0.0417325 | 5.01589 | 1(Win) | true |
| jeaiii::to_text | 415.096 | 0.314895 | 716.745ms | 257027 | 48 | 1.6597e+08 | 590512 | 0.154007 | 5.61736 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 527.197 | 1.16907 | 1.2768ms | 517 | 48 | 5740.25 | 935.417 | 0.133452 | 4.24552 | 1(Win) | true |
| jeaiii::to_text | 439.086 | 2.24572 | 1.4323ms | 517 | 30 | 19092 | 1123.33 | 1.54426 | 5.12233 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 571.762 | 0.349137 | 10.6819ms | 5168 | 30 | 27172.4 | 8620 | 0.0772798 | 4.05727 | 1(Win) | true |
| jeaiii::to_text | 508.152 | 0.295881 | 11.9593ms | 5161 | 30 | 24643.7 | 9686.67 | 0.581594 | 4.57382 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 556.456 | 0.961475 | 105.315ms | 51606 | 48 | 3.47097e+07 | 88443.8 | 0.204407 | 4.18838 | 1(Win) | true |
| jeaiii::to_text | 494.86 | 1.25569 | 119.182ms | 51615 | 30 | 4.68029e+07 | 99470 | 0.776738 | 4.71039 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 565.631 | 0.252478 | 1044.81ms | 516070 | 48 | 2.31654e+08 | 870112 | 0.0846392 | 4.12272 | 1(Win) | true |
| jeaiii::to_text | 504.271 | 0.215059 | 1179.97ms | 516070 | 48 | 2.11469e+08 | 975988 | 0.201015 | 4.62434 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 913.277 | 1.93815 | 0.8212ms | 567 | 48 | 6312.06 | 591.667 | 0.282486 | 2.40802 | 1(Win) | true |
| jeaiii::to_text | 520.381 | 2.59511 | 1.3363ms | 566 | 30 | 21712.6 | 1036.67 | 0.974026 | 4.2706 | 2(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1061.94 | 0.468774 | 6.3169ms | 5664 | 30 | 17057.5 | 5086.67 | 0.328731 | 2.1731 | 1(Win) | true |
| jeaiii::to_text | 843.501 | 0.355683 | 7.8877ms | 5662 | 48 | 24889.2 | 6402.08 | 0.279076 | 2.75062 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1066.03 | 1.83558 | 60.9807ms | 56610 | 30 | 2.59246e+07 | 50643.3 | 0.0986323 | 2.18604 | 1(Win) | true |
| jeaiii::to_text | 840.229 | 1.10027 | 77.461ms | 56598 | 48 | 2.39799e+07 | 64239.6 | 0.716733 | 2.77338 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1047.97 | 0.576829 | 621.569ms | 566129 | 30 | 2.64942e+08 | 515190 | 0.377074 | 2.22513 | 1(Win) | true |
| jeaiii::to_text | 830.404 | 0.541618 | 782.701ms | 566061 | 30 | 3.71924e+08 | 650090 | 0.367965 | 2.80806 | 2(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 740.455 | 1.92194 | 0.8457ms | 466 | 48 | 6382.98 | 600 | 3.74332 | 2.90027 | 1(Win) | true |
| jeaiii::to_text | 619.916 | 1.45904 | 0.9607ms | 466 | 48 | 5248.23 | 716.667 | 0 | 3.58718 | 2(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 883.924 | 0.444454 | 6.2263ms | 4656 | 30 | 14954 | 5023.33 | 0 | 2.61703 | 1(Win) | true |
| jeaiii::to_text | 713.074 | 0.40303 | 7.712ms | 4663 | 30 | 18954 | 6236.67 | 0.456376 | 3.24759 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 886.2 | 0.411201 | 61.7245ms | 46611 | 30 | 1.27628e+06 | 50160 | 0.0997805 | 2.63032 | 1(Win) | true |
| jeaiii::to_text | 711.452 | 0.986924 | 75.8018ms | 46609 | 48 | 1.82495e+07 | 62477.1 | 0.482505 | 3.27497 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 887.64 | 0.407553 | 606.212ms | 466100 | 48 | 1.99938e+08 | 500775 | 0.00166412 | 2.62696 | 1(Win) | true |
| jeaiii::to_text | 709.144 | 0.345912 | 762.38ms | 466100 | 48 | 2.25664e+08 | 626823 | 0.0350434 | 3.28818 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 977.888 | 3.83739 | 0.671ms | 482 | 30 | 9758.62 | 470 | 2.08333 | 2.20625 | 1(Win) | true |
| jeaiii::to_text | 801.641 | 4.09119 | 0.7517ms | 482 | 30 | 16505.7 | 573.333 | 0 | 2.84182 | 2(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1304.47 | 0.707727 | 4.4211ms | 4828 | 30 | 18724.1 | 3530 | 0.284091 | 1.76714 | 1(Win) | true |
| jeaiii::to_text | 1059.45 | 0.503175 | 5.3551ms | 4830 | 48 | 22974.3 | 4347.92 | 0.105526 | 2.18415 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1248.3 | 1.81268 | 44.4196ms | 48305 | 48 | 2.148e+07 | 36904.2 | 2.3978 | 1.86593 | 1(Win) | true |
| jeaiii::to_text | 1085.38 | 0.19522 | 51.9115ms | 48301 | 30 | 205931 | 42440 | 2.38442 | 2.1463 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1320.24 | 0.6579 | 418.756ms | 483064 | 30 | 1.58104e+08 | 348940 | 0.154994 | 1.76607 | 1(Win) | true |
| jeaiii::to_text | 1075.46 | 0.655464 | 519.762ms | 483064 | 30 | 2.36507e+08 | 428363 | 0.687921 | 2.16799 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1031.37 | 1.45139 | 1.2458ms | 998 | 48 | 8612.59 | 922.917 | 0.0451264 | 2.15548 | 1(Win) | true |
| jeaiii::to_text | 757.162 | 1.2389 | 1.6195ms | 1000 | 30 | 7310.34 | 1260 | 2.32558 | 2.98621 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1154.6 | 0.373441 | 10.1422ms | 9981 | 48 | 45492 | 8243.75 | 0.248277 | 2.01223 | 1(Win) | true |
| jeaiii::to_text | 819.768 | 0.363206 | 14.2099ms | 9980 | 30 | 53344.8 | 11610 | 0.176164 | 2.83515 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1131.78 | 1.3035 | 102.535ms | 99854 | 30 | 3.60866e+07 | 84140 | 0.74709 | 2.05926 | 1(Win) | true |
| jeaiii::to_text | 808.672 | 0.796373 | 141.533ms | 99804 | 48 | 4.21723e+07 | 117700 | 0.245784 | 2.88238 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1149.8 | 0.413704 | 1004.36ms | 998309 | 30 | 3.52039e+08 | 828027 | 0.384973 | 2.02803 | 1(Win) | true |
| jeaiii::to_text | 817.522 | 0.264878 | 1423.42ms | 998297 | 30 | 2.85453e+08 | 1.16456e+06 | 0.0499724 | 2.85241 | 2(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1594.03 | 2.6325 | 0.8419ms | 1048 | 48 | 13080.7 | 627.083 | 4.01786 | 1.32651 | 1(Win) | true |
| jeaiii::to_text | 1016.88 | 1.82982 | 1.2909ms | 1049 | 30 | 9712.64 | 983.333 | 0 | 2.16999 | 2(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2064.29 | 0.510918 | 6.0224ms | 10477 | 30 | 18344.8 | 4840 | 0.267587 | 1.12438 | 1(Win) | true |
| jeaiii::to_text | 1152.82 | 0.294802 | 10.666ms | 10484 | 48 | 31378.5 | 8672.92 | 0.110619 | 2.01226 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2059.06 | 1.43284 | 58.7053ms | 104828 | 48 | 2.32302e+07 | 48552.1 | 0.317376 | 1.13107 | 1(Win) | true |
| jeaiii::to_text | 1160.55 | 0.935182 | 103.933ms | 104828 | 48 | 3.11501e+07 | 86141.7 | 0.00967305 | 2.00794 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2061.43 | 0.409932 | 588.264ms | 1048302 | 48 | 1.89714e+08 | 484973 | 0.206537 | 1.13114 | 1(Win) | true |
| jeaiii::to_text | 1150.82 | 0.250853 | 1046.41ms | 1048302 | 48 | 2.27948e+08 | 868717 | 0.0900901 | 2.02626 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1627.47 | 3.82129 | 0.7435ms | 950 | 30 | 13574.7 | 556.667 | 1.82927 | 1.30664 | 1(Win) | true |
| jeaiii::to_text | 952.637 | 2.06557 | 1.1867ms | 949 | 30 | 11551.7 | 950 | 0.884956 | 2.36573 | 2(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2137.18 | 0.834845 | 5.3333ms | 9487 | 30 | 37471.3 | 4233.33 | 0.157729 | 1.07623 | 1(Win) | true |
| jeaiii::to_text | 1084.38 | 0.409118 | 10.1968ms | 9487 | 30 | 34954 | 8343.33 | 0.079968 | 2.13937 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2100.46 | 0.419131 | 52.7699ms | 94854 | 30 | 977471 | 43066.7 | 0.777575 | 1.10907 | 1(Win) | true |
| jeaiii::to_text | 1079.88 | 1.14962 | 108.112ms | 94818 | 30 | 2.7801e+07 | 83736.7 | 0.605365 | 2.15803 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2153.88 | 0.460479 | 511.053ms | 948245 | 48 | 1.79414e+08 | 419854 | 0.696744 | 1.08258 | 1(Win) | true |
| jeaiii::to_text | 1083.14 | 0.3469 | 1017.64ms | 948245 | 30 | 2.51653e+08 | 834903 | 0.0895616 | 2.15289 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1896.51 | 2.52512 | 0.7272ms | 974 | 48 | 7335.99 | 489.583 | 3.37171 | 1.12976 | 1(Win) | true |
| jeaiii::to_text | 1217.08 | 2.03372 | 0.9738ms | 974 | 30 | 7229.89 | 763.333 | 1.23989 | 1.83175 | 2(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2378.27 | 0.771839 | 4.8813ms | 9734 | 30 | 27229.9 | 3903.33 | 0.407288 | 0.969177 | 1(Win) | true |
| jeaiii::to_text | 1446.7 | 0.644179 | 7.8271ms | 9739 | 30 | 51310.3 | 6420 | 0.364773 | 1.5982 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2438.21 | 0.313947 | 46.7231ms | 97417 | 30 | 429299 | 38103.3 | 1.14264 | 0.955352 | 1(Win) | true |
| jeaiii::to_text | 1464.71 | 1.51317 | 76.0364ms | 97410 | 30 | 2.76308e+07 | 63423.3 | 0.293455 | 1.59058 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2409.59 | 0.694838 | 470.162ms | 974135 | 30 | 2.15299e+08 | 385547 | 1.07212 | 0.967672 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 1473.34 | 0.489351 | 774.709ms | 974159 | 30 | 2.85638e+08 | 630560 | 5.7642 | 1.58266 | -(Loss) | false |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1465.52 | 1.43185 | 1.6363ms | 1937 | 48 | 15633.9 | 1260.42 | 0.56516 | 1.54058 | 1(Win) | true |
| jeaiii::to_text | 1274.37 | 1.43182 | 1.8116ms | 1938 | 30 | 12931 | 1450 | 0.288184 | 1.77109 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1584.93 | 0.345125 | 14.3956ms | 19384 | 30 | 48609.2 | 11663.3 | 0.596591 | 1.46977 | 1(Win) | true |
| jeaiii::to_text | 1330.91 | 0.295237 | 17.0173ms | 19375 | 30 | 50402.3 | 13883.3 | 0.119904 | 1.74843 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1547.38 | 1.23955 | 146.004ms | 193792 | 30 | 6.57548e+07 | 119437 | 0.58267 | 1.50654 | 1(Win) | true |
| jeaiii::to_text | 1357.28 | 1.07163 | 162.762ms | 193794 | 30 | 6.38782e+07 | 136167 | 0.435178 | 1.71728 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1605.84 | 0.267812 | 1388.32ms | 1937967 | 30 | 2.85017e+08 | 1.15092e+06 | 0.00782044 | 1.45218 | 1(Win) | true |
| jeaiii::to_text | 1369.2 | 0.175281 | 1629.03ms | 1937967 | 30 | 1.67937e+08 | 1.34983e+06 | 0.0885748 | 1.70313 | 2(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2115.6 | 2.36024 | 1.165ms | 1989 | 30 | 13436.8 | 896.667 | 1.27059 | 1.05393 | 1(Win) | true |
| jeaiii::to_text | 1645.92 | 1.4844 | 1.5104ms | 1988 | 48 | 14038.1 | 1152.08 | 0.396254 | 1.37362 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2466.44 | 0.517132 | 9.4384ms | 19880 | 30 | 47402.3 | 7686.67 | 0.146143 | 0.940579 | 1(Win) | true |
| jeaiii::to_text | 1702.72 | 0.33451 | 13.6746ms | 19878 | 30 | 41609.2 | 11133.3 | 0.360577 | 1.36712 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2475.46 | 1.34601 | 92.9614ms | 198796 | 30 | 3.18805e+07 | 76586.7 | 0.965517 | 0.941254 | 1(Win) | true |
| jeaiii::to_text | 1809.79 | 0.836733 | 126.427ms | 198797 | 48 | 3.68787e+07 | 104756 | 0.00596659 | 1.28763 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2455.15 | 0.482304 | 943.802ms | 1987919 | 30 | 4.16106e+08 | 772183 | 0.305804 | 0.949771 | 1(Win) | true |
| jeaiii::to_text | 1795.07 | 0.382156 | 1292.53ms | 1987919 | 30 | 4.88695e+08 | 1.05613e+06 | 0.0922849 | 1.29907 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2079.27 | 2.43252 | 1.1385ms | 1890 | 30 | 13333.3 | 866.667 | 0 | 1.08785 | 1(Win) | true |
| jeaiii::to_text | 1527.15 | 2.27687 | 1.4649ms | 1890 | 30 | 21655.2 | 1180 | 1.39276 | 1.463 | 2(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 2370.83 | 0.403981 | 9.6371ms | 18877 | 30 | 28229.9 | 7593.33 | 8.46811 | 0.979811 | -(Win) | false |
| jeaiii::to_text | 1709.85 | 0.335063 | 13.0324ms | 18879 | 30 | 37344.8 | 10530 | 1.06483 | 1.36014 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2366.96 | 1.42174 | 91.6233ms | 188792 | 48 | 5.61397e+07 | 76066.7 | 0.161876 | 0.984425 | 1(Win) | true |
| jeaiii::to_text | 1797.32 | 0.86622 | 121.216ms | 188792 | 48 | 3.61423e+07 | 100175 | 0.485115 | 1.29668 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2391.65 | 0.38159 | 912.672ms | 1887931 | 30 | 2.47567e+08 | 752817 | 0.100908 | 0.974972 | 1(Win) | true |
| jeaiii::to_text | 1794.62 | 0.280187 | 1233.11ms | 1887995 | 30 | 2.3707e+08 | 1.0033e+06 | 0.255501 | 1.29939 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2323.57 | 2.20992 | 1.0548ms | 1941 | 30 | 9298.85 | 796.667 | 1.4433 | 0.95547 | 1(Win) | true |
| jeaiii::to_text | 1307.95 | 1.75403 | 1.7999ms | 1938 | 30 | 18436.8 | 1413.33 | 0.236407 | 1.73203 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2692.85 | 0.691423 | 8.4887ms | 19399 | 30 | 67689.7 | 6870 | 0.223903 | 0.859883 | 1(Win) | true |
| jeaiii::to_text | 1430.92 | 0.243472 | 15.8698ms | 19396 | 48 | 47548.8 | 12927.1 | 0.0225574 | 1.6245 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2683.7 | 1.27446 | 83.1726ms | 193983 | 48 | 3.7047e+07 | 68933.3 | 0.0629022 | 0.868155 | 1(Win) | true |
| jeaiii::to_text | 1423.37 | 0.94782 | 156.878ms | 193977 | 30 | 4.55237e+07 | 129967 | 0.00769487 | 1.63764 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2682.12 | 0.554025 | 836.894ms | 1939773 | 30 | 4.38052e+08 | 689720 | 0.021934 | 0.869218 | 1(Win) | true |
| jeaiii::to_text | 1414.67 | 0.162164 | 1600.45ms | 1939785 | 48 | 2.15848e+08 | 1.30767e+06 | 0.144005 | 1.64838 | 2(Loss) | true |
