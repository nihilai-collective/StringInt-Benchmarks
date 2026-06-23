# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2037.43 | 0.158326 | 0.052535ms | 260 | 30 | 1.11379 | 121.7 | 1(Win) |
| vn::to_chars | 1345.15 | 0.0541455 | 0.081288ms | 260 | 30 | 0.298851 | 184.333 | 2(Loss) |
| fmt::format_to | 1313.79 | 0.0668926 | 0.137839ms | 260 | 30 | 0.478161 | 188.733 | 3(Loss) |
| std::to_chars | 462.316 | 0.0538857 | 0.201503ms | 260 | 30 | 2.50575 | 536.333 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2277.66 | 0.505489 | 0.242527ms | 2678 | 30 | 963.803 | 1121.3 | 1(Win) |
| jeaiii::to_text | 2247.2 | 0.0959944 | 0.271416ms | 2678 | 30 | 35.7069 | 1136.5 | 2(Loss) |
| fmt::format_to | 2016.8 | 0.190042 | 0.324012ms | 2678 | 30 | 173.747 | 1266.33 | 3(Loss) |
| std::to_chars | 1235.2 | 0.0515653 | 0.448565ms | 2678 | 30 | 34.1023 | 2067.63 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1517.71 | 1.23782 | 9.83304ms | 26419 | 30 | 1.26675e+06 | 16600.7 | 1(Win) |
| jeaiii::to_text | 842.242 | 0.713462 | 5.65996ms | 26419 | 30 | 1.36654e+06 | 29914.3 | 2(Loss) |
| std::to_chars | 603.611 | 0.39928 | 7.77146ms | 26419 | 30 | 833288 | 41740.6 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 498.462 | 2.07198 | 92.082ms | 265453 | 30 | 3.32203e+09 | 507874 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 483.48 | 1.92504 | 94.9165ms | 265453 | 30 | 3.04803e+09 | 523612 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 451.847 | 1.62425 | 552.737ms | 265453 | 48 | 3.97503e+09 | 560269 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 441.323 | 1.08669 | 268.965ms | 265453 | 30 | 1.16572e+09 | 573629 | 3(Tie) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2364.42 | 0.130363 | 0.051511ms | 309 | 30 | 0.791954 | 124.633 | 1(Win) |
| jeaiii::to_text | 1977.31 | 0.0880075 | 0.053925ms | 309 | 30 | 0.516092 | 149.033 | 2(Loss) |
| fmt::format_to | 1563.87 | 0.0749792 | 0.064938ms | 309 | 30 | 0.598851 | 188.433 | 3(Loss) |
| std::to_chars | 1114.26 | 0.0504159 | 0.07414ms | 309 | 30 | 0.533333 | 264.467 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3101.85 | 0.0299728 | 0.496119ms | 3108 | 30 | 2.46092 | 955.567 | 1(Win) |
| vn::to_chars | 2944.78 | 0.0311394 | 0.220659ms | 3108 | 30 | 2.94713 | 1006.53 | 2(Loss) |
| fmt::format_to | 2110.92 | 0.0739282 | 0.279606ms | 3108 | 30 | 32.3264 | 1404.13 | 3(Loss) |
| std::to_chars | 1148.25 | 2.01645 | 0.479926ms | 3108 | 30 | 81280.4 | 2581.33 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3679.19 | 0.0259484 | 3.96989ms | 31444 | 30 | 134.189 | 8150.53 | 1(Win) |
| jeaiii::to_text | 2698.58 | 0.299633 | 2.51562ms | 31444 | 30 | 33258.8 | 11112.3 | 2(Loss) |
| fmt::format_to | 2350.51 | 0.100748 | 2.65639ms | 31444 | 30 | 4956.17 | 12757.8 | 3(Loss) |
| std::to_chars | 1049.55 | 1.24811 | 5.35763ms | 31444 | 30 | 3.81501e+06 | 28571.5 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1199.76 | 0.878935 | 48.7763ms | 314458 | 30 | 1.448e+08 | 249958 | 1(Win) |
| fmt::format_to | 1007.22 | 0.91505 | 279.454ms | 314458 | 48 | 3.56293e+08 | 297741 | 2(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1697.75 | 0.567623 | 0.043037ms | 216 | 30 | 14.2299 | 121.333 | 1(Win) |
| jeaiii::to_text | 1400.68 | 1.85714 | 0.054717ms | 216 | 30 | 223.789 | 147.067 | 2(Loss) |
| fmt::format_to | 803.303 | 0.370512 | 0.070749ms | 216 | 30 | 27.0816 | 256.433 | 3(Loss) |
| std::to_chars | 391.424 | 0.188468 | 0.144347ms | 216 | 30 | 29.5126 | 526.267 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2549.81 | 0.129575 | 0.467356ms | 2163 | 30 | 32.9655 | 809 | 1(Win) |
| jeaiii::to_text | 1537.03 | 0.329044 | 0.25848ms | 2163 | 30 | 585.03 | 1342.07 | 2(Loss) |
| fmt::format_to | 1229.15 | 0.0611203 | 0.33218ms | 2163 | 30 | 31.5644 | 1678.23 | 3(Loss) |
| std::to_chars | 1044.93 | 0.044477 | 0.430123ms | 2163 | 30 | 23.1276 | 1974.1 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1248.42 | 0.92668 | 3.28472ms | 21587 | 30 | 700560 | 16490.4 | 1(Win) |
| std::to_chars | 849.591 | 1.25916 | 4.44897ms | 21587 | 30 | 2.79286e+06 | 24231.6 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 765.241 | 0.852407 | 50.7139ms | 215399 | 30 | 1.57075e+08 | 268439 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 732.676 | 2.37785 | 113.7ms | 215399 | 30 | 1.33338e+09 | 280370 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 713.273 | 1.94767 | 53.2702ms | 215399 | 30 | 9.43905e+08 | 287997 | 1(Tie) |
| std::to_chars | 647.28 | 0.817532 | 189.284ms | 215399 | 30 | 2.01945e+08 | 317359 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2218.32 | 1.32002 | 0.047045ms | 253 | 30 | 61.8402 | 108.767 | 1(Win) |
| jeaiii::to_text | 1938.51 | 0.131951 | 0.053779ms | 253 | 30 | 0.809195 | 124.467 | 2(Loss) |
| fmt::format_to | 1701.55 | 0.0979984 | 0.065677ms | 253 | 30 | 0.57931 | 141.8 | 3(Loss) |
| std::to_chars | 1057.47 | 0.117157 | 0.081109ms | 253 | 30 | 2.14368 | 228.167 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2771.75 | 0.0963281 | 0.189779ms | 2577 | 30 | 21.8851 | 886.667 | 1(Win) |
| jeaiii::to_text | 2264.46 | 0.310667 | 0.216008ms | 2577 | 30 | 341.045 | 1085.3 | 2(Loss) |
| fmt::format_to | 1812.8 | 0.0706578 | 0.68343ms | 2577 | 30 | 27.5276 | 1355.7 | 3(Loss) |
| std::to_chars | 1204.58 | 0.0195382 | 2.57155ms | 2577 | 48 | 7.62722 | 2040.23 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2654.67 | 0.94027 | 13.5254ms | 25670 | 30 | 225558 | 9221.8 | 1(Win) |
| vn::to_chars | 1140.58 | 0.343402 | 3.26976ms | 25670 | 30 | 162979 | 21463.6 | 2(Loss) |
| fmt::format_to | 999.699 | 0.79004 | 4.60474ms | 25670 | 30 | 1.12288e+06 | 24488.2 | 3(Loss) |
| std::to_chars | 970.177 | 0.255064 | 4.67237ms | 25670 | 30 | 124271 | 25233.4 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 788.431 | 1.96771 | 183.807ms | 257058 | 30 | 1.12299e+09 | 310934 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 784.34 | 0.83152 | 59.0632ms | 257058 | 30 | 2.02638e+08 | 312555 | 1(Tie) |
| std::to_chars | 675.162 | 0.754036 | 70.0859ms | 257058 | 30 | 2.2488e+08 | 363097 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3234.31 | 0.0857071 | 0.071385ms | 519 | 30 | 0.516092 | 153.033 | 1(Win) |
| jeaiii::to_text | 2441.82 | 0.0675275 | 0.072906ms | 519 | 30 | 0.562069 | 202.7 | 2(Loss) |
| fmt::format_to | 1757.45 | 0.0824995 | 0.164889ms | 519 | 30 | 1.61954 | 281.633 | 3(Loss) |
| std::to_chars | 1637.85 | 0.0368687 | 0.092635ms | 519 | 30 | 0.372414 | 302.2 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3338.69 | 0.150544 | 0.902924ms | 5138 | 30 | 146.447 | 1467.63 | 1(Win) |
| fmt::format_to | 2412 | 0.517823 | 0.462386ms | 5138 | 30 | 3319.84 | 2031.5 | 2(Loss) |
| vn::to_chars | 2160.26 | 0.786393 | 0.490728ms | 5138 | 30 | 9545.01 | 2268.23 | 3(Loss) |
| std::to_chars | 1888.36 | 0.0990249 | 1.32225ms | 5138 | 30 | 198.075 | 2594.83 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1401 | 1.71484 | 6.9514ms | 51618 | 30 | 1.08917e+07 | 35136.9 | 1(Win) |
| std::to_chars **STATISTICAL TIE** | 886.198 | 0.702155 | 11.8669ms | 51618 | 30 | 4.56381e+06 | 55548.2 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 885.716 | 0.956346 | 77.1189ms | 51618 | 30 | 8.4755e+06 | 55578.5 | 2(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 822.388 | 2.30204 | 300.457ms | 515779 | 30 | 5.6875e+09 | 598118 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 810.445 | 1.18255 | 117.229ms | 515779 | 30 | 1.5454e+09 | 606932 | 1(Tie) |
| fmt::format_to | 701.39 | 1.61618 | 692.344ms | 515779 | 48 | 6.16639e+09 | 701300 | 3(Loss) |
| std::to_chars | 621.491 | 1.9769 | 142.611ms | 515779 | 30 | 7.34428e+09 | 791460 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2705.98 | 0.38802 | 0.07063ms | 562 | 30 | 17.7195 | 198.067 | 1(Win) |
| jeaiii::to_text | 2530.92 | 1.38531 | 0.069702ms | 562 | 30 | 258.185 | 211.767 | 2(Loss) |
| fmt::format_to | 1691.99 | 0.608783 | 0.087932ms | 562 | 30 | 111.564 | 316.767 | 3(Loss) |
| std::to_chars | 686.753 | 1.43715 | 0.168784ms | 562 | 30 | 3773.98 | 780.433 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4282.89 | 0.227806 | 0.363586ms | 5671 | 30 | 248.254 | 1262.77 | 1(Win) |
| jeaiii::to_text | 3975.61 | 0.267689 | 0.315193ms | 5671 | 30 | 397.826 | 1360.37 | 2(Loss) |
| std::to_chars | 2076.44 | 0.163789 | 0.556558ms | 5671 | 30 | 545.972 | 2604.6 | 3(Loss) |
| fmt::format_to | 1396.26 | 0.152498 | 0.817526ms | 5671 | 30 | 1046.73 | 3873.4 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3502.3 | 1.07923 | 8.21956ms | 56564 | 30 | 828931 | 15402.3 | 1(Win) |
| jeaiii::to_text | 2193.31 | 0.68318 | 25.9995ms | 56564 | 48 | 1.35517e+06 | 24594.7 | 2(Loss) |
| fmt::format_to | 1143.97 | 1.95589 | 17.1969ms | 56564 | 30 | 2.55189e+07 | 47154.9 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1498.39 | 1.58194 | 68.8794ms | 566375 | 30 | 9.75566e+08 | 360478 | 1(Win) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2365.35 | 0.105167 | 0.107651ms | 471 | 30 | 1.19655 | 189.9 | 1(Win) |
| fmt::format_to | 1450.22 | 0.15003 | 0.095127ms | 471 | 30 | 6.47816 | 309.733 | 2(Loss) |
| jeaiii::to_text | 1257.15 | 0.860826 | 0.104885ms | 471 | 30 | 283.803 | 357.3 | 3(Loss) |
| std::to_chars | 1206.61 | 0.0803641 | 0.160958ms | 471 | 30 | 2.68506 | 372.267 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4100.02 | 0.229175 | 1.11461ms | 4639 | 48 | 293.53 | 1079.04 | 1(Win) |
| fmt::format_to | 2233.83 | 0.292448 | 1.3307ms | 4639 | 30 | 1006.4 | 1980.5 | 2(Loss) |
| jeaiii::to_text **STATISTICAL TIE** | 1681.27 | 2.34567 | 0.633595ms | 4639 | 30 | 114295 | 2631.4 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 1626.39 | 0.123526 | 0.557465ms | 4639 | 30 | 338.717 | 2720.2 | 3(Tie) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1841.11 | 0.339036 | 12.9278ms | 46538 | 30 | 200386 | 24106.1 | 1(Win) |
| fmt::format_to | 1556.11 | 0.820152 | 29.4791ms | 46538 | 48 | 2.62642e+06 | 28521.2 | 2(Loss) |
| vn::to_chars | 1243.01 | 2.32526 | 10.7865ms | 46538 | 30 | 2.06791e+07 | 35705.4 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1352.73 | 1.32892 | 143.205ms | 466314 | 30 | 5.72597e+08 | 328750 | 1(Win) |
| jeaiii::to_text | 1123.39 | 1.75391 | 120.629ms | 466314 | 30 | 1.44621e+09 | 395865 | 2(Loss) |
| fmt::format_to | 1040.64 | 1.84127 | 77.4696ms | 466314 | 30 | 1.85743e+09 | 427345 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2967.66 | 0.0593276 | 0.065413ms | 487 | 30 | 0.258621 | 156.5 | 1(Win) |
| jeaiii::to_text | 2654.44 | 0.0798148 | 0.065374ms | 487 | 30 | 0.585057 | 174.967 | 2(Loss) |
| fmt::format_to | 1559.92 | 0.0851117 | 0.085087ms | 487 | 30 | 1.92644 | 297.733 | 3(Loss) |
| std::to_chars | 1324.95 | 0.0380373 | 0.099621ms | 487 | 30 | 0.533333 | 350.533 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4125.73 | 0.305584 | 0.273308ms | 4815 | 30 | 347.034 | 1113 | 1(Win) |
| jeaiii::to_text | 2531.53 | 1.96951 | 0.422786ms | 4815 | 30 | 38288 | 1813.9 | 2(Loss) |
| std::to_chars | 1662.1 | 0.863795 | 0.821122ms | 4815 | 30 | 17085.2 | 2762.73 | 3(Loss) |
| fmt::format_to | 1133.63 | 0.163094 | 0.883987ms | 4815 | 30 | 1309.33 | 4050.67 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3678.71 | 1.9191 | 3.55896ms | 48340 | 30 | 1.73515e+06 | 12531.7 | 1(Win) |
| fmt::format_to | 2139.17 | 0.375266 | 4.15903ms | 48340 | 30 | 196211 | 21550.7 | 2(Loss) |
| jeaiii::to_text | 1946.12 | 2.12246 | 4.23776ms | 48340 | 30 | 7.5836e+06 | 23688.5 | 3(Loss) |
| std::to_chars | 1398.11 | 1.35741 | 6.81986ms | 48340 | 30 | 6.00994e+06 | 32973.4 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2204.35 | 0.673772 | 150.339ms | 482848 | 30 | 5.943e+07 | 208896 | 1(Win) |
| fmt::format_to | 1495.89 | 1.56903 | 57.1335ms | 482848 | 30 | 6.99849e+08 | 307829 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4046.92 | 0.0570939 | 0.076376ms | 991 | 30 | 0.533333 | 233.533 | 1(Win) |
| fmt::format_to | 2387.6 | 0.0776383 | 0.103652ms | 991 | 30 | 2.83333 | 395.833 | 2(Loss) |
| jeaiii::to_text | 1842.88 | 0.208865 | 0.130397ms | 991 | 30 | 34.4195 | 512.833 | 3(Loss) |
| std::to_chars | 1579.45 | 0.0396482 | 0.327909ms | 991 | 30 | 1.68851 | 598.367 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5236.39 | 0.150173 | 0.389557ms | 10008 | 30 | 224.769 | 1822.7 | 1(Win) |
| jeaiii::to_text | 4669.15 | 0.26895 | 0.479511ms | 10008 | 30 | 906.74 | 2044.13 | 2(Loss) |
| fmt::format_to | 3254.87 | 0.0687387 | 0.597293ms | 10008 | 30 | 121.885 | 2932.33 | 3(Loss) |
| std::to_chars | 1871.38 | 0.0388417 | 1.15087ms | 10008 | 30 | 117.73 | 5100.17 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1779.31 | 0.666802 | 9.43671ms | 99721 | 30 | 3.81051e+06 | 53448.4 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1770.78 | 0.981913 | 12.2937ms | 99721 | 30 | 8.34275e+06 | 53705.8 | 1(Tie) |
| fmt::format_to | 1450.72 | 0.56516 | 13.8073ms | 99721 | 30 | 4.11785e+06 | 65554.7 | 3(Loss) |
| std::to_chars | 996.803 | 1.11958 | 18.5942ms | 99721 | 30 | 3.42283e+07 | 95406.3 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1262.87 | 1.7401 | 755.208ms | 997790 | 48 | 8.25192e+09 | 753498 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1205.1 | 2.27871 | 144.666ms | 997790 | 30 | 9.71247e+09 | 789614 | 1(Tie) |
| fmt::format_to | 1082.53 | 2.2317 | 163.077ms | 997790 | 30 | 1.15449e+10 | 879019 | 3(Loss) |
| std::to_chars | 884.148 | 1.94157 | 521.422ms | 997790 | 30 | 1.30996e+10 | 1.07625e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4342.59 | 0.0557641 | 0.07428ms | 1042 | 30 | 0.488506 | 228.833 | 1(Win) |
| jeaiii::to_text | 3533.05 | 0.0721884 | 0.07907ms | 1042 | 30 | 1.23678 | 281.267 | 2(Loss) |
| fmt::format_to | 2562.04 | 0.0808084 | 0.096363ms | 1042 | 30 | 2.94713 | 387.867 | 3(Loss) |
| std::to_chars | 828.222 | 0.0299262 | 0.271908ms | 1042 | 30 | 3.86782 | 1199.83 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5055.7 | 0.13662 | 0.444038ms | 10484 | 30 | 218.999 | 1977.63 | 1(Win) |
| jeaiii::to_text | 4753.18 | 0.279979 | 0.471627ms | 10484 | 30 | 1040.53 | 2103.5 | 2(Loss) |
| fmt::format_to | 3314.76 | 0.0823232 | 0.636346ms | 10484 | 30 | 184.976 | 3016.3 | 3(Loss) |
| std::to_chars | 2026.88 | 0.0289925 | 0.952814ms | 10484 | 30 | 61.3609 | 4932.87 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2602.96 | 0.932582 | 17.8373ms | 104807 | 30 | 3.84717e+06 | 38399.3 | 1(Win) |
| jeaiii::to_text | 2251.19 | 0.513052 | 8.27216ms | 104807 | 30 | 1.55669e+06 | 44399.6 | 2(Loss) |
| fmt::format_to | 1701.6 | 0.641623 | 27.6794ms | 104807 | 30 | 4.26136e+06 | 58740 | 3(Loss) |
| std::to_chars | 1255.29 | 1.57071 | 14.2972ms | 104807 | 30 | 4.69252e+07 | 79624.5 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1954.78 | 2.27478 | 91.5146ms | 1048417 | 30 | 4.06137e+09 | 511489 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1908.55 | 2.41359 | 231.125ms | 1048417 | 30 | 4.7963e+09 | 523877 | 1(Tie) |
| fmt::format_to | 1412.53 | 2.30873 | 127.61ms | 1048417 | 30 | 8.012e+09 | 707843 | 3(Loss) |
| std::to_chars | 1232.51 | 1.93729 | 754.067ms | 1048417 | 48 | 1.18555e+10 | 811230 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4405.47 | 0.0615963 | 0.06661ms | 957 | 30 | 0.488506 | 207.167 | 1(Win) |
| jeaiii::to_text | 4053.89 | 0.17002 | 0.0699ms | 957 | 30 | 4.3954 | 225.133 | 2(Loss) |
| fmt::format_to | 2390.43 | 0.084615 | 0.088101ms | 957 | 30 | 3.13103 | 381.8 | 3(Loss) |
| std::to_chars | 1543.58 | 0.0362044 | 0.12714ms | 957 | 30 | 1.37471 | 591.267 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5484.78 | 0.0902524 | 0.3718ms | 9501 | 30 | 66.6897 | 1652 | 1(Win) |
| jeaiii::to_text | 4397.98 | 0.137832 | 0.447539ms | 9501 | 30 | 241.909 | 2060.23 | 2(Loss) |
| std::to_chars | 1955.29 | 0.0491487 | 0.980473ms | 9501 | 30 | 155.62 | 4634.03 | 3(Loss) |
| fmt::format_to | 1504.14 | 0.0402906 | 1.17136ms | 9501 | 30 | 176.723 | 6023.97 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2583.15 | 0.805374 | 16.1118ms | 94825 | 30 | 2.38485e+06 | 35008.4 | 1(Win) |
| jeaiii::to_text | 2156.06 | 0.117932 | 20.8658ms | 94825 | 30 | 73402 | 41943.2 | 2(Loss) |
| fmt::format_to | 1644.05 | 1.43201 | 10.0177ms | 94825 | 30 | 1.86136e+07 | 55005.9 | 3(Loss) |
| std::to_chars | 1318.29 | 0.723178 | 12.8328ms | 94825 | 30 | 7.38307e+06 | 68598.2 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1978.53 | 1.80074 | 426.106ms | 948629 | 48 | 3.25424e+09 | 457250 | 1(Win) |
| jeaiii::to_text | 1649.23 | 1.6429 | 498.376ms | 948629 | 48 | 3.89845e+09 | 548549 | 2(Loss) |
| fmt::format_to | 1328.28 | 2.38155 | 615.069ms | 948629 | 48 | 1.26293e+10 | 681096 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5303.02 | 0.0729687 | 0.063068ms | 977 | 30 | 0.493103 | 175.7 | 1(Win) |
| jeaiii::to_text | 4316.27 | 0.0692948 | 0.066596ms | 977 | 30 | 0.671264 | 215.867 | 2(Loss) |
| fmt::format_to | 2580.52 | 0.06219 | 0.08961ms | 977 | 30 | 1.51264 | 361.067 | 3(Loss) |
| std::to_chars | 1596.54 | 0.114017 | 0.141411ms | 977 | 30 | 13.2828 | 583.6 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5335.05 | 0.122088 | 0.330761ms | 9741 | 30 | 135.582 | 1741.27 | 1(Win) |
| jeaiii::to_text | 4832.87 | 0.0526419 | 0.356397ms | 9741 | 30 | 30.7172 | 1922.2 | 2(Loss) |
| fmt::format_to | 3351.36 | 0.202914 | 0.590129ms | 9741 | 30 | 949.099 | 2771.93 | 3(Loss) |
| std::to_chars | 1979.01 | 0.0341636 | 0.926074ms | 9741 | 30 | 77.154 | 4694.13 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5211.98 | 0.673075 | 17.5618ms | 97364 | 48 | 690174 | 17815.4 | 1(Win) |
| jeaiii::to_text | 4956.9 | 0.568544 | 4.13969ms | 97364 | 30 | 340271 | 18732.2 | 2(Loss) |
| fmt::format_to | 2128.84 | 1.29812 | 8.65687ms | 97364 | 30 | 9.61742e+06 | 43616.9 | 3(Loss) |
| std::to_chars | 1657.06 | 1.81172 | 26.1077ms | 97364 | 30 | 3.09189e+07 | 56035 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3608.19 | 1.71671 | 48.8132ms | 974263 | 30 | 5.8626e+08 | 257506 | 1(Win) |
| jeaiii::to_text | 3274.39 | 0.393289 | 329.032ms | 974263 | 48 | 5.97798e+07 | 283756 | 2(Loss) |
| fmt::format_to | 2024.54 | 1.50707 | 85.5597ms | 974263 | 30 | 1.43513e+09 | 458935 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6051.8 | 0.0534706 | 0.094442ms | 1938 | 30 | 0.8 | 305.4 | 1(Win) |
| jeaiii::to_text | 4109.29 | 0.0529627 | 0.120135ms | 1938 | 30 | 1.7023 | 449.767 | 2(Loss) |
| fmt::format_to | 2802.6 | 0.0557192 | 0.364225ms | 1938 | 30 | 4.05057 | 659.467 | 3(Loss) |
| std::to_chars | 1725.59 | 0.0519994 | 0.210157ms | 1938 | 30 | 9.30575 | 1071.07 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6804.29 | 0.174895 | 0.557358ms | 19362 | 30 | 675.789 | 2713.73 | 1(Win) |
| jeaiii::to_text | 4444.02 | 0.0408219 | 2.03961ms | 19362 | 30 | 86.3092 | 4155.03 | 2(Loss) |
| fmt::format_to | 2787.13 | 0.0872611 | 1.30283ms | 19362 | 30 | 1002.64 | 6625.1 | 3(Loss) |
| std::to_chars | 2024.75 | 0.422047 | 1.74639ms | 19362 | 30 | 44442.7 | 9119.67 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3713.24 | 0.827326 | 10.0919ms | 193801 | 30 | 5.08722e+06 | 49774 | 1(Win) |
| jeaiii::to_text | 2824.45 | 0.374446 | 13.4765ms | 193801 | 30 | 1.80113e+06 | 65436.9 | 2(Loss) |
| std::to_chars | 1518.81 | 1.05294 | 285.858ms | 193801 | 30 | 4.9253e+07 | 121690 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3026.49 | 0.624914 | 114.639ms | 1937685 | 30 | 4.36768e+08 | 610583 | 1(Win) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5911.13 | 0.505969 | 0.095708ms | 1982 | 30 | 78.5299 | 319.767 | 1(Win) |
| jeaiii::to_text | 3468.22 | 0.0603126 | 0.121431ms | 1982 | 30 | 3.24138 | 545 | 2(Loss) |
| fmt::format_to | 2147.53 | 0.094679 | 0.184961ms | 1982 | 30 | 20.8333 | 880.167 | 3(Loss) |
| std::to_chars | 2086.75 | 0.115897 | 0.431057ms | 1982 | 30 | 33.0621 | 905.8 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7173.84 | 0.349402 | 0.550947ms | 19885 | 30 | 2559.29 | 2643.47 | 1(Win) |
| jeaiii::to_text | 4516.52 | 0.0471748 | 0.985613ms | 19885 | 30 | 117.702 | 4198.77 | 2(Loss) |
| fmt::format_to | 2756.76 | 0.0598744 | 1.42025ms | 19885 | 30 | 508.93 | 6879.03 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6400.03 | 1.20671 | 5.47946ms | 198776 | 30 | 3.83258e+06 | 29619.8 | 1(Win) |
| jeaiii::to_text | 4104.82 | 1.87673 | 8.40252ms | 198776 | 30 | 2.25353e+07 | 46181.7 | 2(Loss) |
| fmt::format_to | 2535.65 | 1.2609 | 14.3825ms | 198776 | 30 | 2.66583e+07 | 74760.8 | 3(Loss) |
| std::to_chars | 2027.66 | 0.639695 | 18.5387ms | 198776 | 30 | 1.07302e+07 | 93490.9 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5978.7 | 1.83437 | 61.9236ms | 1988038 | 30 | 1.01516e+09 | 317116 | 1(Win) |
| fmt::format_to | 2322.25 | 2.01247 | 796.058ms | 1988038 | 48 | 1.29578e+10 | 816424 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5028 | 0.101009 | 0.09534ms | 1885 | 30 | 3.91264 | 357.533 | 1(Win) |
| jeaiii::to_text | 3292.25 | 0.0630042 | 0.133362ms | 1885 | 30 | 3.55057 | 546.033 | 2(Loss) |
| fmt::format_to | 2149.73 | 0.0569574 | 0.169931ms | 1885 | 30 | 6.80575 | 836.233 | 3(Loss) |
| std::to_chars | 1768.03 | 0.0954461 | 0.209258ms | 1885 | 30 | 28.254 | 1016.77 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6853.31 | 0.10662 | 0.593178ms | 18871 | 30 | 235.172 | 2626 | 1(Win) |
| jeaiii::to_text | 4303.98 | 0.147694 | 0.835065ms | 18871 | 30 | 1144.19 | 4181.43 | 2(Loss) |
| fmt::format_to | 2556.45 | 0.0700508 | 1.40969ms | 18871 | 30 | 729.564 | 7039.77 | 3(Loss) |
| std::to_chars | 1943.34 | 0.13971 | 1.7073ms | 18871 | 30 | 5021.91 | 9260.77 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6441.11 | 0.6814 | 5.16398ms | 188822 | 30 | 1.0887e+06 | 27957.1 | 1(Win) |
| jeaiii::to_text | 4069.88 | 0.745811 | 10.5518ms | 188822 | 30 | 3.26679e+06 | 44245.7 | 2(Loss) |
| fmt::format_to | 2410.46 | 1.62782 | 14.6154ms | 188822 | 30 | 4.43649e+07 | 74705.6 | 3(Loss) |
| std::to_chars | 1951.12 | 0.577122 | 16.5597ms | 188822 | 30 | 8.51131e+06 | 92293.2 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5731.16 | 1.8471 | 300.214ms | 1887997 | 48 | 1.61637e+09 | 314166 | 1(Win) |
| jeaiii::to_text | 3673.42 | 1.57653 | 95.4466ms | 1887997 | 30 | 1.79139e+09 | 490153 | 2(Loss) |
| fmt::format_to | 2250.54 | 2.31849 | 755.785ms | 1887997 | 48 | 1.65151e+10 | 800045 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6121.3 | 0.101027 | 0.148718ms | 1941 | 30 | 2.8 | 302.4 | 1(Win) |
| jeaiii::to_text | 4580.75 | 0.0560926 | 0.108221ms | 1941 | 30 | 1.54138 | 404.1 | 2(Loss) |
| fmt::format_to | 2251.47 | 0.0544206 | 0.171262ms | 1941 | 30 | 6.00575 | 822.167 | 3(Loss) |
| std::to_chars | 1715.77 | 0.0774522 | 0.230151ms | 1941 | 30 | 20.9471 | 1078.87 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7574.43 | 1.64295 | 0.499004ms | 19386 | 30 | 48244.4 | 2440.83 | 1(Win) |
| jeaiii::to_text | 4413.9 | 0.0542938 | 1.84772ms | 19386 | 30 | 155.151 | 4188.57 | 2(Loss) |
| fmt::format_to | 2915.34 | 0.0721854 | 3.20702ms | 19386 | 30 | 628.662 | 6341.6 | 3(Loss) |
| std::to_chars | 1898.91 | 0.215147 | 1.82931ms | 19386 | 30 | 13163.1 | 9736.07 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4388.77 | 0.497647 | 8.62446ms | 194044 | 30 | 1.32093e+06 | 42165.5 | 1(Win) |
| jeaiii::to_text | 3198.08 | 2.20366 | 10.4051ms | 194044 | 30 | 4.87792e+07 | 57864.4 | 2(Loss) |
| fmt::format_to | 1795.44 | 1.14022 | 19.9228ms | 194044 | 30 | 4.1434e+07 | 103069 | 3(Loss) |
| std::to_chars | 1512.34 | 0.635434 | 23.9511ms | 194044 | 30 | 1.8137e+07 | 122363 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3181.58 | 1.85573 | 599.322ms | 1939951 | 48 | 5.58944e+09 | 581498 | 1(Win) |
| fmt::format_to | 1541.55 | 2.1451 | 1187.13ms | 1939951 | 48 | 3.18128e+10 | 1.20014e+06 | 2(Loss) |
