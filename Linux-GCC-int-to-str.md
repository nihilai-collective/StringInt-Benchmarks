# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1161.27 | 0.381316 | 0.051447ms | 259 | 30 | 19.7345 | 212.7 | 1.68057 | 1(Win) |
| fmt::format_to | 820.24 | 0.317536 | 0.067155ms | 259 | 30 | 27.4299 | 301.133 | 2.52291 | 2(Loss) |
| vn::to_chars | 688.41 | 1.82835 | 0.076793ms | 259 | 30 | 1291.06 | 358.8 | 3.02703 | 3(Loss) |
| std::to_chars | 654.078 | 0.312418 | 0.109454ms | 259 | 30 | 41.7575 | 377.633 | 3.23179 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1304.44 | 0.085732 | 0.371102ms | 2637 | 30 | 81.9552 | 1927.9 | 1.75657 | 1(Win) |
| vn::to_chars | 1185.61 | 0.10847 | 0.404333ms | 2637 | 30 | 158.809 | 2121.13 | 1.93312 | 2(Loss) |
| fmt::format_to | 966.416 | 0.1085 | 0.493219ms | 2637 | 30 | 239.151 | 2602.23 | 2.38123 | 3(Loss) |
| std::to_chars | 731.405 | 0.0755 | 0.68734ms | 2637 | 30 | 202.171 | 3438.37 | 3.15617 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1218.01 | 0.0303193 | 9.04657ms | 26414 | 30 | 1179.57 | 20681.5 | 1.91138 | 1(Win) |
| vn::to_chars | 1123.7 | 1.92486 | 9.58826ms | 26414 | 30 | 5.58584e+06 | 22417.3 | 2.07193 | 2(Loss) |
| fmt::format_to | 983.494 | 1.20542 | 4.83188ms | 26414 | 30 | 2.85973e+06 | 25613.1 | 2.36812 | 3(Loss) |
| std::to_chars | 717.534 | 0.773708 | 6.81436ms | 26414 | 30 | 2.2134e+06 | 35106.9 | 3.24694 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 351.731 | 0.124061 | 129.375ms | 264512 | 30 | 2.37497e+07 | 717191 | 6.6298 | 1(Win) |
| vn::to_chars | 344.926 | 0.148975 | 131.957ms | 264512 | 30 | 3.56112e+07 | 731340 | 6.76054 | 2(Loss) |
| fmt::format_to | 321.412 | 0.118952 | 141.982ms | 264512 | 30 | 2.61476e+07 | 784843 | 7.25528 | 3(Loss) |
| std::to_chars | 259.978 | 0.0665677 | 174.835ms | 264512 | 30 | 1.2516e+07 | 970306 | 8.96983 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1439.94 | 0.397354 | 0.049532ms | 313 | 30 | 20.3552 | 207.3 | 1.34249 | 1(Win) |
| jeaiii::to_text | 1337.97 | 0.486451 | 0.052778ms | 313 | 30 | 35.3345 | 223.1 | 1.45836 | 2(Loss) |
| fmt::format_to | 962.903 | 0.345843 | 0.073567ms | 313 | 30 | 34.4828 | 310 | 2.1394 | 3(Loss) |
| std::to_chars | 782.028 | 0.152375 | 0.081762ms | 313 | 30 | 10.1483 | 381.7 | 2.71097 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1628.71 | 0.0807151 | 0.350412ms | 3133 | 30 | 65.7759 | 1834.5 | 1.40552 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1626.43 | 0.121241 | 0.348319ms | 3133 | 30 | 148.823 | 1837.07 | 1.40578 | 1(Tie) |
| fmt::format_to | 1095.86 | 0.222499 | 0.506934ms | 3133 | 30 | 1104.05 | 2726.5 | 2.10018 | 3(Loss) |
| std::to_chars | 831.579 | 0.0982874 | 0.682121ms | 3133 | 30 | 374.138 | 3593 | 2.7769 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1684.53 | 1.46702 | 3.33056ms | 31475 | 30 | 2.05006e+06 | 17819.1 | 1.38165 | 1(Win) |
| jeaiii::to_text | 1592.04 | 1.4495 | 3.53019ms | 31475 | 30 | 2.24068e+06 | 18854.4 | 1.46214 | 2(Loss) |
| fmt::format_to | 1112.7 | 1.56762 | 4.93432ms | 31475 | 30 | 5.36512e+06 | 26976.7 | 2.09326 | 3(Loss) |
| std::to_chars | 799.927 | 1.77643 | 6.67044ms | 31475 | 30 | 1.33305e+07 | 37524.5 | 2.91231 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 746.233 | 0.627976 | 72.0858ms | 314263 | 30 | 1.90829e+08 | 401623 | 3.12459 | 1(Win) |
| jeaiii::to_text | 718.342 | 0.310354 | 75.1476ms | 314263 | 30 | 5.0299e+07 | 417217 | 3.24607 | 2(Loss) |
| fmt::format_to | 652.323 | 0.402868 | 82.667ms | 314263 | 30 | 1.0278e+08 | 459442 | 3.57449 | 3(Loss) |
| std::to_chars | 534.9 | 0.220841 | 101.158ms | 314263 | 30 | 4.59325e+07 | 560300 | 4.35923 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1077.98 | 0.4706 | 0.04804ms | 222 | 30 | 25.6276 | 196.4 | 1.77327 | 1(Win) |
| jeaiii::to_text | 954.678 | 0.28981 | 0.051656ms | 222 | 30 | 12.392 | 221.767 | 2.0452 | 2(Loss) |
| fmt::format_to | 747.056 | 0.30387 | 0.062456ms | 222 | 30 | 22.2483 | 283.4 | 2.72192 | 3(Loss) |
| std::to_chars | 544.35 | 0.179465 | 0.081832ms | 222 | 30 | 14.6161 | 388.933 | 3.87748 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1133.71 | 0.0483639 | 0.862115ms | 2175 | 30 | 23.4897 | 1829.6 | 2.01928 | 1(Win) |
| vn::to_chars | 1127.02 | 0.0527968 | 0.895638ms | 2175 | 30 | 28.3264 | 1840.47 | 2.02984 | 2(Loss) |
| fmt::format_to | 864.688 | 0.0717065 | 0.492067ms | 2175 | 30 | 88.7644 | 2398.83 | 2.65727 | 3(Loss) |
| std::to_chars | 609.497 | 0.0986745 | 0.630835ms | 2175 | 30 | 338.303 | 3403.2 | 3.78863 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1142.86 | 0.0360223 | 3.49354ms | 21434 | 30 | 1245.33 | 17885.9 | 2.03672 | 1(Win) |
| vn::to_chars | 1106.91 | 1.43078 | 3.69645ms | 21434 | 30 | 2.09436e+06 | 18466.8 | 2.10294 | 2(Loss) |
| fmt::format_to | 833.798 | 0.642007 | 22.3331ms | 21434 | 48 | 1.18906e+06 | 24515.6 | 2.79311 | 3(Loss) |
| std::to_chars | 569.592 | 0.777981 | 6.57729ms | 21434 | 30 | 2.33851e+06 | 35887.2 | 4.0903 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 516.287 | 0.253353 | 71.639ms | 215129 | 30 | 3.04081e+07 | 397382 | 4.51608 | 1(Win) |
| jeaiii::to_text | 496.51 | 0.308413 | 74.5598ms | 215129 | 30 | 4.87223e+07 | 413210 | 4.69608 | 2(Loss) |
| fmt::format_to | 471.529 | 0.274991 | 78.4448ms | 215129 | 30 | 4.29477e+07 | 435102 | 4.94452 | 3(Loss) |
| std::to_chars | 364.975 | 0.198354 | 102.004ms | 215129 | 30 | 3.72972e+07 | 562129 | 6.38882 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1263.51 | 0.47992 | 0.047078ms | 258 | 30 | 26.2023 | 194.733 | 1.50672 | 1(Win) |
| jeaiii::to_text | 1233.53 | 0.382135 | 0.047869ms | 258 | 30 | 17.4299 | 199.467 | 1.55749 | 2(Loss) |
| fmt::format_to | 830.775 | 0.305917 | 0.065473ms | 258 | 30 | 24.6264 | 296.167 | 2.47545 | 3(Loss) |
| std::to_chars | 616.353 | 0.497158 | 0.084197ms | 258 | 30 | 118.166 | 399.2 | 3.44393 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1561.53 | 0.0514515 | 0.302272ms | 2563 | 30 | 19.4586 | 1565.3 | 1.45966 | 1(Win) |
| jeaiii::to_text | 1524.47 | 0.105204 | 1.83058ms | 2563 | 48 | 136.574 | 1603.35 | 1.49682 | 2(Loss) |
| fmt::format_to | 960.105 | 0.0877735 | 0.534976ms | 2563 | 30 | 149.799 | 2545.83 | 2.39549 | 3(Loss) |
| std::to_chars | 667.14 | 0.0684938 | 0.715994ms | 2563 | 30 | 188.924 | 3663.8 | 3.45592 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1593.21 | 0.0513994 | 2.97188ms | 25721 | 30 | 1878.74 | 15396.2 | 1.46039 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1555.49 | 1.8414 | 3.01213ms | 25721 | 30 | 2.52963e+06 | 15769.6 | 1.49582 | 1(Tie) |
| fmt::format_to | 926.831 | 1.37348 | 4.95367ms | 25721 | 30 | 3.96408e+06 | 26465.9 | 2.51296 | 3(Loss) |
| std::to_chars | 591.538 | 0.871503 | 7.68592ms | 25721 | 30 | 3.91804e+06 | 41467.2 | 3.93902 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 531.577 | 0.333389 | 82.969ms | 256723 | 30 | 7.07329e+07 | 460573 | 4.38648 | 1(Win) |
| vn::to_chars | 501.111 | 0.393546 | 88.2051ms | 256723 | 30 | 1.10911e+08 | 488575 | 4.65301 | 2(Loss) |
| fmt::format_to | 455.262 | 0.176591 | 96.942ms | 256723 | 30 | 2.70562e+07 | 537778 | 5.12195 | 3(Loss) |
| std::to_chars | 371.807 | 0.259814 | 118.738ms | 256723 | 30 | 8.78092e+07 | 658486 | 6.27173 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2167.44 | 0.307555 | 0.054972ms | 520 | 30 | 14.8552 | 228.8 | 0.907692 | 1(Win) |
| jeaiii::to_text | 1624.52 | 0.355718 | 0.067626ms | 520 | 30 | 35.3747 | 305.267 | 1.25955 | 2(Loss) |
| fmt::format_to | 1068.24 | 0.186388 | 0.09645ms | 520 | 30 | 22.4609 | 464.233 | 2.02006 | 3(Loss) |
| std::to_chars | 828.774 | 0.195698 | 0.119963ms | 520 | 30 | 41.1368 | 598.367 | 2.64788 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2332.54 | 0.0639626 | 0.411116ms | 5164 | 30 | 54.7126 | 2111.33 | 0.983043 | 1(Win) |
| jeaiii::to_text | 1825.37 | 0.972579 | 0.507906ms | 5164 | 30 | 20655.9 | 2697.97 | 1.26153 | 2(Loss) |
| std::to_chars | 879.775 | 0.0872299 | 1.0563ms | 5164 | 30 | 715.289 | 5597.77 | 2.63326 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2369.65 | 1.46384 | 4.0217ms | 51705 | 30 | 2.78358e+06 | 20808.8 | 0.982449 | 1(Win) |
| jeaiii::to_text | 1815.05 | 1.06147 | 5.29752ms | 51705 | 30 | 2.49473e+06 | 27167.2 | 1.2832 | 2(Loss) |
| fmt::format_to | 1090.29 | 0.855829 | 8.46921ms | 51705 | 30 | 4.49441e+06 | 45226.1 | 2.13731 | 3(Loss) |
| std::to_chars | 527.249 | 0.444118 | 17.3162ms | 51705 | 30 | 5.1755e+06 | 93522.7 | 4.42141 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 638.699 | 0.176905 | 140.518ms | 516356 | 30 | 5.58094e+07 | 770998 | 3.65104 | 1(Win) |
| jeaiii::to_text | 584.82 | 0.126461 | 151.537ms | 516356 | 30 | 3.40165e+07 | 842029 | 3.98741 | 2(Loss) |
| fmt::format_to | 473.265 | 0.110312 | 187.144ms | 516356 | 30 | 3.95237e+07 | 1.04051e+06 | 4.9274 | 3(Loss) |
| std::to_chars | 390.977 | 2.43681 | 217.043ms | 516356 | 30 | 2.82593e+10 | 1.2595e+06 | 5.96443 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2348.04 | 0.374105 | 0.054982ms | 563 | 30 | 21.954 | 228.667 | 0.839787 | 1(Win) |
| jeaiii::to_text | 1734.23 | 0.187509 | 0.067435ms | 563 | 30 | 10.1103 | 309.6 | 1.18798 | 2(Loss) |
| fmt::format_to | 1134.57 | 0.241398 | 0.097672ms | 563 | 30 | 39.1506 | 473.233 | 1.90764 | 3(Loss) |
| std::to_chars | 915.098 | 0.158863 | 0.11812ms | 563 | 30 | 26.0644 | 586.733 | 2.38461 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2676.63 | 0.121029 | 0.391311ms | 5667 | 30 | 179.154 | 2019.13 | 0.855738 | 1(Win) |
| jeaiii::to_text | 1306.6 | 1.38471 | 1.9216ms | 5667 | 30 | 98414.8 | 4136.3 | 1.76605 | 2(Loss) |
| fmt::format_to | 1189.59 | 0.0782086 | 0.849457ms | 5667 | 30 | 378.74 | 4543.13 | 1.94504 | 3(Loss) |
| std::to_chars | 948.697 | 0.104449 | 1.07972ms | 5667 | 30 | 1062.13 | 5696.73 | 2.44234 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2660.93 | 1.4417 | 3.76021ms | 56694 | 30 | 2.57441e+06 | 20319.1 | 0.874892 | 1(Win) |
| jeaiii::to_text | 1943.42 | 1.59742 | 5.14704ms | 56694 | 30 | 5.92515e+06 | 27820.9 | 1.19831 | 2(Loss) |
| fmt::format_to | 1008.29 | 0.773217 | 9.89438ms | 56694 | 30 | 5.15733e+06 | 53622.9 | 2.31131 | 3(Loss) |
| std::to_chars | 789.55 | 0.574062 | 12.5925ms | 56694 | 30 | 4.63611e+06 | 68479 | 2.95208 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1217.99 | 0.250647 | 81.3953ms | 566100 | 30 | 3.70293e+07 | 443250 | 1.91443 | 1(Win) |
| jeaiii::to_text | 1006.49 | 0.320889 | 97.7401ms | 566100 | 30 | 8.88788e+07 | 536393 | 2.31678 | 2(Loss) |
| fmt::format_to | 751.307 | 0.109935 | 130.718ms | 566100 | 30 | 1.87217e+07 | 718581 | 3.10377 | 3(Loss) |
| std::to_chars | 675.156 | 0.167403 | 733.142ms | 566100 | 48 | 8.60095e+07 | 799630 | 3.45384 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1983.78 | 0.386384 | 0.053099ms | 462 | 30 | 22.0931 | 222.1 | 0.991486 | 1(Win) |
| jeaiii::to_text | 1466.05 | 0.354494 | 0.066443ms | 462 | 30 | 34.0506 | 300.533 | 1.40166 | 2(Loss) |
| fmt::format_to | 997.128 | 0.270344 | 0.091791ms | 462 | 30 | 42.8092 | 441.867 | 2.14769 | 3(Loss) |
| std::to_chars | 418.037 | 0.862471 | 0.234597ms | 462 | 30 | 2478.93 | 1053.97 | 5.35606 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2235.58 | 0.0528725 | 0.38642ms | 4680 | 30 | 33.4264 | 1996.43 | 1.02468 | 1(Win) |
| jeaiii::to_text | 1676.63 | 0.0653146 | 0.521271ms | 4680 | 30 | 90.6897 | 2662 | 1.37264 | 2(Loss) |
| std::to_chars | 802.247 | 0.0721335 | 2.38154ms | 4680 | 30 | 483.137 | 5563.37 | 2.888 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1869.13 | 0.0355943 | 4.45154ms | 46601 | 30 | 2148.78 | 23776.9 | 1.24588 | 1(Win) |
| jeaiii::to_text | 1351.38 | 0.871591 | 6.11233ms | 46601 | 30 | 2.4648e+06 | 32886.5 | 1.72395 | 2(Loss) |
| fmt::format_to | 1036.52 | 0.625454 | 7.83786ms | 46601 | 30 | 2.15747e+06 | 42876.2 | 2.24819 | 3(Loss) |
| std::to_chars | 620.575 | 2.2208 | 12.7821ms | 46601 | 30 | 7.58826e+07 | 71614.5 | 3.7556 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1001.74 | 0.209146 | 80.1751ms | 466147 | 30 | 2.58438e+07 | 443781 | 2.32771 | 1(Win) |
| jeaiii::to_text | 803.144 | 0.292556 | 99.7695ms | 466147 | 30 | 7.8668e+07 | 553515 | 2.90337 | 2(Loss) |
| fmt::format_to | 662.254 | 0.383594 | 120.492ms | 466147 | 30 | 1.98912e+08 | 671272 | 3.52105 | 3(Loss) |
| std::to_chars | 566.38 | 0.123097 | 142.19ms | 466147 | 30 | 2.80058e+07 | 784901 | 4.11722 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2210.91 | 0.487359 | 0.051095ms | 487 | 30 | 31.4437 | 210.067 | 0.882067 | 1(Win) |
| jeaiii::to_text | 1694.21 | 0.371324 | 0.060272ms | 487 | 30 | 31.0851 | 274.133 | 1.20089 | 2(Loss) |
| fmt::format_to | 1015.98 | 0.227078 | 0.094326ms | 487 | 30 | 32.3264 | 457.133 | 2.118 | 3(Loss) |
| std::to_chars | 812.288 | 0.401609 | 0.114824ms | 487 | 30 | 158.185 | 571.767 | 2.69144 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2161.61 | 0.0513289 | 0.425373ms | 4821 | 30 | 35.7575 | 2126.97 | 1.06129 | 1(Win) |
| jeaiii::to_text | 1979.85 | 0.101288 | 0.433477ms | 4821 | 30 | 165.978 | 2322.23 | 1.16071 | 2(Loss) |
| fmt::format_to | 1070.39 | 0.0351601 | 0.808747ms | 4821 | 30 | 68.4241 | 4295.3 | 2.16066 | 3(Loss) |
| std::to_chars | 815.03 | 0.0735012 | 1.05105ms | 4821 | 30 | 515.748 | 5641.1 | 2.84317 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2404.99 | 1.60911 | 3.6314ms | 48362 | 30 | 2.85676e+06 | 19177.5 | 0.9679 | 1(Win) |
| jeaiii::to_text | 1811.71 | 1.6533 | 4.63502ms | 48362 | 30 | 5.31444e+06 | 25457.5 | 1.2854 | 2(Loss) |
| fmt::format_to | 943.793 | 0.786194 | 8.84928ms | 48362 | 30 | 4.42829e+06 | 48868.3 | 2.46923 | 3(Loss) |
| std::to_chars | 744.894 | 0.465799 | 11.2332ms | 48362 | 30 | 2.4954e+06 | 61917 | 3.12904 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1624.21 | 0.30039 | 51.5282ms | 483051 | 30 | 2.17767e+07 | 283629 | 1.43552 | 1(Win) |
| jeaiii::to_text | 1344.43 | 0.302063 | 61.8871ms | 483051 | 30 | 3.21385e+07 | 342653 | 1.73427 | 2(Loss) |
| fmt::format_to | 828.194 | 0.184306 | 100.332ms | 483051 | 30 | 3.15299e+07 | 556239 | 2.81562 | 3(Loss) |
| std::to_chars | 708.506 | 0.160941 | 117.32ms | 483051 | 30 | 3.28512e+07 | 650204 | 3.29123 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2472 | 0.25469 | 0.086061ms | 1004 | 30 | 29.1954 | 387.333 | 0.856474 | 1(Win) |
| jeaiii::to_text | 1828.43 | 0.203568 | 0.1072ms | 1004 | 30 | 34.092 | 523.667 | 1.18908 | 2(Loss) |
| fmt::format_to | 1313.01 | 0.240383 | 0.143347ms | 1004 | 30 | 92.1851 | 729.233 | 1.69266 | 3(Loss) |
| std::to_chars | 947.602 | 0.226908 | 0.196836ms | 1004 | 30 | 157.702 | 1010.43 | 2.37195 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2577.76 | 0.119388 | 0.756369ms | 9971 | 30 | 581.886 | 3688.9 | 0.895704 | 1(Win) |
| jeaiii::to_text | 2005.11 | 0.0780291 | 0.916397ms | 9971 | 30 | 410.806 | 4742.43 | 1.15396 | 2(Loss) |
| fmt::format_to | 1377.02 | 0.0884064 | 1.30476ms | 9971 | 30 | 1118.12 | 6905.57 | 1.68501 | 3(Loss) |
| std::to_chars | 977.845 | 0.0537458 | 4.17131ms | 9971 | 30 | 819.499 | 9724.53 | 2.37636 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2482.28 | 0.748496 | 7.42808ms | 99848 | 30 | 2.47331e+06 | 38360.9 | 0.938601 | 1(Win) |
| jeaiii::to_text | 1057.24 | 0.522485 | 16.6709ms | 99848 | 30 | 6.64351e+06 | 90066.8 | 2.20489 | 2(Loss) |
| fmt::format_to | 758.131 | 1.03923 | 22.6774ms | 99848 | 30 | 5.11133e+07 | 125602 | 3.07515 | 3(Loss) |
| std::to_chars | 573.571 | 0.4534 | 30.0895ms | 99848 | 30 | 1.69976e+07 | 166017 | 4.06495 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 876.935 | 0.073806 | 196.089ms | 998552 | 30 | 1.92713e+07 | 1.08593e+06 | 2.65844 | 1(Win) |
| jeaiii::to_text | 810.195 | 0.0782041 | 211.726ms | 998552 | 30 | 2.5348e+07 | 1.17539e+06 | 2.87829 | 2(Loss) |
| fmt::format_to | 653.041 | 0.076329 | 262.565ms | 998552 | 30 | 3.71673e+07 | 1.45824e+06 | 3.57099 | 3(Loss) |
| std::to_chars | 529.704 | 0.187745 | 322.868ms | 998552 | 30 | 3.41767e+08 | 1.79778e+06 | 4.40247 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2555.66 | 0.174912 | 0.105306ms | 1047 | 30 | 14.0103 | 390.7 | 0.822127 | 1(Win) |
| jeaiii::to_text | 1903.23 | 0.171824 | 0.10726ms | 1047 | 30 | 24.3782 | 524.633 | 1.14432 | 2(Loss) |
| fmt::format_to | 1370.18 | 0.219099 | 0.143687ms | 1047 | 30 | 76.4782 | 728.733 | 1.61847 | 3(Loss) |
| std::to_chars | 827.255 | 0.222948 | 0.248644ms | 1047 | 30 | 217.241 | 1207 | 2.73623 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2770.1 | 0.238291 | 1.64638ms | 10483 | 30 | 2218.79 | 3609.03 | 0.833247 | 1(Win) |
| jeaiii::to_text | 2044.28 | 0.0958736 | 0.925033ms | 10483 | 30 | 659.49 | 4890.4 | 1.13242 | 2(Loss) |
| fmt::format_to | 1400.79 | 0.134089 | 1.31757ms | 10483 | 30 | 2747.48 | 7136.97 | 1.6564 | 3(Loss) |
| std::to_chars | 916.01 | 0.048784 | 4.64677ms | 10483 | 30 | 850.447 | 10914 | 2.53796 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2146.87 | 1.50869 | 8.93971ms | 104814 | 30 | 1.4803e+07 | 46560 | 1.08538 | 1(Win) |
| jeaiii::to_text | 1316.83 | 1.30291 | 13.8655ms | 104814 | 30 | 2.93446e+07 | 75908.4 | 1.7701 | 2(Loss) |
| fmt::format_to | 1002.78 | 0.496597 | 18.1764ms | 104814 | 30 | 7.35121e+06 | 99681.6 | 2.32486 | 3(Loss) |
| std::to_chars | 701.258 | 0.582803 | 25.5234ms | 104814 | 30 | 2.07037e+07 | 142542 | 3.32467 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1288.21 | 0.114144 | 140.164ms | 1048273 | 30 | 2.35398e+07 | 776044 | 1.81021 | 1(Win) |
| jeaiii::to_text | 1085.99 | 0.0792655 | 166.341ms | 1048273 | 30 | 1.59729e+07 | 920549 | 2.14726 | 2(Loss) |
| fmt::format_to | 827.293 | 0.204323 | 217.222ms | 1048273 | 30 | 1.82889e+08 | 1.20841e+06 | 2.81866 | 3(Loss) |
| std::to_chars | 687.653 | 0.209415 | 261.133ms | 1048273 | 30 | 2.78067e+08 | 1.4538e+06 | 3.39123 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1816.31 | 0.194031 | 0.102912ms | 951 | 30 | 28.1609 | 499.333 | 1.18938 | 1(Win) |
| vn::to_chars | 1317.21 | 0.12096 | 0.673715ms | 951 | 30 | 20.8092 | 688.533 | 1.67284 | 2(Loss) |
| fmt::format_to | 1235.17 | 0.539015 | 0.142336ms | 951 | 30 | 469.926 | 734.267 | 1.79646 | 3(Loss) |
| std::to_chars | 905.465 | 0.193821 | 0.20918ms | 951 | 30 | 113.068 | 1001.63 | 2.48689 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2529.33 | 0.0639254 | 0.693101ms | 9487 | 30 | 156.861 | 3577.03 | 0.912565 | 1(Win) |
| jeaiii::to_text | 1970.35 | 0.103035 | 0.843842ms | 9487 | 30 | 671.523 | 4591.83 | 1.17376 | 2(Loss) |
| fmt::format_to | 1335.37 | 0.132012 | 1.25856ms | 9487 | 30 | 2399.93 | 6775.27 | 1.73645 | 3(Loss) |
| std::to_chars | 704.752 | 0.0895787 | 2.33972ms | 9487 | 30 | 3967.5 | 12837.9 | 3.30007 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1908.26 | 1.1248 | 8.9156ms | 94855 | 30 | 8.52935e+06 | 47404.9 | 1.2211 | 1(Win) |
| jeaiii::to_text | 1300.17 | 0.574793 | 12.8044ms | 94855 | 30 | 4.79803e+06 | 69576 | 1.79273 | 2(Loss) |
| fmt::format_to | 999.849 | 0.443823 | 16.5592ms | 94855 | 30 | 4.83718e+06 | 90474.5 | 2.33159 | 3(Loss) |
| std::to_chars | 638.245 | 1.02394 | 25.2373ms | 94855 | 30 | 6.31848e+07 | 141734 | 3.65271 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1231.31 | 0.253542 | 132.048ms | 948129 | 30 | 1.03998e+08 | 734348 | 1.89384 | 1(Win) |
| jeaiii::to_text | 1030.89 | 0.0838355 | 158.044ms | 948129 | 30 | 1.62213e+07 | 877112 | 2.26205 | 2(Loss) |
| fmt::format_to | 772.645 | 0.0778444 | 210.925ms | 948129 | 30 | 2.48972e+07 | 1.17027e+06 | 3.01814 | 3(Loss) |
| std::to_chars | 634.97 | 0.168093 | 256.192ms | 948129 | 30 | 1.71889e+08 | 1.42401e+06 | 3.67257 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2986.16 | 0.325271 | 0.069319ms | 976 | 30 | 30.8379 | 311.7 | 0.69276 | 1(Win) |
| jeaiii::to_text | 2374.2 | 0.147846 | 0.421195ms | 976 | 48 | 16.1259 | 392.042 | 0.893251 | 2(Loss) |
| fmt::format_to | 1351.58 | 0.194859 | 0.135302ms | 976 | 30 | 54.023 | 688.667 | 1.63757 | 3(Loss) |
| std::to_chars | 911.82 | 0.222865 | 0.196265ms | 976 | 30 | 155.269 | 1020.8 | 2.47008 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2771.71 | 0.0463212 | 0.639481ms | 9741 | 30 | 72.3092 | 3351.63 | 0.83192 | 1(Win) |
| jeaiii::to_text | 2547.93 | 0.0858309 | 0.699733ms | 9741 | 30 | 293.793 | 3646 | 0.906468 | 2(Loss) |
| fmt::format_to | 1365.19 | 0.0850176 | 1.24548ms | 9741 | 30 | 1004.06 | 6804.73 | 1.69975 | 3(Loss) |
| std::to_chars | 823.951 | 0.0482485 | 2.08013ms | 9741 | 30 | 887.757 | 11274.6 | 2.82173 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3154.17 | 1.02741 | 5.51389ms | 97434 | 30 | 2.74829e+06 | 29459.5 | 0.738482 | 1(Win) |
| jeaiii::to_text | 2496.83 | 0.750031 | 6.85627ms | 97434 | 30 | 2.33735e+06 | 37215.4 | 0.933123 | 2(Loss) |
| fmt::format_to | 1141.94 | 1.30613 | 14.4796ms | 97434 | 30 | 3.38862e+07 | 81370.2 | 2.04105 | 3(Loss) |
| std::to_chars | 802.892 | 0.465237 | 20.877ms | 97434 | 30 | 8.69715e+06 | 115732 | 2.90374 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2049.86 | 0.391507 | 81.2207ms | 974062 | 30 | 9.44333e+07 | 453172 | 1.13753 | 1(Win) |
| jeaiii::to_text | 1745.31 | 0.204278 | 96.2699ms | 974062 | 30 | 3.54648e+07 | 532250 | 1.33603 | 2(Loss) |
| fmt::format_to | 1053.01 | 0.218047 | 158.804ms | 974062 | 30 | 1.11001e+08 | 882170 | 2.21447 | 3(Loss) |
| std::to_chars | 798.435 | 0.23642 | 209.843ms | 974062 | 30 | 2.26977e+08 | 1.16345e+06 | 2.9206 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2988.53 | 0.144859 | 0.12861ms | 1936 | 30 | 24.0276 | 617.8 | 0.734401 | 1(Win) |
| jeaiii::to_text | 1801.46 | 0.0843819 | 0.198349ms | 1936 | 30 | 22.4379 | 1024.9 | 1.24735 | 2(Loss) |
| fmt::format_to | 1154.67 | 0.0568929 | 0.300209ms | 1936 | 30 | 24.8276 | 1599 | 1.97419 | 3(Loss) |
| std::to_chars | 901.036 | 0.0870279 | 0.381851ms | 1936 | 30 | 95.4034 | 2049.1 | 2.54571 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3550.26 | 0.083603 | 1.16533ms | 19413 | 30 | 570.202 | 5214.73 | 0.65235 | 1(Win) |
| jeaiii::to_text | 1866.8 | 0.0354885 | 4.24331ms | 19413 | 30 | 371.609 | 9917.33 | 1.24471 | 2(Loss) |
| fmt::format_to | 1188.48 | 0.633094 | 2.84468ms | 19413 | 30 | 291783 | 15577.6 | 1.95747 | 3(Loss) |
| std::to_chars | 805.394 | 1.12997 | 4.23227ms | 19413 | 30 | 2.02405e+06 | 22987.1 | 2.89142 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2815.39 | 1.59963 | 12.1935ms | 193733 | 30 | 3.30591e+07 | 65624.3 | 0.827665 | 1(Win) |
| jeaiii::to_text | 1528.95 | 0.507964 | 22.0107ms | 193733 | 30 | 1.13033e+07 | 120840 | 1.52479 | 2(Loss) |
| fmt::format_to | 1057.77 | 0.556831 | 31.3767ms | 193733 | 30 | 2.8379e+07 | 174668 | 2.20422 | 3(Loss) |
| std::to_chars | 784.394 | 0.359683 | 42.5472ms | 193733 | 30 | 2.15328e+07 | 235543 | 2.97254 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1895.77 | 0.190049 | 175.768ms | 1937989 | 30 | 1.02988e+08 | 974915 | 1.23001 | 1(Win) |
| jeaiii::to_text | 1305.42 | 0.159361 | 254.656ms | 1937989 | 30 | 1.52716e+08 | 1.41579e+06 | 1.78637 | 2(Loss) |
| fmt::format_to | 1015.23 | 0.975761 | 324.508ms | 1937989 | 30 | 9.46638e+09 | 1.82049e+06 | 2.2969 | 3(Loss) |
| std::to_chars | 775.781 | 0.0637113 | 430.116ms | 1937989 | 30 | 6.91159e+07 | 2.38239e+06 | 3.00588 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2235.28 | 1.45737 | 0.153606ms | 1989 | 30 | 4588.46 | 848.6 | 0.997352 | 1(Win) |
| jeaiii::to_text | 1868.95 | 0.095997 | 0.212696ms | 1989 | 30 | 28.4782 | 1014.93 | 1.20055 | 2(Loss) |
| fmt::format_to | 1146.48 | 0.0388529 | 0.309005ms | 1989 | 30 | 12.3966 | 1654.5 | 1.98723 | 3(Loss) |
| std::to_chars | 979.007 | 0.105852 | 0.406968ms | 1989 | 30 | 126.189 | 1937.53 | 2.33749 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3423.39 | 0.0717223 | 1.08664ms | 19869 | 30 | 472.792 | 5535.03 | 0.676753 | 1(Win) |
| jeaiii::to_text | 1899.11 | 0.0361416 | 1.82193ms | 19869 | 30 | 390.11 | 9977.6 | 1.22333 | 2(Loss) |
| fmt::format_to | 1146.32 | 0.026216 | 3.03143ms | 19869 | 30 | 563.375 | 16529.9 | 2.0303 | 3(Loss) |
| std::to_chars | 978.423 | 1.38053 | 3.54372ms | 19869 | 30 | 2.14444e+06 | 19366.4 | 2.37942 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3224.68 | 0.968808 | 10.6516ms | 198845 | 30 | 9.73764e+06 | 58806.9 | 0.722562 | 1(Win) |
| jeaiii::to_text | 1848.04 | 0.559425 | 18.4866ms | 198845 | 30 | 9.88586e+06 | 102614 | 1.26142 | 2(Loss) |
| fmt::format_to | 1140.69 | 0.433364 | 29.9656ms | 198845 | 30 | 1.55711e+07 | 166244 | 2.04401 | 3(Loss) |
| std::to_chars | 993.306 | 0.406016 | 34.4427ms | 198845 | 30 | 1.80248e+07 | 190911 | 2.34727 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3101.31 | 0.16497 | 110.767ms | 1987992 | 30 | 3.05118e+07 | 611322 | 0.751887 | 1(Win) |
| jeaiii::to_text | 1817.73 | 0.150462 | 187.62ms | 1987992 | 30 | 7.38829e+07 | 1.043e+06 | 1.28286 | 2(Loss) |
| fmt::format_to | 1130.62 | 0.150906 | 301.565ms | 1987992 | 30 | 1.92099e+08 | 1.67686e+06 | 2.06254 | 3(Loss) |
| std::to_chars | 987.828 | 0.109936 | 345.934ms | 1987992 | 30 | 1.33558e+08 | 1.91926e+06 | 2.3607 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3130.67 | 0.438268 | 0.119693ms | 1889 | 30 | 190.806 | 575.433 | 0.69693 | 1(Win) |
| jeaiii::to_text | 1722.27 | 0.0911008 | 0.200113ms | 1889 | 30 | 27.2414 | 1046 | 1.30692 | 2(Loss) |
| fmt::format_to | 1101.58 | 0.0704547 | 0.306591ms | 1889 | 30 | 39.8264 | 1635.37 | 2.07214 | 3(Loss) |
| std::to_chars | 956.256 | 0.11625 | 0.352827ms | 1889 | 30 | 143.886 | 1883.9 | 2.39381 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2978.3 | 0.0626578 | 1.17305ms | 18872 | 30 | 430.102 | 6042.97 | 0.778057 | 1(Win) |
| jeaiii::to_text | 1777.17 | 0.0319428 | 1.86539ms | 18872 | 30 | 313.937 | 10127.2 | 1.30761 | 2(Loss) |
| fmt::format_to | 1117.31 | 1.69521 | 2.90165ms | 18872 | 30 | 2.23695e+06 | 16108 | 2.08273 | 3(Loss) |
| std::to_chars | 958.971 | 0.143174 | 3.4282ms | 18872 | 30 | 21660.7 | 18767.8 | 2.42754 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3088.21 | 0.967186 | 10.8011ms | 188745 | 30 | 9.53406e+06 | 58286.5 | 0.754477 | 1(Win) |
| jeaiii::to_text | 1717.43 | 1.03696 | 18.9278ms | 188745 | 30 | 3.54358e+07 | 104809 | 1.35736 | 2(Loss) |
| fmt::format_to | 1111.81 | 0.940902 | 29.0654ms | 188745 | 30 | 6.96144e+07 | 161899 | 2.09711 | 3(Loss) |
| std::to_chars | 954.767 | 0.367474 | 34.045ms | 188745 | 30 | 1.4399e+07 | 188529 | 2.44207 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3007.21 | 0.187252 | 109.78ms | 1887828 | 30 | 3.77027e+07 | 598685 | 0.775425 | 1(Win) |
| jeaiii::to_text | 1698.34 | 0.182374 | 190.533ms | 1887828 | 30 | 1.1213e+08 | 1.06008e+06 | 1.37308 | 2(Loss) |
| fmt::format_to | 1088.37 | 0.111303 | 298.418ms | 1887828 | 30 | 1.01697e+08 | 1.6542e+06 | 2.14261 | 3(Loss) |
| std::to_chars | 948.928 | 0.157913 | 341.366ms | 1887828 | 30 | 2.69287e+08 | 1.89727e+06 | 2.45752 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3148.19 | 0.194321 | 0.122037ms | 1947 | 30 | 39.4069 | 589.8 | 0.694658 | 1(Win) |
| jeaiii::to_text | 1928.55 | 0.0575171 | 0.184884ms | 1947 | 30 | 9.2 | 962.8 | 1.16312 | 2(Loss) |
| fmt::format_to | 967.993 | 0.0592767 | 0.389375ms | 1947 | 30 | 38.7862 | 1918.2 | 2.36316 | 3(Loss) |
| std::to_chars | 904.787 | 0.0969904 | 0.406637ms | 1947 | 30 | 118.855 | 2052.2 | 2.53178 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4035.23 | 0.0914089 | 2.25231ms | 19419 | 30 | 527.978 | 4589.43 | 0.573432 | 1(Win) |
| jeaiii::to_text | 2013.36 | 0.0237553 | 1.68939ms | 19419 | 30 | 143.237 | 9198.27 | 1.15394 | 2(Loss) |
| fmt::format_to | 878.255 | 1.23733 | 3.8126ms | 19419 | 30 | 2.04223e+06 | 21086.6 | 2.65086 | 3(Loss) |
| std::to_chars | 817.563 | 0.0597985 | 4.14552ms | 19419 | 30 | 5504.45 | 22652 | 2.84792 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3063.86 | 0.80735 | 11.2438ms | 193886 | 30 | 7.12199e+06 | 60350.1 | 0.760418 | 1(Win) |
| jeaiii::to_text | 1866.27 | 0.549255 | 18.0854ms | 193886 | 30 | 8.88405e+06 | 99076.6 | 1.24913 | 2(Loss) |
| fmt::format_to | 848.131 | 0.310635 | 39.3807ms | 193886 | 30 | 1.3759e+07 | 218014 | 2.74911 | 3(Loss) |
| std::to_chars | 784.3 | 0.400923 | 42.5016ms | 193886 | 30 | 2.68023e+07 | 235757 | 2.97289 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2161.41 | 0.164881 | 154.338ms | 1940066 | 30 | 5.97619e+07 | 856013 | 1.07887 | 1(Win) |
| jeaiii::to_text | 1536.54 | 1.58795 | 211.656ms | 1940066 | 30 | 1.09683e+10 | 1.20413e+06 | 1.51754 | 2(Loss) |
| fmt::format_to | 836.852 | 0.0490549 | 398.574ms | 1940066 | 30 | 3.52876e+07 | 2.21089e+06 | 2.78647 | 3(Loss) |
| std::to_chars | 782.069 | 0.0983929 | 426.04ms | 1940066 | 30 | 1.62552e+08 | 2.36576e+06 | 2.98179 | 4(Loss) |
