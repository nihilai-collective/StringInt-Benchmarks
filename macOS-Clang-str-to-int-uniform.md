# str-to-int-uniform  
----

Performance profiling of libraries (Compiled and run on macOS 25.5.0 using the Clang 22.1.8 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 109.991 | 0.746056 | 0.169541ms | 100 | 120 | 5021.26 | 867.05 | 1(Win) |
| vn::from_chars | 101.762 | 0.617846 | 0.188ms | 100 | 120 | 4023.16 | 937.158 | 2(Loss) |
| strtoll/strtoull | 54.8112 | 0.857719 | 0.319167ms | 100 | 120 | 26725.9 | 1739.92 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 106.68 | 0.971263 | 1.60987ms | 1000 | 120 | 904664 | 8939.56 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 102.954 | 1.59916 | 1.66138ms | 1000 | 120 | 2.63315e+06 | 9263.11 | 1(Tie) |
| strtoll/strtoull | 62.3187 | 0.701797 | 2.75212ms | 1000 | 120 | 1.3841e+06 | 15303.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 108.381 | 0.62944 | 16.1009ms | 10000 | 120 | 3.68117e+07 | 87993.1 | 1(Win) |
| vn::from_chars | 103.251 | 0.56569 | 16.5649ms | 10000 | 120 | 3.27606e+07 | 92364.9 | 2(Loss) |
| strtoll/strtoull | 63.8646 | 0.653548 | 26.5665ms | 10000 | 120 | 1.14292e+08 | 149327 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 110.305 | 0.388294 | 158.2ms | 100000 | 120 | 1.35241e+09 | 864577 | 1(Win) |
| vn::from_chars | 106.015 | 0.296614 | 163.209ms | 100000 | 120 | 8.54343e+08 | 899567 | 2(Loss) |
| strtoll/strtoull | 65.7866 | 0.446917 | 258.815ms | 100000 | 120 | 5.03688e+09 | 1.44965e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 143.651 | 1.36563 | 0.134959ms | 100 | 120 | 9863.5 | 663.883 | 1(Win) |
| std::from_chars | 112.842 | 0.655103 | 0.16475ms | 100 | 120 | 3678.41 | 845.142 | 2(Loss) |
| strtoll/strtoull | 77.6591 | 2.10526 | 1.21738ms | 100 | 480 | 320826 | 1228.03 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.183 | 1.01143 | 1.11667ms | 1000 | 120 | 463627 | 6145.49 | 1(Win) |
| std::from_chars | 111.374 | 0.835167 | 1.55346ms | 1000 | 120 | 613711 | 8562.84 | 2(Loss) |
| strtoll/strtoull | 84.7658 | 0.551922 | 2.04787ms | 1000 | 120 | 462696 | 11250.7 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 159.801 | 0.611845 | 10.795ms | 10000 | 120 | 1.59994e+07 | 59678.8 | 1(Win) |
| std::from_chars | 104.963 | 1.27347 | 16.3912ms | 10000 | 120 | 1.60653e+08 | 90858.3 | 2(Loss) |
| strtoll/strtoull | 90.602 | 0.628075 | 19.0405ms | 10000 | 120 | 5.2448e+07 | 105260 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 162.001 | 0.288302 | 106.26ms | 100000 | 120 | 3.45655e+08 | 588685 | 1(Win) |
| std::from_chars | 111.981 | 0.327972 | 153.721ms | 100000 | 120 | 9.36203e+08 | 851642 | 2(Loss) |
| strtoll/strtoull | 89.6634 | 0.987732 | 191.133ms | 100000 | 120 | 1.32443e+10 | 1.06362e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.403 | 0.724369 | 0.112084ms | 100 | 120 | 1926.69 | 553.167 | 1(Win) |
| std::from_chars | 112.162 | 0.527241 | 0.167458ms | 100 | 120 | 2411.63 | 850.267 | 2(Loss) |
| strtoll/strtoull | 82.2836 | 0.324002 | 0.224291ms | 100 | 120 | 1692.19 | 1159.01 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.512 | 0.486532 | 1.03104ms | 1000 | 120 | 86809 | 5528.16 | 1(Win) |
| std::from_chars | 122.934 | 0.2676 | 1.40754ms | 1000 | 120 | 51714 | 7757.59 | 2(Loss) |
| strtoll/strtoull | 93.0511 | 0.151185 | 1.85821ms | 1000 | 120 | 28810.7 | 10248.9 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 173.058 | 0.467061 | 10.0158ms | 10000 | 120 | 7.94963e+06 | 55107.3 | 1(Win) |
| std::from_chars | 112.286 | 0.663036 | 15.3168ms | 10000 | 120 | 3.80543e+07 | 84932.6 | 2(Loss) |
| strtoll/strtoull | 89.9642 | 0.489568 | 19.1879ms | 10000 | 120 | 3.23197e+07 | 106006 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 188.031 | 0.13099 | 91.2952ms | 100000 | 120 | 5.29663e+07 | 507189 | 1(Win) |
| std::from_chars | 111.626 | 0.499957 | 152.029ms | 100000 | 120 | 2.18937e+09 | 854350 | 2(Loss) |
| strtoll/strtoull | 93.4163 | 0.199234 | 183.31ms | 100000 | 120 | 4.96434e+08 | 1.02089e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 120.468 | 1.00818 | 0.154292ms | 100 | 120 | 7643.9 | 791.642 | 1(Win) |
| std::from_chars | 106.67 | 0.99105 | 0.182209ms | 100 | 120 | 9420.8 | 894.042 | 2(Loss) |
| strtoll/strtoull | 79.8605 | 2.26671 | 0.236833ms | 100 | 120 | 87924.6 | 1194.17 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 139.869 | 0.557465 | 1.26479ms | 1000 | 120 | 173371 | 6818.36 | 1(Win) |
| std::from_chars | 100.651 | 0.776722 | 1.7335ms | 1000 | 120 | 649945 | 9475.07 | 2(Loss) |
| strtoll/strtoull | 86.1996 | 0.447311 | 1.99713ms | 1000 | 120 | 293894 | 11063.6 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 131.409 | 0.577768 | 13.1293ms | 10000 | 120 | 2.1098e+07 | 72573.2 | 1(Win) |
| std::from_chars | 103.233 | 0.519276 | 16.5882ms | 10000 | 120 | 2.76148e+07 | 92380.9 | 2(Loss) |
| strtoll/strtoull | 73.4908 | 1.16724 | 23.1347ms | 10000 | 120 | 2.75317e+08 | 129768 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 135.793 | 0.326252 | 126.324ms | 100000 | 120 | 6.29986e+08 | 702299 | 1(Win) |
| std::from_chars | 99.5116 | 0.222024 | 173.98ms | 100000 | 120 | 5.43293e+08 | 958355 | 2(Loss) |
| strtoll/strtoull | 80.3184 | 0.164358 | 213.811ms | 100000 | 120 | 4.57018e+08 | 1.18737e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 148.1 | 0.358965 | 0.244625ms | 200 | 120 | 2564.68 | 1287.88 | 1(Win) |
| std::from_chars | 118.911 | 1.76133 | 1.53862ms | 200 | 480 | 383122 | 1604.01 | 2(Loss) |
| strtoll/strtoull | 108.005 | 0.26362 | 0.343166ms | 200 | 120 | 2600.82 | 1765.98 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 153.142 | 0.615629 | 2.25404ms | 2000 | 120 | 705490 | 12454.8 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 151.061 | 0.587048 | 2.30117ms | 2000 | 120 | 659306 | 12626.4 | 1(Tie) |
| strtoll/strtoull | 120.292 | 0.33438 | 2.91446ms | 2000 | 120 | 337322 | 15855.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 156.215 | 0.21419 | 22.0805ms | 20000 | 120 | 8.2072e+06 | 122098 | 1(Win) |
| std::from_chars | 149.111 | 0.175628 | 23.092ms | 20000 | 120 | 6.05634e+06 | 127915 | 2(Loss) |
| strtoll/strtoull | 119.691 | 0.245895 | 28.7665ms | 20000 | 120 | 1.84255e+07 | 159357 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 145.703 | 0.334374 | 236.033ms | 200000 | 120 | 2.29915e+09 | 1.30906e+06 | 1(Win) |
| strtoll/strtoull | 107.522 | 0.40327 | 318.03ms | 200000 | 120 | 6.14096e+09 | 1.77391e+06 | 2(Loss) |
| std::from_chars | 95.6923 | 1.93329 | 358.47ms | 200000 | 120 | 1.78189e+11 | 1.99321e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 185.517 | 0.491366 | 0.198334ms | 200 | 120 | 3062.55 | 1028.12 | 1(Win) |
| std::from_chars STATISTICAL TIE | 132.049 | 1.33524 | 1.47992ms | 200 | 480 | 178547 | 1444.43 | 2(Tie) |
| strtoll/strtoull STATISTICAL TIE | 130.079 | 0.245783 | 0.278125ms | 200 | 120 | 1558.58 | 1466.3 | 2(Tie) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 179.309 | 1.37854 | 1.90592ms | 2000 | 120 | 2.58034e+06 | 10637.2 | 1(Win) |
| std::from_chars | 139.233 | 0.876649 | 2.43917ms | 2000 | 120 | 1.73064e+06 | 13699 | 2(Loss) |
| strtoll/strtoull | 134.426 | 0.592221 | 2.60992ms | 2000 | 120 | 847315 | 14188.9 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 185.143 | 0.568978 | 18.58ms | 20000 | 120 | 4.12302e+07 | 103020 | 1(Win) |
| std::from_chars | 138.503 | 0.406787 | 24.6731ms | 20000 | 120 | 3.76583e+07 | 137712 | 2(Loss) |
| strtoll/strtoull | 132.743 | 1.50227 | 25.6336ms | 20000 | 120 | 5.5913e+08 | 143687 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 186.893 | 0.227904 | 183.933ms | 200000 | 120 | 6.49172e+08 | 1.02056e+06 | 1(Win) |
| std::from_chars | 138.464 | 0.336702 | 247.535ms | 200000 | 120 | 2.58143e+09 | 1.37751e+06 | 2(Loss) |
| strtoll/strtoull | 135.27 | 0.399938 | 253.268ms | 200000 | 120 | 3.81615e+09 | 1.41004e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.949 | 1.12884 | 0.1915ms | 200 | 120 | 14942.4 | 988.525 | 1(Win) |
| std::from_chars | 136.046 | 0.636868 | 0.265084ms | 200 | 120 | 9566.79 | 1401.98 | 2(Loss) |
| strtoll/strtoull | 116.185 | 1.22703 | 0.302417ms | 200 | 120 | 48691.4 | 1641.65 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.667 | 0.141403 | 1.65567ms | 2000 | 120 | 19482.7 | 9011.08 | 1(Win) |
| std::from_chars | 152.507 | 0.672951 | 2.24121ms | 2000 | 120 | 850016 | 12506.6 | 2(Loss) |
| strtoll/strtoull | 145.665 | 0.288377 | 2.44058ms | 2000 | 120 | 171101 | 13094.1 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 182.559 | 0.782811 | 18.9522ms | 20000 | 120 | 8.02692e+07 | 104479 | 1(Win) |
| std::from_chars | 134.553 | 0.627651 | 25.3057ms | 20000 | 120 | 9.49933e+07 | 141755 | 2(Loss) |
| strtoll/strtoull | 131.954 | 0.4899 | 25.9979ms | 20000 | 120 | 6.01745e+07 | 144547 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 194.822 | 0.412347 | 171.108ms | 200000 | 120 | 1.95565e+09 | 979022 | 1(Win) |
| std::from_chars | 152.382 | 0.595084 | 223.508ms | 200000 | 120 | 6.65779e+09 | 1.25169e+06 | 2(Loss) |
| strtoll/strtoull | 128.217 | 1.51675 | 293.55ms | 200000 | 120 | 6.10909e+10 | 1.48759e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 179.214 | 0.572878 | 0.204ms | 200 | 120 | 4460.88 | 1064.28 | 1(Win) |
| std::from_chars | 170.602 | 0.750424 | 0.212958ms | 200 | 120 | 8446.65 | 1118.01 | 2(Loss) |
| strtoll/strtoull | 114.295 | 0.758318 | 0.726292ms | 200 | 240 | 38434.2 | 1668.79 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.644 | 0.434736 | 1.69017ms | 2000 | 120 | 195102 | 9275 | 1(Win) |
| std::from_chars | 166.269 | 0.819451 | 2.08363ms | 2000 | 120 | 1.06039e+06 | 11471.5 | 2(Loss) |
| strtoll/strtoull | 149.96 | 0.0675521 | 2.30379ms | 2000 | 120 | 8858.69 | 12719.1 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 209.125 | 0.192496 | 16.5079ms | 20000 | 120 | 3.69889e+06 | 91206.2 | 1(Win) |
| std::from_chars STATISTICAL TIE | 152.175 | 0.714025 | 22.4298ms | 20000 | 120 | 9.61131e+07 | 125339 | 2(Tie) |
| strtoll/strtoull STATISTICAL TIE | 150.419 | 0.219992 | 22.8491ms | 20000 | 120 | 9.33789e+06 | 126802 | 2(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 208.515 | 0.0972944 | 164.725ms | 200000 | 120 | 9.50481e+07 | 914731 | 1(Win) |
| std::from_chars | 156.609 | 0.262185 | 217.841ms | 200000 | 120 | 1.22355e+09 | 1.2179e+06 | 2(Loss) |
| strtoll/strtoull | 150.405 | 0.0927535 | 228.131ms | 200000 | 120 | 1.66027e+08 | 1.26814e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.722 | 0.255265 | 0.301083ms | 400 | 120 | 1996.64 | 1597.97 | 1(Win) |
| std::from_chars | 229.701 | 1.78886 | 0.31ms | 400 | 120 | 105908 | 1660.72 | 2(Loss) |
| strtoll/strtoull | 188.903 | 0.219784 | 0.389333ms | 400 | 120 | 2363.84 | 2019.4 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 240.306 | 0.856316 | 2.90175ms | 4000 | 120 | 2.21739e+06 | 15874.3 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 239.511 | 0.777475 | 2.87513ms | 4000 | 120 | 1.84003e+06 | 15927 | 1(Tie) |
| strtoll/strtoull | 187.653 | 0.723797 | 3.73475ms | 4000 | 120 | 2.59791e+06 | 20328.5 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 260.74 | 0.201156 | 26.4415ms | 40000 | 120 | 1.03933e+07 | 146303 | 1(Win) |
| vn::from_chars | 247.071 | 0.309191 | 27.7794ms | 40000 | 120 | 2.73471e+07 | 154396 | 2(Loss) |
| strtoll/strtoull | 204.375 | 0.707846 | 33.4071ms | 40000 | 120 | 2.0947e+08 | 186651 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.853 | 0.418306 | 306.339ms | 400000 | 120 | 6.15248e+09 | 1.71175e+06 | 1(Win) |
| strtoll/strtoull | 204.232 | 0.355673 | 334.489ms | 400000 | 120 | 5.29609e+09 | 1.86782e+06 | 2(Loss) |
| std::from_chars | 179.416 | 0.843258 | 387.946ms | 400000 | 120 | 3.85746e+10 | 2.12618e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 282.79 | 0.321475 | 0.255584ms | 400 | 120 | 2256.67 | 1348.95 | 1(Win) |
| std::from_chars | 252.915 | 0.282534 | 0.284583ms | 400 | 120 | 2179.18 | 1508.29 | 2(Loss) |
| strtoll/strtoull | 232.312 | 0.22761 | 0.311125ms | 400 | 120 | 1676.26 | 1642.06 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 285.234 | 0.851862 | 2.41554ms | 4000 | 120 | 1.55754e+06 | 13373.9 | 1(Win) |
| std::from_chars | 262.153 | 0.0790448 | 2.63867ms | 4000 | 120 | 15875.8 | 14551.4 | 2(Loss) |
| strtoll/strtoull | 241.713 | 0.54059 | 2.8575ms | 4000 | 120 | 873451 | 15781.9 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 274.375 | 0.313597 | 25.3171ms | 40000 | 120 | 2.28116e+07 | 139032 | 1(Win) |
| std::from_chars | 262.794 | 0.138735 | 26.242ms | 40000 | 120 | 4.86682e+06 | 145159 | 2(Loss) |
| strtoll/strtoull | 247.718 | 0.184851 | 27.7606ms | 40000 | 120 | 9.72364e+06 | 153993 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 297.878 | 0.0757817 | 230.772ms | 400000 | 120 | 1.13019e+08 | 1.28062e+06 | 1(Win) |
| strtoll/strtoull | 247.657 | 0.0922382 | 277.355ms | 400000 | 120 | 2.42226e+08 | 1.54031e+06 | 2(Loss) |
| std::from_chars | 181.892 | 0.761922 | 343.582ms | 400000 | 120 | 3.06405e+10 | 2.09723e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 226.855 | 1.20749 | 0.307042ms | 400 | 120 | 49473.4 | 1681.56 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 218.068 | 0.626194 | 0.337375ms | 400 | 120 | 14399.1 | 1749.32 | 2(Tie) |
| std::from_chars STATISTICAL TIE | 212.789 | 1.08666 | 0.362125ms | 400 | 120 | 45540 | 1792.72 | 2(Tie) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 288.384 | 0.102138 | 2.40946ms | 4000 | 120 | 21904.5 | 13227.8 | 1(Win) |
| std::from_chars | 260.63 | 0.556493 | 2.65392ms | 4000 | 120 | 796111 | 14636.5 | 2(Loss) |
| strtoll/strtoull | 242.31 | 0.462722 | 2.85808ms | 4000 | 120 | 636797 | 15743.1 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 291.952 | 0.162038 | 23.558ms | 40000 | 120 | 5.37915e+06 | 130662 | 1(Win) |
| std::from_chars | 262.053 | 0.175405 | 26.2703ms | 40000 | 120 | 7.82356e+06 | 145569 | 2(Loss) |
| strtoll/strtoull | 244.502 | 0.284932 | 28.1289ms | 40000 | 120 | 2.37148e+07 | 156019 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 283.374 | 0.406928 | 240.136ms | 400000 | 120 | 3.60094e+09 | 1.34617e+06 | 1(Win) |
| strtoll/strtoull | 222.351 | 0.195792 | 309.273ms | 400000 | 120 | 1.35398e+09 | 1.71562e+06 | 2(Loss) |
| std::from_chars | 173.799 | 0.957112 | 366.342ms | 400000 | 120 | 5.29579e+10 | 2.19489e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 221.319 | 2.14639 | 0.313916ms | 400 | 120 | 164240 | 1723.62 | 1(Tie) |
| strtoll/strtoull STATISTICAL TIE | 221.012 | 1.90232 | 0.763583ms | 400 | 240 | 258741 | 1726.01 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 215.209 | 2.39038 | 1.74838ms | 400 | 480 | 861737 | 1772.56 | 1(Tie) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 277.264 | 0.814595 | 2.60479ms | 4000 | 120 | 1.50729e+06 | 13758.3 | 1(Win) |
| std::from_chars | 262.686 | 0.781322 | 2.62071ms | 4000 | 120 | 1.54485e+06 | 14521.9 | 2(Loss) |
| strtoll/strtoull | 227.051 | 0.785226 | 3.01708ms | 4000 | 120 | 2.08854e+06 | 16801 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 277.737 | 0.208565 | 25.0738ms | 40000 | 120 | 9.84734e+06 | 137349 | 1(Win) |
| vn::from_chars | 270.939 | 0.573367 | 25.4077ms | 40000 | 120 | 7.8203e+07 | 140795 | 2(Loss) |
| strtoll/strtoull | 237.482 | 0.500751 | 29.0915ms | 40000 | 120 | 7.76399e+07 | 160631 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 270.498 | 0.717377 | 250.822ms | 400000 | 120 | 1.2282e+10 | 1.41025e+06 | 1(Win) |
| strtoll/strtoull | 243.965 | 0.185282 | 281.914ms | 400000 | 120 | 1.00719e+09 | 1.56363e+06 | 2(Loss) |
| std::from_chars | 157.55 | 1.34978 | 396.75ms | 400000 | 120 | 1.28171e+11 | 2.42126e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 415.933 | 0.854614 | 0.386875ms | 800 | 120 | 29488.6 | 1834.28 | 1(Win) |
| std::from_chars | 321.328 | 0.776923 | 2.98417ms | 800 | 300 | 102085 | 2374.33 | 2(Loss) |
| strtoll/strtoull | 253.987 | 1.05486 | 0.554125ms | 800 | 120 | 120484 | 3003.85 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.592 | 2.26773 | 3.20863ms | 8000 | 120 | 1.91949e+07 | 17636.5 | 1(Win) |
| std::from_chars | 334.271 | 2.26013 | 4.1465ms | 8000 | 120 | 3.19323e+07 | 22824 | 2(Loss) |
| strtoll/strtoull | 301.586 | 1.45879 | 4.66338ms | 8000 | 120 | 1.63428e+07 | 25297.6 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 390.61 | 1.03918 | 35.05ms | 80000 | 120 | 4.94372e+08 | 195320 | 1(Win) |
| std::from_chars | 338.382 | 0.703585 | 41.0137ms | 80000 | 120 | 3.01981e+08 | 225467 | 2(Loss) |
| strtoll/strtoull | 285.036 | 1.54902 | 47.7283ms | 80000 | 120 | 2.06288e+09 | 267664 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.347 | 2.07558 | 462.183ms | 800000 | 120 | 3.08437e+11 | 2.4426e+06 | 1(Win) |
| strtoll/strtoull | 103.941 | 1.85168 | 3218.85ms | 800000 | 240 | 4.43353e+12 | 7.34011e+06 | 2(Loss) |
| std::from_chars | 51.6168 | 1.72004 | 5864.76ms | 800000 | 240 | 1.55126e+13 | 1.47808e+07 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 471.426 | 2.47536 | 0.320459ms | 800 | 120 | 192580 | 1618.37 | 1(Win) |
| std::from_chars | 338.454 | 0.361147 | 0.426417ms | 800 | 120 | 7953 | 2254.19 | 2(Loss) |
| strtoll/strtoull | 269.002 | 2.13089 | 0.541459ms | 800 | 120 | 438300 | 2836.18 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 480.265 | 1.94521 | 2.9565ms | 8000 | 120 | 1.14586e+07 | 15885.8 | 1(Win) |
| std::from_chars | 268.68 | 2.46145 | 5.12392ms | 8000 | 120 | 5.86236e+07 | 28395.8 | 2(Loss) |
| strtoll/strtoull | 183.586 | 2.25633 | 14.7779ms | 8000 | 240 | 2.11017e+08 | 41557.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.654 | 0.690252 | 27.7857ms | 80000 | 120 | 1.32771e+08 | 152389 | 1(Win) |
| strtoll/strtoull | 333.595 | 0.663497 | 40.7488ms | 80000 | 120 | 2.76312e+08 | 228702 | 2(Loss) |
| std::from_chars | 295.203 | 0.547046 | 45.7103ms | 80000 | 120 | 2.39866e+08 | 258446 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.03 | 0.858322 | 266.036ms | 800000 | 120 | 1.8883e+10 | 1.46149e+06 | 1(Win) |
| strtoll/strtoull | 334.03 | 1.16926 | 413.318ms | 800000 | 120 | 8.55875e+10 | 2.28405e+06 | 2(Loss) |
| std::from_chars | 120.847 | 2.44008 | 1199.99ms | 800000 | 120 | 2.84771e+12 | 6.31324e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull STATISTICAL TIE | 321.984 | 1.94203 | 0.438125ms | 800 | 120 | 254098 | 2369.49 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 315.702 | 2.14579 | 1.05296ms | 800 | 240 | 645373 | 2416.65 | 1(Tie) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 492.966 | 1.03544 | 2.77079ms | 8000 | 120 | 3.08158e+06 | 15476.5 | 1(Win) |
| strtoll/strtoull | 333.5 | 0.912218 | 4.09729ms | 8000 | 120 | 5.22596e+06 | 22876.7 | 2(Loss) |
| std::from_chars | 302.345 | 1.40334 | 23.8356ms | 8000 | 480 | 6.01921e+07 | 25234.1 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 328.563 | 0.499213 | 112.891ms | 80000 | 240 | 3.22497e+08 | 232205 | 1(Win) |
| strtoll/strtoull | 257.456 | 1.90168 | 276.04ms | 80000 | 480 | 1.52437e+10 | 296338 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 104.797 | 2.13586 | 3436.83ms | 800000 | 240 | 5.80286e+12 | 7.28018e+06 | 1(Win) |
| std::from_chars | 62.2156 | 2.13574 | 4471.87ms | 800000 | 240 | 1.64623e+13 | 1.22628e+07 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 506.191 | 1.36474 | 0.28975ms | 800 | 120 | 50773.1 | 1507.22 | 1(Win) |
| std::from_chars | 330.614 | 1.12417 | 0.455167ms | 800 | 120 | 80757.5 | 2307.64 | 2(Loss) |
| strtoll/strtoull | 297.372 | 1.6035 | 0.499459ms | 800 | 120 | 203096 | 2565.61 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 532.363 | 0.435311 | 2.60796ms | 8000 | 120 | 467032 | 14331.2 | 1(Win) |
| std::from_chars | 375.729 | 0.419721 | 3.78262ms | 8000 | 120 | 871629 | 20305.6 | 2(Loss) |
| strtoll/strtoull | 312.951 | 1.40898 | 4.39104ms | 8000 | 120 | 1.41586e+07 | 24378.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 422.514 | 2.34241 | 35.8451ms | 80000 | 120 | 2.14687e+09 | 180571 | 1(Win) |
| std::from_chars | 357.232 | 0.90491 | 38.7441ms | 80000 | 120 | 4.482e+08 | 213570 | 2(Loss) |
| strtoll/strtoull | 342.466 | 0.407459 | 40.0834ms | 80000 | 120 | 9.88769e+07 | 222778 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 50.5962 | 1.35629 | 12644.9ms | 800000 | 480 | 2.00766e+13 | 1.5079e+07 | 1(Win) |
| strtoll/strtoull | 37.231 | 2.39343 | 8418.06ms | 800000 | 240 | 5.77328e+13 | 2.0492e+07 | 2(Loss) |
