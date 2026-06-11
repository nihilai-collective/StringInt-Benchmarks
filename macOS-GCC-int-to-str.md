# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 689.989 | 2.3433 | 0.772864ms | 2698 | 30 | 229075 | 3729.07 | 1(Win) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1016.41 | 0.423857 | 4.70912ms | 26502 | 30 | 333254 | 24866.1 | 1(Win) |
| jeaiii::to_text | 656.579 | 0.258029 | 7.22995ms | 26502 | 30 | 295967 | 38493.9 | 2(Loss) |
| vn::to_chars | 549.913 | 0.0833184 | 8.52301ms | 26502 | 30 | 43992 | 45960.5 | 3(Loss) |
| std::to_chars | 323.344 | 0.0933412 | 14.2738ms | 26502 | 30 | 159697 | 78165.3 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 423.83 | 0.0750468 | 107.601ms | 264931 | 30 | 6.00438e+06 | 596130 | 1(Win) |
| vn::to_chars | 421.771 | 0.164188 | 112.234ms | 264931 | 30 | 2.90211e+07 | 599040 | 2(Loss) |
| fmt::format_to | 356.74 | 1.20062 | 122.762ms | 264931 | 30 | 2.16918e+09 | 708241 | 3(Loss) |
| std::to_chars | 275.199 | 0.0480951 | 166.009ms | 264931 | 30 | 5.8492e+06 | 918093 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 796.976 | 2.08206 | 1.84704ms | 3152 | 30 | 185007 | 3771.73 | 1(Win) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1852.84 | 1.40594 | 6.74202ms | 31417 | 30 | 1.55064e+06 | 16170.7 | 1(Win) |
| jeaiii::to_text | 1158.4 | 0.36907 | 13.26ms | 31417 | 30 | 273368 | 25864.5 | 2(Loss) |
| vn::to_chars | 1068.51 | 0.996006 | 5.51987ms | 31417 | 30 | 2.34001e+06 | 28040.5 | 3(Loss) |
| std::to_chars | 669.806 | 0.402283 | 8.29901ms | 31417 | 30 | 971439 | 44731.7 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 913.065 | 0.108779 | 59.458ms | 314127 | 30 | 3.82135e+06 | 328098 | 1(Win) |
| vn::to_chars | 859.946 | 0.301521 | 62.8588ms | 314127 | 30 | 3.30997e+07 | 348365 | 2(Loss) |
| jeaiii::to_text | 818.809 | 0.13344 | 66.6529ms | 314127 | 30 | 7.15058e+06 | 365867 | 3(Loss) |
| std::to_chars | 552.075 | 0.142313 | 102.012ms | 314127 | 30 | 1.78906e+07 | 542635 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 553.373 | 2.41116 | 0.743936ms | 2144 | 30 | 238114 | 3694.93 | 1(Win) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to **STATISTICAL TIE** | 1095.68 | 1.0837 | 8.00102ms | 21608 | 30 | 1.24624e+06 | 18807.5 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1092.21 | 0.441951 | 9.35398ms | 21608 | 30 | 208585 | 18867.2 | 1(Tie) |
| vn::to_chars | 1013.38 | 0.492903 | 3.76602ms | 21608 | 30 | 301390 | 20334.9 | 3(Loss) |
| std::to_chars | 444.402 | 0.383346 | 19.806ms | 21608 | 30 | 947937 | 46370.1 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 674.135 | 0.0991853 | 55.0021ms | 215272 | 30 | 2.73714e+06 | 304538 | 1(Win) |
| fmt::format_to | 636.789 | 0.12578 | 58.273ms | 215272 | 30 | 4.9332e+06 | 322398 | 2(Loss) |
| jeaiii::to_text | 606.788 | 0.508133 | 60.9372ms | 215272 | 30 | 8.86701e+07 | 338338 | 3(Loss) |
| std::to_chars | 375.773 | 0.0873517 | 98.9079ms | 215272 | 30 | 6.83262e+06 | 546338 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 669.513 | 2.48829 | 1.63814ms | 2576 | 30 | 250091 | 3669.33 | 1(Win) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1325.6 | 0.501332 | 4.37709ms | 25727 | 30 | 258302 | 18508.8 | 1(Win) |
| fmt::format_to | 953.637 | 0.682655 | 6.06592ms | 25727 | 30 | 925414 | 25728 | 2(Loss) |
| jeaiii::to_text | 905.295 | 0.220636 | 5.00992ms | 25727 | 30 | 107268 | 27101.9 | 3(Loss) |
| std::to_chars | 473.053 | 0.20025 | 9.97504ms | 25727 | 30 | 323612 | 51865.6 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 695.113 | 0.13669 | 63.861ms | 257293 | 30 | 6.98456e+06 | 352998 | 1(Win) |
| vn::to_chars | 644.523 | 0.604501 | 68.513ms | 257293 | 30 | 1.5889e+08 | 380706 | 2(Loss) |
| fmt::format_to | 567.558 | 0.148297 | 78.462ms | 257293 | 30 | 1.23316e+07 | 432333 | 3(Loss) |
| std::to_chars | 374.923 | 0.0914134 | 118.207ms | 257293 | 30 | 1.07377e+07 | 654464 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2415.96 | 1.59137 | 0.476928ms | 5145 | 30 | 31336.8 | 2030.93 | 1(Win) |
| std::to_chars | 1105.77 | 2.1307 | 2.46707ms | 5145 | 30 | 268170 | 4437.33 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1616.13 | 0.333382 | 5.71622ms | 51582 | 30 | 308923 | 30438.4 | 1(Win) |
| jeaiii::to_text | 1009.41 | 0.182463 | 8.96998ms | 51582 | 30 | 237210 | 48733.9 | 2(Loss) |
| fmt::format_to | 951.591 | 0.400792 | 9.4761ms | 51582 | 30 | 1.28782e+06 | 51694.9 | 3(Loss) |
| std::to_chars | 898.774 | 0.14943 | 11.937ms | 51582 | 30 | 200676 | 54732.8 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 773.131 | 0.0623183 | 115.35ms | 516003 | 30 | 4.7201e+06 | 636501 | 1(Win) |
| jeaiii::to_text | 726.524 | 0.383084 | 121.831ms | 516003 | 30 | 2.01982e+08 | 677333 | 2(Loss) |
| fmt::format_to | 701.257 | 0.0738801 | 127.057ms | 516003 | 30 | 8.06356e+06 | 701739 | 3(Loss) |
| std::to_chars | 532.443 | 0.484349 | 166.609ms | 516003 | 30 | 6.01168e+08 | 924228 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1953.54 | 2.28852 | 2.656ms | 5681 | 48 | 193354 | 2773.33 | 1(Win) |
| std::to_chars | 1213.96 | 2.19476 | 0.886016ms | 5681 | 30 | 287831 | 4462.93 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1963.74 | 0.35051 | 5.04192ms | 56632 | 30 | 278792 | 27502.9 | 1(Win) |
| jeaiii::to_text | 1446.66 | 0.210732 | 6.79987ms | 56632 | 30 | 185685 | 37333.3 | 2(Loss) |
| fmt::format_to | 1355.85 | 0.5134 | 7.23021ms | 56632 | 30 | 1.25468e+06 | 39833.6 | 3(Loss) |
| std::to_chars | 1028.79 | 0.176418 | 9.568ms | 56632 | 30 | 257323 | 52497.1 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1453.15 | 0.126735 | 67.0428ms | 565873 | 30 | 6.6455e+06 | 371371 | 1(Win) |
| jeaiii::to_text | 1290.95 | 0.295289 | 75.2901ms | 565873 | 30 | 4.57122e+07 | 418031 | 2(Loss) |
| fmt::format_to | 1192.71 | 0.114055 | 81.8371ms | 565873 | 30 | 7.98944e+06 | 452463 | 3(Loss) |
| std::to_chars | 904.157 | 0.0947925 | 107.588ms | 565873 | 30 | 9.60328e+06 | 596864 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 983.137 | 2.14363 | 1.62893ms | 4636 | 30 | 278792 | 4497.07 | 1(Win) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1360.67 | 0.546591 | 7.0441ms | 46606 | 30 | 956374 | 32665.6 | 1(Win) |
| jeaiii::to_text | 1300.86 | 0.226444 | 6.24486ms | 46606 | 30 | 179584 | 34167.5 | 2(Loss) |
| fmt::format_to | 1257.82 | 0.251641 | 6.51699ms | 46606 | 30 | 237210 | 35336.5 | 3(Loss) |
| std::to_chars | 830.325 | 0.338827 | 9.79277ms | 46606 | 30 | 986882 | 53529.6 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1255.93 | 0.0849936 | 64.267ms | 466371 | 30 | 2.71786e+06 | 354133 | 1(Win) |
| jeaiii::to_text | 1065.89 | 0.358151 | 75.6211ms | 466371 | 30 | 6.70026e+07 | 417271 | 2(Loss) |
| fmt::format_to | 1050.87 | 0.0972693 | 76.45ms | 466371 | 30 | 5.08439e+06 | 423236 | 3(Loss) |
| std::to_chars | 767.275 | 0.0589602 | 104.625ms | 466371 | 30 | 3.50429e+06 | 579669 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 1015.44 | 2.01344 | 0.888064ms | 4861 | 30 | 253481 | 4565.33 | 1(Win) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2336.99 | 0.441624 | 3.60909ms | 48200 | 30 | 226363 | 19669.3 | 1(Win) |
| jeaiii::to_text | 1981.16 | 0.710699 | 5.27002ms | 48200 | 30 | 815735 | 23202.1 | 2(Loss) |
| fmt::format_to | 1527.3 | 0.189904 | 5.54906ms | 48200 | 30 | 98002.7 | 30097.1 | 3(Loss) |
| std::to_chars | 952.399 | 0.16818 | 8.75878ms | 48200 | 30 | 197663 | 48264.5 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2069.3 | 0.107712 | 40.172ms | 483225 | 30 | 1.72623e+06 | 222703 | 1(Win) |
| jeaiii::to_text | 1794.83 | 0.411438 | 46.6312ms | 483225 | 30 | 3.34798e+07 | 256759 | 2(Loss) |
| fmt::format_to | 1413.07 | 0.16957 | 59.5441ms | 483225 | 30 | 9.17474e+06 | 326127 | 3(Loss) |
| std::to_chars | 851.096 | 0.944348 | 95.8689ms | 483225 | 30 | 7.84382e+08 | 541466 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2738.09 | 2.48289 | 1.31507ms | 9996 | 30 | 224178 | 3481.6 | 1(Win) |
| fmt::format_to | 2556.38 | 2.24893 | 1.7239ms | 9996 | 30 | 210996 | 3729.07 | 2(Loss) |
| std::to_chars | 1148.14 | 1.073 | 2.23104ms | 9996 | 30 | 238114 | 8302.93 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1687.76 | 0.330893 | 10.3629ms | 99808 | 30 | 1.04473e+06 | 56396.8 | 1(Win) |
| jeaiii::to_text | 1259.11 | 0.230849 | 13.867ms | 99808 | 30 | 913662 | 75596.8 | 2(Loss) |
| fmt::format_to | 911.606 | 0.144803 | 19.051ms | 99808 | 30 | 685793 | 104414 | 3(Loss) |
| std::to_chars | 752.659 | 0.179753 | 23.115ms | 99808 | 30 | 1.55027e+06 | 126464 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1223.81 | 0.209384 | 139.926ms | 998200 | 30 | 7.95821e+07 | 777865 | 1(Win) |
| jeaiii::to_text | 1020.68 | 0.207345 | 168.153ms | 998200 | 30 | 1.12192e+08 | 932668 | 2(Loss) |
| fmt::format_to | 802.434 | 0.0704519 | 214.048ms | 998200 | 30 | 2.09568e+07 | 1.18634e+06 | 3(Loss) |
| std::to_chars | 700.417 | 0.0523746 | 245.07ms | 998200 | 30 | 1.52014e+07 | 1.35913e+06 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 3041.29 | 2.24565 | 3.24992ms | 10494 | 48 | 262115 | 3290.67 | 1(Win) |
| fmt::format_to | 2423.13 | 1.38546 | 0.845056ms | 10494 | 30 | 98228.7 | 4130.13 | 2(Loss) |
| std::to_chars | 1163.49 | 1.083 | 1.62611ms | 10494 | 30 | 260336 | 8601.6 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2331.2 | 0.264678 | 7.89811ms | 104880 | 30 | 386888 | 42905.6 | 1(Win) |
| jeaiii::to_text | 1616.72 | 0.323173 | 11.266ms | 104880 | 30 | 1.19923e+06 | 61866.7 | 2(Loss) |
| fmt::format_to | 1212.38 | 0.185188 | 14.9699ms | 104880 | 30 | 700256 | 82500.3 | 3(Loss) |
| std::to_chars | 940.107 | 0.227129 | 19.241ms | 104880 | 30 | 1.75185e+06 | 106394 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1904.47 | 0.138743 | 95.6831ms | 1048066 | 30 | 1.59065e+07 | 524826 | 1(Win) |
| jeaiii::to_text | 1423.54 | 0.0761426 | 127.116ms | 1048066 | 30 | 8.57459e+06 | 702131 | 2(Loss) |
| fmt::format_to | 1052.96 | 0.571942 | 170.852ms | 1048066 | 30 | 8.84255e+08 | 949239 | 3(Loss) |
| std::to_chars | 899.081 | 0.24801 | 200.138ms | 1048066 | 30 | 2.28054e+08 | 1.11171e+06 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2940.19 | 1.59821 | 0.64384ms | 9471 | 30 | 72315.6 | 3072 | 1(Win) |
| vn::to_chars | 2400.15 | 2.06672 | 2.00986ms | 9471 | 30 | 181467 | 3763.2 | 2(Loss) |
| fmt::format_to | 2134.01 | 2.04512 | 0.796928ms | 9471 | 30 | 224781 | 4232.53 | 3(Loss) |
| std::to_chars | 1187.95 | 1.24158 | 3.80698ms | 9471 | 30 | 267342 | 7603.2 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1863.84 | 0.37169 | 8.80896ms | 94794 | 30 | 975055 | 48503.5 | 1(Win) |
| jeaiii::to_text | 1490.02 | 0.293168 | 11.8049ms | 94794 | 30 | 949142 | 60672 | 2(Loss) |
| fmt::format_to | 1090.6 | 0.182197 | 15.7788ms | 94794 | 30 | 684286 | 82892.8 | 3(Loss) |
| std::to_chars | 894.164 | 0.263458 | 18.1811ms | 94794 | 30 | 2.12849e+06 | 101103 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1753.04 | 0.0700955 | 93.1438ms | 947821 | 30 | 3.91898e+06 | 515627 | 1(Win) |
| jeaiii::to_text | 1236.49 | 0.593274 | 126.353ms | 947821 | 30 | 5.64295e+08 | 731034 | 2(Loss) |
| fmt::format_to | 963.93 | 0.0852057 | 169.566ms | 947821 | 30 | 1.91523e+07 | 937737 | 3(Loss) |
| std::to_chars | 827.053 | 0.160361 | 197.128ms | 947821 | 30 | 9.21524e+07 | 1.09293e+06 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2680.55 | 2.18336 | 3.25504ms | 9714 | 48 | 273299 | 3456 | 1(Win) |
| std::to_chars | 1143.97 | 0.702524 | 1.82605ms | 9714 | 30 | 97098.7 | 8098.13 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 3253.99 | 0.337524 | 5.25901ms | 97452 | 30 | 278792 | 28561.1 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 3230.82 | 0.290915 | 13.5611ms | 97452 | 30 | 210092 | 28765.9 | 1(Tie) |
| fmt::format_to | 1808.25 | 0.196474 | 9.45408ms | 97452 | 30 | 305910 | 51396.3 | 3(Loss) |
| std::to_chars | 1066.61 | 0.203397 | 15.7629ms | 97452 | 30 | 942287 | 87133.9 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2757.56 | 0.100836 | 61.301ms | 974140 | 30 | 3.46211e+06 | 336896 | 1(Win) |
| jeaiii::to_text | 2408.23 | 0.0990118 | 69.611ms | 974140 | 30 | 4.37667e+06 | 385766 | 2(Loss) |
| fmt::format_to | 1493.81 | 0.149403 | 112.436ms | 974140 | 30 | 2.58995e+07 | 621909 | 3(Loss) |
| std::to_chars | 1038.28 | 0.15041 | 161.758ms | 974140 | 30 | 5.43365e+07 | 894763 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4630.11 | 1.36069 | 2.70387ms | 19389 | 30 | 88586.6 | 3993.6 | 1(Win) |
| jeaiii::to_text | 3167.97 | 1.15946 | 1.72595ms | 19389 | 30 | 137400 | 5836.8 | 2(Loss) |
| fmt::format_to | 1575.92 | 0.702396 | 5.55699ms | 19389 | 30 | 203764 | 11733.3 | 3(Loss) |
| std::to_chars | 1155.67 | 0.148556 | 3.264ms | 19389 | 30 | 16949 | 16000 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2901.62 | 1.79708 | 12.0791ms | 193842 | 30 | 3.93249e+07 | 63709.9 | 1(Win) |
| jeaiii::to_text | 2124.71 | 0.19432 | 16.2081ms | 193842 | 30 | 857542 | 87005.9 | 2(Loss) |
| fmt::format_to | 1411.03 | 0.14595 | 23.8249ms | 193842 | 30 | 1.09686e+06 | 131012 | 3(Loss) |
| std::to_chars | 1062.04 | 0.82362 | 30.5091ms | 193842 | 30 | 6.16578e+07 | 174063 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2428.48 | 0.490486 | 135.769ms | 1937682 | 30 | 4.17896e+08 | 760934 | 1(Win) |
| jeaiii::to_text | 1897.52 | 0.139997 | 189.732ms | 1937682 | 30 | 5.57632e+07 | 973858 | 2(Loss) |
| fmt::format_to | 1271.68 | 0.451731 | 255.505ms | 1937682 | 30 | 1.29268e+09 | 1.45313e+06 | 3(Loss) |
| std::to_chars | 1060.88 | 0.543143 | 311.568ms | 1937682 | 30 | 2.68522e+09 | 1.74187e+06 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4444.2 | 2.13993 | 0.829184ms | 19883 | 30 | 250091 | 4266.67 | 1(Win) |
| jeaiii::to_text | 3090.54 | 1.06769 | 1.19501ms | 19883 | 30 | 128737 | 6135.47 | 2(Loss) |
| fmt::format_to | 1537.78 | 0.73205 | 2.32499ms | 19883 | 30 | 244442 | 12330.7 | 3(Loss) |
| std::to_chars | 1192.75 | 0.373085 | 3.05306ms | 19883 | 30 | 105536 | 15897.6 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4440.04 | 1.91933 | 8.47309ms | 198803 | 30 | 2.01507e+07 | 42700.8 | 1(Win) |
| jeaiii::to_text | 2998.38 | 0.262593 | 11.5131ms | 198803 | 30 | 827110 | 63232 | 2(Loss) |
| fmt::format_to | 1516.38 | 0.148753 | 22.636ms | 198803 | 30 | 1.03773e+06 | 125030 | 3(Loss) |
| std::to_chars | 1264.47 | 0.31505 | 26.9271ms | 198803 | 30 | 6.69439e+06 | 149939 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4484.2 | 0.0856172 | 76.2688ms | 1987983 | 30 | 3.93095e+06 | 422793 | 1(Win) |
| jeaiii::to_text | 2923.81 | 0.152458 | 116.696ms | 1987983 | 30 | 2.93191e+07 | 648431 | 2(Loss) |
| fmt::format_to | 1511.92 | 0.0603566 | 226.216ms | 1987983 | 30 | 1.71847e+07 | 1.25396e+06 | 3(Loss) |
| std::to_chars | 1244.57 | 0.62242 | 270.604ms | 1987983 | 30 | 2.69696e+09 | 1.52333e+06 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4691.38 | 1.86382 | 0.779008ms | 18890 | 30 | 153671 | 3840 | 1(Win) |
| jeaiii::to_text | 2936.19 | 1.06769 | 3.48621ms | 18890 | 30 | 128737 | 6135.47 | 2(Loss) |
| fmt::format_to | 1468.1 | 0.699713 | 3.41094ms | 18890 | 30 | 221165 | 12270.9 | 3(Loss) |
| std::to_chars | 1225.97 | 0.644862 | 2.67802ms | 18890 | 30 | 269376 | 14694.4 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4324.98 | 0.432971 | 7.58579ms | 188775 | 30 | 974453 | 41625.6 | 1(Win) |
| jeaiii::to_text | 2859.09 | 0.12555 | 11.465ms | 188775 | 30 | 187493 | 62967.5 | 2(Loss) |
| fmt::format_to | 1436.46 | 0.821538 | 22.4901ms | 188775 | 30 | 3.18039e+07 | 125329 | 3(Loss) |
| std::to_chars | 1230.88 | 0.181805 | 26.4ms | 188775 | 30 | 2.12126e+06 | 146261 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4332.95 | 0.362149 | 74.8559ms | 1887932 | 30 | 6.79364e+07 | 415531 | 1(Win) |
| jeaiii::to_text | 2793.61 | 0.190225 | 116.046ms | 1887932 | 30 | 4.50919e+07 | 644497 | 2(Loss) |
| fmt::format_to | 1444.27 | 0.0931693 | 224.8ms | 1887932 | 30 | 4.04711e+07 | 1.24663e+06 | 3(Loss) |
| std::to_chars | 1233.12 | 0.0729319 | 263.242ms | 1887932 | 30 | 3.40188e+07 | 1.4601e+06 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6160.06 | 0.699866 | 0.593152ms | 19402 | 30 | 13257.9 | 3003.73 | 1(Win) |
| jeaiii::to_text | 3425.5 | 1.89233 | 1.41696ms | 19402 | 30 | 313443 | 5401.6 | 2(Loss) |
| fmt::format_to | 1398.93 | 0.624818 | 2.75507ms | 19402 | 30 | 204894 | 13226.7 | 3(Loss) |
| std::to_chars | 1047.51 | 0.510626 | 7.53894ms | 19402 | 30 | 244065 | 17664 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3145.98 | 0.426835 | 10.6929ms | 193980 | 30 | 1.88992e+06 | 58803.2 | 1(Win) |
| jeaiii::to_text | 2508.85 | 0.109768 | 13.6881ms | 193980 | 30 | 196533 | 73736.5 | 2(Loss) |
| fmt::format_to | 1030.81 | 0.153007 | 32.3991ms | 193980 | 30 | 2.26205e+06 | 179465 | 3(Loss) |
| std::to_chars | 1011.48 | 0.086384 | 33.4008ms | 193980 | 30 | 748843 | 182895 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2792.52 | 0.269143 | 119.27ms | 1940019 | 30 | 9.5391e+07 | 662537 | 1(Win) |
| jeaiii::to_text | 2253.62 | 0.168146 | 148.187ms | 1940019 | 30 | 5.71671e+07 | 820966 | 2(Loss) |
| std::to_chars | 998.048 | 0.10757 | 334.526ms | 1940019 | 30 | 1.19293e+08 | 1.85376e+06 | 3(Loss) |
| fmt::format_to | 940.462 | 0.121763 | 354.509ms | 1940019 | 30 | 1.7214e+08 | 1.96727e+06 | 4(Loss) |
