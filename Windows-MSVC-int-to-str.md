# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36248.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 822.544 | 1.57911 | 0.1002ms | 253 | 30 | 643.678 | 293.333 | 2.56232 | 1(Win) |
| jeaiii::to_text | 761.936 | 2.18541 | 0.1021ms | 253 | 30 | 1436.78 | 316.667 | 2.85692 | 2(Loss) |
| fmt::format_to | 532.234 | 2.04355 | 0.1019ms | 253 | 30 | 2574.71 | 453.333 | 4.31963 | 3(Loss) |
| std::to_chars | 327.529 | 1.21474 | 0.197ms | 253 | 30 | 2402.3 | 736.667 | 7.43347 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1018.28 | 0.299509 | 0.478ms | 2648 | 30 | 1655.17 | 2480 | 2.38824 | 1(Win) |
| jeaiii::to_text | 694.408 | 0.246065 | 0.6828ms | 2648 | 30 | 2402.3 | 3636.67 | 3.52885 | 2(Loss) |
| fmt::format_to | 598.419 | 0.176015 | 0.8159ms | 2648 | 30 | 1655.17 | 4220 | 4.1075 | 3(Loss) |
| std::to_chars | 255.568 | 1.44687 | 7.9036ms | 2648 | 48 | 981130 | 9881.25 | 9.65652 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 821.544 | 1.44371 | 5.7031ms | 26481 | 30 | 5.90869e+06 | 30740 | 3.01024 | 1(Win) |
| jeaiii::to_text | 670.111 | 0.907554 | 6.9212ms | 26481 | 30 | 3.50947e+06 | 37686.7 | 3.6899 | 2(Loss) |
| fmt::format_to | 594.731 | 0.0210736 | 7.8876ms | 26481 | 30 | 2402.3 | 42463.3 | 4.15837 | 3(Loss) |
| std::to_chars | 307.816 | 0.746405 | 15.0317ms | 26481 | 30 | 1.12501e+07 | 82043.3 | 8.03816 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 281.485 | 0.318933 | 162.159ms | 265679 | 30 | 2.47243e+08 | 900123 | 8.79493 | 1(Win) |
| jeaiii::to_text | 266.772 | 0.259482 | 171.438ms | 265679 | 30 | 1.82209e+08 | 949767 | 9.27937 | 2(Loss) |
| fmt::format_to | 236.842 | 0.281961 | 192.858ms | 265679 | 30 | 2.72958e+08 | 1.06979e+06 | 10.4456 | 3(Loss) |
| std::to_chars | 172.256 | 0.232458 | 264.777ms | 265679 | 30 | 3.50733e+08 | 1.4709e+06 | 14.3713 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 990.107 | 1.1236 | 0.1591ms | 308 | 30 | 333.333 | 296.667 | 2.20606 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 990.107 | 1.1236 | 0.074ms | 308 | 30 | 333.333 | 296.667 | 2.12727 | 1(Tie) |
| fmt::format_to | 652.737 | 2.06328 | 0.1032ms | 308 | 30 | 2586.21 | 450 | 3.54545 | 3(Loss) |
| std::to_chars | 407.961 | 1.03164 | 0.1803ms | 308 | 30 | 1655.17 | 720 | 5.729 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1170.73 | 0.352768 | 0.4957ms | 3114 | 30 | 2402.3 | 2536.67 | 2.08818 | 1(Win) |
| jeaiii::to_text | 931.927 | 0.198089 | 0.6454ms | 3114 | 30 | 1195.4 | 3186.67 | 2.627 | 2(Loss) |
| fmt::format_to | 709.333 | 0.150775 | 1.8367ms | 3114 | 30 | 1195.4 | 4186.67 | 3.45776 | 3(Loss) |
| std::to_chars | 375.917 | 0.0606916 | 1.4945ms | 3114 | 30 | 689.655 | 7900 | 6.5565 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1162.56 | 1.23928 | 4.7401ms | 31390 | 30 | 3.055e+06 | 25750 | 2.12666 | 1(Win) |
| jeaiii::to_text | 898.614 | 1.87135 | 5.979ms | 31390 | 30 | 1.16591e+07 | 33313.3 | 2.75216 | 2(Loss) |
| fmt::format_to | 688.497 | 1.90606 | 8.0601ms | 31390 | 30 | 2.06051e+07 | 43480 | 3.59141 | 3(Loss) |
| std::to_chars | 390.892 | 0.87217 | 13.9803ms | 31390 | 30 | 1.33842e+07 | 76583.3 | 6.32992 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 565.366 | 0.450726 | 95.9753ms | 314672 | 30 | 1.71713e+08 | 530797 | 4.37832 | 1(Win) |
| jeaiii::to_text | 523.269 | 0.400816 | 103.462ms | 314672 | 30 | 1.58518e+08 | 573500 | 4.73039 | 2(Loss) |
| fmt::format_to | 445.372 | 0.484248 | 121.515ms | 314672 | 30 | 3.19395e+08 | 673807 | 5.55825 | 3(Loss) |
| std::to_chars | 279.938 | 0.315325 | 193.125ms | 314672 | 30 | 3.42793e+08 | 1.072e+06 | 8.84275 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 687.931 | 1.1236 | 0.0731ms | 214 | 30 | 333.333 | 296.667 | 3.06168 | 1(Win) |
| jeaiii::to_text | 620.009 | 2.01418 | 0.3469ms | 214 | 48 | 2109.93 | 329.167 | 3.54361 | 2(Loss) |
| fmt::format_to | 450.19 | 2.04355 | 0.1028ms | 214 | 30 | 2574.71 | 453.333 | 5.0947 | 3(Loss) |
| std::to_chars | 269.718 | 1.21611 | 0.1931ms | 214 | 30 | 2540.23 | 756.667 | 8.86511 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 842.522 | 0.286364 | 0.4673ms | 2135 | 30 | 1436.78 | 2416.67 | 2.89877 | 1(Win) |
| fmt::format_to | 462.049 | 0.105115 | 0.8241ms | 2135 | 30 | 643.678 | 4406.67 | 5.31528 | 2(Loss) |
| std::to_chars | 257.842 | 0.0739488 | 1.4969ms | 2135 | 30 | 1022.99 | 7896.67 | 9.55769 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 769.195 | 0.357922 | 4.9572ms | 21640 | 30 | 276655 | 26830 | 3.21307 | 1(Win) |
| jeaiii::to_text | 646.336 | 0.0266509 | 5.9561ms | 21640 | 30 | 2172.41 | 31930 | 3.82679 | 2(Loss) |
| fmt::format_to | 471.93 | 2.035 | 7.9099ms | 21640 | 30 | 2.3758e+07 | 43730 | 5.24181 | 3(Loss) |
| std::to_chars | 269.572 | 0.814717 | 13.9621ms | 21640 | 30 | 1.16708e+07 | 76556.7 | 9.17978 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 397.918 | 0.55848 | 92.8539ms | 214796 | 30 | 2.47972e+08 | 514793 | 6.22088 | 1(Win) |
| jeaiii::to_text | 359.868 | 0.369208 | 102.853ms | 214796 | 30 | 1.32504e+08 | 569223 | 6.8788 | 2(Loss) |
| fmt::format_to | 308.488 | 0.487247 | 120.162ms | 214796 | 30 | 3.14048e+08 | 664030 | 8.02417 | 3(Loss) |
| std::to_chars | 195.162 | 0.260798 | 189.83ms | 214796 | 30 | 2.24799e+08 | 1.04962e+06 | 12.6843 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 841.477 | 2.44251 | 0.0712ms | 250 | 30 | 1436.78 | 283.333 | 2.6104 | 1(Win) |
| fmt::format_to | 558.794 | 1.92463 | 0.0957ms | 250 | 30 | 2022.99 | 426.667 | 3.9832 | 2(Loss) |
| std::to_chars | 289.577 | 0.953931 | 0.2054ms | 250 | 30 | 1850.57 | 823.333 | 8.15013 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1202.57 | 0.430513 | 0.4212ms | 2564 | 30 | 2298.85 | 2033.33 | 2.01693 | 1(Win) |
| jeaiii::to_text | 796.489 | 0.277187 | 0.5944ms | 2564 | 30 | 2172.41 | 3070 | 3.05767 | 2(Loss) |
| fmt::format_to | 605.253 | 0.225178 | 0.8306ms | 2564 | 30 | 2482.76 | 4040 | 4.05177 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1257.15 | 0.0471327 | 8.4773ms | 25736 | 30 | 2540.23 | 19523.3 | 1.96502 | 1(Win) |
| jeaiii::to_text | 787.079 | 0.0754555 | 5.8523ms | 25736 | 30 | 16609.2 | 31183.3 | 3.14096 | 2(Loss) |
| fmt::format_to | 603.041 | 1.69114 | 7.4456ms | 25736 | 30 | 1.42124e+07 | 40700 | 4.10212 | 3(Loss) |
| std::to_chars | 305.918 | 1.19679 | 14.5409ms | 25736 | 30 | 2.76587e+07 | 80230 | 8.0887 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 427.87 | 0.985433 | 104.196ms | 257031 | 30 | 9.56144e+08 | 572893 | 5.78559 | 1(Win) |
| jeaiii::to_text | 390.503 | 0.433982 | 114.911ms | 257031 | 30 | 2.22632e+08 | 627713 | 6.33876 | 2(Loss) |
| fmt::format_to | 328.581 | 0.530416 | 135.471ms | 257031 | 30 | 4.69721e+08 | 746007 | 7.53205 | 3(Loss) |
| std::to_chars | 210.11 | 0.341963 | 209.72ms | 257031 | 30 | 4.77483e+08 | 1.16665e+06 | 11.7807 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1409.58 | 2.10475 | 0.3797ms | 505 | 48 | 2482.27 | 341.667 | 1.57351 | 1(Win) |
| jeaiii::to_text | 1174.65 | 1.35875 | 0.0954ms | 505 | 30 | 931.034 | 410 | 1.92554 | 2(Loss) |
| fmt::format_to | 733.409 | 1.4013 | 0.1586ms | 505 | 30 | 2540.23 | 656.667 | 3.16119 | 3(Loss) |
| std::to_chars | 484.838 | 0.466314 | 0.2804ms | 505 | 30 | 643.678 | 993.333 | 4.84304 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1573.11 | 0.271873 | 0.6602ms | 5163 | 30 | 2172.41 | 3130 | 1.55708 | 1(Win) |
| jeaiii::to_text | 1027.94 | 0.183207 | 0.9314ms | 5163 | 30 | 2310.34 | 4790 | 2.39034 | 2(Loss) |
| fmt::format_to | 790.763 | 0.13188 | 1.1917ms | 5163 | 30 | 2022.99 | 6226.67 | 3.11248 | 3(Loss) |
| std::to_chars | 512.009 | 0.0719632 | 1.8263ms | 5163 | 30 | 1436.78 | 9616.67 | 4.80804 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1585.99 | 0.0401186 | 5.8902ms | 51637 | 30 | 4655.17 | 31050 | 1.55897 | 1(Win) |
| jeaiii::to_text | 1001.52 | 1.18251 | 9.0353ms | 51637 | 30 | 1.01422e+07 | 49170 | 2.47014 | 2(Loss) |
| fmt::format_to | 770.093 | 0.983985 | 11.6705ms | 51637 | 30 | 1.18777e+07 | 63946.7 | 3.21276 | 3(Loss) |
| std::to_chars | 508.273 | 0.809922 | 17.7023ms | 51637 | 30 | 1.84729e+07 | 96886.7 | 4.86837 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 505.34 | 0.284503 | 175.822ms | 516154 | 30 | 2.30402e+08 | 974083 | 4.89883 | 1(Win) |
| jeaiii::to_text | 423.262 | 0.273749 | 210.047ms | 516154 | 30 | 3.04065e+08 | 1.16297e+06 | 5.84855 | 2(Loss) |
| fmt::format_to | 372.666 | 0.249397 | 238.097ms | 516154 | 30 | 3.25554e+08 | 1.32087e+06 | 6.64299 | 3(Loss) |
| std::to_chars | 294.323 | 0.167787 | 300.558ms | 516154 | 30 | 2.36237e+08 | 1.67246e+06 | 8.41108 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1510.62 | 2.05211 | 0.4076ms | 561 | 48 | 2535.46 | 354.167 | 1.45603 | 1(Win) |
| jeaiii::to_text | 1253.93 | 1.92463 | 0.1025ms | 561 | 30 | 2022.99 | 426.667 | 1.78431 | 2(Loss) |
| fmt::format_to | 794.571 | 1.21957 | 0.3164ms | 561 | 30 | 2022.99 | 673.333 | 2.92442 | 3(Loss) |
| std::to_chars | 538.602 | 0.466314 | 0.5161ms | 561 | 30 | 643.678 | 993.333 | 4.35342 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1711.79 | 0.282884 | 0.6196ms | 5678 | 30 | 2402.3 | 3163.33 | 1.4276 | 1(Win) |
| jeaiii::to_text | 1370.88 | 0.235057 | 0.7946ms | 5678 | 30 | 2586.21 | 3950 | 1.79576 | 2(Loss) |
| fmt::format_to | 861.798 | 0.11014 | 1.1645ms | 5678 | 30 | 1436.78 | 6283.33 | 2.85322 | 3(Loss) |
| std::to_chars | 563.863 | 0.0347102 | 1.8232ms | 5678 | 30 | 333.333 | 9603.33 | 4.36722 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1728.64 | 0.0261559 | 28.7224ms | 56508 | 48 | 3191.49 | 31175 | 1.43062 | 1(Win) |
| jeaiii::to_text | 1219.42 | 1.68767 | 7.9938ms | 56508 | 30 | 1.66882e+07 | 44193.3 | 2.02842 | 2(Loss) |
| fmt::format_to | 847.286 | 0.943271 | 11.5822ms | 56508 | 30 | 1.07983e+07 | 63603.3 | 2.91976 | 3(Loss) |
| std::to_chars | 554.845 | 1.13242 | 17.6965ms | 56508 | 30 | 3.62924e+07 | 97126.7 | 4.45957 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 942.907 | 0.464955 | 104.056ms | 566145 | 30 | 2.12648e+08 | 572610 | 2.62534 | 1(Win) |
| jeaiii::to_text | 760.234 | 0.391238 | 128.378ms | 566145 | 30 | 2.31614e+08 | 710200 | 3.25602 | 2(Loss) |
| fmt::format_to | 571.162 | 0.353265 | 170.642ms | 566145 | 30 | 3.34548e+08 | 945297 | 4.33407 | 3(Loss) |
| std::to_chars | 436.68 | 0.231416 | 223.02ms | 566145 | 30 | 2.45605e+08 | 1.23642e+06 | 5.669 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1301.16 | 2.10503 | 0.3607ms | 469 | 48 | 2513.3 | 343.75 | 1.68737 | 1(Win) |
| jeaiii::to_text | 1099.85 | 1.13903 | 0.0955ms | 469 | 30 | 643.678 | 406.667 | 2.01606 | 2(Loss) |
| fmt::format_to | 648.222 | 0.807371 | 0.1458ms | 469 | 30 | 931.034 | 690 | 3.63852 | 3(Loss) |
| std::to_chars | 450.275 | 0.466314 | 0.2249ms | 469 | 30 | 643.678 | 993.333 | 5.19446 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1433.29 | 0.25681 | 0.6029ms | 4639 | 30 | 1885.06 | 3086.67 | 1.70494 | 1(Win) |
| jeaiii::to_text | 1023.31 | 0.181666 | 0.8527ms | 4639 | 30 | 1850.57 | 4323.33 | 2.40197 | 2(Loss) |
| fmt::format_to | 717.809 | 0.14519 | 1.2029ms | 4639 | 30 | 2402.3 | 6163.33 | 3.43397 | 3(Loss) |
| std::to_chars | 460.204 | 0.082457 | 1.8123ms | 4639 | 30 | 1885.06 | 9613.33 | 5.34666 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1436.44 | 0.0321616 | 5.8668ms | 46743 | 30 | 2988.51 | 31033.3 | 1.72123 | 1(Win) |
| jeaiii::to_text | 1027.84 | 0.220592 | 8.015ms | 46743 | 30 | 274586 | 43370 | 2.40702 | 2(Loss) |
| fmt::format_to | 681.823 | 1.38565 | 11.7219ms | 46743 | 30 | 2.46217e+07 | 65380 | 3.62898 | 3(Loss) |
| std::to_chars | 458.539 | 0.736442 | 17.7182ms | 46743 | 30 | 1.53773e+07 | 97216.7 | 5.39676 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 712.164 | 0.742179 | 112.35ms | 466151 | 30 | 6.4392e+08 | 624233 | 3.47611 | 1(Win) |
| jeaiii::to_text | 592.979 | 0.405106 | 137.107ms | 466151 | 30 | 2.76715e+08 | 749700 | 4.17429 | 2(Loss) |
| fmt::format_to | 458.14 | 0.368169 | 174.893ms | 466151 | 30 | 3.82889e+08 | 970350 | 5.40321 | 3(Loss) |
| std::to_chars | 341.633 | 0.241739 | 234.476ms | 466151 | 30 | 2.96857e+08 | 1.30127e+06 | 7.24606 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1603.5 | 2.20201 | 0.086ms | 482 | 30 | 1195.4 | 286.667 | 1.35394 | 1(Win) |
| jeaiii::to_text | 1178.64 | 1.42843 | 0.0916ms | 482 | 30 | 931.034 | 390 | 1.8538 | 2(Loss) |
| fmt::format_to | 801.752 | 1.43228 | 0.1333ms | 482 | 30 | 2022.99 | 573.333 | 2.81217 | 3(Loss) |
| std::to_chars | 455.12 | 0.55157 | 0.2346ms | 482 | 30 | 931.034 | 1010 | 5.12808 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1758.38 | 0.343734 | 1.1952ms | 4800 | 30 | 2402.3 | 2603.33 | 1.38432 | 1(Win) |
| jeaiii::to_text | 1172.75 | 0.0853971 | 0.7349ms | 4800 | 30 | 333.333 | 3903.33 | 2.09156 | 2(Loss) |
| fmt::format_to | 850.335 | 0.128553 | 1.0088ms | 4800 | 30 | 1436.78 | 5383.33 | 2.88618 | 3(Loss) |
| std::to_chars | 475.187 | 0.125255 | 1.8386ms | 4800 | 30 | 4367.82 | 9633.33 | 5.18393 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1706.27 | 2.16753 | 11.1658ms | 48337 | 30 | 1.02876e+07 | 27016.7 | 1.44866 | 1(Win) |
| jeaiii::to_text | 1158.72 | 2.18575 | 7.1803ms | 48337 | 30 | 2.26842e+07 | 39783.3 | 2.13467 | 2(Loss) |
| fmt::format_to | 846.866 | 1.21021 | 9.8917ms | 48337 | 30 | 1.30189e+07 | 54433.3 | 2.92182 | 3(Loss) |
| std::to_chars | 472.604 | 0.679532 | 17.7385ms | 48337 | 30 | 1.31797e+07 | 97540 | 5.23656 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1263.93 | 0.652962 | 66.3944ms | 483028 | 30 | 1.69901e+08 | 364460 | 1.95832 | 1(Win) |
| jeaiii::to_text | 913.52 | 0.634478 | 90.8751ms | 483028 | 30 | 3.07088e+08 | 504260 | 2.70952 | 2(Loss) |
| fmt::format_to | 699.685 | 0.463699 | 118.976ms | 483028 | 30 | 2.79598e+08 | 658370 | 3.53786 | 3(Loss) |
| std::to_chars | 455.797 | 0.279051 | 181.958ms | 483028 | 30 | 2.3861e+08 | 1.01065e+06 | 5.43103 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2259.53 | 1.85528 | 0.1049ms | 1003 | 30 | 1850.57 | 423.333 | 1.00233 | 1(Win) |
| jeaiii::to_text | 1728.68 | 1.67424 | 0.1234ms | 1003 | 30 | 2574.71 | 553.333 | 1.34104 | 2(Loss) |
| fmt::format_to | 1095.27 | 0.940277 | 0.1826ms | 1003 | 30 | 2022.99 | 873.333 | 2.17315 | 3(Loss) |
| std::to_chars | 834.188 | 0.807917 | 0.2627ms | 1003 | 30 | 2574.71 | 1146.67 | 2.8454 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2346.75 | 0.229254 | 0.8206ms | 9966 | 30 | 2586.21 | 4050 | 1.04816 | 1(Win) |
| jeaiii::to_text | 1821.91 | 0.132661 | 1.0189ms | 9966 | 30 | 1436.78 | 5216.67 | 1.34887 | 2(Loss) |
| fmt::format_to | 1170.96 | 0.0852623 | 1.5409ms | 9966 | 30 | 1436.78 | 8116.67 | 2.10423 | 3(Loss) |
| std::to_chars | 822.173 | 0.0786953 | 2.1959ms | 9966 | 30 | 2482.76 | 11560 | 2.99872 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2303.15 | 1.479 | 7.6292ms | 99797 | 30 | 1.1206e+07 | 41323.3 | 1.07416 | 1(Win) |
| jeaiii::to_text | 1783.39 | 1.33339 | 9.8242ms | 99797 | 30 | 1.51906e+07 | 53366.7 | 1.3872 | 2(Loss) |
| fmt::format_to | 1147.87 | 1.00793 | 15.2748ms | 99797 | 30 | 2.09522e+07 | 82913.3 | 2.15582 | 3(Loss) |
| std::to_chars | 831.261 | 0.951187 | 20.9986ms | 99797 | 30 | 3.55806e+07 | 114493 | 2.97715 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 757.861 | 0.335427 | 226.541ms | 998162 | 30 | 5.32527e+08 | 1.25606e+06 | 3.26662 | 1(Win) |
| jeaiii::to_text | 708.038 | 0.30597 | 242.034ms | 998162 | 30 | 5.07654e+08 | 1.34445e+06 | 3.49643 | 2(Loss) |
| fmt::format_to | 513.027 | 0.198841 | 334.631ms | 998162 | 30 | 4.08372e+08 | 1.8555e+06 | 4.82542 | 3(Loss) |
| std::to_chars | 431.857 | 0.107735 | 396.925ms | 998162 | 30 | 1.69182e+08 | 2.20425e+06 | 5.73251 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2297.62 | 2.0201 | 0.1075ms | 1044 | 30 | 2298.85 | 433.333 | 0.973755 | 1(Win) |
| jeaiii::to_text | 1810.25 | 1.68814 | 0.1254ms | 1044 | 30 | 2586.21 | 550 | 1.29751 | 2(Loss) |
| fmt::format_to | 1131.4 | 0.84407 | 0.1848ms | 1044 | 30 | 1655.17 | 880 | 2.10358 | 3(Loss) |
| std::to_chars | 839.019 | 0.531946 | 0.2678ms | 1044 | 30 | 1195.4 | 1186.67 | 2.81418 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2452.17 | 0.154464 | 0.7913ms | 10508 | 30 | 1195.4 | 4086.67 | 0.998052 | 1(Win) |
| jeaiii::to_text | 1908.8 | 0.176853 | 0.9908ms | 10508 | 30 | 2586.21 | 5250 | 1.28771 | 2(Loss) |
| fmt::format_to | 1171.61 | 0.10831 | 1.6185ms | 10508 | 30 | 2574.71 | 8553.33 | 2.10341 | 3(Loss) |
| std::to_chars | 880.083 | 0.0696154 | 4.8873ms | 10508 | 30 | 1885.06 | 11386.7 | 2.79885 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2414.84 | 1.69273 | 7.6534ms | 104839 | 30 | 1.47355e+07 | 41403.3 | 1.02457 | 1(Win) |
| jeaiii::to_text | 1847.42 | 1.03772 | 9.9688ms | 104839 | 30 | 9.46234e+06 | 54120 | 1.33895 | 2(Loss) |
| fmt::format_to | 1138.23 | 0.984485 | 15.9957ms | 104839 | 30 | 2.24349e+07 | 87840 | 2.17418 | 3(Loss) |
| std::to_chars | 820.199 | 0.798557 | 22.2161ms | 104839 | 30 | 2.84276e+07 | 121900 | 3.01779 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1124.96 | 0.449945 | 160.2ms | 1048118 | 30 | 4.79495e+08 | 888530 | 2.2005 | 1(Win) |
| jeaiii::to_text | 1040.79 | 0.52019 | 172.905ms | 1048118 | 30 | 7.48751e+08 | 960387 | 2.37812 | 2(Loss) |
| fmt::format_to | 670.924 | 0.802433 | 266.235ms | 1048118 | 30 | 4.28758e+09 | 1.48983e+06 | 3.6894 | 3(Loss) |
| std::to_chars | 552.376 | 0.193118 | 327.938ms | 1048118 | 30 | 3.66368e+08 | 1.80957e+06 | 4.48166 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2059.07 | 2.06754 | 0.1087ms | 950 | 30 | 2482.76 | 440 | 1.09109 | 1(Win) |
| jeaiii::to_text | 1647.26 | 1.68814 | 0.1249ms | 950 | 30 | 2586.21 | 550 | 1.40035 | 2(Loss) |
| fmt::format_to | 1100.39 | 0.953931 | 0.1738ms | 950 | 30 | 1850.57 | 823.333 | 2.132 | 3(Loss) |
| std::to_chars | 794.729 | 0.797998 | 0.259ms | 950 | 30 | 2482.76 | 1140 | 2.98772 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2193.14 | 0.198992 | 0.8638ms | 9490 | 30 | 2022.99 | 4126.67 | 1.12037 | 1(Win) |
| jeaiii::to_text | 1746.05 | 0.133514 | 0.9896ms | 9490 | 30 | 1436.78 | 5183.33 | 1.40776 | 2(Loss) |
| fmt::format_to | 1144.65 | 0.120266 | 1.5078ms | 9490 | 30 | 2712.64 | 7906.67 | 2.15416 | 3(Loss) |
| std::to_chars | 819.038 | 0.0660023 | 10.3149ms | 9490 | 48 | 2553.19 | 11050 | 3.01062 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2139 | 1.61338 | 7.8028ms | 94800 | 30 | 1.39506e+07 | 42266.7 | 1.15616 | 1(Win) |
| jeaiii::to_text | 1654.01 | 1.75712 | 9.9425ms | 94800 | 30 | 2.76735e+07 | 54660 | 1.49498 | 2(Loss) |
| fmt::format_to | 1115.42 | 1.39248 | 14.757ms | 94800 | 30 | 3.82157e+07 | 81053.3 | 2.21812 | 3(Loss) |
| std::to_chars | 752.734 | 1.00877 | 21.9924ms | 94800 | 30 | 4.40393e+07 | 120107 | 3.28737 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 982.648 | 0.601 | 165.363ms | 948184 | 30 | 9.17612e+08 | 920227 | 2.51908 | 1(Win) |
| jeaiii::to_text | 944.942 | 0.404143 | 172.415ms | 948184 | 30 | 4.48711e+08 | 956947 | 2.61962 | 2(Loss) |
| fmt::format_to | 650.752 | 0.239759 | 250.758ms | 948184 | 30 | 3.32986e+08 | 1.38956e+06 | 3.80398 | 3(Loss) |
| std::to_chars | 502.257 | 0.245112 | 323.777ms | 948184 | 30 | 5.84228e+08 | 1.80039e+06 | 4.92875 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2378.53 | 1.17764 | 0.1099ms | 981 | 30 | 643.678 | 393.333 | 0.940877 | 1(Win) |
| jeaiii::to_text | 1883.67 | 0.671141 | 0.1135ms | 981 | 30 | 333.333 | 496.667 | 1.20061 | 2(Loss) |
| fmt::format_to | 1236.42 | 1.21611 | 0.1633ms | 981 | 30 | 2540.23 | 756.667 | 1.91444 | 3(Loss) |
| std::to_chars | 799.619 | 0.727319 | 0.2624ms | 981 | 30 | 2172.41 | 1170 | 2.94808 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2484.14 | 0.24324 | 0.7402ms | 9742 | 30 | 2482.76 | 3740 | 0.985609 | 1(Win) |
| fmt::format_to STATISTICAL TIE | 1228.86 | 1.89475 | 8.3419ms | 9742 | 48 | 984996 | 7560.42 | 2.00442 | 2(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1219.25 | 0.459802 | 2.648ms | 9742 | 30 | 36827.6 | 7620 | 2.01703 | 2(Tie) |
| std::to_chars | 834.494 | 0.0786266 | 4.8169ms | 9742 | 30 | 2298.85 | 11133.3 | 2.95309 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2519.16 | 0.229982 | 15.964ms | 97367 | 30 | 215586 | 36860 | 0.98173 | 1(Win) |
| jeaiii::to_text | 1870.97 | 2.37698 | 21.4013ms | 97367 | 30 | 4.17504e+07 | 49630 | 1.32193 | 2(Loss) |
| fmt::format_to | 1245.45 | 0.875298 | 13.7331ms | 97367 | 30 | 1.27763e+07 | 74556.7 | 1.98663 | 3(Loss) |
| std::to_chars | 814.768 | 1.11702 | 20.9735ms | 97367 | 30 | 4.86182e+07 | 113967 | 3.03647 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1419.2 | 0.44171 | 126.061ms | 974185 | 30 | 2.50837e+08 | 654633 | 1.74412 | 1(Win) |
| vn::to_chars | 1028.53 | 0.605006 | 134.026ms | 974185 | 30 | 8.95967e+08 | 903287 | 2.40583 | 2(Loss) |
| fmt::format_to | 875.762 | 1.49346 | 235.769ms | 974185 | 30 | 7.53039e+09 | 1.06085e+06 | 2.82622 | 3(Loss) |
| std::to_chars | 592.197 | 2.45137 | 290.798ms | 974185 | 30 | 4.43701e+10 | 1.56883e+06 | 4.18004 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1609.85 | 0.804828 | 0.2344ms | 1930 | 30 | 2540.23 | 1143.33 | 1.5142 | 1(Win) |
| vn::to_chars | 1533.83 | 0.399553 | 0.289ms | 1930 | 30 | 689.655 | 1200 | 1.54608 | 2(Loss) |
| fmt::format_to | 897.849 | 0.452915 | 0.3948ms | 1930 | 30 | 2586.21 | 2050 | 2.70957 | 3(Loss) |
| std::to_chars | 825.377 | 1.2 | 0.4986ms | 1930 | 30 | 21482.8 | 2230 | 2.94038 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 1575.15 | 2.40938 | 2.3076ms | 19385 | 30 | 2.39895e+06 | 11736.7 | 1.56581 | 1(Win) |
| fmt::format_to | 910.39 | 0.0228105 | 3.7477ms | 19385 | 30 | 643.678 | 20306.7 | 2.71486 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2647.41 | 1.53513 | 14.4726ms | 193682 | 30 | 3.44153e+07 | 69770 | 0.934427 | 1(Win) |
| fmt::format_to | 889.595 | 0.67764 | 212.142ms | 193682 | 48 | 9.5024e+07 | 207633 | 2.78234 | 2(Loss) |
| std::to_chars | 833.176 | 0.945707 | 100.586ms | 193682 | 30 | 1.31868e+08 | 221693 | 2.97085 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1378.48 | 1.92096 | 1216.03ms | 1938158 | 48 | 3.18461e+10 | 1.34088e+06 | 1.79583 | 1(Win) |
| jeaiii::to_text | 942.553 | 2.40268 | 354.635ms | 1938158 | 30 | 6.66011e+10 | 1.96103e+06 | 2.62634 | 2(Loss) |
| std::to_chars | 633.265 | 1.3594 | 556.49ms | 1938158 | 30 | 4.72303e+10 | 2.9188e+06 | 3.90908 | 3(Loss) |
| fmt::format_to | 557.277 | 2.29352 | 527.198ms | 1938158 | 30 | 1.73606e+11 | 3.31679e+06 | 4.44219 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2730.98 | 0.838204 | 0.1562ms | 1995 | 30 | 1022.99 | 696.667 | 0.858847 | 1(Win) |
| jeaiii::to_text | 922.091 | 0.433694 | 0.759ms | 1995 | 30 | 2402.3 | 2063.33 | 2.61911 | 2(Loss) |
| std::to_chars | 810.759 | 0.394777 | 0.4565ms | 1995 | 30 | 2574.71 | 2346.67 | 2.98576 | 3(Loss) |
| fmt::format_to | 604.634 | 0.331504 | 0.599ms | 1995 | 30 | 3264.37 | 3146.67 | 4.04444 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2837.17 | 0.117634 | 1.3102ms | 19863 | 30 | 1850.57 | 6676.67 | 0.868412 | 1(Win) |
| jeaiii::to_text | 1668.97 | 0.0818041 | 2.1468ms | 19863 | 30 | 2586.21 | 11350 | 1.47883 | 2(Loss) |
| fmt::format_to | 906.356 | 0.0606957 | 9.0273ms | 19863 | 30 | 4827.59 | 20900 | 2.72693 | 3(Loss) |
| std::to_chars | 848.82 | 0.0310103 | 4.1788ms | 19863 | 30 | 1436.78 | 22316.7 | 2.91127 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2730.93 | 1.84188 | 12.664ms | 198666 | 30 | 4.8986e+07 | 69376.7 | 0.906007 | 1(Win) |
| jeaiii::to_text | 1617.59 | 1.00239 | 22.8395ms | 198666 | 30 | 4.13531e+07 | 117127 | 1.53019 | 2(Loss) |
| fmt::format_to | 844.345 | 0.906677 | 40.9667ms | 198666 | 30 | 1.24175e+08 | 224390 | 2.93149 | 3(Loss) |
| std::to_chars | 797.469 | 0.839257 | 44.396ms | 198666 | 30 | 1.1927e+08 | 237580 | 3.10384 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2383.56 | 0.42996 | 143.963ms | 1987880 | 30 | 3.50836e+08 | 795360 | 1.03853 | 1(Win) |
| jeaiii::to_text | 1455.98 | 0.387358 | 234.314ms | 1987880 | 30 | 7.63157e+08 | 1.30207e+06 | 1.70022 | 2(Loss) |
| fmt::format_to | 825.338 | 0.19182 | 412.826ms | 1987880 | 30 | 5.82405e+08 | 2.29699e+06 | 2.99922 | 3(Loss) |
| std::to_chars | 758.487 | 0.328912 | 449.338ms | 1987880 | 30 | 2.02752e+09 | 2.49944e+06 | 3.26384 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2610.86 | 0.807371 | 0.3313ms | 1889 | 30 | 931.034 | 690 | 0.896488 | 1(Win) |
| jeaiii::to_text | 1561.99 | 0.803247 | 0.2366ms | 1889 | 30 | 2574.71 | 1153.33 | 1.54431 | 2(Loss) |
| fmt::format_to | 880.207 | 0.452644 | 0.3969ms | 1889 | 30 | 2574.71 | 2046.67 | 2.7615 | 3(Loss) |
| std::to_chars | 823.852 | 0.288678 | 0.4536ms | 1889 | 30 | 1195.4 | 2186.67 | 2.95236 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2765.51 | 0.0855739 | 1.3069ms | 18878 | 30 | 931.034 | 6510 | 0.890815 | 1(Win) |
| jeaiii::to_text | 1602.68 | 0.0779267 | 2.1093ms | 18878 | 30 | 2298.85 | 11233.3 | 1.53946 | 2(Loss) |
| std::to_chars | 800.035 | 2.09913 | 9.5366ms | 18878 | 30 | 6.69413e+06 | 22503.3 | 3.08875 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2550.58 | 1.20755 | 12.9324ms | 188818 | 30 | 2.18041e+07 | 70600 | 0.970331 | 1(Win) |
| jeaiii::to_text | 1544.97 | 0.979918 | 21.1091ms | 188818 | 30 | 3.91336e+07 | 116553 | 1.60182 | 2(Loss) |
| fmt::format_to | 840.85 | 0.880195 | 38.6274ms | 188818 | 30 | 1.06593e+08 | 214153 | 2.94381 | 3(Loss) |
| std::to_chars | 768.789 | 0.855371 | 42.2154ms | 188818 | 30 | 1.20421e+08 | 234227 | 3.21957 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2194.57 | 2.14904 | 144.744ms | 1888001 | 30 | 9.32637e+09 | 820450 | 1.12771 | 1(Win) |
| jeaiii::to_text | 1389.9 | 0.336456 | 234.653ms | 1888001 | 30 | 5.69924e+08 | 1.29545e+06 | 1.78111 | 2(Loss) |
| fmt::format_to | 769.82 | 0.706892 | 424.862ms | 1888001 | 30 | 8.20074e+09 | 2.33891e+06 | 3.21426 | 3(Loss) |
| std::to_chars | 740.823 | 0.11448 | 438.677ms | 1888001 | 30 | 2.32249e+08 | 2.43046e+06 | 3.3414 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2877.41 | 1.42143 | 0.1514ms | 1931 | 30 | 2482.76 | 640 | 0.814155 | 1(Win) |
| jeaiii::to_text | 1866.43 | 0.639773 | 0.207ms | 1931 | 30 | 1195.4 | 986.667 | 1.2715 | 2(Loss) |
| fmt::format_to | 908.657 | 0.405185 | 0.3943ms | 1931 | 30 | 2022.99 | 2026.67 | 2.66732 | 3(Loss) |
| std::to_chars | 829.525 | 0.334586 | 0.4505ms | 1931 | 30 | 1655.17 | 2220 | 2.92809 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3077.43 | 0.110988 | 1.1937ms | 19383 | 30 | 1333.33 | 6006.67 | 0.799285 | 1(Win) |
| jeaiii::to_text | 1926.87 | 0.0482841 | 1.8256ms | 19383 | 30 | 643.678 | 9593.33 | 1.27905 | 2(Loss) |
| fmt::format_to | 953.658 | 0.0434347 | 8.3839ms | 19383 | 30 | 2126.44 | 19383.3 | 2.59052 | 3(Loss) |
| std::to_chars | 840.103 | 0.470636 | 4.0721ms | 19383 | 30 | 321713 | 22003.3 | 2.94125 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2958.43 | 1.60206 | 11.4666ms | 194070 | 30 | 3.01349e+07 | 62560 | 0.836443 | 1(Win) |
| jeaiii::to_text | 1904.83 | 0.681092 | 17.8192ms | 194070 | 30 | 1.31383e+07 | 97163.3 | 1.29911 | 2(Loss) |
| std::to_chars | 793.38 | 0.46999 | 43.1194ms | 194070 | 30 | 3.60623e+07 | 233280 | 3.11983 | 3(Loss) |
| fmt::format_to | 778.933 | 0.574502 | 43.3152ms | 194070 | 30 | 5.59013e+07 | 237607 | 3.17783 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1778.75 | 0.300058 | 187.782ms | 1939762 | 30 | 2.92146e+08 | 1.04e+06 | 1.3917 | 1(Win) |
| jeaiii::to_text | 1311.11 | 0.205648 | 254.731ms | 1939762 | 30 | 2.52572e+08 | 1.41094e+06 | 1.88807 | 2(Loss) |
| fmt::format_to | 601.463 | 0.129381 | 553.581ms | 1939762 | 30 | 4.75053e+08 | 3.07567e+06 | 4.11571 | 3(Loss) |
| std::to_chars | 552.667 | 0.121406 | 602.716ms | 1939762 | 30 | 4.95415e+08 | 3.34723e+06 | 4.47919 | 4(Loss) |
