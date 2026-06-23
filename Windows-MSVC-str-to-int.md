# str-to-int  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 461.455 | 2.24132 | 0.0557ms | 100 | 30 | 643.678 | 206.667 | 6.08933 | 1(Win) |
| strtoll/strtoull | 120.718 | 0.705172 | 0.156ms | 100 | 30 | 931.034 | 790 | 24.5147 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 617.932 | 0.803142 | 0.3202ms | 1000 | 30 | 4609.2 | 1543.33 | 4.83103 | 1(Win) |
| std::from_chars | 463.699 | 0.447416 | 0.4292ms | 1000 | 30 | 2540.23 | 2056.67 | 6.4968 | 2(Loss) |
| strtoll/strtoull | 116.824 | 0.231111 | 1.5407ms | 1000 | 30 | 10678.2 | 8163.33 | 25.9758 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 238.617 | 0.968855 | 7.5834ms | 10000 | 30 | 4.49816e+06 | 39966.7 | 12.7293 | 1(Win) |
| std::from_chars | 166.785 | 0.917836 | 10.4925ms | 10000 | 30 | 8.26303e+06 | 57180 | 18.2168 | 2(Loss) |
| strtoll/strtoull | 80.4019 | 0.623969 | 21.3613ms | 10000 | 30 | 1.64329e+07 | 118613 | 37.7934 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 165.769 | 0.255048 | 104.267ms | 100000 | 30 | 6.45893e+07 | 575303 | 18.334 | 1(Win) |
| std::from_chars | 131.32 | 0.285178 | 130.874ms | 100000 | 30 | 1.28673e+08 | 726220 | 23.1435 | 2(Loss) |
| strtoll/strtoull | 75.9515 | 0.443537 | 225.063ms | 100000 | 30 | 9.30485e+08 | 1.25564e+06 | 40.0173 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 457.764 | 1.93512 | 0.2208ms | 100 | 48 | 780.142 | 208.333 | 6.25979 | 1(Win) |
| strtoll/strtoull | 116.302 | 0.905831 | 0.1629ms | 100 | 30 | 1655.17 | 820 | 25.5503 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 684.455 | 0.332444 | 0.2706ms | 1000 | 30 | 643.678 | 1393.33 | 4.40013 | 1(Win) |
| std::from_chars | 501.055 | 0.175131 | 0.3666ms | 1000 | 30 | 333.333 | 1903.33 | 5.99717 | 2(Loss) |
| strtoll/strtoull | 108.331 | 0.95348 | 1.615ms | 1000 | 30 | 211368 | 8803.33 | 27.9703 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 426.636 | 2.19536 | 9.479ms | 10000 | 30 | 7.22464e+06 | 22353.3 | 7.12036 | 1(Win) |
| std::from_chars | 313.812 | 1.6419 | 5.6192ms | 10000 | 30 | 7.46921e+06 | 30390 | 9.6772 | 2(Loss) |
| strtoll/strtoull | 102.627 | 0.889052 | 16.8033ms | 10000 | 30 | 2.04765e+07 | 92926.7 | 29.6118 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 290.035 | 0.875732 | 59.4241ms | 100000 | 30 | 2.48749e+08 | 328813 | 10.4782 | 1(Win) |
| std::from_chars | 217.286 | 0.503933 | 78.706ms | 100000 | 30 | 1.46759e+08 | 438903 | 13.9865 | 2(Loss) |
| strtoll/strtoull | 100.66 | 0.345304 | 170.423ms | 100000 | 30 | 3.2108e+08 | 947423 | 30.1939 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 471.921 | 1.03093 | 0.2175ms | 100 | 48 | 208.333 | 202.083 | 6.08604 | 1(Win) |
| strtoll/strtoull | 115.831 | 1.26025 | 0.1585ms | 100 | 30 | 3229.89 | 823.333 | 25.538 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 581.509 | 0.554706 | 0.6953ms | 1000 | 30 | 2482.76 | 1640 | 5.18557 | 1(Win) |
| std::from_chars | 460.712 | 0.411093 | 0.3952ms | 1000 | 30 | 2172.41 | 2070 | 6.55063 | 2(Loss) |
| strtoll/strtoull | 114.762 | 0.120337 | 1.5471ms | 1000 | 30 | 3000 | 8310 | 26.4446 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 521.989 | 2.42052 | 3.4793ms | 10000 | 30 | 5.867e+06 | 18270 | 5.81694 | 1(Win) |
| std::from_chars | 278.499 | 1.66382 | 6.313ms | 10000 | 30 | 9.7384e+06 | 34243.3 | 10.9027 | 2(Loss) |
| strtoll/strtoull | 104.196 | 1.1039 | 16.1203ms | 10000 | 30 | 3.06248e+07 | 91526.7 | 29.1619 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 287.243 | 0.456188 | 59.6777ms | 100000 | 30 | 6.88196e+07 | 332010 | 10.5794 | 1(Win) |
| std::from_chars | 212.85 | 0.474738 | 80.8069ms | 100000 | 30 | 1.35732e+08 | 448050 | 14.2781 | 2(Loss) |
| strtoll/strtoull | 105.887 | 0.302879 | 162.458ms | 100000 | 30 | 2.23242e+08 | 900653 | 28.7031 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 493.28 | 2.39589 | 0.0592ms | 100 | 30 | 643.678 | 193.333 | 5.48467 | 1(Win) |
| strtoll/strtoull | 130.046 | 1.19369 | 0.1617ms | 100 | 30 | 2298.85 | 733.333 | 22.696 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 585.076 | 0.522063 | 0.3477ms | 1000 | 30 | 2172.41 | 1630 | 5.1118 | 1(Win) |
| vn::from_chars | 530.802 | 0.325018 | 0.3508ms | 1000 | 30 | 1022.99 | 1796.67 | 5.69283 | 2(Loss) |
| strtoll/strtoull | 103.063 | 0.11273 | 1.6477ms | 1000 | 30 | 3264.37 | 9253.33 | 29.4645 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 321.066 | 2.41277 | 5.4132ms | 10000 | 30 | 1.54086e+07 | 29703.3 | 9.45676 | 1(Win) |
| std::from_chars | 256.387 | 1.08448 | 6.8151ms | 10000 | 30 | 4.88171e+06 | 37196.7 | 11.8461 | 2(Loss) |
| strtoll/strtoull | 96.3599 | 1.66009 | 17.729ms | 10000 | 30 | 8.09829e+07 | 98970 | 31.5317 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 225.251 | 1.52949 | 72.8975ms | 100000 | 30 | 1.25801e+09 | 423383 | 13.4922 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 221.26 | 0.351967 | 77.8867ms | 100000 | 30 | 6.9043e+07 | 431020 | 13.7352 | 1(Tie) |
| strtoll/strtoull | 96.633 | 0.42399 | 177.939ms | 100000 | 30 | 5.25268e+08 | 986903 | 31.4509 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 657.706 | 1.92099 | 0.0822ms | 200 | 30 | 931.034 | 290 | 4.28317 | 1(Win) |
| std::from_chars | 389.255 | 1.13691 | 0.2265ms | 200 | 30 | 931.034 | 490 | 7.4395 | 2(Loss) |
| strtoll/strtoull | 208.074 | 0.754959 | 0.1848ms | 200 | 30 | 1436.78 | 916.667 | 14.4677 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 727.071 | 0.299391 | 0.5007ms | 2000 | 30 | 1850.57 | 2623.33 | 4.16395 | 1(Win) |
| std::from_chars | 396.813 | 0.170841 | 0.9316ms | 2000 | 30 | 2022.99 | 4806.67 | 7.63712 | 2(Loss) |
| strtoll/strtoull | 182.173 | 0.802572 | 4.4552ms | 2000 | 30 | 211828 | 10470 | 16.6477 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.208 | 1.38509 | 9.6398ms | 20000 | 30 | 1.65948e+07 | 53696.7 | 8.55373 | 1(Win) |
| std::from_chars | 225.402 | 0.790969 | 15.5127ms | 20000 | 30 | 1.34396e+07 | 84620 | 13.4812 | 2(Loss) |
| strtoll/strtoull | 139.006 | 1.08858 | 25.1301ms | 20000 | 30 | 6.69315e+07 | 137213 | 21.86 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 270.87 | 0.274453 | 126.872ms | 200000 | 30 | 1.12046e+08 | 704157 | 11.2202 | 1(Win) |
| std::from_chars | 214.609 | 0.229213 | 157.791ms | 200000 | 30 | 1.24498e+08 | 888757 | 14.162 | 2(Loss) |
| strtoll/strtoull | 131.984 | 0.357369 | 259.961ms | 200000 | 30 | 8.00152e+08 | 1.44514e+06 | 23.0281 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 650.232 | 1.57911 | 0.0685ms | 200 | 30 | 643.678 | 293.333 | 4.38917 | 1(Win) |
| std::from_chars | 454.131 | 1.76853 | 0.0968ms | 200 | 30 | 1655.17 | 420 | 6.279 | 2(Loss) |
| strtoll/strtoull | 182.813 | 0.881968 | 0.2059ms | 200 | 30 | 2540.23 | 1043.33 | 16.4083 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 701.231 | 0.273081 | 0.5249ms | 2000 | 30 | 1655.17 | 2720 | 4.30885 | 1(Win) |
| std::from_chars | 404.671 | 0.317364 | 0.8804ms | 2000 | 30 | 6712.64 | 4713.33 | 7.46382 | 2(Loss) |
| strtoll/strtoull | 174.879 | 0.191283 | 2.029ms | 2000 | 30 | 13057.5 | 10906.7 | 17.3363 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 634.092 | 1.44765 | 13.0712ms | 20000 | 30 | 5.68855e+06 | 30080 | 4.78854 | 1(Win) |
| std::from_chars | 344.038 | 0.568729 | 10.1201ms | 20000 | 30 | 2.98248e+06 | 55440 | 8.82981 | 2(Loss) |
| strtoll/strtoull | 162.975 | 1.54345 | 20.8639ms | 20000 | 30 | 9.78871e+07 | 117033 | 18.645 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 409.563 | 0.511676 | 84.3383ms | 200000 | 30 | 1.70345e+08 | 465703 | 7.42027 | 1(Win) |
| std::from_chars | 329.828 | 0.431094 | 104.291ms | 200000 | 30 | 1.86445e+08 | 578287 | 9.21431 | 2(Loss) |
| strtoll/strtoull | 165.91 | 0.25344 | 208.785ms | 200000 | 30 | 2.54676e+08 | 1.14963e+06 | 18.3191 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 673.182 | 1.91861 | 0.2855ms | 200 | 48 | 1418.44 | 283.333 | 4.17812 | 1(Win) |
| std::from_chars | 457.764 | 1.66091 | 0.0915ms | 200 | 30 | 1436.78 | 416.667 | 6.24217 | 2(Loss) |
| strtoll/strtoull | 183.989 | 0.863205 | 0.2012ms | 200 | 30 | 2402.3 | 1036.67 | 16.2812 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 736.428 | 0.215091 | 1.1684ms | 2000 | 30 | 931.034 | 2590 | 4.1086 | 1(Win) |
| std::from_chars | 422.291 | 0.383969 | 0.8435ms | 2000 | 30 | 9022.99 | 4516.67 | 7.1891 | 2(Loss) |
| strtoll/strtoull | 182.463 | 0.0886235 | 1.9198ms | 2000 | 30 | 2574.71 | 10453.3 | 16.6254 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 501.978 | 1.14297 | 6.9391ms | 20000 | 30 | 5.65826e+06 | 37996.7 | 6.05098 | 1(Win) |
| std::from_chars | 331.348 | 1.28667 | 10.312ms | 20000 | 30 | 1.64569e+07 | 57563.3 | 9.16802 | 2(Loss) |
| strtoll/strtoull | 171.001 | 0.615216 | 20.2036ms | 20000 | 30 | 1.41266e+07 | 111540 | 17.7701 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 411.931 | 0.459188 | 82.6567ms | 200000 | 30 | 1.35617e+08 | 463027 | 7.37777 | 1(Win) |
| std::from_chars | 324.17 | 0.327847 | 106.076ms | 200000 | 30 | 1.1163e+08 | 588380 | 9.37538 | 2(Loss) |
| strtoll/strtoull | 171.016 | 0.31002 | 202.223ms | 200000 | 30 | 3.58665e+08 | 1.11531e+06 | 17.7724 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 698.876 | 2.37512 | 0.2918ms | 200 | 48 | 2016.84 | 272.917 | 4.29646 | 1(Win) |
| strtoll/strtoull | 211.146 | 0.369004 | 0.1798ms | 200 | 30 | 333.333 | 903.333 | 14.2028 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 731.719 | 0.1777 | 0.4913ms | 2000 | 30 | 643.678 | 2606.67 | 4.10695 | 1(Win) |
| std::from_chars | 540.325 | 0.308237 | 0.6666ms | 2000 | 30 | 3551.72 | 3530 | 5.57878 | 2(Loss) |
| strtoll/strtoull | 195.092 | 0.513612 | 1.7643ms | 2000 | 30 | 75643.7 | 9776.67 | 15.5537 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 592.958 | 0.32905 | 5.8166ms | 20000 | 30 | 336092 | 32166.7 | 5.12238 | 1(Win) |
| std::from_chars | 514.203 | 1.04563 | 6.8081ms | 20000 | 30 | 4.51306e+06 | 37093.3 | 5.9082 | 2(Loss) |
| strtoll/strtoull | 189.346 | 1.21543 | 18.1375ms | 20000 | 30 | 4.49706e+07 | 100733 | 16.0514 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 550.53 | 0.946019 | 61.4482ms | 200000 | 30 | 3.22269e+08 | 346457 | 5.52029 | 1(Win) |
| std::from_chars | 498.432 | 0.981971 | 68.3602ms | 200000 | 30 | 4.23611e+08 | 382670 | 6.09726 | 2(Loss) |
| strtoll/strtoull | 189.129 | 0.61055 | 180.535ms | 200000 | 30 | 1.13739e+09 | 1.00849e+06 | 16.0695 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 854.037 | 2.07405 | 0.0946ms | 400 | 30 | 2574.71 | 446.667 | 3.31308 | 1(Win) |
| std::from_chars | 702.092 | 1.69359 | 0.1257ms | 400 | 30 | 2540.23 | 543.333 | 4.17408 | 2(Loss) |
| strtoll/strtoull | 289.724 | 0.525604 | 0.2533ms | 400 | 30 | 1436.78 | 1316.67 | 10.3726 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 640.05 | 0.846032 | 1.3136ms | 4000 | 30 | 76275.9 | 5960 | 4.73597 | 1(Win) |
| strtoll/strtoull | 247.406 | 1.9687 | 13.8207ms | 4000 | 48 | 4.42283e+06 | 15418.8 | 12.2688 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 547.198 | 0.330966 | 13.1595ms | 40000 | 30 | 1.59706e+06 | 69713.3 | 5.55208 | 1(Win) |
| std::from_chars | 349.086 | 1.0293 | 19.7035ms | 40000 | 30 | 3.79543e+07 | 109277 | 8.70471 | 2(Loss) |
| strtoll/strtoull | 193.221 | 1.47458 | 34.8333ms | 40000 | 30 | 2.54254e+08 | 197427 | 15.7281 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 403.049 | 0.340071 | 172.554ms | 400000 | 30 | 3.10789e+08 | 946460 | 7.54009 | 1(Win) |
| std::from_chars | 337.436 | 0.291693 | 204.856ms | 400000 | 30 | 3.26222e+08 | 1.1305e+06 | 9.00642 | 2(Loss) |
| strtoll/strtoull | 188.896 | 0.545096 | 359.179ms | 400000 | 30 | 3.63533e+09 | 2.01947e+06 | 16.0893 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 841.477 | 2.04355 | 0.0959ms | 400 | 30 | 2574.71 | 453.333 | 3.44108 | 1(Win) |
| std::from_chars | 615.274 | 1.19803 | 0.1383ms | 400 | 30 | 1655.17 | 620 | 4.73983 | 2(Loss) |
| strtoll/strtoull | 266.142 | 0.610728 | 0.2869ms | 400 | 30 | 2298.85 | 1433.33 | 11.2867 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 874.262 | 0.81109 | 0.8422ms | 4000 | 30 | 37574.7 | 4363.33 | 3.45798 | 1(Win) |
| std::from_chars | 526.407 | 0.308447 | 1.4904ms | 4000 | 30 | 14988.5 | 7246.67 | 5.7654 | 2(Loss) |
| strtoll/strtoull | 233.172 | 2.26909 | 6.9999ms | 4000 | 30 | 4.13421e+06 | 16360 | 13.0232 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 647.987 | 1.42393 | 24.3256ms | 40000 | 30 | 2.10808e+07 | 58870 | 4.68849 | 1(Win) |
| std::from_chars | 453.788 | 0.857201 | 15.5371ms | 40000 | 30 | 1.55776e+07 | 84063.3 | 6.69543 | 2(Loss) |
| strtoll/strtoull | 224.619 | 1.40246 | 30.26ms | 40000 | 30 | 1.70188e+08 | 169830 | 13.529 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 521.093 | 0.459256 | 131.366ms | 400000 | 30 | 3.39094e+08 | 732057 | 5.83162 | 1(Win) |
| std::from_chars | 441.473 | 0.492296 | 155.475ms | 400000 | 30 | 5.42857e+08 | 864083 | 6.88321 | 2(Loss) |
| strtoll/strtoull | 222.933 | 0.311626 | 303.542ms | 400000 | 30 | 8.5302e+08 | 1.71114e+06 | 13.6323 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 847.711 | 2.06328 | 0.0933ms | 400 | 30 | 2586.21 | 450 | 3.27917 | 1(Win) |
| std::from_chars | 642.927 | 0.780684 | 0.1213ms | 400 | 30 | 643.678 | 593.333 | 4.509 | 2(Loss) |
| strtoll/strtoull | 253.749 | 0.221729 | 0.28ms | 400 | 30 | 333.333 | 1503.33 | 11.7253 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 524.718 | 0.949212 | 3.1047ms | 4000 | 30 | 142862 | 7270 | 5.78094 | 1(Win) |
| strtoll/strtoull | 240.878 | 0.955711 | 6.8027ms | 4000 | 30 | 687230 | 15836.7 | 12.6093 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 582.812 | 1.70042 | 11.0324ms | 40000 | 30 | 3.71619e+07 | 65453.3 | 5.21296 | 1(Win) |
| std::from_chars | 462.107 | 0.819604 | 15.239ms | 40000 | 30 | 1.37329e+07 | 82550 | 6.57534 | 2(Loss) |
| strtoll/strtoull | 236.756 | 0.76848 | 29.0188ms | 40000 | 30 | 4.59943e+07 | 161123 | 12.836 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 497.016 | 0.716927 | 134.762ms | 400000 | 30 | 9.08344e+08 | 767520 | 6.11411 | 1(Win) |
| std::from_chars | 449.049 | 0.42819 | 152.416ms | 400000 | 30 | 3.96943e+08 | 849507 | 6.76772 | 2(Loss) |
| strtoll/strtoull | 232.862 | 0.223705 | 294.257ms | 400000 | 30 | 4.02896e+08 | 1.63818e+06 | 13.0516 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 854.037 | 2.07405 | 0.0954ms | 400 | 30 | 2574.71 | 446.667 | 3.356 | 1(Win) |
| std::from_chars | 805.922 | 1.73488 | 0.1158ms | 400 | 30 | 2022.99 | 473.333 | 3.64583 | 2(Loss) |
| strtoll/strtoull | 271.187 | 0.329293 | 0.2728ms | 400 | 30 | 643.678 | 1406.67 | 11.0724 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 914.065 | 0.196767 | 0.793ms | 4000 | 30 | 2022.99 | 4173.33 | 3.3082 | 1(Win) |
| std::from_chars | 634.725 | 0.201033 | 1.1285ms | 4000 | 30 | 4379.31 | 6010 | 4.76245 | 2(Loss) |
| strtoll/strtoull | 267.136 | 0.0619108 | 6.0802ms | 4000 | 30 | 2344.83 | 14280 | 11.3766 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 807.343 | 1.05955 | 8.6399ms | 40000 | 30 | 7.51914e+06 | 47250 | 3.76169 | 1(Win) |
| std::from_chars | 619.806 | 1.44812 | 11.0159ms | 40000 | 30 | 2.38309e+07 | 61546.7 | 4.90099 | 2(Loss) |
| strtoll/strtoull | 264.225 | 0.494025 | 26.1173ms | 40000 | 30 | 1.52613e+07 | 144373 | 11.5012 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 694.044 | 0.248801 | 99.082ms | 400000 | 30 | 5.61009e+07 | 549633 | 4.3785 | 1(Win) |
| std::from_chars | 623.554 | 0.29462 | 111.367ms | 400000 | 30 | 9.74582e+07 | 611767 | 4.87366 | 2(Loss) |
| strtoll/strtoull | 263.59 | 0.216223 | 261.177ms | 400000 | 30 | 2.93757e+08 | 1.44721e+06 | 11.5302 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1035.66 | 1.21474 | 0.1493ms | 800 | 30 | 2402.3 | 736.667 | 2.8235 | 1(Win) |
| std::from_chars | 542.374 | 0.329293 | 0.2828ms | 800 | 30 | 643.678 | 1406.67 | 5.49988 | 2(Loss) |
| strtoll/strtoull | 355.959 | 0.429325 | 0.9833ms | 800 | 30 | 2540.23 | 2143.33 | 8.46096 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1062.59 | 1.02237 | 1.3346ms | 8000 | 30 | 161655 | 7180 | 2.84945 | 1(Win) |
| std::from_chars | 499.088 | 1.74286 | 2.7338ms | 8000 | 30 | 2.12947e+06 | 15286.7 | 6.08236 | 2(Loss) |
| strtoll/strtoull | 317.98 | 1.17849 | 4.4491ms | 8000 | 30 | 2.39857e+06 | 23993.3 | 9.54913 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 854.77 | 1.95142 | 15.7442ms | 80000 | 30 | 9.10136e+07 | 89256.7 | 3.55441 | 1(Win) |
| std::from_chars | 471.591 | 1.02699 | 28.9632ms | 80000 | 30 | 8.28134e+07 | 161780 | 6.44415 | 2(Loss) |
| strtoll/strtoull | 299.572 | 1.09653 | 45.406ms | 80000 | 30 | 2.33961e+08 | 254677 | 10.1451 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 754.857 | 0.267168 | 181.868ms | 800000 | 30 | 2.18746e+08 | 1.01071e+06 | 4.02577 | 1(Win) |
| std::from_chars | 471.727 | 0.155884 | 291.156ms | 800000 | 30 | 1.90689e+08 | 1.61733e+06 | 6.44266 | 2(Loss) |
| strtoll/strtoull | 305.751 | 0.425522 | 445.556ms | 800000 | 30 | 3.3823e+09 | 2.4953e+06 | 9.94045 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1021.79 | 1.24073 | 0.1527ms | 800 | 30 | 2574.71 | 746.667 | 2.87458 | 1(Win) |
| std::from_chars | 625.36 | 0.608837 | 0.2519ms | 800 | 30 | 1655.17 | 1220 | 4.84642 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1038.01 | 0.156423 | 3.126ms | 8000 | 30 | 3965.52 | 7350 | 2.91884 | 1(Win) |
| std::from_chars | 619.604 | 0.327485 | 2.2979ms | 8000 | 30 | 48781.6 | 12313.3 | 4.90166 | 2(Loss) |
| strtoll/strtoull | 355.076 | 1.89801 | 3.8264ms | 8000 | 30 | 4.98947e+06 | 21486.7 | 8.54865 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1018.2 | 0.678007 | 13.5413ms | 80000 | 30 | 7.74286e+06 | 74930 | 2.98369 | 1(Win) |
| std::from_chars | 612.983 | 0.302775 | 22.3865ms | 80000 | 30 | 4.26033e+06 | 124463 | 4.95736 | 2(Loss) |
| strtoll/strtoull | 358.322 | 0.777342 | 38.0521ms | 80000 | 30 | 8.21823e+07 | 212920 | 8.48078 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 966.697 | 0.258526 | 143.477ms | 800000 | 30 | 1.2489e+08 | 789223 | 3.1436 | 1(Win) |
| std::from_chars | 604.403 | 0.168048 | 227.654ms | 800000 | 30 | 1.34994e+08 | 1.2623e+06 | 5.02788 | 2(Loss) |
| strtoll/strtoull | 352.72 | 0.148996 | 390.154ms | 800000 | 30 | 3.11596e+08 | 2.16302e+06 | 8.61642 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1054.76 | 1.08581 | 0.1484ms | 800 | 30 | 1850.57 | 723.333 | 2.80896 | 1(Win) |
| std::from_chars | 613.624 | 0.740096 | 0.257ms | 800 | 30 | 2540.23 | 1243.33 | 4.87979 | 2(Loss) |
| strtoll/strtoull | 375.832 | 0.419194 | 0.385ms | 800 | 30 | 2172.41 | 2030 | 7.97363 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1086.29 | 0.131018 | 1.3776ms | 8000 | 30 | 2540.23 | 7023.33 | 2.78736 | 1(Win) |
| std::from_chars | 476.837 | 2.33104 | 2.9025ms | 8000 | 30 | 4.1731e+06 | 16000 | 6.36415 | 2(Loss) |
| strtoll/strtoull | 368.748 | 0.30511 | 3.7826ms | 8000 | 30 | 119552 | 20690 | 8.23528 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1029.65 | 0.690268 | 13.518ms | 80000 | 30 | 7.84792e+06 | 74096.7 | 2.95069 | 1(Win) |
| std::from_chars | 593.789 | 1.09556 | 23.0758ms | 80000 | 30 | 5.94446e+07 | 128487 | 5.11706 | 2(Loss) |
| strtoll/strtoull | 360.194 | 1.10282 | 38.1757ms | 80000 | 30 | 1.63694e+08 | 211813 | 8.43709 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 984.946 | 0.279785 | 139.596ms | 800000 | 30 | 1.40905e+08 | 774600 | 3.08505 | 1(Win) |
| std::from_chars | 590.331 | 0.555838 | 232.654ms | 800000 | 30 | 1.54813e+09 | 1.29239e+06 | 5.14802 | 2(Loss) |
| strtoll/strtoull | 358.882 | 0.174043 | 382.719ms | 800000 | 30 | 4.10688e+08 | 2.12588e+06 | 8.46858 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1031 | 1.22935 | 0.16ms | 800 | 30 | 2482.76 | 740 | 2.85042 | 1(Win) |
| std::from_chars | 760.405 | 0.332226 | 0.2211ms | 800 | 30 | 333.333 | 1003.33 | 3.9535 | 2(Loss) |
| strtoll/strtoull | 343.666 | 0.334586 | 0.4268ms | 800 | 30 | 1655.17 | 2220 | 8.78617 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1047.03 | 0.0866298 | 3.1631ms | 8000 | 30 | 1195.4 | 7286.67 | 2.89379 | 1(Win) |
| std::from_chars | 680.386 | 0.152578 | 2.0046ms | 8000 | 30 | 8781.61 | 11213.3 | 4.4604 | 2(Loss) |
| strtoll/strtoull | 322.142 | 0.25454 | 4.3253ms | 8000 | 30 | 109023 | 23683.3 | 9.42499 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 911.045 | 0.935724 | 15.2685ms | 80000 | 30 | 1.84212e+07 | 83743.3 | 3.33467 | 1(Win) |
| std::from_chars | 704.534 | 1.14729 | 19.795ms | 80000 | 30 | 4.63064e+07 | 108290 | 4.31287 | 2(Loss) |
| strtoll/strtoull | 314.079 | 0.341484 | 43.932ms | 80000 | 30 | 2.06426e+07 | 242913 | 9.67602 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 743.294 | 0.185629 | 184.845ms | 800000 | 30 | 1.08911e+08 | 1.02643e+06 | 4.08826 | 1(Win) |
| std::from_chars | 502.714 | 0.488981 | 272.772ms | 800000 | 30 | 1.65212e+09 | 1.51764e+06 | 6.04521 | 2(Loss) |
| strtoll/strtoull | 311.385 | 0.124815 | 441.959ms | 800000 | 30 | 2.8057e+08 | 2.45015e+06 | 9.76036 | 3(Loss) |
