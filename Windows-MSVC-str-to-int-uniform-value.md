# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36257.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 5.000000% AND mean shift < 2.500000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 145.244 | 1.44304 | 79.9309ms | 10000 | 30 | 2.69328e+07 | 65660 | 20.9093 | 1(Win) |
| std::from_chars | 134.966 | 0.859159 | 85.4547ms | 10000 | 48 | 1.76905e+07 | 70660.4 | 22.5064 | 2(Loss) |
| strtoll/strtoull | 74.0191 | 0.80512 | 155.326ms | 10000 | 48 | 5.16506e+07 | 128842 | 41.0483 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 138.494 | 0.428206 | 820.187ms | 100000 | 30 | 2.60835e+08 | 688603 | 21.9402 | 1(Win) |
| std::from_chars | 128.332 | 0.499549 | 894.126ms | 100000 | 30 | 4.13439e+08 | 743133 | 23.6759 | 2(Loss) |
| strtoll/strtoull | 72.4708 | 0.503996 | 1566.72ms | 100000 | 30 | 1.31962e+09 | 1.31594e+06 | 41.9329 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 216.744 | 3.00407 | 0.5935ms | 100 | 30 | 5241.38 | 440 | 13.3267 | 1(Win) |
| std::from_chars | 190.735 | 2.71225 | 0.6462ms | 100 | 30 | 5517.24 | 500 | 15.1897 | 2(Loss) |
| strtoll/strtoull | 92.8904 | 1.03728 | 1.2765ms | 100 | 30 | 3402.3 | 1026.67 | 32.1593 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 243.471 | 1.51403 | 47.4871ms | 10000 | 30 | 1.05511e+07 | 39170 | 12.4654 | 1(Win) |
| std::from_chars | 224.976 | 1.25051 | 52.2956ms | 10000 | 30 | 8.4299e+06 | 42390 | 13.4946 | 2(Loss) |
| strtoll/strtoull | 99.2136 | 1.61107 | 116.301ms | 10000 | 30 | 7.1946e+07 | 96123.3 | 30.625 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 238.284 | 0.876322 | 479.116ms | 100000 | 30 | 3.69029e+08 | 400227 | 12.7488 | 1(Win) |
| std::from_chars | 214.558 | 0.475761 | 536.322ms | 100000 | 30 | 1.34156e+08 | 444483 | 14.1597 | 2(Loss) |
| strtoll/strtoull | 98.0296 | 0.379727 | 1160.29ms | 100000 | 30 | 4.09403e+08 | 972843 | 30.9983 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 225.277 | 2.92799 | 0.5366ms | 100 | 30 | 4609.2 | 423.333 | 12.5097 | 1(Win) |
| std::from_chars | 195.96 | 2.55646 | 0.6365ms | 100 | 30 | 4643.68 | 486.667 | 14.981 | 2(Loss) |
| strtoll/strtoull | 100.387 | 1.09996 | 1.2203ms | 100 | 30 | 3275.86 | 950 | 29.558 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 250.13 | 1.51878 | 45.9839ms | 10000 | 48 | 1.60952e+07 | 38127.1 | 12.1367 | 1(Win) |
| std::from_chars | 216.018 | 1.58627 | 53.6934ms | 10000 | 48 | 2.35404e+07 | 44147.9 | 14.0502 | 2(Loss) |
| strtoll/strtoull | 104.242 | 1.1226 | 111.264ms | 10000 | 30 | 3.1644e+07 | 91486.7 | 29.15 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 239.404 | 0.564544 | 475.042ms | 100000 | 30 | 1.51724e+08 | 398353 | 12.6896 | 1(Win) |
| std::from_chars | 212.766 | 0.460316 | 541.449ms | 100000 | 48 | 2.04338e+08 | 448227 | 14.2771 | 2(Loss) |
| strtoll/strtoull | 101.482 | 0.197258 | 1125.05ms | 100000 | 48 | 1.64943e+08 | 939748 | 29.9427 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.275 | 1.86735 | 0.6199ms | 100 | 48 | 3612.59 | 464.583 | 14.7815 | 1(Win) |
| std::from_chars | 190.735 | 1.66091 | 0.6666ms | 100 | 30 | 2068.97 | 500 | 15.1193 | 2(Loss) |
| strtoll/strtoull | 90.8261 | 0.995206 | 1.3445ms | 100 | 30 | 3275.86 | 1050 | 32.4737 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 196.905 | 0.574538 | 5.9816ms | 1000 | 30 | 23229.9 | 4843.33 | 15.3496 | 1(Win) |
| std::from_chars | 190.481 | 0.795099 | 6.111ms | 1000 | 30 | 47540.2 | 5006.67 | 15.841 | 2(Loss) |
| strtoll/strtoull | 94.6418 | 0.367591 | 12.4423ms | 1000 | 30 | 41160.9 | 10076.7 | 32.0649 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 196.221 | 1.39145 | 58.8613ms | 10000 | 48 | 2.19525e+07 | 48602.1 | 15.4754 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 190.837 | 1.25319 | 61.237ms | 10000 | 30 | 1.17662e+07 | 49973.3 | 15.9155 | 1(Tie) |
| strtoll/strtoull | 91.673 | 0.734279 | 126.531ms | 10000 | 30 | 1.75049e+07 | 104030 | 33.1382 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 194.901 | 0.446484 | 591.277ms | 100000 | 30 | 1.43188e+08 | 489313 | 15.5882 | 1(Win) |
| std::from_chars | 186.532 | 0.49602 | 611.585ms | 100000 | 48 | 3.08699e+08 | 511267 | 16.2878 | 2(Loss) |
| strtoll/strtoull | 91.9928 | 0.289829 | 1249.57ms | 100000 | 30 | 2.7083e+08 | 1.03668e+06 | 33.0335 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 216.744 | 1.48214 | 1.1628ms | 200 | 30 | 5103.45 | 880 | 13.9153 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 215.926 | 1.31989 | 1.1431ms | 200 | 48 | 6524.82 | 883.333 | 13.619 | 1(Tie) |
| strtoll/strtoull | 127.157 | 0.904085 | 1.9295ms | 200 | 30 | 5517.24 | 1500 | 23.467 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.757 | 1.06187 | 98.975ms | 20000 | 48 | 3.69774e+07 | 82656.2 | 13.1636 | 1(Win) |
| std::from_chars | 204.198 | 1.13066 | 111.918ms | 20000 | 30 | 3.34613e+07 | 93406.7 | 14.8784 | 2(Loss) |
| strtoll/strtoull | 126.407 | 0.901805 | 181.418ms | 20000 | 30 | 5.55478e+07 | 150890 | 24.0357 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.165 | 0.3734 | 1000.79ms | 200000 | 48 | 4.5959e+08 | 828688 | 13.199 | 1(Win) |
| std::from_chars | 203.198 | 0.328374 | 1130.05ms | 200000 | 30 | 2.85024e+08 | 938667 | 14.9532 | 2(Loss) |
| strtoll/strtoull | 125.603 | 0.323286 | 1809.84ms | 200000 | 48 | 1.15685e+09 | 1.51856e+06 | 24.1935 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 323.279 | 2.04781 | 0.7786ms | 200 | 30 | 4379.31 | 590 | 9.10333 | 1(Win) |
| std::from_chars | 298.217 | 1.78727 | 0.8293ms | 200 | 48 | 6272.16 | 639.583 | 10.0469 | 2(Loss) |
| strtoll/strtoull | 155.967 | 1.03981 | 1.5276ms | 200 | 48 | 7761.52 | 1222.92 | 19.207 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 349.972 | 0.463437 | 6.8001ms | 2000 | 30 | 19137.9 | 5450 | 8.64065 | 1(Win) |
| std::from_chars | 309.635 | 0.945623 | 7.4848ms | 2000 | 30 | 101793 | 6160 | 9.78503 | 2(Loss) |
| strtoll/strtoull | 162.928 | 0.311736 | 14.2195ms | 2000 | 30 | 39954 | 11706.7 | 18.6004 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 342.548 | 1.17406 | 66.5256ms | 20000 | 48 | 2.05135e+07 | 55681.2 | 8.8631 | 1(Win) |
| std::from_chars | 319.739 | 1.28489 | 72.5431ms | 20000 | 30 | 1.76246e+07 | 59653.3 | 9.49651 | 2(Loss) |
| strtoll/strtoull | 159.26 | 0.90515 | 144.323ms | 20000 | 30 | 3.52541e+07 | 119763 | 19.0764 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 347.273 | 0.38352 | 661.97ms | 200000 | 48 | 2.12978e+08 | 549235 | 8.7478 | 1(Win) |
| std::from_chars | 313.569 | 0.386352 | 733.838ms | 200000 | 30 | 1.65684e+08 | 608270 | 9.68865 | 2(Loss) |
| strtoll/strtoull | 160.701 | 0.336121 | 1423.27ms | 200000 | 30 | 4.77459e+08 | 1.18689e+06 | 18.9087 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.467 | 2.19442 | 0.7818ms | 200 | 48 | 8612.59 | 610.417 | 9.34385 | 1(Win) |
| std::from_chars | 294.951 | 1.77533 | 0.873ms | 200 | 30 | 3954.02 | 646.667 | 9.99433 | 2(Loss) |
| strtoll/strtoull | 164.427 | 0.886495 | 1.4859ms | 200 | 30 | 3172.41 | 1160 | 18.2183 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 340.117 | 2.48295 | 65.9065ms | 20000 | 48 | 9.30634e+07 | 56079.2 | 8.92921 | 1(Win) |
| std::from_chars | 313.829 | 0.987053 | 73.3483ms | 20000 | 30 | 1.07963e+07 | 60776.7 | 9.67705 | 2(Loss) |
| strtoll/strtoull | 165.42 | 1.06279 | 139.434ms | 20000 | 30 | 4.50507e+07 | 115303 | 18.3666 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 347.604 | 0.45411 | 650.68ms | 200000 | 30 | 1.86266e+08 | 548713 | 8.74 | 1(Win) |
| std::from_chars | 308.819 | 0.631362 | 740.178ms | 200000 | 30 | 4.56173e+08 | 617627 | 9.83827 | 2(Loss) |
| strtoll/strtoull | 164.609 | 0.264217 | 1392.35ms | 200000 | 30 | 2.81186e+08 | 1.15871e+06 | 18.4597 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 427.018 | 2.7854 | 0.6004ms | 200 | 30 | 4643.68 | 446.667 | 6.768 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 408.718 | 3.45882 | 0.5918ms | 200 | 30 | 7816.09 | 466.667 | 7.19367 | 1(Tie) |
| strtoll/strtoull | 177.428 | 1.22308 | 1.3673ms | 200 | 48 | 8297.87 | 1075 | 16.7213 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 481.147 | 0.968672 | 48.656ms | 20000 | 48 | 7.0778e+06 | 39641.7 | 6.31188 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 477.733 | 1.19484 | 48.1228ms | 20000 | 48 | 1.09232e+07 | 39925 | 6.35468 | 1(Tie) |
| strtoll/strtoull | 185.634 | 0.861449 | 123.333ms | 20000 | 48 | 3.76051e+07 | 102748 | 16.3629 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 472.33 | 0.528787 | 483.97ms | 200000 | 30 | 1.36789e+08 | 403817 | 6.43122 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 469.44 | 0.703854 | 483.741ms | 200000 | 30 | 2.45351e+08 | 406303 | 6.47097 | 1(Tie) |
| strtoll/strtoull | 184.768 | 0.216831 | 1241.48ms | 200000 | 48 | 2.40486e+08 | 1.03229e+06 | 16.4448 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 357.628 | 1.97642 | 1.3556ms | 400 | 30 | 13333.3 | 1066.67 | 8.50692 | 1(Win) |
| std::from_chars | 306.812 | 0.834536 | 1.5667ms | 400 | 30 | 3229.89 | 1243.33 | 9.69342 | 2(Loss) |
| strtoll/strtoull | 175.523 | 0.580898 | 2.6289ms | 400 | 30 | 4781.61 | 2173.33 | 17.2018 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 372.493 | 1.05986 | 124.293ms | 40000 | 30 | 3.5343e+07 | 102410 | 8.15501 | 1(Win) |
| std::from_chars | 303.245 | 1.13047 | 150.219ms | 40000 | 48 | 9.70715e+07 | 125796 | 10.0167 | 2(Loss) |
| strtoll/strtoull | 176.544 | 0.945228 | 252.67ms | 40000 | 30 | 1.25144e+08 | 216077 | 17.2106 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 368.735 | 0.37378 | 1238.6ms | 400000 | 30 | 4.48584e+08 | 1.03454e+06 | 8.24022 | 1(Win) |
| std::from_chars | 301.095 | 0.25698 | 1516.56ms | 400000 | 30 | 3.18002e+08 | 1.26694e+06 | 10.0916 | 2(Loss) |
| strtoll/strtoull | 180.454 | 0.370206 | 2529.49ms | 400000 | 30 | 1.83737e+09 | 2.11395e+06 | 16.8402 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 528.901 | 0.464536 | 9.0296ms | 4000 | 48 | 53883 | 7212.5 | 5.72915 | 1(Win) |
| std::from_chars | 439.988 | 0.491996 | 11.1381ms | 4000 | 30 | 54586.2 | 8670 | 6.8961 | 2(Loss) |
| strtoll/strtoull | 216.539 | 1.79157 | 20.7419ms | 4000 | 48 | 4.78142e+06 | 17616.7 | 14.0171 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 511.765 | 1.46739 | 89.8373ms | 40000 | 30 | 3.58914e+07 | 74540 | 5.93514 | 1(Win) |
| std::from_chars | 415.328 | 1.04049 | 109.776ms | 40000 | 48 | 4.38383e+07 | 91847.9 | 7.31386 | 2(Loss) |
| strtoll/strtoull | 221.589 | 0.755794 | 206.937ms | 40000 | 48 | 8.12591e+07 | 172152 | 13.7099 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 509.573 | 0.461921 | 890.782ms | 400000 | 30 | 3.58728e+08 | 748607 | 5.9614 | 1(Win) |
| std::from_chars | 416.256 | 0.421587 | 1103.87ms | 400000 | 30 | 4.4781e+08 | 916430 | 7.29914 | 2(Loss) |
| strtoll/strtoull | 222.786 | 0.225805 | 2063.63ms | 400000 | 48 | 7.17551e+08 | 1.71227e+06 | 13.6394 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 486.983 | 2.60284 | 1.0256ms | 400 | 30 | 12471.3 | 783.333 | 6.04775 | 1(Win) |
| std::from_chars | 417.097 | 1.72235 | 1.1722ms | 400 | 48 | 11910.5 | 914.583 | 7.06589 | 2(Loss) |
| strtoll/strtoull | 222.215 | 0.970874 | 2.2041ms | 400 | 30 | 8333.33 | 1716.67 | 13.4537 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 525.667 | 1.40113 | 87.5916ms | 40000 | 48 | 4.96243e+07 | 72568.8 | 5.7774 | 1(Win) |
| std::from_chars | 423.432 | 1.16393 | 108.339ms | 40000 | 30 | 3.29858e+07 | 90090 | 7.17358 | 2(Loss) |
| strtoll/strtoull | 222.086 | 0.935038 | 203.895ms | 40000 | 48 | 1.23816e+08 | 171767 | 13.6788 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 528.923 | 0.445474 | 864.13ms | 400000 | 30 | 3.09671e+08 | 721220 | 5.74376 | 1(Win) |
| std::from_chars | 417.145 | 0.301513 | 1100.31ms | 400000 | 48 | 3.64922e+08 | 914477 | 7.2836 | 2(Loss) |
| strtoll/strtoull | 225.018 | 0.205161 | 2036.01ms | 400000 | 48 | 5.8065e+08 | 1.69528e+06 | 13.5048 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 724.768 | 0.494633 | 6.5899ms | 4000 | 30 | 20333.3 | 5263.33 | 4.16651 | 1(Win) |
| std::from_chars | 649.541 | 0.438295 | 7.3936ms | 4000 | 48 | 31804.1 | 5872.92 | 4.65709 | 2(Loss) |
| strtoll/strtoull | 255.334 | 0.601768 | 18.3925ms | 4000 | 30 | 242483 | 14940 | 11.8776 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 726.332 | 1.2712 | 65.0069ms | 40000 | 30 | 1.3372e+07 | 52520 | 4.18002 | 1(Win) |
| std::from_chars | 617.498 | 2.22451 | 73.7338ms | 40000 | 30 | 5.6655e+07 | 61776.7 | 4.91812 | 2(Loss) |
| strtoll/strtoull | 250.117 | 1.08256 | 183.032ms | 40000 | 30 | 8.17821e+07 | 152517 | 12.1463 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 736.087 | 0.50513 | 628.671ms | 400000 | 30 | 2.05584e+08 | 518240 | 4.12687 | 1(Win) |
| std::from_chars | 619.69 | 0.878756 | 743.803ms | 400000 | 48 | 1.40459e+09 | 615581 | 4.90256 | 2(Loss) |
| strtoll/strtoull | 251.284 | 0.195725 | 1819.13ms | 400000 | 30 | 2.64851e+08 | 1.51808e+06 | 12.0933 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 845.831 | 0.369804 | 11.2072ms | 8000 | 30 | 33379.3 | 9020 | 3.58188 | 1(Win) |
| std::from_chars | 559.887 | 0.314579 | 16.8323ms | 8000 | 30 | 55126.4 | 13626.7 | 5.41817 | 2(Loss) |
| strtoll/strtoull | 294.306 | 0.755982 | 31.9123ms | 8000 | 30 | 1.1522e+06 | 25923.3 | 10.3174 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 829.057 | 0.953012 | 110.053ms | 80000 | 48 | 3.69189e+07 | 92025 | 3.66364 | 1(Win) |
| std::from_chars | 523.853 | 1.37177 | 174.638ms | 80000 | 30 | 1.19742e+08 | 145640 | 5.79916 | 2(Loss) |
| strtoll/strtoull | 291.967 | 1.03078 | 310.88ms | 80000 | 30 | 2.17655e+08 | 261310 | 10.4074 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 863.431 | 0.403756 | 1065.75ms | 800000 | 30 | 3.81842e+08 | 883613 | 3.51868 | 1(Win) |
| std::from_chars | 516.105 | 0.254031 | 1759.44ms | 800000 | 48 | 6.76893e+08 | 1.47826e+06 | 5.88767 | 2(Loss) |
| strtoll/strtoull | 299.272 | 0.355888 | 3081.26ms | 800000 | 30 | 2.46942e+09 | 2.54932e+06 | 10.154 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1116.5 | 1.96479 | 0.8731ms | 800 | 48 | 8652.48 | 683.333 | 2.70422 | 1(Win) |
| std::from_chars | 710.813 | 1.0881 | 1.3527ms | 800 | 30 | 4091.95 | 1073.33 | 4.26475 | 2(Loss) |
| strtoll/strtoull | 351.046 | 0.437532 | 2.7887ms | 800 | 30 | 2712.64 | 2173.33 | 8.633 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1201.87 | 0.444949 | 7.7819ms | 8000 | 48 | 38293.4 | 6347.92 | 2.51939 | 1(Win) |
| std::from_chars | 764.979 | 0.435156 | 12.8343ms | 8000 | 30 | 56505.7 | 9973.33 | 3.96019 | 2(Loss) |
| strtoll/strtoull | 350.14 | 1.38473 | 26.6195ms | 8000 | 48 | 4.36989e+06 | 21789.6 | 8.66827 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1187.22 | 1.03122 | 78.4768ms | 80000 | 48 | 2.10794e+07 | 64262.5 | 2.55802 | 1(Win) |
| std::from_chars | 700.459 | 1.08135 | 130.607ms | 80000 | 30 | 4.16168e+07 | 108920 | 4.33697 | 2(Loss) |
| strtoll/strtoull | 346.491 | 0.680681 | 267.1ms | 80000 | 30 | 6.73913e+07 | 220190 | 8.76834 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1164.58 | 0.328166 | 788.509ms | 800000 | 48 | 2.21857e+08 | 655121 | 2.60855 | 1(Win) |
| std::from_chars | 721.922 | 0.335693 | 1270.53ms | 800000 | 30 | 3.77576e+08 | 1.05682e+06 | 4.20854 | 2(Loss) |
| strtoll/strtoull | 344.69 | 0.260118 | 2660.02ms | 800000 | 30 | 9.94455e+08 | 2.21341e+06 | 8.81193 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1161.84 | 2.15156 | 0.8661ms | 800 | 30 | 5988.51 | 656.667 | 2.55929 | 1(Win) |
| std::from_chars | 706.425 | 1.28668 | 1.3486ms | 800 | 30 | 5793.1 | 1080 | 4.23904 | 2(Loss) |
| strtoll/strtoull | 348.905 | 0.684075 | 2.8393ms | 800 | 30 | 6712.64 | 2186.67 | 8.65279 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1208.33 | 1.13162 | 75.9558ms | 80000 | 30 | 1.53156e+07 | 63140 | 2.51284 | 1(Win) |
| std::from_chars | 714.683 | 1.13528 | 128.949ms | 80000 | 48 | 7.05013e+07 | 106752 | 4.25037 | 2(Loss) |
| strtoll/strtoull | 348.205 | 0.793402 | 264.038ms | 80000 | 30 | 9.06606e+07 | 219107 | 8.72661 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1232.99 | 0.492558 | 745.165ms | 800000 | 30 | 2.78676e+08 | 618773 | 2.46372 | 1(Win) |
| std::from_chars | 647.871 | 0.281414 | 1413.51ms | 800000 | 48 | 5.27151e+08 | 1.17761e+06 | 4.68971 | 2(Loss) |
| strtoll/strtoull | 345.529 | 0.212591 | 2639.4ms | 800000 | 30 | 6.61032e+08 | 2.20803e+06 | 8.79437 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 800.286 | 1.72275 | 1.2541ms | 800 | 30 | 8091.95 | 953.333 | 3.75787 | 1(Win) |
| std::from_chars | 475.846 | 0.818049 | 1.9877ms | 800 | 30 | 5160.92 | 1603.33 | 6.30696 | 2(Loss) |
| strtoll/strtoull | 262.781 | 0.420492 | 3.636ms | 800 | 30 | 4471.26 | 2903.33 | 11.4818 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 823.02 | 0.339755 | 11.4369ms | 8000 | 30 | 29758.6 | 9270 | 3.68386 | 1(Win) |
| std::from_chars | 659.483 | 0.196271 | 14.1888ms | 8000 | 48 | 24747.3 | 11568.8 | 4.59315 | 2(Loss) |
| strtoll/strtoull | 261.639 | 1.8975 | 35.5378ms | 8000 | 30 | 9.18455e+06 | 29160 | 11.6011 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 830.166 | 1.08665 | 111.071ms | 80000 | 48 | 4.78708e+07 | 91902.1 | 3.65939 | 1(Win) |
| std::from_chars | 635.717 | 1.12854 | 143.89ms | 80000 | 48 | 8.80492e+07 | 120012 | 4.77868 | 2(Loss) |
| strtoll/strtoull | 260.786 | 0.636018 | 353.956ms | 80000 | 30 | 1.03865e+08 | 292553 | 11.6511 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 823.299 | 0.279211 | 1121.92ms | 800000 | 48 | 3.21345e+08 | 926685 | 3.6903 | 1(Win) |
| std::from_chars | 595.983 | 0.782298 | 1557.79ms | 800000 | 48 | 4.81391e+09 | 1.28014e+06 | 5.09796 | 2(Loss) |
| strtoll/strtoull | 260.433 | 0.208438 | 3517.1ms | 800000 | 30 | 1.11857e+09 | 2.9295e+06 | 11.6675 | 3(Loss) |
