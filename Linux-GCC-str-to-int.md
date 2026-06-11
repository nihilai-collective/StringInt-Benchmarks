# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 522.943 | 0.0809637 | 0.061525ms | 100 | 30 | 0.654023 | 182.367 | 1(Win) |
| std::from_chars | 411.303 | 0.383379 | 0.071663ms | 100 | 30 | 23.7057 | 231.867 | 2(Loss) |
| strtoll/strtoull | 138.18 | 0.0241488 | 0.192746ms | 100 | 30 | 0.833333 | 690.167 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 761.457 | 0.0698259 | 0.29241ms | 1000 | 30 | 22.9437 | 1252.43 | 1(Win) |
| std::from_chars | 530.035 | 0.0325204 | 0.411049ms | 1000 | 30 | 10.2713 | 1799.27 | 2(Loss) |
| strtoll/strtoull | 157.502 | 1.13241 | 1.35326ms | 1000 | 30 | 141044 | 6055 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 270.662 | 2.13458 | 6.29963ms | 10000 | 30 | 1.69703e+07 | 35234.8 | 1(Win) |
| std::from_chars | 194.889 | 2.20893 | 26.3166ms | 10000 | 30 | 3.50518e+07 | 48934.3 | 2(Loss) |
| strtoll/strtoull | 98.5571 | 1.4127 | 19.0261ms | 10000 | 30 | 5.60594e+07 | 96763.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 169.618 | 1.15296 | 104.867ms | 100000 | 30 | 1.26068e+09 | 562248 | 1(Win) |
| std::from_chars | 152.153 | 2.34671 | 113.378ms | 100000 | 30 | 6.49057e+09 | 626788 | 2(Loss) |
| strtoll/strtoull | 89.7756 | 1.70105 | 199.859ms | 100000 | 30 | 9.79582e+09 | 1.06229e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 467.564 | 0.0684667 | 0.066549ms | 100 | 30 | 0.585057 | 203.967 | 1(Win) |
| std::from_chars | 387.935 | 1.34137 | 0.082935ms | 100 | 30 | 326.213 | 245.833 | 2(Loss) |
| strtoll/strtoull | 155.22 | 0.749145 | 0.153917ms | 100 | 30 | 635.559 | 614.4 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 513.686 | 0.41325 | 0.401272ms | 1000 | 30 | 1765.84 | 1856.53 | 1(Win) |
| vn::from_chars | 319.129 | 0.139949 | 1.37848ms | 1000 | 30 | 524.723 | 2988.37 | 2(Loss) |
| strtoll/strtoull | 133.726 | 1.32234 | 1.95746ms | 1000 | 30 | 266791 | 7131.53 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 483.662 | 1.85216 | 9.37242ms | 10000 | 30 | 4.00126e+06 | 19717.8 | 1(Win) |
| std::from_chars | 291.531 | 0.649993 | 6.00206ms | 10000 | 30 | 1.35634e+06 | 32712.6 | 2(Loss) |
| strtoll/strtoull | 131.182 | 0.855382 | 15.8415ms | 10000 | 30 | 1.1601e+07 | 72698.7 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 248.904 | 1.76544 | 71.1308ms | 100000 | 30 | 1.37266e+09 | 383149 | 1(Win) |
| strtoll/strtoull | 114.192 | 1.94606 | 743.769ms | 100000 | 48 | 1.2679e+10 | 835153 | 2(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 619.001 | 0.0980831 | 0.056239ms | 100 | 30 | 0.685057 | 154.067 | 1(Win) |
| std::from_chars | 426.128 | 0.103634 | 0.080416ms | 100 | 30 | 1.61379 | 223.8 | 2(Loss) |
| strtoll/strtoull | 132.608 | 0.0241149 | 0.151749ms | 100 | 30 | 0.902299 | 719.167 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 781.935 | 0.0715743 | 0.257644ms | 1000 | 30 | 22.8609 | 1219.63 | 1(Win) |
| std::from_chars | 607.81 | 0.0487476 | 0.351902ms | 1000 | 30 | 17.5506 | 1569.03 | 2(Loss) |
| strtoll/strtoull | 143.407 | 0.0467013 | 1.24171ms | 1000 | 30 | 289.361 | 6650.13 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 978.673 | 0.0711793 | 5.74359ms | 10000 | 30 | 1443.29 | 9744.57 | 1(Win) |
| std::from_chars | 303.644 | 1.42119 | 6.09532ms | 10000 | 30 | 5.97716e+06 | 31407.7 | 2(Loss) |
| strtoll/strtoull | 136.579 | 1.10193 | 14.2399ms | 10000 | 30 | 1.77607e+07 | 69825.7 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 307.406 | 1.94086 | 56.3919ms | 100000 | 30 | 1.08764e+09 | 310233 | 1(Win) |
| std::from_chars | 267.685 | 0.252002 | 68.7213ms | 100000 | 30 | 2.41814e+07 | 356268 | 2(Loss) |
| strtoll/strtoull | 124.676 | 2.12137 | 141.36ms | 100000 | 30 | 7.89925e+09 | 764921 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 575.774 | 0.0980938 | 0.060205ms | 100 | 30 | 0.791954 | 165.633 | 1(Win) |
| std::from_chars | 366.563 | 0.0613534 | 0.072959ms | 100 | 30 | 0.764368 | 260.167 | 2(Loss) |
| strtoll/strtoull | 133.443 | 0.311248 | 0.153143ms | 100 | 30 | 148.437 | 714.667 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 870.988 | 0.027323 | 0.262455ms | 1000 | 30 | 2.68506 | 1094.93 | 1(Win) |
| std::from_chars | 441.039 | 0.134352 | 0.464671ms | 1000 | 30 | 253.195 | 2162.33 | 2(Loss) |
| strtoll/strtoull | 152.39 | 0.155761 | 1.26178ms | 1000 | 30 | 2850.51 | 6258.1 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 701.271 | 1.61556 | 15.8835ms | 10000 | 48 | 2.31696e+06 | 13599.2 | 1(Win) |
| std::from_chars | 239.234 | 0.387935 | 7.26726ms | 10000 | 30 | 717455 | 39863.7 | 2(Loss) |
| strtoll/strtoull | 118.24 | 0.340301 | 79.6733ms | 10000 | 48 | 3.61609e+06 | 80656 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 253.309 | 1.11548 | 170.081ms | 100000 | 30 | 5.29103e+08 | 376486 | 1(Win) |
| std::from_chars | 199.137 | 2.43971 | 190.13ms | 100000 | 30 | 4.09539e+09 | 478905 | 2(Loss) |
| strtoll/strtoull | 108.27 | 2.10047 | 163.032ms | 100000 | 30 | 1.02692e+10 | 880832 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 522.561 | 0.113761 | 0.087306ms | 200 | 30 | 5.17241 | 365 | 1(Win) |
| vn::from_chars | 449.317 | 0.0915853 | 0.102992ms | 200 | 30 | 4.53448 | 424.5 | 2(Loss) |
| strtoll/strtoull | 257.136 | 0.0990214 | 0.236765ms | 200 | 30 | 16.1851 | 741.767 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 670.736 | 0.186579 | 1.22952ms | 2000 | 30 | 844.506 | 2843.67 | 1(Win) |
| vn::from_chars | 608.579 | 0.0494149 | 0.706604ms | 2000 | 30 | 71.9552 | 3134.1 | 2(Loss) |
| strtoll/strtoull | 128.244 | 0.829203 | 1.9298ms | 2000 | 30 | 456277 | 14872.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 371.232 | 0.680815 | 10.6528ms | 20000 | 30 | 3.6707e+06 | 51378.9 | 1(Win) |
| std::from_chars | 296.152 | 0.694847 | 11.7089ms | 20000 | 30 | 6.008e+06 | 64404.4 | 2(Loss) |
| strtoll/strtoull | 162.531 | 1.36448 | 22.1128ms | 20000 | 30 | 7.69209e+07 | 117353 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 265.149 | 2.1869 | 131.536ms | 200000 | 30 | 7.42439e+09 | 719350 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 253.573 | 1.55958 | 140.938ms | 200000 | 30 | 4.12846e+09 | 752188 | 1(Tie) |
| strtoll/strtoull | 148.856 | 2.0974 | 234.618ms | 200000 | 30 | 2.16677e+10 | 1.28134e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 535.722 | 0.0824487 | 0.129573ms | 200 | 30 | 2.58506 | 356.033 | 1(Win) |
| std::from_chars | 522.752 | 0.0917348 | 0.096307ms | 200 | 30 | 3.36092 | 364.867 | 2(Loss) |
| strtoll/strtoull | 205.452 | 0.172955 | 0.227475ms | 200 | 30 | 77.3437 | 928.367 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 618.747 | 1.41208 | 0.716443ms | 2000 | 30 | 56842.7 | 3082.6 | 1(Win) |
| vn::from_chars | 575.346 | 0.0492318 | 0.694833ms | 2000 | 30 | 79.9126 | 3315.13 | 2(Loss) |
| strtoll/strtoull | 219.264 | 0.172008 | 8.31461ms | 2000 | 48 | 10746.3 | 8698.85 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 535.053 | 1.68708 | 15.6389ms | 20000 | 30 | 1.08507e+07 | 35647.8 | 1(Win) |
| std::from_chars | 414.098 | 1.41509 | 20.614ms | 20000 | 30 | 1.27452e+07 | 46060.3 | 2(Loss) |
| strtoll/strtoull | 198.093 | 0.430964 | 18.2693ms | 20000 | 30 | 5.16564e+06 | 96285.3 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 468.296 | 0.530665 | 184.013ms | 200000 | 30 | 1.40146e+08 | 407295 | 1(Win) |
| std::from_chars | 381.365 | 2.21483 | 90.0774ms | 200000 | 30 | 3.68113e+09 | 500137 | 2(Loss) |
| strtoll/strtoull | 186.589 | 2.02348 | 185.981ms | 200000 | 30 | 1.28354e+10 | 1.02222e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 513.925 | 0.304276 | 0.100762ms | 200 | 30 | 38.2575 | 371.133 | 1(Win) |
| vn::from_chars | 478.993 | 0.097374 | 0.09693ms | 200 | 30 | 4.51034 | 398.2 | 2(Loss) |
| strtoll/strtoull | 251.53 | 0.0874181 | 0.384386ms | 200 | 30 | 13.1828 | 758.3 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 696.291 | 0.0526594 | 0.580847ms | 2000 | 30 | 62.4241 | 2739.3 | 1(Win) |
| vn::from_chars | 636.037 | 0.0440018 | 0.585092ms | 2000 | 30 | 52.2345 | 2998.8 | 2(Loss) |
| strtoll/strtoull | 233.432 | 0.196397 | 3.73558ms | 2000 | 30 | 7725.61 | 8170.9 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 645.98 | 0.67938 | 6.17164ms | 20000 | 30 | 1.20717e+06 | 29526.4 | 1(Win) |
| std::from_chars | 419.908 | 1.98403 | 9.03932ms | 20000 | 30 | 2.43652e+07 | 45423 | 2(Loss) |
| strtoll/strtoull | 199.052 | 0.6229 | 18.4983ms | 20000 | 30 | 1.06878e+07 | 95821.9 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 490.897 | 0.61762 | 73.7925ms | 200000 | 30 | 1.7276e+08 | 388544 | 1(Win) |
| std::from_chars | 385.772 | 2.14451 | 89.4599ms | 200000 | 30 | 3.37269e+09 | 494424 | 2(Loss) |
| strtoll/strtoull | 196.051 | 1.87312 | 423.007ms | 200000 | 30 | 9.96261e+09 | 972882 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 486.114 | 0.985075 | 0.10138ms | 200 | 30 | 448.171 | 392.367 | 1(Win) |
| vn::from_chars | 396.181 | 0.118961 | 0.112735ms | 200 | 30 | 9.84023 | 481.433 | 2(Loss) |
| strtoll/strtoull | 227.891 | 2.33887 | 0.862961ms | 200 | 48 | 18393.4 | 836.958 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 603.375 | 0.467088 | 0.652051ms | 2000 | 30 | 6540.4 | 3161.13 | 1(Win) |
| vn::from_chars | 480.368 | 0.124754 | 0.782179ms | 2000 | 30 | 736.11 | 3970.6 | 2(Loss) |
| strtoll/strtoull | 227.494 | 0.402836 | 7.86768ms | 2000 | 48 | 54754.6 | 8384.19 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 546.074 | 0.909294 | 16.1004ms | 20000 | 30 | 3.02612e+06 | 34928.4 | 1(Win) |
| vn::from_chars | 526.944 | 0.191952 | 7.45142ms | 20000 | 30 | 144823 | 36196.4 | 2(Loss) |
| strtoll/strtoull | 216.329 | 0.813053 | 16.6959ms | 20000 | 30 | 1.54166e+07 | 88168.7 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 526.858 | 0.472413 | 68.3407ms | 200000 | 30 | 8.77482e+07 | 362023 | 1(Win) |
| strtoll/strtoull | 203.508 | 1.97901 | 171.799ms | 200000 | 30 | 1.03208e+10 | 937237 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 913.773 | 0.187574 | 0.107602ms | 400 | 30 | 18.3954 | 417.467 | 1(Win) |
| std::from_chars | 537.029 | 0.153969 | 0.150467ms | 400 | 30 | 35.8851 | 710.333 | 2(Loss) |
| strtoll/strtoull | 377.046 | 0.375639 | 0.221759ms | 400 | 30 | 433.306 | 1011.73 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1159.14 | 0.168809 | 0.648737ms | 4000 | 30 | 925.895 | 3290.97 | 1(Win) |
| std::from_chars | 788.785 | 0.78549 | 0.985486ms | 4000 | 30 | 43291.8 | 4836.17 | 2(Loss) |
| strtoll/strtoull | 350.745 | 0.470854 | 4.97578ms | 4000 | 30 | 78674.2 | 10876 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 638.815 | 1.35429 | 12.5885ms | 40000 | 30 | 1.96208e+07 | 59715.2 | 1(Win) |
| std::from_chars | 388.32 | 1.44964 | 18.5474ms | 40000 | 30 | 6.08394e+07 | 98235.9 | 2(Loss) |
| strtoll/strtoull | 245.667 | 1.71525 | 29.2763ms | 40000 | 30 | 2.12817e+08 | 155279 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 420.912 | 1.76056 | 167.346ms | 400000 | 30 | 7.63764e+09 | 906293 | 1(Win) |
| std::from_chars | 344.548 | 1.67981 | 202.897ms | 400000 | 30 | 1.03767e+10 | 1.10716e+06 | 2(Loss) |
| strtoll/strtoull | 229.318 | 2.18974 | 715.321ms | 400000 | 30 | 3.9806e+10 | 1.66349e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 927.022 | 0.156214 | 0.104228ms | 400 | 30 | 12.3966 | 411.5 | 1(Win) |
| std::from_chars | 702.566 | 0.0932368 | 0.140699ms | 400 | 30 | 7.68851 | 542.967 | 2(Loss) |
| strtoll/strtoull | 390.131 | 0.28136 | 0.230652ms | 400 | 30 | 227.062 | 977.8 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1096.73 | 0.080445 | 0.712947ms | 4000 | 30 | 234.875 | 3478.23 | 1(Win) |
| std::from_chars | 756.214 | 0.0977359 | 1.00026ms | 4000 | 30 | 729.223 | 5044.47 | 2(Loss) |
| strtoll/strtoull | 327.487 | 0.150621 | 2.42335ms | 4000 | 30 | 9234.8 | 11648.4 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 706.18 | 1.2633 | 24.6984ms | 40000 | 30 | 1.39709e+07 | 54018.7 | 1(Win) |
| std::from_chars | 516.511 | 0.639211 | 74.8006ms | 40000 | 48 | 1.06977e+07 | 73855.2 | 2(Loss) |
| strtoll/strtoull | 286.965 | 1.65368 | 29.4112ms | 40000 | 30 | 1.44972e+08 | 132932 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 541.178 | 1.86035 | 126.651ms | 400000 | 30 | 5.15884e+09 | 704887 | 1(Win) |
| strtoll/strtoull | 266.477 | 1.5421 | 1310.13ms | 400000 | 48 | 2.3392e+10 | 1.43153e+06 | 2(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 959.914 | 0.187532 | 0.107535ms | 400 | 30 | 16.6621 | 397.4 | 1(Win) |
| std::from_chars | 530.753 | 0.164616 | 0.209492ms | 400 | 30 | 41.9954 | 718.733 | 2(Loss) |
| strtoll/strtoull | 341.085 | 0.207185 | 0.573859ms | 400 | 30 | 161.076 | 1118.4 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1173.12 | 0.0440293 | 0.774552ms | 4000 | 30 | 61.4954 | 3251.77 | 1(Win) |
| std::from_chars | 787.125 | 0.810343 | 0.987731ms | 4000 | 30 | 46269.2 | 4846.37 | 2(Loss) |
| strtoll/strtoull | 334.349 | 0.72838 | 13.2432ms | 4000 | 48 | 331494 | 11409.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 935.274 | 1.61102 | 7.59036ms | 40000 | 30 | 1.29529e+07 | 40786.9 | 1(Win) |
| std::from_chars | 528.71 | 1.41645 | 12.9617ms | 40000 | 30 | 3.13335e+07 | 72151 | 2(Loss) |
| strtoll/strtoull | 312.911 | 1.05952 | 59.2513ms | 40000 | 30 | 5.0052e+07 | 121910 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 547.281 | 1.91609 | 288.974ms | 400000 | 30 | 5.35122e+09 | 697027 | 1(Win) |
| std::from_chars | 499.131 | 2.16362 | 141.745ms | 400000 | 30 | 8.20305e+09 | 764268 | 2(Loss) |
| strtoll/strtoull | 248.338 | 2.47487 | 648.932ms | 400000 | 30 | 4.3357e+10 | 1.53609e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 855.377 | 0.245041 | 0.104547ms | 400 | 30 | 35.8264 | 445.967 | 1(Win) |
| std::from_chars | 591.793 | 0.140264 | 0.245615ms | 400 | 30 | 24.5241 | 644.6 | 2(Loss) |
| strtoll/strtoull | 260.401 | 0.268918 | 0.280545ms | 400 | 30 | 465.582 | 1464.93 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1183.59 | 0.0632374 | 0.649909ms | 4000 | 30 | 124.621 | 3223 | 1(Win) |
| std::from_chars | 596.929 | 0.148743 | 1.13109ms | 4000 | 30 | 2710.6 | 6390.53 | 2(Loss) |
| strtoll/strtoull | 296.218 | 0.0851504 | 3.01033ms | 4000 | 30 | 3607.38 | 12878 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1133.95 | 0.833345 | 6.2482ms | 40000 | 30 | 2.35776e+06 | 33640.7 | 1(Win) |
| std::from_chars | 663.077 | 0.567542 | 10.4876ms | 40000 | 30 | 3.19823e+06 | 57530.2 | 2(Loss) |
| strtoll/strtoull | 316.903 | 0.671287 | 23.4833ms | 40000 | 30 | 1.95887e+07 | 120374 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 772.141 | 2.48447 | 90.4563ms | 400000 | 30 | 4.51978e+09 | 494042 | 1(Win) |
| std::from_chars | 596.811 | 2.21957 | 116.602ms | 400000 | 30 | 6.03819e+09 | 639180 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 954.818 | 0.031389 | 0.808596ms | 800 | 48 | 3.0195 | 799.042 | 1(Win) |
| std::from_chars | 780.049 | 0.0886373 | 0.202554ms | 800 | 30 | 22.5471 | 978.067 | 2(Loss) |
| strtoll/strtoull | 346.198 | 0.0787059 | 0.43901ms | 800 | 30 | 90.254 | 2203.77 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1011.61 | 0.302588 | 8.42551ms | 8000 | 48 | 24997.5 | 7541.81 | 1(Win) |
| std::from_chars | 779.791 | 0.162037 | 1.89143ms | 8000 | 30 | 7540.02 | 9783.9 | 2(Loss) |
| strtoll/strtoull | 378.691 | 2.28152 | 19.6622ms | 8000 | 48 | 1.01415e+07 | 20146.8 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 818.595 | 0.921238 | 17.9947ms | 80000 | 30 | 2.2116e+07 | 93201.1 | 1(Win) |
| std::from_chars | 635.103 | 1.60104 | 52.9978ms | 80000 | 30 | 1.10973e+08 | 120129 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 731.782 | 2.0769 | 944.999ms | 800000 | 48 | 2.25055e+10 | 1.04258e+06 | 1(Win) |
| std::from_chars | 595.008 | 2.38124 | 541.269ms | 800000 | 30 | 2.7968e+10 | 1.28223e+06 | 2(Loss) |
| strtoll/strtoull | 337.979 | 2.40048 | 1949.98ms | 800000 | 48 | 1.40941e+11 | 2.25735e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 814.497 | 0.0332318 | 0.187248ms | 800 | 30 | 2.9069 | 936.7 | 1(Win) |
| std::from_chars | 633.548 | 0.0426378 | 0.273968ms | 800 | 30 | 7.9092 | 1204.23 | 2(Loss) |
| strtoll/strtoull | 330.515 | 0.0546136 | 0.452605ms | 800 | 30 | 47.6782 | 2308.33 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1064.41 | 0.104431 | 1.39615ms | 8000 | 30 | 1680.91 | 7167.7 | 1(Win) |
| std::from_chars | 832.322 | 0.461448 | 1.75298ms | 8000 | 30 | 53674.1 | 9166.4 | 2(Loss) |
| strtoll/strtoull | 332.76 | 0.386303 | 9.38191ms | 8000 | 30 | 235339 | 22927.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 989.583 | 2.14476 | 14.683ms | 80000 | 30 | 8.20261e+07 | 77097 | 1(Win) |
| std::from_chars | 820.611 | 0.535547 | 17.6507ms | 80000 | 30 | 7.4374e+06 | 92972.1 | 2(Loss) |
| strtoll/strtoull | 330.856 | 0.918728 | 42.3041ms | 80000 | 30 | 1.34647e+08 | 230596 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 932 | 1.38533 | 764.838ms | 800000 | 48 | 6.17297e+09 | 818604 | 1(Win) |
| std::from_chars | 795.697 | 1.88938 | 176.846ms | 800000 | 30 | 9.84569e+09 | 958831 | 2(Loss) |
| strtoll/strtoull | 320.942 | 1.9245 | 997.877ms | 800000 | 30 | 6.27893e+10 | 2.37719e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1031.74 | 0.0533627 | 0.183094ms | 800 | 30 | 4.67126 | 739.467 | 1(Win) |
| std::from_chars | 757.962 | 0.104108 | 0.205983ms | 800 | 30 | 32.9437 | 1006.57 | 2(Loss) |
| strtoll/strtoull | 361.132 | 0.0340791 | 0.429499ms | 800 | 30 | 15.5506 | 2112.63 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1041.54 | 0.0286087 | 3.40434ms | 8000 | 30 | 131.748 | 7325.1 | 1(Win) |
| std::from_chars | 811.41 | 1.79046 | 1.79731ms | 8000 | 30 | 850256 | 9402.63 | 2(Loss) |
| strtoll/strtoull | 501.102 | 2.48308 | 16.0345ms | 8000 | 48 | 6.86043e+06 | 15225.2 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1016.64 | 1.39029 | 14.3899ms | 80000 | 30 | 3.26572e+07 | 75045.2 | 1(Win) |
| std::from_chars | 799.565 | 0.46013 | 41.349ms | 80000 | 30 | 5.78301e+06 | 95419.3 | 2(Loss) |
| strtoll/strtoull | 520.035 | 0.89089 | 73.0149ms | 80000 | 30 | 5.12489e+07 | 146709 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 930.733 | 2.11694 | 148.325ms | 800000 | 30 | 9.03379e+09 | 819719 | 1(Win) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 876.539 | 0.063432 | 0.466214ms | 800 | 30 | 9.14483 | 870.4 | 1(Win) |
| vn::from_chars | 623.979 | 0.0248472 | 0.421792ms | 800 | 30 | 2.76897 | 1222.7 | 2(Loss) |
| strtoll/strtoull | 207.774 | 0.19382 | 0.724604ms | 800 | 30 | 1519.55 | 3671.97 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1043.6 | 0.160032 | 1.39797ms | 8000 | 30 | 4106.3 | 7310.67 | 1(Win) |
| std::from_chars | 757.679 | 0.0885661 | 2.60155ms | 8000 | 30 | 2385.98 | 10069.4 | 2(Loss) |
| strtoll/strtoull | 341.123 | 1.7682 | 4.18442ms | 8000 | 30 | 4.69182e+06 | 22365.5 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 895.617 | 2.1272 | 16.2078ms | 80000 | 30 | 9.85085e+07 | 85185.9 | 1(Win) |
| std::from_chars | 662.837 | 0.590981 | 21.7956ms | 80000 | 30 | 1.38815e+07 | 115102 | 2(Loss) |
| strtoll/strtoull | 332.932 | 1.9584 | 42.9606ms | 80000 | 30 | 6.04214e+08 | 229158 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 747.797 | 2.46831 | 183.764ms | 800000 | 30 | 1.90254e+10 | 1.02025e+06 | 1(Win) |
| std::from_chars | 643.205 | 1.93299 | 218.402ms | 800000 | 30 | 1.57711e+10 | 1.18615e+06 | 2(Loss) |
| strtoll/strtoull | 325.103 | 2.0637 | 986.942ms | 800000 | 30 | 7.03646e+10 | 2.34676e+06 | 3(Loss) |
