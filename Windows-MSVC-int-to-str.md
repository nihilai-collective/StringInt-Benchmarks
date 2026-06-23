# int-to-str  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1219.45 | 1.63934 | 0.1082ms | 260 | 30 | 333.333 | 203.333 | 2.32423 | 1(Win) |
| std::to_chars | 527.565 | 1.81056 | 0.1176ms | 260 | 30 | 2172.41 | 470 | 5.28654 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2152.27 | 0.699866 | 0.2344ms | 2648 | 30 | 2022.99 | 1173.33 | 1.38912 | 1(Win) |
| jeaiii::to_text | 1636.28 | 0.596233 | 0.6984ms | 2648 | 30 | 2540.23 | 1543.33 | 1.83639 | 2(Loss) |
| fmt::format_to | 1299.48 | 0.63783 | 0.3789ms | 2648 | 30 | 4609.2 | 1943.33 | 2.31873 | 3(Loss) |
| std::to_chars | 565.795 | 0.20049 | 1.9979ms | 2648 | 30 | 2402.3 | 4463.33 | 5.34275 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 743.328 | 1.3138 | 6.3863ms | 26519 | 30 | 5.99426e+06 | 34023.3 | 4.08586 | 1(Win) |
| fmt::format_to | 596.474 | 1.62219 | 7.8999ms | 26519 | 30 | 1.41924e+07 | 42400 | 5.09273 | 2(Loss) |
| jeaiii::to_text | 538.554 | 2.00639 | 8.5585ms | 26519 | 30 | 2.66321e+07 | 46960 | 5.64179 | 3(Loss) |
| std::to_chars | 336.997 | 1.05106 | 13.7109ms | 26519 | 30 | 1.86653e+07 | 75046.7 | 9.01734 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 465.226 | 0.660274 | 98.0205ms | 264837 | 30 | 3.85477e+08 | 542893 | 6.53216 | 1(Win) |
| jeaiii::to_text | 450.018 | 0.513054 | 101.509ms | 264837 | 30 | 2.48739e+08 | 561240 | 6.75307 | 2(Loss) |
| fmt::format_to | 419.472 | 0.3106 | 109.198ms | 264837 | 30 | 1.04924e+08 | 602110 | 7.24476 | 3(Loss) |
| std::to_chars | 294.58 | 0.296863 | 154.06ms | 264837 | 30 | 1.9435e+08 | 857383 | 10.3168 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1351.07 | 2.39914 | 0.2434ms | 304 | 48 | 1272.16 | 214.583 | 2.01898 | 1(Win) |
| std::to_chars | 616.845 | 1.81056 | 0.25ms | 304 | 30 | 2172.41 | 470 | 4.72939 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 2302.65 | 0.425256 | 0.2479ms | 3163 | 30 | 931.034 | 1310 | 1.2991 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 2285.21 | 0.562713 | 0.2629ms | 3163 | 30 | 1655.17 | 1320 | 1.31322 | 1(Tie) |
| fmt::format_to | 1607.36 | 0.41851 | 0.3766ms | 3163 | 30 | 1850.57 | 1876.67 | 1.8835 | 3(Loss) |
| std::to_chars | 642.258 | 0.0709723 | 0.8921ms | 3163 | 30 | 333.333 | 4696.67 | 4.68655 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1895.31 | 2.01723 | 14.9483ms | 31442 | 48 | 4.88892e+06 | 15820.8 | 1.60207 | 1(Win) |
| jeaiii::to_text | 1355.78 | 2.09356 | 4.014ms | 31442 | 30 | 6.43178e+06 | 22116.7 | 2.23878 | 2(Loss) |
| fmt::format_to | 1135.81 | 0.0851849 | 5.0649ms | 31442 | 30 | 15172.4 | 26400 | 2.67368 | 3(Loss) |
| std::to_chars | 507.998 | 1.2152 | 10.7138ms | 31442 | 30 | 1.54351e+07 | 59026.7 | 5.98001 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 983.837 | 0.586301 | 55.072ms | 314430 | 30 | 9.57996e+07 | 304790 | 3.08867 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 978.913 | 0.630194 | 55.4891ms | 314430 | 30 | 1.11797e+08 | 306323 | 3.10429 | 1(Tie) |
| fmt::format_to | 783.105 | 0.590772 | 69.2702ms | 314430 | 30 | 1.53521e+08 | 382917 | 3.88062 | 3(Loss) |
| std::to_chars | 476.496 | 0.384578 | 113.584ms | 314430 | 30 | 1.75719e+08 | 629310 | 6.37798 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1034.55 | 1.93512 | 0.232ms | 226 | 48 | 780.142 | 208.333 | 2.61597 | 1(Win) |
| std::to_chars | 458.575 | 1.81056 | 0.1138ms | 226 | 30 | 2172.41 | 470 | 6.20162 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1805.55 | 0.787263 | 0.2363ms | 2152 | 30 | 2402.3 | 1136.67 | 1.64099 | 1(Win) |
| jeaiii::to_text | 1469.43 | 0.238663 | 0.2861ms | 2152 | 30 | 333.333 | 1396.67 | 2.04057 | 2(Loss) |
| fmt::format_to | 959.022 | 0.425102 | 0.4232ms | 2152 | 30 | 2482.76 | 2140 | 3.13976 | 3(Loss) |
| std::to_chars | 472.882 | 0.209612 | 0.8302ms | 2152 | 30 | 2482.76 | 4340 | 6.40026 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1058.26 | 1.01056 | 3.7346ms | 21461 | 30 | 1.14593e+06 | 19340 | 2.87019 | 1(Win) |
| jeaiii::to_text | 901.357 | 0.335819 | 4.2384ms | 21461 | 30 | 174437 | 22706.7 | 3.36603 | 2(Loss) |
| fmt::format_to | 658.167 | 1.67512 | 13.2734ms | 21461 | 30 | 8.14033e+06 | 31096.7 | 4.61252 | 3(Loss) |
| std::to_chars | 352.876 | 1.40996 | 10.4618ms | 21461 | 30 | 2.00628e+07 | 58000 | 8.61054 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 664.704 | 0.562467 | 55.9461ms | 215043 | 30 | 9.03463e+07 | 308530 | 4.57135 | 1(Win) |
| jeaiii::to_text | 637.029 | 0.713151 | 57.4826ms | 215043 | 30 | 1.58131e+08 | 321933 | 4.77019 | 2(Loss) |
| fmt::format_to | 548.589 | 0.779812 | 67.5699ms | 215043 | 30 | 2.54951e+08 | 373833 | 5.53933 | 3(Loss) |
| std::to_chars | 333.001 | 0.544265 | 110.734ms | 215043 | 30 | 3.37055e+08 | 615857 | 9.11774 | 4(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1241.39 | 1.69492 | 0.0496ms | 256 | 30 | 333.333 | 196.667 | 2.10378 | 1(Win) |
| std::to_chars | 515.79 | 1.73488 | 0.1208ms | 256 | 30 | 2022.99 | 473.333 | 5.65599 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2298.62 | 0.795292 | 0.2139ms | 2579 | 30 | 2172.41 | 1070 | 1.30227 | 1(Win) |
| jeaiii::to_text | 1972.88 | 0.743111 | 0.249ms | 2579 | 30 | 2574.71 | 1246.67 | 1.52414 | 2(Loss) |
| fmt::format_to | 1296.76 | 0.175747 | 0.8677ms | 2579 | 30 | 333.333 | 1896.67 | 2.31782 | 3(Loss) |
| std::to_chars | 522.933 | 0.0708717 | 0.9227ms | 2579 | 30 | 333.333 | 4703.33 | 5.79969 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1044.13 | 2.10439 | 4.2885ms | 25718 | 30 | 7.33059e+06 | 23490 | 2.90632 | 1(Win) |
| jeaiii::to_text | 859.376 | 1.55373 | 5.2651ms | 25718 | 30 | 5.89903e+06 | 28540 | 3.53374 | 2(Loss) |
| fmt::format_to | 770.066 | 1.33655 | 5.8515ms | 25718 | 30 | 5.43638e+06 | 31850 | 3.94309 | 3(Loss) |
| std::to_chars | 394.805 | 1.17535 | 11.2666ms | 25718 | 30 | 1.59943e+07 | 62123.3 | 7.69549 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 693.993 | 0.634511 | 63.2652ms | 256899 | 30 | 1.50527e+08 | 353027 | 4.37891 | 1(Win) |
| jeaiii::to_text | 669.022 | 0.584263 | 65.9767ms | 256899 | 30 | 1.37336e+08 | 366203 | 4.54233 | 2(Loss) |
| fmt::format_to | 598.993 | 0.663025 | 73.9519ms | 256899 | 30 | 2.20629e+08 | 409017 | 5.07346 | 3(Loss) |
| std::to_chars | 356.836 | 0.530556 | 124.87ms | 256899 | 30 | 3.98079e+08 | 686583 | 8.51682 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2361.34 | 2.11762 | 0.2299ms | 521 | 48 | 953.014 | 210.417 | 1.20417 | 1(Win) |
| fmt::format_to | 1834.58 | 2.448 | 0.2719ms | 521 | 48 | 2109.93 | 270.833 | 1.52723 | 2(Loss) |
| std::to_chars | 876.819 | 1.54478 | 0.1526ms | 521 | 30 | 2298.85 | 566.667 | 3.36641 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3578.73 | 0.656373 | 0.2793ms | 5116 | 30 | 2402.3 | 1363.33 | 0.836324 | 1(Win) |
| jeaiii::to_text | 2793.32 | 0.530388 | 0.4482ms | 5116 | 30 | 2574.71 | 1746.67 | 1.08096 | 2(Loss) |
| fmt::format_to | 2013.34 | 0.3241 | 0.4748ms | 5116 | 30 | 1850.57 | 2423.33 | 1.49581 | 3(Loss) |
| std::to_chars | 855.965 | 0.118959 | 1.1089ms | 5116 | 30 | 1379.31 | 5700 | 3.53413 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 1035.77 | 1.46209 | 20.3745ms | 51502 | 30 | 1.4421e+07 | 47420 | 2.93217 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 1002.1 | 1.37756 | 9.0937ms | 51502 | 30 | 1.36764e+07 | 49013.3 | 3.03099 | 1(Tie) |
| jeaiii::to_text | 941.102 | 2.22898 | 9.6296ms | 51502 | 30 | 4.05982e+07 | 52190 | 3.2281 | 3(Loss) |
| std::to_chars | 558.688 | 0.612839 | 16.2514ms | 51502 | 30 | 8.70809e+06 | 87913.3 | 5.43899 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 841.87 | 0.506396 | 105.16ms | 515961 | 30 | 2.62812e+08 | 584483 | 3.60965 | 1(Win) |
| jeaiii::to_text | 812.081 | 0.42624 | 109.361ms | 515961 | 30 | 2.00108e+08 | 605923 | 3.74215 | 2(Loss) |
| fmt::format_to | 652.823 | 0.349641 | 136.128ms | 515961 | 30 | 2.08357e+08 | 753740 | 4.65504 | 3(Loss) |
| std::to_chars | 494.797 | 0.34003 | 179.983ms | 515961 | 30 | 3.43033e+08 | 994467 | 6.14219 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2801.83 | 2.39589 | 0.0495ms | 568 | 30 | 643.678 | 193.333 | 0.996714 | 1(Win) |
| fmt::format_to | 1889.61 | 2.20201 | 0.0677ms | 568 | 30 | 1195.4 | 286.667 | 1.46133 | 2(Loss) |
| std::to_chars | 933.943 | 1.28066 | 0.1377ms | 568 | 30 | 1655.17 | 580 | 3.14965 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3863.07 | 0.332444 | 0.2874ms | 5644 | 30 | 643.678 | 1393.33 | 0.778809 | 1(Win) |
| jeaiii::to_text | 3288.72 | 0.546755 | 0.3177ms | 5644 | 30 | 2402.3 | 1636.67 | 0.912792 | 2(Loss) |
| fmt::format_to | 2054.4 | 0.283504 | 0.5192ms | 5644 | 30 | 1655.17 | 2620 | 1.4663 | 3(Loss) |
| std::to_chars | 904.122 | 1.23653 | 1.1119ms | 5644 | 30 | 162575 | 5953.33 | 3.35053 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2075.66 | 1.87158 | 4.864ms | 56654 | 30 | 7.1201e+06 | 26030 | 1.4633 | 1(Win) |
| jeaiii::to_text | 1755.15 | 1.7581 | 5.7097ms | 56654 | 30 | 8.78695e+06 | 30783.3 | 1.72986 | 2(Loss) |
| fmt::format_to | 1302.12 | 0.946886 | 7.6775ms | 56654 | 30 | 4.63099e+06 | 41493.3 | 2.3325 | 3(Loss) |
| std::to_chars | 680.843 | 0.788822 | 14.2989ms | 56654 | 30 | 1.17556e+07 | 79356.7 | 4.4642 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1535.67 | 0.754401 | 63.4044ms | 566013 | 30 | 2.10953e+08 | 351503 | 1.97884 | 1(Win) |
| jeaiii::to_text | 1409.91 | 0.745287 | 69.5197ms | 566013 | 30 | 2.44254e+08 | 382857 | 2.15532 | 2(Loss) |
| fmt::format_to | 1093.92 | 0.413278 | 88.9767ms | 566013 | 30 | 1.24763e+08 | 493447 | 2.77793 | 3(Loss) |
| std::to_chars | 653.945 | 0.316606 | 148.18ms | 566013 | 30 | 2.04895e+08 | 825440 | 4.64726 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 1565.15 | 2.44251 | 0.07ms | 465 | 30 | 1436.78 | 283.333 | 1.74108 | 1(Win) |
| std::to_chars | 755.895 | 1.07598 | 0.1374ms | 465 | 30 | 1195.4 | 586.667 | 3.87319 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2307.13 | 0.426216 | 0.4163ms | 4661 | 30 | 2022.99 | 1926.67 | 1.30541 | 1(Win) |
| jeaiii::to_text | 1862.46 | 0.264487 | 0.4648ms | 4661 | 30 | 1195.4 | 2386.67 | 1.62187 | 2(Loss) |
| fmt::format_to | 1778.03 | 0.191785 | 0.4883ms | 4661 | 30 | 689.655 | 2500 | 1.69325 | 3(Loss) |
| std::to_chars | 765.952 | 0.174936 | 1.1269ms | 4661 | 30 | 3091.95 | 5803.33 | 3.94972 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2063.71 | 0.456054 | 4.0482ms | 46554 | 30 | 288782 | 21513.3 | 1.47097 | 1(Win) |
| jeaiii::to_text | 1367.76 | 1.4503 | 5.9842ms | 46554 | 30 | 6.64869e+06 | 32460 | 2.21928 | 2(Loss) |
| fmt::format_to | 1056.16 | 1.05475 | 7.7367ms | 46554 | 30 | 5.89757e+06 | 42036.7 | 2.87554 | 3(Loss) |
| std::to_chars | 572.795 | 1.10758 | 14.0131ms | 46554 | 30 | 2.21099e+07 | 77510 | 5.30345 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1295.08 | 0.866905 | 62.007ms | 465936 | 30 | 2.65413e+08 | 343107 | 2.34592 | 1(Win) |
| jeaiii::to_text | 1152.95 | 0.615783 | 69.4411ms | 465936 | 30 | 1.68969e+08 | 385403 | 2.63559 | 2(Loss) |
| fmt::format_to | 904.115 | 0.84056 | 88.5959ms | 465936 | 30 | 5.11994e+08 | 491477 | 3.36051 | 3(Loss) |
| std::to_chars | 538.355 | 0.336579 | 148.202ms | 465936 | 30 | 2.31532e+08 | 825387 | 5.64515 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::to_chars | 773.573 | 0.348432 | 0.5821ms | 485 | 48 | 208.333 | 597.917 | 3.75064 | 1(Win) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3574.43 | 0.43185 | 0.613ms | 4835 | 30 | 931.034 | 1290 | 0.832706 | 1(Win) |
| jeaiii::to_text | 3270.22 | 0.395096 | 0.2884ms | 4835 | 30 | 931.034 | 1410 | 0.916684 | 2(Loss) |
| fmt::format_to | 2013.54 | 0.243269 | 0.4605ms | 4835 | 30 | 931.034 | 2290 | 1.49524 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 2250.86 | 0.0833898 | 3.8361ms | 48329 | 30 | 8747.13 | 20476.7 | 1.34963 | 1(Win) |
| fmt::format_to | 1522.3 | 2.26664 | 5.5151ms | 48329 | 30 | 1.41287e+07 | 30276.7 | 1.99496 | 2(Loss) |
| std::to_chars | 656.991 | 1.72176 | 12.8722ms | 48329 | 30 | 4.37688e+07 | 70153.3 | 4.6239 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2198.38 | 0.671798 | 37.9549ms | 482887 | 30 | 5.94134e+07 | 209480 | 1.38215 | 1(Win) |
| jeaiii::to_text | 1844.06 | 0.819391 | 45.005ms | 482887 | 30 | 1.25616e+08 | 249730 | 1.64788 | 2(Loss) |
| fmt::format_to | 1381.03 | 0.713812 | 60.1605ms | 482887 | 30 | 1.69971e+08 | 333460 | 2.20049 | 3(Loss) |
| std::to_chars | 659.357 | 0.673537 | 124.867ms | 482887 | 30 | 6.63888e+08 | 698433 | 4.60895 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4834.64 | 1.69492 | 0.113ms | 997 | 30 | 333.333 | 196.667 | 0.566132 | 1(Win) |
| fmt::format_to | 2546.82 | 2.19958 | 0.1068ms | 997 | 30 | 2022.99 | 373.333 | 1.11334 | 2(Loss) |
| std::to_chars | 1178.69 | 0.574222 | 0.1915ms | 997 | 30 | 643.678 | 806.667 | 2.51036 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4621.62 | 0.441611 | 0.4205ms | 9983 | 30 | 2482.76 | 2060 | 0.649324 | 1(Win) |
| jeaiii::to_text | 4250.24 | 0.406124 | 0.4769ms | 9983 | 30 | 2482.76 | 2240 | 0.710868 | 2(Loss) |
| fmt::format_to | 2455.85 | 0.202598 | 0.8093ms | 9983 | 30 | 1850.57 | 3876.67 | 1.22911 | 3(Loss) |
| std::to_chars | 1011.75 | 1.01822 | 1.7567ms | 9983 | 30 | 275414 | 9410 | 2.9986 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1910.11 | 1.08838 | 9.8137ms | 99891 | 30 | 8.83926e+06 | 49873.3 | 1.59034 | 1(Win) |
| jeaiii::to_text | 1396.21 | 1.79809 | 12.2908ms | 99891 | 30 | 4.51539e+07 | 68230 | 2.17601 | 2(Loss) |
| fmt::format_to | 1120.79 | 1.39614 | 15.545ms | 99891 | 30 | 4.22459e+07 | 84996.7 | 2.71093 | 3(Loss) |
| std::to_chars | 683.84 | 0.828733 | 25.4587ms | 99891 | 30 | 3.99848e+07 | 139307 | 4.44353 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1322.99 | 0.426171 | 129.912ms | 998333 | 30 | 2.82181e+08 | 719647 | 2.29681 | 1(Win) |
| jeaiii::to_text | 1267.6 | 0.389394 | 135.314ms | 998333 | 30 | 2.56618e+08 | 751093 | 2.39742 | 2(Loss) |
| fmt::format_to | 912.075 | 0.386571 | 188.641ms | 998333 | 30 | 4.88506e+08 | 1.04387e+06 | 3.33154 | 3(Loss) |
| std::to_chars | 646.69 | 0.241016 | 265.623ms | 998333 | 30 | 3.77723e+08 | 1.47224e+06 | 4.69961 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4882.2 | 2.24132 | 0.0554ms | 1058 | 30 | 643.678 | 206.667 | 0.557876 | 1(Win) |
| fmt::format_to | 2655.23 | 1.95469 | 0.0858ms | 1058 | 30 | 1655.17 | 380 | 1.08296 | 2(Loss) |
| std::to_chars | 1196.43 | 1.09113 | 0.1948ms | 1058 | 30 | 2540.23 | 843.333 | 2.49118 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5101.59 | 0.470283 | 0.409ms | 10467 | 30 | 2540.23 | 1956.67 | 0.586822 | 1(Win) |
| jeaiii::to_text | 4102.24 | 0.359744 | 0.4827ms | 10467 | 30 | 2298.85 | 2433.33 | 0.734327 | 2(Loss) |
| fmt::format_to | 2650.12 | 0.264978 | 0.7173ms | 10467 | 30 | 2988.51 | 3766.67 | 1.14231 | 3(Loss) |
| std::to_chars | 1002.56 | 0.0924191 | 1.8862ms | 10467 | 30 | 2540.23 | 9956.67 | 3.02508 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2498.08 | 1.02466 | 7.5076ms | 104908 | 30 | 5.05224e+06 | 40050 | 1.21636 | 1(Win) |
| jeaiii::to_text | 2202.57 | 1.29642 | 8.399ms | 104908 | 30 | 1.04032e+07 | 45423.3 | 1.37967 | 2(Loss) |
| fmt::format_to | 1480.8 | 0.871469 | 12.4019ms | 104908 | 30 | 1.04003e+07 | 67563.3 | 2.05172 | 3(Loss) |
| std::to_chars | 816.141 | 0.887629 | 22.3377ms | 104908 | 30 | 3.55198e+07 | 122587 | 3.72334 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1973.59 | 0.662942 | 91.3505ms | 1048045 | 30 | 3.38155e+08 | 506433 | 1.53972 | 1(Win) |
| jeaiii::to_text | 1917.13 | 0.531516 | 93.9205ms | 1048045 | 30 | 2.30363e+08 | 521350 | 1.58493 | 2(Loss) |
| fmt::format_to | 1267.81 | 0.408594 | 141.56ms | 1048045 | 30 | 3.11285e+08 | 788363 | 2.39684 | 3(Loss) |
| std::to_chars | 783.302 | 0.214519 | 230.915ms | 1048045 | 30 | 2.24777e+08 | 1.276e+06 | 3.8799 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4455.69 | 1.63934 | 0.0547ms | 950 | 30 | 333.333 | 203.333 | 0.628246 | 1(Win) |
| fmt::format_to | 2174.38 | 1.66091 | 0.1328ms | 950 | 30 | 1436.78 | 416.667 | 1.31593 | 2(Loss) |
| std::to_chars | 1049.41 | 1.03651 | 0.1793ms | 950 | 30 | 2402.3 | 863.333 | 2.82775 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4375.98 | 0.482943 | 0.4272ms | 9483 | 30 | 2988.51 | 2066.67 | 0.692154 | 1(Win) |
| jeaiii::to_text | 3853.85 | 0.394777 | 0.4679ms | 9483 | 30 | 2574.71 | 2346.67 | 0.778312 | 2(Loss) |
| fmt::format_to | 2268.49 | 0.334448 | 0.7918ms | 9483 | 30 | 5333.33 | 3986.67 | 1.33831 | 3(Loss) |
| std::to_chars | 915.663 | 0.0795211 | 4.2805ms | 9483 | 30 | 1850.57 | 9876.67 | 3.31416 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2297.01 | 1.45299 | 7.1967ms | 94834 | 30 | 9.81857e+06 | 39373.3 | 1.32249 | 1(Win) |
| jeaiii::to_text | 1970.1 | 1.20712 | 8.4042ms | 94834 | 30 | 9.21237e+06 | 45906.7 | 1.54258 | 2(Loss) |
| fmt::format_to | 1276.57 | 1.69219 | 12.9698ms | 94834 | 30 | 4.31177e+07 | 70846.7 | 2.38017 | 3(Loss) |
| std::to_chars | 749.261 | 1.11081 | 21.8683ms | 94834 | 30 | 5.39344e+07 | 120707 | 4.0554 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1814.42 | 0.525094 | 89.9866ms | 947958 | 30 | 2.05351e+08 | 498253 | 1.6748 | 1(Win) |
| jeaiii::to_text | 1697.55 | 0.602407 | 96.0886ms | 947958 | 30 | 3.08768e+08 | 532557 | 1.79008 | 2(Loss) |
| fmt::format_to | 1132.93 | 0.296765 | 143.916ms | 947958 | 30 | 1.68236e+08 | 797970 | 2.68228 | 3(Loss) |
| std::to_chars | 711.57 | 0.28412 | 227.921ms | 947958 | 30 | 3.90901e+08 | 1.27049e+06 | 4.27085 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| fmt::format_to | 2674.88 | 2.10156 | 0.3572ms | 970 | 48 | 2535.46 | 345.833 | 1.07027 | 1(Win) |
| std::to_chars | 1128.13 | 0.905831 | 0.1815ms | 970 | 30 | 1655.17 | 820 | 2.59622 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5669.5 | 0.535945 | 0.7634ms | 9710 | 30 | 2298.85 | 1633.33 | 0.528112 | 1(Win) |
| jeaiii::to_text | 4943.16 | 0.43835 | 0.3729ms | 9710 | 30 | 2022.99 | 1873.33 | 0.608891 | 2(Loss) |
| fmt::format_to | 2772.51 | 0.272371 | 0.6872ms | 9710 | 30 | 2482.76 | 3340 | 1.09101 | 3(Loss) |
| std::to_chars | 1069.3 | 0.105048 | 1.6522ms | 9710 | 30 | 2482.76 | 8660 | 2.83709 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3808.29 | 0.645171 | 4.5863ms | 97436 | 30 | 743448 | 24400 | 0.797557 | 1(Win) |
| jeaiii::to_text | 3148.48 | 1.72989 | 5.4438ms | 97436 | 30 | 7.81982e+06 | 29513.3 | 0.964343 | 2(Loss) |
| fmt::format_to | 1893.54 | 1.14725 | 9.0562ms | 97436 | 30 | 9.50892e+06 | 49073.3 | 1.60452 | 3(Loss) |
| std::to_chars | 930.401 | 2.35335 | 17.9229ms | 97436 | 30 | 1.65727e+08 | 99873.3 | 3.26606 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3065.76 | 0.645779 | 54.8786ms | 974283 | 30 | 1.14917e+08 | 303073 | 0.991034 | 1(Win) |
| jeaiii::to_text | 2719.3 | 0.722223 | 61.6253ms | 974283 | 30 | 1.82692e+08 | 341687 | 1.11737 | 2(Loss) |
| fmt::format_to | 1695.15 | 0.490482 | 98.7422ms | 974283 | 30 | 2.16832e+08 | 548123 | 1.79253 | 3(Loss) |
| std::to_chars | 918.615 | 0.306647 | 180.915ms | 974283 | 30 | 2.88603e+08 | 1.01147e+06 | 3.30818 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5530.13 | 2.07984 | 0.3459ms | 1945 | 48 | 2335.99 | 335.417 | 0.532519 | 1(Win) |
| jeaiii::to_text | 3544.39 | 1.50077 | 0.1114ms | 1945 | 30 | 1850.57 | 523.333 | 0.82934 | 2(Loss) |
| fmt::format_to | 2053.39 | 0.369004 | 0.2201ms | 1945 | 30 | 333.333 | 903.333 | 1.44667 | 3(Loss) |
| std::to_chars | 1318.65 | 0.329293 | 0.3031ms | 1945 | 30 | 643.678 | 1406.67 | 2.28672 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5595.98 | 0.277767 | 3.1527ms | 19376 | 48 | 4038.12 | 3302.08 | 0.538464 | 1(Win) |
| jeaiii::to_text | 3215.5 | 1.25908 | 1.0986ms | 19376 | 30 | 157057 | 5746.67 | 0.941988 | 2(Loss) |
| fmt::format_to | 2012.17 | 0.557656 | 1.7886ms | 19376 | 30 | 78678.2 | 9183.33 | 1.50543 | 3(Loss) |
| std::to_chars | 1176.97 | 0.0431888 | 2.9208ms | 19376 | 30 | 1379.31 | 15700 | 2.57921 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3277.03 | 1.30992 | 10.3512ms | 193883 | 30 | 1.63881e+07 | 56423.3 | 0.927031 | 1(Win) |
| jeaiii::to_text | 2143.53 | 1.88004 | 15.4534ms | 193883 | 30 | 7.88997e+07 | 86260 | 1.4168 | 2(Loss) |
| fmt::format_to | 1526.81 | 1.5749 | 21.9538ms | 193883 | 30 | 1.09129e+08 | 121103 | 1.99012 | 3(Loss) |
| std::to_chars | 1094.37 | 0.55381 | 30.85ms | 193883 | 30 | 2.6266e+07 | 168957 | 2.77677 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2760.74 | 0.32337 | 121.19ms | 1937768 | 30 | 1.40564e+08 | 669387 | 1.10071 | 1(Win) |
| jeaiii::to_text | 1978.58 | 0.288612 | 168.439ms | 1937768 | 30 | 2.17996e+08 | 934003 | 1.53589 | 2(Loss) |
| fmt::format_to | 1488.33 | 0.395826 | 222.318ms | 1937768 | 30 | 7.24667e+08 | 1.24166e+06 | 2.04159 | 3(Loss) |
| std::to_chars | 1068.73 | 0.227498 | 310.836ms | 1937768 | 30 | 4.64245e+08 | 1.72916e+06 | 2.84359 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5912.78 | 2.32119 | 0.077ms | 1984 | 30 | 1655.17 | 320 | 0.478528 | 1(Win) |
| jeaiii::to_text | 3662.11 | 1.33944 | 0.1249ms | 1984 | 30 | 1436.78 | 516.667 | 0.792372 | 2(Loss) |
| fmt::format_to | 1917.66 | 0.639773 | 0.1967ms | 1984 | 30 | 1195.4 | 986.667 | 1.5621 | 3(Loss) |
| std::to_chars | 1231.29 | 0.582335 | 0.2947ms | 1984 | 30 | 2402.3 | 1536.67 | 2.44735 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5888.96 | 0.367638 | 0.6299ms | 19863 | 30 | 4195.4 | 3216.67 | 0.511187 | 1(Win) |
| jeaiii::to_text | 3480.01 | 0.169048 | 1.0349ms | 19863 | 30 | 2540.23 | 5443.33 | 0.869958 | 2(Loss) |
| fmt::format_to | 1883.61 | 0.0915002 | 4.3187ms | 19863 | 30 | 2540.23 | 10056.7 | 1.61125 | 3(Loss) |
| std::to_chars | 1258.1 | 0.0611149 | 6.5692ms | 19863 | 30 | 2540.23 | 15056.7 | 2.41177 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5144.12 | 2.24148 | 16.3276ms | 198805 | 30 | 2.0475e+07 | 36856.7 | 0.590521 | 1(Win) |
| jeaiii::to_text | 3234.31 | 1.16378 | 10.5173ms | 198805 | 30 | 1.39623e+07 | 58620 | 0.939275 | 2(Loss) |
| fmt::format_to | 1837.76 | 0.716122 | 18.6995ms | 198805 | 30 | 1.63747e+07 | 103167 | 1.65331 | 3(Loss) |
| std::to_chars | 1236.49 | 0.657068 | 27.6696ms | 198805 | 30 | 3.0452e+07 | 153333 | 2.45753 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4947.75 | 0.749129 | 69.0899ms | 1987887 | 30 | 2.47173e+08 | 383163 | 0.614042 | 1(Win) |
| jeaiii::to_text | 3111.64 | 0.575489 | 109.467ms | 1987887 | 30 | 3.68809e+08 | 609260 | 0.976528 | 2(Loss) |
| fmt::format_to | 1800.21 | 0.314651 | 189.543ms | 1987887 | 30 | 3.29393e+08 | 1.0531e+06 | 1.68769 | 3(Loss) |
| std::to_chars | 1223.77 | 0.234907 | 279.069ms | 1987887 | 30 | 3.97283e+08 | 1.54915e+06 | 2.48317 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4765 | 2.08514 | 0.0876ms | 1882 | 30 | 1850.57 | 376.667 | 0.598672 | 1(Win) |
| jeaiii::to_text | 3542.4 | 0.914221 | 0.11ms | 1882 | 30 | 643.678 | 506.667 | 0.822512 | 2(Loss) |
| fmt::format_to | 1916.17 | 0.955362 | 0.1961ms | 1882 | 30 | 2402.3 | 936.667 | 1.54182 | 3(Loss) |
| std::to_chars | 1199.21 | 0.222717 | 0.334ms | 1882 | 30 | 333.333 | 1496.67 | 2.49242 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 5085.72 | 0.256982 | 1.5563ms | 18878 | 30 | 2482.76 | 3540 | 0.594789 | 1(Win) |
| jeaiii::to_text | 3315.56 | 0.156715 | 1.0175ms | 18878 | 30 | 2172.41 | 5430 | 0.914491 | 2(Loss) |
| fmt::format_to | 1818.53 | 0.0484306 | 4.2531ms | 18878 | 30 | 689.655 | 9900 | 1.66726 | 3(Loss) |
| std::to_chars | 1194.13 | 0.0758144 | 2.7467ms | 18878 | 30 | 3919.54 | 15076.7 | 2.54208 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4948.25 | 1.19979 | 6.6759ms | 188779 | 30 | 5.71661e+06 | 36383.3 | 0.613871 | 1(Win) |
| jeaiii::to_text | 3110.11 | 1.28345 | 10.3188ms | 188779 | 30 | 1.65591e+07 | 57886.7 | 0.976926 | 2(Loss) |
| fmt::format_to | 1737.05 | 2.26286 | 18.5627ms | 188779 | 30 | 1.65013e+08 | 103643 | 1.74924 | 3(Loss) |
| std::to_chars | 1188.79 | 0.660584 | 27.5372ms | 188779 | 30 | 3.00246e+07 | 151443 | 2.55623 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4685.8 | 1.04005 | 69.0166ms | 1887949 | 30 | 4.7912e+08 | 384243 | 0.648396 | 1(Win) |
| jeaiii::to_text | 2970.07 | 0.508132 | 109.371ms | 1887949 | 30 | 2.84656e+08 | 606210 | 1.02308 | 2(Loss) |
| fmt::format_to | 1727.25 | 0.259377 | 186.596ms | 1887949 | 30 | 2.19308e+08 | 1.0424e+06 | 1.75801 | 3(Loss) |
| std::to_chars | 1179.95 | 0.227346 | 274.195ms | 1887949 | 30 | 3.61035e+08 | 1.5259e+06 | 2.57565 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 4398.26 | 1.76853 | 0.0938ms | 1937 | 30 | 1655.17 | 420 | 0.66233 | 1(Win) |
| fmt::format_to | 2029.96 | 0.612182 | 0.1961ms | 1937 | 30 | 931.034 | 910 | 1.45231 | 2(Loss) |
| std::to_chars | 1115.05 | 0.555445 | 0.3332ms | 1937 | 30 | 2540.23 | 1656.67 | 2.69017 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 6640.93 | 0.226523 | 0.5533ms | 19405 | 30 | 1195.4 | 2786.67 | 0.454529 | 1(Win) |
| jeaiii::to_text | 4251.01 | 0.212805 | 1.9527ms | 19405 | 30 | 2574.71 | 4353.33 | 0.712011 | 2(Loss) |
| fmt::format_to | 1817.29 | 0.586338 | 1.9116ms | 19405 | 30 | 106954 | 10183.3 | 1.66864 | 3(Loss) |
| std::to_chars | 871.967 | 1.9871 | 3.7598ms | 19405 | 30 | 5.33564e+06 | 21223.3 | 3.48242 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 4106.18 | 1.28419 | 8.2817ms | 194012 | 30 | 1.00452e+07 | 45060 | 0.739805 | 1(Win) |
| jeaiii::to_text | 2939.54 | 1.00808 | 11.5711ms | 194012 | 30 | 1.20784e+07 | 62943.3 | 1.03375 | 2(Loss) |
| fmt::format_to | 1262.5 | 1.32685 | 26.4464ms | 194012 | 30 | 1.13437e+08 | 146553 | 2.40696 | 3(Loss) |
| std::to_chars | 875.482 | 0.607234 | 38.0271ms | 194012 | 30 | 4.9408e+07 | 211340 | 3.47133 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3320.04 | 0.379757 | 100.826ms | 1939693 | 30 | 1.34312e+08 | 557173 | 0.915209 | 1(Win) |
| jeaiii::to_text | 2640.5 | 0.400285 | 126.494ms | 1939693 | 30 | 2.35915e+08 | 700563 | 1.15087 | 2(Loss) |
| fmt::format_to | 1201.03 | 0.194283 | 279.227ms | 1939693 | 30 | 2.68626e+08 | 1.54021e+06 | 2.5301 | 3(Loss) |
| std::to_chars | 869.38 | 0.187333 | 383.528ms | 1939693 | 30 | 4.76644e+08 | 2.12776e+06 | 3.49585 | 4(Loss) |
