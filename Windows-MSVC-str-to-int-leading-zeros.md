# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 246.64 | 1.63252 | 0.1933ms | 100 | 30 | 1195.4 | 386.667 | 1(Win) |
| std::from_chars | 117.255 | 0.776118 | 0.1839ms | 100 | 30 | 1195.4 | 813.333 | 2(Loss) |
| strtoll/strtoull | 61.9269 | 0.667749 | 0.323ms | 100 | 30 | 3172.41 | 1540 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 248.353 | 0.267795 | 0.8071ms | 1000 | 30 | 3172.41 | 3840 | 1(Win) |
| strtoll/strtoull | 52.8547 | 2.22463 | 7.9602ms | 1000 | 30 | 4.83357e+06 | 18043.3 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 65.5431 | 1.29057 | 26.4999ms | 10000 | 30 | 1.05786e+08 | 145503 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 64.0953 | 0.953184 | 26.9943ms | 10000 | 30 | 6.03423e+07 | 148790 | 1(Tie) |
| strtoll/strtoull | 36.2692 | 1.08734 | 45.8859ms | 10000 | 30 | 2.45231e+08 | 262943 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 59.8598 | 0.335956 | 288.036ms | 100000 | 30 | 8.59438e+08 | 1.59318e+06 | 1(Win) |
| vn::from_chars | 57.7846 | 0.370258 | 296.651ms | 100000 | 30 | 1.12023e+09 | 1.6504e+06 | 2(Loss) |
| strtoll/strtoull | 36.4051 | 0.474487 | 470.029ms | 100000 | 30 | 4.63495e+09 | 2.61962e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 257.75 | 2.2999 | 0.0868ms | 100 | 30 | 2172.41 | 370 | 1(Win) |
| std::from_chars | 114.441 | 1.05045 | 0.1675ms | 100 | 30 | 2298.85 | 833.333 | 2(Loss) |
| strtoll/strtoull | 63.3145 | 0.234412 | 1.4838ms | 100 | 48 | 598.404 | 1506.25 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 287.251 | 0.223729 | 0.6991ms | 1000 | 30 | 1655.17 | 3320 | 1(Win) |
| std::from_chars | 104.265 | 0.154911 | 1.7849ms | 1000 | 30 | 6022.99 | 9146.67 | 2(Loss) |
| strtoll/strtoull | 50.5213 | 2.3348 | 7.8722ms | 1000 | 30 | 5.82737e+06 | 18876.7 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 78.1231 | 0.788659 | 22.2862ms | 10000 | 30 | 2.78062e+07 | 122073 | 1(Win) |
| vn::from_chars | 73.7548 | 0.659225 | 23.8665ms | 10000 | 30 | 2.17976e+07 | 129303 | 2(Loss) |
| strtoll/strtoull | 43.3764 | 0.691415 | 40.7233ms | 10000 | 30 | 6.93252e+07 | 219860 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 75.1896 | 0.288441 | 230.304ms | 100000 | 30 | 4.01531e+08 | 1.26836e+06 | 1(Win) |
| vn::from_chars | 66.4365 | 0.275384 | 259.442ms | 100000 | 30 | 4.68796e+08 | 1.43547e+06 | 2(Loss) |
| strtoll/strtoull | 42.6068 | 0.297368 | 415.337ms | 100000 | 30 | 1.32908e+09 | 2.23831e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 253.188 | 2.08514 | 0.0854ms | 100 | 30 | 1850.57 | 376.667 | 1(Win) |
| std::from_chars | 120.464 | 0.509242 | 0.7698ms | 100 | 48 | 780.142 | 791.667 | 2(Loss) |
| strtoll/strtoull | 61.0026 | 0.572402 | 0.2989ms | 100 | 30 | 2402.3 | 1563.33 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.741 | 0.357897 | 1.7774ms | 1000 | 30 | 5471.26 | 3773.33 | 1(Win) |
| std::from_chars | 99.5138 | 1.13106 | 5.5413ms | 1000 | 30 | 352471 | 9583.33 | 2(Loss) |
| strtoll/strtoull | 50.3812 | 2.0255 | 19.2456ms | 1000 | 48 | 7.05615e+06 | 18929.2 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 57.0288 | 2.21761 | 30.0513ms | 10000 | 30 | 4.12577e+08 | 167227 | 1(Win) |
| strtoll/strtoull | 41.3628 | 2.07566 | 47.6967ms | 10000 | 30 | 6.87092e+08 | 230563 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 65.3782 | 2.46149 | 256.797ms | 100000 | 30 | 3.86768e+10 | 1.4587e+06 | 1(Win) |
| vn::from_chars | 60.0592 | 1.50301 | 280.99ms | 100000 | 30 | 1.70879e+10 | 1.58789e+06 | 2(Loss) |
| strtoll/strtoull | 39.7179 | 1.76235 | 1040.12ms | 100000 | 30 | 5.372e+10 | 2.40112e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 253.188 | 2.08514 | 0.0853ms | 100 | 30 | 1850.57 | 376.667 | 1(Win) |
| std::from_chars | 124.392 | 1.1418 | 0.1664ms | 100 | 30 | 2298.85 | 766.667 | 2(Loss) |
| strtoll/strtoull | 65.0232 | 0.596847 | 0.2872ms | 100 | 30 | 2298.85 | 1466.67 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 268.893 | 0.518902 | 0.8095ms | 1000 | 30 | 10160.9 | 3546.67 | 1(Win) |
| std::from_chars | 110.464 | 0.315793 | 4.9426ms | 1000 | 30 | 22298.9 | 8633.33 | 2(Loss) |
| strtoll/strtoull | 49.4473 | 2.04648 | 3.5597ms | 1000 | 30 | 4.67361e+06 | 19286.7 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 76.6742 | 1.65442 | 22.1787ms | 10000 | 30 | 1.27033e+08 | 124380 | 1(Win) |
| std::from_chars | 72.5154 | 1.1029 | 62.5351ms | 10000 | 30 | 6.3115e+07 | 131513 | 2(Loss) |
| strtoll/strtoull | 40.5848 | 1.5256 | 43.0427ms | 10000 | 30 | 3.85547e+08 | 234983 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 72.6672 | 2.27124 | 248.88ms | 100000 | 30 | 2.66544e+10 | 1.31239e+06 | 1(Win) |
| vn::from_chars | 58.2088 | 1.63142 | 284.509ms | 100000 | 30 | 2.14327e+10 | 1.63837e+06 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 192.015 | 1.59601 | 0.496ms | 200 | 30 | 7540.23 | 993.333 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 189.472 | 0.460138 | 0.2204ms | 200 | 30 | 643.678 | 1006.67 | 1(Tie) |
| strtoll/strtoull | 104.992 | 0.650955 | 0.8119ms | 200 | 30 | 4195.4 | 1816.67 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 372.529 | 0.196432 | 2.3398ms | 2000 | 30 | 3034.48 | 5120 | 1(Win) |
| std::from_chars | 157.027 | 0.739242 | 2.5046ms | 2000 | 30 | 241885 | 12146.7 | 2(Loss) |
| strtoll/strtoull | 87.4931 | 2.29611 | 9.7463ms | 2000 | 30 | 7.51655e+06 | 21800 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 141.219 | 1.1664 | 25.6243ms | 20000 | 30 | 7.44541e+07 | 135063 | 1(Win) |
| std::from_chars | 75.2861 | 2.19098 | 40.1048ms | 20000 | 30 | 9.24331e+08 | 253347 | 2(Loss) |
| strtoll/strtoull | 66.6881 | 1.2166 | 311.179ms | 20000 | 48 | 5.81169e+08 | 286010 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 117.266 | 1.32022 | 307.965ms | 200000 | 30 | 1.38335e+10 | 1.62651e+06 | 1(Win) |
| std::from_chars | 106.572 | 1.65674 | 318.047ms | 200000 | 30 | 2.6376e+10 | 1.78973e+06 | 2(Loss) |
| strtoll/strtoull | 63.782 | 0.928623 | 543.731ms | 200000 | 30 | 2.31347e+10 | 2.99042e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 373.99 | 1.09233 | 0.1102ms | 200 | 30 | 931.034 | 510 | 1(Win) |
| std::from_chars | 164.427 | 0.784239 | 0.2724ms | 200 | 30 | 2482.76 | 1160 | 2(Loss) |
| strtoll/strtoull | 104.037 | 0.477478 | 0.3571ms | 200 | 30 | 2298.85 | 1833.33 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 373.99 | 0.338967 | 0.9997ms | 2000 | 30 | 8965.52 | 5100 | 1(Win) |
| std::from_chars | 145.451 | 0.181838 | 2.4751ms | 2000 | 30 | 17057.5 | 13113.3 | 2(Loss) |
| strtoll/strtoull | 80.9685 | 2.27366 | 10.1145ms | 2000 | 30 | 8.60599e+06 | 23556.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 140.529 | 2.01225 | 24.4477ms | 20000 | 30 | 2.23777e+08 | 135727 | 1(Win) |
| std::from_chars | 131.693 | 0.821007 | 26.8638ms | 20000 | 30 | 4.24182e+07 | 144833 | 2(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 133.235 | 1.46376 | 263.132ms | 200000 | 30 | 1.31731e+10 | 1.43157e+06 | 1(Win) |
| std::from_chars | 123.396 | 1.47456 | 311.885ms | 200000 | 30 | 1.55849e+10 | 1.54572e+06 | 2(Loss) |
| strtoll/strtoull | 72.6496 | 1.26178 | 522.302ms | 200000 | 30 | 3.29218e+10 | 2.62541e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 389.255 | 1.13691 | 0.1086ms | 200 | 30 | 931.034 | 490 | 1(Win) |
| std::from_chars | 112.861 | 0.434913 | 0.9713ms | 200 | 30 | 1620.69 | 1690 | 2(Loss) |
| strtoll/strtoull | 103.1 | 0.564847 | 0.3451ms | 200 | 30 | 3275.86 | 1850 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 410.477 | 0.199371 | 0.9147ms | 2000 | 30 | 2574.71 | 4646.67 | 1(Win) |
| std::from_chars | 158.068 | 1.33116 | 2.197ms | 2000 | 30 | 774023 | 12066.7 | 2(Loss) |
| strtoll/strtoull | 93.1929 | 1.81784 | 3.6935ms | 2000 | 30 | 4.15264e+06 | 20466.7 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.195 | 1.3856 | 20.2175ms | 20000 | 30 | 7.06671e+07 | 110767 | 1(Win) |
| std::from_chars | 139.27 | 0.580729 | 24.8015ms | 20000 | 30 | 1.89764e+07 | 136953 | 2(Loss) |
| strtoll/strtoull | 80.4155 | 0.474874 | 100.882ms | 20000 | 30 | 3.80591e+07 | 237187 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 150.142 | 0.26742 | 230.194ms | 200000 | 30 | 3.46227e+08 | 1.27036e+06 | 1(Win) |
| std::from_chars | 135.926 | 0.297718 | 252.487ms | 200000 | 30 | 5.23584e+08 | 1.40323e+06 | 2(Loss) |
| strtoll/strtoull | 80.3539 | 0.266356 | 428.135ms | 200000 | 30 | 1.1992e+09 | 2.37369e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 408.718 | 1.87581 | 0.1089ms | 200 | 30 | 2298.85 | 466.667 | 1(Win) |
| std::from_chars | 210.369 | 0.510888 | 0.1908ms | 200 | 30 | 643.678 | 906.667 | 2(Loss) |
| strtoll/strtoull | 111.977 | 0.342827 | 0.3255ms | 200 | 30 | 1022.99 | 1703.33 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 415.544 | 0.217865 | 2.0073ms | 2000 | 30 | 3000 | 4590 | 1(Win) |
| std::from_chars | 166.387 | 0.626667 | 2.121ms | 2000 | 30 | 154816 | 11463.3 | 2(Loss) |
| strtoll/strtoull | 94.1901 | 1.81648 | 3.7205ms | 2000 | 30 | 4.05914e+06 | 20250 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.359 | 1.33973 | 17.3618ms | 20000 | 30 | 4.87976e+07 | 95196.7 | 1(Win) |
| std::from_chars | 151.919 | 1.17343 | 22.4921ms | 20000 | 30 | 6.51129e+07 | 125550 | 2(Loss) |
| strtoll/strtoull | 82.1944 | 0.47822 | 42.0552ms | 20000 | 30 | 3.69446e+07 | 232053 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 164.837 | 0.401233 | 207.827ms | 200000 | 30 | 6.46642e+08 | 1.15711e+06 | 1(Win) |
| std::from_chars | 143.233 | 0.380395 | 240.608ms | 200000 | 30 | 7.69773e+08 | 1.33164e+06 | 2(Loss) |
| strtoll/strtoull | 79.8248 | 0.203222 | 430.741ms | 200000 | 30 | 7.07375e+08 | 2.38942e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 589.902 | 1.43259 | 0.1324ms | 400 | 30 | 2574.71 | 646.667 | 1(Win) |
| std::from_chars | 407.263 | 0.955362 | 0.2045ms | 400 | 30 | 2402.3 | 936.667 | 2(Loss) |
| strtoll/strtoull | 182.231 | 0.221277 | 0.4169ms | 400 | 30 | 643.678 | 2093.33 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 598.854 | 1.6146 | 1.2293ms | 4000 | 30 | 317345 | 6370 | 1(Win) |
| std::from_chars | 235.912 | 1.55045 | 3.0714ms | 4000 | 30 | 1.88562e+06 | 16170 | 2(Loss) |
| strtoll/strtoull | 144.441 | 1.03773 | 4.8784ms | 4000 | 30 | 2.25334e+06 | 26410 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 256.255 | 0.934609 | 26.6611ms | 40000 | 30 | 5.80707e+07 | 148863 | 1(Win) |
| std::from_chars | 210.928 | 0.686761 | 33.1292ms | 40000 | 30 | 4.62791e+07 | 180853 | 2(Loss) |
| strtoll/strtoull | 119.311 | 1.11954 | 58.1433ms | 40000 | 30 | 3.8438e+08 | 319727 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.245 | 0.272209 | 299.707ms | 400000 | 30 | 6.15523e+08 | 1.66402e+06 | 1(Win) |
| std::from_chars | 212.532 | 0.213477 | 323.789ms | 400000 | 30 | 4.40446e+08 | 1.79488e+06 | 2(Loss) |
| strtoll/strtoull | 116.023 | 0.466346 | 593.906ms | 400000 | 30 | 7.05292e+09 | 3.28788e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 580.918 | 1.4013 | 0.1397ms | 400 | 30 | 2540.23 | 656.667 | 1(Win) |
| std::from_chars | 389.255 | 0.75794 | 0.2167ms | 400 | 30 | 1655.17 | 980 | 2(Loss) |
| strtoll/strtoull | 167.556 | 0.344979 | 0.4593ms | 400 | 30 | 1850.57 | 2276.67 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 581.509 | 0.156758 | 1.395ms | 4000 | 30 | 3172.41 | 6560 | 1(Win) |
| std::from_chars | 278.107 | 2.06709 | 2.5224ms | 4000 | 30 | 2.41178e+06 | 13716.7 | 2(Loss) |
| strtoll/strtoull | 139.392 | 1.53571 | 4.9049ms | 4000 | 30 | 5.29885e+06 | 27366.7 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 295.812 | 0.584731 | 23.4491ms | 40000 | 30 | 1.70577e+07 | 128957 | 1(Win) |
| std::from_chars | 256.542 | 0.626309 | 26.8746ms | 40000 | 30 | 2.60196e+07 | 148697 | 2(Loss) |
| strtoll/strtoull | 135.516 | 0.604402 | 50.1538ms | 40000 | 30 | 8.68379e+07 | 281493 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 268.179 | 0.289865 | 256.176ms | 400000 | 30 | 5.10016e+08 | 1.42245e+06 | 1(Win) |
| std::from_chars | 240.475 | 0.409973 | 283.729ms | 400000 | 30 | 1.26886e+09 | 1.58632e+06 | 2(Loss) |
| strtoll/strtoull | 131.6 | 0.253818 | 516.991ms | 400000 | 30 | 1.62395e+09 | 2.8987e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 615.274 | 1.19803 | 0.1409ms | 400 | 30 | 1655.17 | 620 | 1(Win) |
| std::from_chars | 369.164 | 0.847138 | 0.2069ms | 400 | 30 | 2298.85 | 1033.33 | 2(Loss) |
| strtoll/strtoull | 179.656 | 0.369892 | 0.428ms | 400 | 30 | 1850.57 | 2123.33 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 588.083 | 0.1918 | 1.255ms | 4000 | 30 | 4643.68 | 6486.67 | 1(Win) |
| std::from_chars | 269.02 | 0.114165 | 6.1104ms | 4000 | 30 | 7862.07 | 14180 | 2(Loss) |
| strtoll/strtoull | 148.432 | 1.71231 | 4.7787ms | 4000 | 30 | 5.80966e+06 | 25700 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 308.732 | 1.44756 | 22.2505ms | 40000 | 30 | 9.59735e+07 | 123560 | 1(Win) |
| std::from_chars | 247.178 | 0.890482 | 28.0321ms | 40000 | 30 | 5.66594e+07 | 154330 | 2(Loss) |
| strtoll/strtoull | 134.959 | 0.647321 | 50.9747ms | 40000 | 30 | 1.00434e+08 | 282657 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 276.671 | 0.307245 | 246.825ms | 400000 | 30 | 5.38372e+08 | 1.37878e+06 | 1(Win) |
| std::from_chars | 244.451 | 0.461238 | 282.72ms | 400000 | 30 | 1.5542e+09 | 1.56052e+06 | 2(Loss) |
| strtoll/strtoull | 135.874 | 0.252824 | 505.645ms | 400000 | 30 | 1.51149e+09 | 2.80753e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 605.508 | 1.35073 | 0.1298ms | 400 | 30 | 2172.41 | 630 | 1(Win) |
| std::from_chars | 430.229 | 0.711928 | 0.1844ms | 400 | 30 | 1195.4 | 886.667 | 2(Loss) |
| strtoll/strtoull | 187.301 | 0.439373 | 0.4169ms | 400 | 30 | 2402.3 | 2036.67 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 606.149 | 0.214587 | 1.227ms | 4000 | 30 | 5471.26 | 6293.33 | 1(Win) |
| std::from_chars | 257.924 | 1.89121 | 2.8077ms | 4000 | 30 | 2.34714e+06 | 14790 | 2(Loss) |
| strtoll/strtoull | 150.264 | 1.03354 | 4.6883ms | 4000 | 30 | 2.06533e+06 | 25386.7 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 356.27 | 1.03815 | 19.2443ms | 40000 | 30 | 3.70682e+07 | 107073 | 1(Win) |
| std::from_chars | 297.126 | 1.17748 | 23.3145ms | 40000 | 30 | 6.85598e+07 | 128387 | 2(Loss) |
| strtoll/strtoull | 135.034 | 0.604557 | 50.9714ms | 40000 | 30 | 8.75048e+07 | 282500 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.994 | 0.363631 | 220.091ms | 400000 | 30 | 5.89238e+08 | 1.21878e+06 | 1(Win) |
| std::from_chars | 236.558 | 0.388523 | 292.748ms | 400000 | 30 | 1.17761e+09 | 1.61259e+06 | 2(Loss) |
| strtoll/strtoull | 133.697 | 0.180083 | 514.833ms | 400000 | 30 | 7.92041e+08 | 2.85325e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 841.477 | 0.510888 | 0.1863ms | 800 | 30 | 643.678 | 906.667 | 1(Win) |
| std::from_chars | 431.853 | 1.61322 | 0.3704ms | 800 | 30 | 24367.8 | 1766.67 | 2(Loss) |
| strtoll/strtoull | 229.571 | 0.276887 | 0.6461ms | 800 | 30 | 2540.23 | 3323.33 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 827.483 | 0.286722 | 1.8147ms | 8000 | 30 | 20965.5 | 9220 | 1(Win) |
| std::from_chars | 348.958 | 0.174731 | 3.9894ms | 8000 | 30 | 43781.6 | 21863.3 | 2(Loss) |
| strtoll/strtoull | 183.151 | 1.56335 | 37.9479ms | 8000 | 48 | 2.0357e+07 | 41656.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 513.718 | 1.01927 | 26.6583ms | 80000 | 30 | 6.87433e+07 | 148513 | 1(Win) |
| std::from_chars | 354.246 | 0.757174 | 39.2695ms | 80000 | 30 | 7.9778e+07 | 215370 | 2(Loss) |
| strtoll/strtoull | 187.533 | 1.41831 | 73.1762ms | 80000 | 30 | 9.98827e+08 | 406830 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 445.895 | 0.301072 | 309.764ms | 800000 | 30 | 7.96119e+08 | 1.71103e+06 | 1(Win) |
| std::from_chars | 341.142 | 0.357677 | 407.574ms | 800000 | 30 | 1.91961e+09 | 2.23643e+06 | 2(Loss) |
| strtoll/strtoull | 177.556 | 0.572142 | 768.048ms | 800000 | 30 | 1.81317e+10 | 4.2969e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 805.922 | 0.978603 | 0.2033ms | 800 | 30 | 2574.71 | 946.667 | 1(Win) |
| std::from_chars | 423.855 | 0.922728 | 0.8552ms | 800 | 30 | 8275.86 | 1800 | 2(Loss) |
| strtoll/strtoull | 243.653 | 0.602566 | 3.2235ms | 800 | 48 | 17087.8 | 3131.25 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 814.236 | 0.205637 | 1.7561ms | 8000 | 30 | 11137.9 | 9370 | 1(Win) |
| std::from_chars | 418.125 | 2.20799 | 8.1498ms | 8000 | 30 | 4.86947e+06 | 18246.7 | 2(Loss) |
| strtoll/strtoull | 207.772 | 1.16447 | 6.6414ms | 8000 | 30 | 5.4851e+06 | 36720 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 555.067 | 0.598569 | 25.2324ms | 80000 | 30 | 2.03067e+07 | 137450 | 1(Win) |
| std::from_chars | 408.426 | 1.34073 | 33.8653ms | 80000 | 30 | 1.88173e+08 | 186800 | 2(Loss) |
| strtoll/strtoull | 206.204 | 0.767918 | 66.4638ms | 80000 | 30 | 2.4218e+08 | 369993 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 520.768 | 0.284575 | 264.432ms | 800000 | 30 | 5.21443e+08 | 1.46503e+06 | 1(Win) |
| std::from_chars | 377.584 | 0.328738 | 360.521ms | 800000 | 30 | 1.32366e+09 | 2.02058e+06 | 2(Loss) |
| strtoll/strtoull | 205.068 | 0.162469 | 680.316ms | 800000 | 30 | 1.09609e+09 | 3.72042e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 850.862 | 0.651244 | 0.4004ms | 800 | 30 | 1022.99 | 896.667 | 1(Win) |
| std::from_chars | 380.202 | 0.629146 | 0.3814ms | 800 | 30 | 4781.61 | 2006.67 | 2(Loss) |
| strtoll/strtoull | 240.17 | 0.418368 | 0.6512ms | 800 | 30 | 5298.85 | 3176.67 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 873.595 | 0.17648 | 1.6582ms | 8000 | 30 | 7126.44 | 8733.33 | 1(Win) |
| strtoll/strtoull | 219.931 | 1.13523 | 6.3496ms | 8000 | 30 | 4.65266e+06 | 34690 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 596.046 | 0.528955 | 23.3427ms | 80000 | 30 | 1.37524e+07 | 128000 | 1(Win) |
| std::from_chars | 390.377 | 0.91751 | 36.0333ms | 80000 | 30 | 9.64617e+07 | 195437 | 2(Loss) |
| strtoll/strtoull | 213.91 | 0.58311 | 64.5102ms | 80000 | 30 | 1.2976e+08 | 356663 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 545.834 | 0.411001 | 252.647ms | 800000 | 30 | 9.90068e+08 | 1.39775e+06 | 1(Win) |
| std::from_chars | 398.669 | 0.567797 | 345.613ms | 800000 | 30 | 3.54211e+09 | 1.91372e+06 | 2(Loss) |
| strtoll/strtoull | 210.147 | 0.193769 | 656.264ms | 800000 | 30 | 1.48465e+09 | 3.63051e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 854.037 | 0.518514 | 0.1987ms | 800 | 30 | 643.678 | 893.333 | 1(Win) |
| std::from_chars | 519.006 | 0.578886 | 0.2888ms | 800 | 30 | 2172.41 | 1470 | 2(Loss) |
| strtoll/strtoull | 224.835 | 0.52742 | 0.6304ms | 800 | 30 | 9609.2 | 3393.33 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 856.273 | 0.082492 | 1.7449ms | 8000 | 30 | 1620.69 | 8910 | 1(Win) |
| std::from_chars | 463.981 | 0.721745 | 3.0175ms | 8000 | 30 | 422540 | 16443.3 | 2(Loss) |
| strtoll/strtoull | 214.429 | 1.8917 | 6.5322ms | 8000 | 30 | 1.35906e+07 | 35580 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.273 | 1.05709 | 27.4293ms | 80000 | 30 | 7.85945e+07 | 153117 | 1(Win) |
| std::from_chars | 384.863 | 0.938761 | 35.4975ms | 80000 | 30 | 1.03896e+08 | 198237 | 2(Loss) |
| strtoll/strtoull | 210.792 | 0.581612 | 65.3785ms | 80000 | 30 | 1.32942e+08 | 361940 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 454.812 | 0.290116 | 722.024ms | 800000 | 30 | 7.10526e+08 | 1.67748e+06 | 1(Win) |
| std::from_chars | 438.932 | 0.330049 | 311.63ms | 800000 | 30 | 9.87336e+08 | 1.73817e+06 | 2(Loss) |
| strtoll/strtoull | 208.283 | 0.24272 | 657.064ms | 800000 | 30 | 2.37139e+09 | 3.66299e+06 | 3(Loss) |
