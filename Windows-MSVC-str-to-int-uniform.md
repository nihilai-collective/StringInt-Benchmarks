# str-to-int-uniform  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 119.334 | 1.02057 | 0.1566ms | 100 | 120 | 7982.49 | 799.167 | 24.8863 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 117.159 | 0.868313 | 1.4888ms | 100 | 300 | 14987.3 | 814 | 25.4171 | 1(Tie) |
| strtoll/strtoull | 71.8624 | 0.442045 | 0.5961ms | 100 | 240 | 8259.24 | 1327.08 | 41.7705 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 127.539 | 1.89727 | 1.4053ms | 1000 | 120 | 2.4152e+06 | 7477.5 | 23.7382 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 123.2 | 1.83541 | 1.4279ms | 1000 | 120 | 2.42227e+06 | 7740.83 | 24.5888 | 1(Tie) |
| strtoll/strtoull | 69.0776 | 1.69636 | 2.5234ms | 1000 | 120 | 6.58173e+06 | 13805.8 | 43.9426 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 124.406 | 1.93974 | 14.0987ms | 10000 | 120 | 2.6533e+08 | 76658.3 | 24.4138 | 1(Win) |
| std::from_chars | 117.996 | 1.22236 | 34.6785ms | 10000 | 240 | 2.34248e+08 | 80822.5 | 25.7356 | 2(Loss) |
| strtoll/strtoull | 65.5067 | 1.4921 | 26.2303ms | 10000 | 120 | 5.66246e+08 | 145584 | 46.3838 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 118.182 | 1.51834 | 146.036ms | 100000 | 120 | 1.80143e+10 | 806954 | 25.708 | 1(Win) |
| std::from_chars | 113.657 | 0.934388 | 149.709ms | 100000 | 120 | 7.37641e+09 | 839082 | 26.7312 | 2(Loss) |
| strtoll/strtoull | 64.6316 | 0.89354 | 264.503ms | 100000 | 120 | 2.08602e+10 | 1.47555e+06 | 46.9625 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 179.374 | 1.15936 | 0.2565ms | 100 | 240 | 9118.55 | 531.667 | 16.4129 | 1(Win) |
| std::from_chars | 170.299 | 1.43953 | 0.1285ms | 100 | 120 | 7798.32 | 560 | 17.2342 | 2(Loss) |
| strtoll/strtoull | 86.9282 | 1.3823 | 1.0609ms | 100 | 480 | 110388 | 1097.08 | 34.3579 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 186.289 | 1.21236 | 6.605ms | 1000 | 300 | 1.15561e+06 | 5119.33 | 16.2358 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 182.801 | 1.17814 | 6.567ms | 1000 | 300 | 1.13332e+06 | 5217 | 16.5215 | 1(Tie) |
| strtoll/strtoull | 88.9898 | 2.19242 | 2.0753ms | 1000 | 120 | 6.62443e+06 | 10716.7 | 34.0801 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 181.293 | 0.949449 | 9.5138ms | 10000 | 120 | 2.9934e+07 | 52604.2 | 16.7488 | 1(Win) |
| std::from_chars | 172.824 | 1.89275 | 10.2574ms | 10000 | 120 | 1.30905e+08 | 55181.7 | 17.5652 | 2(Loss) |
| strtoll/strtoull | 82.4805 | 2.34366 | 20.8374ms | 10000 | 120 | 8.81189e+08 | 115624 | 36.8315 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 173.252 | 1.04962 | 99.7034ms | 100000 | 120 | 4.0058e+09 | 550456 | 17.5341 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 171.829 | 1.46062 | 100.56ms | 100000 | 120 | 7.88611e+09 | 555013 | 17.6802 | 1(Tie) |
| strtoll/strtoull | 82.7637 | 1.2091 | 206.574ms | 100000 | 120 | 2.32932e+10 | 1.15229e+06 | 36.7129 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 168.419 | 1.04713 | 0.2637ms | 100 | 240 | 8437.76 | 566.25 | 17.4329 | 1(Win) |
| strtoll/strtoull | 85.0862 | 0.605592 | 0.2201ms | 100 | 120 | 5528.71 | 1120.83 | 35.1777 | 2(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 185.374 | 2.20988 | 2.2419ms | 1000 | 240 | 3.10206e+06 | 5144.58 | 16.2962 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 182.988 | 1.41771 | 6.8057ms | 1000 | 300 | 1.63776e+06 | 5211.67 | 16.531 | 1(Tie) |
| strtoll/strtoull | 89.2049 | 1.85577 | 1.9832ms | 1000 | 120 | 4.72336e+06 | 10690.8 | 34.0088 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.242 | 1.08188 | 47.6839ms | 10000 | 480 | 1.48907e+08 | 51482.5 | 16.3915 | 1(Win) |
| std::from_chars | 174.965 | 1.55457 | 10.2219ms | 10000 | 120 | 8.61586e+07 | 54506.7 | 17.353 | 2(Loss) |
| strtoll/strtoull | 89.3218 | 1.44463 | 19.3191ms | 10000 | 120 | 2.85481e+08 | 106768 | 34.0143 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 180.719 | 1.09941 | 97.5071ms | 100000 | 120 | 4.03914e+09 | 527710 | 16.8093 | 1(Win) |
| std::from_chars | 165.23 | 1.478 | 103.087ms | 100000 | 120 | 8.73276e+09 | 577179 | 18.3811 | 2(Loss) |
| strtoll/strtoull | 86.6954 | 0.792856 | 198.921ms | 100000 | 120 | 9.12805e+09 | 1.10003e+06 | 35.0477 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 151.427 | 0.480325 | 0.6992ms | 100 | 480 | 4392.44 | 629.792 | 19.5663 | 1(Win) |
| vn::from_chars | 145.414 | 1.00139 | 0.1344ms | 100 | 120 | 5175.77 | 655.833 | 20.243 | 2(Loss) |
| strtoll/strtoull | 75.8389 | 0.791111 | 0.2473ms | 100 | 120 | 11876.1 | 1257.5 | 39.3449 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 140.599 | 1.32761 | 62.3678ms | 10000 | 480 | 3.89238e+08 | 67829.4 | 21.5976 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 138.93 | 2.00967 | 28.566ms | 10000 | 240 | 4.56738e+08 | 68644.2 | 21.8547 | 1(Tie) |
| strtoll/strtoull | 77.3406 | 2.04003 | 22.416ms | 10000 | 120 | 7.59343e+08 | 123308 | 39.2745 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 144.919 | 0.987268 | 118.217ms | 100000 | 120 | 5.06527e+09 | 658076 | 20.9599 | 1(Win) |
| vn::from_chars | 139.949 | 0.961489 | 122.956ms | 100000 | 120 | 5.15146e+09 | 681444 | 21.7049 | 2(Loss) |
| strtoll/strtoull | 78.4571 | 0.641664 | 219.664ms | 100000 | 120 | 7.30016e+09 | 1.21554e+06 | 38.7293 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 177.738 | 0.438162 | 1.0369ms | 200 | 480 | 10612.3 | 1073.12 | 16.8016 | 1(Win) |
| strtoll/strtoull | 105.136 | 0.53115 | 0.3427ms | 200 | 120 | 11142.2 | 1814.17 | 28.5668 | 2(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 179.656 | 1.99612 | 1.9396ms | 2000 | 120 | 5.3893e+06 | 10616.7 | 16.8595 | 1(Win) |
| std::from_chars | 166.169 | 2.17117 | 11.0123ms | 2000 | 480 | 2.98116e+07 | 11478.3 | 18.2398 | 2(Loss) |
| strtoll/strtoull | 109.122 | 1.68911 | 21.6293ms | 2000 | 300 | 2.615e+07 | 17479 | 27.8036 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 171.909 | 2.12514 | 20.0782ms | 20000 | 120 | 6.67144e+08 | 110951 | 17.6677 | 1(Win) |
| std::from_chars | 157.608 | 1.63563 | 50.6645ms | 20000 | 240 | 9.40337e+08 | 121018 | 19.2722 | 2(Loss) |
| strtoll/strtoull | 108.757 | 1.6427 | 31.3078ms | 20000 | 120 | 9.9597e+08 | 175378 | 27.9306 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 170.101 | 1.06739 | 203.015ms | 200000 | 120 | 1.71901e+10 | 1.12131e+06 | 17.8629 | 1(Win) |
| std::from_chars | 162.533 | 0.937722 | 211.438ms | 200000 | 120 | 1.45313e+10 | 1.17351e+06 | 18.695 | 2(Loss) |
| strtoll/strtoull | 110.121 | 0.728279 | 314.807ms | 200000 | 120 | 1.90939e+10 | 1.73204e+06 | 27.595 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 219.762 | 2.17386 | 1.0174ms | 200 | 480 | 170868 | 867.917 | 13.554 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 218.503 | 0.688847 | 0.3907ms | 200 | 240 | 8677.65 | 872.917 | 13.5764 | 1(Tie) |
| strtoll/strtoull | 126.664 | 0.917519 | 0.2913ms | 200 | 120 | 22906.9 | 1505.83 | 23.496 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 225.855 | 1.66426 | 1.5419ms | 2000 | 120 | 2.37039e+06 | 8445 | 13.4107 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 222.843 | 2.13499 | 1.5713ms | 2000 | 120 | 4.00714e+06 | 8559.17 | 13.5805 | 1(Tie) |
| strtoll/strtoull | 136.057 | 0.819345 | 6.0248ms | 2000 | 240 | 3.16638e+06 | 14018.8 | 22.292 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 215.559 | 1.318 | 81.0833ms | 20000 | 480 | 6.52826e+08 | 88483.8 | 14.0903 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 214.146 | 1.75418 | 81.6064ms | 20000 | 480 | 1.17173e+09 | 89067.5 | 14.1827 | 1(Tie) |
| strtoll/strtoull | 129.832 | 1.63392 | 62.8851ms | 20000 | 240 | 1.38284e+09 | 146909 | 23.4043 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 216.396 | 1.12286 | 159.278ms | 200000 | 120 | 1.17542e+10 | 881416 | 14.0398 | 1(Win) |
| vn::from_chars | 208.867 | 1.18602 | 164.217ms | 200000 | 120 | 1.40763e+10 | 913190 | 14.5463 | 2(Loss) |
| strtoll/strtoull | 129.862 | 1.17807 | 264.938ms | 200000 | 120 | 3.59269e+10 | 1.46875e+06 | 23.3712 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 225.056 | 0.827113 | 0.3947ms | 200 | 240 | 11792.9 | 847.5 | 13.215 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 220.928 | 0.997326 | 0.1702ms | 200 | 120 | 8896.36 | 863.333 | 13.5119 | 1(Tie) |
| strtoll/strtoull | 132.762 | 1.26947 | 1.7696ms | 200 | 300 | 99788.2 | 1436.67 | 22.5642 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 229.928 | 1.24236 | 3.6036ms | 2000 | 240 | 2.54906e+06 | 8295.42 | 13.1729 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 226.773 | 1.83839 | 1.6354ms | 2000 | 120 | 2.86904e+06 | 8410.83 | 13.3565 | 1(Tie) |
| strtoll/strtoull | 138.725 | 2.21101 | 2.5142ms | 2000 | 120 | 1.10896e+07 | 13749.2 | 21.8624 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 213.84 | 1.8875 | 16.0036ms | 20000 | 120 | 3.40122e+08 | 89195 | 14.202 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 213.328 | 2.06346 | 15.9744ms | 20000 | 120 | 4.08451e+08 | 89409.2 | 14.236 | 1(Tie) |
| strtoll/strtoull | 141.694 | 0.454102 | 24.7561ms | 20000 | 120 | 4.48377e+07 | 134610 | 21.4461 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 214.815 | 1.083 | 161.733ms | 200000 | 120 | 1.10961e+10 | 887902 | 14.144 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 211.927 | 1.24801 | 160.839ms | 200000 | 120 | 1.51393e+10 | 900004 | 14.3363 | 1(Tie) |
| strtoll/strtoull | 130.366 | 0.963076 | 262.575ms | 200000 | 120 | 2.38249e+10 | 1.46307e+06 | 23.3071 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 244.793 | 1.27888 | 0.1596ms | 200 | 120 | 11915.3 | 779.167 | 12.0744 | 1(Win) |
| vn::from_chars | 235.961 | 1.30609 | 0.1682ms | 200 | 120 | 13375.4 | 808.333 | 12.62 | 2(Loss) |
| strtoll/strtoull | 141.198 | 0.49556 | 0.2636ms | 200 | 120 | 5377.45 | 1350.83 | 21.1977 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 272.884 | 1.77297 | 6.5892ms | 2000 | 480 | 7.37137e+06 | 6989.58 | 11.0755 | 1(Win) |
| vn::from_chars | 245.003 | 1.43995 | 3.8218ms | 2000 | 240 | 3.01592e+06 | 7785 | 12.3582 | 2(Loss) |
| strtoll/strtoull | 138.09 | 1.53827 | 17.1196ms | 2000 | 300 | 1.35432e+07 | 13812.3 | 21.9818 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 265.404 | 2.37451 | 12.8566ms | 20000 | 120 | 3.4944e+08 | 71865.8 | 11.4419 | 1(Win) |
| vn::from_chars | 240.435 | 0.918253 | 14.7403ms | 20000 | 120 | 6.36754e+07 | 79329.2 | 12.6291 | 2(Loss) |
| strtoll/strtoull | 141.21 | 0.528674 | 24.2672ms | 20000 | 120 | 6.11908e+07 | 135072 | 21.5185 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 253.528 | 1.75383 | 133.968ms | 200000 | 120 | 2.08912e+10 | 752323 | 11.9818 | 1(Win) |
| vn::from_chars | 226.25 | 1.18839 | 152.334ms | 200000 | 120 | 1.20442e+10 | 843028 | 13.4272 | 2(Loss) |
| strtoll/strtoull | 130.589 | 1.03676 | 260.963ms | 200000 | 120 | 2.75163e+10 | 1.46058e+06 | 23.2683 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 312.254 | 0.39965 | 0.5777ms | 400 | 240 | 5721.06 | 1221.67 | 9.5444 | 1(Win) |
| vn::from_chars | 286.909 | 0.608936 | 0.589ms | 400 | 240 | 15732 | 1329.58 | 10.4597 | 2(Loss) |
| strtoll/strtoull | 185.555 | 0.526956 | 0.3867ms | 400 | 120 | 14083.3 | 2055.83 | 16.2586 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 293.476 | 1.67325 | 2.4261ms | 4000 | 120 | 5.67647e+06 | 12998.3 | 10.3305 | 1(Win) |
| strtoll/strtoull | 188.839 | 1.74301 | 3.6626ms | 4000 | 120 | 1.48772e+07 | 20200.8 | 16.0759 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 282.907 | 1.291 | 24.4488ms | 40000 | 120 | 3.63636e+08 | 134839 | 10.7372 | 1(Win) |
| vn::from_chars | 266.879 | 1.58951 | 26.0342ms | 40000 | 120 | 6.19441e+08 | 142938 | 11.3825 | 2(Loss) |
| strtoll/strtoull | 183.248 | 1.08026 | 37.6822ms | 40000 | 120 | 6.06843e+08 | 208171 | 16.5818 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 276.374 | 0.979619 | 246.776ms | 400000 | 120 | 2.19393e+10 | 1.38027e+06 | 10.9939 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 272.098 | 1.00369 | 251.617ms | 400000 | 120 | 2.37601e+10 | 1.40196e+06 | 11.1674 | 1(Tie) |
| strtoll/strtoull | 175.843 | 0.925577 | 388.86ms | 400000 | 120 | 4.83811e+10 | 2.16938e+06 | 17.2813 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 358.749 | 1.01355 | 0.2133ms | 400 | 120 | 13938.4 | 1063.33 | 8.28719 | 1(Win) |
| vn::from_chars | 324.425 | 1.9978 | 0.2375ms | 400 | 120 | 66217.8 | 1175.83 | 9.23965 | 2(Loss) |
| strtoll/strtoull | 224.504 | 1.35502 | 0.3239ms | 400 | 120 | 63612.7 | 1699.17 | 13.3723 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 365.83 | 1.80687 | 9.8441ms | 4000 | 480 | 1.70394e+07 | 10427.5 | 8.28254 | 1(Win) |
| vn::from_chars | 340.193 | 1.32393 | 5.114ms | 4000 | 240 | 5.28944e+06 | 11213.3 | 8.91395 | 2(Loss) |
| strtoll/strtoull | 223.9 | 1.11091 | 3.2828ms | 4000 | 120 | 4.29883e+06 | 17037.5 | 13.5511 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 355.07 | 1.88842 | 19.744ms | 40000 | 120 | 4.93935e+08 | 107435 | 8.55544 | 1(Win) |
| vn::from_chars | 314.729 | 1.46844 | 22.3046ms | 40000 | 120 | 3.8014e+08 | 121206 | 9.65141 | 2(Loss) |
| strtoll/strtoull | 215.636 | 1.54906 | 31.9818ms | 40000 | 120 | 9.01146e+08 | 176904 | 14.0882 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 345.558 | 1.12834 | 197.89ms | 400000 | 120 | 1.86183e+10 | 1.10392e+06 | 8.7921 | 1(Win) |
| vn::from_chars | 314.466 | 1.24256 | 218.922ms | 400000 | 120 | 2.72638e+10 | 1.21307e+06 | 9.66138 | 2(Loss) |
| strtoll/strtoull | 211.567 | 0.881078 | 325.964ms | 400000 | 120 | 3.02855e+10 | 1.80307e+06 | 14.3632 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 360.799 | 1.71748 | 1.4874ms | 400 | 480 | 158277 | 1057.29 | 8.21949 | 1(Win) |
| vn::from_chars | 328.558 | 1.83991 | 1.1041ms | 400 | 480 | 219043 | 1161.04 | 9.11382 | 2(Loss) |
| strtoll/strtoull | 226.616 | 0.572594 | 0.3243ms | 400 | 120 | 11148.5 | 1683.33 | 13.2811 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 374.349 | 1.06564 | 9.8433ms | 4000 | 480 | 5.66013e+06 | 10190.2 | 8.09333 | 1(Win) |
| strtoll/strtoull | 229.594 | 1.20986 | 7.3162ms | 4000 | 240 | 9.69793e+06 | 16615 | 13.2216 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 344.957 | 2.26449 | 46.7183ms | 40000 | 240 | 1.50502e+09 | 110585 | 8.8058 | 1(Win) |
| vn::from_chars | 320.716 | 2.42626 | 22.5154ms | 40000 | 120 | 9.99394e+08 | 118943 | 9.47259 | 2(Loss) |
| strtoll/strtoull | 212.465 | 1.77502 | 76.0922ms | 40000 | 240 | 2.43762e+09 | 179545 | 14.2988 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 349.817 | 1.17651 | 195.979ms | 400000 | 120 | 1.97519e+10 | 1.09048e+06 | 8.68571 | 1(Win) |
| vn::from_chars | 320.134 | 1.10845 | 215.288ms | 400000 | 120 | 2.09347e+10 | 1.19159e+06 | 9.4911 | 2(Loss) |
| strtoll/strtoull | 214.642 | 0.988838 | 320.121ms | 400000 | 120 | 3.70615e+10 | 1.77724e+06 | 14.1564 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 445.729 | 0.925509 | 0.174ms | 400 | 120 | 7528.71 | 855.833 | 6.71171 | 1(Win) |
| vn::from_chars | 270.546 | 0.743173 | 0.3504ms | 400 | 120 | 13176.5 | 1410 | 11.0662 | 2(Loss) |
| strtoll/strtoull | 232.485 | 0.689901 | 0.3147ms | 400 | 120 | 15377.5 | 1640.83 | 12.9105 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 427.417 | 1.92367 | 3.847ms | 4000 | 240 | 7.07435e+06 | 8925 | 7.0828 | 1(Win) |
| vn::from_chars | 338.395 | 2.06162 | 4.862ms | 4000 | 240 | 1.29629e+07 | 11272.9 | 8.96349 | 2(Loss) |
| strtoll/strtoull | 234.246 | 1.05437 | 21.1464ms | 4000 | 300 | 8.84469e+06 | 16285 | 12.9576 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 404.564 | 2.07682 | 40.0154ms | 40000 | 240 | 9.20356e+08 | 94291.7 | 7.50706 | 1(Win) |
| vn::from_chars | 319.62 | 1.98788 | 50.5193ms | 40000 | 240 | 1.35096e+09 | 119351 | 9.50367 | 2(Loss) |
| strtoll/strtoull | 214.994 | 2.04994 | 74.8328ms | 40000 | 240 | 3.17513e+09 | 177432 | 14.1299 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 412.568 | 0.687607 | 167.044ms | 400000 | 120 | 4.85054e+09 | 924622 | 7.36343 | 1(Win) |
| vn::from_chars | 325.362 | 0.797635 | 211.573ms | 400000 | 120 | 1.04949e+10 | 1.17245e+06 | 9.33805 | 2(Loss) |
| strtoll/strtoull | 227.605 | 0.509424 | 302.997ms | 400000 | 120 | 8.74779e+09 | 1.67602e+06 | 13.3511 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 539.18 | 1.39362 | 0.307ms | 800 | 120 | 46663.9 | 1415 | 5.54453 | 1(Win) |
| std::from_chars | 482.364 | 1.00102 | 0.314ms | 800 | 120 | 30081.2 | 1581.67 | 6.18096 | 2(Loss) |
| strtoll/strtoull | 288.537 | 0.438062 | 0.5267ms | 800 | 120 | 16100.1 | 2644.17 | 10.4709 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.299 | 2.19881 | 2.7973ms | 8000 | 120 | 1.29684e+07 | 14950.8 | 5.94104 | 1(Win) |
| std::from_chars | 474.354 | 1.40009 | 7.1366ms | 8000 | 240 | 1.21702e+07 | 16083.8 | 6.39211 | 2(Loss) |
| strtoll/strtoull | 297.076 | 1.03444 | 4.6104ms | 8000 | 120 | 8.46907e+06 | 25681.7 | 10.2205 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 497.318 | 1.77127 | 27.769ms | 80000 | 120 | 8.8606e+08 | 153411 | 6.10846 | 1(Win) |
| std::from_chars | 469.405 | 1.31372 | 29.5587ms | 80000 | 120 | 5.4711e+08 | 162533 | 6.46051 | 2(Loss) |
| strtoll/strtoull | 290.789 | 1.08188 | 47.4142ms | 80000 | 120 | 9.66863e+08 | 262368 | 10.4487 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 477.133 | 0.8346 | 288.657ms | 800000 | 120 | 2.13717e+10 | 1.59901e+06 | 6.36715 | 1(Win) |
| std::from_chars | 448.939 | 0.812662 | 306.401ms | 800000 | 120 | 2.28879e+10 | 1.69943e+06 | 6.76612 | 2(Loss) |
| strtoll/strtoull | 292.283 | 0.627997 | 475.173ms | 800000 | 120 | 3.22455e+10 | 2.61028e+06 | 10.3958 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 632.489 | 0.529571 | 0.569ms | 800 | 240 | 9793.41 | 1206.25 | 4.7327 | 1(Win) |
| std::from_chars | 577.62 | 0.586827 | 0.2926ms | 800 | 120 | 7209.38 | 1320.83 | 5.18318 | 2(Loss) |
| strtoll/strtoull | 341.233 | 1.5904 | 0.423ms | 800 | 120 | 151730 | 2235.83 | 8.8229 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 581.361 | 1.06903 | 12.2823ms | 8000 | 480 | 9.44726e+06 | 13123.3 | 5.21276 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 567.399 | 1.6457 | 13.4226ms | 8000 | 480 | 2.35041e+07 | 13446.2 | 5.34404 | 1(Tie) |
| strtoll/strtoull | 344.812 | 1.92344 | 20.7656ms | 8000 | 480 | 8.69386e+07 | 22126.2 | 8.80254 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 536.062 | 1.87305 | 59.851ms | 80000 | 240 | 1.70554e+09 | 142323 | 5.66399 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 529.43 | 1.79313 | 60.4329ms | 80000 | 240 | 1.60249e+09 | 144106 | 5.73749 | 1(Tie) |
| strtoll/strtoull | 325.352 | 2.42213 | 42.4202ms | 80000 | 120 | 3.87124e+09 | 234497 | 9.33825 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 553.072 | 0.823755 | 249.421ms | 800000 | 120 | 1.54951e+10 | 1.37946e+06 | 5.49277 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 550.888 | 0.684609 | 249.134ms | 800000 | 120 | 1.07875e+10 | 1.38493e+06 | 5.51385 | 1(Tie) |
| strtoll/strtoull | 338.488 | 0.630624 | 406.002ms | 800000 | 120 | 2.42447e+10 | 2.25396e+06 | 8.97602 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 637.11 | 0.673638 | 0.2604ms | 800 | 120 | 7808.82 | 1197.5 | 4.69298 | 1(Win) |
| std::from_chars | 586.877 | 0.61068 | 0.2745ms | 800 | 120 | 7563.03 | 1300 | 5.07975 | 2(Loss) |
| strtoll/strtoull | 352.804 | 0.74649 | 0.4151ms | 800 | 120 | 31271 | 2162.5 | 8.55798 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 588.158 | 1.62967 | 2.4487ms | 8000 | 120 | 5.36255e+06 | 12971.7 | 5.15494 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 574.683 | 1.86067 | 5.9669ms | 8000 | 240 | 1.46444e+07 | 13275.8 | 5.27437 | 1(Tie) |
| strtoll/strtoull | 363.261 | 1.79752 | 3.908ms | 8000 | 120 | 1.71029e+07 | 21002.5 | 8.35454 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 550.859 | 2.00221 | 24.7248ms | 80000 | 120 | 9.22788e+08 | 138500 | 5.51369 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 540.163 | 2.19669 | 25.7187ms | 80000 | 120 | 1.15518e+09 | 141242 | 5.62212 | 1(Tie) |
| strtoll/strtoull | 347.841 | 1.34095 | 39.7899ms | 80000 | 120 | 1.03807e+09 | 219336 | 8.73461 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 565.008 | 0.750737 | 242.797ms | 800000 | 120 | 1.23318e+10 | 1.35032e+06 | 5.37637 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 564.752 | 0.932983 | 243.59ms | 800000 | 120 | 1.90631e+10 | 1.35093e+06 | 5.3798 | 1(Tie) |
| strtoll/strtoull | 341.042 | 0.934112 | 404.26ms | 800000 | 120 | 5.24016e+10 | 2.23708e+06 | 8.90935 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 605.107 | 0.78697 | 0.2664ms | 800 | 120 | 11814.4 | 1260.83 | 4.96329 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 598.384 | 0.541086 | 0.5826ms | 800 | 240 | 11422.6 | 1275 | 5.00631 | 1(Tie) |
| strtoll/strtoull | 363.305 | 0.585657 | 0.4072ms | 800 | 120 | 18151.3 | 2100 | 8.31129 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 591.136 | 1.7502 | 16.0872ms | 8000 | 300 | 1.53075e+07 | 12906.3 | 5.12646 | 1(Win) |
| vn::from_chars | 559.716 | 1.60864 | 2.685ms | 8000 | 120 | 5.76955e+06 | 13630.8 | 5.41549 | 2(Loss) |
| strtoll/strtoull | 342.484 | 2.25729 | 21.111ms | 8000 | 480 | 1.21372e+08 | 22276.7 | 8.86074 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 601.94 | 2.20346 | 22.7042ms | 80000 | 120 | 9.3598e+08 | 126747 | 5.04511 | 1(Win) |
| vn::from_chars | 524.519 | 2.17241 | 26.2393ms | 80000 | 120 | 1.19818e+09 | 145455 | 5.79073 | 2(Loss) |
| strtoll/strtoull | 320.169 | 2.25037 | 43.4638ms | 80000 | 120 | 3.45073e+09 | 238292 | 9.48817 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 570.224 | 0.9423 | 238.545ms | 800000 | 120 | 1.90743e+10 | 1.33796e+06 | 5.32698 | 1(Win) |
| vn::from_chars | 551.728 | 0.778169 | 250.161ms | 800000 | 120 | 1.3895e+10 | 1.38282e+06 | 5.50638 | 2(Loss) |
| strtoll/strtoull | 341.42 | 0.768361 | 401.84ms | 800000 | 120 | 3.53764e+10 | 2.23461e+06 | 8.89856 | 3(Loss) |
