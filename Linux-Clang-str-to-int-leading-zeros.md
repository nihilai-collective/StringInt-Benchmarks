# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 268.363 | 0.287316 | 0.098367ms | 100 | 30 | 31.2747 | 355.367 | 1(Win) |
| std::from_chars | 107.295 | 0.0747618 | 0.188666ms | 100 | 30 | 13.2471 | 888.833 | 2(Loss) |
| strtoll/strtoull | 78.5434 | 0.478496 | 0.2911ms | 100 | 30 | 1012.65 | 1214.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 304.572 | 0.0472805 | 0.862782ms | 1000 | 30 | 65.7517 | 3131.2 | 1(Win) |
| std::from_chars | 121.299 | 0.11279 | 1.662ms | 1000 | 30 | 2359.11 | 7862.17 | 2(Loss) |
| strtoll/strtoull | 50.2287 | 0.252467 | 3.45755ms | 1000 | 30 | 68933.1 | 18986.6 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 67.3717 | 2.3964 | 58.8053ms | 10000 | 30 | 3.45212e+08 | 141554 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 65.9372 | 1.40832 | 26.4183ms | 10000 | 30 | 1.24469e+08 | 144634 | 1(Tie) |
| strtoll/strtoull | 45.2988 | 1.09568 | 91.5064ms | 10000 | 30 | 1.5963e+08 | 210530 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 61.9302 | 1.70886 | 278.925ms | 100000 | 30 | 2.07744e+10 | 1.53992e+06 | 1(Win) |
| vn::from_chars | 57.1797 | 1.42192 | 296.087ms | 100000 | 30 | 1.68728e+10 | 1.66785e+06 | 2(Loss) |
| strtoll/strtoull | 43.6404 | 2.35416 | 396.127ms | 100000 | 30 | 7.93987e+10 | 2.1853e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 166.639 | 0.107338 | 0.155184ms | 100 | 30 | 11.3207 | 572.3 | 1(Win) |
| std::from_chars | 115.382 | 0.0959752 | 0.181994ms | 100 | 30 | 18.8782 | 826.533 | 2(Loss) |
| strtoll/strtoull | 72.5172 | 0.637388 | 0.288075ms | 100 | 30 | 2107.89 | 1315.1 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 304.358 | 1.66632 | 0.614651ms | 1000 | 30 | 81783.9 | 3133.4 | 1(Win) |
| std::from_chars | 124.366 | 0.153195 | 1.45516ms | 1000 | 30 | 4140.08 | 7668.3 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 86.3472 | 2.30349 | 106.454ms | 10000 | 48 | 3.10684e+08 | 110446 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 83.1621 | 0.549025 | 50.6429ms | 10000 | 30 | 1.1892e+07 | 114677 | 1(Tie) |
| strtoll/strtoull | 49.1012 | 2.36452 | 35.0908ms | 10000 | 30 | 6.32738e+08 | 194226 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 76.6585 | 2.15535 | 223.72ms | 100000 | 30 | 2.15694e+10 | 1.24406e+06 | 1(Win) |
| vn::from_chars | 70.9634 | 1.49327 | 1224.55ms | 100000 | 48 | 1.93309e+10 | 1.3439e+06 | 2(Loss) |
| strtoll/strtoull | 49.768 | 1.59471 | 346.393ms | 100000 | 30 | 2.80145e+10 | 1.91624e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.204 | 0.253049 | 0.083781ms | 100 | 30 | 17.0402 | 297.833 | 1(Win) |
| std::from_chars | 128.58 | 0.216933 | 0.161538ms | 100 | 30 | 77.6655 | 741.7 | 2(Loss) |
| strtoll/strtoull | 74.2063 | 0.397829 | 0.296692ms | 100 | 30 | 784.213 | 1285.17 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 358.089 | 0.0563494 | 0.527842ms | 1000 | 30 | 67.5644 | 2663.23 | 1(Win) |
| std::from_chars | 117.377 | 0.088465 | 1.70155ms | 1000 | 30 | 1549.89 | 8124.9 | 2(Loss) |
| strtoll/strtoull | 59.917 | 0.204021 | 3.16781ms | 1000 | 30 | 31635.4 | 15916.6 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 101.552 | 1.30247 | 19.5845ms | 10000 | 30 | 4.48824e+07 | 93909.7 | 1(Win) |
| std::from_chars | 84.4307 | 0.708597 | 20.644ms | 10000 | 30 | 1.92185e+07 | 112954 | 2(Loss) |
| strtoll/strtoull | 53.2938 | 0.655119 | 34.3238ms | 10000 | 30 | 4.12295e+07 | 178947 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 76.5362 | 1.94542 | 227.664ms | 100000 | 30 | 1.76284e+10 | 1.24604e+06 | 1(Win) |
| vn::from_chars | 70.4715 | 2.35198 | 240.549ms | 100000 | 30 | 3.03921e+10 | 1.35328e+06 | 2(Loss) |
| strtoll/strtoull | 50.7602 | 1.66617 | 350.117ms | 100000 | 30 | 2.93978e+10 | 1.87878e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 277.581 | 0.302767 | 0.090079ms | 100 | 30 | 32.4609 | 343.567 | 1(Win) |
| std::from_chars | 122.391 | 0.0689057 | 0.17062ms | 100 | 30 | 8.64828 | 779.2 | 2(Loss) |
| strtoll/strtoull | 57.6808 | 0.595194 | 0.337461ms | 100 | 30 | 2905.21 | 1653.37 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.993 | 0.0551165 | 0.607538ms | 1000 | 30 | 86.254 | 3076.43 | 1(Win) |
| std::from_chars | 140.96 | 0.0899849 | 2.92421ms | 1000 | 30 | 1111.91 | 6765.57 | 2(Loss) |
| strtoll/strtoull | 51.2239 | 1.94206 | 3.38838ms | 1000 | 30 | 3.92195e+06 | 18617.8 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 86.1125 | 0.687154 | 20.6948ms | 10000 | 30 | 1.73739e+07 | 110747 | 1(Win) |
| vn::from_chars | 83.8245 | 0.695748 | 54.2399ms | 10000 | 30 | 1.87968e+07 | 113770 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 74.8441 | 1.77551 | 230.492ms | 100000 | 30 | 1.53551e+10 | 1.27421e+06 | 1(Win) |
| vn::from_chars | 66.2819 | 2.30239 | 260.638ms | 100000 | 30 | 3.29222e+10 | 1.43881e+06 | 2(Loss) |
| strtoll/strtoull | 47.0112 | 2.11854 | 362.3ms | 100000 | 30 | 5.54104e+10 | 2.02861e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 328.005 | 0.127669 | 0.135902ms | 200 | 30 | 16.5345 | 581.5 | 1(Win) |
| std::from_chars | 215.171 | 0.0710779 | 0.186419ms | 200 | 30 | 11.9092 | 886.433 | 2(Loss) |
| strtoll/strtoull | 143.821 | 0.341057 | 0.28335ms | 200 | 30 | 613.752 | 1326.2 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 378.856 | 0.123578 | 1.00392ms | 2000 | 30 | 1161.22 | 5034.5 | 1(Win) |
| std::from_chars | 189.6 | 2.14747 | 1.81204ms | 2000 | 30 | 1.40011e+06 | 10059.9 | 2(Loss) |
| strtoll/strtoull | 99.8896 | 0.221873 | 3.83825ms | 2000 | 30 | 53845.6 | 19094.6 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 146.245 | 0.302742 | 26.5942ms | 20000 | 30 | 4.67698e+06 | 130421 | 1(Win) |
| std::from_chars | 112.728 | 1.34732 | 29.1321ms | 20000 | 30 | 1.55904e+08 | 169198 | 2(Loss) |
| strtoll/strtoull | 88.6688 | 0.834354 | 42.2759ms | 20000 | 30 | 9.66363e+07 | 215109 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 116.931 | 1.89021 | 293.331ms | 200000 | 30 | 2.85197e+10 | 1.63117e+06 | 1(Win) |
| strtoll/strtoull | 82.9823 | 1.61706 | 417.636ms | 200000 | 30 | 4.14442e+10 | 2.2985e+06 | 2(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.766 | 0.115063 | 0.122609ms | 200 | 30 | 10.9195 | 524.333 | 1(Win) |
| std::from_chars | 196.566 | 0.0589505 | 0.203081ms | 200 | 30 | 9.81609 | 970.333 | 2(Loss) |
| strtoll/strtoull | 119.721 | 0.474844 | 0.333151ms | 200 | 30 | 1716.9 | 1593.17 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 379.031 | 0.798447 | 0.995247ms | 2000 | 30 | 48431 | 5032.17 | 1(Win) |
| std::from_chars | 193.173 | 0.329749 | 1.87803ms | 2000 | 30 | 31801.9 | 9873.77 | 2(Loss) |
| strtoll/strtoull | 105.099 | 1.41694 | 3.34474ms | 2000 | 30 | 1.98373e+06 | 18148 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 187.717 | 1.09989 | 21.3451ms | 20000 | 30 | 3.74688e+07 | 101607 | 1(Win) |
| std::from_chars | 146.389 | 0.820349 | 25.0707ms | 20000 | 30 | 3.42739e+07 | 130293 | 2(Loss) |
| strtoll/strtoull | 93.8059 | 2.20861 | 36.8594ms | 20000 | 30 | 6.05006e+08 | 203329 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 143.627 | 2.40195 | 240.827ms | 200000 | 30 | 3.05234e+10 | 1.32798e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 138.463 | 2.05323 | 1215.55ms | 200000 | 48 | 3.83983e+10 | 1.37752e+06 | 1(Tie) |
| strtoll/strtoull | 95.2587 | 1.69741 | 366.604ms | 200000 | 30 | 3.46534e+10 | 2.00228e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.258 | 0.138766 | 0.227577ms | 200 | 30 | 15.9264 | 525.067 | 1(Win) |
| std::from_chars | 203.183 | 0.0559349 | 0.200011ms | 200 | 30 | 8.27126 | 938.733 | 2(Loss) |
| strtoll/strtoull | 117.784 | 0.516103 | 0.315486ms | 200 | 30 | 2095.48 | 1619.37 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 382.283 | 0.126904 | 0.976433ms | 2000 | 30 | 1202.72 | 4989.37 | 1(Win) |
| std::from_chars | 205.146 | 0.063814 | 4.04185ms | 2000 | 30 | 1056.05 | 9297.5 | 2(Loss) |
| strtoll/strtoull | 103.917 | 1.66551 | 3.3944ms | 2000 | 30 | 2.8035e+06 | 18354.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 199.56 | 0.791966 | 19.5128ms | 20000 | 30 | 1.71889e+07 | 95577.9 | 1(Win) |
| std::from_chars | 150.607 | 0.501214 | 24.2967ms | 20000 | 30 | 1.20876e+07 | 126644 | 2(Loss) |
| strtoll/strtoull | 93.1397 | 2.01853 | 37.0475ms | 20000 | 30 | 5.12605e+08 | 204784 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 144.122 | 1.32094 | 1227.94ms | 200000 | 48 | 1.46693e+10 | 1.32343e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 141.723 | 2.314 | 253.899ms | 200000 | 30 | 2.90956e+10 | 1.34583e+06 | 1(Tie) |
| strtoll/strtoull | 95.9349 | 1.63087 | 859.55ms | 200000 | 30 | 3.15404e+10 | 1.98817e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 365.696 | 0.123568 | 0.132444ms | 200 | 30 | 12.4609 | 521.567 | 1(Win) |
| std::from_chars | 205.548 | 0.0834648 | 0.193286ms | 200 | 30 | 17.9954 | 927.933 | 2(Loss) |
| strtoll/strtoull | 110.719 | 0.670171 | 0.354974ms | 200 | 30 | 3998.63 | 1722.7 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 370.016 | 0.150687 | 1.01953ms | 2000 | 30 | 1810.05 | 5154.77 | 1(Win) |
| std::from_chars | 223.076 | 0.118195 | 3.79754ms | 2000 | 30 | 3063.89 | 8550.2 | 2(Loss) |
| strtoll/strtoull | 96.5397 | 2.09499 | 3.55893ms | 2000 | 30 | 5.13965e+06 | 19757.1 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.61 | 2.46817 | 16.8147ms | 20000 | 30 | 1.3661e+08 | 86458 | 1(Win) |
| std::from_chars | 126.176 | 2.43867 | 24.7241ms | 20000 | 30 | 4.07693e+08 | 151165 | 2(Loss) |
| strtoll/strtoull | 93.1696 | 0.57151 | 38.7855ms | 20000 | 30 | 4.10658e+07 | 204718 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 154.963 | 1.3462 | 225.662ms | 200000 | 30 | 8.23663e+09 | 1.23085e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 154.501 | 1.73227 | 225.857ms | 200000 | 30 | 1.37198e+10 | 1.23452e+06 | 1(Tie) |
| strtoll/strtoull | 89.5348 | 2.30965 | 386.775ms | 200000 | 30 | 7.26256e+10 | 2.13029e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 540.453 | 0.0963255 | 0.159511ms | 400 | 30 | 13.8678 | 705.833 | 1(Win) |
| std::from_chars | 302.682 | 0.09281 | 0.58308ms | 400 | 30 | 41.0448 | 1260.3 | 2(Loss) |
| strtoll/strtoull | 204.761 | 0.61885 | 0.406577ms | 400 | 30 | 3987.66 | 1863 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 540.124 | 0.136216 | 1.32584ms | 4000 | 30 | 2776.59 | 7062.63 | 1(Win) |
| std::from_chars | 215.765 | 0.254591 | 3.23504ms | 4000 | 30 | 60781 | 17679.9 | 2(Loss) |
| strtoll/strtoull | 161.979 | 0.122184 | 4.40492ms | 4000 | 30 | 24840.4 | 23550.6 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 257.268 | 1.22147 | 27.3359ms | 40000 | 30 | 9.84087e+07 | 148277 | 1(Win) |
| std::from_chars | 218.492 | 0.351432 | 32.6814ms | 40000 | 30 | 1.12942e+07 | 174592 | 2(Loss) |
| strtoll/strtoull | 155.861 | 1.16061 | 46.8286ms | 40000 | 30 | 2.42071e+08 | 244750 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 223.714 | 1.59929 | 308.999ms | 400000 | 30 | 2.23105e+10 | 1.70516e+06 | 1(Win) |
| std::from_chars | 202.517 | 2.21228 | 341.607ms | 400000 | 30 | 5.20954e+10 | 1.88364e+06 | 2(Loss) |
| strtoll/strtoull | 147.344 | 1.64571 | 474.815ms | 400000 | 30 | 5.44604e+10 | 2.58897e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 525.055 | 0.110966 | 0.159905ms | 400 | 30 | 19.4989 | 726.533 | 1(Win) |
| std::from_chars | 282.291 | 0.0754609 | 0.268947ms | 400 | 30 | 31.1954 | 1351.33 | 2(Loss) |
| strtoll/strtoull | 164.54 | 0.0884596 | 0.449946ms | 400 | 30 | 126.179 | 2318.4 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 481.755 | 0.210471 | 1.48258ms | 4000 | 30 | 8332.44 | 7918.33 | 1(Win) |
| std::from_chars | 240.429 | 2.15988 | 7.09079ms | 4000 | 30 | 3.52312e+06 | 15866.2 | 2(Loss) |
| strtoll/strtoull | 177.637 | 1.12345 | 9.42495ms | 4000 | 30 | 1.74614e+06 | 21474.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 301.918 | 0.602765 | 23.6929ms | 40000 | 30 | 1.74004e+07 | 126349 | 1(Win) |
| std::from_chars | 251.655 | 0.803058 | 28.292ms | 40000 | 30 | 4.44553e+07 | 151584 | 2(Loss) |
| strtoll/strtoull | 172.945 | 0.833136 | 96.936ms | 40000 | 30 | 1.01311e+08 | 220572 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 267.871 | 2.31253 | 258.276ms | 400000 | 30 | 3.2536e+10 | 1.42408e+06 | 1(Win) |
| std::from_chars | 239.819 | 1.91025 | 289.247ms | 400000 | 30 | 2.76984e+10 | 1.59065e+06 | 2(Loss) |
| strtoll/strtoull | 161.356 | 1.84762 | 420.611ms | 400000 | 30 | 5.72396e+10 | 2.36415e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 514.156 | 0.107736 | 0.160926ms | 400 | 30 | 19.1678 | 741.933 | 1(Win) |
| std::from_chars | 303.895 | 0.0778052 | 0.258468ms | 400 | 30 | 28.6161 | 1255.27 | 2(Loss) |
| strtoll/strtoull | 197.054 | 0.276206 | 0.384599ms | 400 | 30 | 857.706 | 1935.87 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 527.295 | 0.0850741 | 1.34764ms | 4000 | 30 | 1136.4 | 7234.47 | 1(Win) |
| std::from_chars | 217.682 | 0.381153 | 3.18946ms | 4000 | 30 | 133843 | 17524.2 | 2(Loss) |
| strtoll/strtoull | 183.865 | 0.180495 | 3.9509ms | 4000 | 30 | 42069.9 | 20747.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 339.283 | 0.456129 | 50.797ms | 40000 | 30 | 7.89032e+06 | 112434 | 1(Win) |
| std::from_chars | 248.992 | 0.819693 | 27.8118ms | 40000 | 30 | 4.7312e+07 | 153205 | 2(Loss) |
| strtoll/strtoull | 170.166 | 0.911996 | 95.5547ms | 40000 | 30 | 1.25395e+08 | 224175 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 269.365 | 2.32341 | 265.698ms | 400000 | 30 | 3.24798e+10 | 1.41618e+06 | 1(Win) |
| std::from_chars | 236.995 | 2.35579 | 285.716ms | 400000 | 30 | 4.31357e+10 | 1.60961e+06 | 2(Loss) |
| strtoll/strtoull | 161.774 | 2.42369 | 969.297ms | 400000 | 30 | 9.799e+10 | 2.35805e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 431.511 | 0.105235 | 0.641906ms | 400 | 30 | 25.9644 | 884.033 | 1(Win) |
| std::from_chars | 312.245 | 0.0566212 | 0.247896ms | 400 | 30 | 14.3552 | 1221.7 | 2(Loss) |
| strtoll/strtoull | 148.845 | 0.0565199 | 0.499646ms | 400 | 30 | 62.9471 | 2562.87 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 263.593 | 2.0789 | 7.74287ms | 4000 | 30 | 2.71545e+06 | 14471.9 | 1(Win) |
| strtoll/strtoull | 170.483 | 0.212147 | 4.08329ms | 4000 | 30 | 67600.9 | 22375.8 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.002 | 1.23383 | 95.9742ms | 40000 | 48 | 6.91986e+07 | 97313.3 | 1(Win) |
| strtoll/strtoull | 174.174 | 0.664544 | 41.265ms | 40000 | 30 | 6.35509e+07 | 219016 | 2(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 293.764 | 2.05511 | 1162.45ms | 400000 | 48 | 3.4185e+10 | 1.29856e+06 | 1(Win) |
| std::from_chars | 238.847 | 1.83728 | 677.31ms | 400000 | 30 | 2.58318e+10 | 1.59713e+06 | 2(Loss) |
| strtoll/strtoull | 163.014 | 1.87065 | 2121.42ms | 400000 | 48 | 9.19807e+10 | 2.3401e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 718.286 | 0.0855382 | 0.301262ms | 800 | 30 | 24.7644 | 1062.17 | 1(Win) |
| std::from_chars | 496.544 | 0.0630115 | 0.301454ms | 800 | 30 | 28.1207 | 1536.5 | 2(Loss) |
| strtoll/strtoull | 278.053 | 0.194384 | 1.21898ms | 800 | 30 | 853.43 | 2743.87 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 724.869 | 0.440938 | 2.03367ms | 8000 | 30 | 64615.6 | 10525.2 | 1(Win) |
| std::from_chars | 401.315 | 0.0687433 | 9.18405ms | 8000 | 30 | 5123.79 | 19011 | 2(Loss) |
| strtoll/strtoull | 273.004 | 0.0758256 | 5.12471ms | 8000 | 30 | 13470.8 | 27946.1 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 475.226 | 1.24925 | 31.1019ms | 80000 | 30 | 1.2067e+08 | 160542 | 1(Win) |
| std::from_chars | 358.598 | 0.732299 | 96.7496ms | 80000 | 30 | 7.28219e+07 | 212756 | 2(Loss) |
| strtoll/strtoull | 263.79 | 0.376294 | 54.8459ms | 80000 | 30 | 3.55336e+07 | 289222 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 416.052 | 1.54933 | 1690.12ms | 800000 | 48 | 3.87449e+10 | 1.83376e+06 | 1(Win) |
| std::from_chars | 339.112 | 1.57178 | 412.839ms | 800000 | 30 | 3.75144e+10 | 2.24981e+06 | 2(Loss) |
| strtoll/strtoull | 245.104 | 2.08401 | 564.468ms | 800000 | 30 | 1.26241e+11 | 3.11272e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 695.838 | 0.0784309 | 0.674437ms | 800 | 30 | 22.1851 | 1096.43 | 1(Win) |
| std::from_chars | 458.066 | 0.0468335 | 0.326216ms | 800 | 30 | 18.254 | 1665.57 | 2(Loss) |
| strtoll/strtoull | 288.81 | 0.235568 | 0.505039ms | 800 | 30 | 1161.75 | 2641.67 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 709.436 | 0.300807 | 2.01063ms | 8000 | 30 | 31394.4 | 10754.2 | 1(Win) |
| std::from_chars | 410.019 | 0.0184568 | 3.43825ms | 8000 | 30 | 353.84 | 18607.4 | 2(Loss) |
| strtoll/strtoull | 288.693 | 0.694291 | 4.77806ms | 8000 | 30 | 1.00998e+06 | 26427.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 558.517 | 0.665241 | 27.3146ms | 80000 | 30 | 2.47735e+07 | 136601 | 1(Win) |
| strtoll/strtoull | 276.137 | 0.908838 | 52.257ms | 80000 | 30 | 1.89158e+08 | 276290 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 504.618 | 2.03777 | 272.29ms | 800000 | 30 | 2.84765e+10 | 1.51192e+06 | 1(Win) |
| std::from_chars | 387.23 | 2.25467 | 352.413ms | 800000 | 30 | 5.92013e+10 | 1.97025e+06 | 2(Loss) |
| strtoll/strtoull | 264.092 | 1.63022 | 516.553ms | 800000 | 30 | 6.65405e+10 | 2.88892e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 687.436 | 0.101692 | 0.230501ms | 800 | 30 | 38.2126 | 1109.83 | 1(Win) |
| std::from_chars | 469.338 | 0.054839 | 0.360528ms | 800 | 30 | 23.8402 | 1625.57 | 2(Loss) |
| strtoll/strtoull | 294.632 | 0.0735465 | 0.508089ms | 800 | 30 | 108.809 | 2589.47 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.01 | 0.100415 | 1.98295ms | 8000 | 30 | 3387.02 | 10581.5 | 1(Win) |
| std::from_chars | 393.435 | 1.60668 | 8.55435ms | 8000 | 30 | 2.91216e+06 | 19391.7 | 2(Loss) |
| strtoll/strtoull | 257.351 | 0.034667 | 5.91502ms | 8000 | 30 | 3168.71 | 29645.9 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 527.117 | 0.373109 | 65.626ms | 80000 | 30 | 8.74899e+06 | 144738 | 1(Win) |
| std::from_chars | 420.803 | 0.340954 | 34.6447ms | 80000 | 30 | 1.1464e+07 | 181306 | 2(Loss) |
| strtoll/strtoull | 283.763 | 1.64674 | 52.0388ms | 80000 | 30 | 5.88083e+08 | 268865 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 459.679 | 2.43176 | 296.426ms | 800000 | 30 | 4.88689e+10 | 1.65972e+06 | 1(Win) |
| std::from_chars | 387.365 | 2.43998 | 832.279ms | 800000 | 30 | 6.9284e+10 | 1.96956e+06 | 2(Loss) |
| strtoll/strtoull | 275.182 | 1.97822 | 508.22ms | 800000 | 30 | 9.02424e+10 | 2.77249e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 688.47 | 0.0950958 | 0.229299ms | 800 | 30 | 33.3161 | 1108.17 | 1(Win) |
| strtoll/strtoull | 285.506 | 0.0826264 | 1.1977ms | 800 | 30 | 146.254 | 2672.23 | 2(Loss) |
| std::from_chars | 260.365 | 0.026074 | 0.722291ms | 800 | 30 | 17.5126 | 2930.27 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 681.614 | 2.03657 | 2.31817ms | 8000 | 30 | 1.55892e+06 | 11193.1 | 1(Win) |
| std::from_chars | 413.397 | 0.960015 | 3.38202ms | 8000 | 30 | 941721 | 18455.4 | 2(Loss) |
| strtoll/strtoull | 276.373 | 0.888137 | 5.01106ms | 8000 | 30 | 1.80331e+06 | 27605.5 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 481.758 | 0.640808 | 30.0139ms | 80000 | 30 | 3.08958e+07 | 158366 | 1(Win) |
| std::from_chars | 397.302 | 0.407054 | 36.0537ms | 80000 | 30 | 1.833e+07 | 192030 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.217 | 1.72257 | 322.57ms | 800000 | 30 | 2.77364e+10 | 1.76517e+06 | 1(Win) |
| std::from_chars | 332.544 | 1.60602 | 414.941ms | 800000 | 30 | 4.07292e+10 | 2.29425e+06 | 2(Loss) |
| strtoll/strtoull | 259.822 | 2.14661 | 2703.32ms | 800000 | 48 | 1.90711e+11 | 2.93639e+06 | 3(Loss) |
