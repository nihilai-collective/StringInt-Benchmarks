# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 217.983 | 0.88449 | 0.723ms | 100 | 30 | 449.224 | 437.5 | 1(Win) |
| std::from_chars | 136.506 | 0.470319 | 0.1755ms | 100 | 30 | 323.895 | 698.633 | 2(Loss) |
| strtoll/strtoull | 39.805 | 0.161748 | 0.906083ms | 100 | 30 | 450.533 | 2395.87 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 246.196 | 0.0815466 | 1.05125ms | 1000 | 30 | 299.344 | 3873.63 | 1(Win) |
| std::from_chars | 149.793 | 0.0577549 | 1.23421ms | 1000 | 30 | 405.62 | 6366.63 | 2(Loss) |
| strtoll/strtoull | 39.4261 | 0.0327479 | 4.45308ms | 1000 | 30 | 1882.44 | 24188.9 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 72.8683 | 1.09995 | 23.8755ms | 10000 | 30 | 6.21717e+07 | 130876 | 1(Win) |
| std::from_chars | 59.3476 | 0.160483 | 29.7629ms | 10000 | 30 | 1.99514e+06 | 160693 | 2(Loss) |
| strtoll/strtoull | 36.6139 | 0.0846124 | 47.0242ms | 10000 | 30 | 1.45713e+06 | 260468 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 51.293 | 0.215912 | 336.079ms | 100000 | 30 | 4.83457e+08 | 1.85927e+06 | 1(Win) |
| vn::from_chars | 46.3636 | 0.287185 | 356.162ms | 100000 | 30 | 1.04686e+09 | 2.05694e+06 | 2(Loss) |
| strtoll/strtoull | 33.7008 | 0.400158 | 507.25ms | 100000 | 30 | 3.84683e+09 | 2.82983e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.079 | 0.877895 | 1.94771ms | 100 | 30 | 434.161 | 433.333 | 1(Win) |
| std::from_chars | 135.974 | 0.411844 | 0.176125ms | 100 | 30 | 250.309 | 701.367 | 2(Loss) |
| strtoll/strtoull | 38.3814 | 1.13105 | 0.505542ms | 100 | 30 | 23694.4 | 2484.73 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.956 | 0.244521 | 2.43504ms | 1000 | 30 | 3085.06 | 4147.2 | 1(Win) |
| std::from_chars | 149.174 | 0.080735 | 1.19317ms | 1000 | 30 | 799.206 | 6393.03 | 2(Loss) |
| strtoll/strtoull | 42.7338 | 0.0246918 | 4.13817ms | 1000 | 30 | 910.93 | 22316.6 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 59.3168 | 0.577217 | 21.9615ms | 10000 | 30 | 2.58371e+07 | 160776 | 1(Win) |
| std::from_chars | 55.1886 | 1.43622 | 30.3575ms | 10000 | 30 | 1.84783e+08 | 172803 | 2(Loss) |
| strtoll/strtoull | 42.0167 | 0.135107 | 41.5949ms | 10000 | 30 | 2.82119e+06 | 226975 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 53.1817 | 0.431701 | 315.934ms | 100000 | 30 | 1.79789e+09 | 1.79324e+06 | 1(Win) |
| std::from_chars | 49.0998 | 0.439084 | 334.816ms | 100000 | 30 | 2.18202e+09 | 1.94232e+06 | 2(Loss) |
| strtoll/strtoull | 39.0057 | 0.386982 | 426.08ms | 100000 | 30 | 2.68563e+09 | 2.44496e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.438 | 0.9466 | 0.553208ms | 100 | 30 | 430.033 | 399.967 | 1(Win) |
| std::from_chars | 142.453 | 0.289656 | 1.37054ms | 100 | 30 | 112.809 | 669.467 | 2(Loss) |
| strtoll/strtoull | 39.1712 | 0.509438 | 0.525125ms | 100 | 30 | 4615 | 2434.63 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 249.878 | 0.329779 | 0.888375ms | 1000 | 30 | 4752.39 | 3816.57 | 1(Win) |
| std::from_chars | 139.446 | 0.104132 | 1.35688ms | 1000 | 30 | 1521.52 | 6839 | 2(Loss) |
| strtoll/strtoull | 39.7987 | 0.0597208 | 4.41917ms | 1000 | 30 | 6143.77 | 23962.5 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 98.8227 | 0.357587 | 122.804ms | 10000 | 48 | 5.71599e+06 | 96503.6 | 1(Win) |
| std::from_chars | 56.7912 | 0.921731 | 29.6946ms | 10000 | 30 | 7.18732e+07 | 167926 | 2(Loss) |
| strtoll/strtoull | 38.7607 | 0.782576 | 44.5295ms | 10000 | 30 | 1.11222e+08 | 246042 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 54.2943 | 0.679618 | 318.479ms | 100000 | 30 | 4.27507e+09 | 1.75649e+06 | 1(Win) |
| std::from_chars | 47.8583 | 0.186869 | 359.131ms | 100000 | 30 | 4.15987e+08 | 1.99271e+06 | 2(Loss) |
| strtoll/strtoull | 38.7653 | 1.11943 | 440.247ms | 100000 | 30 | 2.27523e+10 | 2.46012e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 219.387 | 1.09412 | 0.150667ms | 100 | 30 | 678.631 | 434.7 | 1(Win) |
| std::from_chars | 157.121 | 0.630983 | 2.08267ms | 100 | 30 | 440.033 | 606.967 | 2(Loss) |
| strtoll/strtoull | 39.8288 | 0.273501 | 2.39458ms | 100 | 30 | 1286.6 | 2394.43 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 226.245 | 0.217488 | 2.32321ms | 1000 | 30 | 2521.36 | 4215.23 | 1(Win) |
| std::from_chars | 160.353 | 0.174661 | 2.8835ms | 1000 | 30 | 3237.13 | 5947.33 | 2(Loss) |
| strtoll/strtoull | 38.117 | 2.37323 | 4.53583ms | 1000 | 30 | 1.0577e+07 | 25019.6 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 82.9644 | 0.309613 | 21.764ms | 10000 | 30 | 3.79993e+06 | 114950 | 1(Win) |
| std::from_chars | 61.2131 | 0.426874 | 29.1864ms | 10000 | 30 | 1.32688e+07 | 155796 | 2(Loss) |
| strtoll/strtoull | 40.5065 | 0.272042 | 43.69ms | 10000 | 30 | 1.23068e+07 | 235438 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 51.0783 | 0.342395 | 337.696ms | 100000 | 30 | 1.22603e+09 | 1.86708e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 50.0109 | 1.82633 | 337.862ms | 100000 | 30 | 3.63874e+10 | 1.90693e+06 | 1(Tie) |
| strtoll/strtoull | 38.5715 | 0.263054 | 459.85ms | 100000 | 30 | 1.26905e+09 | 2.47248e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 311.421 | 0.663326 | 2.14679ms | 200 | 30 | 495.154 | 612.467 | 1(Win) |
| std::from_chars | 215.26 | 0.549249 | 2.09313ms | 200 | 30 | 710.547 | 886.067 | 2(Loss) |
| strtoll/strtoull | 71.191 | 0.237403 | 0.609375ms | 200 | 30 | 1213.68 | 2679.2 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.248 | 0.0961221 | 1.30575ms | 2000 | 30 | 1034.25 | 6108.43 | 1(Win) |
| std::from_chars | 218.161 | 0.127547 | 2.23896ms | 2000 | 30 | 3730.53 | 8742.87 | 2(Loss) |
| strtoll/strtoull | 63.7226 | 0.0590474 | 5.88983ms | 2000 | 30 | 9371.24 | 29932.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 145.262 | 0.310017 | 63.3835ms | 20000 | 30 | 4.97106e+06 | 131304 | 1(Win) |
| std::from_chars | 96.4803 | 1.28953 | 49.3925ms | 20000 | 30 | 1.9497e+08 | 197693 | 2(Loss) |
| strtoll/strtoull | 61.732 | 0.111781 | 59.1853ms | 20000 | 30 | 3.57847e+06 | 308972 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 88.2235 | 1.55737 | 374.897ms | 200000 | 30 | 3.40093e+10 | 2.16195e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 85.9532 | 0.235198 | 411.372ms | 200000 | 30 | 8.17194e+08 | 2.21906e+06 | 1(Tie) |
| strtoll/strtoull | 61.1847 | 0.0835119 | 580.998ms | 200000 | 30 | 2.03326e+08 | 3.11736e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 305.176 | 0.715336 | 1.06258ms | 200 | 30 | 599.655 | 625 | 1(Win) |
| std::from_chars | 217.643 | 0.484008 | 1.35912ms | 200 | 30 | 539.757 | 876.367 | 2(Loss) |
| strtoll/strtoull | 72.3559 | 0.238769 | 0.619875ms | 200 | 30 | 1188.48 | 2636.07 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.121 | 0.171613 | 1.4175ms | 2000 | 30 | 3430.01 | 6230.7 | 1(Win) |
| std::from_chars | 211.6 | 2.27719 | 1.73196ms | 2000 | 30 | 1.26401e+06 | 9013.93 | 2(Loss) |
| strtoll/strtoull | 69.0787 | 0.467751 | 6.86621ms | 2000 | 30 | 500406 | 27611.2 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 146.092 | 0.474216 | 29.1498ms | 20000 | 30 | 1.14996e+07 | 130558 | 1(Win) |
| std::from_chars | 96.0303 | 0.215609 | 40.4652ms | 20000 | 30 | 5.50172e+06 | 198619 | 2(Loss) |
| strtoll/strtoull | 70.6684 | 0.239776 | 48.7719ms | 20000 | 30 | 1.25645e+07 | 269901 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 105.679 | 0.426074 | 334.347ms | 200000 | 30 | 1.77409e+09 | 1.80485e+06 | 1(Win) |
| strtoll/strtoull | 65.7676 | 1.42277 | 524.57ms | 200000 | 30 | 5.10771e+10 | 2.90014e+06 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.711 | 0.72258 | 2.38475ms | 200 | 30 | 590.257 | 613.867 | 1(Win) |
| std::from_chars | 207.78 | 0.881923 | 3.74329ms | 200 | 30 | 1966.24 | 917.967 | 2(Loss) |
| strtoll/strtoull | 69.7802 | 0.841507 | 6.95879ms | 200 | 30 | 15872 | 2733.37 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 326.2 | 0.15795 | 1.11875ms | 2000 | 30 | 2558.9 | 5847.17 | 1(Win) |
| std::from_chars | 221.854 | 0.0581769 | 2.01996ms | 2000 | 30 | 750.493 | 8597.3 | 2(Loss) |
| strtoll/strtoull | 71.8062 | 0.0892117 | 4.95829ms | 2000 | 30 | 16846.2 | 26562.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 136.346 | 1.2852 | 21.9065ms | 20000 | 30 | 9.69703e+07 | 139890 | 1(Win) |
| std::from_chars | 99.1145 | 1.303 | 36.6028ms | 20000 | 30 | 1.88623e+08 | 192439 | 2(Loss) |
| strtoll/strtoull | 69.551 | 0.966678 | 50.5677ms | 20000 | 30 | 2.10833e+08 | 274237 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 107.591 | 0.594907 | 318.014ms | 200000 | 30 | 3.33678e+09 | 1.77278e+06 | 1(Win) |
| std::from_chars | 90.4207 | 0.62092 | 426.708ms | 200000 | 30 | 5.14655e+09 | 2.10942e+06 | 2(Loss) |
| strtoll/strtoull | 74.7555 | 0.707194 | 495.781ms | 200000 | 30 | 9.76724e+09 | 2.55145e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 313.52 | 0.621887 | 1.23529ms | 200 | 30 | 429.413 | 608.367 | 1(Win) |
| std::from_chars | 295.958 | 0.599702 | 0.219708ms | 200 | 30 | 448.12 | 644.467 | 2(Loss) |
| strtoll/strtoull | 77.4034 | 0.176367 | 2.04271ms | 200 | 30 | 566.626 | 2464.17 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 318.475 | 0.280938 | 2.6225ms | 2000 | 30 | 8492.83 | 5989 | 1(Win) |
| std::from_chars | 281.934 | 0.0953788 | 2.21658ms | 2000 | 30 | 1249.08 | 6765.23 | 2(Loss) |
| strtoll/strtoull | 67.7126 | 1.90919 | 28.3732ms | 2000 | 48 | 1.38822e+07 | 28168.3 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 138.737 | 2.21549 | 25.1814ms | 20000 | 30 | 2.78315e+08 | 137479 | 1(Win) |
| std::from_chars | 98.8641 | 1.75357 | 33.4203ms | 20000 | 30 | 3.43361e+08 | 192926 | 2(Loss) |
| strtoll/strtoull | 69.7003 | 1.69649 | 118.503ms | 20000 | 30 | 6.46567e+08 | 273650 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 112.752 | 2.45606 | 311.643ms | 200000 | 30 | 5.17855e+10 | 1.69163e+06 | 1(Win) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 420.615 | 0.423656 | 0.31575ms | 400 | 30 | 442.892 | 906.933 | 1(Win) |
| std::from_chars | 268.231 | 0.271684 | 2.87996ms | 400 | 30 | 447.868 | 1422.17 | 2(Loss) |
| strtoll/strtoull | 115.938 | 0.0423129 | 1.44475ms | 400 | 30 | 58.1483 | 3290.3 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 403.134 | 0.234435 | 1.91496ms | 4000 | 30 | 14763.4 | 9462.6 | 1(Win) |
| std::from_chars | 290.37 | 0.370397 | 4.35288ms | 4000 | 30 | 71034.9 | 13137.4 | 2(Loss) |
| strtoll/strtoull | 104.061 | 1.75374 | 19.6346ms | 4000 | 30 | 1.23992e+07 | 36658.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 140.541 | 1.40703 | 120.242ms | 40000 | 30 | 4.37566e+08 | 271429 | 1(Win) |
| strtoll/strtoull | 105.698 | 0.15569 | 65.265ms | 40000 | 30 | 9.47162e+06 | 360904 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 178.505 | 0.735512 | 372.375ms | 400000 | 30 | 7.4117e+09 | 2.13702e+06 | 1(Win) |
| std::from_chars | 139.961 | 0.249139 | 1339.09ms | 400000 | 30 | 1.38329e+09 | 2.72555e+06 | 2(Loss) |
| strtoll/strtoull | 111.148 | 0.731212 | 644.077ms | 400000 | 30 | 1.8894e+10 | 3.43208e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 430.504 | 0.385787 | 1.422ms | 400 | 30 | 350.576 | 886.1 | 1(Win) |
| std::from_chars | 293.453 | 0.283523 | 2.8595ms | 400 | 30 | 407.513 | 1299.93 | 2(Loss) |
| strtoll/strtoull | 127.629 | 0.114372 | 1.39696ms | 400 | 30 | 350.576 | 2988.9 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.929 | 0.213245 | 2.24854ms | 4000 | 30 | 12663.8 | 9634.8 | 1(Win) |
| std::from_chars | 296.735 | 0.037148 | 3.03446ms | 4000 | 30 | 684.185 | 12855.6 | 2(Loss) |
| strtoll/strtoull | 123.631 | 0.242313 | 5.56833ms | 4000 | 30 | 167703 | 30855.5 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.596 | 0.252515 | 31.6175ms | 40000 | 30 | 5.37388e+06 | 167608 | 1(Win) |
| std::from_chars | 144.863 | 0.815757 | 44.4737ms | 40000 | 30 | 1.38435e+08 | 263331 | 2(Loss) |
| strtoll/strtoull | 115.351 | 0.657587 | 66.0288ms | 40000 | 30 | 1.41874e+08 | 330703 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 204.094 | 0.562454 | 847.803ms | 400000 | 30 | 3.31555e+09 | 1.86909e+06 | 1(Win) |
| std::from_chars | 146.174 | 0.536524 | 483.837ms | 400000 | 30 | 5.88136e+09 | 2.60969e+06 | 2(Loss) |
| strtoll/strtoull | 115.871 | 1.38516 | 577.999ms | 400000 | 30 | 6.23862e+10 | 3.29218e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 360.467 | 1.01104 | 1.85421ms | 400 | 30 | 3434.41 | 1058.27 | 1(Win) |
| std::from_chars | 265.857 | 0.496243 | 0.365666ms | 400 | 30 | 1521.02 | 1434.87 | 2(Loss) |
| strtoll/strtoull | 120.728 | 0.269178 | 0.611208ms | 400 | 30 | 2170.2 | 3159.73 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 405.398 | 0.3812 | 1.82225ms | 4000 | 30 | 38599.8 | 9409.77 | 1(Win) |
| std::from_chars | 275.013 | 0.131567 | 2.58925ms | 4000 | 30 | 9991.48 | 13871 | 2(Loss) |
| strtoll/strtoull | 115.719 | 0.798377 | 6.23608ms | 4000 | 30 | 2.07803e+06 | 32965.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 274.568 | 0.364356 | 26.2391ms | 40000 | 30 | 7.68768e+06 | 138935 | 1(Win) |
| std::from_chars | 152.277 | 0.265052 | 115.83ms | 40000 | 30 | 1.32263e+07 | 250511 | 2(Loss) |
| strtoll/strtoull | 118.857 | 0.678267 | 61.5396ms | 40000 | 30 | 1.42164e+08 | 320947 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 193.864 | 1.49138 | 374.275ms | 400000 | 30 | 2.58359e+10 | 1.96772e+06 | 1(Win) |
| std::from_chars | 138.061 | 0.894334 | 489.49ms | 400000 | 30 | 1.83189e+10 | 2.76306e+06 | 2(Loss) |
| strtoll/strtoull | 118.928 | 1.70091 | 599.735ms | 400000 | 30 | 8.92966e+10 | 3.20756e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 314.32 | 0.359975 | 2.30262ms | 400 | 30 | 572.585 | 1213.63 | 1(Win) |
| vn::from_chars | 129.866 | 1.57595 | 3.14846ms | 400 | 30 | 64288.7 | 2937.4 | 2(Loss) |
| strtoll/strtoull | 116.332 | 0.151012 | 1.72875ms | 400 | 30 | 735.637 | 3279.13 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 387.829 | 0.757603 | 7.30762ms | 4000 | 30 | 166588 | 9836.03 | 1(Win) |
| std::from_chars | 297.412 | 0.0625231 | 3.08462ms | 4000 | 30 | 1929.32 | 12826.3 | 2(Loss) |
| strtoll/strtoull | 117.718 | 0.397474 | 6.05083ms | 4000 | 30 | 497708 | 32405.4 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 268.733 | 0.499251 | 25.8148ms | 40000 | 30 | 1.50674e+07 | 141951 | 1(Win) |
| std::from_chars | 162.59 | 0.839418 | 41.4334ms | 40000 | 30 | 1.16362e+08 | 234621 | 2(Loss) |
| strtoll/strtoull | 116.79 | 1.37352 | 141.184ms | 40000 | 30 | 6.03803e+08 | 326628 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.481 | 0.29051 | 303.69ms | 400000 | 30 | 6.99634e+08 | 1.66232e+06 | 1(Win) |
| std::from_chars | 156.977 | 0.275241 | 442.52ms | 400000 | 30 | 1.34212e+09 | 2.43009e+06 | 2(Loss) |
| strtoll/strtoull | 124.054 | 0.146231 | 563.159ms | 400000 | 30 | 6.06597e+08 | 3.07503e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 496.189 | 0.30053 | 1.39529ms | 800 | 30 | 640.593 | 1537.6 | 1(Win) |
| std::from_chars | 305.009 | 0.218847 | 0.564458ms | 800 | 30 | 898.999 | 2501.37 | 2(Loss) |
| strtoll/strtoull | 166.109 | 0.395152 | 2.63342ms | 800 | 30 | 9881.93 | 4593 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.742 | 0.0684893 | 2.88563ms | 8000 | 30 | 3266.76 | 15236.2 | 1(Win) |
| std::from_chars | 255.592 | 0.0490115 | 7.76154ms | 8000 | 30 | 6421.03 | 29849.9 | 2(Loss) |
| strtoll/strtoull | 163.536 | 0.0970271 | 9.78146ms | 8000 | 30 | 61469.8 | 46652.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 342.023 | 1.80515 | 39.4571ms | 80000 | 30 | 4.86426e+08 | 223067 | 1(Win) |
| std::from_chars | 191.83 | 2.17844 | 396.163ms | 80000 | 48 | 3.60313e+09 | 397716 | 2(Loss) |
| strtoll/strtoull | 165.028 | 1.52811 | 79.8096ms | 80000 | 30 | 1.49726e+09 | 462310 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 316.667 | 0.355288 | 441.209ms | 800000 | 30 | 2.19815e+09 | 2.40928e+06 | 1(Win) |
| std::from_chars | 200.637 | 1.46836 | 4802.22ms | 800000 | 48 | 1.49646e+11 | 3.80259e+06 | 2(Loss) |
| strtoll/strtoull | 159.209 | 1.10704 | 2105.02ms | 800000 | 30 | 8.44291e+10 | 4.79207e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.479 | 0.290066 | 0.457834ms | 800 | 30 | 591.292 | 1530.53 | 1(Win) |
| std::from_chars | 303.649 | 0.265431 | 0.952167ms | 800 | 30 | 1334.32 | 2512.57 | 2(Loss) |
| strtoll/strtoull | 178.757 | 0.427822 | 0.837583ms | 800 | 30 | 10002.4 | 4268.03 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 490.767 | 0.273744 | 2.91104ms | 8000 | 30 | 54330.1 | 15545.9 | 1(Win) |
| std::from_chars | 243.178 | 0.443057 | 16.2186ms | 8000 | 30 | 579658 | 31373.7 | 2(Loss) |
| strtoll/strtoull | 177.239 | 0.35906 | 8.03908ms | 8000 | 30 | 716667 | 43045.8 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.793 | 0.235637 | 34.9023ms | 80000 | 30 | 6.18945e+06 | 192762 | 1(Win) |
| std::from_chars | 214.051 | 0.513229 | 63.0156ms | 80000 | 30 | 1.0039e+08 | 356429 | 2(Loss) |
| strtoll/strtoull | 161.064 | 1.69153 | 95.8142ms | 80000 | 30 | 1.92603e+09 | 473686 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 356.789 | 1.19638 | 432.702ms | 800000 | 30 | 1.96345e+10 | 2.13835e+06 | 1(Win) |
| std::from_chars | 204.384 | 1.27625 | 4169.66ms | 800000 | 48 | 1.08944e+11 | 3.73287e+06 | 2(Loss) |
| strtoll/strtoull | 177.069 | 0.46064 | 5005.63ms | 800000 | 48 | 1.89086e+10 | 4.30872e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 464.339 | 0.336442 | 0.321042ms | 800 | 30 | 916.754 | 1643.07 | 1(Win) |
| std::from_chars | 307.393 | 0.191486 | 0.903125ms | 800 | 30 | 677.62 | 2481.97 | 2(Loss) |
| strtoll/strtoull | 181.168 | 0.156943 | 0.92175ms | 800 | 30 | 1310.46 | 4211.23 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 468.578 | 0.0558232 | 4.13692ms | 8000 | 30 | 2478.38 | 16282 | 1(Win) |
| std::from_chars | 238.326 | 2.28829 | 17.8728ms | 8000 | 30 | 1.60984e+07 | 32012.4 | 2(Loss) |
| strtoll/strtoull | 174.675 | 1.06284 | 8.53667ms | 8000 | 30 | 6.46514e+06 | 43677.6 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.346 | 0.316596 | 97.1926ms | 80000 | 30 | 1.12553e+07 | 193469 | 1(Win) |
| std::from_chars | 215.05 | 0.142904 | 64.3197ms | 80000 | 30 | 7.71101e+06 | 354774 | 2(Loss) |
| strtoll/strtoull | 180.073 | 0.151577 | 76.3822ms | 80000 | 30 | 1.23729e+07 | 423683 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 345.362 | 1.22241 | 2061.49ms | 800000 | 48 | 3.50032e+10 | 2.2091e+06 | 1(Win) |
| std::from_chars | 208.261 | 0.321246 | 4094.31ms | 800000 | 48 | 6.64785e+09 | 3.66339e+06 | 2(Loss) |
| strtoll/strtoull | 176.759 | 0.559394 | 805.092ms | 800000 | 30 | 1.74893e+10 | 4.31626e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 436.989 | 0.31034 | 0.607292ms | 800 | 30 | 880.714 | 1745.9 | 1(Win) |
| std::from_chars | 321.979 | 0.418295 | 1.47671ms | 800 | 30 | 2947.22 | 2369.53 | 2(Loss) |
| strtoll/strtoull | 173.449 | 0.161951 | 5.383ms | 800 | 30 | 1522.38 | 4398.63 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 448.311 | 0.195086 | 3.15942ms | 8000 | 30 | 33066.9 | 17018.1 | 1(Win) |
| std::from_chars | 265.153 | 1.14217 | 5.46658ms | 8000 | 30 | 3.24018e+06 | 28773.6 | 2(Loss) |
| strtoll/strtoull | 172.389 | 1.42209 | 9.37096ms | 8000 | 30 | 1.18832e+07 | 44256.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 358.496 | 0.512304 | 41.5499ms | 80000 | 30 | 3.56605e+07 | 212817 | 1(Win) |
| std::from_chars | 215.009 | 0.793496 | 206.104ms | 80000 | 30 | 2.37835e+08 | 354840 | 2(Loss) |
| strtoll/strtoull | 181.613 | 0.297165 | 77.4543ms | 80000 | 30 | 4.67525e+07 | 420092 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.327 | 0.153418 | 444.969ms | 800000 | 30 | 4.29556e+08 | 2.46645e+06 | 1(Win) |
| strtoll/strtoull | 173.519 | 0.92146 | 1836.55ms | 800000 | 30 | 4.92446e+10 | 4.39685e+06 | 2(Loss) |
