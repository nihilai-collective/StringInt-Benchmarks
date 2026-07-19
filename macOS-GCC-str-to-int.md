# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the GCC 16.1.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 469.574 | 1.99837 | 0.416768ms | 1000 | 30 | 49415.7 | 2030.93 | 1(Win) |
| std::from_chars | 285.19 | 1.81504 | 3.02413ms | 1000 | 48 | 176825 | 3344 | 2(Loss) |
| strtoll/strtoull | 107.979 | 0.819245 | 1.63507ms | 1000 | 30 | 157060 | 8832 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 180.752 | 0.329285 | 23.071ms | 10000 | 30 | 905527 | 52761.6 | 1(Win) |
| std::from_chars | 161.571 | 0.309617 | 11.682ms | 10000 | 30 | 1.00195e+06 | 59025.1 | 2(Loss) |
| strtoll/strtoull | 87.4618 | 0.165031 | 19.8172ms | 10000 | 30 | 971439 | 109039 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 131.414 | 0.841308 | 127.12ms | 100000 | 30 | 1.11827e+09 | 725700 | 1(Win) |
| std::from_chars | 126.37 | 0.277692 | 135.027ms | 100000 | 30 | 1.31754e+08 | 754671 | 2(Loss) |
| strtoll/strtoull | 81.1015 | 0.0541024 | 212.06ms | 100000 | 30 | 1.21422e+07 | 1.1759e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 492.6 | 2.07984 | 1.83194ms | 1000 | 48 | 77824 | 1936 | 1(Win) |
| std::from_chars | 238.291 | 0.572402 | 0.732928ms | 1000 | 30 | 15743.7 | 4002.13 | 2(Loss) |
| strtoll/strtoull | 113.116 | 1.22615 | 1.55802ms | 1000 | 30 | 320599 | 8430.93 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 284.446 | 2.1175 | 6.05901ms | 10000 | 30 | 1.51207e+07 | 33527.5 | 1(Win) |
| std::from_chars | 204.499 | 0.378756 | 8.55808ms | 10000 | 30 | 935960 | 46634.7 | 2(Loss) |
| strtoll/strtoull | 112.151 | 0.219898 | 15.3551ms | 10000 | 30 | 1.04895e+06 | 85034.7 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 198.133 | 1.54613 | 84.418ms | 100000 | 30 | 1.6615e+09 | 481331 | 1(Win) |
| std::from_chars | 161.138 | 1.77817 | 92.2522ms | 100000 | 30 | 3.32256e+09 | 591838 | 2(Loss) |
| strtoll/strtoull | 111.628 | 0.147399 | 154.39ms | 100000 | 30 | 4.75732e+07 | 854332 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 322.071 | 1.28991 | 0.576ms | 1000 | 30 | 43766 | 2961.07 | 1(Win) |
| strtoll/strtoull | 116.173 | 0.979713 | 1.53216ms | 1000 | 30 | 194047 | 8209.07 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 528.91 | 0.25181 | 3.37382ms | 10000 | 30 | 61844.9 | 18030.9 | 1(Win) |
| std::from_chars | 222.982 | 0.188045 | 7.84307ms | 10000 | 30 | 194047 | 42769.1 | 2(Loss) |
| strtoll/strtoull | 113.668 | 0.306153 | 15.1621ms | 10000 | 30 | 1.97934e+06 | 83899.7 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 247.046 | 0.114242 | 70.1501ms | 100000 | 30 | 5.83466e+06 | 386031 | 1(Win) |
| std::from_chars | 208.899 | 0.0790361 | 82.5848ms | 100000 | 30 | 3.90572e+06 | 456525 | 2(Loss) |
| strtoll/strtoull | 111.336 | 0.132274 | 154.492ms | 100000 | 30 | 3.85126e+07 | 856576 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.089 | 2.18011 | 1.80403ms | 1000 | 48 | 83633.9 | 1914.67 | 1(Win) |
| std::from_chars | 328.702 | 2.12933 | 0.563968ms | 1000 | 30 | 114500 | 2901.33 | 2(Loss) |
| strtoll/strtoull | 105.135 | 0.535874 | 2.40819ms | 1000 | 30 | 70884.3 | 9070.93 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 430.172 | 0.31123 | 4.16ms | 10000 | 30 | 142823 | 22169.6 | 1(Win) |
| std::from_chars | 185.307 | 0.507328 | 9.31507ms | 10000 | 30 | 2.0451e+06 | 51464.5 | 2(Loss) |
| strtoll/strtoull | 102.399 | 0.22459 | 16.8591ms | 10000 | 30 | 1.31253e+06 | 93132.8 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 184.177 | 0.228516 | 93.662ms | 100000 | 30 | 4.20033e+07 | 517803 | 1(Win) |
| std::from_chars | 172.905 | 0.121639 | 100.178ms | 100000 | 30 | 1.35037e+07 | 551561 | 2(Loss) |
| strtoll/strtoull | 100.574 | 0.377508 | 170.488ms | 100000 | 30 | 3.84418e+08 | 948233 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 501.16 | 2.08345 | 0.727808ms | 2000 | 30 | 188623 | 3805.87 | 1(Win) |
| std::from_chars | 424.132 | 2.07296 | 0.868096ms | 2000 | 30 | 260713 | 4497.07 | 2(Loss) |
| strtoll/strtoull | 145.235 | 0.513194 | 2.38003ms | 2000 | 30 | 136270 | 13132.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 350.231 | 0.492208 | 10.75ms | 20000 | 30 | 2.15561e+06 | 54459.7 | 1(Win) |
| std::from_chars | 232.685 | 0.295103 | 16.1748ms | 20000 | 30 | 1.75546e+06 | 81971.2 | 2(Loss) |
| strtoll/strtoull | 135.301 | 0.125975 | 25.4472ms | 20000 | 30 | 946129 | 140971 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.441 | 0.157231 | 154.801ms | 200000 | 30 | 5.45293e+07 | 857463 | 1(Win) |
| std::from_chars | 211.364 | 0.0543902 | 163.618ms | 200000 | 30 | 7.22704e+06 | 902400 | 2(Loss) |
| strtoll/strtoull | 132.756 | 0.0974173 | 259.527ms | 200000 | 30 | 5.87685e+07 | 1.43673e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 191.041 | 1.42843 | 0.479232ms | 200 | 30 | 6101.63 | 998.4 | 1(Win) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 454.304 | 1.74436 | 0.773888ms | 2000 | 30 | 160902 | 4198.4 | 1(Win) |
| std::from_chars | 331.137 | 1.51807 | 1.11181ms | 2000 | 30 | 229376 | 5760 | 2(Loss) |
| strtoll/strtoull | 176.554 | 1.05609 | 1.96198ms | 2000 | 30 | 390504 | 10803.2 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 316.687 | 1.04492 | 10.4351ms | 20000 | 30 | 1.18821e+07 | 60228.3 | 1(Win) |
| std::from_chars | 288.559 | 0.618784 | 11.8971ms | 20000 | 30 | 5.0187e+06 | 66099.2 | 2(Loss) |
| strtoll/strtoull | 173.242 | 0.124612 | 19.8751ms | 20000 | 30 | 564664 | 110097 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.821 | 0.389993 | 112.014ms | 200000 | 30 | 1.72931e+08 | 615629 | 1(Win) |
| std::from_chars | 297.326 | 0.437109 | 118.575ms | 200000 | 30 | 2.35883e+08 | 641502 | 2(Loss) |
| strtoll/strtoull | 174.654 | 0.0999322 | 198.266ms | 200000 | 30 | 3.573e+07 | 1.09207e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 584.359 | 1.96078 | 3.05101ms | 2000 | 48 | 196608 | 3264 | 1(Win) |
| std::from_chars | 369.45 | 1.48634 | 0.98304ms | 2000 | 30 | 176646 | 5162.67 | 2(Loss) |
| strtoll/strtoull | 175.445 | 0.526345 | 1.99398ms | 2000 | 30 | 98228.7 | 10871.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 537.301 | 0.497872 | 6.50803ms | 20000 | 30 | 937089 | 35498.7 | 1(Win) |
| std::from_chars | 307.79 | 0.433469 | 11.254ms | 20000 | 30 | 2.16465e+06 | 61969.1 | 2(Loss) |
| strtoll/strtoull | 160.781 | 1.87522 | 20.066ms | 20000 | 30 | 1.48462e+08 | 118630 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 354.683 | 0.113379 | 99.0569ms | 200000 | 30 | 1.11523e+07 | 537762 | 1(Win) |
| std::from_chars | 307.617 | 0.143291 | 111.857ms | 200000 | 30 | 2.3681e+07 | 620041 | 2(Loss) |
| strtoll/strtoull | 171.858 | 0.324352 | 199.856ms | 200000 | 30 | 3.88751e+08 | 1.10984e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 544.335 | 2.03082 | 3.20102ms | 2000 | 48 | 243058 | 3504 | 1(Win) |
| std::from_chars | 384.051 | 0.91143 | 0.925184ms | 2000 | 30 | 61468.2 | 4966.4 | 2(Loss) |
| strtoll/strtoull | 186.42 | 0.781928 | 1.85395ms | 2000 | 30 | 192013 | 10231.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 526.915 | 0.261776 | 6.59098ms | 20000 | 30 | 269376 | 36198.4 | 1(Win) |
| std::from_chars | 284.844 | 0.461433 | 12.2051ms | 20000 | 30 | 2.86407e+06 | 66961.1 | 2(Loss) |
| strtoll/strtoull | 185.661 | 0.282521 | 18.922ms | 20000 | 30 | 2.5272e+06 | 102733 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 423.264 | 0.288016 | 81.792ms | 200000 | 30 | 5.05347e+07 | 450628 | 1(Win) |
| std::from_chars | 391.25 | 0.154637 | 87.8979ms | 200000 | 30 | 1.70491e+07 | 487501 | 2(Loss) |
| strtoll/strtoull | 185.539 | 0.401486 | 184.155ms | 200000 | 30 | 5.11034e+08 | 1.028e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 628.741 | 0.885302 | 1.1159ms | 4000 | 30 | 86552.7 | 6067.2 | 1(Win) |
| std::from_chars | 406.026 | 1.82505 | 1.71904ms | 4000 | 30 | 882024 | 9395.2 | 2(Loss) |
| strtoll/strtoull | 198.682 | 0.383571 | 3.55507ms | 4000 | 30 | 162710 | 19200 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 474.257 | 0.227571 | 14.7441ms | 40000 | 30 | 1.00519e+06 | 80435.2 | 1(Win) |
| std::from_chars | 297.706 | 0.49318 | 23.4829ms | 40000 | 30 | 1.19806e+07 | 128137 | 2(Loss) |
| strtoll/strtoull | 194.405 | 0.139696 | 35.466ms | 40000 | 30 | 2.25421e+06 | 196224 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 346.268 | 0.117882 | 201.829ms | 400000 | 30 | 5.0596e+07 | 1.10166e+06 | 1(Win) |
| std::from_chars | 298.848 | 0.254156 | 229.559ms | 400000 | 30 | 3.1575e+08 | 1.27647e+06 | 2(Loss) |
| strtoll/strtoull | 192.752 | 0.320586 | 355.004ms | 400000 | 30 | 1.20762e+09 | 1.97907e+06 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 581.32 | 1.36792 | 2.82803ms | 4000 | 30 | 241730 | 6562.13 | 1(Win) |
| std::from_chars | 422.129 | 0.492542 | 1.65402ms | 4000 | 30 | 59434.4 | 9036.8 | 2(Loss) |
| strtoll/strtoull | 233.561 | 0.554286 | 3.03411ms | 4000 | 30 | 245873 | 16332.8 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 462.338 | 0.149616 | 15.01ms | 40000 | 30 | 457170 | 82508.8 | 1(Win) |
| std::from_chars | 355.523 | 0.392245 | 19.306ms | 40000 | 30 | 5.31399e+06 | 107298 | 2(Loss) |
| strtoll/strtoull | 225.673 | 0.480737 | 29.8639ms | 40000 | 30 | 1.98106e+07 | 169037 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 418.619 | 0.128531 | 164.712ms | 400000 | 30 | 4.11548e+07 | 911258 | 1(Win) |
| std::from_chars | 377.713 | 0.0649877 | 182.25ms | 400000 | 30 | 1.29235e+07 | 1.00995e+06 | 2(Loss) |
| strtoll/strtoull | 231.133 | 0.0912996 | 297.229ms | 400000 | 30 | 6.81168e+07 | 1.65043e+06 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 622.611 | 1.34288 | 1.09082ms | 4000 | 30 | 203086 | 6126.93 | 1(Win) |
| std::from_chars | 413.156 | 0.850527 | 1.66605ms | 4000 | 30 | 185007 | 9233.07 | 2(Loss) |
| strtoll/strtoull | 231.265 | 0.584425 | 3.03283ms | 4000 | 30 | 278792 | 16494.9 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 524.32 | 0.325564 | 13.2119ms | 40000 | 30 | 1.68315e+06 | 72755.2 | 1(Win) |
| std::from_chars | 370.614 | 0.354742 | 45.472ms | 40000 | 30 | 3.99965e+06 | 102929 | 2(Loss) |
| strtoll/strtoull | 230.871 | 0.0855682 | 29.8949ms | 40000 | 30 | 599692 | 165231 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 473.408 | 0.0636945 | 147.42ms | 400000 | 30 | 7.90266e+06 | 805794 | 1(Win) |
| std::from_chars | 382.454 | 0.137982 | 180.234ms | 400000 | 30 | 5.68238e+07 | 997427 | 2(Loss) |
| strtoll/strtoull | 230.352 | 0.162199 | 298.019ms | 400000 | 30 | 2.16448e+08 | 1.65603e+06 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 650.706 | 1.15345 | 1.73798ms | 4000 | 30 | 137174 | 5862.4 | 1(Win) |
| std::from_chars | 431.501 | 0.782122 | 1.6192ms | 4000 | 30 | 143426 | 8840.53 | 2(Loss) |
| strtoll/strtoull | 242.954 | 0.705006 | 2.80013ms | 4000 | 30 | 367604 | 15701.3 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 609.122 | 0.570565 | 11.306ms | 40000 | 30 | 3.83039e+06 | 62626.1 | 1(Win) |
| std::from_chars | 451.277 | 0.594875 | 15.018ms | 40000 | 30 | 7.5859e+06 | 84531.2 | 2(Loss) |
| strtoll/strtoull | 248.408 | 0.223476 | 27.6948ms | 40000 | 30 | 3.53322e+06 | 153566 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 539.051 | 0.0951165 | 128.653ms | 400000 | 30 | 1.35923e+07 | 707669 | 1(Win) |
| std::from_chars | 458.187 | 0.0774997 | 150.636ms | 400000 | 30 | 1.24898e+07 | 832563 | 2(Loss) |
| strtoll/strtoull | 248.067 | 0.241213 | 278.419ms | 400000 | 30 | 4.12765e+08 | 1.53777e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 663.256 | 2.16834 | 2.05312ms | 8000 | 30 | 1.86634e+06 | 11502.9 | 1(Win) |
| std::from_chars | 458.733 | 1.07071 | 3.47494ms | 8000 | 30 | 951327 | 16631.5 | 2(Loss) |
| strtoll/strtoull | 287.205 | 0.371615 | 4.84685ms | 8000 | 30 | 292351 | 26564.3 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 598.881 | 1.49423 | 23.3669ms | 80000 | 30 | 1.08706e+08 | 127394 | 1(Win) |
| std::from_chars | 445.276 | 1.00891 | 30.7991ms | 80000 | 30 | 8.96494e+07 | 171341 | 2(Loss) |
| strtoll/strtoull | 285.636 | 0.117022 | 48.6851ms | 80000 | 30 | 2.93097e+06 | 267102 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 564.107 | 0.1146 | 244.438ms | 800000 | 30 | 7.20686e+07 | 1.35247e+06 | 1(Win) |
| std::from_chars | 377.574 | 1.32806 | 382.056ms | 800000 | 30 | 2.16038e+10 | 2.02063e+06 | 2(Loss) |
| strtoll/strtoull | 276.668 | 0.558834 | 494.147ms | 800000 | 30 | 7.12441e+09 | 2.7576e+06 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 685.636 | 1.58216 | 1.98784ms | 8000 | 30 | 929858 | 11127.5 | 1(Win) |
| std::from_chars | 508.862 | 0.157118 | 2.91098ms | 8000 | 30 | 16647.7 | 14993.1 | 2(Loss) |
| strtoll/strtoull | 326.899 | 0.747626 | 4.20403ms | 8000 | 30 | 913361 | 23338.7 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 680.626 | 0.162316 | 20.3231ms | 80000 | 30 | 993134 | 112094 | 1(Win) |
| std::from_chars | 508.977 | 0.312639 | 27.158ms | 80000 | 30 | 6.58855e+06 | 149897 | 2(Loss) |
| strtoll/strtoull | 309.185 | 0.356319 | 44.7629ms | 80000 | 30 | 2.31923e+07 | 246758 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 628.109 | 0.202235 | 220.153ms | 800000 | 30 | 1.81027e+08 | 1.21466e+06 | 1(Win) |
| std::from_chars | 509.569 | 0.124288 | 272.059ms | 800000 | 30 | 1.03885e+08 | 1.49722e+06 | 2(Loss) |
| strtoll/strtoull | 328.254 | 0.0806446 | 424.275ms | 800000 | 30 | 1.05398e+08 | 2.32423e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 757.686 | 1.17764 | 0.217088ms | 800 | 30 | 4218.41 | 1006.93 | 1(Win) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 728.07 | 0.860215 | 1.92922ms | 8000 | 30 | 243764 | 10478.9 | 1(Win) |
| std::from_chars | 514.721 | 0.470992 | 3.38278ms | 8000 | 30 | 146213 | 14822.4 | 2(Loss) |
| strtoll/strtoull | 291.608 | 2.00714 | 4.73984ms | 8000 | 30 | 8.2729e+06 | 26163.2 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 723.182 | 0.172314 | 19.084ms | 80000 | 30 | 991401 | 105498 | 1(Win) |
| std::from_chars | 513.774 | 0.157033 | 26.7832ms | 80000 | 30 | 1.63132e+06 | 148497 | 2(Loss) |
| strtoll/strtoull | 328.666 | 0.162346 | 41.856ms | 80000 | 30 | 4.26067e+06 | 232132 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 635.973 | 1.4712 | 209.016ms | 800000 | 30 | 9.34478e+09 | 1.19964e+06 | 1(Win) |
| std::from_chars | 512.053 | 0.0453768 | 314.446ms | 800000 | 30 | 1.37132e+07 | 1.48996e+06 | 2(Loss) |
| strtoll/strtoull | 313.925 | 2.21678 | 433.621ms | 800000 | 30 | 8.70757e+10 | 2.43033e+06 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 700.133 | 0.524504 | 2.0759ms | 8000 | 30 | 98002.7 | 10897.1 | 1(Win) |
| std::from_chars | 442.609 | 0.601411 | 3.58605ms | 8000 | 30 | 322407 | 17237.3 | 2(Loss) |
| strtoll/strtoull | 288.317 | 0.402996 | 4.77389ms | 8000 | 30 | 341164 | 26461.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 647.126 | 0.161869 | 21.3778ms | 80000 | 30 | 1.09257e+06 | 117897 | 1(Win) |
| std::from_chars | 470.192 | 0.106195 | 29.4579ms | 80000 | 30 | 890762 | 162261 | 2(Loss) |
| strtoll/strtoull | 289.99 | 0.106505 | 47.572ms | 80000 | 30 | 2.35545e+06 | 263091 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 561.88 | 0.430838 | 257.743ms | 800000 | 30 | 1.02669e+09 | 1.35783e+06 | 1(Win) |
| std::from_chars | 391.031 | 1.30596 | 351.485ms | 800000 | 30 | 1.94776e+10 | 1.9511e+06 | 2(Loss) |
| strtoll/strtoull | 283.667 | 0.969064 | 477.829ms | 800000 | 30 | 2.03793e+10 | 2.68956e+06 | 3(Loss) |
