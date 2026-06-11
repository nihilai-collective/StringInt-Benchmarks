# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2400.74 | 0.112241 | 0.045962ms | 278 | 30 | 0.46092 | 110.433 | 1(Win) |
| jeaiii::to_text | 2164.85 | 0.0851767 | 0.041921ms | 278 | 30 | 0.326437 | 122.467 | 2(Loss) |
| fmt::format_to | 1545.9 | 0.0826981 | 0.061055ms | 278 | 30 | 0.603448 | 171.5 | 3(Loss) |
| std::to_chars | 1306.02 | 0.0528134 | 0.076622ms | 278 | 30 | 0.344828 | 203 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2816.36 | 0.0397955 | 0.206237ms | 2661 | 30 | 3.85747 | 901.067 | 1(Win) |
| jeaiii::to_text | 2772.66 | 0.0630655 | 0.228587ms | 2661 | 30 | 9.9954 | 915.267 | 2(Loss) |
| fmt::format_to | 1591.85 | 0.0652298 | 0.36821ms | 2661 | 30 | 32.4414 | 1594.2 | 3(Loss) |
| std::to_chars | 1557.14 | 0.0249519 | 0.328942ms | 2661 | 30 | 4.96092 | 1629.73 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 768.394 | 0.517698 | 6.53671ms | 26495 | 30 | 869429 | 32883.7 | 1(Win) |
| std::to_chars | 703.809 | 0.173133 | 7.34206ms | 26495 | 30 | 115905 | 35901.2 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 592.799 | 0.568946 | 8.33924ms | 26495 | 30 | 1.76431e+06 | 42624.2 | 3(Tie) |
| vn::to_chars **STATISTICAL TIE** | 590.267 | 0.81236 | 7.55936ms | 26495 | 30 | 3.62786e+06 | 42807.1 | 3(Tie) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 508.818 | 1.205 | 216.992ms | 265201 | 30 | 1.07627e+09 | 497064 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 486.565 | 2.12688 | 93.274ms | 265201 | 30 | 3.6667e+09 | 519798 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 420.062 | 2.10221 | 108.927ms | 265201 | 30 | 4.80614e+09 | 602091 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 407.116 | 1.59303 | 557.44ms | 265201 | 48 | 4.70115e+09 | 621237 | 3(Tie) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2671.2 | 0.109952 | 0.043741ms | 311 | 30 | 0.447126 | 111.033 | 1(Win) |
| jeaiii::to_text | 2562.73 | 0.116688 | 0.047128ms | 311 | 30 | 0.547126 | 115.733 | 2(Loss) |
| std::to_chars | 1682.32 | 0.0617173 | 0.057331ms | 311 | 30 | 0.355172 | 176.3 | 3(Loss) |
| fmt::format_to | 1555.28 | 0.0672292 | 0.058301ms | 311 | 30 | 0.493103 | 190.7 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3313.56 | 0.252449 | 0.18981ms | 3150 | 30 | 157.145 | 906.6 | 1(Win) |
| jeaiii::to_text | 3165.96 | 0.231378 | 0.198808ms | 3150 | 30 | 144.602 | 948.867 | 2(Loss) |
| std::to_chars | 2282.44 | 0.224948 | 0.265656ms | 3150 | 30 | 262.971 | 1316.17 | 3(Loss) |
| fmt::format_to | 1924.95 | 0.17411 | 0.307634ms | 3150 | 30 | 221.49 | 1560.6 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2168.44 | 1.51691 | 2.65186ms | 31431 | 30 | 1.31905e+06 | 13823.3 | 1(Win) |
| vn::to_chars | 1939.92 | 2.49327 | 3.11253ms | 31431 | 30 | 4.45256e+06 | 15451.7 | 2(Loss) |
| fmt::format_to | 1818.95 | 1.10022 | 8.17733ms | 31431 | 30 | 986173 | 16479.2 | 3(Loss) |
| std::to_chars | 975.873 | 0.0819539 | 5.44201ms | 31431 | 30 | 19010.4 | 30716 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1184.5 | 0.866379 | 49.0065ms | 314600 | 30 | 1.44473e+08 | 253294 | 1(Win) |
| jeaiii::to_text | 1072.91 | 1.54937 | 117.85ms | 314600 | 30 | 5.63151e+08 | 279638 | 2(Loss) |
| std::to_chars **STATISTICAL TIE** | 857.053 | 1.28611 | 66.5401ms | 314600 | 30 | 6.08103e+08 | 350067 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 846.019 | 1.58629 | 319.594ms | 314600 | 48 | 1.51902e+09 | 354633 | 3(Tie) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1766.9 | 0.0948582 | 0.041167ms | 208 | 30 | 0.34023 | 112.267 | 1(Win) |
| jeaiii::to_text | 1724.91 | 0.110308 | 0.050904ms | 208 | 30 | 0.482759 | 115 | 2(Loss) |
| fmt::format_to | 1188.76 | 0.0625129 | 0.051959ms | 208 | 30 | 0.326437 | 166.867 | 3(Loss) |
| std::to_chars | 959.208 | 0.0586536 | 0.06696ms | 208 | 30 | 0.441379 | 206.8 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2223.33 | 0.0294204 | 0.20636ms | 2147 | 30 | 2.2023 | 920.933 | 1(Win) |
| jeaiii::to_text | 2195.2 | 0.0599323 | 0.196578ms | 2147 | 30 | 9.37471 | 932.733 | 2(Loss) |
| fmt::format_to | 1340.6 | 0.0489691 | 0.300237ms | 2147 | 30 | 16.7816 | 1527.33 | 3(Loss) |
| std::to_chars | 1333.61 | 0.12555 | 0.334037ms | 2147 | 30 | 111.471 | 1535.33 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2317.58 | 0.0870636 | 1.71794ms | 21594 | 30 | 1795.52 | 8885.83 | 1(Win) |
| jeaiii::to_text | 1360.72 | 1.10644 | 2.80363ms | 21594 | 30 | 841220 | 15134.4 | 2(Loss) |
| fmt::format_to | 1192.04 | 0.0340211 | 4.37024ms | 21594 | 30 | 1036.34 | 17276 | 3(Loss) |
| std::to_chars | 1106.35 | 0.380503 | 18.8101ms | 21594 | 48 | 240791 | 18614.1 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 816.794 | 0.77264 | 112.063ms | 215324 | 30 | 1.13197e+08 | 251409 | 1(Win) |
| jeaiii::to_text | 794.383 | 0.881284 | 245.595ms | 215324 | 48 | 2.49114e+08 | 258501 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 612.672 | 1.40515 | 146.277ms | 215324 | 30 | 6.65423e+08 | 335170 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 594.633 | 0.679449 | 64.6897ms | 215324 | 30 | 1.65167e+08 | 345338 | 3(Tie) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2196.89 | 0.110231 | 0.048274ms | 260 | 30 | 0.464368 | 112.867 | 1(Win) |
| std::to_chars | 2168.71 | 0.096846 | 0.047233ms | 260 | 30 | 0.367816 | 114.333 | 2(Loss) |
| jeaiii::to_text | 2132.03 | 0.149499 | 0.046054ms | 260 | 30 | 0.906897 | 116.3 | 3(Loss) |
| fmt::format_to | 1519.64 | 0.131687 | 0.058668ms | 260 | 30 | 1.38506 | 163.167 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2720.76 | 0.0382669 | 0.192503ms | 2576 | 30 | 3.58161 | 902.933 | 1(Win) |
| jeaiii::to_text | 2602.4 | 0.0421898 | 0.202134ms | 2576 | 30 | 4.75862 | 944 | 2(Loss) |
| std::to_chars | 2441.85 | 0.0571754 | 0.26033ms | 2576 | 30 | 9.92644 | 1006.07 | 3(Loss) |
| fmt::format_to | 1995.5 | 0.0427253 | 0.250453ms | 2576 | 30 | 8.3 | 1231.1 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2074.85 | 1.86559 | 2.88473ms | 25741 | 30 | 1.4616e+06 | 11831.5 | 1(Win) |
| std::to_chars | 1374.35 | 2.04832 | 20.5057ms | 25741 | 48 | 6.42531e+06 | 17862 | 2(Loss) |
| vn::to_chars | 1261.68 | 0.156307 | 3.63057ms | 25741 | 30 | 27748 | 19457 | 3(Loss) |
| fmt::format_to | 912.985 | 1.94669 | 5.29584ms | 25741 | 30 | 8.21933e+06 | 26888.2 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 794.791 | 1.56115 | 58.2028ms | 256613 | 30 | 6.93203e+08 | 307911 | 1(Tie) |
| std::to_chars **STATISTICAL TIE** | 792.925 | 1.31385 | 58.1851ms | 256613 | 30 | 4.93292e+08 | 308636 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 726.583 | 1.42742 | 60.261ms | 256613 | 30 | 6.93443e+08 | 336817 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 714.511 | 0.350829 | 65.4186ms | 256613 | 30 | 4.33162e+07 | 342507 | 3(Tie) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3901.74 | 0.140136 | 0.057323ms | 514 | 30 | 0.929885 | 125.633 | 1(Win) |
| jeaiii::to_text | 3561.55 | 0.101465 | 0.049113ms | 514 | 30 | 0.585057 | 137.633 | 2(Loss) |
| fmt::format_to **STATISTICAL TIE** | 2190.62 | 0.798763 | 0.072491ms | 514 | 30 | 95.8402 | 223.767 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 2170.58 | 0.624448 | 0.06853ms | 514 | 30 | 59.6609 | 225.833 | 3(Tie) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4707.31 | 0.368104 | 0.252412ms | 5178 | 30 | 447.344 | 1049.03 | 1(Win) |
| jeaiii::to_text | 3817.45 | 0.0730743 | 0.265673ms | 5178 | 30 | 26.8057 | 1293.57 | 2(Loss) |
| fmt::format_to | 2639.72 | 0.247396 | 0.371378ms | 5178 | 30 | 642.562 | 1870.7 | 3(Loss) |
| std::to_chars | 2342.82 | 0.110218 | 0.414984ms | 5178 | 30 | 161.909 | 2107.77 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1605.06 | 1.93415 | 13.6011ms | 51583 | 30 | 1.05423e+07 | 30648.9 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1541.07 | 0.945342 | 6.67601ms | 51583 | 30 | 2.73191e+06 | 31921.5 | 1(Tie) |
| fmt::format_to | 1008.95 | 0.393685 | 10.2488ms | 51583 | 30 | 1.10533e+06 | 48756.9 | 3(Loss) |
| std::to_chars | 888.275 | 0.317053 | 10.5714ms | 51583 | 30 | 924922 | 55380.8 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 886.825 | 1.5492 | 498.991ms | 515932 | 48 | 3.5462e+09 | 554823 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 878.324 | 2.29834 | 506.58ms | 515932 | 48 | 7.9569e+09 | 560193 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 850.462 | 1.35883 | 107.334ms | 515932 | 30 | 1.85408e+09 | 578545 | 1(Tie) |
| std::to_chars | 698.427 | 2.26261 | 294.563ms | 515932 | 30 | 7.62225e+09 | 704485 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4406.92 | 2.16864 | 0.048872ms | 571 | 30 | 215.426 | 123.567 | 1(Win) |
| jeaiii::to_text | 3929.86 | 0.113097 | 0.090038ms | 571 | 30 | 0.736782 | 138.567 | 2(Loss) |
| fmt::format_to | 2272.11 | 0.298298 | 0.068256ms | 571 | 30 | 15.3333 | 239.667 | 3(Loss) |
| std::to_chars | 2142.77 | 0.690047 | 0.072023ms | 571 | 30 | 92.2575 | 254.133 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5143.15 | 0.220212 | 0.255943ms | 5654 | 30 | 159.903 | 1048.4 | 1(Win) |
| jeaiii::to_text | 4665.37 | 0.0681259 | 0.237184ms | 5654 | 30 | 18.5989 | 1155.77 | 2(Loss) |
| fmt::format_to | 3013.9 | 0.125585 | 0.354345ms | 5654 | 30 | 151.444 | 1789.07 | 3(Loss) |
| std::to_chars | 2583.57 | 0.098729 | 0.410514ms | 5654 | 30 | 127.375 | 2087.07 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5024.04 | 0.94331 | 6.55173ms | 56623 | 30 | 308397 | 10748.3 | 1(Win) |
| jeaiii::to_text | 2963.09 | 0.0629857 | 7.96871ms | 56623 | 30 | 3952.76 | 18224.2 | 2(Loss) |
| fmt::format_to | 1684.88 | 0.967691 | 6.34586ms | 56623 | 30 | 2.88566e+06 | 32049.8 | 3(Loss) |
| std::to_chars | 1556.02 | 0.597889 | 6.37693ms | 56623 | 30 | 1.29157e+06 | 34703.8 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1830.76 | 1.99271 | 53.5435ms | 565985 | 30 | 1.03552e+09 | 294832 | 1(Win) |
| jeaiii::to_text | 1606.42 | 2.04287 | 306.439ms | 565985 | 48 | 2.26157e+09 | 336004 | 2(Loss) |
| fmt::format_to | 1422.16 | 2.09436 | 346.656ms | 565985 | 48 | 3.03288e+09 | 379538 | 3(Loss) |
| std::to_chars | 1201.84 | 1.45946 | 413.404ms | 565985 | 48 | 2.06225e+09 | 449117 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3234.62 | 0.0960154 | 0.051289ms | 471 | 30 | 0.533333 | 138.867 | 1(Win) |
| vn::to_chars | 2711.35 | 0.384315 | 0.058709ms | 471 | 30 | 12.1609 | 165.667 | 2(Loss) |
| fmt::format_to | 1926.44 | 0.172146 | 0.068344ms | 471 | 30 | 4.83333 | 233.167 | 3(Loss) |
| std::to_chars | 1737.19 | 0.465312 | 0.073176ms | 471 | 30 | 43.4264 | 258.567 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4578.46 | 0.0473089 | 0.235502ms | 4677 | 30 | 6.37241 | 974.2 | 1(Win) |
| jeaiii::to_text | 3686.02 | 0.329131 | 0.248818ms | 4677 | 30 | 475.857 | 1210.07 | 2(Loss) |
| fmt::format_to | 2460.06 | 0.0672827 | 0.840317ms | 4677 | 30 | 44.6448 | 1813.1 | 3(Loss) |
| std::to_chars | 1643.03 | 1.38096 | 0.56991ms | 4677 | 30 | 42162.6 | 2714.7 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3022.1 | 1.07094 | 2.7963ms | 46644 | 30 | 745469 | 14719.3 | 1(Win) |
| jeaiii::to_text | 2150.4 | 0.734137 | 4.14031ms | 46644 | 30 | 691877 | 20686 | 2(Loss) |
| fmt::format_to | 1818.14 | 0.94553 | 25.4861ms | 46644 | 48 | 2.5688e+06 | 24466.4 | 3(Loss) |
| std::to_chars | 1240.93 | 0.10078 | 6.72364ms | 46644 | 30 | 39153.2 | 35846.8 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1597.76 | 0.987639 | 52.2179ms | 466037 | 30 | 2.2643e+08 | 278169 | 1(Win) |
| jeaiii::to_text | 1427.64 | 0.726022 | 58.2187ms | 466037 | 30 | 1.53259e+08 | 311317 | 2(Loss) |
| fmt::format_to | 1275.55 | 0.520868 | 67.6315ms | 466037 | 30 | 9.8815e+07 | 348436 | 3(Loss) |
| std::to_chars | 1058.64 | 0.855636 | 186.525ms | 466037 | 30 | 3.87121e+08 | 419830 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3808.35 | 0.180163 | 0.052972ms | 480 | 30 | 1.4069 | 120.2 | 1(Win) |
| jeaiii::to_text | 3782.13 | 0.121992 | 0.048066ms | 480 | 30 | 0.654023 | 121.033 | 2(Loss) |
| fmt::format_to | 2548.32 | 0.144929 | 0.066269ms | 480 | 30 | 2.03333 | 179.633 | 3(Loss) |
| std::to_chars | 2271.4 | 0.0848945 | 0.064948ms | 480 | 30 | 0.878161 | 201.533 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4532.26 | 0.0574185 | 0.221137ms | 4818 | 30 | 10.1655 | 1013.8 | 1(Win) |
| jeaiii::to_text | 4262.74 | 0.0503935 | 0.238644ms | 4818 | 30 | 8.85172 | 1077.9 | 2(Loss) |
| fmt::format_to | 2916.59 | 0.0593744 | 0.312596ms | 4818 | 30 | 26.2483 | 1575.4 | 3(Loss) |
| std::to_chars | 2500.39 | 0.037492 | 0.361243ms | 4818 | 30 | 14.2402 | 1837.63 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4721.19 | 0.392701 | 1.89504ms | 48267 | 30 | 43978.7 | 9749.87 | 1(Win) |
| jeaiii::to_text | 4632.47 | 0.0306909 | 1.88678ms | 48267 | 30 | 279.007 | 9936.6 | 2(Loss) |
| fmt::format_to | 2864.18 | 0.8863 | 2.94393ms | 48267 | 30 | 608672 | 16071.3 | 3(Loss) |
| std::to_chars | 2444.23 | 0.273342 | 8.81251ms | 48267 | 30 | 79496.8 | 18832.5 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2665.04 | 1.82061 | 75.4734ms | 482995 | 30 | 2.97053e+08 | 172838 | 1(Win) |
| jeaiii::to_text | 2351.18 | 1.32175 | 36.1494ms | 482995 | 30 | 2.01154e+08 | 195910 | 2(Loss) |
| fmt::format_to | 1919.15 | 1.51032 | 108.296ms | 482995 | 30 | 3.9421e+08 | 240012 | 3(Loss) |
| std::to_chars | 1557.04 | 2.13452 | 268.97ms | 482995 | 48 | 1.91394e+09 | 295830 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5813.81 | 0.106889 | 0.061026ms | 1001 | 30 | 0.924138 | 164.2 | 1(Win) |
| jeaiii::to_text | 4289.18 | 0.0597132 | 0.077609ms | 1001 | 30 | 0.529885 | 222.567 | 2(Loss) |
| fmt::format_to | 3262.94 | 0.236742 | 0.082255ms | 1001 | 30 | 14.392 | 292.567 | 3(Loss) |
| std::to_chars | 2499.9 | 0.0391719 | 0.102279ms | 1001 | 30 | 0.671264 | 381.867 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6190.04 | 0.0787536 | 0.752145ms | 10063 | 30 | 44.723 | 1550.37 | 1(Win) |
| jeaiii::to_text | 4866.87 | 0.0271562 | 0.389564ms | 10063 | 30 | 8.6023 | 1971.87 | 2(Loss) |
| fmt::format_to | 3431.4 | 0.0705321 | 0.540889ms | 10063 | 30 | 116.737 | 2796.77 | 3(Loss) |
| std::to_chars | 2652.47 | 0.035754 | 0.770958ms | 10063 | 30 | 50.2023 | 3618.07 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to **STATISTICAL TIE** | 2835.95 | 1.54338 | 7.87232ms | 99876 | 30 | 8.06109e+06 | 33586.4 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2783.38 | 0.621919 | 7.07223ms | 99876 | 30 | 1.35884e+06 | 34220.7 | 1(Tie) |
| jeaiii::to_text | 2115.74 | 0.100964 | 23.603ms | 99876 | 30 | 61980.7 | 45019.4 | 3(Loss) |
| std::to_chars | 1189.3 | 1.03825 | 15.6153ms | 99876 | 30 | 2.07427e+07 | 80088.2 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 1341.53 | 1.92479 | 130.065ms | 998311 | 30 | 5.59782e+09 | 709685 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 1333.02 | 2.31686 | 127.615ms | 998311 | 30 | 8.21443e+09 | 714213 | 1(Tie) |
| fmt::format_to | 1157.61 | 2.03379 | 148.354ms | 998311 | 30 | 8.39342e+09 | 822436 | 3(Loss) |
| std::to_chars | 942.851 | 2.09951 | 180.424ms | 998311 | 30 | 1.34835e+10 | 1.00977e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4353.64 | 0.0392423 | 0.073653ms | 1041 | 30 | 0.24023 | 228.033 | 1(Win) |
| vn::to_chars | 3306.31 | 0.0449755 | 0.170941ms | 1041 | 30 | 0.547126 | 300.267 | 2(Loss) |
| fmt::format_to | 3205.6 | 0.206056 | 0.087188ms | 1041 | 30 | 12.2172 | 309.7 | 3(Loss) |
| std::to_chars | 2580.87 | 0.078172 | 0.120303ms | 1041 | 30 | 2.71264 | 384.667 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6423.26 | 0.0876244 | 0.71172ms | 10472 | 30 | 55.6828 | 1554.8 | 1(Win) |
| jeaiii::to_text | 4772.7 | 0.0451778 | 0.413477ms | 10472 | 30 | 26.8103 | 2092.5 | 2(Loss) |
| std::to_chars | 2693.74 | 0.0706413 | 0.753804ms | 10472 | 30 | 205.771 | 3707.43 | 3(Loss) |
| fmt::format_to | 1892.85 | 0.174407 | 2.29031ms | 10472 | 30 | 2540.23 | 5276.1 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3167 | 0.752224 | 7.4227ms | 104777 | 30 | 1.68986e+06 | 31551.3 | 1(Win) |
| jeaiii::to_text | 2822.12 | 0.102965 | 6.77063ms | 104777 | 30 | 39873.4 | 35407.1 | 2(Loss) |
| fmt::format_to | 2546.95 | 0.31055 | 40.4691ms | 104777 | 48 | 712515 | 39232.4 | 3(Loss) |
| std::to_chars | 1742.41 | 0.989231 | 11.0964ms | 104777 | 30 | 9.6549e+06 | 57347.6 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2217.49 | 2.47849 | 81.1383ms | 1048370 | 30 | 3.74629e+09 | 450872 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2112.48 | 1.54019 | 88.9146ms | 1048370 | 30 | 1.59409e+09 | 473284 | 1(Tie) |
| fmt::format_to | 1680.17 | 2.20253 | 252.901ms | 1048370 | 30 | 5.15336e+09 | 595062 | 3(Loss) |
| std::to_chars | 1315.98 | 2.0471 | 672.582ms | 1048370 | 48 | 1.16104e+10 | 759740 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4200.2 | 0.0532715 | 0.063782ms | 945 | 30 | 0.391954 | 214.567 | 1(Win) |
| vn::to_chars | 2886.68 | 0.0640615 | 0.108115ms | 945 | 30 | 1.2 | 312.2 | 2(Loss) |
| fmt::format_to | 2801.15 | 0.264885 | 0.090053ms | 945 | 30 | 21.7885 | 321.733 | 3(Loss) |
| std::to_chars | 2354.09 | 0.279229 | 0.208368ms | 945 | 30 | 34.2816 | 382.833 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5623.55 | 0.0772662 | 0.331739ms | 9455 | 30 | 46.0471 | 1603.43 | 1(Win) |
| jeaiii::to_text | 4481.83 | 0.0517393 | 0.394839ms | 9455 | 30 | 32.5069 | 2011.9 | 2(Loss) |
| fmt::format_to | 2910.96 | 0.160422 | 1.38802ms | 9455 | 30 | 740.8 | 3097.6 | 3(Loss) |
| std::to_chars | 2423.64 | 0.0428526 | 0.716716ms | 9455 | 30 | 76.254 | 3720.43 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3461.2 | 1.83417 | 5.20921ms | 94772 | 30 | 6.88188e+06 | 26112.8 | 1(Win) |
| jeaiii::to_text | 2568.09 | 2.06098 | 6.37401ms | 94772 | 30 | 1.57837e+07 | 35194.1 | 2(Loss) |
| fmt::format_to | 2153.87 | 0.578517 | 8.72178ms | 94772 | 30 | 1.76797e+06 | 41962.4 | 3(Loss) |
| std::to_chars | 1566.61 | 0.679867 | 10.9977ms | 94772 | 30 | 4.6154e+06 | 57692.5 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2065.34 | 0.7407 | 81.4359ms | 948226 | 30 | 3.15535e+08 | 437846 | 1(Win) |
| jeaiii::to_text | 1806.45 | 2.35516 | 444.765ms | 948226 | 48 | 6.67198e+09 | 500594 | 2(Loss) |
| fmt::format_to | 1537.46 | 1.87913 | 108.76ms | 948226 | 30 | 3.66481e+09 | 588178 | 3(Loss) |
| std::to_chars | 1258.11 | 1.78392 | 659.647ms | 948226 | 48 | 7.89184e+09 | 718777 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6330.33 | 0.0964847 | 0.066377ms | 972 | 30 | 0.598851 | 146.433 | 1(Win) |
| jeaiii::to_text | 4627.92 | 0.506175 | 0.061728ms | 972 | 30 | 30.8379 | 200.3 | 2(Loss) |
| fmt::format_to | 3197.19 | 0.384262 | 0.08426ms | 972 | 30 | 37.2368 | 289.933 | 3(Loss) |
| std::to_chars | 2456.42 | 0.697471 | 0.096365ms | 972 | 30 | 207.826 | 377.367 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7036.59 | 0.056149 | 0.276876ms | 9739 | 30 | 16.4782 | 1319.93 | 1(Win) |
| jeaiii::to_text | 5060.85 | 0.0575166 | 0.375456ms | 9739 | 30 | 33.4264 | 1835.23 | 2(Loss) |
| fmt::format_to | 3641.62 | 0.142795 | 0.497141ms | 9739 | 30 | 397.913 | 2550.47 | 3(Loss) |
| std::to_chars | 2671.91 | 1.00533 | 1.5668ms | 9739 | 30 | 36637.4 | 3476.1 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7016.35 | 0.0386614 | 2.81586ms | 97360 | 30 | 785.264 | 13233.3 | 1(Win) |
| jeaiii::to_text | 4109.43 | 0.902926 | 22.269ms | 97360 | 48 | 1.99776e+06 | 22594.3 | 2(Loss) |
| fmt::format_to | 3598.98 | 0.157647 | 13.5589ms | 97360 | 30 | 49624.6 | 25798.9 | 3(Loss) |
| std::to_chars | 1886.23 | 2.11048 | 8.80048ms | 97360 | 30 | 3.23782e+07 | 49225 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3673.06 | 0.921489 | 49.0671ms | 974055 | 30 | 1.62934e+08 | 252904 | 1(Win) |
| fmt::format_to | 2499.93 | 0.771963 | 70.5397ms | 974055 | 30 | 2.46845e+08 | 371582 | 2(Loss) |
| std::to_chars | 1762.58 | 1.25542 | 229.647ms | 974055 | 30 | 1.31331e+09 | 527028 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 8137.47 | 0.102571 | 0.072168ms | 1954 | 30 | 1.65517 | 229 | 1(Win) |
| jeaiii::to_text | 4138.31 | 0.0554802 | 0.112199ms | 1954 | 30 | 1.87241 | 450.3 | 2(Loss) |
| fmt::format_to | 2856.78 | 0.0579467 | 0.141314ms | 1954 | 30 | 4.28621 | 652.3 | 3(Loss) |
| std::to_chars | 2135.22 | 0.0557381 | 0.184731ms | 1954 | 30 | 7.09885 | 872.733 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7066.64 | 0.124954 | 0.558315ms | 19390 | 30 | 320.737 | 2616.77 | 1(Win) |
| jeaiii::to_text | 4817.15 | 0.0280384 | 0.72415ms | 19390 | 30 | 34.754 | 3838.73 | 2(Loss) |
| fmt::format_to | 2768.46 | 0.578089 | 2.82446ms | 19390 | 30 | 44729.2 | 6679.43 | 3(Loss) |
| std::to_chars | 2070.95 | 0.0360263 | 1.6654ms | 19390 | 30 | 310.438 | 8929.1 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5113.51 | 0.225107 | 7.79844ms | 193823 | 30 | 198642 | 36148.1 | 1(Win) |
| jeaiii::to_text | 3223.31 | 0.819563 | 10.518ms | 193823 | 30 | 6.62661e+06 | 57346 | 2(Loss) |
| fmt::format_to | 2118.03 | 1.8512 | 80.9026ms | 193823 | 48 | 1.25284e+08 | 87271.9 | 3(Loss) |
| std::to_chars | 1568.83 | 0.973721 | 22.0755ms | 193823 | 30 | 3.94867e+07 | 117823 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3115.57 | 1.28865 | 111.884ms | 1937772 | 30 | 1.75276e+09 | 593151 | 1(Win) |
| jeaiii::to_text | 2429.39 | 2.06092 | 141.96ms | 1937772 | 30 | 7.3732e+09 | 760686 | 2(Loss) |
| fmt::format_to | 1891.35 | 2.29881 | 883.567ms | 1937772 | 48 | 2.42165e+10 | 977084 | 3(Loss) |
| std::to_chars | 1436.19 | 1.96887 | 1185.33ms | 1937772 | 48 | 3.08078e+10 | 1.28674e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7480.07 | 0.0894417 | 0.073139ms | 1987 | 30 | 1.54023 | 253.333 | 1(Win) |
| jeaiii::to_text | 4140.76 | 0.0496785 | 0.111891ms | 1987 | 30 | 1.55057 | 457.633 | 2(Loss) |
| fmt::format_to | 2528.4 | 0.0538041 | 0.170736ms | 1987 | 30 | 4.87816 | 749.467 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7073.42 | 0.125952 | 0.516098ms | 19865 | 30 | 341.39 | 2678.3 | 1(Win) |
| jeaiii::to_text | 4826.97 | 0.14441 | 0.738886ms | 19865 | 30 | 963.702 | 3924.77 | 2(Loss) |
| fmt::format_to | 2801.61 | 0.0505482 | 1.30245ms | 19865 | 30 | 350.507 | 6762.1 | 3(Loss) |
| std::to_chars | 2077.07 | 0.0422649 | 1.71682ms | 19865 | 30 | 445.817 | 9120.9 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6524.73 | 1.07206 | 5.49121ms | 198763 | 30 | 2.91011e+06 | 29051.8 | 1(Win) |
| jeaiii::to_text | 4812.95 | 0.716629 | 40.0578ms | 198763 | 48 | 3.82365e+06 | 39384.4 | 2(Loss) |
| fmt::format_to | 2754.97 | 0.339294 | 70.774ms | 198763 | 48 | 2.61597e+06 | 68804.9 | 3(Loss) |
| std::to_chars | 2037.95 | 0.453688 | 17.8212ms | 198763 | 30 | 5.34221e+06 | 93012.8 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5722.81 | 0.625546 | 317.031ms | 1988017 | 48 | 2.06149e+08 | 331292 | 1(Win) |
| jeaiii::to_text | 3814.4 | 2.49315 | 442.859ms | 1988017 | 48 | 7.37096e+09 | 497042 | 2(Loss) |
| std::to_chars | 1905.55 | 1.95285 | 914.274ms | 1988017 | 48 | 1.8121e+10 | 994949 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6823.3 | 0.0706097 | 0.07448ms | 1891 | 30 | 1.04483 | 264.3 | 1(Win) |
| fmt::format_to | 2662.24 | 0.0573274 | 0.147505ms | 1891 | 30 | 4.52414 | 677.4 | 2(Loss) |
| jeaiii::to_text | 2404.96 | 0.0477341 | 0.178027ms | 1891 | 30 | 3.84368 | 749.867 | 3(Loss) |
| std::to_chars | 1101.09 | 0.0760051 | 0.290128ms | 1891 | 30 | 46.4885 | 1637.83 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7753.05 | 0.0555146 | 0.449096ms | 18876 | 30 | 49.8437 | 2321.87 | 1(Win) |
| jeaiii::to_text | 4707.27 | 0.971016 | 0.734493ms | 18876 | 30 | 41367.1 | 3824.2 | 2(Loss) |
| fmt::format_to | 2660.64 | 0.696857 | 1.26174ms | 18876 | 30 | 66689.2 | 6765.87 | 3(Loss) |
| std::to_chars | 1943.03 | 0.366841 | 1.68104ms | 18876 | 30 | 34652.9 | 9264.7 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7103.48 | 0.985733 | 25.0138ms | 188854 | 48 | 2.99827e+06 | 25354.5 | 1(Win) |
| jeaiii::to_text | 4443.01 | 1.01574 | 8.27758ms | 188854 | 30 | 5.08613e+06 | 40536.8 | 2(Loss) |
| fmt::format_to | 2551.46 | 0.318869 | 12.8558ms | 188854 | 30 | 1.51993e+06 | 70589.2 | 3(Loss) |
| std::to_chars | 1951.48 | 0.529364 | 17.4951ms | 188854 | 30 | 7.16071e+06 | 92291.8 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5683.25 | 1.64156 | 142.116ms | 1888021 | 30 | 8.11433e+08 | 316818 | 1(Win) |
| jeaiii::to_text | 3809.5 | 2.09606 | 441.08ms | 1888021 | 48 | 4.71114e+09 | 472649 | 2(Loss) |
| fmt::format_to | 2261.47 | 2.2162 | 710.451ms | 1888021 | 48 | 1.49449e+10 | 796189 | 3(Loss) |
| std::to_chars | 1816.71 | 2.44417 | 426.092ms | 1888021 | 30 | 1.76045e+10 | 991107 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7863.77 | 0.120193 | 0.087453ms | 1946 | 30 | 2.41379 | 236 | 1(Win) |
| jeaiii::to_text | 5003.19 | 0.0499503 | 0.091627ms | 1946 | 30 | 1.02989 | 370.933 | 2(Loss) |
| fmt::format_to | 2444.59 | 0.146229 | 0.164641ms | 1946 | 30 | 36.9713 | 759.167 | 3(Loss) |
| std::to_chars | 2261.67 | 0.0636556 | 0.174087ms | 1946 | 30 | 8.18506 | 820.567 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 8206.65 | 0.0594652 | 0.450683ms | 19382 | 30 | 53.8161 | 2252.33 | 1(Win) |
| jeaiii::to_text | 5192.46 | 0.0280398 | 0.670321ms | 19382 | 30 | 29.8897 | 3559.8 | 2(Loss) |
| std::to_chars | 2121.06 | 0.125495 | 2.34645ms | 19382 | 30 | 3588.12 | 8714.57 | 3(Loss) |
| fmt::format_to | 1950.27 | 0.0649451 | 1.81936ms | 19382 | 30 | 1136.63 | 9477.7 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4890.86 | 0.135748 | 6.89085ms | 194005 | 30 | 79112.3 | 37829.3 | 1(Win) |
| jeaiii::to_text | 3877.21 | 0.56305 | 22.1616ms | 194005 | 30 | 2.16571e+06 | 47719.2 | 2(Loss) |
| fmt::format_to | 1702.44 | 1.13467 | 20.5591ms | 194005 | 30 | 4.56186e+07 | 108678 | 3(Loss) |
| std::to_chars | 1497.62 | 1.13068 | 23.0174ms | 194005 | 30 | 5.85364e+07 | 123541 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2862.85 | 2.22739 | 274.82ms | 1939267 | 30 | 6.21147e+09 | 646011 | 1(Win) |
| fmt::format_to | 1568.7 | 2.13176 | 213.861ms | 1939267 | 30 | 1.89493e+10 | 1.17896e+06 | 2(Loss) |
| std::to_chars | 1387.06 | 2.13846 | 569.306ms | 1939267 | 30 | 2.43897e+10 | 1.33335e+06 | 3(Loss) |
