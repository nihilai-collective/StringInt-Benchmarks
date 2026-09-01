# int-to-str-uniform  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 548.587 | 1.26579 | 0.0842ms | 224 | 120 | 2924.37 | 390 | 5.31685 | 1(Win) |
| jeaiii::to_text | 299.835 | 0.434391 | 0.8537ms | 225 | 480 | 4673.63 | 718.333 | 9.83553 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 594.057 | 1.94324 | 1.577ms | 2254 | 240 | 1.18736e+06 | 3619.58 | 5.0686 | 1(Win) |
| jeaiii::to_text | 349.256 | 2.33517 | 1.1617ms | 2251 | 120 | 2.47429e+06 | 6149.17 | 8.66709 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 538.24 | 2.44091 | 48.688ms | 22534 | 300 | 2.84961e+08 | 39928.3 | 5.64115 | 1(Win) |
| jeaiii::to_text | 329.562 | 2.0621 | 27.1382ms | 22545 | 240 | 4.34401e+08 | 65242.5 | 9.2161 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 541.512 | 1.56164 | 71.4558ms | 225388 | 120 | 4.61096e+09 | 396939 | 5.60956 | 1(Win) |
| jeaiii::to_text | 323.005 | 0.983924 | 119.124ms | 225388 | 120 | 5.14457e+09 | 665461 | 9.40477 | 2(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1468.05 | 1.9253 | 0.1955ms | 273 | 480 | 5618.95 | 177.708 | 1.87402 | 1(Win) |
| jeaiii::to_text | 586.206 | 1.29878 | 0.1085ms | 273 | 120 | 4008.4 | 445 | 5.01015 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1666.73 | 1.05218 | 1.9876ms | 2736 | 300 | 81448.8 | 1566 | 1.80292 | 1(Win) |
| jeaiii::to_text | 653.102 | 1.8623 | 1.7617ms | 2735 | 240 | 1.32762e+06 | 3993.75 | 4.62238 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1593.66 | 2.44519 | 6.9508ms | 27358 | 240 | 3.84613e+07 | 16371.7 | 1.90083 | 1(Win) |
| jeaiii::to_text | 592.762 | 1.66103 | 7.8363ms | 27364 | 120 | 6.41701e+07 | 44025 | 5.12103 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1455.25 | 2.22555 | 83.2557ms | 273582 | 240 | 3.82106e+09 | 179287 | 2.08697 | 1(Win) |
| jeaiii::to_text | 607.357 | 1.08079 | 77.9649ms | 273567 | 120 | 2.58646e+09 | 429558 | 5.00197 | 2(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1064.03 | 2.05838 | 0.1725ms | 177 | 480 | 5138.79 | 158.958 | 2.49257 | 1(Win) |
| jeaiii::to_text | 372.415 | 0.842805 | 0.2165ms | 177 | 240 | 3503.49 | 453.333 | 7.83167 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1161.05 | 1.21036 | 0.2812ms | 1769 | 120 | 37131.7 | 1453.33 | 2.59477 | 1(Win) |
| jeaiii::to_text | 425.296 | 2.17926 | 1.7525ms | 1768 | 240 | 1.79304e+06 | 3966.25 | 7.09323 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1175 | 1.39861 | 13.5726ms | 17693 | 480 | 1.93634e+07 | 14360.6 | 2.57757 | 1(Win) |
| jeaiii::to_text | 418.413 | 0.980522 | 17.5461ms | 17702 | 240 | 3.7566e+07 | 40349.2 | 7.24201 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1175.66 | 1.7642 | 25.7951ms | 176931 | 120 | 7.69347e+08 | 143523 | 2.58336 | 1(Win) |
| jeaiii::to_text | 396.674 | 1.088 | 77.0807ms | 176931 | 120 | 2.57032e+09 | 425375 | 7.6581 | 2(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1274.86 | 2.17479 | 0.1629ms | 200 | 480 | 5093.9 | 149.792 | 2.06779 | 1(Win) |
| jeaiii::to_text | 354.213 | 1.32223 | 0.1196ms | 200 | 120 | 6117.65 | 540 | 8.36908 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1420.28 | 1.10898 | 0.2603ms | 2003 | 120 | 26697.5 | 1345 | 2.11869 | 1(Win) |
| jeaiii::to_text | 375.462 | 1.3394 | 6.4488ms | 1999 | 300 | 1.38835e+06 | 5079 | 8.04564 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1317.39 | 2.00411 | 26.6007ms | 199959 | 120 | 1.0099e+09 | 144753 | 2.30488 | 1(Win) |
| jeaiii::to_text | 356.65 | 1.41326 | 96.1043ms | 199959 | 120 | 6.85214e+09 | 534688 | 8.51832 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 385.85 | 0.735958 | 0.187ms | 344 | 120 | 4705.18 | 850.833 | 7.70287 | 1(Win) |
| jeaiii::to_text | 373.062 | 0.947129 | 0.1791ms | 344 | 120 | 8336.13 | 880 | 7.88792 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 373.435 | 1.73261 | 16.0261ms | 34518 | 120 | 2.79938e+08 | 88153.3 | 8.13148 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 369.866 | 2.01165 | 16.215ms | 34518 | 120 | 3.84686e+08 | 89004.2 | 8.21116 | 1(Tie) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 379.043 | 0.755334 | 156.459ms | 345027 | 120 | 5.1593e+09 | 868092 | 8.01519 | 1(Win) |
| jeaiii::to_text | 353.28 | 0.955843 | 165.67ms | 345027 | 120 | 9.51099e+09 | 931398 | 8.59942 | 2(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 554.234 | 0.846114 | 0.1369ms | 393 | 120 | 3943.28 | 677.5 | 5.30143 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 553.553 | 0.764134 | 0.1432ms | 393 | 120 | 3224.09 | 678.333 | 5.33204 | 1(Tie) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 565.269 | 1.62948 | 6.7402ms | 3941 | 480 | 5.63653e+06 | 6650.21 | 5.34981 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 558.092 | 2.21616 | 1.2831ms | 3943 | 120 | 2.67669e+06 | 6739.17 | 5.42486 | 1(Tie) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 556.273 | 1.15893 | 12.7083ms | 39386 | 120 | 7.3486e+07 | 67523.3 | 5.45894 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 546.077 | 1.79143 | 12.7381ms | 39386 | 120 | 1.82203e+08 | 68784.2 | 5.56027 | 1(Tie) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 547.858 | 1.15853 | 123.228ms | 394047 | 120 | 7.57803e+09 | 685932 | 5.5446 | 1(Win) |
| jeaiii::to_text | 512.926 | 1.11466 | 131.715ms | 394047 | 120 | 8.00303e+09 | 732645 | 5.92285 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 417.133 | 0.657048 | 0.1405ms | 296 | 120 | 2383.75 | 678.333 | 7.10917 | 1(Win) |
| vn::to_chars | 399.466 | 0.793976 | 0.1476ms | 296 | 120 | 3795.52 | 708.333 | 7.37024 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 444.279 | 0.606344 | 1.2099ms | 2964 | 120 | 178644 | 6363.33 | 6.80384 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 430.304 | 2.16148 | 2.8272ms | 2961 | 240 | 4.82896e+06 | 6562.5 | 7.03114 | 1(Tie) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 407.849 | 1.74266 | 29.4057ms | 29611 | 240 | 3.49422e+08 | 69240 | 7.44614 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 406.948 | 2.14328 | 29.2704ms | 29611 | 240 | 5.30889e+08 | 69393.3 | 7.46211 | 1(Tie) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 421.797 | 0.876132 | 119.998ms | 295983 | 120 | 4.12523e+09 | 669212 | 7.20167 | 1(Win) |
| jeaiii::to_text | 402.485 | 0.835284 | 126.378ms | 295983 | 120 | 4.11798e+09 | 701322 | 7.54827 | 2(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 425.258 | 0.908756 | 0.1394ms | 300 | 120 | 4493 | 673.333 | 6.94543 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 418.016 | 0.840187 | 0.2068ms | 300 | 120 | 3974.79 | 685 | 7.04085 | 1(Tie) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 432.032 | 1.93262 | 2.8547ms | 3000 | 240 | 3.93339e+06 | 6624.17 | 6.95011 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 421.271 | 2.34585 | 1.2699ms | 2989 | 120 | 3.0244e+06 | 6767.5 | 7.18717 | 1(Tie) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 433.715 | 1.16945 | 60.688ms | 30006 | 480 | 2.85782e+08 | 65980.6 | 7.00184 | 1(Win) |
| jeaiii::to_text | 407.038 | 2.43558 | 12.7515ms | 30005 | 120 | 3.51827e+08 | 70302.5 | 7.46025 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 415.23 | 0.867452 | 124.006ms | 299986 | 120 | 4.28648e+09 | 688992 | 7.31578 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 410.448 | 0.849446 | 125.721ms | 299986 | 120 | 4.2067e+09 | 697018 | 7.401 | 1(Tie) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 512.578 | 1.36393 | 5.0144ms | 5963 | 240 | 5.49604e+06 | 11095 | 5.90697 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 504.731 | 1.61613 | 4.8311ms | 5963 | 240 | 7.95827e+06 | 11267.5 | 6.00218 | 1(Tie) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 495.398 | 1.57264 | 48.8066ms | 59605 | 240 | 7.81501e+08 | 114744 | 6.13028 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 484.66 | 2.39923 | 21.1501ms | 59622 | 120 | 9.5077e+08 | 117321 | 6.26675 | 1(Tie) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 503.402 | 0.838168 | 203.762ms | 596069 | 120 | 1.075e+10 | 1.12923e+06 | 6.03474 | 1(Win) |
| vn::to_chars | 481.504 | 1.13941 | 212.219ms | 596069 | 120 | 2.17138e+10 | 1.18058e+06 | 6.30925 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 670.31 | 0.809488 | 0.1842ms | 646 | 120 | 6655.46 | 920 | 4.42878 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 661.325 | 0.661435 | 0.2007ms | 646 | 120 | 4565.13 | 932.5 | 4.48385 | 1(Tie) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 688.174 | 1.23221 | 3.9139ms | 6455 | 240 | 2.91596e+06 | 8945.42 | 4.39449 | 1(Win) |
| jeaiii::to_text | 627.423 | 1.9847 | 1.9233ms | 6447 | 120 | 4.53966e+06 | 9800 | 4.82663 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 669.593 | 1.58137 | 17.5666ms | 64558 | 120 | 2.53708e+08 | 91948.3 | 4.53522 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 668.847 | 1.28709 | 17.0004ms | 64558 | 120 | 1.68444e+08 | 92050.8 | 4.54003 | 1(Tie) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 640.014 | 0.813417 | 173.972ms | 645540 | 120 | 7.34643e+09 | 961909 | 4.74558 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 625.677 | 0.932672 | 177.107ms | 645540 | 120 | 1.01061e+10 | 983950 | 4.85573 | 1(Tie) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 580.448 | 0.608725 | 0.1797ms | 542 | 120 | 3528.71 | 890.833 | 5.13344 | 1(Win) |
| vn::to_chars | 560.523 | 0.608014 | 0.1913ms | 542 | 120 | 3775.21 | 922.5 | 5.29454 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 579.565 | 1.94028 | 8.4223ms | 5466 | 480 | 1.46236e+07 | 8995.83 | 5.22317 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 569.894 | 1.83171 | 3.977ms | 5465 | 240 | 6.73555e+06 | 9145.83 | 5.31019 | 1(Tie) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text | 571.552 | 1.23932 | 17.1767ms | 54614 | 120 | 1.53054e+08 | 91127.5 | 5.31381 | 1(Win) |
| vn::to_chars | 541.472 | 2.14221 | 17.2581ms | 54614 | 120 | 5.09523e+08 | 96190 | 5.60873 | 2(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 536.759 | 1.00817 | 175.068ms | 546563 | 120 | 1.15019e+10 | 971094 | 5.66 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 533.935 | 0.880293 | 175.858ms | 546563 | 120 | 8.86215e+09 | 976229 | 5.68936 | 1(Tie) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 586.52 | 1.77668 | 1.7795ms | 5518 | 120 | 3.05004e+06 | 8973.33 | 5.16653 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 570.996 | 1.60052 | 8.5969ms | 5495 | 480 | 1.03603e+07 | 9179.17 | 5.30036 | 1(Tie) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 572.996 | 1.25355 | 17.0993ms | 55013 | 120 | 1.58089e+08 | 91562.5 | 5.29932 | 1(Win) |
| jeaiii::to_text | 547.689 | 1.62184 | 17.6399ms | 55013 | 120 | 2.89646e+08 | 95793.3 | 5.54554 | 2(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars STATISTICAL TIE | 556.008 | 0.905559 | 169.316ms | 549930 | 120 | 8.75524e+09 | 943249 | 5.4645 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 552.544 | 0.867924 | 171.735ms | 549930 | 120 | 8.14378e+09 | 949163 | 5.49882 | 1(Tie) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 790.895 | 1.52327 | 16.3746ms | 10934 | 300 | 1.21014e+07 | 13185 | 3.8313 | 1(Win) |
| jeaiii::to_text | 712.649 | 2.28957 | 18.1447ms | 10934 | 300 | 3.36725e+07 | 14632.7 | 4.25299 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 773.623 | 1.86642 | 24.5827ms | 109376 | 120 | 7.5996e+08 | 134832 | 3.92643 | 1(Win) |
| jeaiii::to_text | 717.36 | 1.45901 | 26.8724ms | 109376 | 120 | 5.40098e+08 | 145408 | 4.23463 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 748.558 | 0.932817 | 250.743ms | 1094244 | 120 | 2.02932e+10 | 1.39408e+06 | 4.05834 | 1(Win) |
| jeaiii::to_text | 663.606 | 1.09127 | 279.185ms | 1094244 | 120 | 3.53392e+10 | 1.57255e+06 | 4.57779 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 953.786 | 0.61461 | 0.2263ms | 1135 | 120 | 5848.04 | 1135.83 | 3.12998 | 1(Win) |
| jeaiii::to_text | 853.431 | 1.51293 | 0.5761ms | 1139 | 240 | 89012.4 | 1272.92 | 3.49762 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 965.427 | 1.71211 | 4.9842ms | 11432 | 240 | 8.97322e+06 | 11293.8 | 3.13859 | 1(Win) |
| jeaiii::to_text | 872.321 | 1.24531 | 5.3639ms | 11432 | 240 | 5.81473e+06 | 12499.2 | 3.47285 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 923.278 | 2.09214 | 22.1241ms | 114355 | 120 | 7.32841e+08 | 118120 | 3.28951 | 1(Win) |
| jeaiii::to_text | 826.857 | 1.9856 | 23.5539ms | 114355 | 120 | 8.23029e+08 | 131894 | 3.67337 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 906.561 | 0.931675 | 217.046ms | 1143886 | 120 | 1.50828e+10 | 1.20333e+06 | 3.35122 | 1(Win) |
| jeaiii::to_text | 839.941 | 0.738739 | 234.737ms | 1143886 | 120 | 1.10467e+10 | 1.29878e+06 | 3.61738 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 847.453 | 1.55485 | 0.5539ms | 1043 | 240 | 79935.7 | 1173.75 | 3.51282 | 1(Win) |
| jeaiii::to_text | 749.742 | 1.31949 | 0.2782ms | 1037 | 120 | 36403.4 | 1320 | 3.97935 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 893.228 | 1.69412 | 5.475ms | 10435 | 240 | 8.55064e+06 | 11141.7 | 3.39049 | 1(Win) |
| jeaiii::to_text | 800.041 | 1.76611 | 2.3708ms | 10424 | 120 | 5.77996e+06 | 12426.7 | 3.78805 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 865.041 | 1.5441 | 21.2243ms | 104422 | 120 | 3.79181e+08 | 115122 | 3.51035 | 1(Win) |
| jeaiii::to_text | 789.266 | 1.7512 | 23.0042ms | 104422 | 120 | 5.85858e+08 | 126174 | 3.84865 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 838.472 | 0.947734 | 215.47ms | 1044534 | 120 | 1.52133e+10 | 1.18805e+06 | 3.62364 | 1(Win) |
| jeaiii::to_text | 759.651 | 0.911404 | 239.923ms | 1044534 | 120 | 1.71404e+10 | 1.31132e+06 | 3.99926 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 880.962 | 0.572628 | 0.2254ms | 1045 | 120 | 5039.22 | 1131.67 | 3.38253 | 1(Win) |
| jeaiii::to_text | 818.594 | 1.6724 | 1.1648ms | 1054 | 480 | 202628 | 1228.54 | 3.63074 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 867.29 | 2.10952 | 14.6247ms | 10487 | 300 | 1.77552e+07 | 11532.3 | 3.49173 | 1(Win) |
| jeaiii::to_text | 804.222 | 2.07802 | 5.2918ms | 10508 | 240 | 1.60918e+07 | 12460.8 | 3.7673 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 873.115 | 1.52645 | 49.0203ms | 104999 | 240 | 7.35534e+08 | 114687 | 3.47839 | 1(Win) |
| jeaiii::to_text | 788.008 | 1.81753 | 23.5847ms | 104977 | 120 | 6.39845e+08 | 127048 | 3.8541 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/int-to-str-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 869.612 | 1.09661 | 207.86ms | 1049942 | 120 | 1.91323e+10 | 1.15144e+06 | 3.49368 | 1(Win) |
| jeaiii::to_text | 771.73 | 1.09731 | 232.217ms | 1049942 | 120 | 2.43241e+10 | 1.29748e+06 | 3.93672 | 2(Loss) |
