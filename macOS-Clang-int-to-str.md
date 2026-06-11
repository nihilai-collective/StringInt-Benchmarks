# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1319.72 | 1.81111 | 0.072709ms | 271 | 30 | 377.385 | 195.833 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1292.23 | 1.84671 | 0.083875ms | 271 | 30 | 409.241 | 200 | 1(Tie) |
| fmt::format_to | 1114.31 | 1.65431 | 0.150292ms | 271 | 30 | 441.651 | 231.933 | 3(Loss) |
| std::to_chars | 939.347 | 1.56662 | 1.61517ms | 271 | 30 | 557.361 | 275.133 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1498.82 | 0.209793 | 0.341916ms | 2665 | 30 | 379.666 | 1695.7 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1493.82 | 0.206155 | 0.465791ms | 2665 | 30 | 369.068 | 1701.37 | 1(Tie) |
| fmt::format_to | 1212.66 | 0.497131 | 0.433083ms | 2665 | 30 | 3256.7 | 2095.83 | 3(Loss) |
| std::to_chars | 1000.5 | 0.146298 | 1.10696ms | 2665 | 30 | 414.34 | 2540.27 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 746.385 | 0.139051 | 5.54492ms | 26475 | 30 | 66376.7 | 33827.7 | 1(Win) |
| vn::to_chars | 713.629 | 0.494048 | 6.84496ms | 26475 | 30 | 916613 | 35380.5 | 2(Loss) |
| jeaiii::to_text | 648.646 | 0.411658 | 7.12079ms | 26475 | 30 | 770286 | 38925 | 3(Loss) |
| std::to_chars | 605.419 | 0.87625 | 13.3069ms | 26475 | 30 | 4.00625e+06 | 41704.2 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 412.698 | 0.169844 | 111.585ms | 264956 | 30 | 3.24419e+07 | 612268 | 1(Win) |
| vn::to_chars | 401.883 | 0.264675 | 113.604ms | 264956 | 30 | 8.30801e+07 | 628744 | 2(Loss) |
| jeaiii::to_text | 382.251 | 0.676894 | 117.576ms | 264956 | 30 | 6.00637e+08 | 661036 | 3(Loss) |
| fmt::format_to | 374.864 | 0.445888 | 121.287ms | 264956 | 30 | 2.71003e+08 | 674062 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1573.59 | 2.00173 | 0.065333ms | 314 | 30 | 435.321 | 190.3 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1562.37 | 1.97152 | 0.80725ms | 314 | 30 | 428.368 | 191.667 | 1(Tie) |
| std::to_chars | 1423.48 | 0.649659 | 0.848042ms | 314 | 30 | 56.0333 | 210.367 | 3(Loss) |
| fmt::format_to | 1190.83 | 2.16268 | 0.084167ms | 314 | 30 | 887.292 | 251.467 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1754.08 | 0.19365 | 1.07625ms | 3132 | 30 | 326.213 | 1702.83 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1751.3 | 0.232564 | 0.651917ms | 3132 | 30 | 471.982 | 1705.53 | 1(Tie) |
| std::to_chars | 1458.97 | 0.409596 | 0.9185ms | 3132 | 30 | 2109.51 | 2047.27 | 3(Loss) |
| fmt::format_to | 1430.83 | 0.490492 | 0.750125ms | 3132 | 30 | 3145.22 | 2087.53 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1656.16 | 1.7792 | 8.50796ms | 31447 | 30 | 3.11405e+06 | 18108.3 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1599.71 | 0.340398 | 3.46263ms | 31447 | 30 | 122172 | 18747.3 | 1(Tie) |
| std::to_chars **STATISTICAL TIE** | 1296.48 | 0.374389 | 4.51583ms | 31447 | 30 | 225005 | 23131.9 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1292.75 | 0.12212 | 4.37121ms | 31447 | 30 | 24078 | 23198.7 | 3(Tie) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 895.844 | 0.10678 | 60.5597ms | 314425 | 30 | 3.8324e+06 | 334722 | 1(Win) |
| vn::to_chars | 829.683 | 0.331062 | 65.4442ms | 314425 | 30 | 4.29487e+07 | 361414 | 2(Loss) |
| jeaiii::to_text | 803.445 | 0.200939 | 67.5249ms | 314425 | 30 | 1.68723e+07 | 373217 | 3(Loss) |
| fmt::format_to | 745.848 | 0.193697 | 72.3387ms | 314425 | 30 | 1.81928e+07 | 402038 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1132.32 | 2.06101 | 0.334875ms | 221 | 30 | 441.499 | 186.133 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1076.41 | 2.0812 | 0.128375ms | 221 | 30 | 498.166 | 195.8 | 1(Tie) |
| fmt::format_to | 925.206 | 1.69304 | 0.350458ms | 221 | 30 | 446.234 | 227.8 | 3(Loss) |
| std::to_chars | 743.866 | 1.09268 | 0.332375ms | 221 | 30 | 287.54 | 283.333 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1230.12 | 0.227938 | 0.618584ms | 2173 | 30 | 442.368 | 1684.67 | 1(Win) |
| jeaiii::to_text | 1215.07 | 0.201189 | 0.343541ms | 2173 | 30 | 353.223 | 1705.53 | 2(Loss) |
| fmt::format_to | 1000.72 | 0.411013 | 0.686541ms | 2173 | 30 | 2173.32 | 2070.83 | 3(Loss) |
| std::to_chars | 755.105 | 0.0960345 | 0.530333ms | 2173 | 30 | 208.392 | 2744.43 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1190.53 | 0.0507717 | 3.19429ms | 21581 | 30 | 2311.16 | 17287.5 | 1(Win) |
| vn::to_chars | 1023.47 | 1.07454 | 19.4445ms | 21581 | 48 | 2.24119e+06 | 20109.4 | 2(Loss) |
| std::to_chars | 656.237 | 2.0186 | 5.73133ms | 21581 | 30 | 1.20239e+07 | 31362.5 | 3(Loss) |
| fmt::format_to | 623.989 | 0.718963 | 6.01654ms | 21581 | 30 | 1.68703e+06 | 32983.3 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 619.557 | 0.223122 | 60.0894ms | 215477 | 30 | 1.64303e+07 | 331681 | 1(Win) |
| std::to_chars | 593.459 | 0.196477 | 62.9834ms | 215477 | 30 | 1.38856e+07 | 346267 | 2(Loss) |
| jeaiii::to_text | 563.951 | 0.345951 | 66.1414ms | 215477 | 30 | 4.76727e+07 | 364385 | 3(Loss) |
| fmt::format_to | 527.16 | 0.12095 | 70.3244ms | 215477 | 30 | 6.6688e+06 | 389815 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1479.36 | 1.35971 | 0.06375ms | 265 | 30 | 161.868 | 170.833 | 1(Win) |
| fmt::format_to **STATISTICAL TIE** | 1338.11 | 2.04446 | 0.083542ms | 265 | 30 | 447.292 | 188.867 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 1299.8 | 1.87342 | 0.071ms | 265 | 30 | 398.047 | 194.433 | 2(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1263.62 | 1.54026 | 0.069334ms | 265 | 30 | 284.69 | 200 | 2(Tie) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1661.86 | 0.241394 | 0.31925ms | 2563 | 30 | 378.166 | 1470.8 | 1(Win) |
| fmt::format_to | 1396.72 | 0.16081 | 0.675958ms | 2563 | 30 | 237.586 | 1750 | 2(Loss) |
| vn::to_chars | 1383.57 | 0.268047 | 0.364667ms | 2563 | 30 | 672.723 | 1766.63 | 3(Loss) |
| std::to_chars | 1322.2 | 0.453151 | 0.370167ms | 2563 | 30 | 2105.27 | 1848.63 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1277.32 | 0.196214 | 4.78971ms | 25645 | 30 | 42343.5 | 19147.1 | 1(Win) |
| jeaiii::to_text | 1233.73 | 0.346602 | 4.77571ms | 25645 | 30 | 141629 | 19823.7 | 2(Loss) |
| fmt::format_to | 928.209 | 0.338889 | 4.80633ms | 25645 | 30 | 239193 | 26348.6 | 3(Loss) |
| std::to_chars | 604.768 | 0.757426 | 7.44446ms | 25645 | 30 | 2.81468e+06 | 40440.3 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 615.142 | 0.54844 | 70.522ms | 256824 | 30 | 1.43054e+08 | 398162 | 1(Win) |
| vn::to_chars | 588.695 | 0.430625 | 76.9709ms | 256824 | 30 | 9.62963e+07 | 416050 | 2(Loss) |
| std::to_chars | 582.698 | 0.260742 | 76.2361ms | 256824 | 30 | 3.60352e+07 | 420332 | 3(Loss) |
| fmt::format_to | 518.471 | 2.01773 | 81.8012ms | 256824 | 30 | 2.72565e+09 | 472401 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2388.89 | 1.29545 | 0.092042ms | 508 | 30 | 207.062 | 202.8 | 1(Win) |
| jeaiii::to_text | 2028.19 | 1.43539 | 0.218666ms | 508 | 30 | 352.671 | 238.867 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 1718.58 | 1.1596 | 0.440208ms | 508 | 30 | 320.576 | 281.9 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 1693.35 | 1.51925 | 0.380166ms | 508 | 30 | 566.783 | 286.1 | 3(Tie) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2599.42 | 0.805823 | 0.358458ms | 5175 | 30 | 7022.11 | 1898.6 | 1(Win) |
| jeaiii::to_text | 2223.59 | 0.153919 | 0.822083ms | 5175 | 30 | 350.121 | 2219.5 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 1854.6 | 0.145221 | 0.9215ms | 5175 | 30 | 448.024 | 2661.1 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 1854.6 | 0.257331 | 0.517542ms | 5175 | 30 | 1406.78 | 2661.1 | 3(Tie) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1115.57 | 0.127842 | 6.83871ms | 51536 | 30 | 95169.3 | 44057 | 1(Win) |
| jeaiii::to_text | 1049.06 | 0.0585462 | 8.59104ms | 51536 | 30 | 22570.4 | 46850.1 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 852.987 | 0.257854 | 10.5103ms | 51536 | 30 | 662227 | 57619.3 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 852.491 | 0.0282337 | 10.5414ms | 51536 | 30 | 7948.78 | 57652.9 | 3(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 781.334 | 0.693328 | 112.365ms | 516041 | 30 | 5.72128e+08 | 629865 | 1(Win) |
| jeaiii::to_text | 724.332 | 0.166764 | 122.667ms | 516041 | 30 | 3.85139e+07 | 679433 | 2(Loss) |
| std::to_chars | 687.944 | 0.16508 | 129.368ms | 516041 | 30 | 4.1838e+07 | 715371 | 3(Loss) |
| fmt::format_to | 644.476 | 0.162887 | 139.1ms | 516041 | 30 | 4.64143e+07 | 763621 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2685.15 | 1.29545 | 0.989917ms | 571 | 30 | 207.062 | 202.8 | 1(Win) |
| jeaiii::to_text | 2348.2 | 1.87125 | 0.55625ms | 571 | 30 | 564.921 | 231.9 | 2(Loss) |
| std::to_chars | 1941.12 | 1.87362 | 0.568584ms | 571 | 30 | 828.809 | 280.533 | 3(Loss) |
| fmt::format_to | 1782.29 | 1.19797 | 1.01671ms | 571 | 30 | 401.913 | 305.533 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2891.23 | 0.464513 | 1.29246ms | 5676 | 30 | 2269.01 | 1872.23 | 1(Win) |
| jeaiii::to_text | 2392.44 | 0.57234 | 0.874834ms | 5676 | 30 | 5030.74 | 2262.57 | 2(Loss) |
| std::to_chars | 2150.91 | 0.424014 | 0.476083ms | 5676 | 30 | 3416.03 | 2516.63 | 3(Loss) |
| fmt::format_to | 2012.04 | 0.142733 | 1.06721ms | 5676 | 30 | 442.368 | 2690.33 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1825.23 | 1.64939 | 4.45521ms | 56566 | 30 | 7.12925e+06 | 29555.5 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1800.77 | 0.723714 | 14.8173ms | 56566 | 30 | 1.41009e+06 | 29956.9 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1784.15 | 0.380972 | 5.57242ms | 56566 | 30 | 398066 | 30236 | 1(Tie) |
| std::to_chars | 1633 | 0.797021 | 6.39192ms | 56566 | 30 | 2.07971e+06 | 33034.7 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1375.5 | 0.126973 | 70.6492ms | 565901 | 30 | 7.4457e+06 | 392357 | 1(Win) |
| jeaiii::to_text | 1238.92 | 0.260879 | 79.5245ms | 565901 | 30 | 3.8743e+07 | 435610 | 2(Loss) |
| std::to_chars | 1160.09 | 0.218659 | 83.7074ms | 565901 | 30 | 3.10422e+07 | 465208 | 3(Loss) |
| fmt::format_to | 1024.15 | 0.193039 | 95.6313ms | 565901 | 30 | 3.10433e+07 | 526960 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2152.61 | 0.94417 | 0.639458ms | 464 | 30 | 113.013 | 205.567 | 1(Win) |
| jeaiii::to_text | 1942.51 | 1.69304 | 0.224333ms | 464 | 30 | 446.234 | 227.8 | 2(Loss) |
| fmt::format_to | 1503.07 | 0.651363 | 1.32596ms | 464 | 30 | 110.317 | 294.4 | 3(Loss) |
| std::to_chars | 1332.85 | 0.416311 | 1.23471ms | 464 | 30 | 57.3103 | 332 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2365.44 | 0.336181 | 0.94075ms | 4668 | 30 | 1200.9 | 1882 | 1(Win) |
| jeaiii::to_text | 2027.07 | 0.26461 | 3.36367ms | 4668 | 48 | 1620.98 | 2196.15 | 2(Loss) |
| fmt::format_to | 1614.77 | 0.348138 | 0.554167ms | 4668 | 30 | 2763.54 | 2756.9 | 3(Loss) |
| std::to_chars | 1547.66 | 0.395791 | 0.572917ms | 4668 | 30 | 3888.32 | 2876.43 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1833.09 | 0.700507 | 4.73342ms | 46497 | 30 | 861447 | 24190.3 | 1(Win) |
| std::to_chars | 1198.24 | 0.153821 | 8.08121ms | 46497 | 30 | 97211.4 | 37006.9 | 2(Loss) |
| jeaiii::to_text | 1186.83 | 0.129843 | 7.11579ms | 46497 | 30 | 70604.4 | 37362.5 | 3(Loss) |
| fmt::format_to | 1074.87 | 0.0346557 | 7.52867ms | 46497 | 30 | 6132.07 | 41254.2 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1226.52 | 0.265686 | 65.6037ms | 466264 | 30 | 2.78337e+07 | 362540 | 1(Win) |
| std::to_chars | 1063.6 | 0.312682 | 73.1462ms | 466264 | 30 | 5.12666e+07 | 418075 | 2(Loss) |
| jeaiii::to_text | 971.265 | 0.25147 | 83.0282ms | 466264 | 30 | 3.97633e+07 | 457819 | 3(Loss) |
| fmt::format_to | 843.391 | 0.280967 | 95.0293ms | 466264 | 30 | 6.5832e+07 | 527233 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2247.81 | 1.28636 | 0.067875ms | 478 | 30 | 204.166 | 202.8 | 1(Win) |
| jeaiii::to_text | 2173.85 | 0.66391 | 0.072334ms | 478 | 30 | 58.1483 | 209.7 | 2(Loss) |
| fmt::format_to | 1919.4 | 1.49305 | 0.082709ms | 478 | 30 | 377.224 | 237.5 | 3(Loss) |
| std::to_chars | 1833.69 | 0.563154 | 0.081292ms | 478 | 30 | 58.8 | 248.6 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2541.38 | 0.213498 | 0.359375ms | 4830 | 30 | 449.224 | 1812.5 | 1(Win) |
| jeaiii::to_text | 2507.03 | 0.126942 | 0.362916ms | 4830 | 30 | 163.195 | 1837.33 | 2(Loss) |
| fmt::format_to | 2045.98 | 0.225678 | 0.458ms | 4830 | 30 | 774.447 | 2251.37 | 3(Loss) |
| std::to_chars | 1993.13 | 0.446018 | 0.488375ms | 4830 | 30 | 3187.51 | 2311.07 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2521.92 | 0.0351167 | 3.37267ms | 48272 | 30 | 1232.75 | 18254.3 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2468.76 | 1.066 | 3.36854ms | 48272 | 30 | 1.18541e+06 | 18647.3 | 1(Tie) |
| fmt::format_to | 1786.45 | 0.930159 | 5.67229ms | 48272 | 30 | 1.72364e+06 | 25769.5 | 3(Loss) |
| std::to_chars | 1598 | 0.802325 | 5.31571ms | 48272 | 30 | 1.60272e+06 | 28808.3 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1773.37 | 0.495168 | 47.3733ms | 482891 | 30 | 4.96053e+07 | 259687 | 1(Win) |
| std::to_chars | 1685.14 | 0.139607 | 49.3675ms | 482891 | 30 | 4.3668e+06 | 273283 | 2(Loss) |
| jeaiii::to_text | 1597.52 | 0.231372 | 52.4656ms | 482891 | 30 | 1.33459e+07 | 288272 | 3(Loss) |
| fmt::format_to | 1421.34 | 0.571754 | 59.2297ms | 482891 | 30 | 1.02954e+08 | 324006 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4269.22 | 1.63872 | 1.44546ms | 995 | 30 | 397.995 | 222.267 | 1(Win) |
| jeaiii::to_text | 2700.36 | 1.09075 | 1.02629ms | 995 | 30 | 440.731 | 351.4 | 2(Loss) |
| std::to_chars | 2531.09 | 1.40914 | 1.17367ms | 995 | 30 | 837.266 | 374.9 | 3(Loss) |
| fmt::format_to | 2316.48 | 0.702426 | 1.03662ms | 995 | 30 | 248.378 | 409.633 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4886.99 | 0.196183 | 1.47008ms | 9950 | 30 | 435.321 | 1941.7 | 1(Win) |
| jeaiii::to_text | 2788.66 | 0.456174 | 1.59779ms | 9950 | 30 | 7228.34 | 3402.73 | 2(Loss) |
| fmt::format_to | 2441.75 | 0.32059 | 0.77875ms | 9950 | 30 | 4656.56 | 3886.17 | 3(Loss) |
| std::to_chars | 2373.21 | 0.340368 | 1.78679ms | 9950 | 30 | 5556.39 | 3998.4 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3227.57 | 0.904558 | 5.60321ms | 99782 | 30 | 2.13377e+06 | 29483.3 | 1(Win) |
| vn::to_chars | 2368.55 | 0.0354032 | 7.42796ms | 99782 | 30 | 6069.39 | 40176.3 | 2(Loss) |
| std::to_chars | 1217.87 | 0.0475679 | 14.1564ms | 99782 | 30 | 41443 | 78136 | 3(Loss) |
| fmt::format_to | 1200.37 | 0.433332 | 14.669ms | 99782 | 30 | 3.54028e+06 | 79275.2 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1253.19 | 0.134287 | 137.643ms | 998310 | 30 | 3.12239e+07 | 759714 | 1(Win) |
| std::to_chars | 1133.07 | 0.0546274 | 151.504ms | 998310 | 30 | 6.32056e+06 | 840247 | 2(Loss) |
| jeaiii::to_text | 1086.18 | 0.184189 | 158.486ms | 998310 | 30 | 7.81948e+07 | 876525 | 3(Loss) |
| fmt::format_to | 984.673 | 0.24777 | 175.711ms | 998310 | 30 | 1.72173e+08 | 966882 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4678.51 | 1.22461 | 0.21875ms | 1050 | 30 | 206.102 | 214.033 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 2816.5 | 2.36585 | 0.822875ms | 1050 | 30 | 2122.53 | 355.533 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 2720.59 | 0.782236 | 0.473291ms | 1050 | 30 | 248.685 | 368.067 | 2(Tie) |
| fmt::format_to | 2427.34 | 0.563505 | 0.481625ms | 1050 | 30 | 162.12 | 412.533 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4929.55 | 0.386587 | 1.05758ms | 10511 | 30 | 1853.91 | 2033.47 | 1(Win) |
| jeaiii::to_text | 3018.54 | 0.356591 | 1.00883ms | 10511 | 30 | 4206.83 | 3320.83 | 2(Loss) |
| std::to_chars | 2673.09 | 0.390962 | 0.839208ms | 10511 | 30 | 6448.41 | 3750 | 3(Loss) |
| fmt::format_to | 2556.57 | 0.351005 | 1.38642ms | 10511 | 30 | 5682.23 | 3920.9 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2612.77 | 1.11077 | 7.55421ms | 104850 | 30 | 5.42134e+06 | 38270.8 | 1(Win) |
| vn::to_chars | 2473.45 | 1.29011 | 8.10325ms | 104850 | 30 | 8.16032e+06 | 40426.4 | 2(Loss) |
| fmt::format_to | 2185.7 | 0.0506033 | 8.4035ms | 104850 | 30 | 16078.1 | 45748.6 | 3(Loss) |
| std::to_chars | 1989.74 | 0.0676277 | 9.59567ms | 104850 | 30 | 34650.9 | 50254.1 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1864.06 | 0.0704479 | 96.9717ms | 1048085 | 30 | 4.28083e+06 | 536211 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 1639.82 | 0.0848313 | 109.843ms | 1048085 | 30 | 8.02108e+06 | 609536 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 1633.45 | 0.21165 | 110.761ms | 1048085 | 30 | 5.03201e+07 | 611915 | 2(Tie) |
| fmt::format_to | 1338.46 | 0.197564 | 135.536ms | 1048085 | 30 | 6.53006e+07 | 746775 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3805.66 | 1.40832 | 0.073ms | 954 | 30 | 340.064 | 239.067 | 1(Win) |
| jeaiii::to_text | 2787.96 | 1.51227 | 0.590166ms | 954 | 30 | 730.644 | 326.333 | 2(Loss) |
| std::to_chars | 2548.95 | 1.07496 | 0.352334ms | 954 | 30 | 441.651 | 356.933 | 3(Loss) |
| fmt::format_to | 2339.63 | 0.936553 | 0.318208ms | 954 | 30 | 397.913 | 388.867 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4486.86 | 0.407851 | 1.36529ms | 9462 | 30 | 2018.4 | 2011.13 | 1(Win) |
| jeaiii::to_text | 2881.09 | 0.388502 | 1.16263ms | 9462 | 30 | 4441.83 | 3132.03 | 2(Loss) |
| std::to_chars | 2496.91 | 0.122897 | 0.717875ms | 9462 | 30 | 591.789 | 3613.93 | 3(Loss) |
| fmt::format_to | 2436.09 | 0.112508 | 0.70425ms | 9462 | 30 | 521.04 | 3704.17 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3431.99 | 0.942855 | 5.66204ms | 94821 | 30 | 1.85153e+06 | 26348.7 | 1(Win) |
| std::to_chars | 1970.29 | 0.624266 | 8.30325ms | 94821 | 30 | 2.46268e+06 | 45895.9 | 2(Loss) |
| jeaiii::to_text | 1864.77 | 0.812451 | 9.42233ms | 94821 | 30 | 4.65666e+06 | 48493 | 3(Loss) |
| fmt::format_to | 1605.55 | 0.515031 | 10.2522ms | 94821 | 30 | 2.52435e+06 | 56322.4 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1754.21 | 0.334336 | 94.1028ms | 948097 | 30 | 8.90897e+07 | 515431 | 1(Win) |
| std::to_chars | 1521.17 | 0.313142 | 107.75ms | 948097 | 30 | 1.03933e+08 | 594394 | 2(Loss) |
| jeaiii::to_text | 1446.01 | 0.463873 | 109.121ms | 948097 | 30 | 2.52396e+08 | 625290 | 3(Loss) |
| fmt::format_to | 1187.28 | 0.166897 | 137.627ms | 948097 | 30 | 4.84636e+07 | 761551 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4422.24 | 0.668577 | 0.993916ms | 971 | 30 | 58.8 | 209.4 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 3044.44 | 1.16606 | 0.116042ms | 971 | 30 | 377.385 | 304.167 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 2976.59 | 1.23904 | 0.100541ms | 971 | 30 | 445.748 | 311.1 | 2(Tie) |
| fmt::format_to | 2657.15 | 1.07451 | 0.092375ms | 971 | 30 | 420.672 | 348.5 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4619.98 | 0.616664 | 0.423708ms | 9729 | 30 | 4601.25 | 2008.3 | 1(Win) |
| jeaiii::to_text | 3235.11 | 0.296229 | 0.558125ms | 9729 | 30 | 2165.38 | 2868 | 2(Loss) |
| std::to_chars | 3044.83 | 0.127095 | 0.735417ms | 9729 | 30 | 449.978 | 3047.23 | 3(Loss) |
| fmt::format_to | 2856.06 | 0.143279 | 0.742666ms | 9729 | 30 | 649.964 | 3248.63 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4426.03 | 0.427188 | 3.87538ms | 97455 | 30 | 241401 | 20998.6 | 1(Win) |
| jeaiii::to_text | 2627.39 | 0.100171 | 7.681ms | 97455 | 30 | 37667.3 | 35373.6 | 2(Loss) |
| fmt::format_to | 2544.28 | 0.562361 | 7.63779ms | 97455 | 30 | 1.26598e+06 | 36529.1 | 3(Loss) |
| std::to_chars | 2264.92 | 1.1933 | 7.51708ms | 97455 | 30 | 7.19319e+06 | 41034.7 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2675.26 | 0.467466 | 63.0613ms | 974063 | 30 | 7.90432e+07 | 347233 | 1(Win) |
| std::to_chars **STATISTICAL TIE** | 2197.7 | 0.340888 | 76.4838ms | 974063 | 30 | 6.2285e+07 | 422687 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2196.56 | 0.163028 | 76.7901ms | 974063 | 30 | 1.42605e+07 | 422907 | 2(Tie) |
| fmt::format_to | 1883.41 | 0.263919 | 90.1465ms | 974063 | 30 | 5.08327e+07 | 493221 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5551.92 | 0.948565 | 0.598292ms | 1932 | 30 | 297.292 | 331.867 | 1(Win) |
| jeaiii::to_text | 3021.98 | 0.612485 | 0.848375ms | 1932 | 30 | 418.355 | 609.7 | 2(Loss) |
| std::to_chars | 2805.12 | 0.581734 | 0.635167ms | 1932 | 30 | 438.006 | 656.833 | 3(Loss) |
| fmt::format_to | 2347.93 | 0.446646 | 0.225791ms | 1932 | 30 | 368.547 | 784.733 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5973.45 | 0.542651 | 0.575917ms | 19374 | 30 | 8451.82 | 3093.1 | 1(Win) |
| jeaiii::to_text | 3092.28 | 0.240046 | 1.19221ms | 19374 | 30 | 6171.48 | 5975.03 | 2(Loss) |
| std::to_chars | 2937.28 | 0.0672068 | 1.30725ms | 19374 | 30 | 536.161 | 6290.33 | 3(Loss) |
| fmt::format_to | 2100.57 | 0.319837 | 3.98042ms | 19374 | 30 | 23743.3 | 8795.93 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4512.29 | 0.0402493 | 7.51842ms | 193826 | 30 | 8155.82 | 40965.2 | 1(Win) |
| jeaiii::to_text | 2521.26 | 0.0443954 | 13.3285ms | 193826 | 30 | 31782.4 | 73315.3 | 2(Loss) |
| std::to_chars | 2282.88 | 0.552142 | 14.718ms | 193826 | 30 | 5.99626e+06 | 80970.8 | 3(Loss) |
| fmt::format_to | 1728.69 | 0.39529 | 19.4983ms | 193826 | 30 | 5.35975e+06 | 106929 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2780.7 | 0.0781611 | 119.838ms | 1937985 | 30 | 8.09646e+06 | 664656 | 1(Win) |
| jeaiii::to_text | 2346.02 | 0.161848 | 144.851ms | 1937985 | 30 | 4.87726e+07 | 787806 | 2(Loss) |
| std::to_chars | 2104.36 | 0.115796 | 158.548ms | 1937985 | 30 | 3.10292e+07 | 878276 | 3(Loss) |
| fmt::format_to | 1588.31 | 0.11973 | 209.825ms | 1937985 | 30 | 5.8232e+07 | 1.16363e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5603.92 | 0.911371 | 0.539334ms | 1983 | 30 | 283.775 | 337.467 | 1(Win) |
| jeaiii::to_text | 3087.91 | 0.872402 | 1.8955ms | 1983 | 30 | 856.392 | 612.433 | 2(Loss) |
| std::to_chars | 2603.44 | 1.52458 | 0.388334ms | 1983 | 30 | 3679.35 | 726.4 | 3(Loss) |
| fmt::format_to | 1925.93 | 0.390748 | 0.290833ms | 1983 | 30 | 441.651 | 981.933 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5849.36 | 0.422182 | 0.633584ms | 19867 | 30 | 5610.09 | 3239.1 | 1(Win) |
| jeaiii::to_text | 3151.96 | 0.1518 | 1.47146ms | 19867 | 30 | 2497.86 | 6011.07 | 2(Loss) |
| std::to_chars | 2624.37 | 2.15088 | 1.28458ms | 19867 | 30 | 723381 | 7219.5 | 3(Loss) |
| fmt::format_to | 1973.34 | 0.408 | 1.73838ms | 19867 | 30 | 46036.5 | 9601.3 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5085.52 | 0.149347 | 6.79333ms | 198778 | 30 | 92977.7 | 37276.3 | 1(Win) |
| std::to_chars | 3123.28 | 0.0329451 | 10.9729ms | 198778 | 30 | 11995.5 | 60695.7 | 2(Loss) |
| jeaiii::to_text | 2978.05 | 1.17955 | 11.4011ms | 198778 | 30 | 1.69134e+07 | 63655.6 | 3(Loss) |
| fmt::format_to | 1917.26 | 0.320928 | 17.8657ms | 198778 | 30 | 3.02071e+06 | 98875 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4664.57 | 0.213096 | 73.6899ms | 1987989 | 30 | 2.25049e+07 | 406446 | 1(Win) |
| jeaiii::to_text | 3089.77 | 0.754664 | 110.55ms | 1987989 | 30 | 6.43288e+08 | 613604 | 2(Loss) |
| std::to_chars | 2910.06 | 0.36475 | 118.364ms | 1987989 | 30 | 1.69409e+08 | 651496 | 3(Loss) |
| fmt::format_to | 1995.79 | 0.149956 | 171.518ms | 1987989 | 30 | 6.08764e+07 | 949949 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5673.86 | 1.19329 | 0.450959ms | 1884 | 30 | 428.368 | 316.667 | 1(Win) |
| jeaiii::to_text | 2966.85 | 0.717698 | 0.469208ms | 1884 | 30 | 566.731 | 605.6 | 2(Loss) |
| std::to_chars | 2629.61 | 0.748213 | 0.686958ms | 1884 | 30 | 784.064 | 683.267 | 3(Loss) |
| fmt::format_to | 1933.62 | 0.382721 | 0.517542ms | 1884 | 30 | 379.407 | 929.2 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6098.74 | 0.665036 | 0.870625ms | 18865 | 30 | 11546.4 | 2949.97 | 1(Win) |
| jeaiii::to_text | 3093.06 | 0.218777 | 1.25804ms | 18865 | 30 | 4858.04 | 5816.6 | 2(Loss) |
| std::to_chars | 2703.16 | 0.222317 | 1.55713ms | 18865 | 30 | 6568.05 | 6655.57 | 3(Loss) |
| fmt::format_to | 1867.31 | 0.297524 | 4.11304ms | 18865 | 30 | 24651.7 | 9634.73 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5625.9 | 0.183976 | 5.77742ms | 188832 | 30 | 104043 | 32009.9 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 3065.05 | 0.28893 | 11.0035ms | 188832 | 30 | 864533 | 58754.1 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 3055.29 | 0.0367537 | 10.658ms | 188832 | 30 | 14078.9 | 58941.7 | 2(Tie) |
| fmt::format_to | 1862.22 | 0.344366 | 17.4964ms | 188832 | 30 | 3.32699e+06 | 96704.1 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4855.56 | 0.199987 | 69.5323ms | 1887912 | 30 | 1.64973e+07 | 370803 | 1(Win) |
| jeaiii::to_text | 2961.7 | 0.253047 | 109.222ms | 1887912 | 30 | 7.09909e+07 | 607911 | 2(Loss) |
| std::to_chars | 2833.23 | 0.138196 | 110.069ms | 1887912 | 30 | 2.31372e+07 | 635476 | 3(Loss) |
| fmt::format_to | 1834.85 | 0.167239 | 176.712ms | 1887912 | 30 | 8.07903e+07 | 981254 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6259.7 | 0.791369 | 1.05154ms | 1942 | 30 | 164.464 | 295.867 | 1(Win) |
| jeaiii::to_text | 3317.08 | 0.67679 | 0.411166ms | 1942 | 30 | 428.368 | 558.333 | 2(Loss) |
| std::to_chars | 2886.29 | 0.590789 | 1.14433ms | 1942 | 30 | 431.126 | 641.667 | 3(Loss) |
| fmt::format_to | 2381.32 | 0.86561 | 0.504625ms | 1942 | 30 | 1359.65 | 777.733 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6557.83 | 0.353358 | 1.55862ms | 19407 | 30 | 2983.65 | 2822.27 | 1(Win) |
| jeaiii::to_text | 3321.5 | 0.648306 | 2.07246ms | 19407 | 30 | 39149.8 | 5572.17 | 2(Loss) |
| std::to_chars | 2888.75 | 0.170002 | 2.20662ms | 19407 | 30 | 3558.99 | 6406.9 | 3(Loss) |
| fmt::format_to | 1773.68 | 0.203261 | 2.268ms | 19407 | 30 | 13495.8 | 10434.8 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4758.09 | 0.433169 | 6.99104ms | 193866 | 30 | 849915 | 38857 | 1(Win) |
| jeaiii::to_text | 2402.84 | 0.615394 | 13.8672ms | 193866 | 30 | 6.72637e+06 | 76944.3 | 2(Loss) |
| std::to_chars | 2177.5 | 0.334762 | 15.3699ms | 193866 | 30 | 2.4237e+06 | 84907 | 3(Loss) |
| fmt::format_to | 1198.87 | 0.191131 | 28.0548ms | 193866 | 30 | 2.60644e+06 | 154217 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2876.26 | 0.423932 | 114.627ms | 1940004 | 30 | 2.23081e+08 | 643243 | 1(Win) |
| jeaiii::to_text | 2362.04 | 0.576988 | 138.355ms | 1940004 | 30 | 6.12754e+08 | 783278 | 2(Loss) |
| std::to_chars | 2289.71 | 0.171231 | 148.529ms | 1940004 | 30 | 5.7429e+07 | 808020 | 3(Loss) |
| fmt::format_to | 1122.85 | 0.216872 | 298.51ms | 1940004 | 30 | 3.83082e+08 | 1.64772e+06 | 4(Loss) |
