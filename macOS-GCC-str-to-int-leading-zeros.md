# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 167.303 | 1.65303 | 2.47987ms | 1000 | 30 | 266362 | 5700.27 | 1(Win) |
| std::from_chars | 76.4423 | 0.767992 | 2.95014ms | 1000 | 30 | 275402 | 12475.7 | 2(Loss) |
| strtoll/strtoull | 39.1312 | 0.371465 | 5.36602ms | 1000 | 30 | 245873 | 24371.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 54.5484 | 0.921764 | 31.692ms | 10000 | 30 | 7.79107e+07 | 174831 | 1(Win) |
| strtoll/strtoull | 34.3134 | 0.403973 | 50.7599ms | 10000 | 30 | 3.7818e+07 | 277931 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 55.8143 | 1.0527 | 306.51ms | 100000 | 30 | 9.70603e+09 | 1.70865e+06 | 1(Win) |
| vn::from_chars | 41.3281 | 2.12721 | 423.054ms | 100000 | 30 | 7.22856e+10 | 2.30757e+06 | 2(Loss) |
| strtoll/strtoull | 31.8272 | 2.48746 | 3024.43ms | 100000 | 48 | 2.66659e+11 | 2.99642e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 178.814 | 1.67678 | 1.21702ms | 1000 | 30 | 239922 | 5333.33 | 1(Win) |
| std::from_chars | 73.9634 | 0.95898 | 2.77606ms | 1000 | 30 | 458677 | 12893.9 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 57.6462 | 2.32868 | 30.7039ms | 10000 | 30 | 4.45246e+08 | 165436 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 56.7332 | 2.22185 | 29.215ms | 10000 | 30 | 4.18483e+08 | 168098 | 1(Tie) |
| strtoll/strtoull | 39.4684 | 0.313622 | 48.8929ms | 10000 | 30 | 1.7228e+07 | 241630 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 57.4684 | 1.709 | 778.939ms | 100000 | 30 | 2.41295e+10 | 1.65948e+06 | 1(Win) |
| vn::from_chars | 48.6134 | 2.38679 | 851.219ms | 100000 | 30 | 6.57718e+10 | 1.96175e+06 | 2(Loss) |
| strtoll/strtoull | 38.4758 | 2.41876 | 443.762ms | 100000 | 30 | 1.07828e+11 | 2.47863e+06 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 171.147 | 1.71592 | 1.10618ms | 1000 | 30 | 274272 | 5572.27 | 1(Win) |
| std::from_chars | 72.7596 | 0.807741 | 2.83187ms | 1000 | 30 | 336267 | 13107.2 | 2(Loss) |
| strtoll/strtoull | 40.3461 | 0.512304 | 4.75802ms | 1000 | 30 | 439920 | 23637.3 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 63.2119 | 0.22712 | 29.3678ms | 10000 | 30 | 3.52237e+06 | 150869 | 1(Win) |
| vn::from_chars | 61.5856 | 0.640012 | 165.83ms | 10000 | 48 | 4.71475e+07 | 154853 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 54.1259 | 1.91351 | 318.923ms | 100000 | 30 | 3.41013e+10 | 1.76195e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 51.5 | 1.67343 | 321.412ms | 100000 | 30 | 2.88084e+10 | 1.85179e+06 | 1(Tie) |
| strtoll/strtoull | 37.1421 | 2.27104 | 480.184ms | 100000 | 30 | 1.02009e+11 | 2.56764e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 45.3842 | 2.05061 | 2.60096ms | 100 | 48 | 89124.3 | 2101.33 | 1(Win) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 184.42 | 1.54556 | 0.998144ms | 1000 | 30 | 191636 | 5171.2 | 1(Win) |
| std::from_chars | 74.943 | 0.538948 | 13.4751ms | 1000 | 48 | 225774 | 12725.3 | 2(Loss) |
| strtoll/strtoull | 36.9206 | 2.1173 | 5.31789ms | 1000 | 30 | 8.97323e+06 | 25830.4 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 71.3293 | 0.201747 | 28.9731ms | 10000 | 30 | 2.18273e+06 | 133700 | 1(Win) |
| strtoll/strtoull | 39.5774 | 0.173932 | 52.1528ms | 10000 | 30 | 5.2697e+06 | 240964 | 2(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars **STATISTICAL TIE** | 56.3468 | 0.477705 | 912.554ms | 100000 | 30 | 1.96112e+09 | 1.69251e+06 | 1(Tie) |
| std::from_chars **STATISTICAL TIE** | 56.222 | 0.867389 | 796.851ms | 100000 | 30 | 6.49435e+09 | 1.69626e+06 | 1(Tie) |
| strtoll/strtoull | 35.5451 | 2.27853 | 543.524ms | 100000 | 30 | 1.12117e+11 | 2.683e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.612 | 0.987254 | 2.26611ms | 2000 | 30 | 108850 | 6101.33 | 1(Win) |
| strtoll/strtoull | 66.7814 | 0.378778 | 5.19091ms | 2000 | 30 | 351107 | 28561.1 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 126.203 | 0.305337 | 28.2898ms | 20000 | 30 | 6.38855e+06 | 151134 | 1(Win) |
| std::from_chars | 97.4144 | 0.913902 | 38.592ms | 20000 | 30 | 9.60581e+07 | 195797 | 2(Loss) |
| strtoll/strtoull | 62.4822 | 0.315625 | 54.806ms | 20000 | 30 | 2.78491e+07 | 305263 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 113.935 | 0.184067 | 733.802ms | 200000 | 30 | 2.84853e+08 | 1.67407e+06 | 1(Win) |
| std::from_chars | 91.6141 | 1.08828 | 405.501ms | 200000 | 30 | 1.54007e+10 | 2.08194e+06 | 2(Loss) |
| strtoll/strtoull | 56.4122 | 2.02619 | 619.08ms | 200000 | 30 | 1.40798e+11 | 3.38109e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 304.52 | 1.43649 | 1.51706ms | 2000 | 30 | 242860 | 6263.47 | 1(Win) |
| std::from_chars | 118.703 | 0.330182 | 3.16621ms | 2000 | 30 | 84443.5 | 16068.3 | 2(Loss) |
| strtoll/strtoull | 71.7091 | 0.310762 | 5.20704ms | 2000 | 30 | 204969 | 26598.4 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 70.4924 | 0.785419 | 51.4209ms | 20000 | 30 | 1.35487e+08 | 270575 | 1(Win) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 116.622 | 1.5118 | 299.927ms | 200000 | 30 | 1.83404e+10 | 1.6355e+06 | 1(Win) |
| std::from_chars | 96.2466 | 0.108787 | 356.74ms | 200000 | 30 | 1.39432e+08 | 1.98173e+06 | 2(Loss) |
| strtoll/strtoull | 69.5739 | 0.700245 | 496.705ms | 200000 | 30 | 1.10557e+10 | 2.74147e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 323.469 | 1.69729 | 2.208ms | 2000 | 30 | 300486 | 5896.53 | 1(Win) |
| std::from_chars | 121.279 | 0.597873 | 8.20096ms | 2000 | 30 | 265232 | 15726.9 | 2(Loss) |
| strtoll/strtoull | 71.457 | 1.13287 | 5.72211ms | 2000 | 30 | 2.74317e+06 | 26692.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 141.7 | 2.10154 | 25.0289ms | 20000 | 30 | 2.40058e+08 | 134605 | 1(Win) |
| std::from_chars | 91.4818 | 1.80646 | 39.3101ms | 20000 | 30 | 4.25567e+08 | 208495 | 2(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 130.766 | 1.45728 | 1472.82ms | 200000 | 48 | 2.16868e+10 | 1.45859e+06 | 1(Win) |
| std::from_chars | 88.2021 | 1.02852 | 422.522ms | 200000 | 30 | 1.48405e+10 | 2.16247e+06 | 2(Loss) |
| strtoll/strtoull | 62.3194 | 2.44573 | 1337.79ms | 200000 | 30 | 1.68094e+11 | 3.0606e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 124.107 | 1.2125 | 2.85312ms | 2000 | 30 | 1.04172e+06 | 15368.5 | 1(Win) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 160.412 | 0.88185 | 21.9162ms | 20000 | 30 | 3.29837e+07 | 118903 | 1(Win) |
| std::from_chars | 98.8796 | 2.21735 | 33.868ms | 20000 | 30 | 5.48829e+08 | 192896 | 2(Loss) |
| strtoll/strtoull | 70.4158 | 0.619414 | 266.588ms | 20000 | 48 | 1.35121e+08 | 270869 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 144.854 | 0.300229 | 236.674ms | 200000 | 30 | 4.68839e+08 | 1.31674e+06 | 1(Win) |
| std::from_chars | 100.141 | 0.418952 | 330.93ms | 200000 | 30 | 1.91022e+09 | 1.90466e+06 | 2(Loss) |
| strtoll/strtoull | 69.4647 | 0.898435 | 482.028ms | 200000 | 30 | 1.82569e+10 | 2.74578e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 114.993 | 1.90805 | 3.59424ms | 400 | 48 | 192309 | 3317.33 | 1(Win) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 420.937 | 0.534951 | 1.68499ms | 4000 | 30 | 70507.7 | 9062.4 | 1(Win) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 227.233 | 0.445562 | 32.1782ms | 40000 | 30 | 1.67848e+07 | 167876 | 1(Win) |
| std::from_chars | 152.54 | 1.01593 | 104.143ms | 40000 | 30 | 1.93642e+08 | 250078 | 2(Loss) |
| strtoll/strtoull | 108.897 | 0.226795 | 63.9319ms | 40000 | 30 | 1.89353e+07 | 350302 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 199.739 | 0.0507769 | 346.725ms | 400000 | 30 | 2.82128e+07 | 1.90984e+06 | 1(Win) |
| strtoll/strtoull | 105.877 | 0.157647 | 688.426ms | 400000 | 30 | 9.67849e+08 | 3.60294e+06 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 382.081 | 1.42843 | 0.284928ms | 400 | 30 | 6101.63 | 998.4 | 1(Win) |
| strtoll/strtoull | 122.896 | 1.52615 | 3.15597ms | 400 | 48 | 107716 | 3104 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.443 | 0.905831 | 2.99597ms | 4000 | 30 | 271183 | 10496 | 1(Win) |
| std::from_chars | 166.122 | 1.4708 | 4.12211ms | 4000 | 30 | 3.42211e+06 | 22963.2 | 2(Loss) |
| strtoll/strtoull | 115.602 | 0.261304 | 5.99808ms | 4000 | 30 | 223048 | 32998.4 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 235.182 | 0.350848 | 29.6261ms | 40000 | 30 | 9.7156e+06 | 162202 | 1(Win) |
| std::from_chars | 157.196 | 0.349804 | 43.69ms | 40000 | 30 | 2.16175e+07 | 242671 | 2(Loss) |
| strtoll/strtoull | 124.609 | 0.399641 | 54.7758ms | 40000 | 30 | 4.49038e+07 | 306133 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.626 | 1.65851 | 410.703ms | 400000 | 30 | 2.68127e+10 | 1.80256e+06 | 1(Win) |
| std::from_chars | 156.212 | 0.0692007 | 458.874ms | 400000 | 30 | 8.56711e+07 | 2.442e+06 | 2(Loss) |
| strtoll/strtoull | 113.95 | 0.758311 | 612.435ms | 400000 | 30 | 1.93334e+10 | 3.34769e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 187.83 | 1.99837 | 1.32608ms | 400 | 30 | 49415.7 | 2030.93 | 1(Win) |
| strtoll/strtoull | 124.176 | 1.78685 | 1.62099ms | 400 | 30 | 90394.5 | 3072 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 416.234 | 1.28738 | 1.83501ms | 4000 | 30 | 417623 | 9164.8 | 1(Win) |
| std::from_chars | 170.82 | 0.766897 | 4.1641ms | 4000 | 30 | 879915 | 22331.7 | 2(Loss) |
| strtoll/strtoull | 125.784 | 0.296675 | 5.48787ms | 4000 | 30 | 242860 | 30327.5 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 272.798 | 0.190837 | 26.026ms | 40000 | 30 | 2.1364e+06 | 139836 | 1(Win) |
| std::from_chars | 158.371 | 0.143982 | 43.476ms | 40000 | 30 | 3.60832e+06 | 240870 | 2(Loss) |
| strtoll/strtoull | 116.613 | 0.929152 | 355.385ms | 40000 | 48 | 4.43448e+08 | 327125 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.508 | 0.17492 | 287.554ms | 400000 | 30 | 2.3481e+08 | 1.5994e+06 | 1(Win) |
| std::from_chars | 164.089 | 0.0497133 | 449.375ms | 400000 | 30 | 4.00707e+07 | 2.32477e+06 | 2(Loss) |
| strtoll/strtoull | 120.782 | 0.241393 | 571.975ms | 400000 | 30 | 1.74376e+09 | 3.15833e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 194.893 | 1.62858 | 1.81786ms | 400 | 48 | 48774.4 | 1957.33 | 1(Win) |
| strtoll/strtoull | 125.925 | 1.15198 | 2.81293ms | 400 | 30 | 36534.4 | 3029.33 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.649 | 1.02862 | 1.76589ms | 4000 | 30 | 286325 | 9497.6 | 1(Win) |
| std::from_chars | 183.965 | 1.80126 | 9.04909ms | 4000 | 30 | 4.18526e+06 | 20736 | 2(Loss) |
| strtoll/strtoull | 117.448 | 0.831902 | 30.7779ms | 4000 | 48 | 3.50443e+06 | 32480 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 266.203 | 1.62471 | 28.9428ms | 40000 | 30 | 1.62618e+08 | 143300 | 1(Win) |
| std::from_chars | 166.506 | 0.149909 | 41.6018ms | 40000 | 30 | 3.53864e+06 | 229103 | 2(Loss) |
| strtoll/strtoull | 121.23 | 0.237755 | 57.2608ms | 40000 | 30 | 1.67912e+07 | 314667 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 267.921 | 0.209155 | 1473.71ms | 400000 | 48 | 4.25681e+08 | 1.42381e+06 | 1(Win) |
| std::from_chars | 158.256 | 2.15638 | 426.93ms | 400000 | 30 | 8.10538e+10 | 2.41046e+06 | 2(Loss) |
| strtoll/strtoull | 126.173 | 0.0576168 | 557.904ms | 400000 | 30 | 9.10351e+07 | 3.02339e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 236.448 | 1.98684 | 3.08787ms | 800 | 48 | 197276 | 3226.67 | 1(Win) |
| strtoll/strtoull | 176.345 | 2.16715 | 2.02598ms | 800 | 30 | 263726 | 4326.4 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 560.897 | 0.720397 | 2.52698ms | 8000 | 30 | 288057 | 13602.1 | 1(Win) |
| std::from_chars | 236.714 | 0.253616 | 5.89286ms | 8000 | 30 | 200450 | 32230.4 | 2(Loss) |
| strtoll/strtoull | 161.501 | 1.86762 | 9.54419ms | 8000 | 30 | 2.33522e+07 | 47240.5 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 403.68 | 0.0800513 | 36.193ms | 80000 | 30 | 686697 | 188996 | 1(Win) |
| std::from_chars | 217.07 | 0.158424 | 65.0519ms | 80000 | 30 | 9.30129e+06 | 351471 | 2(Loss) |
| strtoll/strtoull | 164.781 | 0.175781 | 83.5182ms | 80000 | 30 | 1.98714e+07 | 463002 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 350.305 | 0.085146 | 398.836ms | 800000 | 30 | 1.03166e+08 | 2.17793e+06 | 1(Win) |
| std::from_chars | 199.689 | 1.33222 | 699.328ms | 800000 | 30 | 7.77226e+10 | 3.82065e+06 | 2(Loss) |
| strtoll/strtoull | 171.202 | 0.0871175 | 824.866ms | 800000 | 30 | 4.52163e+08 | 4.45637e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 235.902 | 2.4737 | 1.53011ms | 800 | 30 | 192013 | 3234.13 | 1(Win) |
| strtoll/strtoull | 180.256 | 1.87343 | 1.63584ms | 800 | 30 | 188623 | 4232.53 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 515.611 | 1.13859 | 2.79296ms | 8000 | 30 | 851516 | 14796.8 | 1(Win) |
| std::from_chars | 225.946 | 0.716345 | 6.11302ms | 8000 | 30 | 1.75523e+06 | 33766.4 | 2(Loss) |
| strtoll/strtoull | 180.803 | 0.60882 | 7.67693ms | 8000 | 30 | 1.98002e+06 | 42197.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 411.672 | 0.453952 | 34.5559ms | 80000 | 30 | 2.12334e+07 | 185327 | 1(Win) |
| std::from_chars | 207.508 | 1.45363 | 67.241ms | 80000 | 30 | 8.56914e+08 | 367667 | 2(Loss) |
| strtoll/strtoull | 187.778 | 0.104709 | 73.1779ms | 80000 | 30 | 5.42977e+06 | 406298 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 360.813 | 0.699895 | 896.425ms | 800000 | 30 | 6.57057e+09 | 2.1145e+06 | 1(Win) |
| std::from_chars | 194.394 | 1.51378 | 705.38ms | 800000 | 30 | 1.05891e+11 | 3.9247e+06 | 2(Loss) |
| strtoll/strtoull | 183.969 | 0.461244 | 807.51ms | 800000 | 30 | 1.09767e+10 | 4.1471e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 181.721 | 1.74436 | 1.184ms | 800 | 30 | 160902 | 4198.4 | 1(Win) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 542.518 | 0.359162 | 2.87386ms | 8000 | 30 | 76534 | 14062.9 | 1(Win) |
| std::from_chars | 231.684 | 0.493764 | 5.97299ms | 8000 | 30 | 793136 | 32930.1 | 2(Loss) |
| strtoll/strtoull | 180.22 | 0.734345 | 8ms | 8000 | 30 | 2.89933e+06 | 42333.9 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 419.416 | 0.564896 | 32.7309ms | 80000 | 30 | 3.16773e+07 | 181905 | 1(Win) |
| std::from_chars | 217.721 | 0.314135 | 63.2ms | 80000 | 30 | 3.63525e+07 | 350421 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 401.041 | 0.118846 | 343.486ms | 800000 | 30 | 1.53353e+08 | 1.9024e+06 | 1(Win) |
| std::from_chars | 205.126 | 0.602395 | 1646.07ms | 800000 | 30 | 1.506e+10 | 3.71937e+06 | 2(Loss) |
| strtoll/strtoull | 184.401 | 0.753208 | 748.702ms | 800000 | 30 | 2.91343e+10 | 4.1374e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 251.851 | 1.40845 | 1.52499ms | 800 | 30 | 54613.3 | 3029.33 | 1(Win) |
| strtoll/strtoull | 186.265 | 1.528 | 0.756992ms | 800 | 30 | 117513 | 4096 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 489.097 | 0.914029 | 2.80192ms | 8000 | 30 | 609861 | 15598.9 | 1(Win) |
| std::from_chars | 229.602 | 0.32287 | 6.05107ms | 8000 | 30 | 345307 | 33228.8 | 2(Loss) |
| strtoll/strtoull | 175.652 | 0.64647 | 7.83514ms | 8000 | 30 | 2.36532e+06 | 43434.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 381.722 | 0.365488 | 36.4219ms | 80000 | 30 | 1.60086e+07 | 199868 | 1(Win) |
| std::from_chars | 219.954 | 0.0940864 | 62.698ms | 80000 | 30 | 3.19514e+06 | 346863 | 2(Loss) |
| strtoll/strtoull | 187.948 | 0.0689075 | 73.152ms | 80000 | 30 | 2.34724e+06 | 405931 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 340.979 | 0.732001 | 414.164ms | 800000 | 30 | 8.04767e+09 | 2.2375e+06 | 1(Win) |
| std::from_chars | 194.679 | 1.82668 | 736.103ms | 800000 | 30 | 1.5374e+11 | 3.91896e+06 | 2(Loss) |
| strtoll/strtoull | 177.635 | 0.0822976 | 774.973ms | 800000 | 30 | 3.74817e+08 | 4.29499e+06 | 3(Loss) |
