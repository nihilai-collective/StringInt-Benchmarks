# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 174.623 | 1.57858 | 1.25901ms | 1000 | 30 | 222973 | 5461.33 | 1(Win) |
| std::from_chars | 83.6517 | 0.789209 | 3.94419ms | 1000 | 30 | 242860 | 11400.5 | 2(Loss) |
| strtoll/strtoull | 43.2335 | 0.229987 | 9.40186ms | 1000 | 30 | 77212 | 22058.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 66.7216 | 0.175009 | 26.6109ms | 10000 | 30 | 1.87719e+06 | 142933 | 1(Win) |
| vn::from_chars | 58.6752 | 0.163606 | 29.387ms | 10000 | 30 | 2.12133e+06 | 162534 | 2(Loss) |
| strtoll/strtoull | 37.7742 | 0.106115 | 45.5278ms | 10000 | 30 | 2.1532e+06 | 252467 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 63.1419 | 0.103496 | 275.5ms | 100000 | 30 | 7.33042e+07 | 1.51037e+06 | 1(Win) |
| vn::from_chars | 53.8768 | 0.259422 | 317.673ms | 100000 | 30 | 6.32607e+08 | 1.7701e+06 | 2(Loss) |
| strtoll/strtoull | 36.8608 | 0.138671 | 466.294ms | 100000 | 30 | 3.86158e+08 | 2.58723e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 47.7601 | 0.952284 | 1.0921ms | 100 | 30 | 10847.3 | 1996.8 | 1(Win) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 193.354 | 1.08284 | 0.935936ms | 1000 | 30 | 85573.4 | 4932.27 | 1(Win) |
| std::from_chars | 82.9686 | 0.849928 | 3.20486ms | 1000 | 30 | 286325 | 11494.4 | 2(Loss) |
| strtoll/strtoull | 43.9649 | 0.3835 | 4.032ms | 1000 | 30 | 207606 | 21691.7 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 68.3163 | 0.1664 | 25.484ms | 10000 | 30 | 1.61874e+06 | 139597 | 1(Win) |
| std::from_chars | 66.8134 | 0.176793 | 26.6202ms | 10000 | 30 | 1.91041e+06 | 142737 | 2(Loss) |
| strtoll/strtoull | 42.8408 | 0.145118 | 40.1769ms | 10000 | 30 | 3.13074e+06 | 222609 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 62.577 | 0.368812 | 274.554ms | 100000 | 30 | 9.47767e+08 | 1.524e+06 | 1(Win) |
| vn::from_chars | 60.6649 | 0.0686901 | 283.811ms | 100000 | 30 | 3.49812e+07 | 1.57204e+06 | 2(Loss) |
| strtoll/strtoull | 41.7376 | 0.364504 | 405.713ms | 100000 | 30 | 2.081e+09 | 2.28493e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 47.7601 | 0.952284 | 0.420864ms | 100 | 30 | 10847.3 | 1996.8 | 1(Win) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 185.646 | 1.3289 | 1.94816ms | 1000 | 30 | 139810 | 5137.07 | 1(Win) |
| std::from_chars | 79.657 | 0.302108 | 3.03514ms | 1000 | 30 | 39246.3 | 11972.3 | 2(Loss) |
| strtoll/strtoull | 43.4859 | 0.21916 | 9.29306ms | 1000 | 30 | 69302.4 | 21930.7 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 72.8877 | 0.131116 | 23.914ms | 10000 | 30 | 882928 | 130842 | 1(Win) |
| std::from_chars | 64.8478 | 0.12372 | 27.4181ms | 10000 | 30 | 993134 | 147063 | 2(Loss) |
| strtoll/strtoull | 42.6641 | 0.09747 | 40.297ms | 10000 | 30 | 1.42409e+06 | 223531 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 63.2631 | 0.0369527 | 281.678ms | 100000 | 30 | 9.3092e+06 | 1.50747e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 62.5472 | 0.573865 | 274.283ms | 100000 | 30 | 2.29681e+09 | 1.52473e+06 | 1(Tie) |
| strtoll/strtoull | 42.5533 | 0.158445 | 403.381ms | 100000 | 30 | 3.78277e+08 | 2.24113e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 46.9574 | 1.99837 | 0.395008ms | 100 | 30 | 49415.7 | 2030.93 | 1(Win) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 191.041 | 1.09271 | 0.969984ms | 1000 | 30 | 89264.6 | 4992 | 1(Win) |
| std::from_chars | 79.2053 | 1.8504 | 2.18419ms | 1000 | 30 | 1.48917e+06 | 12040.5 | 2(Loss) |
| strtoll/strtoull | 43.7412 | 0.347419 | 3.9639ms | 1000 | 30 | 172126 | 21802.7 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 71.6127 | 0.168546 | 24.204ms | 10000 | 30 | 1.5114e+06 | 133171 | 1(Win) |
| std::from_chars | 64.5109 | 0.213585 | 27.8899ms | 10000 | 30 | 2.99085e+06 | 147831 | 2(Loss) |
| strtoll/strtoull | 42.7212 | 0.16777 | 40.2701ms | 10000 | 30 | 4.20786e+06 | 223232 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 61.8514 | 0.135514 | 277.498ms | 100000 | 30 | 1.30975e+08 | 1.54188e+06 | 1(Win) |
| vn::from_chars | 58.2292 | 0.21864 | 289.042ms | 100000 | 30 | 3.8468e+08 | 1.63779e+06 | 2(Loss) |
| strtoll/strtoull | 42.6178 | 0.0549774 | 403.335ms | 100000 | 30 | 4.54055e+07 | 2.23774e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 326.78 | 1.30313 | 1.32122ms | 2000 | 30 | 173557 | 5836.8 | 1(Win) |
| std::from_chars | 126.854 | 0.243993 | 2.81011ms | 2000 | 30 | 40376.2 | 15035.7 | 2(Loss) |
| strtoll/strtoull | 71.5485 | 0.318109 | 4.85786ms | 2000 | 30 | 215741 | 26658.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.692 | 0.46798 | 25.0401ms | 20000 | 30 | 1.20753e+07 | 135569 | 1(Win) |
| std::from_chars | 106.972 | 0.132727 | 34.6071ms | 20000 | 30 | 1.68021e+06 | 178304 | 2(Loss) |
| strtoll/strtoull | 68.3477 | 0.114217 | 50.7361ms | 20000 | 30 | 3.04788e+06 | 279066 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 122.386 | 0.105073 | 281.6ms | 200000 | 30 | 8.04451e+07 | 1.55847e+06 | 1(Win) |
| std::from_chars | 103.206 | 0.298273 | 334.161ms | 200000 | 30 | 9.11586e+08 | 1.8481e+06 | 2(Loss) |
| strtoll/strtoull | 67.7679 | 0.158806 | 520.82ms | 200000 | 30 | 5.99329e+08 | 2.81453e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 325.353 | 1.15345 | 1.14202ms | 2000 | 30 | 137174 | 5862.4 | 1(Win) |
| std::from_chars | 128.237 | 0.415497 | 2.81523ms | 2000 | 30 | 114575 | 14873.6 | 2(Loss) |
| strtoll/strtoull | 77.9621 | 0.729949 | 4.45517ms | 2000 | 30 | 956750 | 24465.1 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 158.726 | 0.931729 | 21.8591ms | 20000 | 30 | 3.76068e+07 | 120166 | 1(Win) |
| std::from_chars | 102.894 | 0.360514 | 33.3ms | 20000 | 30 | 1.3398e+07 | 185370 | 2(Loss) |
| strtoll/strtoull | 77.6291 | 0.105936 | 44.7731ms | 20000 | 30 | 2.03244e+06 | 245700 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 138.187 | 0.0810714 | 249.6ms | 200000 | 30 | 3.75649e+07 | 1.38027e+06 | 1(Win) |
| std::from_chars | 104.147 | 0.113537 | 337.056ms | 200000 | 30 | 1.29707e+08 | 1.83141e+06 | 2(Loss) |
| strtoll/strtoull | 77.2519 | 0.174972 | 444.312ms | 200000 | 30 | 5.59889e+08 | 2.469e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 362.265 | 1.65968 | 1.61997ms | 2000 | 30 | 229075 | 5265.07 | 1(Win) |
| std::from_chars | 122.007 | 0.81191 | 2.94016ms | 2000 | 30 | 483309 | 15633.1 | 2(Loss) |
| strtoll/strtoull | 78.8421 | 0.339406 | 5.11386ms | 2000 | 30 | 202258 | 24192 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 159.838 | 0.293778 | 21.5529ms | 20000 | 30 | 3.68689e+06 | 119330 | 1(Win) |
| std::from_chars | 108.23 | 0.135341 | 32.992ms | 20000 | 30 | 1.70665e+06 | 176230 | 2(Loss) |
| strtoll/strtoull | 77.2001 | 0.585011 | 44.319ms | 20000 | 30 | 6.26721e+07 | 247066 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 150.122 | 0.117235 | 230.243ms | 200000 | 30 | 6.65596e+07 | 1.27054e+06 | 1(Win) |
| std::from_chars | 104.107 | 0.0798407 | 335.315ms | 200000 | 30 | 6.41906e+07 | 1.83211e+06 | 2(Loss) |
| strtoll/strtoull | 77.1071 | 0.508674 | 443.214ms | 200000 | 30 | 4.74975e+09 | 2.47363e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 364.035 | 1.47668 | 1.37702ms | 2000 | 30 | 179584 | 5239.47 | 1(Win) |
| std::from_chars | 136.541 | 0.509959 | 2.85107ms | 2000 | 30 | 152239 | 13969.1 | 2(Loss) |
| strtoll/strtoull | 79.8276 | 0.237273 | 4.6889ms | 2000 | 30 | 96420.8 | 23893.3 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 176.54 | 0.165993 | 19.692ms | 20000 | 30 | 964886 | 108041 | 1(Win) |
| std::from_chars | 109.033 | 0.615272 | 32.0179ms | 20000 | 30 | 3.47537e+07 | 174933 | 2(Loss) |
| strtoll/strtoull | 76.0212 | 2.11982 | 44.353ms | 20000 | 30 | 8.48614e+08 | 250897 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 158.844 | 0.096833 | 216.954ms | 200000 | 30 | 4.05589e+07 | 1.20077e+06 | 1(Win) |
| std::from_chars | 110.623 | 0.0399337 | 325.223ms | 200000 | 30 | 1.42224e+07 | 1.72419e+06 | 2(Loss) |
| strtoll/strtoull | 77.8679 | 0.131937 | 440.303ms | 200000 | 30 | 3.13328e+08 | 2.44947e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 191.041 | 0.952284 | 1.0199ms | 400 | 30 | 10847.3 | 1996.8 | 1(Win) |
| strtoll/strtoull | 120.495 | 2.27671 | 0.621056ms | 400 | 30 | 155855 | 3165.87 | 2(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 456.158 | 1.11136 | 2.59789ms | 4000 | 30 | 259131 | 8362.67 | 1(Win) |
| std::from_chars | 179.388 | 0.39543 | 3.904ms | 4000 | 30 | 212126 | 21265.1 | 2(Loss) |
| strtoll/strtoull | 119.56 | 0.165391 | 5.78304ms | 4000 | 30 | 83539.6 | 31906.1 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.56 | 0.42328 | 29.685ms | 40000 | 30 | 1.57907e+07 | 171401 | 1(Win) |
| std::from_chars | 160.21 | 0.492329 | 43.6782ms | 40000 | 30 | 4.1226e+07 | 238106 | 2(Loss) |
| strtoll/strtoull | 116.02 | 0.147136 | 59.35ms | 40000 | 30 | 7.02132e+06 | 328798 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 208.712 | 0.152635 | 328.971ms | 400000 | 30 | 2.33483e+08 | 1.82773e+06 | 1(Win) |
| std::from_chars | 160.259 | 0.177399 | 418.985ms | 400000 | 30 | 5.34932e+08 | 2.38033e+06 | 2(Loss) |
| strtoll/strtoull | 114.983 | 0.281562 | 595.597ms | 400000 | 30 | 2.61773e+09 | 3.31763e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 199.236 | 2.32095 | 1.91002ms | 400 | 48 | 94789 | 1914.67 | 1(Win) |
| strtoll/strtoull | 133.046 | 2.36034 | 0.598016ms | 400 | 30 | 137400 | 2867.2 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 388.051 | 0.744988 | 1.99398ms | 4000 | 30 | 160902 | 9830.4 | 1(Win) |
| std::from_chars | 187.988 | 0.423124 | 3.70176ms | 4000 | 30 | 221165 | 20292.3 | 2(Loss) |
| strtoll/strtoull | 131.211 | 0.167195 | 5.26182ms | 4000 | 30 | 70884.3 | 29073.1 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 259.391 | 0.160919 | 27.2991ms | 40000 | 30 | 1.68013e+06 | 147063 | 1(Win) |
| std::from_chars | 163.911 | 0.294939 | 43.6342ms | 40000 | 30 | 1.41348e+07 | 232730 | 2(Loss) |
| strtoll/strtoull | 121.553 | 0.66688 | 56.1139ms | 40000 | 30 | 1.31404e+08 | 313830 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 236.777 | 0.186504 | 295.043ms | 400000 | 30 | 2.70855e+08 | 1.61109e+06 | 1(Win) |
| std::from_chars | 163.229 | 0.142656 | 418.546ms | 400000 | 30 | 3.33445e+08 | 2.33702e+06 | 2(Loss) |
| strtoll/strtoull | 129.65 | 0.152977 | 529.23ms | 400000 | 30 | 6.07783e+08 | 2.9423e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 179.712 | 2.46071 | 2.00704ms | 400 | 48 | 130956 | 2122.67 | 1(Win) |
| strtoll/strtoull | 125.925 | 1.15198 | 0.820992ms | 400 | 30 | 36534.4 | 3029.33 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 463.729 | 1.07321 | 2.03776ms | 4000 | 30 | 233820 | 8226.13 | 1(Win) |
| std::from_chars | 183.437 | 0.352577 | 3.81696ms | 4000 | 30 | 161279 | 20795.7 | 2(Loss) |
| strtoll/strtoull | 129.726 | 0.311615 | 5.85114ms | 4000 | 30 | 251899 | 29405.9 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 277.972 | 0.640608 | 24.9748ms | 40000 | 30 | 2.31859e+07 | 137233 | 1(Win) |
| std::from_chars | 155.199 | 0.465481 | 42.7269ms | 40000 | 30 | 3.92707e+07 | 245794 | 2(Loss) |
| strtoll/strtoull | 129.986 | 0.142724 | 52.9961ms | 40000 | 30 | 5.26314e+06 | 293470 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 247.504 | 0.232879 | 272.977ms | 400000 | 30 | 3.86489e+08 | 1.54127e+06 | 1(Win) |
| std::from_chars | 169.801 | 0.0507944 | 406.376ms | 400000 | 30 | 3.90655e+07 | 2.24657e+06 | 2(Loss) |
| strtoll/strtoull | 130.289 | 0.0935829 | 527.961ms | 400000 | 30 | 2.25225e+08 | 2.92786e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 134.649 | 2.40964 | 1.28512ms | 400 | 30 | 139810 | 2833.07 | 1(Win) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 436.984 | 0.915014 | 1.61382ms | 4000 | 30 | 191410 | 8729.6 | 1(Win) |
| std::from_chars | 193.271 | 0.385109 | 3.64109ms | 4000 | 30 | 173331 | 19737.6 | 2(Loss) |
| strtoll/strtoull | 130.217 | 0.304116 | 5.39904ms | 4000 | 30 | 238114 | 29294.9 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 287.113 | 0.61349 | 23.2668ms | 40000 | 30 | 1.9932e+07 | 132864 | 1(Win) |
| std::from_chars | 170.189 | 0.439746 | 40.9661ms | 40000 | 30 | 2.91463e+07 | 224145 | 2(Loss) |
| strtoll/strtoull | 129.722 | 0.640974 | 52.7921ms | 40000 | 30 | 1.06585e+08 | 294067 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 278.724 | 0.193839 | 250.837ms | 400000 | 30 | 2.11141e+08 | 1.36863e+06 | 1(Win) |
| std::from_chars | 166.814 | 0.191925 | 407.872ms | 400000 | 30 | 5.77885e+08 | 2.2868e+06 | 2(Loss) |
| strtoll/strtoull | 130.129 | 0.0620914 | 529.236ms | 400000 | 30 | 9.9393e+07 | 2.93147e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 251.851 | 1.15198 | 2.10202ms | 800 | 30 | 36534.4 | 3029.33 | 1(Win) |
| strtoll/strtoull | 182.836 | 1.76857 | 2.55821ms | 800 | 30 | 163388 | 4172.8 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 577.938 | 0.578293 | 2.58611ms | 8000 | 30 | 174838 | 13201.1 | 1(Win) |
| std::from_chars | 242.427 | 0.286427 | 5.8112ms | 8000 | 30 | 243764 | 31470.9 | 2(Loss) |
| strtoll/strtoull | 181.906 | 0.0882015 | 7.62291ms | 8000 | 30 | 41054.2 | 41941.3 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 412.546 | 0.154175 | 33.474ms | 80000 | 30 | 2.43884e+06 | 184934 | 1(Win) |
| std::from_chars | 236.208 | 0.0821348 | 59.5971ms | 80000 | 30 | 2.11139e+06 | 322995 | 2(Loss) |
| strtoll/strtoull | 178.968 | 0.0695615 | 77.026ms | 80000 | 30 | 2.63809e+06 | 426300 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 379.805 | 0.0555301 | 362.778ms | 800000 | 30 | 3.73281e+07 | 2.00876e+06 | 1(Win) |
| std::from_chars | 230.335 | 0.218424 | 598.683ms | 800000 | 30 | 1.57031e+09 | 3.31231e+06 | 2(Loss) |
| strtoll/strtoull | 175.999 | 0.303907 | 779.884ms | 800000 | 30 | 5.20668e+09 | 4.3349e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 240.989 | 2.14059 | 1.568ms | 800 | 30 | 137776 | 3165.87 | 1(Win) |
| strtoll/strtoull | 189.422 | 1.09595 | 1.37395ms | 800 | 30 | 58455.1 | 4027.73 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 559.843 | 0.684064 | 3.61702ms | 8000 | 30 | 260713 | 13627.7 | 1(Win) |
| std::from_chars | 241.38 | 0.295066 | 5.8089ms | 8000 | 30 | 260939 | 31607.5 | 2(Loss) |
| strtoll/strtoull | 194.068 | 0.446683 | 8.03482ms | 8000 | 30 | 925112 | 39313.1 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 445.564 | 0.366547 | 31.7179ms | 80000 | 30 | 1.18179e+07 | 171230 | 1(Win) |
| std::from_chars | 227.678 | 0.819687 | 59.3971ms | 80000 | 30 | 2.26336e+08 | 335095 | 2(Loss) |
| strtoll/strtoull | 195.003 | 0.377749 | 71.7558ms | 80000 | 30 | 6.55276e+07 | 391245 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 402.732 | 1.01294 | 391.704ms | 800000 | 30 | 1.10467e+10 | 1.89441e+06 | 1(Win) |
| std::from_chars | 227.119 | 0.366944 | 600.452ms | 800000 | 30 | 4.55822e+09 | 3.35921e+06 | 2(Loss) |
| strtoll/strtoull | 193.3 | 0.14122 | 710.261ms | 800000 | 30 | 9.32027e+08 | 3.94692e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 236.526 | 2.3946 | 0.85888ms | 800 | 30 | 178981 | 3225.6 | 1(Win) |
| strtoll/strtoull | 192.687 | 0.96714 | 0.834816ms | 800 | 30 | 43992 | 3959.47 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 562.662 | 0.715541 | 2.58586ms | 8000 | 30 | 282407 | 13559.5 | 1(Win) |
| std::from_chars | 234.479 | 0.858858 | 6.73818ms | 8000 | 30 | 2.3428e+06 | 32537.6 | 2(Loss) |
| strtoll/strtoull | 192.149 | 1.83962 | 7.07507ms | 8000 | 30 | 1.60059e+07 | 39705.6 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 451.528 | 0.60987 | 30.3521ms | 80000 | 30 | 3.18572e+07 | 168969 | 1(Win) |
| std::from_chars | 231.432 | 0.308427 | 60.404ms | 80000 | 30 | 3.1014e+07 | 329660 | 2(Loss) |
| strtoll/strtoull | 195.425 | 0.103036 | 70.3629ms | 80000 | 30 | 4.85418e+06 | 390400 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 424.777 | 0.290231 | 325.758ms | 800000 | 30 | 8.15205e+08 | 1.7961e+06 | 1(Win) |
| std::from_chars | 232.01 | 0.253312 | 597.992ms | 800000 | 30 | 2.08162e+09 | 3.2884e+06 | 2(Loss) |
| strtoll/strtoull | 190.067 | 0.133843 | 721.77ms | 800000 | 30 | 8.65925e+08 | 4.01406e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 248.353 | 1.59821 | 1.60102ms | 800 | 30 | 72315.6 | 3072 | 1(Win) |
| strtoll/strtoull | 189.021 | 0.896105 | 1.14611ms | 800 | 30 | 39246.3 | 4036.27 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 551.554 | 0.48992 | 2.54797ms | 8000 | 30 | 137776 | 13832.5 | 1(Win) |
| std::from_chars | 251.78 | 0.287806 | 6.45402ms | 8000 | 30 | 228171 | 30301.9 | 2(Loss) |
| strtoll/strtoull | 191.86 | 1.83763 | 8.5079ms | 8000 | 30 | 1.60194e+07 | 39765.3 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 416.214 | 0.146472 | 33.4689ms | 80000 | 30 | 2.16261e+06 | 183305 | 1(Win) |
| std::from_chars | 235.232 | 0.350933 | 57.3092ms | 80000 | 30 | 3.88648e+07 | 324335 | 2(Loss) |
| strtoll/strtoull | 194.051 | 0.0661079 | 70.8879ms | 80000 | 30 | 2.02664e+06 | 393165 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.086 | 0.0625573 | 372.792ms | 800000 | 30 | 4.65655e+07 | 1.99156e+06 | 1(Win) |
| std::from_chars | 231.951 | 0.240927 | 587.669ms | 800000 | 30 | 1.88399e+09 | 3.28922e+06 | 2(Loss) |
| strtoll/strtoull | 185.576 | 0.274764 | 733.171ms | 800000 | 30 | 3.82805e+09 | 4.1112e+06 | 3(Loss) |
