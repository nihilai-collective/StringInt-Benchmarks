# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1328.76 | 0.487238 | 0.073838ms | 269 | 30 | 26.5471 | 193.067 | 1(Win) |
| jeaiii::to_text | 1157.14 | 0.299785 | 0.077916ms | 269 | 30 | 13.2517 | 221.7 | 2(Loss) |
| fmt::format_to | 867.954 | 0.506184 | 0.092363ms | 269 | 30 | 67.1506 | 295.567 | 3(Loss) |
| std::to_chars | 653.324 | 0.316845 | 0.171771ms | 269 | 30 | 46.4368 | 392.667 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1406.71 | 0.158986 | 0.371565ms | 2633 | 30 | 241.62 | 1785.03 | 1(Win) |
| jeaiii::to_text | 1263.6 | 0.137091 | 0.406942ms | 2633 | 30 | 222.648 | 1987.2 | 2(Loss) |
| fmt::format_to | 964.95 | 0.148624 | 0.552514ms | 2633 | 30 | 448.737 | 2602.23 | 3(Loss) |
| std::to_chars | 718.921 | 0.0945062 | 0.682837ms | 2633 | 30 | 326.875 | 3492.77 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1324.43 | 1.40004 | 3.67374ms | 26662 | 30 | 2.16736e+06 | 19198.3 | 1(Win) |
| jeaiii::to_text | 1230.44 | 1.31012 | 3.94426ms | 26662 | 30 | 2.19893e+06 | 20664.9 | 2(Loss) |
| fmt::format_to | 986.22 | 1.11348 | 11.3459ms | 26662 | 30 | 2.47241e+06 | 25782.1 | 3(Loss) |
| std::to_chars | 719.755 | 0.765085 | 6.7747ms | 26662 | 30 | 2.19158e+06 | 35327.1 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 350.465 | 0.118476 | 130.014ms | 265264 | 30 | 2.19405e+07 | 721827 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 349.321 | 0.232103 | 130.933ms | 265264 | 30 | 8.47596e+07 | 724192 | 1(Tie) |
| fmt::format_to | 329.492 | 0.104939 | 138.749ms | 265264 | 30 | 1.94741e+07 | 767773 | 3(Loss) |
| std::to_chars | 264.991 | 0.206497 | 171.722ms | 265264 | 30 | 1.16586e+08 | 954656 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1389.16 | 0.333041 | 0.07493ms | 304 | 30 | 14.4931 | 208.7 | 1(Win) |
| jeaiii::to_text | 1347.41 | 0.438412 | 0.077165ms | 304 | 30 | 26.6954 | 215.167 | 2(Loss) |
| fmt::format_to | 980.885 | 0.364065 | 0.091802ms | 304 | 30 | 34.7368 | 295.567 | 3(Loss) |
| std::to_chars | 746.631 | 0.566673 | 0.108142ms | 304 | 30 | 145.252 | 388.3 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1815.54 | 0.0618545 | 0.343983ms | 3156 | 30 | 31.5448 | 1657.8 | 1(Win) |
| jeaiii::to_text | 1664.62 | 0.110497 | 0.36913ms | 3156 | 30 | 119.748 | 1808.1 | 2(Loss) |
| fmt::format_to | 1156.5 | 0.175444 | 0.52948ms | 3156 | 30 | 625.431 | 2602.5 | 3(Loss) |
| std::to_chars | 833.246 | 0.0993997 | 0.709167ms | 3156 | 30 | 386.74 | 3612.13 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1774.77 | 1.54805 | 3.17513ms | 31460 | 30 | 2.05459e+06 | 16905.1 | 1(Win) |
| jeaiii::to_text | 1596.61 | 1.42101 | 3.49899ms | 31460 | 30 | 2.13913e+06 | 18791.5 | 2(Loss) |
| fmt::format_to | 1114.08 | 0.0622862 | 5.02918ms | 31460 | 30 | 8440.94 | 26930.4 | 3(Loss) |
| std::to_chars | 825.633 | 0.883205 | 6.73183ms | 31460 | 30 | 3.09021e+06 | 36338.9 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 758.45 | 0.501614 | 71.0853ms | 314646 | 30 | 1.18155e+08 | 395636 | 1(Win) |
| jeaiii::to_text | 730.943 | 0.240144 | 74.5404ms | 314646 | 30 | 2.91569e+07 | 410524 | 2(Loss) |
| fmt::format_to | 664.421 | 0.251016 | 81.5515ms | 314646 | 30 | 3.85552e+07 | 451626 | 3(Loss) |
| std::to_chars | 528.341 | 0.294052 | 102.225ms | 314646 | 30 | 8.36731e+07 | 567947 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1101.59 | 0.615848 | 0.070171ms | 212 | 30 | 38.3264 | 183.533 | 1(Win) |
| jeaiii::to_text | 808.932 | 0.190811 | 0.080381ms | 212 | 30 | 6.82299 | 249.933 | 2(Loss) |
| fmt::format_to | 713.993 | 0.296716 | 0.089607ms | 212 | 30 | 21.1782 | 283.167 | 3(Loss) |
| std::to_chars | 525.914 | 0.656015 | 0.126497ms | 212 | 30 | 190.806 | 384.433 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1462.79 | 0.0979851 | 0.297547ms | 2157 | 30 | 56.9609 | 1406.27 | 1(Win) |
| jeaiii::to_text | 1135.27 | 0.108409 | 0.370423ms | 2157 | 30 | 115.757 | 1811.97 | 2(Loss) |
| fmt::format_to | 821.002 | 0.0620572 | 0.511938ms | 2157 | 30 | 72.5299 | 2505.57 | 3(Loss) |
| std::to_chars | 605.265 | 0.073987 | 0.65743ms | 2157 | 30 | 189.689 | 3398.63 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1285.48 | 0.0423063 | 2.80807ms | 21540 | 30 | 1371.18 | 15980.2 | 1(Win) |
| jeaiii::to_text | 1116.47 | 1.50298 | 3.42281ms | 21540 | 30 | 2.29419e+06 | 18399.3 | 2(Loss) |
| fmt::format_to | 817.186 | 0.113246 | 4.67866ms | 21540 | 30 | 24311.6 | 25137.7 | 3(Loss) |
| std::to_chars | 572.236 | 0.840469 | 6.61397ms | 21540 | 30 | 2.7309e+06 | 35898 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 546.388 | 0.274205 | 68.1264ms | 215280 | 30 | 3.18475e+07 | 375753 | 1(Win) |
| jeaiii::to_text | 498.845 | 0.447688 | 74.2346ms | 215280 | 30 | 1.01847e+08 | 411565 | 2(Loss) |
| fmt::format_to | 462.846 | 0.407486 | 79.7351ms | 215280 | 30 | 9.80125e+07 | 443575 | 3(Loss) |
| std::to_chars | 361.861 | 0.329431 | 102.181ms | 215280 | 30 | 1.04803e+08 | 567364 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1318.56 | 0.487519 | 0.10662ms | 255 | 30 | 24.254 | 184.433 | 1(Win) |
| jeaiii::to_text | 1199.54 | 0.398509 | 0.073207ms | 255 | 30 | 19.5816 | 202.733 | 2(Loss) |
| fmt::format_to | 824.642 | 0.31204 | 0.091811ms | 255 | 30 | 25.4034 | 294.9 | 3(Loss) |
| std::to_chars | 609.033 | 0.231641 | 0.111078ms | 255 | 30 | 25.6655 | 399.3 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1689.42 | 0.120869 | 0.306373ms | 2568 | 30 | 92.1023 | 1449.63 | 1(Win) |
| jeaiii::to_text | 1609.55 | 0.129606 | 0.322523ms | 2568 | 30 | 116.668 | 1521.57 | 2(Loss) |
| fmt::format_to | 896.864 | 0.048416 | 0.579813ms | 2568 | 30 | 52.4368 | 2730.67 | 3(Loss) |
| std::to_chars | 670.767 | 0.0898498 | 0.744664ms | 2568 | 30 | 322.852 | 3651.1 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1689.83 | 2.35397 | 2.75288ms | 25716 | 30 | 3.50144e+06 | 14513.1 | 1(Win) |
| jeaiii::to_text | 1550.64 | 1.7066 | 3.02112ms | 25716 | 30 | 2.18561e+06 | 15815.9 | 2(Loss) |
| fmt::format_to | 919.705 | 1.37073 | 11.5008ms | 25716 | 30 | 4.00806e+06 | 26665.8 | 3(Loss) |
| std::to_chars | 634.841 | 0.680476 | 7.19581ms | 25716 | 30 | 2.07312e+06 | 38631.2 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 552.481 | 0.215095 | 80.1094ms | 257103 | 30 | 2.73377e+07 | 443803 | 1(Win) |
| vn::to_chars | 534.606 | 0.312024 | 82.7181ms | 257103 | 30 | 6.14391e+07 | 458641 | 2(Loss) |
| fmt::format_to | 459.416 | 0.20451 | 96.5058ms | 257103 | 30 | 3.57398e+07 | 533705 | 3(Loss) |
| std::to_chars | 392.915 | 0.159128 | 112.829ms | 257103 | 30 | 2.95824e+07 | 624034 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2132.44 | 0.585879 | 0.0803ms | 504 | 30 | 52.3172 | 225.4 | 1(Win) |
| jeaiii::to_text | 1660.09 | 0.192218 | 0.092443ms | 504 | 30 | 9.29195 | 289.533 | 2(Loss) |
| fmt::format_to | 1079.71 | 0.213266 | 0.119744ms | 504 | 30 | 27.0402 | 445.167 | 3(Loss) |
| std::to_chars | 823.316 | 0.167186 | 0.144631ms | 504 | 30 | 28.5793 | 583.8 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2456.07 | 0.123662 | 0.458678ms | 5162 | 30 | 184.309 | 2004.37 | 1(Win) |
| jeaiii::to_text | 1832.13 | 0.0883682 | 0.535332ms | 5162 | 30 | 169.137 | 2686.97 | 2(Loss) |
| fmt::format_to | 1168.33 | 0.077273 | 0.85531ms | 5162 | 30 | 318.041 | 4213.6 | 3(Loss) |
| std::to_chars | 893.453 | 0.0800562 | 1.06586ms | 5162 | 30 | 583.72 | 5509.93 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2333.81 | 2.13593 | 4.03128ms | 51497 | 30 | 6.06075e+06 | 21043.4 | 1(Win) |
| jeaiii::to_text | 1796.24 | 1.51244 | 5.13916ms | 51497 | 30 | 5.12993e+06 | 27341.1 | 2(Loss) |
| fmt::format_to | 1087.87 | 1.05155 | 8.49816ms | 51497 | 30 | 6.76062e+06 | 45144.4 | 3(Loss) |
| std::to_chars | 539.075 | 0.742904 | 16.9685ms | 51497 | 30 | 1.37421e+07 | 91103.1 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 637.356 | 0.162392 | 139.124ms | 516012 | 30 | 4.71635e+07 | 772108 | 1(Win) |
| jeaiii::to_text | 583.735 | 0.153084 | 152.103ms | 516012 | 30 | 4.99654e+07 | 843032 | 2(Loss) |
| fmt::format_to | 473.763 | 0.0635713 | 187.612ms | 516012 | 30 | 1.3081e+07 | 1.03872e+06 | 3(Loss) |
| std::to_chars | 401.485 | 0.253765 | 221.476ms | 516012 | 30 | 2.90246e+08 | 1.22572e+06 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2272.16 | 0.419961 | 0.081473ms | 573 | 30 | 30.6034 | 240.5 | 1(Win) |
| jeaiii::to_text | 1754.08 | 0.323834 | 0.093295ms | 573 | 30 | 30.5333 | 311.533 | 2(Loss) |
| fmt::format_to | 1124.01 | 0.257566 | 0.126327ms | 573 | 30 | 47.0402 | 486.167 | 3(Loss) |
| std::to_chars | 896.024 | 0.324505 | 0.146654ms | 573 | 30 | 117.499 | 609.867 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2683.96 | 0.107285 | 0.412742ms | 5645 | 30 | 138.924 | 2005.8 | 1(Win) |
| jeaiii::to_text | 2003.68 | 0.0668514 | 0.564887ms | 5645 | 30 | 96.7862 | 2686.8 | 2(Loss) |
| fmt::format_to | 1220.59 | 0.0866579 | 0.860059ms | 5645 | 30 | 438.254 | 4410.57 | 3(Loss) |
| std::to_chars | 940.326 | 0.099855 | 1.14553ms | 5645 | 30 | 980.464 | 5725.13 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2710.56 | 0.0590053 | 3.74768ms | 56598 | 30 | 4141.79 | 19913.3 | 1(Win) |
| jeaiii::to_text | 1949.33 | 1.08512 | 5.19964ms | 56598 | 30 | 2.70835e+06 | 27689.5 | 2(Loss) |
| fmt::format_to | 985.239 | 1.73313 | 10.0671ms | 56598 | 30 | 2.70461e+07 | 54784.7 | 3(Loss) |
| std::to_chars | 789.75 | 0.600417 | 12.6436ms | 56598 | 30 | 5.05184e+06 | 68345.8 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1218.22 | 0.197188 | 80.1441ms | 565911 | 30 | 2.28942e+07 | 443019 | 1(Win) |
| jeaiii::to_text | 989.018 | 0.301243 | 99.0219ms | 565911 | 30 | 8.10667e+07 | 545688 | 2(Loss) |
| fmt::format_to | 747.022 | 0.251409 | 129.956ms | 565911 | 30 | 9.89717e+07 | 722461 | 3(Loss) |
| std::to_chars | 673.092 | 0.226825 | 144.308ms | 565911 | 30 | 9.92315e+07 | 801814 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1983.06 | 0.369652 | 0.079999ms | 461 | 30 | 20.1483 | 221.7 | 1(Win) |
| jeaiii::to_text | 1482.11 | 0.306461 | 0.091611ms | 461 | 30 | 24.792 | 296.633 | 2(Loss) |
| fmt::format_to | 995.345 | 0.229538 | 0.116849ms | 461 | 30 | 30.8379 | 441.7 | 3(Loss) |
| std::to_chars | 762.212 | 0.161485 | 0.142075ms | 461 | 30 | 26.0276 | 576.8 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2355.26 | 0.103885 | 0.395681ms | 4661 | 30 | 115.321 | 1887.3 | 1(Win) |
| jeaiii::to_text | 1693.02 | 0.0682732 | 0.553536ms | 4661 | 30 | 96.3954 | 2625.53 | 2(Loss) |
| std::to_chars | 793.164 | 0.0888264 | 1.08712ms | 4661 | 30 | 743.426 | 5604.23 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1821.59 | 1.18068 | 10.5689ms | 46635 | 30 | 2.49295e+06 | 24415.3 | 1(Win) |
| jeaiii::to_text | 1344.29 | 0.781184 | 6.18569ms | 46635 | 30 | 2.00385e+06 | 33084.1 | 2(Loss) |
| fmt::format_to | 1014.87 | 1.79199 | 7.96077ms | 46635 | 30 | 1.85009e+07 | 43822.9 | 3(Loss) |
| std::to_chars | 641.038 | 0.536088 | 12.7568ms | 46635 | 30 | 4.15001e+06 | 69379 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1004.41 | 0.240827 | 80.1274ms | 466233 | 30 | 3.40968e+07 | 442681 | 1(Win) |
| jeaiii::to_text | 808.508 | 0.244397 | 99.3458ms | 466233 | 30 | 5.4194e+07 | 549944 | 2(Loss) |
| fmt::format_to | 664.879 | 0.140773 | 120.561ms | 466233 | 30 | 2.65877e+07 | 668745 | 3(Loss) |
| std::to_chars | 566.989 | 0.29528 | 141.377ms | 466233 | 30 | 1.60859e+08 | 784203 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2204.61 | 0.441788 | 0.076593ms | 488 | 30 | 26.0931 | 211.1 | 1(Win) |
| jeaiii::to_text | 1659.16 | 0.420002 | 0.087854ms | 488 | 30 | 41.6379 | 280.5 | 2(Loss) |
| fmt::format_to | 1001.85 | 0.191637 | 0.120405ms | 488 | 30 | 23.7747 | 464.533 | 3(Loss) |
| std::to_chars | 759.123 | 0.120636 | 0.157265ms | 488 | 30 | 16.4092 | 613.067 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2505.38 | 0.143977 | 0.862304ms | 4853 | 30 | 212.217 | 1847.3 | 1(Win) |
| jeaiii::to_text | 1924.53 | 0.122044 | 0.489165ms | 4853 | 30 | 258.42 | 2404.83 | 2(Loss) |
| fmt::format_to | 1070.2 | 0.0667758 | 0.838029ms | 4853 | 30 | 250.179 | 4324.6 | 3(Loss) |
| std::to_chars | 819.297 | 0.0918998 | 1.06802ms | 4853 | 30 | 808.516 | 5648.97 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2406.82 | 1.40961 | 3.55083ms | 48253 | 30 | 2.17912e+06 | 19119.7 | 1(Win) |
| jeaiii::to_text | 1833.92 | 1.54345 | 4.58711ms | 48253 | 30 | 4.49981e+06 | 25092.6 | 2(Loss) |
| fmt::format_to | 944.205 | 0.995301 | 8.78165ms | 48253 | 30 | 7.05905e+06 | 48736.9 | 3(Loss) |
| std::to_chars | 749.85 | 0.444815 | 11.2842ms | 48253 | 30 | 2.23553e+06 | 61369.1 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1627.05 | 0.505219 | 51.3527ms | 483206 | 30 | 6.14248e+07 | 283225 | 1(Win) |
| jeaiii::to_text | 1331.93 | 0.319766 | 62.2416ms | 483206 | 30 | 3.67184e+07 | 345979 | 2(Loss) |
| fmt::format_to | 830.936 | 0.179355 | 100.466ms | 483206 | 30 | 2.96809e+07 | 554581 | 3(Loss) |
| std::to_chars | 718.892 | 0.297791 | 115.23ms | 483206 | 30 | 1.09316e+08 | 641016 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2491.4 | 0.577785 | 0.109906ms | 1005 | 30 | 148.217 | 384.7 | 1(Win) |
| jeaiii::to_text | 1872.2 | 0.300425 | 0.132348ms | 1005 | 30 | 70.9609 | 511.933 | 2(Loss) |
| fmt::format_to | 1169.93 | 0.139935 | 0.188082ms | 1005 | 30 | 39.4264 | 819.233 | 3(Loss) |
| std::to_chars | 565.82 | 2.08523 | 0.267951ms | 1005 | 30 | 37428.6 | 1693.9 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2535.33 | 0.126646 | 0.777345ms | 9979 | 30 | 677.964 | 3753.63 | 1(Win) |
| jeaiii::to_text | 1982.11 | 0.109907 | 0.945659ms | 9979 | 30 | 835.39 | 4801.3 | 2(Loss) |
| fmt::format_to | 1365.18 | 0.120638 | 1.33516ms | 9979 | 30 | 2121.69 | 6971.03 | 3(Loss) |
| std::to_chars | 987.368 | 0.787342 | 4.16415ms | 9979 | 30 | 172768 | 9638.47 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2477.37 | 0.758522 | 7.67172ms | 99835 | 30 | 2.54942e+06 | 38431.9 | 1(Win) |
| jeaiii::to_text | 1030.94 | 1.44093 | 17.027ms | 99835 | 30 | 5.31259e+07 | 92352.4 | 2(Loss) |
| fmt::format_to | 758.699 | 0.709194 | 22.9658ms | 99835 | 30 | 2.37617e+07 | 125491 | 3(Loss) |
| std::to_chars | 568.342 | 0.637219 | 30.4644ms | 99835 | 30 | 3.41857e+07 | 167522 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 879.726 | 0.204168 | 195.327ms | 998565 | 30 | 1.46539e+08 | 1.0825e+06 | 1(Win) |
| jeaiii::to_text | 812.977 | 0.173958 | 210.772ms | 998565 | 30 | 1.24568e+08 | 1.17138e+06 | 2(Loss) |
| fmt::format_to | 649.064 | 0.151547 | 264.384ms | 998565 | 30 | 1.48318e+08 | 1.4672e+06 | 3(Loss) |
| std::to_chars | 523.056 | 0.239694 | 327.343ms | 998565 | 30 | 5.71335e+08 | 1.82066e+06 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2588.27 | 0.217475 | 0.110116ms | 1041 | 30 | 20.8747 | 383.567 | 1(Win) |
| jeaiii::to_text | 1866.12 | 0.105488 | 0.134171ms | 1041 | 30 | 9.44828 | 532 | 2(Loss) |
| fmt::format_to | 1350.1 | 0.402646 | 0.199284ms | 1041 | 30 | 262.989 | 735.333 | 3(Loss) |
| std::to_chars | 969.191 | 0.101296 | 0.22444ms | 1041 | 30 | 32.2989 | 1024.33 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2780.19 | 0.123181 | 0.763359ms | 10500 | 30 | 590.53 | 3601.77 | 1(Win) |
| jeaiii::to_text | 2039.69 | 0.0921841 | 0.967832ms | 10500 | 30 | 614.447 | 4909.37 | 2(Loss) |
| fmt::format_to | 1420.8 | 0.100807 | 1.35006ms | 10500 | 30 | 1514.33 | 7047.87 | 3(Loss) |
| std::to_chars | 926.094 | 0.0464565 | 2.04212ms | 10500 | 30 | 756.976 | 10812.7 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2603.88 | 0.803879 | 7.38881ms | 104769 | 30 | 2.85448e+06 | 38371.8 | 1(Win) |
| jeaiii::to_text | 1341.6 | 0.629682 | 13.6306ms | 104769 | 30 | 6.59752e+06 | 74474.7 | 2(Loss) |
| fmt::format_to | 1011.28 | 0.591176 | 17.9432ms | 104769 | 30 | 1.02348e+07 | 98801 | 3(Loss) |
| std::to_chars | 704.554 | 1.11577 | 25.4332ms | 104769 | 30 | 7.5112e+07 | 141814 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1283.12 | 0.104734 | 140.679ms | 1048182 | 30 | 1.99725e+07 | 779057 | 1(Win) |
| jeaiii::to_text | 1099.74 | 0.184314 | 163.63ms | 1048182 | 30 | 8.4203e+07 | 908961 | 2(Loss) |
| fmt::format_to | 823.885 | 0.148756 | 219.08ms | 1048182 | 30 | 9.77267e+07 | 1.21331e+06 | 3(Loss) |
| std::to_chars | 687.485 | 0.310344 | 262.407ms | 1048182 | 30 | 6.10878e+08 | 1.45403e+06 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2473.97 | 0.570588 | 0.106229ms | 946 | 30 | 129.885 | 364.667 | 1(Win) |
| jeaiii::to_text | 1817.68 | 0.210167 | 0.12813ms | 946 | 30 | 32.6437 | 496.333 | 2(Loss) |
| fmt::format_to | 1278.41 | 0.341344 | 0.166983ms | 946 | 30 | 174.079 | 705.7 | 3(Loss) |
| std::to_chars | 932.193 | 0.116016 | 0.21345ms | 946 | 30 | 37.8207 | 967.8 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2754.54 | 0.119511 | 1.53443ms | 9499 | 30 | 463.444 | 3288.73 | 1(Win) |
| jeaiii::to_text | 1980.98 | 0.0827529 | 0.913038ms | 9499 | 30 | 429.62 | 4572.97 | 2(Loss) |
| fmt::format_to | 1324.46 | 0.124365 | 1.28574ms | 9499 | 30 | 2170.69 | 6839.73 | 3(Loss) |
| std::to_chars | 715.12 | 0.136548 | 2.42315ms | 9499 | 30 | 8976.2 | 12667.7 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1688.1 | 0.702669 | 9.65444ms | 94904 | 30 | 4.25791e+06 | 53615 | 1(Win) |
| jeaiii::to_text | 1295.89 | 0.662983 | 12.9521ms | 94904 | 30 | 6.43214e+06 | 69841.7 | 2(Loss) |
| fmt::format_to | 963.43 | 1.04945 | 16.9427ms | 94904 | 30 | 2.91592e+07 | 93943 | 3(Loss) |
| std::to_chars | 673.242 | 0.647542 | 24.5162ms | 94904 | 30 | 2.27344e+07 | 134435 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1249.09 | 0.315837 | 130.567ms | 948155 | 30 | 1.56828e+08 | 723915 | 1(Win) |
| jeaiii::to_text | 1029.05 | 0.211923 | 158.549ms | 948155 | 30 | 1.04031e+08 | 878704 | 2(Loss) |
| fmt::format_to | 763.898 | 0.101462 | 213.597ms | 948155 | 30 | 4.32728e+07 | 1.18371e+06 | 3(Loss) |
| std::to_chars | 633.664 | 0.258235 | 256.496ms | 948155 | 30 | 4.07373e+08 | 1.42699e+06 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2984.83 | 0.310594 | 0.09649ms | 974 | 30 | 28.0276 | 311.2 | 1(Win) |
| jeaiii::to_text | 2233.06 | 0.377126 | 0.11221ms | 974 | 30 | 73.8264 | 415.967 | 2(Loss) |
| fmt::format_to | 1357.48 | 0.227477 | 0.16039ms | 974 | 30 | 72.6851 | 684.267 | 3(Loss) |
| std::to_chars | 926.84 | 0.29302 | 0.219721ms | 974 | 30 | 258.717 | 1002.2 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3345.68 | 0.0651795 | 2.71809ms | 9746 | 48 | 157.379 | 2778.06 | 1(Win) |
| jeaiii::to_text | 2528.25 | 0.0702816 | 0.702354ms | 9746 | 30 | 200.271 | 3676.27 | 2(Loss) |
| fmt::format_to | 1358.87 | 0.0654763 | 1.29032ms | 9746 | 30 | 601.706 | 6839.87 | 3(Loss) |
| std::to_chars | 806.563 | 2.37693 | 2.09034ms | 9746 | 30 | 2.25078e+06 | 11523.6 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2811.76 | 0.989019 | 6.1117ms | 97360 | 30 | 3.1999e+06 | 33021.9 | 1(Win) |
| jeaiii::to_text | 2434.53 | 0.69752 | 7.06773ms | 97360 | 30 | 2.12308e+06 | 38138.7 | 2(Loss) |
| fmt::format_to | 1169.36 | 0.91026 | 14.3988ms | 97360 | 30 | 1.56717e+07 | 79402 | 3(Loss) |
| std::to_chars | 811.308 | 1.2005 | 20.5106ms | 97360 | 30 | 5.66285e+07 | 114445 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2021.06 | 0.378616 | 82.878ms | 973989 | 30 | 9.08384e+07 | 459595 | 1(Win) |
| jeaiii::to_text | 1727.93 | 0.185972 | 97.3702ms | 973989 | 30 | 2.99825e+07 | 537560 | 2(Loss) |
| fmt::format_to | 1052.9 | 0.175004 | 159.041ms | 973989 | 30 | 7.1508e+07 | 882201 | 3(Loss) |
| std::to_chars | 799.09 | 0.15319 | 209.285ms | 973989 | 30 | 9.51255e+07 | 1.16241e+06 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3413.73 | 0.224937 | 0.138629ms | 1940 | 30 | 44.5851 | 541.967 | 1(Win) |
| jeaiii::to_text | 1807.47 | 0.0666722 | 0.223278ms | 1940 | 30 | 13.9724 | 1023.6 | 2(Loss) |
| fmt::format_to | 1192.17 | 0.125244 | 0.322714ms | 1940 | 30 | 113.334 | 1551.9 | 3(Loss) |
| std::to_chars | 876.907 | 0.233042 | 0.949036ms | 1940 | 30 | 725.247 | 2109.83 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3635.74 | 0.117608 | 1.02573ms | 19407 | 30 | 1075.29 | 5090.57 | 1(Win) |
| jeaiii::to_text | 1880.3 | 0.0267729 | 1.83388ms | 19407 | 30 | 208.34 | 9843.07 | 2(Loss) |
| fmt::format_to | 1164.76 | 1.70274 | 2.89533ms | 19407 | 30 | 2.19614e+06 | 15889.9 | 3(Loss) |
| std::to_chars | 791.638 | 1.10458 | 4.2511ms | 19407 | 30 | 2.00068e+06 | 23379.3 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2760.19 | 0.714386 | 12.5026ms | 193739 | 30 | 6.86033e+06 | 66938.9 | 1(Win) |
| jeaiii::to_text | 1536.25 | 0.475707 | 22.174ms | 193739 | 30 | 9.81998e+06 | 120269 | 2(Loss) |
| fmt::format_to | 1038.27 | 0.514484 | 31.9629ms | 193739 | 30 | 2.51466e+07 | 177954 | 3(Loss) |
| std::to_chars | 768.61 | 0.313602 | 43.5496ms | 193739 | 30 | 1.70491e+07 | 240387 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1876.29 | 0.294112 | 176.756ms | 1937957 | 30 | 2.51788e+08 | 985019 | 1(Win) |
| jeaiii::to_text | 1304.83 | 0.160473 | 255.164ms | 1937957 | 30 | 1.54991e+08 | 1.41642e+06 | 2(Loss) |
| fmt::format_to | 1026.47 | 0.181064 | 324.056ms | 1937957 | 30 | 3.18847e+08 | 1.80052e+06 | 3(Loss) |
| std::to_chars | 758.862 | 0.158591 | 439.269ms | 1937957 | 30 | 4.47551e+08 | 2.43546e+06 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3384.43 | 0.409174 | 0.171681ms | 1989 | 30 | 157.775 | 560.467 | 1(Win) |
| jeaiii::to_text | 1889.43 | 0.0748961 | 0.218709ms | 1989 | 30 | 16.9609 | 1003.93 | 2(Loss) |
| fmt::format_to | 1143.86 | 0.0743434 | 0.371886ms | 1989 | 30 | 45.5966 | 1658.3 | 3(Loss) |
| std::to_chars | 975.248 | 0.0954732 | 0.387455ms | 1989 | 30 | 103.448 | 1945 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3412.47 | 0.104265 | 1.06142ms | 19881 | 30 | 1006.78 | 5556.1 | 1(Win) |
| jeaiii::to_text | 1910.2 | 0.0296924 | 1.85545ms | 19881 | 30 | 260.575 | 9925.67 | 2(Loss) |
| fmt::format_to | 1156.68 | 0.0252887 | 3.02139ms | 19881 | 30 | 515.495 | 16391.8 | 3(Loss) |
| std::to_chars | 975.693 | 1.31144 | 3.53662ms | 19881 | 30 | 1.94837e+06 | 19432.3 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3240.68 | 0.554162 | 10.7147ms | 198820 | 30 | 3.15387e+06 | 58509.2 | 1(Win) |
| jeaiii::to_text | 1857.56 | 0.655015 | 18.4446ms | 198820 | 30 | 1.34109e+07 | 102075 | 2(Loss) |
| fmt::format_to | 1141.04 | 0.360981 | 30.014ms | 198820 | 30 | 1.07946e+07 | 166172 | 3(Loss) |
| std::to_chars | 976.654 | 0.378503 | 35.0206ms | 198820 | 30 | 1.61994e+07 | 194142 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3083.75 | 0.238098 | 110.905ms | 1988137 | 30 | 6.42934e+07 | 614848 | 1(Win) |
| jeaiii::to_text | 1825.53 | 0.058398 | 188.037ms | 1988137 | 30 | 1.10365e+07 | 1.03862e+06 | 2(Loss) |
| fmt::format_to | 1135.28 | 0.0533622 | 301.779ms | 1988137 | 30 | 2.38274e+07 | 1.67011e+06 | 3(Loss) |
| std::to_chars | 971.337 | 0.390382 | 351.236ms | 1988137 | 30 | 1.74202e+09 | 1.95198e+06 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3308.33 | 0.383739 | 0.139992ms | 1886 | 30 | 130.575 | 543.667 | 1(Win) |
| jeaiii::to_text | 1757.68 | 0.0620094 | 0.253815ms | 1886 | 30 | 12.0793 | 1023.3 | 2(Loss) |
| fmt::format_to | 1125.53 | 1.61885 | 0.324548ms | 1886 | 30 | 20077.3 | 1598.03 | 3(Loss) |
| std::to_chars | 942.711 | 0.0941598 | 0.381694ms | 1886 | 30 | 96.823 | 1907.93 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3267.67 | 0.104835 | 1.0521ms | 18871 | 30 | 1000.12 | 5507.53 | 1(Win) |
| jeaiii::to_text | 1783.47 | 0.0136866 | 1.88522ms | 18871 | 30 | 57.223 | 10090.9 | 2(Loss) |
| fmt::format_to | 1088.06 | 1.59509 | 3.00504ms | 18871 | 30 | 2.08821e+06 | 16540.2 | 3(Loss) |
| std::to_chars | 917.718 | 1.31896 | 3.56027ms | 18871 | 30 | 2.00705e+06 | 19610.4 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3094.15 | 1.22578 | 10.5081ms | 188834 | 30 | 1.52695e+07 | 58202.2 | 1(Win) |
| jeaiii::to_text | 1693.83 | 1.44321 | 18.808ms | 188834 | 30 | 7.06315e+07 | 106319 | 2(Loss) |
| fmt::format_to | 1099.48 | 0.38028 | 29.5903ms | 188834 | 30 | 1.16389e+07 | 163792 | 3(Loss) |
| std::to_chars | 922.74 | 0.818804 | 36.1909ms | 188834 | 30 | 7.66097e+07 | 195165 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2991.66 | 0.152545 | 108.66ms | 1887777 | 30 | 2.5281e+07 | 601780 | 1(Win) |
| jeaiii::to_text | 1698.42 | 0.180328 | 190.893ms | 1887777 | 30 | 1.09612e+08 | 1.06e+06 | 2(Loss) |
| fmt::format_to | 1086.83 | 0.0636488 | 298.72ms | 1887777 | 30 | 3.33489e+07 | 1.6565e+06 | 3(Loss) |
| std::to_chars | 928.856 | 0.0735675 | 349.519ms | 1887777 | 30 | 6.09955e+07 | 1.93822e+06 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3677.37 | 0.157801 | 0.132508ms | 1937 | 30 | 18.8506 | 502.333 | 1(Win) |
| jeaiii::to_text | 1942.99 | 0.0596564 | 0.208761ms | 1937 | 30 | 9.65057 | 950.733 | 2(Loss) |
| fmt::format_to | 1032.17 | 0.0502735 | 0.377517ms | 1937 | 30 | 24.2862 | 1789.7 | 3(Loss) |
| std::to_chars | 920.275 | 0.107411 | 0.397825ms | 1937 | 30 | 139.459 | 2007.3 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3950.86 | 0.104005 | 0.928948ms | 19357 | 30 | 708.464 | 4672.47 | 1(Win) |
| jeaiii::to_text | 2010.27 | 0.0174033 | 8.42282ms | 19357 | 48 | 122.596 | 9183 | 2(Loss) |
| fmt::format_to | 875.666 | 1.21065 | 3.8335ms | 19357 | 30 | 1.95414e+06 | 21081.4 | 3(Loss) |
| std::to_chars | 825.958 | 1.19224 | 4.06618ms | 19357 | 30 | 2.13014e+06 | 22350.1 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3028.86 | 0.833883 | 11.4435ms | 193984 | 30 | 7.78224e+06 | 61078.2 | 1(Win) |
| jeaiii::to_text | 1848.54 | 0.581309 | 18.2671ms | 193984 | 30 | 1.01533e+07 | 100078 | 2(Loss) |
| fmt::format_to | 843.704 | 0.334509 | 39.6651ms | 193984 | 30 | 1.61394e+07 | 219268 | 3(Loss) |
| std::to_chars | 788.943 | 0.398235 | 42.2609ms | 193984 | 30 | 2.61602e+07 | 234488 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2156.16 | 0.172016 | 154.919ms | 1939762 | 30 | 6.53424e+07 | 857962 | 1(Win) |
| jeaiii::to_text | 1580.54 | 0.225556 | 210.491ms | 1939762 | 30 | 2.09083e+08 | 1.17043e+06 | 2(Loss) |
| fmt::format_to | 834.618 | 0.100167 | 398.693ms | 1939762 | 30 | 1.47874e+08 | 2.21647e+06 | 3(Loss) |
| std::to_chars | 783.819 | 0.121388 | 425.102ms | 1939762 | 30 | 2.46229e+08 | 2.36011e+06 | 4(Loss) |
