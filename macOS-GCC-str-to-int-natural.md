# str-to-int-natural  
----

Performance profiling of libraries (Compiled and run on macOS 25.5.0 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 112.888 | 2.09296 | 0.793856ms | 100 | 480 | 150062 | 844.8 | 1(Win) |
| std::from_chars | 101.888 | 1.76019 | 0.912896ms | 100 | 480 | 130290 | 936 | 2(Loss) |
| strtoll/strtoull | 70.6774 | 2.33305 | 3.23584ms | 100 | 240 | 237848 | 1349.33 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 121.941 | 0.771708 | 1.48198ms | 1000 | 120 | 437109 | 7820.8 | 1(Win) |
| std::from_chars | 106.134 | 1.02844 | 1.70906ms | 1000 | 120 | 1.02478e+06 | 8985.6 | 2(Loss) |
| strtoll/strtoull | 71.003 | 0.368527 | 2.4809ms | 1000 | 120 | 294012 | 13431.5 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 108.858 | 0.899438 | 16.0678ms | 10000 | 120 | 7.45086e+07 | 87607.5 | 1(Win) |
| strtoll/strtoull | 55.908 | 2.3427 | 29.652ms | 10000 | 120 | 1.91632e+09 | 170579 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 113.66 | 1.31348 | 156.184ms | 100000 | 120 | 1.45752e+10 | 839061 | 1(Win) |
| std::from_chars | 96.9341 | 0.597978 | 1153.61ms | 100000 | 480 | 1.66134e+10 | 983837 | 2(Loss) |
| strtoll/strtoull | 55.2839 | 2.39804 | 761.012ms | 100000 | 240 | 4.10704e+11 | 1.72505e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 193.02 | 1.14815 | 0.92288ms | 1000 | 120 | 386167 | 4940.8 | 1(Win) |
| std::from_chars | 179.029 | 0.847968 | 0.983808ms | 1000 | 120 | 244847 | 5326.93 | 2(Loss) |
| strtoll/strtoull | 105.086 | 0.473119 | 1.65197ms | 1000 | 120 | 221225 | 9075.2 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.588 | 0.547036 | 21.1011ms | 10000 | 240 | 1.76111e+07 | 49518.9 | 1(Win) |
| std::from_chars | 178.486 | 0.713541 | 9.66605ms | 10000 | 120 | 1.74427e+07 | 53431.5 | 2(Loss) |
| strtoll/strtoull | 90.5534 | 0.783232 | 18.9612ms | 10000 | 120 | 8.16494e+07 | 105316 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 187.711 | 1.35134 | 91.4371ms | 100000 | 120 | 5.65633e+09 | 508055 | 1(Win) |
| std::from_chars | 162.04 | 1.17241 | 104.917ms | 100000 | 120 | 5.71348e+09 | 588544 | 2(Loss) |
| strtoll/strtoull | 85.9591 | 2.03937 | 198.364ms | 100000 | 120 | 6.1431e+10 | 1.10945e+06 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 207.248 | 1.16938 | 1.05805ms | 1000 | 120 | 347465 | 4601.6 | 1(Win) |
| std::from_chars | 183.061 | 0.809273 | 1.02989ms | 1000 | 120 | 213295 | 5209.6 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 173.337 | 1.24084 | 10.1801ms | 10000 | 120 | 5.59287e+07 | 55018.7 | 1(Win) |
| vn::from_chars | 124.064 | 2.05731 | 29.354ms | 10000 | 240 | 6.00232e+08 | 76869.3 | 2(Loss) |
| strtoll/strtoull | 78.0608 | 1.95959 | 115.401ms | 10000 | 480 | 2.75109e+09 | 122171 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 183.04 | 1.86722 | 101.348ms | 100000 | 120 | 1.13574e+10 | 521020 | 1(Win) |
| std::from_chars | 146.93 | 1.94419 | 356.924ms | 100000 | 240 | 3.82181e+10 | 649067 | 2(Loss) |
| strtoll/strtoull | 68.8705 | 1.78431 | 609.474ms | 100000 | 240 | 1.46516e+11 | 1.38474e+06 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 147.33 | 2.41571 | 5.87699ms | 1000 | 480 | 1.17368e+07 | 6473.07 | 1(Win) |
| std::from_chars | 100.277 | 2.03361 | 8.87091ms | 1000 | 480 | 1.79546e+07 | 9510.4 | 2(Loss) |
| strtoll/strtoull | 87.9125 | 0.672054 | 1.98093ms | 1000 | 120 | 637806 | 10848 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.366 | 1.37389 | 25.9661ms | 10000 | 240 | 1.70689e+08 | 61382.4 | 1(Win) |
| std::from_chars | 140.431 | 1.78907 | 12.6902ms | 10000 | 120 | 1.77137e+08 | 67910.4 | 2(Loss) |
| strtoll/strtoull | 77.7371 | 2.38894 | 51.2809ms | 10000 | 240 | 2.06141e+09 | 122679 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 164.163 | 0.498816 | 103.902ms | 100000 | 120 | 1.00766e+09 | 580932 | 1(Win) |
| std::from_chars | 141.786 | 1.23968 | 128.717ms | 100000 | 120 | 8.34325e+09 | 672614 | 2(Loss) |
| strtoll/strtoull | 94.626 | 0.360566 | 190.831ms | 100000 | 120 | 1.58464e+09 | 1.00784e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 183.681 | 1.81886 | 0.952832ms | 200 | 480 | 171226 | 1038.4 | 1(Win) |
| std::from_chars | 162.854 | 1.56675 | 1.1241ms | 200 | 480 | 161624 | 1171.2 | 2(Loss) |
| strtoll/strtoull | 110.311 | 1.70703 | 0.78208ms | 200 | 240 | 209083 | 1729.07 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 210.023 | 0.441267 | 1.6512ms | 2000 | 120 | 192712 | 9081.6 | 1(Win) |
| std::from_chars | 169.943 | 1.577 | 2.04211ms | 2000 | 120 | 3.75923e+06 | 11223.5 | 2(Loss) |
| strtoll/strtoull | 128.791 | 0.631083 | 2.67187ms | 2000 | 120 | 1.04819e+06 | 14809.6 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.439 | 0.405695 | 16.6861ms | 20000 | 120 | 1.50585e+07 | 87317.3 | 1(Win) |
| std::from_chars | 184.523 | 1.07796 | 18.626ms | 20000 | 120 | 1.48985e+08 | 103366 | 2(Loss) |
| strtoll/strtoull | 121.205 | 0.584744 | 29.246ms | 20000 | 120 | 1.01609e+08 | 157365 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 113.929 | 1.90506 | 280.427ms | 200000 | 120 | 1.22064e+11 | 1.67415e+06 | 1(Win) |
| strtoll/strtoull | 63.6631 | 2.04916 | 2843.18ms | 200000 | 480 | 1.80915e+12 | 2.996e+06 | 2(Loss) |
| std::from_chars | 33.8289 | 1.72264 | 4844.06ms | 200000 | 480 | 4.52809e+12 | 5.63822e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 263.349 | 1.55809 | 1.32403ms | 2000 | 120 | 1.52814e+06 | 7242.67 | 1(Win) |
| std::from_chars | 198.352 | 1.79963 | 4.29901ms | 2000 | 240 | 7.18731e+06 | 9616 | 2(Loss) |
| strtoll/strtoull | 146.713 | 1.12686 | 2.42586ms | 2000 | 120 | 2.57538e+06 | 13000.5 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 259.482 | 0.713622 | 13.729ms | 20000 | 120 | 3.30191e+07 | 73506.1 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 253.457 | 0.965905 | 13.4979ms | 20000 | 120 | 6.34018e+07 | 75253.3 | 1(Tie) |
| strtoll/strtoull | 145.746 | 1.77215 | 219.617ms | 20000 | 300 | 1.61358e+09 | 130868 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 264.207 | 1.41746 | 137.985ms | 200000 | 120 | 1.25653e+10 | 721914 | 1(Win) |
| std::from_chars | 157.256 | 1.29157 | 217.801ms | 200000 | 120 | 2.94484e+10 | 1.21289e+06 | 2(Loss) |
| strtoll/strtoull | 130.143 | 1.74956 | 262.696ms | 200000 | 120 | 7.88963e+10 | 1.46558e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 246.946 | 2.21605 | 7.14189ms | 2000 | 480 | 1.40622e+07 | 7723.73 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 244.565 | 1.95333 | 6.82906ms | 2000 | 480 | 1.11394e+07 | 7798.93 | 1(Tie) |
| strtoll/strtoull | 140.665 | 1.68013 | 5.64787ms | 2000 | 240 | 1.24562e+07 | 13559.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.345 | 0.60717 | 10.8611ms | 20000 | 120 | 1.57813e+07 | 59726.9 | 1(Win) |
| std::from_chars | 263.031 | 1.21558 | 12.9108ms | 20000 | 120 | 9.32379e+07 | 72514.1 | 2(Loss) |
| strtoll/strtoull | 152.548 | 0.537266 | 22.774ms | 20000 | 120 | 5.41509e+07 | 125033 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 291.307 | 0.75369 | 120.063ms | 200000 | 120 | 2.92231e+09 | 654756 | 1(Win) |
| std::from_chars | 184.94 | 1.32954 | 181.165ms | 200000 | 120 | 2.25622e+10 | 1.03133e+06 | 2(Loss) |
| strtoll/strtoull | 144.312 | 0.891548 | 237.574ms | 200000 | 120 | 1.66619e+10 | 1.32168e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 400.569 | 1.06543 | 0.903168ms | 2000 | 120 | 308845 | 4761.6 | 1(Win) |
| std::from_chars | 332.739 | 1.17387 | 1.05293ms | 2000 | 120 | 543338 | 5732.27 | 2(Loss) |
| strtoll/strtoull | 172.8 | 0.483409 | 2.51981ms | 2000 | 120 | 341650 | 11037.9 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.794 | 1.8676 | 61.0412ms | 20000 | 480 | 6.30554e+08 | 61370.1 | 1(Win) |
| std::from_chars | 200.383 | 0.898794 | 15.467ms | 20000 | 120 | 8.78292e+07 | 95185.1 | 2(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 252.521 | 2.11583 | 125.215ms | 200000 | 120 | 3.06484e+10 | 755322 | 1(Win) |
| std::from_chars | 176.322 | 1.45736 | 514.009ms | 200000 | 240 | 5.96474e+10 | 1.08174e+06 | 2(Loss) |
| strtoll/strtoull | 165.661 | 0.509751 | 209.665ms | 200000 | 120 | 4.13349e+09 | 1.15136e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 370.369 | 0.414668 | 1.99296ms | 4000 | 120 | 218894 | 10299.7 | 1(Win) |
| std::from_chars | 280.075 | 0.324429 | 6.11814ms | 4000 | 240 | 468622 | 13620.3 | 2(Loss) |
| strtoll/strtoull | 169.911 | 1.02855 | 4.16614ms | 4000 | 120 | 6.39896e+06 | 22451.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 273.776 | 1.54885 | 56.588ms | 40000 | 240 | 1.11779e+09 | 139337 | 1(Win) |
| std::from_chars | 205.751 | 1.97777 | 34.3908ms | 40000 | 120 | 1.61351e+09 | 185404 | 2(Loss) |
| strtoll/strtoull | 171.294 | 1.52481 | 41.4221ms | 40000 | 120 | 1.38373e+09 | 222699 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 328.099 | 2.05487 | 0.527104ms | 400 | 240 | 136990 | 1162.67 | 1(Win) |
| strtoll/strtoull | 165.262 | 2.28462 | 0.504832ms | 400 | 120 | 333720 | 2308.27 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 431.501 | 1.06012 | 1.59898ms | 4000 | 120 | 1.05401e+06 | 8840.53 | 1(Win) |
| std::from_chars | 330.586 | 1.05256 | 2.11405ms | 4000 | 120 | 1.7702e+06 | 11539.2 | 2(Loss) |
| strtoll/strtoull | 199.525 | 1.51478 | 10.3209ms | 4000 | 240 | 2.01297e+07 | 19118.9 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 435.24 | 0.998567 | 42.7661ms | 40000 | 240 | 1.83835e+08 | 87645.9 | 1(Win) |
| std::from_chars | 349.806 | 0.44769 | 19.8111ms | 40000 | 120 | 2.86023e+07 | 109052 | 2(Loss) |
| strtoll/strtoull | 205.801 | 1.07276 | 33.2669ms | 40000 | 120 | 4.74478e+08 | 185359 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 199.792 | 2.13414 | 0.377088ms | 400 | 120 | 199247 | 1909.33 | 1(Win) |
| std::from_chars | 135.774 | 1.9061 | 0.548096ms | 400 | 120 | 344160 | 2809.6 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 238.578 | 2.16484 | 6.62195ms | 4000 | 240 | 2.87557e+07 | 15989.3 | 1(Win) |
| std::from_chars | 159.819 | 2.37376 | 10.657ms | 4000 | 240 | 7.70455e+07 | 23868.8 | 2(Loss) |
| strtoll/strtoull | 74.6146 | 0.653286 | 7.82208ms | 4000 | 120 | 1.33863e+07 | 51125.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 487.301 | 1.82017 | 82.3219ms | 40000 | 480 | 9.74521e+08 | 78282.1 | 1(Win) |
| std::from_chars | 305.613 | 1.93422 | 64.3471ms | 40000 | 240 | 1.39894e+09 | 124821 | 2(Loss) |
| strtoll/strtoull | 186.686 | 1.62029 | 202.284ms | 40000 | 480 | 5.26167e+09 | 204338 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 391.706 | 2.16698 | 0.502016ms | 400 | 240 | 106886 | 973.867 | 1(Win) |
| strtoll/strtoull | 73.9512 | 0.804545 | 2.23488ms | 400 | 120 | 206686 | 5158.4 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 653.082 | 1.43082 | 1.40518ms | 4000 | 120 | 838182 | 5841.07 | 1(Win) |
| std::from_chars | 368.423 | 1.57787 | 4.6912ms | 4000 | 240 | 6.40588e+06 | 10354.1 | 2(Loss) |
| strtoll/strtoull | 220.949 | 1.32166 | 3.21997ms | 4000 | 120 | 6.24827e+06 | 17265.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 671.803 | 1.81248 | 10.498ms | 40000 | 120 | 1.27105e+08 | 56782.9 | 1(Win) |
| std::from_chars | 215.319 | 1.9761 | 165.721ms | 40000 | 480 | 5.88318e+09 | 177165 | 2(Loss) |
| strtoll/strtoull | 197.225 | 2.45836 | 36.4421ms | 40000 | 120 | 2.71312e+09 | 193419 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 72.4482 | 2.36532 | 4680.19ms | 400000 | 480 | 7.44537e+12 | 5.26542e+06 | 1(Win) |
| std::from_chars | 61.4499 | 2.14732 | 5328.53ms | 400000 | 480 | 8.5293e+12 | 6.20782e+06 | 2(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 658.615 | 2.15187 | 0.55808ms | 800 | 240 | 149129 | 1158.4 | 1(Win) |
| strtoll/strtoull | 239.536 | 1.37775 | 0.591104ms | 800 | 120 | 231079 | 3185.07 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 355.566 | 1.51204 | 3.93779ms | 8000 | 120 | 1.26314e+07 | 21457.1 | 1(Win) |
| strtoll/strtoull | 185.002 | 1.82977 | 7.13318ms | 8000 | 120 | 6.83282e+07 | 41239.5 | 2(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 379.525 | 1.27205 | 97.952ms | 80000 | 240 | 1.56935e+09 | 201025 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 361.84 | 2.42332 | 82.3222ms | 80000 | 240 | 6.26587e+09 | 210850 | 1(Tie) |
| strtoll/strtoull | 206.877 | 1.45783 | 356.525ms | 80000 | 480 | 1.38743e+10 | 368789 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 864.357 | 2.28786 | 0.871936ms | 800 | 480 | 195746 | 882.667 | 1(Win) |
| strtoll/strtoull | 303.332 | 1.86085 | 0.471808ms | 800 | 120 | 262874 | 2515.2 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 321.074 | 2.06893 | 10.1801ms | 8000 | 240 | 5.8006e+07 | 23762.1 | 1(Win) |
| strtoll/strtoull | 285.121 | 0.950658 | 4.85888ms | 8000 | 120 | 7.76515e+06 | 26758.4 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 766.36 | 2.33236 | 102.566ms | 80000 | 480 | 2.5879e+09 | 99553.6 | 1(Win) |
| std::from_chars | 456.866 | 0.704115 | 73.6699ms | 80000 | 240 | 3.31819e+08 | 166994 | 2(Loss) |
| strtoll/strtoull | 271.134 | 0.969459 | 49.4748ms | 80000 | 120 | 8.93005e+08 | 281389 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1084.12 | 1.0975 | 10.1839ms | 8000 | 300 | 1.78963e+06 | 7037.44 | 1(Win) |
| std::from_chars | 444.921 | 1.19228 | 3.34694ms | 8000 | 120 | 5.01596e+06 | 17147.7 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1029.79 | 0.937076 | 81.1231ms | 80000 | 480 | 2.31353e+08 | 74086.9 | 1(Win) |
| std::from_chars | 362.199 | 2.24574 | 243.25ms | 80000 | 480 | 1.07411e+10 | 210641 | 2(Loss) |
| strtoll/strtoull | 252.571 | 1.66554 | 286.336ms | 80000 | 480 | 1.21497e+10 | 302069 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 656.198 | 2.25865 | 1.28384ms | 800 | 240 | 165508 | 1162.67 | 1(Win) |
| std::from_chars | 411.067 | 2.09838 | 0.376832ms | 800 | 120 | 182014 | 1856 | 2(Loss) |
| strtoll/strtoull | 215.309 | 2.26209 | 0.643072ms | 800 | 120 | 771007 | 3543.47 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 319.225 | 1.21813 | 10.5759ms | 8000 | 240 | 2.03417e+07 | 23899.7 | 1(Win) |
| strtoll/strtoull | 256.162 | 1.11605 | 6.74099ms | 8000 | 120 | 1.32586e+07 | 29783.5 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 741.613 | 1.02163 | 18.4919ms | 80000 | 120 | 1.32554e+08 | 102876 | 1(Win) |
| std::from_chars | 332.141 | 2.26931 | 123.442ms | 80000 | 240 | 6.5213e+09 | 229703 | 2(Loss) |
| strtoll/strtoull | 201.655 | 1.48404 | 66.5119ms | 80000 | 120 | 3.78295e+09 | 378338 | 3(Loss) |
