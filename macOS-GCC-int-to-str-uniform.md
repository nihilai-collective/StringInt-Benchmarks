# int-to-str-uniform  
----

Performance profiling of libraries (Compiled and run on macOS 25.5.0 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 441.711 | 1.00486 | 0.934144ms | 2253 | 120 | 286922 | 4866.13 | 1(Win) |
| jeaiii::to_text | 273.068 | 1.20866 | 3.40992ms | 2251 | 240 | 2.16853e+06 | 7864.53 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 440.232 | 0.599741 | 8.8ms | 22530 | 120 | 1.02825e+07 | 48808.5 | 1(Win) |
| jeaiii::to_text | 290.932 | 0.515347 | 13.442ms | 22530 | 120 | 1.73841e+07 | 73856 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 378.503 | 2.32996 | 99.254ms | 225350 | 120 | 2.10018e+10 | 567791 | 1(Win) |
| jeaiii::to_text | 192.944 | 1.12019 | 194.739ms | 225350 | 120 | 1.8682e+10 | 1.11385e+06 | 2(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1807.58 | 2.25757 | 0.662016ms | 2733 | 240 | 254393 | 1442.13 | 1(Win) |
| jeaiii::to_text | 523.628 | 1.44241 | 0.91008ms | 2736 | 120 | 620040 | 4983.47 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1831.66 | 1.63437 | 2.58304ms | 27353 | 120 | 6.50176e+06 | 14242.1 | 1(Win) |
| jeaiii::to_text | 538.971 | 0.362656 | 8.8151ms | 27353 | 120 | 3.69726e+06 | 48401.1 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1605.58 | 2.45899 | 198.134ms | 273577 | 480 | 7.66391e+09 | 162498 | 1(Win) |
| jeaiii::to_text | 375.246 | 1.3394 | 628.906ms | 273577 | 480 | 4.16284e+10 | 695287 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1579.81 | 2.26171 | 0.207872ms | 1770 | 120 | 70120.8 | 1068.8 | 1(Win) |
| jeaiii::to_text | 344.333 | 0.923656 | 2.18214ms | 1770 | 240 | 492096 | 4902.4 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1521.63 | 2.24143 | 46.8552ms | 176920 | 240 | 1.48253e+09 | 110884 | 1(Win) |
| jeaiii::to_text | 335.734 | 1.18415 | 91.4941ms | 176905 | 120 | 4.24896e+09 | 502511 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1788.38 | 2.20618 | 0.204032ms | 2000 | 120 | 66453.9 | 1066.67 | 1(Win) |
| jeaiii::to_text | 310.914 | 1.69474 | 1.1072ms | 2000 | 120 | 1.29743e+06 | 6135.47 | 2(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1721.73 | 1.18531 | 5.57798ms | 20008 | 240 | 4.14154e+06 | 11082.7 | 1(Win) |
| jeaiii::to_text | 336.757 | 0.519923 | 10.718ms | 19993 | 120 | 1.03995e+07 | 56620.8 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1839.22 | 0.58021 | 19.074ms | 200039 | 120 | 4.34627e+07 | 103725 | 1(Win) |
| jeaiii::to_text | 323.898 | 0.888342 | 112.21ms | 200039 | 120 | 3.28516e+09 | 588990 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 302.615 | 1.69903 | 0.496896ms | 344 | 240 | 81850.3 | 1086.93 | 1(Win) |
| vn::to_chars | 266.686 | 1.60325 | 1.15098ms | 344 | 480 | 186944 | 1230.93 | 2(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 304.179 | 1.71145 | 1.9671ms | 3455 | 120 | 4.12489e+06 | 10833.1 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 299.752 | 0.750357 | 1.98298ms | 3455 | 120 | 816497 | 10993.1 | 1(Tie) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 302.984 | 1.14257 | 19.2681ms | 34481 | 120 | 1.84531e+08 | 108533 | 1(Win) |
| vn::to_chars | 287.597 | 1.20815 | 20.2911ms | 34481 | 120 | 2.28991e+08 | 114340 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 299.767 | 0.395277 | 203.226ms | 344955 | 120 | 2.25809e+09 | 1.09744e+06 | 1(Win) |
| jeaiii::to_text | 198.835 | 1.42913 | 652.398ms | 344983 | 240 | 1.34205e+11 | 1.65465e+06 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 479.58 | 0.49346 | 1.45894ms | 3942 | 120 | 179604 | 7840 | 1(Win) |
| vn::to_chars | 432.505 | 1.36335 | 1.57312ms | 3942 | 120 | 1.68565e+06 | 8693.33 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 471.89 | 0.468616 | 14.3519ms | 39397 | 120 | 1.67056e+07 | 79620.3 | 1(Win) |
| vn::to_chars | 416.15 | 1.22415 | 16.0458ms | 39397 | 120 | 1.46582e+08 | 90284.8 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 426.447 | 0.488598 | 161.991ms | 394003 | 120 | 2.2241e+09 | 881120 | 1(Win) |
| jeaiii::to_text | 321.693 | 1.89578 | 470.917ms | 393992 | 240 | 1.17674e+11 | 1.16801e+06 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 353.149 | 2.31778 | 0.769024ms | 295 | 480 | 164591 | 798.933 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 338.03 | 2.06323 | 0.791808ms | 295 | 480 | 142352 | 834.667 | 1(Tie) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 358.972 | 1.08159 | 1.42797ms | 2957 | 120 | 866613 | 7857.07 | 1(Win) |
| vn::to_chars | 305.97 | 1.93756 | 1.6809ms | 2957 | 120 | 3.82807e+06 | 9218.13 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 350.312 | 0.518215 | 14.5329ms | 29613 | 120 | 2.09446e+07 | 80618.7 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 347.781 | 0.864709 | 14.462ms | 29613 | 120 | 5.91684e+07 | 81205.3 | 1(Tie) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 345.567 | 0.326753 | 148.376ms | 295988 | 120 | 8.5488e+08 | 816849 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 343.358 | 0.512648 | 145.58ms | 295988 | 120 | 2.13145e+09 | 822106 | 1(Tie) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 325.998 | 1.87114 | 0.830976ms | 299 | 480 | 129355 | 877.333 | 1(Win) |
| vn::to_chars | 305.66 | 2.42109 | 0.403968ms | 300 | 240 | 123390 | 936.533 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 305.816 | 1.91451 | 1.73696ms | 3005 | 120 | 3.86309e+06 | 9371.73 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 303.604 | 2.29072 | 1.76077ms | 3005 | 120 | 5.61138e+06 | 9440 | 1(Tie) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 356.564 | 1.33602 | 14.751ms | 29988 | 120 | 1.37794e+08 | 80206.9 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 354.274 | 0.661622 | 14.453ms | 29988 | 120 | 3.42311e+07 | 80725.3 | 1(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 328.638 | 1.44294 | 157.615ms | 299976 | 120 | 1.89328e+10 | 870500 | 1(Win) |
| jeaiii::to_text | 298.215 | 1.32061 | 161.526ms | 299976 | 120 | 1.92596e+10 | 959307 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 408.193 | 1.95197 | 1.312ms | 595 | 480 | 354377 | 1392 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 405.171 | 2.4744 | 0.652032ms | 596 | 240 | 289547 | 1403.73 | 1(Tie) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 423.503 | 0.560939 | 2.45197ms | 5950 | 120 | 677935 | 13399.5 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 417.914 | 1.00512 | 2.44992ms | 5950 | 120 | 2.23527e+06 | 13578.7 | 1(Tie) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 427.748 | 0.84529 | 23.8648ms | 59586 | 120 | 1.51325e+08 | 132849 | 1(Win) |
| jeaiii::to_text | 348.845 | 1.55596 | 30.775ms | 59586 | 120 | 7.70909e+08 | 162897 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 404.802 | 0.510958 | 250.315ms | 596062 | 120 | 6.17805e+09 | 1.40427e+06 | 1(Win) |
| jeaiii::to_text | 255.953 | 2.15127 | 368.429ms | 596062 | 120 | 2.73927e+11 | 2.22092e+06 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 542.979 | 1.36463 | 2.048ms | 6455 | 120 | 2.87301e+06 | 11338.7 | 1(Win) |
| jeaiii::to_text | 518.866 | 1.37728 | 2.1929ms | 6455 | 120 | 3.20482e+06 | 11865.6 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 556.446 | 0.454619 | 19.8682ms | 64505 | 120 | 3.03125e+07 | 110554 | 1(Win) |
| jeaiii::to_text | 497.295 | 1.68802 | 21.5549ms | 64505 | 120 | 5.23241e+08 | 123703 | 2(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 439.611 | 2.12172 | 244.813ms | 645620 | 120 | 1.05968e+11 | 1.40058e+06 | 1(Win) |
| jeaiii::to_text | 129.603 | 2.38562 | 1870.21ms | 645646 | 240 | 3.08302e+12 | 4.75096e+06 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 482.812 | 0.370196 | 2.08512ms | 5472 | 120 | 192161 | 10809.6 | 1(Win) |
| vn::to_chars | 426.53 | 1.82617 | 5.1479ms | 5464 | 240 | 1.19493e+07 | 12218.7 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 448.17 | 1.74085 | 22.4031ms | 54692 | 120 | 4.92579e+08 | 116382 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 447.743 | 1.92111 | 20.7281ms | 54692 | 120 | 6.01011e+08 | 116493 | 1(Tie) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 124.086 | 2.11774 | 5068.82ms | 546591 | 480 | 3.79899e+12 | 4.20089e+06 | 1(Win) |
| jeaiii::to_text | 100.311 | 1.92123 | 4323.67ms | 546591 | 480 | 4.78439e+12 | 5.19653e+06 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 469.107 | 0.606824 | 2.0329ms | 5492 | 120 | 550925 | 11165.9 | 1(Win) |
| jeaiii::to_text | 455.445 | 1.04384 | 2.43507ms | 5492 | 120 | 1.72945e+06 | 11500.8 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 425.842 | 1.99887 | 22.816ms | 54988 | 120 | 7.27103e+08 | 123147 | 1(Win) |
| vn::to_chars | 376.358 | 1.05432 | 133.88ms | 55018 | 480 | 1.03705e+09 | 139415 | 2(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 107.092 | 2.40639 | 4176.39ms | 550010 | 480 | 6.66803e+12 | 4.89793e+06 | 1(Win) |
| jeaiii::to_text | 97.1639 | 1.83826 | 4332.38ms | 550010 | 480 | 4.72705e+12 | 5.39842e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 586.799 | 2.43974 | 0.79104ms | 1104 | 240 | 460387 | 1795.2 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 553.267 | 2.49998 | 0.846848ms | 1104 | 240 | 543774 | 1904 | 1(Tie) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 627.621 | 0.578292 | 3.02618ms | 10963 | 120 | 1.11374e+06 | 16659.2 | 1(Win) |
| jeaiii::to_text | 602.693 | 0.66608 | 3.13805ms | 10963 | 120 | 1.60231e+06 | 17348.3 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 584.312 | 1.00881 | 31.8871ms | 109380 | 120 | 3.89215e+08 | 178524 | 1(Win) |
| jeaiii::to_text | 460.688 | 1.77775 | 43.5699ms | 109380 | 120 | 1.94442e+09 | 226430 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 738.884 | 2.23225 | 0.633088ms | 1140 | 240 | 259128 | 1472 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 730.416 | 2.30594 | 0.68608ms | 1140 | 240 | 282966 | 1489.07 | 1(Tie) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 750.409 | 0.900315 | 2.64704ms | 11421 | 120 | 2.04935e+06 | 14515.2 | 1(Win) |
| jeaiii::to_text | 690.157 | 1.13691 | 2.92403ms | 11421 | 120 | 3.86348e+06 | 15782.4 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 695.161 | 1.35912 | 28.7852ms | 114325 | 120 | 5.45269e+08 | 156841 | 1(Win) |
| jeaiii::to_text | 633.79 | 1.93736 | 30.686ms | 114325 | 120 | 1.3329e+09 | 172028 | 2(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 609.067 | 1.13015 | 355.087ms | 1143752 | 120 | 4.91572e+10 | 1.79088e+06 | 1(Win) |
| jeaiii::to_text | 430.956 | 2.18303 | 403.986ms | 1143752 | 120 | 3.66352e+11 | 2.53104e+06 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 685.448 | 2.44535 | 0.710912ms | 1044 | 240 | 302905 | 1452.8 | 1(Win) |
| jeaiii::to_text | 407.677 | 1.36399 | 1.01786ms | 1044 | 240 | 266417 | 2442.67 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 680.505 | 1.18724 | 2.78093ms | 10441 | 120 | 3.62155e+06 | 14632.5 | 1(Win) |
| jeaiii::to_text | 411.858 | 1.37966 | 4.59494ms | 10441 | 120 | 1.33515e+07 | 24177.1 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 514.242 | 2.34274 | 38.2111ms | 104430 | 120 | 2.47029e+09 | 193668 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 507.864 | 1.32792 | 186.956ms | 104438 | 480 | 3.25548e+09 | 196117 | 1(Tie) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 710.245 | 2.2856 | 0.621056ms | 1051 | 240 | 250061 | 1412.27 | 1(Win) |
| jeaiii::to_text | 410.81 | 0.94703 | 2.21184ms | 1050 | 480 | 256076 | 2438.93 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 642.908 | 1.84038 | 3.00493ms | 10507 | 120 | 9.87356e+06 | 15586.1 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 621.719 | 1.52437 | 2.99904ms | 10507 | 120 | 7.24354e+06 | 16117.3 | 1(Tie) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 692.472 | 0.580054 | 26.4579ms | 104954 | 120 | 8.43565e+07 | 144544 | 1(Win) |
| vn::to_chars | 658.274 | 0.807186 | 26.8068ms | 104954 | 120 | 1.80767e+08 | 152053 | 2(Loss) |
