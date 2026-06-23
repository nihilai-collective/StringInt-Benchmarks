# int-to-str  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2239.06 | 0.117924 | 0.057384ms | 270 | 30 | 0.551724 | 115 | 1(Win) |
| jeaiii::to_text | 2146.96 | 0.112601 | 0.04813ms | 270 | 30 | 0.547126 | 119.933 | 2(Loss) |
| fmt::format_to | 1462.75 | 0.0637797 | 0.057425ms | 270 | 30 | 0.378161 | 176.033 | 3(Loss) |
| std::to_chars | 846.271 | 0.0443842 | 0.127668ms | 270 | 30 | 0.547126 | 304.267 | 4(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2690.17 | 0.0735591 | 0.202433ms | 2609 | 30 | 13.8862 | 924.9 | 1(Win) |
| jeaiii::to_text | 2605.92 | 0.0632005 | 0.248169ms | 2609 | 30 | 10.9241 | 954.8 | 2(Loss) |
| fmt::format_to | 1610.31 | 0.0491355 | 0.32056ms | 2609 | 30 | 17.292 | 1545.13 | 3(Loss) |
| std::to_chars | 1507.69 | 0.0251859 | 0.545717ms | 2609 | 30 | 5.18276 | 1650.3 | 4(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 947.444 | 1.49425 | 14.5403ms | 26485 | 30 | 4.76059e+06 | 26659.2 | 1(Win) |
| vn::to_chars | 673.867 | 0.384741 | 6.9927ms | 26485 | 30 | 623893 | 37482.3 | 2(Loss) |
| std::to_chars | 623.423 | 0.938041 | 19.6878ms | 26485 | 30 | 4.33311e+06 | 40515.1 | 3(Loss) |
| fmt::format_to | 495.511 | 2.0002 | 9.57578ms | 26485 | 30 | 3.1186e+07 | 50973.8 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 479.134 | 1.77765 | 480.439ms | 264715 | 48 | 4.21094e+09 | 526893 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 460.372 | 2.44821 | 99.3193ms | 264715 | 30 | 5.40705e+09 | 548365 | 1(Tie) |
| fmt::format_to | 404.607 | 1.67397 | 280.212ms | 264715 | 30 | 3.27271e+09 | 623944 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2578.08 | 0.103783 | 0.048062ms | 318 | 30 | 0.447126 | 117.633 | 1(Win) |
| vn::to_chars | 2545.62 | 0.0777625 | 0.051532ms | 318 | 30 | 0.257471 | 119.133 | 2(Loss) |
| fmt::format_to | 1680.78 | 0.0736569 | 0.052972ms | 318 | 30 | 0.529885 | 180.433 | 3(Loss) |
| std::to_chars | 1636.93 | 0.0574815 | 0.063103ms | 318 | 30 | 0.34023 | 185.267 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3042.34 | 0.076315 | 0.206205ms | 3141 | 30 | 16.9379 | 984.6 | 1(Win) |
| jeaiii::to_text | 2822.12 | 0.0348971 | 0.224086ms | 3141 | 30 | 4.11609 | 1061.43 | 2(Loss) |
| std::to_chars | 1935.03 | 0.0631323 | 0.310673ms | 3141 | 30 | 28.654 | 1548.03 | 3(Loss) |
| fmt::format_to | 1911.69 | 0.0261317 | 0.31205ms | 3141 | 30 | 5.02989 | 1566.93 | 4(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2147.95 | 0.165467 | 6.34388ms | 31533 | 30 | 16100 | 14000.4 | 1(Win) |
| fmt::format_to | 1706.32 | 0.509072 | 10.2389ms | 31533 | 30 | 241483 | 17624 | 2(Loss) |
| std::to_chars | 1398.21 | 0.20065 | 4.2605ms | 31533 | 30 | 55870.4 | 21507.6 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1093.24 | 1.91892 | 296.839ms | 314422 | 48 | 1.32968e+09 | 274281 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1048.23 | 2.00103 | 282.96ms | 314422 | 48 | 1.57276e+09 | 286061 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 877.846 | 0.383397 | 336.213ms | 314422 | 48 | 8.23244e+07 | 341582 | 3(Tie) |
| std::to_chars **STATISTICAL TIE** | 853.032 | 1.86583 | 65.7951ms | 314422 | 30 | 1.29051e+09 | 351518 | 3(Tie) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1771.71 | 0.110727 | 0.052482ms | 209 | 30 | 0.465517 | 112.5 | 1(Win) |
| jeaiii::to_text | 1631.08 | 0.106733 | 0.051006ms | 209 | 30 | 0.510345 | 122.2 | 2(Loss) |
| fmt::format_to | 1167.19 | 0.0725853 | 0.068471ms | 209 | 30 | 0.46092 | 170.767 | 3(Loss) |
| std::to_chars | 1137.88 | 0.0480634 | 0.059214ms | 209 | 30 | 0.212644 | 175.167 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2202.44 | 0.0385202 | 0.395784ms | 2154 | 30 | 3.87241 | 932.7 | 1(Win) |
| std::to_chars | 1491.73 | 0.164306 | 0.288597ms | 2154 | 30 | 153.582 | 1377.07 | 2(Loss) |
| fmt::format_to | 1415.04 | 0.0429551 | 0.411697ms | 2154 | 30 | 11.6655 | 1451.7 | 3(Loss) |
| jeaiii::to_text | 1018.75 | 0.0233705 | 0.41552ms | 2154 | 30 | 6.66207 | 2016.4 | 4(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1718.87 | 2.26818 | 5.52103ms | 21527 | 30 | 2.20168e+06 | 11943.7 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1649.19 | 2.39083 | 2.69183ms | 21527 | 30 | 2.65732e+06 | 12448.4 | 1(Tie) |
| fmt::format_to | 1187.64 | 0.679111 | 3.70453ms | 21527 | 30 | 413431 | 17286.2 | 3(Loss) |
| std::to_chars | 794.633 | 0.13678 | 6.21282ms | 21527 | 30 | 37462.9 | 25835.5 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 759.165 | 0.771491 | 52.0943ms | 215326 | 30 | 1.30648e+08 | 270496 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 732.862 | 1.64897 | 55.0635ms | 215326 | 30 | 6.40469e+08 | 280204 | 1(Tie) |
| std::to_chars | 587.36 | 0.835535 | 70.5136ms | 215326 | 30 | 2.55997e+08 | 349617 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2023.77 | 0.0982355 | 0.057949ms | 248 | 30 | 0.395402 | 116.867 | 1(Win) |
| jeaiii::to_text | 1978.07 | 0.16379 | 0.05753ms | 248 | 30 | 1.15057 | 119.567 | 2(Loss) |
| std::to_chars | 1904.28 | 0.0976616 | 0.071857ms | 248 | 30 | 0.441379 | 124.2 | 3(Loss) |
| fmt::format_to | 1612.21 | 0.109135 | 0.061266ms | 248 | 30 | 0.768966 | 146.7 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2643.87 | 0.0269056 | 0.218039ms | 2586 | 30 | 1.88966 | 932.8 | 1(Win) |
| jeaiii::to_text | 2515.93 | 0.0465789 | 0.213163ms | 2586 | 30 | 6.25402 | 980.233 | 2(Loss) |
| std::to_chars | 2482.59 | 0.0857432 | 0.229585ms | 2586 | 30 | 21.7655 | 993.4 | 3(Loss) |
| fmt::format_to | 1963.38 | 0.0370768 | 0.264121ms | 2586 | 30 | 6.5069 | 1256.1 | 4(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1458.9 | 1.51813 | 3.20049ms | 25852 | 30 | 1.9746e+06 | 16899.3 | 1(Win) |
| jeaiii::to_text | 1219.46 | 1.37467 | 3.82516ms | 25852 | 30 | 2.31723e+06 | 20217.5 | 2(Loss) |
| std::to_chars | 1172.13 | 0.0276225 | 4.00061ms | 25852 | 30 | 1012.71 | 21033.9 | 3(Loss) |
| fmt::format_to | 972.667 | 0.130456 | 10.6853ms | 25852 | 30 | 32802.9 | 25347.2 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 770.637 | 0.978112 | 146.051ms | 257151 | 30 | 2.90653e+08 | 318228 | 1(Win) |
| fmt::format_to **STATISTICAL TIE** | 697.575 | 0.730865 | 66.9924ms | 257151 | 30 | 1.98057e+08 | 351558 | 2(Tie) |
| std::to_chars **STATISTICAL TIE** | 672.761 | 2.01443 | 360.616ms | 257151 | 48 | 2.58823e+09 | 364525 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 670.493 | 1.28089 | 64.0421ms | 257151 | 30 | 6.5847e+08 | 365758 | 2(Tie) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4053.18 | 0.162293 | 0.058196ms | 528 | 30 | 1.21954 | 124.233 | 1(Win) |
| jeaiii::to_text | 3434.79 | 0.116093 | 0.059002ms | 528 | 30 | 0.868966 | 146.6 | 2(Loss) |
| fmt::format_to | 2379.3 | 0.594454 | 0.072598ms | 528 | 30 | 47.4816 | 211.633 | 3(Loss) |
| std::to_chars | 1960.57 | 0.0377234 | 0.084575ms | 528 | 30 | 0.281609 | 256.833 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4717.64 | 0.498756 | 0.294957ms | 5146 | 30 | 807.582 | 1040.27 | 1(Win) |
| jeaiii::to_text | 3956.58 | 0.0606875 | 0.278144ms | 5146 | 30 | 16.9989 | 1240.37 | 2(Loss) |
| std::to_chars | 2115.68 | 0.288715 | 0.461006ms | 5146 | 30 | 1345.55 | 2319.63 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2370.52 | 1.29183 | 6.55356ms | 51578 | 30 | 2.15564e+06 | 20750.1 | 1(Win) |
| vn::to_chars | 1643.77 | 0.93295 | 5.87556ms | 51578 | 30 | 2.33821e+06 | 29924.2 | 2(Loss) |
| fmt::format_to | 1005.4 | 1.06807 | 9.19698ms | 51578 | 30 | 8.19176e+06 | 48924.5 | 3(Loss) |
| std::to_chars | 644.26 | 1.98483 | 62.2075ms | 51578 | 48 | 1.10229e+08 | 76349 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 835.817 | 1.91948 | 110.1ms | 516392 | 30 | 3.83728e+09 | 589208 | 1(Win) |
| jeaiii::to_text | 782.887 | 2.36132 | 120.862ms | 516392 | 30 | 6.61901e+09 | 629043 | 2(Loss) |
| fmt::format_to | 725.597 | 2.41763 | 616.621ms | 516392 | 48 | 1.29238e+10 | 678710 | 3(Loss) |
| std::to_chars | 630.308 | 2.26854 | 346.431ms | 516392 | 30 | 9.42471e+09 | 781317 | 4(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4318.09 | 0.135993 | 0.065407ms | 561 | 30 | 0.851724 | 123.9 | 1(Win) |
| jeaiii::to_text | 3597.12 | 0.11136 | 0.070838ms | 561 | 30 | 0.822989 | 148.733 | 2(Loss) |
| fmt::format_to | 2580.44 | 0.116394 | 0.069389ms | 561 | 30 | 1.74713 | 207.333 | 3(Loss) |
| std::to_chars | 2029.12 | 0.0839904 | 0.081032ms | 561 | 30 | 1.47126 | 263.667 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2831.04 | 0.084657 | 0.386702ms | 5665 | 30 | 78.2989 | 1908.33 | 1(Win) |
| vn::to_chars | 2415.71 | 0.360997 | 0.475153ms | 5665 | 30 | 1955.43 | 2236.43 | 2(Loss) |
| std::to_chars | 2308.82 | 0.146594 | 0.521426ms | 5665 | 30 | 352.999 | 2339.97 | 3(Loss) |
| jeaiii::to_text | 2197.92 | 0.238376 | 0.500061ms | 5665 | 30 | 1029.96 | 2458.03 | 4(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4231.37 | 0.790237 | 4.9552ms | 56633 | 30 | 305220 | 12764.1 | 1(Win) |
| jeaiii::to_text | 1622.62 | 0.895935 | 27.6102ms | 56633 | 48 | 4.26875e+06 | 33285.4 | 2(Loss) |
| std::to_chars | 1510.6 | 1.62284 | 89.5856ms | 56633 | 48 | 1.61595e+07 | 35753.6 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1395.66 | 1.30442 | 208.045ms | 566187 | 30 | 7.64034e+08 | 386883 | 1(Win) |
| std::to_chars | 1169.81 | 1.6627 | 86.3185ms | 566187 | 30 | 1.76702e+09 | 461579 | 2(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3611 | 0.1924 | 0.053028ms | 468 | 30 | 1.69655 | 123.6 | 1(Win) |
| jeaiii::to_text | 3037.57 | 0.149298 | 0.065422ms | 468 | 30 | 1.44368 | 146.933 | 2(Loss) |
| std::to_chars **STATISTICAL TIE** | 1813.82 | 0.0548821 | 0.079724ms | 468 | 30 | 0.547126 | 246.067 | 3(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1794.61 | 0.520581 | 0.081071ms | 468 | 30 | 50.2862 | 248.7 | 3(Tie) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4209.94 | 0.0869973 | 0.236699ms | 4654 | 30 | 25.2368 | 1054.27 | 1(Win) |
| jeaiii::to_text | 3517.14 | 0.0442978 | 0.267773ms | 4654 | 30 | 9.37471 | 1261.93 | 2(Loss) |
| fmt::format_to | 2271.6 | 0.0576924 | 1.30545ms | 4654 | 30 | 38.1195 | 1953.87 | 3(Loss) |
| std::to_chars | 1626.46 | 0.0959739 | 0.567943ms | 4654 | 30 | 205.775 | 2728.87 | 4(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3722.53 | 0.377121 | 2.75224ms | 46630 | 30 | 60888.7 | 11946.1 | 1(Win) |
| jeaiii::to_text | 1664.34 | 1.11317 | 4.79887ms | 46630 | 30 | 2.65396e+06 | 26719.3 | 2(Loss) |
| fmt::format_to | 1439.96 | 1.5348 | 5.98932ms | 46630 | 30 | 6.73985e+06 | 30882.6 | 3(Loss) |
| std::to_chars | 1173.87 | 1.05379 | 7.91608ms | 46630 | 30 | 4.78096e+06 | 37883 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1205.03 | 1.99583 | 335.277ms | 466368 | 48 | 2.60466e+09 | 369089 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1197.86 | 0.574243 | 78.0322ms | 466368 | 30 | 1.36382e+08 | 371297 | 1(Tie) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3662.48 | 0.147861 | 0.05934ms | 478 | 30 | 1.01609 | 124.467 | 1(Win) |
| jeaiii::to_text | 3366.74 | 0.0909722 | 0.052068ms | 478 | 30 | 0.455172 | 135.4 | 2(Loss) |
| fmt::format_to | 2507 | 0.14701 | 0.070608ms | 478 | 30 | 2.14368 | 181.833 | 3(Loss) |
| std::to_chars | 2187.06 | 0.118825 | 0.087172ms | 478 | 30 | 1.84023 | 208.433 | 4(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4431.51 | 0.0525932 | 0.227167ms | 4839 | 30 | 8.99885 | 1041.37 | 1(Win) |
| vn::to_chars | 3234.6 | 2.42369 | 1.46242ms | 4839 | 48 | 57393.8 | 1426.71 | 2(Loss) |
| fmt::format_to | 2810.04 | 0.138944 | 0.331541ms | 4839 | 30 | 156.202 | 1642.27 | 3(Loss) |
| std::to_chars | 2392.88 | 0.0712645 | 0.411087ms | 4839 | 30 | 56.6678 | 1928.57 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4459.32 | 0.439522 | 2.08491ms | 48279 | 30 | 61782.1 | 10325 | 1(Win) |
| fmt::format_to **STATISTICAL TIE** | 2791.27 | 1.44466 | 3.1744ms | 48279 | 30 | 1.7036e+06 | 16495.1 | 2(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2712.58 | 0.173676 | 6.01718ms | 48279 | 30 | 26070.8 | 16973.7 | 2(Tie) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2402.04 | 0.613659 | 36.5219ms | 482940 | 30 | 4.15337e+07 | 191740 | 1(Win) |
| std::to_chars | 1591.94 | 1.72393 | 322.746ms | 482940 | 48 | 1.19403e+09 | 289312 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5773.91 | 0.0904606 | 0.059086ms | 1002 | 30 | 0.672414 | 165.5 | 1(Win) |
| jeaiii::to_text | 3827.43 | 0.0554376 | 0.135746ms | 1002 | 30 | 0.574713 | 249.667 | 2(Loss) |
| fmt::format_to | 3146.12 | 0.155417 | 0.082913ms | 1002 | 30 | 6.68506 | 303.733 | 3(Loss) |
| std::to_chars | 2517.56 | 0.030114 | 0.096725ms | 1002 | 30 | 0.391954 | 379.567 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6287.25 | 0.0988066 | 0.309367ms | 10036 | 30 | 67.8724 | 1522.3 | 1(Win) |
| jeaiii::to_text | 4652.55 | 0.0424727 | 0.413026ms | 10036 | 30 | 22.9023 | 2057.17 | 2(Loss) |
| fmt::format_to | 3341.66 | 0.155665 | 0.560626ms | 10036 | 30 | 596.351 | 2864.17 | 3(Loss) |
| std::to_chars | 2636.44 | 0.0471436 | 0.710535ms | 10036 | 30 | 87.8724 | 3630.3 | 4(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2751.58 | 1.19179 | 6.61073ms | 99856 | 30 | 5.10397e+06 | 34609.3 | 1(Win) |
| vn::to_chars | 2038.59 | 0.521832 | 9.01344ms | 99856 | 30 | 1.78268e+06 | 46713.7 | 2(Loss) |
| jeaiii::to_text | 1427.64 | 1.52098 | 30.1321ms | 99856 | 30 | 3.08805e+07 | 66704.8 | 3(Loss) |
| std::to_chars | 1331.58 | 1.18727 | 14.6715ms | 99856 | 30 | 2.16287e+07 | 71516.6 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 1379.16 | 1.07968 | 342.27ms | 998411 | 30 | 1.66687e+09 | 690391 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1331.85 | 2.22589 | 127.237ms | 998411 | 30 | 7.59695e+09 | 714916 | 1(Tie) |
| std::to_chars | 909.841 | 2.24774 | 184.666ms | 998411 | 30 | 1.65997e+10 | 1.04651e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6145.86 | 0.087213 | 0.056677ms | 1047 | 30 | 0.602299 | 162.467 | 1(Win) |
| fmt::format_to | 3263.42 | 0.302843 | 0.092697ms | 1047 | 30 | 25.7575 | 305.967 | 2(Loss) |
| std::to_chars | 2567.71 | 0.0504366 | 0.093509ms | 1047 | 30 | 1.15402 | 388.867 | 3(Loss) |
| jeaiii::to_text | 2189.21 | 0.041186 | 0.17538ms | 1047 | 30 | 1.05862 | 456.1 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6128.42 | 0.0530969 | 0.327758ms | 10460 | 30 | 22.4092 | 1627.73 | 1(Win) |
| jeaiii::to_text | 4794.42 | 0.11631 | 0.41098ms | 10460 | 30 | 175.689 | 2080.63 | 2(Loss) |
| fmt::format_to | 3521.53 | 0.142944 | 0.604207ms | 10460 | 30 | 491.872 | 2832.7 | 3(Loss) |
| std::to_chars | 2705.37 | 0.0777363 | 0.706842ms | 10460 | 30 | 246.478 | 3687.27 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2933.57 | 0.686899 | 6.23256ms | 104902 | 30 | 1.6462e+06 | 34102.6 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2896.78 | 0.603423 | 7.65518ms | 104902 | 30 | 1.30287e+06 | 34535.7 | 1(Tie) |
| fmt::format_to | 2300.97 | 0.389055 | 7.96629ms | 104902 | 30 | 858401 | 43478.4 | 3(Loss) |
| std::to_chars | 1530.57 | 1.24355 | 11.6196ms | 104902 | 30 | 1.98202e+07 | 65362.7 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2101.12 | 2.34618 | 200.078ms | 1048478 | 30 | 3.73989e+09 | 475891 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 1980.45 | 1.97492 | 494.738ms | 1048478 | 48 | 4.77235e+09 | 504889 | 1(Tie) |
| fmt::format_to | 1830.9 | 0.234216 | 105.734ms | 1048478 | 30 | 4.90847e+07 | 546129 | 3(Loss) |
| std::to_chars | 1322.36 | 1.83811 | 745.981ms | 1048478 | 48 | 9.27267e+09 | 756153 | 4(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5322.05 | 0.107925 | 0.060569ms | 950 | 30 | 1.01264 | 170.233 | 1(Win) |
| jeaiii::to_text | 4199.59 | 0.0585207 | 0.068529ms | 950 | 30 | 0.478161 | 215.733 | 2(Loss) |
| fmt::format_to | 3137.09 | 0.254177 | 0.079753ms | 950 | 30 | 16.1655 | 288.8 | 3(Loss) |
| std::to_chars | 2431.54 | 0.0508247 | 0.094598ms | 950 | 30 | 1.07586 | 372.6 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5687.18 | 0.0811404 | 0.331842ms | 9493 | 30 | 50.0506 | 1591.87 | 1(Win) |
| jeaiii::to_text | 4638.8 | 0.237929 | 0.385287ms | 9493 | 30 | 646.861 | 1951.63 | 2(Loss) |
| fmt::format_to | 3234.03 | 0.113476 | 0.54336ms | 9493 | 30 | 302.723 | 2799.37 | 3(Loss) |
| std::to_chars | 2379.4 | 0.0607107 | 0.723343ms | 9493 | 30 | 160.075 | 3804.83 | 4(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3515.52 | 0.195206 | 14.1448ms | 94779 | 30 | 75570.7 | 25711.2 | 1(Win) |
| jeaiii::to_text | 2625.79 | 0.172414 | 8.92599ms | 94779 | 30 | 105675 | 34423.3 | 2(Loss) |
| fmt::format_to | 2148.69 | 0.1503 | 20.3781ms | 94779 | 30 | 119927 | 42066.8 | 3(Loss) |
| std::to_chars | 1528.68 | 0.727808 | 27.2735ms | 94779 | 30 | 5.55583e+06 | 59128.5 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1550.26 | 2.0633 | 252.082ms | 948238 | 30 | 4.34582e+09 | 583328 | 1(Win) |
| std::to_chars | 1191.13 | 2.15881 | 138.493ms | 948238 | 30 | 8.05869e+09 | 759201 | 2(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6492.35 | 0.147618 | 0.052624ms | 976 | 30 | 1.34368 | 143.367 | 1(Win) |
| fmt::format_to | 3387.96 | 0.427816 | 0.082506ms | 976 | 30 | 41.4437 | 274.733 | 2(Loss) |
| jeaiii::to_text | 2484.08 | 0.0260673 | 0.115492ms | 976 | 30 | 0.286207 | 374.7 | 3(Loss) |
| std::to_chars | 2476.59 | 0.0384488 | 0.100538ms | 976 | 30 | 0.626437 | 375.833 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6724.05 | 0.173951 | 0.279639ms | 9725 | 30 | 172.7 | 1379.3 | 1(Win) |
| jeaiii::to_text | 5355.3 | 0.0504514 | 0.789603ms | 9725 | 30 | 22.9023 | 1731.83 | 2(Loss) |
| fmt::format_to | 3662.14 | 0.0838533 | 1.15706ms | 9725 | 30 | 135.292 | 2532.53 | 3(Loss) |
| std::to_chars | 2647.76 | 1.57245 | 0.696656ms | 9725 | 30 | 91011.8 | 3502.77 | 4(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7259.68 | 0.0478164 | 12.2787ms | 97486 | 48 | 1799.89 | 12806.3 | 1(Win) |
| jeaiii::to_text **STATISTICAL TIE** | 3672.49 | 0.852728 | 5.90192ms | 97486 | 30 | 1.398e+06 | 25315.2 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 3652.25 | 0.646882 | 4.66937ms | 97486 | 30 | 813456 | 25455.5 | 2(Tie) |
| std::to_chars | 2031.44 | 0.519337 | 8.47148ms | 97486 | 30 | 1.69471e+06 | 45765.4 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3762.78 | 0.481622 | 47.7775ms | 974206 | 30 | 4.24246e+07 | 246912 | 1(Win) |
| jeaiii::to_text | 3189.48 | 1.00713 | 131.026ms | 974206 | 30 | 2.582e+08 | 291293 | 2(Loss) |
| fmt::format_to | 2453.84 | 1.43142 | 362.364ms | 974206 | 48 | 1.40989e+09 | 378622 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7476.45 | 0.0783448 | 0.075599ms | 1939 | 30 | 1.12644 | 247.333 | 1(Win) |
| jeaiii::to_text | 4602.99 | 0.0725315 | 0.093553ms | 1939 | 30 | 2.54713 | 401.733 | 2(Loss) |
| fmt::format_to | 2928.84 | 0.053957 | 0.139068ms | 1939 | 30 | 3.48161 | 631.367 | 3(Loss) |
| std::to_chars | 2211.84 | 0.0560397 | 0.181316ms | 1939 | 30 | 6.58506 | 836.033 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7732.28 | 0.0700771 | 0.468416ms | 19390 | 30 | 84.2586 | 2391.5 | 1(Win) |
| jeaiii::to_text | 4755.7 | 0.026485 | 0.745852ms | 19390 | 30 | 31.8161 | 3888.33 | 2(Loss) |
| fmt::format_to | 2791.8 | 0.0445848 | 1.29958ms | 19390 | 30 | 261.628 | 6623.6 | 3(Loss) |
| std::to_chars | 2081.52 | 0.155852 | 1.63532ms | 19390 | 30 | 5750.94 | 8883.77 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 3003.48 | 2.12573 | 11.9784ms | 193805 | 30 | 5.13354e+07 | 61537.6 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2908.57 | 0.364293 | 11.615ms | 193805 | 30 | 1.60767e+06 | 63545.7 | 1(Tie) |
| fmt::format_to | 2044.68 | 1.80034 | 17.1588ms | 193805 | 30 | 7.94524e+07 | 90394 | 3(Loss) |
| std::to_chars | 1593.66 | 1.01586 | 23.0684ms | 193805 | 30 | 4.1642e+07 | 115977 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars **STATISTICAL TIE** | 2998.99 | 2.11161 | 267.312ms | 1938074 | 30 | 5.0809e+09 | 616305 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 2968.88 | 0.581644 | 336.984ms | 1938074 | 30 | 3.93362e+08 | 622556 | 1(Tie) |
| std::to_chars | 1432.23 | 1.74058 | 604.248ms | 1938074 | 30 | 1.51364e+10 | 1.2905e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6640.94 | 0.0911548 | 0.081553ms | 1986 | 30 | 2.02759 | 285.2 | 1(Win) |
| jeaiii::to_text | 4648.61 | 0.0641143 | 0.101956ms | 1986 | 30 | 2.04713 | 407.433 | 2(Loss) |
| fmt::format_to | 2872.16 | 0.480738 | 0.144245ms | 1986 | 30 | 301.495 | 659.433 | 3(Loss) |
| std::to_chars | 2085.59 | 0.0894015 | 0.414598ms | 1986 | 30 | 19.7747 | 908.133 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6383.78 | 0.517183 | 0.572136ms | 19867 | 30 | 7068.34 | 2967.93 | 1(Win) |
| jeaiii::to_text | 4955.19 | 0.0515284 | 0.73612ms | 19867 | 30 | 116.455 | 3823.6 | 2(Loss) |
| fmt::format_to | 2619.77 | 0.0376026 | 4.01981ms | 19867 | 30 | 221.868 | 7232.17 | 3(Loss) |
| std::to_chars | 2042.79 | 0.0508919 | 1.74688ms | 19867 | 30 | 668.395 | 9274.87 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7168 | 0.450355 | 5.36783ms | 198804 | 30 | 425683 | 26450.1 | 1(Win) |
| jeaiii::to_text | 4518.86 | 1.02245 | 42.5241ms | 198804 | 48 | 8.83322e+06 | 41956.2 | 2(Loss) |
| fmt::format_to | 2608.09 | 1.61339 | 30.8164ms | 198804 | 30 | 4.1267e+07 | 72694.6 | 3(Loss) |
| std::to_chars | 1973.12 | 0.456876 | 19.6881ms | 198804 | 30 | 5.78179e+06 | 96088.7 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5518.91 | 0.97074 | 65.9944ms | 1987838 | 30 | 3.33566e+08 | 343500 | 1(Win) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7438.82 | 0.0812025 | 0.074902ms | 1884 | 30 | 1.15402 | 241.533 | 1(Win) |
| jeaiii::to_text | 4313.86 | 0.0761429 | 0.103978ms | 1884 | 30 | 3.01724 | 416.5 | 2(Loss) |
| fmt::format_to | 2830.97 | 0.0551708 | 0.139114ms | 1884 | 30 | 3.67816 | 634.667 | 3(Loss) |
| std::to_chars | 1934.04 | 0.0696266 | 0.246293ms | 1884 | 30 | 12.5517 | 929 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7111.77 | 0.214681 | 0.501396ms | 18873 | 30 | 885.592 | 2530.83 | 1(Win) |
| jeaiii::to_text | 4510.73 | 0.046045 | 0.762749ms | 18873 | 30 | 101.269 | 3990.2 | 2(Loss) |
| fmt::format_to | 2516.04 | 0.0382985 | 7.10626ms | 18873 | 48 | 360.291 | 7153.58 | 3(Loss) |
| std::to_chars | 1957.15 | 2.02018 | 1.6675ms | 18873 | 30 | 1.03547e+06 | 9196.4 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6594.09 | 1.26672 | 12.8975ms | 188790 | 30 | 3.58863e+06 | 27303.9 | 1(Win) |
| jeaiii::to_text | 3993.66 | 2.01421 | 9.24198ms | 188790 | 30 | 2.47369e+07 | 45082.5 | 2(Loss) |
| fmt::format_to | 2545.48 | 0.937468 | 16.1778ms | 188790 | 30 | 1.31903e+07 | 70731 | 3(Loss) |
| std::to_chars | 1853.34 | 1.45009 | 17.3789ms | 188790 | 30 | 5.95333e+07 | 97146 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 4320.19 | 1.85593 | 78.4209ms | 1887866 | 30 | 1.79466e+09 | 416743 | 1(Win) |
| std::to_chars | 1776.21 | 2.4433 | 981.171ms | 1887866 | 48 | 2.94406e+10 | 1.01362e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7350.77 | 0.17967 | 0.078573ms | 1947 | 30 | 6.17931 | 252.6 | 1(Win) |
| jeaiii::to_text | 5020.2 | 0.277948 | 0.095387ms | 1947 | 30 | 31.7057 | 369.867 | 2(Loss) |
| fmt::format_to | 2738.11 | 0.468392 | 0.151379ms | 1947 | 30 | 302.671 | 678.133 | 3(Loss) |
| std::to_chars | 2286.14 | 0.0623067 | 0.190465ms | 1947 | 30 | 7.68276 | 812.2 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 7170.21 | 0.300366 | 0.790122ms | 19397 | 30 | 1801.47 | 2579.9 | 1(Win) |
| jeaiii::to_text | 5230.42 | 0.0341123 | 0.667693ms | 19397 | 30 | 43.6655 | 3536.7 | 2(Loss) |
| std::to_chars | 2123.68 | 0.783293 | 3.82346ms | 19397 | 30 | 139657 | 8710.57 | 3(Loss) |
| fmt::format_to | 1842.96 | 0.401914 | 4.7428ms | 19397 | 30 | 48823.4 | 10037.4 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 6286.57 | 0.962838 | 5.45526ms | 193872 | 30 | 2.40564e+06 | 29410.4 | 1(Win) |
| jeaiii::to_text | 3751.59 | 1.0588 | 9.11116ms | 193872 | 30 | 8.16869e+06 | 49283.3 | 2(Loss) |
| std::to_chars | 1513 | 1.08481 | 23.3409ms | 193872 | 30 | 5.2721e+07 | 122201 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3393.76 | 2.36727 | 501.418ms | 1939510 | 48 | 7.99023e+09 | 545018 | 1(Win) |
| fmt::format_to | 1556.18 | 2.49865 | 216.177ms | 1939510 | 30 | 2.64603e+10 | 1.18859e+06 | 2(Loss) |
| std::to_chars | 1347.13 | 2.37954 | 298.129ms | 1939510 | 30 | 3.2024e+10 | 1.37304e+06 | 3(Loss) |
