# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2327.76 | 0.0776961 | 0.028539ms | 275 | 30 | 0.229885 | 112.667 | 1.04885 | 1(Win) |
| jeaiii::to_text | 2240.9 | 0.0764616 | 0.02972ms | 275 | 30 | 0.24023 | 117.033 | 1.144 | 2(Loss) |
| std::to_chars | 1524.47 | 0.0590124 | 0.113588ms | 275 | 30 | 0.309195 | 172.033 | 1.78727 | 3(Loss) |
| fmt::format_to | 1491.25 | 0.0707436 | 0.04044ms | 275 | 30 | 0.464368 | 175.867 | 1.80873 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2758.79 | 0.0286356 | 0.181138ms | 2650 | 30 | 2.06437 | 916.067 | 1.0754 | 1(Win) |
| jeaiii::to_text | 2514.5 | 0.0718637 | 0.197219ms | 2650 | 30 | 15.6506 | 1005.07 | 1.18523 | 2(Loss) |
| fmt::format_to | 1639.11 | 0.0485833 | 0.295792ms | 2650 | 30 | 16.8333 | 1541.83 | 1.82799 | 3(Loss) |
| std::to_chars | 1600.46 | 0.264564 | 0.30389ms | 2650 | 30 | 523.582 | 1579.07 | 1.86645 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::to_chars STATISTICAL TIE | 735.928 | 1.30175 | 7.13673ms | 26481 | 30 | 5.98655e+06 | 34316.2 | 4.1246 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 722.351 | 0.0933718 | 6.61809ms | 26481 | 30 | 31968.7 | 34961.2 | 4.20331 | 1(Tie) |
| vn::to_chars | 651.225 | 0.605319 | 7.85173ms | 26481 | 30 | 1.65309e+06 | 38779.6 | 4.66281 | 3(Loss) |
| fmt::format_to | 577.957 | 0.0551701 | 9.03109ms | 26481 | 30 | 17434.4 | 43695.7 | 5.25468 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 490.873 | 1.27862 | 92.1278ms | 264896 | 30 | 1.29903e+09 | 514643 | 6.18973 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 484.105 | 0.391825 | 94.093ms | 264896 | 30 | 1.25423e+08 | 521838 | 6.27708 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 427.608 | 1.75126 | 105.584ms | 264896 | 30 | 3.21131e+09 | 590785 | 7.10547 | 3(Tie) |
| std::to_chars STATISTICAL TIE | 426.756 | 0.297622 | 257.805ms | 264896 | 30 | 9.31198e+07 | 591965 | 7.12087 | 3(Tie) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2628.68 | 0.118554 | 0.030748ms | 310 | 30 | 0.533333 | 112.467 | 0.937849 | 1(Win) |
| jeaiii::to_text | 2502.59 | 0.105317 | 0.033732ms | 310 | 30 | 0.464368 | 118.133 | 1.02731 | 2(Loss) |
| std::to_chars | 1857.81 | 0.0837872 | 0.037452ms | 310 | 30 | 0.533333 | 159.133 | 1.45753 | 3(Loss) |
| fmt::format_to | 1659.34 | 0.076511 | 0.04065ms | 310 | 30 | 0.557471 | 178.167 | 1.62505 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3257.98 | 0.156329 | 0.440993ms | 3141 | 30 | 61.9782 | 919.433 | 0.912469 | 1(Win) |
| jeaiii::to_text | 3083.9 | 0.0827938 | 0.18693ms | 3141 | 30 | 19.4023 | 971.333 | 0.967866 | 2(Loss) |
| std::to_chars | 2171.96 | 0.180846 | 0.261987ms | 3141 | 30 | 186.626 | 1379.17 | 1.37464 | 3(Loss) |
| fmt::format_to | 1787.14 | 0.0797228 | 0.315181ms | 3141 | 30 | 53.5678 | 1676.13 | 1.68055 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2280.7 | 0.0181643 | 2.46333ms | 31452 | 30 | 171.206 | 13151.6 | 1.32904 | 1(Win) |
| vn::to_chars | 2140.82 | 1.52021 | 2.61847ms | 31452 | 30 | 1.36103e+06 | 14011 | 1.41605 | 2(Loss) |
| fmt::format_to | 1794.34 | 0.770639 | 7.75047ms | 31452 | 30 | 497865 | 16716.5 | 1.68997 | 3(Loss) |
| std::to_chars | 1289.13 | 2.35894 | 5.13706ms | 31452 | 30 | 9.03771e+06 | 23267.6 | 2.35362 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1197.37 | 1.60642 | 45.0822ms | 314310 | 30 | 4.85179e+08 | 250341 | 2.53686 | 1(Win) |
| jeaiii::to_text | 1090.59 | 1.19551 | 166.564ms | 314310 | 30 | 3.23906e+08 | 274850 | 2.78552 | 2(Loss) |
| fmt::format_to STATISTICAL TIE | 892.509 | 0.46335 | 61.6582ms | 314310 | 30 | 7.26492e+07 | 335850 | 3.40453 | 3(Tie) |
| std::to_chars STATISTICAL TIE | 880.423 | 1.01635 | 62.8347ms | 314310 | 30 | 3.59208e+08 | 340461 | 3.45109 | 3(Tie) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1876.78 | 0.129148 | 0.027995ms | 221 | 30 | 0.631034 | 112.3 | 1.2822 | 1(Win) |
| jeaiii::to_text | 1782.09 | 0.0900458 | 0.036297ms | 221 | 30 | 0.34023 | 118.267 | 1.4356 | 2(Loss) |
| fmt::format_to | 1232.53 | 0.0841164 | 0.063429ms | 221 | 30 | 0.62069 | 171 | 2.1813 | 3(Loss) |
| std::to_chars | 1184.5 | 0.0534415 | 0.040261ms | 221 | 30 | 0.271264 | 177.933 | 2.31222 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2187.39 | 0.0269699 | 0.180188ms | 2148 | 30 | 1.91379 | 936.5 | 1.36307 | 1(Win) |
| jeaiii::to_text | 2100.44 | 0.100984 | 0.456997ms | 2148 | 30 | 29.0989 | 975.267 | 1.42022 | 2(Loss) |
| std::to_chars | 1482.66 | 0.112636 | 0.267556ms | 2148 | 30 | 72.654 | 1381.63 | 2.01397 | 3(Loss) |
| fmt::format_to | 1260.3 | 0.0540388 | 0.300642ms | 2148 | 30 | 23.1448 | 1625.4 | 2.3843 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2249.92 | 0.155922 | 1.8433ms | 21459 | 30 | 6034.21 | 9095.83 | 1.34492 | 1(Win) |
| jeaiii::to_text | 1714.87 | 0.0640816 | 2.60692ms | 21459 | 30 | 1754.46 | 11933.8 | 1.76719 | 2(Loss) |
| fmt::format_to | 1099.48 | 0.540054 | 3.59696ms | 21459 | 30 | 303140 | 18613.3 | 2.75886 | 3(Loss) |
| std::to_chars | 791.06 | 0.511904 | 4.7207ms | 21459 | 30 | 526137 | 25870.2 | 3.83666 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 828.289 | 0.328884 | 45.0455ms | 215093 | 30 | 1.99019e+07 | 247653 | 3.66859 | 1(Win) |
| jeaiii::to_text | 746.479 | 0.301314 | 49.6061ms | 215093 | 30 | 2.05674e+07 | 274795 | 4.07067 | 2(Loss) |
| std::to_chars | 621.793 | 0.422131 | 59.5339ms | 215093 | 30 | 5.81806e+07 | 329899 | 4.88717 | 3(Loss) |
| fmt::format_to | 612.181 | 0.511186 | 60.3507ms | 215093 | 30 | 8.80183e+07 | 335078 | 4.96364 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2221.58 | 0.088574 | 0.028666ms | 263 | 30 | 0.3 | 112.9 | 1.08048 | 1(Win) |
| jeaiii::to_text | 2152.31 | 0.178079 | 0.036033ms | 263 | 30 | 1.29195 | 116.533 | 1.14689 | 2(Loss) |
| std::to_chars | 2046.92 | 0.115635 | 0.029828ms | 263 | 30 | 0.602299 | 122.533 | 1.25843 | 3(Loss) |
| fmt::format_to | 1726.79 | 0.101464 | 0.15372ms | 263 | 48 | 1.04255 | 145.25 | 1.52796 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2701.93 | 0.0227774 | 0.178058ms | 2595 | 30 | 1.30575 | 915.933 | 1.09611 | 1(Win) |
| jeaiii::to_text | 2617.16 | 0.047457 | 0.183544ms | 2595 | 30 | 6.04138 | 945.6 | 1.13409 | 2(Loss) |
| std::to_chars | 2523.49 | 0.167526 | 0.192369ms | 2595 | 30 | 80.9759 | 980.7 | 1.17946 | 3(Loss) |
| fmt::format_to | 2004.47 | 0.0373464 | 0.235383ms | 2595 | 30 | 6.37816 | 1234.63 | 1.4944 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1927.17 | 1.6731 | 3.29429ms | 25745 | 30 | 1.36305e+06 | 12740.1 | 1.57228 | 1(Win) |
| std::to_chars | 1435.68 | 1.60783 | 7.56142ms | 25745 | 30 | 2.26816e+06 | 17101.6 | 2.11235 | 2(Loss) |
| vn::to_chars | 1342.57 | 0.332609 | 3.39625ms | 25745 | 30 | 110994 | 18287.6 | 2.2594 | 3(Loss) |
| fmt::format_to | 1102.02 | 2.35914 | 4.88995ms | 25745 | 30 | 8.2877e+06 | 22279.4 | 2.75306 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 825.029 | 0.846936 | 53.8468ms | 256746 | 30 | 1.89536e+08 | 296780 | 3.68321 | 1(Win) |
| jeaiii::to_text | 772.945 | 1.3125 | 57.6875ms | 256746 | 30 | 5.18601e+08 | 316778 | 3.93033 | 2(Loss) |
| std::to_chars STATISTICAL TIE | 740.332 | 0.800465 | 59.4453ms | 256746 | 30 | 2.10262e+08 | 330733 | 4.10387 | 3(Tie) |
| fmt::format_to STATISTICAL TIE | 726.555 | 0.632842 | 61.9578ms | 256746 | 30 | 1.36453e+08 | 337004 | 4.18207 | 3(Tie) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4226.15 | 0.153179 | 0.030596ms | 530 | 30 | 1.0069 | 119.6 | 0.602201 | 1(Win) |
| jeaiii::to_text | 3553.65 | 0.0993338 | 0.034276ms | 530 | 30 | 0.598851 | 142.233 | 0.741761 | 2(Loss) |
| fmt::format_to | 2468.81 | 0.130251 | 0.053248ms | 530 | 30 | 2.13333 | 204.733 | 1.11101 | 3(Loss) |
| std::to_chars | 2036.73 | 0.0514198 | 0.054248ms | 530 | 30 | 0.488506 | 248.167 | 1.38541 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4578.6 | 0.214214 | 0.213299ms | 5131 | 30 | 157.237 | 1068.73 | 0.64795 | 1(Win) |
| jeaiii::to_text | 4088.66 | 0.0731504 | 0.542116ms | 5131 | 30 | 22.9931 | 1196.8 | 0.730715 | 2(Loss) |
| fmt::format_to | 2510.8 | 0.0752809 | 0.834275ms | 5131 | 30 | 64.5759 | 1948.9 | 1.19634 | 3(Loss) |
| std::to_chars | 2305.62 | 0.103904 | 0.407027ms | 5131 | 30 | 145.885 | 2122.33 | 1.30116 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2339.49 | 0.260011 | 9.93176ms | 51578 | 30 | 89658.3 | 21025.4 | 1.297 | 1(Win) |
| jeaiii::to_text | 1821.53 | 0.611328 | 5.86398ms | 51578 | 30 | 817570 | 27004 | 1.66635 | 2(Loss) |
| fmt::format_to | 997.335 | 0.337299 | 9.09884ms | 51578 | 30 | 830231 | 49320.1 | 3.04509 | 3(Loss) |
| std::to_chars | 853.745 | 1.12764 | 10.3707ms | 51578 | 30 | 1.26629e+07 | 57615.1 | 3.5576 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 940.218 | 0.6945 | 146.81ms | 516075 | 30 | 3.96492e+08 | 523461 | 3.2315 | 1(Win) |
| jeaiii::to_text | 913.693 | 1.03317 | 147.07ms | 516075 | 30 | 9.29158e+08 | 538657 | 3.32456 | 2(Loss) |
| fmt::format_to | 865.855 | 0.531916 | 242.453ms | 516075 | 30 | 2.74248e+08 | 568418 | 3.50765 | 3(Loss) |
| std::to_chars | 717.656 | 0.346275 | 126.492ms | 516075 | 30 | 1.69184e+08 | 685799 | 4.23407 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4472.35 | 0.141641 | 0.032932ms | 559 | 30 | 0.855172 | 119.2 | 0.566488 | 1(Win) |
| jeaiii::to_text | 3809.7 | 0.083461 | 0.034204ms | 559 | 30 | 0.409195 | 139.933 | 0.690936 | 2(Loss) |
| fmt::format_to | 2645.68 | 0.105746 | 0.044511ms | 559 | 30 | 1.36207 | 201.5 | 1.03411 | 3(Loss) |
| std::to_chars | 2246.86 | 0.0603984 | 0.052775ms | 559 | 30 | 0.616092 | 237.267 | 1.24538 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5149.9 | 0.197381 | 0.207371ms | 5676 | 30 | 129.128 | 1051.1 | 0.577355 | 1(Win) |
| jeaiii::to_text | 4449.45 | 0.0732755 | 0.239468ms | 5676 | 30 | 23.8402 | 1216.57 | 0.671788 | 2(Loss) |
| fmt::format_to | 2746.44 | 0.106787 | 0.368527ms | 5676 | 30 | 132.892 | 1970.93 | 1.09553 | 3(Loss) |
| std::to_chars | 2547.56 | 0.115356 | 0.444946ms | 5676 | 30 | 180.234 | 2124.8 | 1.17766 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3324.39 | 1.90183 | 3.46738ms | 56610 | 30 | 2.86171e+06 | 16239.8 | 0.91212 | 1(Win) |
| jeaiii::to_text | 2896.87 | 2.11704 | 3.5234ms | 56610 | 30 | 4.66991e+06 | 18636.5 | 1.04705 | 2(Loss) |
| fmt::format_to | 2023.92 | 1.25198 | 5.3519ms | 56610 | 30 | 3.34591e+06 | 26674.7 | 1.49958 | 3(Loss) |
| std::to_chars | 1537.68 | 1.91618 | 6.34167ms | 56610 | 30 | 1.35785e+07 | 35109.8 | 1.97434 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1907.32 | 0.3378 | 51.7285ms | 566043 | 30 | 2.74216e+07 | 283026 | 1.59318 | 1(Win) |
| jeaiii::to_text | 1678.6 | 1.11226 | 57.3981ms | 566043 | 30 | 3.83827e+08 | 321589 | 1.80939 | 2(Loss) |
| fmt::format_to | 1506.59 | 0.215 | 64.9341ms | 566043 | 30 | 1.78036e+07 | 358306 | 2.01699 | 3(Loss) |
| std::to_chars | 1270.88 | 1.19397 | 126.441ms | 566043 | 30 | 7.71617e+08 | 424762 | 2.39024 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3715.11 | 0.16181 | 0.192063ms | 475 | 30 | 1.16782 | 121.933 | 0.683789 | 1(Win) |
| jeaiii::to_text | 3190.11 | 0.0955019 | 0.033924ms | 475 | 30 | 0.551724 | 142 | 0.828912 | 2(Loss) |
| fmt::format_to | 2226.75 | 0.128407 | 0.044991ms | 475 | 30 | 2.04713 | 203.433 | 1.22884 | 3(Loss) |
| std::to_chars | 1762.63 | 0.0417164 | 0.056066ms | 475 | 30 | 0.344828 | 257 | 1.60463 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4475.6 | 0.0557273 | 0.197287ms | 4665 | 30 | 9.20575 | 994.033 | 0.662894 | 1(Win) |
| jeaiii::to_text | 3615.91 | 0.0446844 | 0.248201ms | 4665 | 30 | 9.06782 | 1230.37 | 0.828503 | 2(Loss) |
| fmt::format_to | 2328.77 | 0.0708355 | 0.854484ms | 4665 | 30 | 54.9379 | 1910.4 | 1.2903 | 3(Loss) |
| std::to_chars | 1570.18 | 0.329982 | 0.648572ms | 4665 | 30 | 2622.45 | 2833.37 | 1.91591 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3417.31 | 1.45412 | 2.45105ms | 46577 | 30 | 1.07176e+06 | 12998.3 | 0.886883 | 1(Win) |
| jeaiii::to_text | 1912.94 | 0.862389 | 4.23024ms | 46577 | 30 | 1.20301e+06 | 23220.4 | 1.58584 | 2(Loss) |
| fmt::format_to | 1439.38 | 0.82475 | 5.58413ms | 46577 | 30 | 1.94339e+06 | 30860.1 | 2.10896 | 3(Loss) |
| std::to_chars | 1113.72 | 1.78578 | 7.06196ms | 46577 | 30 | 1.52183e+07 | 39883.7 | 2.72441 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1688.27 | 0.344817 | 48.5791ms | 466284 | 30 | 2.47467e+07 | 263396 | 1.79985 | 1(Win) |
| jeaiii::to_text | 1377.04 | 0.714802 | 57.7613ms | 466284 | 30 | 1.59846e+08 | 322927 | 2.20607 | 2(Loss) |
| fmt::format_to | 1209 | 0.917986 | 66.4424ms | 466284 | 30 | 3.42011e+08 | 367810 | 2.51135 | 3(Loss) |
| std::to_chars | 1075.23 | 0.367391 | 74.6095ms | 466284 | 30 | 6.92594e+07 | 413571 | 2.82619 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3784.21 | 0.179387 | 0.030666ms | 480 | 30 | 1.41264 | 120.967 | 0.659861 | 1(Win) |
| jeaiii::to_text | 3485.51 | 0.0988624 | 0.052525ms | 480 | 30 | 0.505747 | 131.333 | 0.753264 | 2(Loss) |
| fmt::format_to | 2544.07 | 0.15058 | 0.040958ms | 480 | 30 | 2.2023 | 179.933 | 1.06208 | 3(Loss) |
| std::to_chars | 2189.91 | 0.0777273 | 0.046506ms | 480 | 30 | 0.791954 | 209.033 | 1.26035 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4619.41 | 0.0918246 | 0.190753ms | 4817 | 30 | 25.0161 | 994.467 | 0.641962 | 1(Win) |
| jeaiii::to_text | 4566.9 | 0.0507471 | 0.192448ms | 4817 | 30 | 7.81724 | 1005.9 | 0.652564 | 2(Loss) |
| fmt::format_to | 2673.69 | 0.0914128 | 0.320283ms | 4817 | 30 | 74.0057 | 1718.17 | 1.12317 | 3(Loss) |
| std::to_chars | 2371.22 | 0.224713 | 0.367687ms | 4817 | 30 | 568.575 | 1937.33 | 1.26946 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 4667.84 | 1.75981 | 1.81777ms | 48322 | 30 | 905547 | 9872.53 | 0.648628 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 4517.45 | 0.0322987 | 1.8797ms | 48322 | 30 | 325.683 | 10201.2 | 0.670496 | 1(Tie) |
| fmt::format_to | 2772.09 | 0.40674 | 3.04532ms | 48322 | 30 | 137162 | 16624.1 | 1.09408 | 3(Loss) |
| std::to_chars | 2372.68 | 1.61176 | 3.50911ms | 48322 | 30 | 2.93989e+06 | 19422.5 | 1.27842 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2804.08 | 0.276107 | 29.7852ms | 482920 | 30 | 6.16946e+06 | 164242 | 1.0835 | 1(Win) |
| jeaiii::to_text | 2553.97 | 0.346471 | 32.869ms | 482920 | 30 | 1.17105e+07 | 180327 | 1.1897 | 2(Loss) |
| fmt::format_to | 1922.34 | 0.69699 | 43.7618ms | 482920 | 30 | 8.36493e+07 | 239576 | 1.57984 | 3(Loss) |
| std::to_chars | 1674.17 | 0.823666 | 49.456ms | 482920 | 30 | 1.54019e+08 | 275090 | 1.81481 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5846.67 | 0.0862726 | 0.039276ms | 1004 | 30 | 0.598851 | 163.767 | 0.456873 | 1(Win) |
| jeaiii::to_text | 4209.98 | 0.0502577 | 0.053685ms | 1004 | 30 | 0.391954 | 227.433 | 0.657935 | 2(Loss) |
| fmt::format_to | 3162.47 | 0.234183 | 0.063632ms | 1004 | 30 | 15.0816 | 302.767 | 0.898805 | 3(Loss) |
| std::to_chars | 2561.04 | 0.0400101 | 0.08259ms | 1004 | 30 | 0.671264 | 373.867 | 1.12865 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5791.07 | 0.123916 | 0.321683ms | 10017 | 30 | 125.352 | 1649.6 | 0.513846 | 1(Win) |
| jeaiii::to_text | 4761.48 | 0.100233 | 0.878141ms | 10017 | 30 | 121.321 | 2006.3 | 0.629117 | 2(Loss) |
| fmt::format_to | 3209.42 | 0.255874 | 0.552526ms | 10017 | 30 | 1740.19 | 2976.53 | 0.93918 | 3(Loss) |
| std::to_chars | 2562.95 | 2.47433 | 3.36173ms | 10017 | 48 | 408274 | 3727.33 | 1.17738 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 2651.51 | 1.52206 | 7.0467ms | 99876 | 30 | 8.96854e+06 | 35922.6 | 1.14503 | 1(Win) |
| vn::to_chars | 1802.41 | 0.592713 | 10.3032ms | 99876 | 30 | 2.94324e+06 | 52845.4 | 1.68367 | 2(Loss) |
| jeaiii::to_text | 1532.21 | 0.439176 | 11.4995ms | 99876 | 30 | 2.23607e+06 | 62164.6 | 1.98238 | 3(Loss) |
| std::to_chars | 1155.89 | 1.09752 | 15.0208ms | 99876 | 30 | 2.45378e+07 | 82403.4 | 2.62818 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1470.72 | 0.349153 | 118.493ms | 998051 | 30 | 1.53177e+08 | 647175 | 2.06611 | 1(Win) |
| jeaiii::to_text | 1413.06 | 0.492687 | 124.523ms | 998051 | 30 | 3.30404e+08 | 673582 | 2.15043 | 2(Loss) |
| fmt::format_to | 1277.79 | 0.260638 | 136.198ms | 998051 | 30 | 1.13079e+08 | 744893 | 2.37803 | 3(Loss) |
| std::to_chars | 1011.77 | 1.25835 | 168.378ms | 998051 | 30 | 4.20401e+09 | 940742 | 3.00219 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6139.61 | 0.11916 | 0.039279ms | 1041 | 30 | 1.11379 | 161.7 | 0.433237 | 1(Win) |
| jeaiii::to_text | 4142.32 | 0.0541749 | 0.051111ms | 1041 | 30 | 0.505747 | 239.667 | 0.674864 | 2(Loss) |
| fmt::format_to | 3308.51 | 0.21493 | 0.063149ms | 1041 | 30 | 12.4782 | 300.067 | 0.858822 | 3(Loss) |
| std::to_chars | 2518.67 | 0.0245801 | 0.080706ms | 1041 | 30 | 0.281609 | 394.167 | 1.15107 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6205.36 | 0.056339 | 0.304173ms | 10464 | 30 | 24.6264 | 1608.17 | 0.47938 | 1(Win) |
| jeaiii::to_text | 4533.21 | 0.214505 | 0.414351ms | 10464 | 30 | 668.93 | 2201.37 | 0.662404 | 2(Loss) |
| fmt::format_to | 3441.29 | 0.0721586 | 2.65223ms | 10464 | 48 | 210.17 | 2899.85 | 0.875986 | 3(Loss) |
| std::to_chars | 2567.32 | 1.96682 | 0.716171ms | 10464 | 30 | 175342 | 3887.03 | 1.17523 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3690.58 | 1.17838 | 5.14241ms | 104825 | 30 | 3.05655e+06 | 27087.6 | 0.822363 | 1(Win) |
| jeaiii::to_text | 2847.64 | 0.596425 | 6.43839ms | 104825 | 30 | 1.31521e+06 | 35105.9 | 1.06612 | 2(Loss) |
| fmt::format_to | 2194.44 | 0.615947 | 7.66313ms | 104825 | 30 | 2.36206e+06 | 45555.6 | 1.38365 | 3(Loss) |
| std::to_chars | 1694.62 | 0.242196 | 10.8805ms | 104825 | 30 | 612411 | 58992 | 1.79227 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2258.35 | 1.62621 | 235.702ms | 1048127 | 30 | 1.55425e+09 | 442612 | 1.34524 | 1(Win) |
| jeaiii::to_text | 2124.91 | 0.382328 | 135.963ms | 1048127 | 30 | 9.70379e+07 | 470407 | 1.42991 | 2(Loss) |
| fmt::format_to | 1771.28 | 0.506726 | 102.435ms | 1048127 | 30 | 2.45314e+08 | 564322 | 1.71532 | 3(Loss) |
| std::to_chars | 1435.58 | 0.791301 | 126.214ms | 1048127 | 30 | 9.10701e+08 | 696283 | 2.11648 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5430.94 | 0.14076 | 0.039979ms | 944 | 30 | 1.63333 | 165.767 | 0.490078 | 1(Win) |
| jeaiii::to_text | 4237.89 | 0.0737711 | 0.047496ms | 944 | 30 | 0.736782 | 212.433 | 0.650565 | 2(Loss) |
| fmt::format_to | 3097.25 | 0.22995 | 0.061535ms | 944 | 30 | 13.4023 | 290.667 | 0.915572 | 3(Loss) |
| std::to_chars | 2236.14 | 0.550224 | 0.079606ms | 944 | 30 | 147.214 | 402.6 | 1.29714 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5503.57 | 0.204807 | 0.313027ms | 9482 | 30 | 339.72 | 1643.07 | 0.543131 | 1(Win) |
| jeaiii::to_text | 4472.62 | 0.0236434 | 0.383853ms | 9482 | 30 | 6.85517 | 2021.8 | 0.669528 | 2(Loss) |
| fmt::format_to | 3166.48 | 0.0875733 | 0.528174ms | 9482 | 30 | 187.633 | 2855.77 | 0.952433 | 3(Loss) |
| std::to_chars | 2475.2 | 0.0307318 | 0.723272ms | 9482 | 30 | 37.8161 | 3653.33 | 1.2192 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2818.12 | 0.0926135 | 5.957ms | 94883 | 30 | 26529.5 | 32109.2 | 1.07728 | 1(Win) |
| jeaiii::to_text | 2447.97 | 2.05743 | 6.79022ms | 94883 | 30 | 1.73513e+07 | 36964.2 | 1.23943 | 2(Loss) |
| fmt::format_to | 2000.24 | 0.100053 | 8.29505ms | 94883 | 30 | 61460.1 | 45238.2 | 1.51833 | 3(Loss) |
| std::to_chars | 1479.13 | 0.266262 | 11.1053ms | 94883 | 30 | 795988 | 61176.3 | 2.05359 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2061.21 | 0.531911 | 79.1519ms | 948221 | 30 | 1.63371e+08 | 438721 | 1.4741 | 1(Win) |
| jeaiii::to_text | 1935.51 | 0.571197 | 84.9109ms | 948221 | 30 | 2.13659e+08 | 467212 | 1.56981 | 2(Loss) |
| fmt::format_to | 1580.53 | 1.12255 | 101.715ms | 948221 | 30 | 1.23752e+09 | 572148 | 1.92114 | 3(Loss) |
| std::to_chars | 1307.85 | 0.424393 | 346.717ms | 948221 | 30 | 2.58321e+08 | 691435 | 2.32254 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6408.01 | 0.109884 | 0.037257ms | 979 | 30 | 0.768966 | 145.7 | 0.409091 | 1(Win) |
| jeaiii::to_text | 4555.12 | 0.0757394 | 0.046023ms | 979 | 30 | 0.722989 | 204.967 | 0.601124 | 2(Loss) |
| fmt::format_to | 3356.43 | 0.391571 | 0.058557ms | 979 | 30 | 35.592 | 278.167 | 0.843241 | 3(Loss) |
| std::to_chars | 2577.24 | 0.0575891 | 0.076592ms | 979 | 30 | 1.30575 | 362.267 | 1.11934 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6783.42 | 0.150134 | 0.27332ms | 9767 | 30 | 127.499 | 1373.13 | 0.43933 | 1(Win) |
| jeaiii::to_text | 5229.46 | 0.0342705 | 0.340359ms | 9767 | 30 | 11.1782 | 1781.17 | 0.57167 | 2(Loss) |
| fmt::format_to | 3541.11 | 0.148706 | 0.486764ms | 9767 | 30 | 459.007 | 2630.4 | 0.850469 | 3(Loss) |
| std::to_chars | 2594.65 | 0.116045 | 0.680052ms | 9767 | 30 | 520.645 | 3589.9 | 1.16254 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6595.2 | 1.54601 | 2.60952ms | 97362 | 30 | 1.42124e+06 | 14078.7 | 0.459507 | 1(Win) |
| jeaiii::to_text | 4075.85 | 0.886434 | 4.38166ms | 97362 | 30 | 1.22337e+06 | 22780.9 | 0.744349 | 2(Loss) |
| fmt::format_to | 3440.1 | 1.29267 | 4.90424ms | 97362 | 30 | 3.65204e+06 | 26990.9 | 0.882261 | 3(Loss) |
| std::to_chars | 1950.17 | 0.531488 | 8.83198ms | 97362 | 30 | 1.92107e+06 | 47612.1 | 1.55702 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3663.96 | 0.568298 | 46.6711ms | 974018 | 30 | 6.22739e+07 | 253522 | 0.828826 | 1(Win) |
| jeaiii::to_text | 3209.79 | 0.28009 | 103.189ms | 974018 | 30 | 1.97105e+07 | 289395 | 0.9465 | 2(Loss) |
| fmt::format_to | 2481.13 | 0.422898 | 68.1824ms | 974018 | 30 | 7.52015e+07 | 374384 | 1.22463 | 3(Loss) |
| std::to_chars | 1797.94 | 1.15834 | 91.7627ms | 974018 | 30 | 1.07443e+09 | 516646 | 1.68996 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7488.82 | 0.131428 | 0.055028ms | 1932 | 30 | 3.13678 | 246.033 | 0.37148 | 1(Win) |
| jeaiii::to_text | 4664.16 | 0.0612703 | 0.080016ms | 1932 | 30 | 1.75747 | 395.033 | 0.617478 | 2(Loss) |
| fmt::format_to | 2858.66 | 0.0643083 | 0.130655ms | 1932 | 30 | 5.15402 | 644.533 | 1.0241 | 3(Loss) |
| std::to_chars | 2042.98 | 0.0525575 | 0.189766ms | 1932 | 30 | 6.74023 | 901.867 | 1.44819 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7471.42 | 0.0603953 | 0.466381ms | 19372 | 30 | 66.9069 | 2472.7 | 0.401108 | 1(Win) |
| jeaiii::to_text | 4745.22 | 0.0273481 | 0.711847ms | 19372 | 30 | 34.0103 | 3893.3 | 0.635526 | 2(Loss) |
| fmt::format_to | 2822.63 | 0.0489222 | 1.19677ms | 19372 | 30 | 307.592 | 6545.17 | 1.0724 | 3(Loss) |
| std::to_chars | 2021.74 | 0.0625035 | 1.68577ms | 19372 | 30 | 978.654 | 9137.97 | 1.49794 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4585.67 | 0.594282 | 7.66253ms | 193795 | 30 | 1.72102e+06 | 40303.2 | 0.662193 | 1(Win) |
| jeaiii::to_text | 2791.92 | 0.263386 | 11.9472ms | 193795 | 30 | 911981 | 66197.2 | 1.08793 | 2(Loss) |
| fmt::format_to | 2164.92 | 0.250155 | 15.5921ms | 193795 | 30 | 1.36817e+06 | 85369 | 1.40323 | 3(Loss) |
| std::to_chars | 1575.25 | 0.720131 | 21.1942ms | 193795 | 30 | 2.14156e+07 | 117326 | 1.92872 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2974.6 | 2.34401 | 108.437ms | 1938329 | 30 | 6.36557e+09 | 621439 | 1.02134 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2836.55 | 0.840252 | 286.252ms | 1938329 | 30 | 8.99526e+08 | 651683 | 1.07092 | 1(Tie) |
| fmt::format_to | 1885.26 | 1.79262 | 223.984ms | 1938329 | 30 | 9.26853e+09 | 980521 | 1.61148 | 3(Loss) |
| std::to_chars | 1459.92 | 0.818563 | 227.499ms | 1938329 | 30 | 3.22273e+09 | 1.26619e+06 | 2.08115 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7437.24 | 0.541323 | 0.059437ms | 1992 | 30 | 57.3575 | 255.433 | 0.376037 | 1(Win) |
| jeaiii::to_text | 4281.54 | 0.0726097 | 0.094745ms | 1992 | 30 | 3.11379 | 443.7 | 0.680823 | 2(Loss) |
| fmt::format_to | 2717.12 | 0.246692 | 0.135688ms | 1992 | 30 | 89.2471 | 699.167 | 1.07937 | 3(Loss) |
| std::to_chars | 2057.68 | 0.0533884 | 0.18075ms | 1992 | 30 | 7.28851 | 923.233 | 1.43946 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7488.64 | 0.0469389 | 0.473569ms | 19870 | 30 | 42.323 | 2530.43 | 0.401696 | 1(Win) |
| jeaiii::to_text | 4787.41 | 0.0349481 | 0.792606ms | 19870 | 30 | 57.4069 | 3958.2 | 0.630282 | 2(Loss) |
| fmt::format_to | 2738.62 | 0.0486113 | 1.26002ms | 19870 | 30 | 339.413 | 6919.37 | 1.10549 | 3(Loss) |
| std::to_chars | 2042.93 | 0.102595 | 1.72152ms | 19870 | 30 | 2716.85 | 9275.67 | 1.48358 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7132.74 | 0.778142 | 5.00737ms | 198818 | 30 | 1.28362e+06 | 26582.7 | 0.425492 | 1(Win) |
| jeaiii::to_text | 4480.2 | 0.998548 | 19.3163ms | 198818 | 30 | 5.35766e+06 | 42321.2 | 0.677576 | 2(Loss) |
| fmt::format_to | 2593.44 | 1.41602 | 13.3484ms | 198818 | 30 | 3.21529e+07 | 73110.5 | 1.17116 | 3(Loss) |
| std::to_chars | 1936.59 | 1.98325 | 17.5739ms | 198818 | 30 | 1.13113e+08 | 97908.1 | 1.56843 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5549.39 | 1.49476 | 111.715ms | 1987977 | 30 | 7.82343e+08 | 341638 | 0.547246 | 1(Win) |
| jeaiii::to_text | 4532.23 | 0.583985 | 75.898ms | 1987977 | 30 | 1.79029e+08 | 418311 | 0.670052 | 2(Loss) |
| fmt::format_to | 2498.51 | 0.536938 | 135.877ms | 1987977 | 30 | 4.98e+08 | 758804 | 1.21573 | 3(Loss) |
| std::to_chars | 1919.36 | 0.769326 | 419.896ms | 1987977 | 30 | 1.73242e+09 | 987770 | 1.58304 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7486.34 | 0.0747495 | 0.055475ms | 1884 | 30 | 0.965517 | 240 | 0.371196 | 1(Win) |
| jeaiii::to_text | 4557.12 | 0.0607233 | 0.080328ms | 1884 | 30 | 1.71954 | 394.267 | 0.631883 | 2(Loss) |
| fmt::format_to | 2740.72 | 0.0676997 | 0.128953ms | 1884 | 30 | 5.9092 | 655.567 | 1.06906 | 3(Loss) |
| std::to_chars | 1988.55 | 0.0900132 | 0.171128ms | 1884 | 30 | 19.8437 | 903.533 | 1.4894 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7279.93 | 0.295175 | 0.472056ms | 18847 | 30 | 1593.34 | 2468.97 | 0.412548 | 1(Win) |
| jeaiii::to_text | 4516.66 | 0.0342848 | 0.740317ms | 18847 | 30 | 55.8437 | 3979.47 | 0.667735 | 2(Loss) |
| fmt::format_to | 2491.85 | 0.044192 | 3.07688ms | 18847 | 30 | 304.823 | 7213.07 | 1.21525 | 3(Loss) |
| std::to_chars | 1910.32 | 0.526886 | 1.67568ms | 18847 | 30 | 73726.8 | 9408.83 | 1.58639 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6095.57 | 1.04518 | 5.34619ms | 188785 | 30 | 2.85896e+06 | 29536.1 | 0.497883 | 1(Win) |
| jeaiii::to_text | 4237.09 | 0.583815 | 7.82738ms | 188785 | 30 | 1.84616e+06 | 42491.3 | 0.716594 | 2(Loss) |
| fmt::format_to | 2404.34 | 0.301495 | 13.5401ms | 188785 | 30 | 1.52907e+06 | 74881 | 1.26338 | 3(Loss) |
| std::to_chars | 1865.48 | 1.08713 | 17.4171ms | 188785 | 30 | 3.30243e+07 | 96511 | 1.62852 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5477.27 | 1.12935 | 59.498ms | 1887783 | 30 | 4.13384e+08 | 328691 | 0.554443 | 1(Win) |
| jeaiii::to_text | 4320.34 | 0.372769 | 74.8627ms | 1887783 | 30 | 7.23884e+07 | 416710 | 0.70322 | 2(Loss) |
| fmt::format_to | 2334.42 | 1.27921 | 137.678ms | 1887783 | 30 | 2.9198e+09 | 771211 | 1.30097 | 3(Loss) |
| std::to_chars | 1854.89 | 0.248679 | 174.467ms | 1887783 | 30 | 1.7477e+08 | 970586 | 1.63827 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7882.24 | 0.08574 | 0.05359ms | 1939 | 30 | 1.21379 | 234.6 | 0.35116 | 1(Win) |
| jeaiii::to_text | 4982.95 | 0.0415657 | 0.0759ms | 1939 | 30 | 0.713793 | 371.1 | 0.575984 | 2(Loss) |
| fmt::format_to | 2511.9 | 0.178018 | 0.367007ms | 1939 | 30 | 51.523 | 736.167 | 1.17208 | 3(Loss) |
| std::to_chars | 2121.34 | 0.0460683 | 0.399306ms | 1939 | 30 | 4.83793 | 871.7 | 1.39395 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 7600.95 | 0.206672 | 0.499532ms | 19401 | 30 | 759.269 | 2434.2 | 0.395504 | 1(Win) |
| jeaiii::to_text | 5113.85 | 0.0463805 | 0.688073ms | 19401 | 30 | 84.4782 | 3618.07 | 0.589446 | 2(Loss) |
| std::to_chars | 1988.18 | 0.873579 | 1.71252ms | 19401 | 30 | 198273 | 9306.13 | 1.52325 | 3(Loss) |
| fmt::format_to | 1864.65 | 0.110568 | 1.83193ms | 19401 | 30 | 3611.07 | 9922.63 | 1.62567 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5275.96 | 0.143625 | 6.40333ms | 193868 | 30 | 75996.4 | 35043.3 | 0.575427 | 1(Win) |
| jeaiii::to_text | 3846 | 0.996866 | 8.79234ms | 193868 | 30 | 6.88951e+06 | 48072.5 | 0.789496 | 2(Loss) |
| fmt::format_to | 1705.59 | 0.354741 | 19.5716ms | 193868 | 30 | 4.43616e+06 | 108401 | 1.78128 | 3(Loss) |
| std::to_chars | 1530.27 | 0.657944 | 21.7953ms | 193868 | 30 | 1.89572e+07 | 120820 | 1.98539 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3536.59 | 0.391012 | 93.9872ms | 1939859 | 30 | 1.25508e+08 | 523101 | 0.859171 | 1(Win) |
| jeaiii::to_text | 3072.45 | 0.332081 | 108.822ms | 1939859 | 30 | 1.19944e+08 | 602123 | 0.989019 | 2(Loss) |
| fmt::format_to | 1631.99 | 0.870563 | 202.04ms | 1939859 | 30 | 2.92164e+09 | 1.13358e+06 | 1.86139 | 3(Loss) |
| std::to_chars | 1433.18 | 0.367011 | 231.64ms | 1939859 | 30 | 6.73313e+08 | 1.29083e+06 | 2.12046 | 4(Loss) |
