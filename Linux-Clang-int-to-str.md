# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1224.44 | 0.437344 | 0.053689ms | 276 | 30 | 26.5161 | 214.967 | 1.67053 | 1(Win) |
| jeaiii::to_text | 1055.53 | 0.22708 | 0.06074ms | 276 | 30 | 9.61954 | 249.367 | 1.99396 | 2(Loss) |
| fmt::format_to | 636.808 | 0.205333 | 0.089081ms | 276 | 30 | 21.6092 | 413.333 | 3.54203 | 3(Loss) |
| std::to_chars | 479.326 | 1.65643 | 0.164233ms | 276 | 30 | 2482.12 | 549.133 | 4.79493 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1354.57 | 0.280499 | 0.387774ms | 2679 | 30 | 839.706 | 1886.13 | 1.79124 | 1(Win) |
| jeaiii::to_text | 1060.02 | 0.087476 | 0.464347ms | 2679 | 30 | 133.357 | 2410.23 | 2.29849 | 2(Loss) |
| std::to_chars | 799.879 | 0.0500417 | 0.619797ms | 2679 | 30 | 76.6448 | 3194.1 | 3.05938 | 3(Loss) |
| fmt::format_to | 660.115 | 0.132635 | 3.60773ms | 2679 | 48 | 1264.92 | 3870.38 | 3.71463 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1281.29 | 0.067398 | 3.75339ms | 26475 | 30 | 5291.64 | 19705.5 | 1.9285 | 1(Win) |
| jeaiii::to_text | 1173.23 | 2.05102 | 9.13995ms | 26475 | 30 | 5.84475e+06 | 21520.5 | 2.10652 | 2(Loss) |
| std::to_chars | 897.448 | 0.0377521 | 5.3688ms | 26475 | 30 | 3384.22 | 28133.7 | 2.75546 | 3(Loss) |
| fmt::format_to | 684.379 | 0.659672 | 6.851ms | 26475 | 30 | 1.77687e+06 | 36892.6 | 3.61401 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| jeaiii::to_text STATISTICAL TIE | 300.007 | 0.121681 | 152.197ms | 264905 | 30 | 3.14981e+07 | 842091 | 8.25206 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 299.733 | 0.102212 | 152.289ms | 264905 | 30 | 2.22659e+07 | 842861 | 8.25949 | 1(Tie) |
| fmt::format_to | 271.472 | 0.0581125 | 168.145ms | 264905 | 30 | 8.7739e+06 | 930606 | 9.11928 | 3(Loss) |
| std::to_chars | 257.504 | 0.143155 | 176.505ms | 264905 | 30 | 5.91759e+07 | 981084 | 9.6137 | 4(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1281.24 | 0.139841 | 0.055532ms | 309 | 30 | 3.10345 | 230 | 1.62395 | 1(Win) |
| jeaiii::to_text | 1175.29 | 0.145548 | 0.059548ms | 309 | 30 | 3.9954 | 250.733 | 1.79784 | 2(Loss) |
| std::to_chars | 980.65 | 0.0308977 | 0.068581ms | 309 | 30 | 0.258621 | 300.5 | 2.21294 | 3(Loss) |
| fmt::format_to | 730.202 | 0.211757 | 0.086398ms | 309 | 30 | 21.9092 | 403.567 | 3.074 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1588.62 | 0.0508297 | 0.360584ms | 3152 | 30 | 27.7517 | 1892.2 | 1.52986 | 1(Win) |
| jeaiii::to_text | 1396.05 | 0.04522 | 0.408074ms | 3152 | 30 | 28.4414 | 2153.2 | 1.74433 | 2(Loss) |
| std::to_chars | 1030.39 | 0.0288589 | 0.566278ms | 3152 | 30 | 21.2644 | 2917.33 | 2.37206 | 3(Loss) |
| fmt::format_to | 785.809 | 0.285042 | 0.764331ms | 3152 | 30 | 3566.78 | 3825.33 | 3.12022 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1554.63 | 1.28137 | 3.54473ms | 31427 | 30 | 1.8307e+06 | 19278.6 | 1.58944 | 1(Win) |
| jeaiii::to_text | 1386.89 | 1.17384 | 3.97379ms | 31427 | 30 | 1.93044e+06 | 21610.3 | 1.78203 | 2(Loss) |
| std::to_chars | 1102.71 | 1.4944 | 4.99531ms | 31427 | 30 | 4.94925e+06 | 27179.6 | 2.24224 | 3(Loss) |
| fmt::format_to | 806.549 | 0.662354 | 6.83446ms | 31427 | 30 | 1.81738e+06 | 37159.7 | 3.06636 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 745.881 | 0.247949 | 73.4238ms | 314559 | 30 | 2.9834e+07 | 402191 | 3.31879 | 1(Win) |
| jeaiii::to_text | 693.913 | 0.211863 | 78.5709ms | 314559 | 30 | 2.51668e+07 | 432312 | 3.56733 | 2(Loss) |
| std::to_chars | 539.059 | 0.188589 | 100.6ms | 314559 | 30 | 3.30436e+07 | 556501 | 4.59219 | 3(Loss) |
| fmt::format_to | 530.584 | 0.156991 | 102.91ms | 314559 | 30 | 2.36357e+07 | 565390 | 4.66573 | 4(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 964.04 | 0.428658 | 0.052387ms | 217 | 30 | 25.4023 | 214.667 | 2.10876 | 1(Win) |
| jeaiii::to_text | 859.773 | 0.138222 | 0.057215ms | 217 | 30 | 3.32069 | 240.7 | 2.42826 | 2(Loss) |
| std::to_chars | 689.441 | 0.120683 | 0.068341ms | 217 | 30 | 3.93678 | 300.167 | 3.13518 | 3(Loss) |
| fmt::format_to | 518.362 | 0.15176 | 0.085327ms | 217 | 30 | 11.0126 | 399.233 | 4.31736 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1136.39 | 0.119913 | 0.346552ms | 2164 | 30 | 142.271 | 1816.07 | 2.13303 | 1(Win) |
| jeaiii::to_text | 1000.33 | 0.0337532 | 0.391348ms | 2164 | 30 | 14.5471 | 2063.07 | 2.43019 | 2(Loss) |
| std::to_chars | 668.039 | 0.0303712 | 0.579148ms | 2164 | 30 | 26.4092 | 3089.27 | 3.66091 | 3(Loss) |
| fmt::format_to | 530.964 | 0.0651973 | 0.741667ms | 2164 | 30 | 192.648 | 3886.8 | 4.61888 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1144.33 | 2.00508 | 3.27966ms | 21528 | 30 | 3.88229e+06 | 17941.2 | 2.1589 | 1(Win) |
| jeaiii::to_text | 979.423 | 2.40022 | 3.8104ms | 21528 | 30 | 7.59432e+06 | 20962 | 2.52347 | 2(Loss) |
| std::to_chars | 689.488 | 0.912457 | 5.40733ms | 21528 | 30 | 2.21463e+06 | 29776.7 | 3.58639 | 3(Loss) |
| fmt::format_to | 555.896 | 0.694143 | 6.71644ms | 21528 | 30 | 1.97169e+06 | 36932.6 | 4.44928 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 478.767 | 0.213007 | 77.6966ms | 215369 | 30 | 2.50511e+07 | 429002 | 5.17022 | 1(Win) |
| jeaiii::to_text | 436.101 | 0.316302 | 85.0772ms | 215369 | 30 | 6.65758e+07 | 470973 | 5.67644 | 2(Loss) |
| fmt::format_to STATISTICAL TIE | 355.099 | 0.236145 | 104.445ms | 215369 | 30 | 5.59688e+07 | 578407 | 6.97068 | 3(Tie) |
| std::to_chars STATISTICAL TIE | 354.603 | 0.19821 | 103.69ms | 215369 | 30 | 3.95415e+07 | 579216 | 6.98068 | 3(Tie) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1173.8 | 0.445384 | 0.051917ms | 254 | 30 | 25.3437 | 206.367 | 1.72992 | 1(Win) |
| jeaiii::to_text | 1070.09 | 0.400471 | 0.055252ms | 254 | 30 | 24.654 | 226.367 | 1.92782 | 2(Loss) |
| std::to_chars | 898.047 | 0.182086 | 0.062051ms | 254 | 30 | 7.23678 | 269.733 | 2.37822 | 3(Loss) |
| fmt::format_to | 670.635 | 0.136924 | 0.099126ms | 254 | 30 | 7.33793 | 361.2 | 3.30971 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1374.17 | 0.0998291 | 0.361145ms | 2584 | 30 | 96.1483 | 1793.3 | 1.76318 | 1(Win) |
| jeaiii::to_text | 1250.11 | 0.107018 | 0.37816ms | 2584 | 30 | 133.513 | 1971.27 | 1.94162 | 2(Loss) |
| std::to_chars | 1073.1 | 0.0890634 | 0.436617ms | 2584 | 30 | 125.495 | 2296.43 | 2.2693 | 3(Loss) |
| fmt::format_to | 715.166 | 0.036885 | 0.659997ms | 2584 | 30 | 48.4609 | 3445.77 | 3.42474 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1397.41 | 0.0373007 | 3.31381ms | 25713 | 30 | 1285.33 | 17548.1 | 1.76812 | 1(Win) |
| jeaiii::to_text | 1268.89 | 1.43387 | 3.62222ms | 25713 | 30 | 2.30356e+06 | 19325.5 | 1.9474 | 2(Loss) |
| std::to_chars | 1037.32 | 2.25337 | 4.30763ms | 25713 | 30 | 8.51272e+06 | 23639.7 | 2.38311 | 3(Loss) |
| fmt::format_to | 754.7 | 1.07625 | 5.9513ms | 25713 | 30 | 3.66863e+06 | 32492.1 | 3.27647 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 492.774 | 0.348948 | 90.7876ms | 256913 | 30 | 9.03068e+07 | 497209 | 5.02368 | 1(Win) |
| jeaiii::to_text | 486.775 | 0.192113 | 92.8389ms | 256913 | 30 | 2.80513e+07 | 503336 | 5.08549 | 2(Loss) |
| std::to_chars | 437.739 | 0.161803 | 101.873ms | 256913 | 30 | 2.46056e+07 | 559720 | 5.65527 | 3(Loss) |
| fmt::format_to | 407.093 | 0.156732 | 110.059ms | 256913 | 30 | 2.66945e+07 | 601856 | 6.08098 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1800.1 | 0.242791 | 0.064846ms | 508 | 30 | 12.8092 | 269.133 | 1.18399 | 1(Win) |
| jeaiii::to_text | 1432.63 | 0.240231 | 0.076162ms | 508 | 30 | 19.7989 | 338.167 | 1.53202 | 2(Loss) |
| std::to_chars | 939.982 | 0.182201 | 0.107499ms | 508 | 30 | 26.4552 | 515.4 | 2.43793 | 3(Loss) |
| fmt::format_to | 891 | 0.153223 | 0.113137ms | 508 | 30 | 20.823 | 543.733 | 2.58635 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2106.76 | 0.0803473 | 0.458599ms | 5136 | 30 | 104.685 | 2324.93 | 1.15674 | 1(Win) |
| jeaiii::to_text | 1646.17 | 0.0187702 | 0.564656ms | 5136 | 30 | 9.35747 | 2975.43 | 1.4868 | 2(Loss) |
| std::to_chars | 1024.55 | 0.0256705 | 0.916717ms | 5136 | 30 | 45.1828 | 4780.7 | 2.39818 | 3(Loss) |
| fmt::format_to | 963.707 | 0.0482748 | 2.19321ms | 5136 | 30 | 180.602 | 5082.53 | 2.55039 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2118.4 | 0.0198929 | 4.4205ms | 51532 | 30 | 638.93 | 23199 | 1.1668 | 1(Win) |
| jeaiii::to_text | 1613.89 | 0.507976 | 34.7578ms | 51532 | 48 | 1.14851e+06 | 30451.1 | 1.53223 | 2(Loss) |
| std::to_chars | 1010.25 | 0.897036 | 9.00688ms | 51532 | 30 | 5.7126e+06 | 48645.9 | 2.44876 | 3(Loss) |
| fmt::format_to | 952.348 | 0.741376 | 9.46899ms | 51532 | 30 | 4.39098e+06 | 51603.8 | 2.59791 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 569.889 | 0.138547 | 155.73ms | 515983 | 30 | 4.29344e+07 | 863466 | 4.34408 | 1(Win) |
| jeaiii::to_text | 522.545 | 0.136108 | 169.947ms | 515983 | 30 | 4.92845e+07 | 941697 | 4.73771 | 2(Loss) |
| fmt::format_to | 487.651 | 0.117529 | 181.708ms | 515983 | 30 | 4.21956e+07 | 1.00908e+06 | 5.07663 | 3(Loss) |
| std::to_chars | 396.518 | 0.263334 | 223.308ms | 515983 | 30 | 3.20389e+08 | 1.241e+06 | 6.24353 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1836.96 | 0.220279 | 0.068411ms | 562 | 30 | 12.392 | 291.767 | 1.17817 | 1(Win) |
| jeaiii::to_text | 1546.65 | 0.268908 | 0.18977ms | 562 | 30 | 26.0506 | 346.533 | 1.43108 | 2(Loss) |
| std::to_chars | 1042.6 | 0.172719 | 0.108481ms | 562 | 30 | 23.6506 | 514.067 | 2.21139 | 3(Loss) |
| fmt::format_to | 981.441 | 0.171902 | 0.112837ms | 562 | 30 | 26.4379 | 546.1 | 2.35635 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2114.07 | 0.109209 | 0.511718ms | 5673 | 30 | 234.326 | 2559.13 | 1.15342 | 1(Win) |
| jeaiii::to_text | 1757.77 | 0.0324427 | 1.34734ms | 5673 | 30 | 29.9126 | 3077.87 | 1.39174 | 2(Loss) |
| std::to_chars | 1101.8 | 0.059381 | 0.919671ms | 5673 | 30 | 255.057 | 4910.33 | 2.23014 | 3(Loss) |
| fmt::format_to | 1004.38 | 0.0494917 | 0.998978ms | 5673 | 30 | 213.214 | 5386.6 | 2.44876 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2093.54 | 1.63782 | 4.77094ms | 56570 | 30 | 5.34397e+06 | 25769.5 | 1.18099 | 1(Win) |
| jeaiii::to_text | 1730.76 | 0.835059 | 5.72032ms | 56570 | 30 | 2.03261e+06 | 31170.9 | 1.42875 | 2(Loss) |
| std::to_chars | 1091.12 | 0.78992 | 9.05878ms | 56570 | 30 | 4.57628e+06 | 49443.8 | 2.26737 | 3(Loss) |
| fmt::format_to | 1021.93 | 1.15864 | 9.53112ms | 56570 | 30 | 1.1224e+07 | 52791.5 | 2.4208 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1069.14 | 0.276393 | 91.4111ms | 566083 | 30 | 5.84342e+07 | 504948 | 2.31521 | 1(Win) |
| jeaiii::to_text | 920.592 | 0.151874 | 106.207ms | 566083 | 30 | 2.37965e+07 | 586426 | 2.68886 | 2(Loss) |
| fmt::format_to | 754.732 | 0.132317 | 129.17ms | 566083 | 30 | 2.68735e+07 | 715299 | 3.28002 | 3(Loss) |
| std::to_chars | 668.406 | 0.191344 | 146.18ms | 566083 | 30 | 7.16526e+07 | 807680 | 3.70367 | 4(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1819.69 | 0.373372 | 0.059778ms | 465 | 30 | 24.8379 | 243.7 | 1.15556 | 1(Win) |
| jeaiii::to_text | 1361 | 0.289509 | 0.073248ms | 465 | 30 | 26.6954 | 325.833 | 1.61219 | 2(Loss) |
| std::to_chars | 869.413 | 0.0896376 | 0.106708ms | 465 | 30 | 6.27126 | 510.067 | 2.63914 | 3(Loss) |
| fmt::format_to | 820.055 | 0.0145239 | 0.112036ms | 465 | 30 | 0.185057 | 540.767 | 2.81061 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2015.05 | 0.254171 | 0.428744ms | 4661 | 30 | 943.099 | 2205.93 | 1.2088 | 1(Win) |
| jeaiii::to_text | 1520.2 | 0.0256662 | 0.546208ms | 4661 | 30 | 16.8966 | 2924 | 1.60801 | 2(Loss) |
| std::to_chars | 943.352 | 0.0197045 | 0.869938ms | 4661 | 30 | 25.8621 | 4712 | 2.60335 | 3(Loss) |
| fmt::format_to | 845.967 | 0.0194145 | 0.988283ms | 4661 | 30 | 31.2195 | 5254.43 | 2.90569 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2119.79 | 0.0426703 | 3.9141ms | 46581 | 30 | 2398.87 | 20956.4 | 1.16583 | 1(Win) |
| jeaiii::to_text | 1510.02 | 0.0305023 | 5.64015ms | 46581 | 30 | 2415.66 | 29418.8 | 1.63755 | 2(Loss) |
| std::to_chars | 926.227 | 0.941368 | 8.75212ms | 46581 | 30 | 6.11537e+06 | 47961.3 | 2.67089 | 3(Loss) |
| fmt::format_to | 863.701 | 0.754265 | 9.34839ms | 46581 | 30 | 4.51502e+06 | 51433.4 | 2.86442 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1036.47 | 0.26444 | 78.1584ms | 466001 | 30 | 3.85685e+07 | 428775 | 2.38834 | 1(Win) |
| jeaiii::to_text | 787.251 | 0.462345 | 101.883ms | 466001 | 30 | 2.04362e+08 | 564513 | 3.14416 | 2(Loss) |
| fmt::format_to | 622.721 | 0.229458 | 128.621ms | 466001 | 30 | 8.04482e+07 | 713664 | 3.97529 | 3(Loss) |
| std::to_chars | 565.596 | 0.212519 | 141.334ms | 466001 | 30 | 8.36524e+07 | 785743 | 4.37687 | 4(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1891.97 | 0.320605 | 0.06066ms | 492 | 30 | 18.9655 | 248 | 1.10976 | 1(Win) |
| jeaiii::to_text | 1608.16 | 0.214062 | 0.088931ms | 492 | 30 | 11.7023 | 291.767 | 1.3687 | 2(Loss) |
| fmt::format_to | 1061.64 | 0.142062 | 0.093639ms | 492 | 30 | 11.8264 | 441.967 | 2.14024 | 3(Loss) |
| std::to_chars | 955.357 | 0.0708922 | 0.102412ms | 492 | 30 | 3.63678 | 491.133 | 2.38333 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2119.62 | 0.163355 | 0.444579ms | 4833 | 30 | 378.534 | 2174.5 | 1.14784 | 1(Win) |
| jeaiii::to_text | 1793.1 | 0.0684263 | 0.504046ms | 4833 | 30 | 92.8092 | 2570.47 | 1.36124 | 2(Loss) |
| std::to_chars | 1019.05 | 0.24931 | 0.853924ms | 4833 | 30 | 3814.59 | 4522.97 | 2.40974 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2176.63 | 1.15799 | 3.88079ms | 48261 | 30 | 1.79869e+06 | 21145.2 | 1.13548 | 1(Win) |
| jeaiii::to_text | 1785.78 | 0.0243141 | 4.73533ms | 48261 | 30 | 1178.07 | 25773.2 | 1.38443 | 2(Loss) |
| fmt::format_to | 1139.99 | 0.610432 | 7.33615ms | 48261 | 30 | 1.82217e+06 | 40373.5 | 2.16976 | 3(Loss) |
| std::to_chars | 1028.43 | 0.592481 | 8.14737ms | 48261 | 30 | 2.10917e+06 | 44752.9 | 2.40534 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1561.66 | 0.297611 | 53.6069ms | 483138 | 30 | 2.31308e+07 | 295043 | 1.58496 | 1(Win) |
| jeaiii::to_text | 1238.34 | 0.338474 | 67.3942ms | 483138 | 30 | 4.75808e+07 | 372075 | 1.99874 | 2(Loss) |
| fmt::format_to | 949.574 | 0.228805 | 87.6068ms | 483138 | 30 | 3.69776e+07 | 485224 | 2.60677 | 3(Loss) |
| std::to_chars | 817.426 | 0.245924 | 101.573ms | 483138 | 30 | 5.7646e+07 | 563668 | 3.02824 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2394.66 | 0.220982 | 0.111445ms | 1010 | 30 | 23.7023 | 402.233 | 0.93703 | 1(Win) |
| jeaiii::to_text | 1780.98 | 0.0127959 | 0.113007ms | 1010 | 30 | 0.143678 | 540.833 | 1.2897 | 2(Loss) |
| fmt::format_to | 1280.13 | 0.0832497 | 0.150473ms | 1010 | 30 | 11.7713 | 752.433 | 1.85347 | 3(Loss) |
| std::to_chars | 1081.89 | 0.0607264 | 0.176411ms | 1010 | 30 | 8.76897 | 890.3 | 2.18983 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2442.66 | 0.0571411 | 0.755508ms | 9939 | 30 | 147.495 | 3880.43 | 1.00392 | 1(Win) |
| jeaiii::to_text | 1890.27 | 0.0385398 | 0.955504ms | 9939 | 30 | 112.041 | 5014.4 | 1.29978 | 2(Loss) |
| fmt::format_to | 1294.91 | 0.0213533 | 1.37441ms | 9939 | 30 | 73.292 | 7319.87 | 1.90285 | 3(Loss) |
| std::to_chars | 1124.9 | 0.0240546 | 1.59351ms | 9939 | 30 | 123.247 | 8426.17 | 2.19174 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2456.58 | 0.688813 | 7.24486ms | 99715 | 30 | 2.13297e+06 | 38710.6 | 1.00682 | 1(Win) |
| jeaiii::to_text | 1845.9 | 1.14364 | 9.46134ms | 99715 | 30 | 1.04137e+07 | 51517.1 | 1.34 | 2(Loss) |
| fmt::format_to | 1290.38 | 0.691135 | 13.4668ms | 99715 | 30 | 7.78269e+06 | 73695.6 | 1.91778 | 3(Loss) |
| std::to_chars | 1100.3 | 0.532388 | 15.8789ms | 99715 | 30 | 6.35154e+06 | 86427.3 | 2.24897 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 840.903 | 0.136417 | 204.027ms | 998227 | 30 | 7.1553e+07 | 1.1321e+06 | 2.94402 | 1(Win) |
| jeaiii::to_text | 831.337 | 0.154679 | 206.572ms | 998227 | 30 | 9.4121e+07 | 1.14512e+06 | 2.97794 | 2(Loss) |
| fmt::format_to | 712.168 | 0.072745 | 240.927ms | 998227 | 30 | 2.83675e+07 | 1.33674e+06 | 3.47627 | 3(Loss) |
| std::to_chars | 571.791 | 0.0785415 | 300.112ms | 998227 | 30 | 5.12983e+07 | 1.66491e+06 | 4.32961 | 4(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2218.16 | 0.18852 | 0.096072ms | 1041 | 30 | 21.3575 | 447.567 | 1.02318 | 1(Win) |
| jeaiii::to_text | 1717.01 | 0.142281 | 0.118305ms | 1041 | 30 | 20.3034 | 578.2 | 1.3487 | 2(Loss) |
| fmt::format_to | 1251.61 | 0.0937216 | 0.157193ms | 1041 | 30 | 16.5793 | 793.2 | 1.88569 | 3(Loss) |
| std::to_chars | 1098.65 | 0.128934 | 0.196651ms | 1041 | 30 | 40.723 | 903.633 | 2.15709 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2601.45 | 0.0590422 | 0.749409ms | 10505 | 30 | 155.099 | 3851.07 | 0.943145 | 1(Win) |
| jeaiii::to_text | 1966.61 | 0.0302601 | 0.960562ms | 10505 | 30 | 71.2885 | 5094.23 | 1.2493 | 2(Loss) |
| fmt::format_to | 1371.04 | 0.0281871 | 1.36459ms | 10505 | 30 | 127.266 | 7307.1 | 1.79694 | 3(Loss) |
| std::to_chars | 1149.5 | 1.75985 | 7.83875ms | 10505 | 48 | 1.12919e+06 | 8715.42 | 2.14382 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2592.37 | 0.680357 | 7.08807ms | 104834 | 30 | 2.06541e+06 | 38566 | 0.953934 | 1(Win) |
| jeaiii::to_text | 1931.18 | 0.765163 | 9.47979ms | 104834 | 30 | 4.70748e+06 | 51770.2 | 1.28059 | 2(Loss) |
| fmt::format_to | 1366.69 | 0.470851 | 13.3085ms | 104834 | 30 | 3.55919e+06 | 73153 | 1.81061 | 3(Loss) |
| std::to_chars | 1140.39 | 0.479079 | 15.9092ms | 104834 | 30 | 5.29215e+06 | 87669.4 | 2.17006 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1302.81 | 0.116276 | 138.633ms | 1048207 | 30 | 2.38798e+07 | 767299 | 1.90008 | 1(Win) |
| jeaiii::to_text | 1192.98 | 0.185374 | 151.457ms | 1048207 | 30 | 7.23842e+07 | 837940 | 2.07499 | 2(Loss) |
| fmt::format_to | 976.519 | 0.163698 | 184.546ms | 1048207 | 30 | 8.42443e+07 | 1.02368e+06 | 2.5351 | 3(Loss) |
| std::to_chars | 765.863 | 0.317879 | 234.67ms | 1048207 | 30 | 5.16459e+08 | 1.30526e+06 | 3.23246 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2095 | 0.02078 | 0.093178ms | 946 | 30 | 0.24023 | 430.633 | 1.07188 | 1(Win) |
| jeaiii::to_text | 1626.13 | 0.167666 | 0.114509ms | 946 | 30 | 25.9586 | 554.8 | 1.42001 | 2(Loss) |
| fmt::format_to | 1129.37 | 0.100806 | 0.157844ms | 946 | 30 | 19.454 | 798.833 | 2.09063 | 3(Loss) |
| std::to_chars | 1013.3 | 0.0655877 | 0.175419ms | 946 | 30 | 10.2299 | 890.333 | 2.3444 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2222.33 | 1.75861 | 3.71353ms | 9507 | 48 | 247089 | 4079.77 | 1.10441 | 1(Win) |
| jeaiii::to_text | 1829.06 | 0.032865 | 0.94591ms | 9507 | 30 | 79.6195 | 4956.97 | 1.3438 | 2(Loss) |
| fmt::format_to | 1232.16 | 0.0206972 | 1.38246ms | 9507 | 30 | 69.5816 | 7358.27 | 1.99898 | 3(Loss) |
| std::to_chars | 1087.21 | 0.0241087 | 1.53836ms | 9507 | 30 | 121.264 | 8339.33 | 2.26745 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2257.02 | 0.635136 | 7.39297ms | 94882 | 30 | 1.94514e+06 | 40091.1 | 1.09582 | 1(Win) |
| jeaiii::to_text | 1804.42 | 0.753545 | 9.17988ms | 94882 | 30 | 4.28385e+06 | 50147.3 | 1.37085 | 2(Loss) |
| fmt::format_to | 1222.27 | 0.455997 | 13.4993ms | 94882 | 30 | 3.41881e+06 | 74031.3 | 2.02458 | 3(Loss) |
| std::to_chars | 1060.21 | 0.544906 | 15.5301ms | 94882 | 30 | 6.48859e+06 | 85348 | 2.33415 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1183.58 | 0.1287 | 138.186ms | 948267 | 30 | 2.90099e+07 | 764070 | 2.09158 | 1(Win) |
| jeaiii::to_text | 1141.49 | 0.247102 | 143.208ms | 948267 | 30 | 1.14972e+08 | 792242 | 2.16866 | 2(Loss) |
| fmt::format_to | 873.752 | 0.182436 | 186.361ms | 948267 | 30 | 1.06962e+08 | 1.03501e+06 | 2.8333 | 3(Loss) |
| std::to_chars | 704.386 | 0.45219 | 230.355ms | 948267 | 30 | 1.01112e+09 | 1.28387e+06 | 3.51458 | 4(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2471.77 | 0.351399 | 0.083553ms | 976 | 30 | 52.5299 | 376.567 | 0.903962 | 1(Win) |
| jeaiii::to_text | 1945.76 | 0.16786 | 0.100579ms | 976 | 30 | 19.3437 | 478.367 | 1.17391 | 2(Loss) |
| fmt::format_to | 1292.58 | 0.0785988 | 0.143122ms | 976 | 30 | 9.61034 | 720.1 | 1.81236 | 3(Loss) |
| std::to_chars | 1137.56 | 0.102952 | 0.161219ms | 976 | 30 | 21.2885 | 818.233 | 2.07165 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2883.18 | 0.0964437 | 1.43896ms | 9733 | 30 | 289.214 | 3219.4 | 0.848413 | 1(Win) |
| jeaiii::to_text | 2103.88 | 0.0210827 | 0.811381ms | 9733 | 30 | 25.9552 | 4411.9 | 1.16639 | 2(Loss) |
| fmt::format_to | 1405.37 | 0.0358435 | 1.24077ms | 9733 | 30 | 168.133 | 6604.73 | 1.75203 | 3(Loss) |
| std::to_chars | 1204.52 | 0.0139256 | 1.41876ms | 9733 | 30 | 34.5471 | 7706.07 | 2.04481 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2877.09 | 0.92172 | 5.95187ms | 97422 | 30 | 2.65783e+06 | 32292.7 | 0.859274 | 1(Win) |
| jeaiii::to_text | 2065.29 | 0.978136 | 8.11999ms | 97422 | 30 | 5.80862e+06 | 44985.9 | 1.19758 | 2(Loss) |
| fmt::format_to | 1405.58 | 0.580154 | 12.0425ms | 97422 | 30 | 4.41177e+06 | 66100.2 | 1.76039 | 3(Loss) |
| std::to_chars | 1169.99 | 0.538982 | 14.5062ms | 97422 | 30 | 5.49565e+06 | 79409.9 | 2.11505 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2175.75 | 0.432183 | 78.7752ms | 974183 | 30 | 1.02169e+08 | 427004 | 1.13773 | 1(Win) |
| jeaiii::to_text | 1715.24 | 0.17477 | 98.5582ms | 974183 | 30 | 2.68836e+07 | 541646 | 1.44324 | 2(Loss) |
| fmt::format_to | 1114.06 | 0.0730692 | 150.506ms | 974183 | 30 | 1.11393e+07 | 833938 | 2.22221 | 3(Loss) |
| std::to_chars | 918.323 | 0.130308 | 181.764ms | 974183 | 30 | 5.21383e+07 | 1.01169e+06 | 2.69565 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2672.56 | 0.317597 | 0.143152ms | 1930 | 30 | 143.528 | 688.7 | 0.875648 | 1(Win) |
| jeaiii::to_text | 1713.4 | 0.0787977 | 0.209159ms | 1930 | 30 | 21.4954 | 1074.23 | 1.3934 | 2(Loss) |
| fmt::format_to | 1051.61 | 0.0445039 | 0.330819ms | 1930 | 30 | 18.2023 | 1750.27 | 2.30003 | 3(Loss) |
| std::to_chars | 910.733 | 0.0367532 | 0.380063ms | 1930 | 30 | 16.5517 | 2021 | 2.66826 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2973.92 | 0.0265709 | 1.17825ms | 19401 | 30 | 81.9828 | 6221.5 | 0.827267 | 1(Win) |
| jeaiii::to_text | 1758.56 | 0.0266335 | 4.50477ms | 19401 | 30 | 235.564 | 10521.2 | 1.40286 | 2(Loss) |
| fmt::format_to | 1075.96 | 0.0273733 | 3.14772ms | 19401 | 30 | 664.714 | 17196.1 | 2.29597 | 3(Loss) |
| std::to_chars | 908.048 | 1.33355 | 3.67636ms | 19401 | 30 | 2.21498e+06 | 20375.8 | 2.7211 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2943.26 | 0.645983 | 11.5014ms | 193741 | 30 | 4.93344e+06 | 62775.9 | 0.840623 | 1(Win) |
| jeaiii::to_text | 1757.19 | 0.515256 | 19.1137ms | 193741 | 30 | 8.80586e+06 | 105148 | 1.4083 | 2(Loss) |
| fmt::format_to | 1047.88 | 0.28521 | 32.1309ms | 193741 | 30 | 7.58696e+06 | 176323 | 2.36218 | 3(Loss) |
| std::to_chars | 815.324 | 0.275538 | 41.333ms | 193741 | 30 | 1.16968e+07 | 226616 | 3.03267 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 1645.21 | 0.138955 | 202.92ms | 1937892 | 30 | 7.30951e+07 | 1.12333e+06 | 1.50476 | 1(Win) |
| jeaiii::to_text | 1410 | 0.0759554 | 236.588ms | 1937892 | 30 | 2.97344e+07 | 1.31072e+06 | 1.7558 | 2(Loss) |
| fmt::format_to | 921.583 | 0.0315195 | 361.41ms | 1937892 | 30 | 1.19859e+07 | 2.00537e+06 | 2.68634 | 3(Loss) |
| std::to_chars | 723.972 | 0.107376 | 458.678ms | 1937892 | 30 | 2.25398e+08 | 2.55275e+06 | 3.4196 | 4(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2669.27 | 0.133579 | 0.146176ms | 1992 | 30 | 27.1138 | 711.7 | 0.876673 | 1(Win) |
| jeaiii::to_text | 1668.86 | 0.0757375 | 0.219656ms | 1992 | 30 | 22.2989 | 1138.33 | 1.43574 | 2(Loss) |
| fmt::format_to | 1110.15 | 0.0364977 | 0.387233ms | 1992 | 30 | 11.7023 | 1711.23 | 2.18146 | 3(Loss) |
| std::to_chars | 915.219 | 0.0394139 | 0.408634ms | 1992 | 30 | 20.0793 | 2075.7 | 2.65525 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3042.86 | 0.0450126 | 1.1749ms | 19883 | 30 | 236.041 | 6231.6 | 0.80852 | 1(Win) |
| jeaiii::to_text | 1716.99 | 0.0359674 | 2.0359ms | 19883 | 30 | 473.333 | 11043.7 | 1.4368 | 2(Loss) |
| fmt::format_to | 1126.02 | 0.0187412 | 3.09097ms | 19883 | 30 | 298.806 | 16839.8 | 2.19367 | 3(Loss) |
| std::to_chars | 897.138 | 1.15592 | 3.83489ms | 19883 | 30 | 1.7907e+06 | 21136 | 2.75448 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3002.93 | 0.629307 | 11.4538ms | 198779 | 30 | 4.73474e+06 | 63128.5 | 0.823769 | 1(Win) |
| jeaiii::to_text | 1710.48 | 0.442344 | 20.0982ms | 198779 | 30 | 7.21018e+06 | 110829 | 1.44682 | 2(Loss) |
| fmt::format_to | 1078.6 | 0.326057 | 31.7394ms | 198779 | 30 | 9.85204e+06 | 175755 | 2.29485 | 3(Loss) |
| std::to_chars | 885.405 | 0.611786 | 38.4323ms | 198779 | 30 | 5.14727e+07 | 214106 | 2.79565 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2389.3 | 0.115799 | 143.294ms | 1987726 | 30 | 2.53223e+07 | 793390 | 1.03608 | 1(Win) |
| jeaiii::to_text | 1600.51 | 0.0921876 | 213.502ms | 1987726 | 30 | 3.57653e+07 | 1.1844e+06 | 1.54681 | 2(Loss) |
| fmt::format_to | 1034.62 | 0.101057 | 329.836ms | 1987726 | 30 | 1.0285e+08 | 1.8322e+06 | 2.39273 | 3(Loss) |
| std::to_chars | 873.315 | 0.2072 | 390.225ms | 1987726 | 30 | 6.06837e+08 | 2.17063e+06 | 2.83481 | 4(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2702.16 | 0.156548 | 0.138235ms | 1888 | 30 | 32.6437 | 666.333 | 0.866208 | 1(Win) |
| jeaiii::to_text | 1724.98 | 0.075394 | 0.224012ms | 1888 | 30 | 18.5793 | 1043.8 | 1.38492 | 2(Loss) |
| fmt::format_to | 1007.03 | 0.0533286 | 0.336979ms | 1888 | 30 | 27.2747 | 1787.97 | 2.40583 | 3(Loss) |
| std::to_chars | 886.818 | 0.0404454 | 0.399731ms | 1888 | 30 | 20.2299 | 2030.33 | 2.74138 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2930.22 | 0.0395122 | 2.66641ms | 18881 | 30 | 176.861 | 6145.03 | 0.839355 | 1(Win) |
| jeaiii::to_text | 1759.78 | 0.0325953 | 4.37134ms | 18881 | 30 | 333.706 | 10232.1 | 1.40188 | 2(Loss) |
| fmt::format_to | 1016.34 | 0.0378602 | 3.24519ms | 18881 | 30 | 1349.77 | 17716.9 | 2.43067 | 3(Loss) |
| std::to_chars | 871.516 | 1.15832 | 3.73565ms | 18881 | 30 | 1.71822e+06 | 20660.9 | 2.83575 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2903.24 | 0.655743 | 11.2945ms | 188862 | 30 | 4.96492e+06 | 62038.6 | 0.852088 | 1(Win) |
| jeaiii::to_text | 1763.45 | 0.54567 | 18.4136ms | 188862 | 30 | 9.31847e+06 | 102137 | 1.40328 | 2(Loss) |
| fmt::format_to | 990.512 | 0.339036 | 32.8441ms | 188862 | 30 | 1.14021e+07 | 181838 | 2.49904 | 3(Loss) |
| std::to_chars | 864.911 | 0.261898 | 37.5744ms | 188862 | 30 | 8.9234e+06 | 208244 | 2.86187 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2554.64 | 0.146807 | 127.138ms | 1888031 | 30 | 3.21198e+07 | 704823 | 0.969023 | 1(Win) |
| jeaiii::to_text | 1710.39 | 0.0627074 | 189.971ms | 1888031 | 30 | 1.30734e+07 | 1.05272e+06 | 1.44735 | 2(Loss) |
| fmt::format_to | 936.868 | 0.0813078 | 346.047ms | 1888031 | 30 | 7.32567e+07 | 1.9219e+06 | 2.64251 | 3(Loss) |
| std::to_chars | 848.104 | 0.210351 | 381.267ms | 1888031 | 30 | 5.98315e+08 | 2.12305e+06 | 2.91899 | 4(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3061.31 | 0.183524 | 0.125425ms | 1932 | 30 | 36.6023 | 601.867 | 0.754969 | 1(Win) |
| jeaiii::to_text | 1918.47 | 0.0612655 | 0.210391ms | 1932 | 30 | 10.3862 | 960.4 | 1.23899 | 2(Loss) |
| fmt::format_to | 1120.01 | 0.0508949 | 0.311621ms | 1932 | 30 | 21.0299 | 1645.07 | 2.16039 | 3(Loss) |
| std::to_chars | 911.376 | 0.0312239 | 0.381205ms | 1932 | 30 | 11.954 | 2021.67 | 2.66639 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3281.32 | 0.0355901 | 2.45136ms | 19386 | 30 | 120.631 | 5634.3 | 0.749761 | 1(Win) |
| jeaiii::to_text | 1967.44 | 0.0256234 | 1.72234ms | 19386 | 30 | 173.926 | 9396.93 | 1.25355 | 2(Loss) |
| fmt::format_to | 1118.67 | 1.54832 | 3.00133ms | 19386 | 30 | 1.96435e+06 | 16526.8 | 2.20829 | 3(Loss) |
| std::to_chars | 925.14 | 0.0130178 | 3.64669ms | 19386 | 30 | 203.03 | 19983.9 | 2.67095 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 3247.46 | 0.814954 | 10.3573ms | 193986 | 30 | 6.46607e+06 | 56967.4 | 0.761824 | 1(Win) |
| jeaiii::to_text | 1964.6 | 0.475361 | 17.0121ms | 193986 | 30 | 6.0112e+06 | 94166.5 | 1.25965 | 2(Loss) |
| fmt::format_to | 1132.03 | 0.316118 | 29.8515ms | 193986 | 30 | 8.0066e+06 | 163423 | 2.18662 | 3(Loss) |
| std::to_chars | 809.314 | 0.252614 | 41.7048ms | 193986 | 30 | 1.00033e+07 | 228588 | 3.05862 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::to_chars | 2084.44 | 0.0751158 | 160.62ms | 1939815 | 30 | 1.3333e+07 | 887507 | 1.18769 | 1(Win) |
| jeaiii::to_text | 1623.18 | 0.379922 | 204.726ms | 1939815 | 30 | 5.6247e+08 | 1.13971e+06 | 1.52507 | 2(Loss) |
| fmt::format_to | 769.278 | 0.114496 | 432.81ms | 1939815 | 30 | 2.27434e+08 | 2.40479e+06 | 3.21823 | 3(Loss) |
| std::to_chars | 699.587 | 0.108396 | 477.327ms | 1939815 | 30 | 2.46481e+08 | 2.64435e+06 | 3.53877 | 4(Loss) |
