# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36257.0 compiler).  

Latest Results: (Oct 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 5% AND mean shift <= 2.5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [ae63a25](https://github.com/nihilai-collective/benchmarksuite/commit/ae63a25).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 623.908 | 2.51705 | 0.6063ms | 264 | 30 | 3091.95 | 403.333 | 2.41935 | 4.45048 | 1(Win) | true |
| jeaiii::to_text | 440.048 | 1.56117 | 0.7186ms | 263 | 48 | 3812.06 | 570.833 | 1.01156 | 6.59669 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 708.583 | 0.493851 | 4.5115ms | 2644 | 48 | 14822.7 | 3558.33 | 0.140318 | 4.25265 | 1(Win) | true |
| jeaiii::to_text | 473.481 | 0.698289 | 6.4531ms | 2648 | 30 | 41609.2 | 5333.33 | 0.187852 | 6.38931 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 681.751 | 0.517133 | 45.3026ms | 26472 | 30 | 1.1001e+06 | 37030 | 0.430223 | 4.45363 | 1(Win) | true |
| jeaiii::to_text | 429.998 | 0.872314 | 69.4451ms | 26500 | 30 | 7.88547e+06 | 58773.3 | 1.7133 | 7.06611 | 2(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 695.928 | 0.663635 | 437.184ms | 264744 | 48 | 2.78243e+08 | 362796 | 0.140607 | 4.36584 | 1(Win) | true |
| jeaiii::to_text | 432.686 | 0.471033 | 700.694ms | 264824 | 30 | 2.26774e+08 | 583693 | 0.716081 | 7.02253 | 2(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1768.97 | 8.05166 | 0.2969ms | 315 | 30 | 5620.69 | 170 | 1.92308 | 1.55761 | -(Win) | false |
| jeaiii::to_text | 820.16 | 2.72204 | 0.4785ms | 315 | 30 | 2988.51 | 366.667 | 0.917431 | 3.56459 | 2(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2240.76 | 1.73823 | 1.7243ms | 3148 | 30 | 16275.9 | 1340 | 0.249377 | 1.32617 | 1(Win) | true |
| jeaiii::to_text | 901.958 | 0.851856 | 4.0187ms | 3146 | 30 | 24092 | 3326.67 | 1.19138 | 3.33928 | 2(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2337.8 | 0.551158 | 15.7513ms | 31454 | 48 | 240066 | 12831.2 | 2.05153 | 1.29562 | 1(Win) | true |
| jeaiii::to_text | 981.843 | 0.665681 | 36.8183ms | 31439 | 30 | 1.23964e+06 | 30536.7 | 0.570864 | 3.09129 | 2(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2266.33 | 0.83007 | 161.797ms | 314456 | 30 | 3.61929e+07 | 132323 | 0.151374 | 1.34008 | 1(Win) | true |
| jeaiii::to_text | 980.54 | 0.851837 | 367.989ms | 314456 | 30 | 2.03621e+08 | 305840 | 0.137516 | 3.09844 | 2(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1509.36 | 7.42837 | 0.2464ms | 216 | 30 | 3091.95 | 136.667 | 4.65116 | 1.69533 | -(Win) | false |
| jeaiii::to_text | 567.742 | 3.36008 | 0.4783ms | 216 | 30 | 4471.26 | 363.333 | 0 | 4.95932 | 2(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1647.99 | 1.75379 | 1.679ms | 2149 | 30 | 14264.4 | 1243.33 | 6.75 | 1.82521 | -(Win) | false |
| jeaiii::to_text | 599.428 | 0.713283 | 4.1837ms | 2151 | 48 | 28612.6 | 3422.92 | 0.575416 | 5.02071 | 2(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1688.3 | 0.51126 | 15.6753ms | 21486 | 30 | 115506 | 12136.7 | 2.85486 | 1.79371 | -(Win) | false |
| jeaiii::to_text | 678.788 | 0.959951 | 36.8824ms | 21486 | 30 | 2.51913e+06 | 30186.7 | 0.450698 | 4.46979 | 2(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1624.19 | 1.81502 | 152.363ms | 214839 | 30 | 1.57266e+08 | 126147 | 0.258966 | 1.87055 | 1(Win) | true |
| jeaiii::to_text | 667.578 | 1.05505 | 367.609ms | 214839 | 30 | 3.1455e+08 | 306910 | 0.13639 | 4.55044 | 2(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1888.03 | 6.54587 | 0.214ms | 257 | 30 | 2172.41 | 130 | 5.45455 | 1.33169 | -(Win) | false |
| jeaiii::to_text | 603.551 | 2.61871 | 0.5288ms | 257 | 30 | 3402.3 | 406.667 | 1.66667 | 4.73345 | 2(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2019.41 | 1.92511 | 1.5601ms | 2569 | 30 | 16367.8 | 1213.33 | 0.102916 | 1.48366 | 1(Win) | true |
| jeaiii::to_text | 685.694 | 0.837226 | 4.384ms | 2569 | 30 | 26850.6 | 3573.33 | 0.0700117 | 4.38616 | 2(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1926.74 | 2.74321 | 14.8705ms | 25699 | 30 | 3.65269e+06 | 12720 | 1.05932 | 1.56813 | 1(Win) | true |
| jeaiii::to_text | 687.489 | 0.572425 | 43.7192ms | 25692 | 48 | 1.99776e+06 | 35639.6 | 0.706956 | 4.41758 | 2(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2049.97 | 0.399156 | 147.215ms | 257044 | 30 | 6.83476e+06 | 119580 | 0.0223052 | 1.48207 | 1(Win) | true |
| jeaiii::to_text | 674.204 | 0.49921 | 436.199ms | 257044 | 30 | 9.88372e+07 | 363593 | 0.407788 | 4.50632 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 812.491 | 1.33657 | 0.7932ms | 517 | 48 | 3151.6 | 606.25 | 0.614754 | 3.65271 | 1(Win) | true |
| jeaiii::to_text | 721.164 | 1.01275 | 0.8473ms | 517 | 30 | 1436.78 | 683.333 | 0 | 4.05083 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 863.373 | 0.39697 | 7.0365ms | 5169 | 30 | 15413.8 | 5710 | 1.30356 | 3.49756 | 1(Win) | true |
| jeaiii::to_text DID NOT CONVERGE | 796.135 | 0.361463 | 7.6744ms | 5156 | 30 | 14954 | 6176.67 | 3.2376 | 3.79962 | -(Loss) | false |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 868.052 | 0.205429 | 68.9563ms | 51611 | 48 | 651272 | 56702.1 | 0.172388 | 3.49897 | 1(Win) | true |
| jeaiii::to_text | 783.528 | 0.503895 | 75.9718ms | 51596 | 30 | 3.00414e+06 | 62800 | 1.64961 | 3.87697 | 2(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 854.299 | 0.326654 | 697.391ms | 516065 | 48 | 1.69983e+08 | 576096 | 0.323117 | 3.55663 | 1(Win) | true |
| jeaiii::to_text | 782.369 | 0.791779 | 757.785ms | 516086 | 30 | 7.44303e+08 | 629087 | 0.0890973 | 3.88385 | 2(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1528.13 | 2.95226 | 0.4783ms | 566 | 30 | 3264.37 | 353.333 | 1.96532 | 1.90132 | 1(Win) | true |
| jeaiii::to_text | 1321.37 | 1.90611 | 0.5387ms | 566 | 48 | 2907.8 | 408.333 | 0.406504 | 2.18566 | 2(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1662.77 | 0.505858 | 4.0401ms | 5661 | 30 | 8091.95 | 3246.67 | 1.61616 | 1.81864 | 1(Win) | true |
| jeaiii::to_text | 1465.65 | 0.505549 | 4.522ms | 5661 | 30 | 10402.3 | 3683.33 | 0.0565931 | 2.05656 | 2(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1744.8 | 0.495308 | 37.6722ms | 56606 | 30 | 704552 | 30940 | 0.129116 | 1.73846 | 1(Win) | true |
| jeaiii::to_text | 1468.28 | 0.427588 | 44.9646ms | 56621 | 30 | 741851 | 36776.7 | 0.283568 | 2.06782 | 2(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1639.01 | 0.485813 | 395.977ms | 566071 | 48 | 1.22901e+08 | 329373 | 0.266588 | 1.85356 | 1(Win) | true |
| jeaiii::to_text | 1420.41 | 1.17976 | 458.654ms | 566115 | 30 | 6.03237e+08 | 380093 | 0.80554 | 2.13853 | 2(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1202.87 | 2.16001 | 0.4779ms | 465 | 48 | 3045.21 | 368.75 | 1.49083 | 2.3828 | 1(Win) | true |
| jeaiii::to_text | 1097.46 | 1.94329 | 0.5274ms | 465 | 48 | 2960.99 | 404.167 | 1.42276 | 2.61478 | 2(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1403.84 | 0.524481 | 3.9999ms | 4665 | 48 | 13258 | 3168.75 | 0.276899 | 2.14101 | 1(Win) | true |
| jeaiii::to_text | 1236.62 | 0.5574 | 4.5286ms | 4664 | 30 | 12057.5 | 3596.67 | 0.0927644 | 2.44371 | 2(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1398.96 | 0.499434 | 39.1793ms | 46623 | 30 | 755920 | 31783.3 | 0.0314531 | 2.1697 | 1(Win) | true |
| jeaiii::to_text | 1235.52 | 0.39796 | 44.317ms | 46609 | 30 | 614954 | 35976.7 | 0.850893 | 2.45844 | 2(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1273 | 0.917472 | 414.579ms | 466077 | 30 | 3.07868e+08 | 349163 | 0.0105024 | 2.38656 | 1(Win) | true |
| jeaiii::to_text | 1203.88 | 0.586348 | 441.359ms | 466077 | 30 | 1.40598e+08 | 369210 | 0.517339 | 2.52359 | 2(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE DID NOT CONVERGE | 1647.93 | 3.15745 | 0.356ms | 484 | 30 | 2344.83 | 280 | 3.7037 | 1.63514 | -(Tie) | false |
| jeaiii::to_text STATISTICAL TIE | 1536.16 | 3.19642 | 0.4003ms | 483 | 30 | 2758.62 | 300 | 0 | 1.82928 | 1(Tie) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2130.93 | 0.759533 | 2.7634ms | 4837 | 48 | 12974.3 | 2164.58 | 0.707187 | 1.40571 | 1(Win) | true |
| jeaiii::to_text | 1774.21 | 0.950223 | 3.2385ms | 4831 | 30 | 18264.4 | 2596.67 | 0.516129 | 1.69792 | 2(Loss) | true |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1991.16 | 0.472247 | 28.0516ms | 48304 | 48 | 572974 | 23135.4 | 0.292702 | 1.52332 | 1(Win) | true |
| jeaiii::to_text | 1785.08 | 0.831489 | 31.4975ms | 48305 | 30 | 1.38133e+06 | 25806.7 | 1.28935 | 1.69984 | 2(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2073.37 | 0.679453 | 269.991ms | 483041 | 48 | 1.09389e+08 | 222181 | 0.573733 | 1.4651 | 1(Win) | true |
| jeaiii::to_text | 1787.97 | 0.803893 | 311.09ms | 483023 | 30 | 1.28687e+08 | 257637 | 0.0665869 | 1.69918 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) STATISTICAL TIE | 1300.38 | 1.17207 | 0.9361ms | 1000 | 48 | 3546.1 | 733.333 | 1.78571 | 2.28348 | 1(Tie) | true |
| jeaiii::to_text STATISTICAL TIE | 1253.33 | 1.35307 | 0.9607ms | 999 | 30 | 3172.41 | 760 | 0.884956 | 2.35052 | 1(Tie) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 1341.24 | 0.387931 | 8.7365ms | 9985 | 30 | 22758.6 | 7100 | 2.5729 | 2.25715 | -(Win) | false |
| jeaiii::to_text | 1295.43 | 0.266688 | 8.9662ms | 9975 | 30 | 11505.7 | 7343.33 | 1.47585 | 2.3345 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1312.08 | 0.830128 | 87.1555ms | 99838 | 30 | 1.08864e+07 | 72566.7 | 0.0550914 | 2.31378 | 1(Win) | true |
| jeaiii::to_text | 1280.66 | 0.497944 | 89.5109ms | 99838 | 30 | 4.11154e+06 | 74346.7 | 0.527336 | 2.37194 | 2(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1315.2 | 0.248911 | 872.44ms | 998327 | 30 | 9.74034e+07 | 723907 | 0.0413671 | 2.31026 | 1(Win) | true |
| jeaiii::to_text | 1278.24 | 0.415665 | 892.053ms | 998268 | 48 | 4.60044e+08 | 744794 | 0.346313 | 2.37678 | 2(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1926.65 | 1.48082 | 0.664ms | 1048 | 48 | 2832.45 | 518.75 | 0.240385 | 1.54481 | 1(Win) | true |
| jeaiii::to_text | 1776.8 | 1.46165 | 0.7207ms | 1048 | 48 | 3244.68 | 562.5 | 0.147929 | 1.66132 | 2(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2079.61 | 0.563681 | 5.8415ms | 10482 | 30 | 22023 | 4806.67 | 0.207612 | 1.4475 | 1(Win) | true |
| jeaiii::to_text | 1919.12 | 1.09412 | 6.3905ms | 10484 | 30 | 97482.8 | 5210 | 0.366534 | 1.57525 | 2(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2066.43 | 0.429468 | 58.6418ms | 104823 | 30 | 1.29495e+06 | 48376.7 | 0.0137826 | 1.46943 | 1(Win) | true |
| jeaiii::to_text | 1913.65 | 0.75139 | 62.6241ms | 104819 | 30 | 4.62171e+06 | 52236.7 | 1.12544 | 1.58642 | 2(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2028.57 | 0.420422 | 602.403ms | 1048242 | 30 | 1.28776e+08 | 492800 | 0.227431 | 1.49777 | 1(Win) | true |
| jeaiii::to_text | 1907.41 | 0.407498 | 632.107ms | 1048280 | 30 | 1.36848e+08 | 524123 | 0.587908 | 1.59292 | 2(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1807.34 | 2.34888 | 0.6568ms | 948 | 30 | 4137.93 | 500 | 0 | 1.66335 | 1(Win) | true |
| jeaiii::to_text | 1668.45 | 1.43691 | 0.6909ms | 948 | 48 | 2907.8 | 541.667 | 0.306748 | 1.74907 | 2(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1955.58 | 0.610746 | 5.6845ms | 9481 | 30 | 23919.5 | 4623.33 | 0.857756 | 1.54262 | 1(Win) | true |
| jeaiii::to_text | 1756.75 | 0.453712 | 6.2382ms | 9487 | 30 | 16379.3 | 5150 | 0.520494 | 1.72487 | 2(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1950.3 | 0.333859 | 56.5793ms | 94835 | 48 | 1.15053e+06 | 46372.9 | 0.0870799 | 1.55662 | 1(Win) | true |
| jeaiii::to_text | 1767.48 | 0.461434 | 62.2718ms | 94835 | 30 | 1.67252e+06 | 51170 | 0.46466 | 1.71812 | 2(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 1916.56 | 0.480429 | 565.941ms | 948260 | 30 | 1.54165e+08 | 471850 | 0.21078 | 1.58515 | 1(Win) | true |
| jeaiii::to_text | 1751.24 | 0.569183 | 619.63ms | 948260 | 30 | 2.59171e+08 | 516393 | 0.622879 | 1.73484 | 2(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2652.07 | 2.40615 | 0.4786ms | 973 | 48 | 3404.26 | 350 | 0.943396 | 1.10244 | 1(Win) | true |
| jeaiii::to_text | 2283.35 | 1.13903 | 0.5427ms | 974 | 30 | 643.678 | 406.667 | 0.813008 | 1.27244 | 2(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2783.3 | 0.653293 | 4.0938ms | 9741 | 48 | 22819.1 | 3337.5 | 1.75305 | 1.08166 | 1(Win) | true |
| jeaiii::to_text | 2477.73 | 0.864808 | 4.5903ms | 9743 | 30 | 31551.7 | 3750 | 0.177462 | 1.21159 | 2(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2728.73 | 0.597854 | 41.2764ms | 97398 | 30 | 1.24248e+06 | 34040 | 0.370732 | 1.11229 | 1(Win) | true |
| jeaiii::to_text | 2444.37 | 0.521148 | 45.5013ms | 97398 | 30 | 1.17655e+06 | 38000 | 1.08996 | 1.24194 | 2(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2722.92 | 0.531542 | 411.477ms | 974106 | 30 | 9.86594e+07 | 341170 | 0.632991 | 1.11552 | 1(Win) | true |
| jeaiii::to_text | 2435.31 | 0.27946 | 459.928ms | 974066 | 30 | 3.40902e+07 | 381447 | 0.175339 | 1.24749 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2432.79 | 2.05397 | 0.9288ms | 1939 | 30 | 7310.34 | 760 | 0.440529 | 1.21705 | 1(Win) | true |
| jeaiii::to_text | 2225.2 | 2.01356 | 1.0352ms | 1937 | 30 | 8379.31 | 830 | 0.809717 | 1.33765 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2606.66 | 0.373849 | 8.6683ms | 19378 | 48 | 33719 | 7089.58 | 0.182525 | 1.16336 | 1(Win) | true |
| jeaiii::to_text | 2342.16 | 0.361304 | 9.6674ms | 19377 | 30 | 24379.3 | 7890 | 0.126582 | 1.29237 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2497.91 | 0.350606 | 89.8146ms | 193799 | 30 | 2.01886e+06 | 73990 | 0.00788333 | 1.21577 | 1(Win) | true |
| jeaiii::to_text | 2315.37 | 0.407725 | 95.2394ms | 193799 | 30 | 3.17771e+06 | 79823.3 | 1.34102 | 1.31172 | 2(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2614.38 | 0.365516 | 851.07ms | 1937912 | 30 | 2.00294e+08 | 706913 | 0.04666 | 1.16204 | 1(Win) | true |
| jeaiii::to_text | 2328.6 | 0.442305 | 952.08ms | 1937958 | 30 | 3.69711e+08 | 793687 | 0.0276586 | 1.3048 | 2(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3818.03 | 3.54478 | 0.6249ms | 1988 | 30 | 9298.85 | 496.667 | 0.675676 | 0.762338 | 1(Win) | true |
| jeaiii::to_text | 3406.96 | 2.22667 | 0.7425ms | 1989 | 30 | 4609.2 | 556.667 | 0.298507 | 0.878612 | 2(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4142.07 | 0.849051 | 5.6645ms | 19878 | 30 | 45298.9 | 4576.67 | 0.127621 | 0.728265 | 1(Win) | true |
| jeaiii::to_text | 3484.12 | 0.843537 | 6.7222ms | 19874 | 30 | 63172.4 | 5440 | 1.27042 | 0.868232 | 2(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 4141.68 | 0.691406 | 55.3375ms | 198788 | 30 | 3.00478e+06 | 45773.3 | 3.65537 | 0.733171 | -(Win) | false |
| jeaiii::to_text | 3481.26 | 0.462237 | 66.1207ms | 198799 | 30 | 1.9011e+06 | 54460 | 0.0390042 | 0.87228 | 2(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4137.13 | 0.681198 | 555.902ms | 1987948 | 30 | 2.92334e+08 | 458253 | 0.148701 | 0.734257 | 1(Win) | true |
| jeaiii::to_text | 3422.83 | 0.54142 | 663.349ms | 1987979 | 48 | 4.31681e+08 | 553894 | 0.12963 | 0.887569 | 2(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) DID NOT CONVERGE | 3600.44 | 3.47228 | 0.6267ms | 1888 | 48 | 14468.1 | 500 | 2.73973 | 0.802402 | -(Win) | false |
| jeaiii::to_text | 3196.78 | 2.47898 | 0.7158ms | 1888 | 30 | 5850.57 | 563.333 | 0.588235 | 0.909391 | 2(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4013.61 | 0.611963 | 5.6279ms | 18877 | 48 | 36165.8 | 4485.42 | 0.324074 | 0.750451 | 1(Win) | true |
| jeaiii::to_text | 3320.35 | 0.88709 | 6.7328ms | 18882 | 30 | 69436.8 | 5423.33 | 1.43392 | 0.909519 | 2(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4003.6 | 0.492367 | 54.5632ms | 188801 | 30 | 1.47099e+06 | 44973.3 | 0.148456 | 0.758382 | 1(Win) | true |
| jeaiii::to_text | 3358.93 | 0.309471 | 65.6458ms | 188806 | 48 | 1.32102e+06 | 53606.2 | 2.01149 | 0.90403 | 2(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 4007.75 | 0.48138 | 542.504ms | 1887969 | 30 | 1.40309e+08 | 449257 | 0.144382 | 0.757882 | 1(Win) | true |
| jeaiii::to_text | 3315.51 | 0.494574 | 656.009ms | 1887960 | 30 | 2.16406e+08 | 543053 | 0.145262 | 0.916363 | 2(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2891.87 | 1.45284 | 0.8226ms | 1939 | 48 | 4144.5 | 639.583 | 1.09536 | 1.02146 | 1(Win) | true |
| jeaiii::to_text | 2411.18 | 2.28359 | 0.9721ms | 1938 | 30 | 9195.4 | 766.667 | 0.4329 | 1.24828 | 2(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3043.18 | 1.04879 | 7.5179ms | 19391 | 30 | 121851 | 6076.67 | 0.99723 | 0.993585 | 1(Win) | true |
| jeaiii::to_text | 2473.77 | 0.82793 | 9.1804ms | 19394 | 30 | 114954 | 7476.67 | 0.58296 | 1.22482 | 2(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 3006.66 | 0.324615 | 74.7334ms | 193983 | 48 | 1.91488e+06 | 61529.2 | 0.764744 | 1.01022 | 1(Win) | true |
| jeaiii::to_text | 2430.26 | 0.379467 | 93.3169ms | 193977 | 30 | 2.50303e+06 | 76120 | 0.439794 | 1.24977 | 2(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn (unchecked core) | 2901.37 | 0.366993 | 768.718ms | 1939781 | 48 | 2.62818e+08 | 637602 | 0.0479238 | 1.04706 | 1(Win) | true |
| jeaiii::to_text | 2415.04 | 0.378482 | 923.442ms | 1939775 | 30 | 2.52153e+08 | 765997 | 0.0966215 | 1.25805 | 2(Loss) | true |
