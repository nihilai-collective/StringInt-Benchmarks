# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the Clang 22.1.8 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 232.812 | 1.19877 | 0.09475ms | 100 | 30 | 723.413 | 409.633 | 1(Win) |
| std::from_chars | 152.247 | 0.223499 | 0.127416ms | 100 | 30 | 58.8 | 626.4 | 2(Loss) |
| strtoll/strtoull | 46.2395 | 0.187924 | 0.414375ms | 100 | 30 | 450.671 | 2062.47 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 237.678 | 0.101131 | 0.763166ms | 1000 | 30 | 493.982 | 4012.47 | 1(Win) |
| std::from_chars | 142.399 | 0.0511387 | 1.24133ms | 1000 | 30 | 351.89 | 6697.2 | 2(Loss) |
| strtoll/strtoull | 38.7256 | 0.0339823 | 4.51187ms | 1000 | 30 | 2101.01 | 24626.4 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 71.8963 | 0.219485 | 25.015ms | 10000 | 30 | 2.54283e+06 | 132646 | 1(Win) |
| std::from_chars | 57.6485 | 0.352071 | 30.258ms | 10000 | 30 | 1.01767e+07 | 165429 | 2(Loss) |
| strtoll/strtoull | 33.1359 | 1.25641 | 51.2687ms | 10000 | 30 | 3.92272e+08 | 287807 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 48.3155 | 0.116823 | 357.231ms | 100000 | 30 | 1.59515e+08 | 1.97385e+06 | 1(Win) |
| std::from_chars | 46.109 | 0.291538 | 371.482ms | 100000 | 30 | 1.09079e+09 | 2.0683e+06 | 2(Loss) |
| strtoll/strtoull | 35.9231 | 0.196303 | 478.766ms | 100000 | 30 | 8.14757e+08 | 2.65477e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 216.662 | 0.982107 | 0.094041ms | 100 | 30 | 560.626 | 440.167 | 1(Win) |
| std::from_chars | 146.697 | 0.585453 | 0.131083ms | 100 | 30 | 434.576 | 650.1 | 2(Loss) |
| strtoll/strtoull | 40.366 | 1.36133 | 0.434292ms | 100 | 30 | 31032.3 | 2362.57 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 228.88 | 0.0679709 | 0.799416ms | 1000 | 30 | 240.631 | 4166.7 | 1(Win) |
| std::from_chars | 144.163 | 0.0495294 | 1.22683ms | 1000 | 30 | 322.064 | 6615.27 | 2(Loss) |
| strtoll/strtoull | 42.5695 | 0.0372362 | 4.27667ms | 1000 | 30 | 2087.63 | 22402.8 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 85.3485 | 0.260345 | 20.6096ms | 10000 | 30 | 2.53881e+06 | 111739 | 1(Win) |
| std::from_chars | 43.8981 | 1.41227 | 34.9446ms | 10000 | 30 | 2.82399e+08 | 217247 | 2(Loss) |
| strtoll/strtoull | 42.2447 | 0.349566 | 40.6305ms | 10000 | 30 | 1.86825e+07 | 225750 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 56.2257 | 0.113759 | 333.318ms | 100000 | 30 | 1.11691e+08 | 1.69615e+06 | 1(Win) |
| std::from_chars | 50.5047 | 0.0834835 | 341.786ms | 100000 | 30 | 7.45519e+07 | 1.88829e+06 | 2(Loss) |
| strtoll/strtoull | 38.5974 | 0.601307 | 475.748ms | 100000 | 30 | 6.62214e+09 | 2.47083e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 250.615 | 0.688475 | 0.081792ms | 100 | 30 | 205.913 | 380.533 | 1(Win) |
| std::from_chars | 148.942 | 0.583215 | 0.133875ms | 100 | 30 | 418.355 | 640.3 | 2(Loss) |
| strtoll/strtoull | 44.4721 | 0.179923 | 0.396458ms | 100 | 30 | 446.599 | 2144.43 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 261.979 | 0.369512 | 0.688458ms | 1000 | 30 | 5428.06 | 3640.27 | 1(Win) |
| std::from_chars | 136.892 | 0.713513 | 1.3095ms | 1000 | 30 | 74126.1 | 6966.63 | 2(Loss) |
| strtoll/strtoull | 40.5435 | 0.228186 | 4.29583ms | 1000 | 30 | 86428.5 | 23522.2 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 93.7785 | 0.375171 | 18.8702ms | 10000 | 30 | 4.3669e+06 | 101694 | 1(Win) |
| std::from_chars | 57.2777 | 0.706457 | 31.5495ms | 10000 | 30 | 4.1507e+07 | 166500 | 2(Loss) |
| strtoll/strtoull | 39.7739 | 0.304097 | 42.8413ms | 10000 | 30 | 1.59495e+07 | 239774 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 59.928 | 0.0726401 | 290.281ms | 100000 | 30 | 4.0088e+07 | 1.59137e+06 | 1(Win) |
| std::from_chars | 48.6374 | 0.410343 | 364.447ms | 100000 | 30 | 1.94211e+09 | 1.96078e+06 | 2(Loss) |
| strtoll/strtoull | 37.9342 | 1.87959 | 472.258ms | 100000 | 30 | 6.6986e+10 | 2.51402e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 185.54 | 1.46854 | 0.107917ms | 100 | 30 | 1709.31 | 514 | 1(Win) |
| std::from_chars | 140.432 | 0.521474 | 0.164584ms | 100 | 30 | 376.231 | 679.1 | 2(Loss) |
| strtoll/strtoull | 42.2036 | 0.144503 | 0.418ms | 100 | 30 | 319.872 | 2259.7 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 243.668 | 0.0708103 | 0.747541ms | 1000 | 30 | 230.42 | 3913.83 | 1(Win) |
| std::from_chars | 149.204 | 0.0738942 | 1.20142ms | 1000 | 30 | 669.237 | 6391.73 | 2(Loss) |
| strtoll/strtoull | 41.7639 | 0.0308479 | 4.30346ms | 1000 | 30 | 1488.58 | 22834.9 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 70.8677 | 0.478655 | 28.6284ms | 10000 | 30 | 1.24471e+07 | 134571 | 1(Win) |
| vn::from_chars | 58.9052 | 0.813108 | 29.9865ms | 10000 | 30 | 5.1989e+07 | 161900 | 2(Loss) |
| strtoll/strtoull | 38.8585 | 0.918811 | 50.9657ms | 10000 | 30 | 1.52546e+08 | 245422 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 55.6673 | 0.0892117 | 311.543ms | 100000 | 30 | 7.00752e+07 | 1.71317e+06 | 1(Win) |
| vn::from_chars | 52.7446 | 1.07301 | 327.284ms | 100000 | 30 | 1.1292e+10 | 1.8081e+06 | 2(Loss) |
| strtoll/strtoull | 41.8767 | 0.0700912 | 419.496ms | 100000 | 30 | 7.64371e+07 | 2.27734e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 326.247 | 0.539747 | 0.118417ms | 200 | 30 | 298.723 | 584.633 | 1(Win) |
| std::from_chars | 221.862 | 0.434375 | 0.175667ms | 200 | 30 | 418.355 | 859.7 | 2(Loss) |
| strtoll/strtoull | 76.5071 | 0.11604 | 0.507542ms | 200 | 30 | 251.068 | 2493.03 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 339.336 | 0.0741339 | 1.04825ms | 2000 | 30 | 520.902 | 5620.83 | 1(Win) |
| std::from_chars | 236.975 | 0.0613945 | 3.43113ms | 2000 | 30 | 732.547 | 8048.73 | 2(Loss) |
| strtoll/strtoull | 68.0958 | 0.0354441 | 5.08462ms | 2000 | 30 | 2956.86 | 28009.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 153.905 | 0.601125 | 22.7236ms | 20000 | 30 | 1.66497e+07 | 123930 | 1(Win) |
| std::from_chars | 92.1845 | 0.935556 | 37.372ms | 20000 | 30 | 1.1241e+08 | 206906 | 2(Loss) |
| strtoll/strtoull | 66.7572 | 0.170483 | 51.528ms | 20000 | 30 | 7.11782e+06 | 285714 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 97.2184 | 1.31793 | 858.348ms | 200000 | 30 | 2.0057e+10 | 1.96192e+06 | 1(Win) |
| std::from_chars | 86.5627 | 0.800599 | 393.81ms | 200000 | 30 | 9.33576e+09 | 2.20343e+06 | 2(Loss) |
| strtoll/strtoull | 65.6757 | 0.804135 | 524.526ms | 200000 | 30 | 1.63618e+10 | 2.90419e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 305.845 | 0.219146 | 0.154917ms | 200 | 30 | 56.0333 | 623.633 | 1(Win) |
| std::from_chars | 188.903 | 1.78905 | 0.219875ms | 200 | 30 | 9789.32 | 1009.7 | 2(Loss) |
| strtoll/strtoull | 76.933 | 0.192972 | 0.467167ms | 200 | 30 | 686.668 | 2479.23 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.674 | 0.102279 | 1.08004ms | 2000 | 30 | 1044.13 | 5768.07 | 1(Win) |
| strtoll/strtoull | 75.5926 | 0.28845 | 4.57229ms | 2000 | 30 | 158914 | 25231.9 | 2(Loss) |
| std::from_chars | 59.0387 | 0.114453 | 4.79875ms | 2000 | 30 | 41016.8 | 32306.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 185.069 | 0.293737 | 18.9578ms | 20000 | 30 | 2.74936e+06 | 103061 | 1(Win) |
| std::from_chars | 112.019 | 0.458111 | 31.866ms | 20000 | 30 | 1.82531e+07 | 170270 | 2(Loss) |
| strtoll/strtoull | 76.1121 | 0.479558 | 45.6869ms | 20000 | 30 | 4.33267e+07 | 250597 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 104.458 | 0.557056 | 876.059ms | 200000 | 30 | 3.10382e+09 | 1.82595e+06 | 1(Win) |
| std::from_chars | 80.0415 | 1.02242 | 423.942ms | 200000 | 30 | 1.78077e+10 | 2.38295e+06 | 2(Loss) |
| strtoll/strtoull | 66.1412 | 1.70743 | 2744.27ms | 200000 | 48 | 1.1637e+11 | 2.88375e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 221.501 | 0.423952 | 0.174584ms | 200 | 30 | 399.817 | 861.1 | 1(Win) |
| strtoll/strtoull | 70.82 | 0.157496 | 0.530875ms | 200 | 30 | 539.771 | 2693.23 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 332.194 | 0.100559 | 1.06662ms | 2000 | 30 | 1000.09 | 5741.67 | 1(Win) |
| std::from_chars | 231.46 | 0.245366 | 1.58358ms | 2000 | 30 | 12264.7 | 8240.5 | 2(Loss) |
| strtoll/strtoull | 72.2902 | 0.648798 | 4.78375ms | 2000 | 30 | 879107 | 26384.6 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 192.864 | 0.338382 | 18.178ms | 20000 | 30 | 3.35962e+06 | 98895.8 | 1(Win) |
| std::from_chars | 111.504 | 0.26994 | 33.3185ms | 20000 | 30 | 6.39643e+06 | 171057 | 2(Loss) |
| strtoll/strtoull | 76.2296 | 0.172988 | 45.1212ms | 20000 | 30 | 5.62037e+06 | 250211 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 118.769 | 0.229106 | 289.641ms | 200000 | 30 | 4.06116e+08 | 1.60593e+06 | 1(Win) |
| std::from_chars | 94.1724 | 0.0741256 | 369.308ms | 200000 | 30 | 6.76193e+07 | 2.02538e+06 | 2(Loss) |
| strtoll/strtoull | 76.2775 | 0.0877145 | 450.248ms | 200000 | 30 | 1.44322e+08 | 2.50054e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 330.162 | 0.456636 | 0.118209ms | 200 | 30 | 208.769 | 577.7 | 1(Win) |
| std::from_chars | 292.15 | 0.560539 | 0.132458ms | 200 | 30 | 401.775 | 652.867 | 2(Loss) |
| strtoll/strtoull | 74.7951 | 0.145545 | 0.474125ms | 200 | 30 | 413.266 | 2550.1 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 343.404 | 0.0735158 | 1.03617ms | 2000 | 30 | 500.185 | 5554.23 | 1(Win) |
| std::from_chars | 307.435 | 0.0494722 | 1.19096ms | 2000 | 30 | 282.616 | 6204.07 | 2(Loss) |
| strtoll/strtoull | 76.7539 | 0.0273238 | 4.49667ms | 2000 | 30 | 1383.13 | 24850.2 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 160.379 | 1.34171 | 25.436ms | 20000 | 30 | 7.63841e+07 | 118928 | 1(Win) |
| std::from_chars | 115.723 | 0.390351 | 29.8968ms | 20000 | 30 | 1.24179e+07 | 164820 | 2(Loss) |
| strtoll/strtoull | 64.5677 | 0.664567 | 53.0473ms | 20000 | 30 | 1.15619e+08 | 295403 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 123.609 | 1.1244 | 273.542ms | 200000 | 30 | 9.03081e+09 | 1.54305e+06 | 1(Win) |
| std::from_chars | 100.77 | 1.43804 | 338.661ms | 200000 | 30 | 2.22258e+10 | 1.89277e+06 | 2(Loss) |
| strtoll/strtoull | 75.7258 | 0.173136 | 517.526ms | 200000 | 30 | 5.70516e+08 | 2.51876e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 435.286 | 0.356982 | 0.17125ms | 400 | 30 | 293.62 | 876.367 | 1(Win) |
| std::from_chars | 290.334 | 0.294326 | 0.2655ms | 400 | 30 | 448.645 | 1313.9 | 2(Loss) |
| strtoll/strtoull | 123.428 | 0.112593 | 0.567708ms | 400 | 30 | 363.275 | 3090.63 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 437.139 | 0.0748496 | 1.60546ms | 4000 | 30 | 1279.91 | 8726.5 | 1(Win) |
| std::from_chars | 293.908 | 0.0551182 | 2.39946ms | 4000 | 30 | 1535.36 | 12979.2 | 2(Loss) |
| strtoll/strtoull | 114.412 | 1.27354 | 5.91321ms | 4000 | 30 | 5.40904e+06 | 33341.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 274.999 | 0.272621 | 25.4404ms | 40000 | 30 | 4.2904e+06 | 138717 | 1(Win) |
| std::from_chars | 160.486 | 0.540609 | 43.4052ms | 40000 | 30 | 4.95377e+07 | 237697 | 2(Loss) |
| strtoll/strtoull | 113.307 | 0.188569 | 60.6073ms | 40000 | 30 | 1.20912e+07 | 336669 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 187.742 | 0.168768 | 366.42ms | 400000 | 30 | 3.52777e+08 | 2.03188e+06 | 1(Win) |
| std::from_chars | 144.872 | 1.57764 | 486.947ms | 400000 | 30 | 5.17713e+10 | 2.63315e+06 | 2(Loss) |
| strtoll/strtoull | 113.001 | 0.21529 | 615.38ms | 400000 | 30 | 1.58462e+09 | 3.37581e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 420.6 | 0.361165 | 0.17675ms | 400 | 30 | 321.895 | 906.967 | 1(Win) |
| std::from_chars | 287.894 | 0.232726 | 0.279375ms | 400 | 30 | 285.275 | 1325.03 | 2(Loss) |
| strtoll/strtoull | 125.129 | 0.13234 | 0.560541ms | 400 | 30 | 488.317 | 3048.6 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 435.552 | 0.0662269 | 1.60621ms | 4000 | 30 | 1009.32 | 8758.3 | 1(Win) |
| std::from_chars | 289.816 | 0.101094 | 2.43825ms | 4000 | 30 | 5311.84 | 13162.5 | 2(Loss) |
| strtoll/strtoull | 126.998 | 0.02609 | 5.43879ms | 4000 | 30 | 1842.46 | 30037.6 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.147 | 1.47998 | 104.713ms | 40000 | 30 | 2.12461e+08 | 179814 | 1(Win) |
| std::from_chars | 147.233 | 0.659124 | 46.6015ms | 40000 | 30 | 8.74908e+07 | 259092 | 2(Loss) |
| strtoll/strtoull | 106.696 | 0.883101 | 63.8491ms | 40000 | 30 | 2.99064e+08 | 357529 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 208.745 | 0.969432 | 325.804ms | 400000 | 30 | 9.41547e+09 | 1.82744e+06 | 1(Win) |
| std::from_chars | 136.387 | 1.63548 | 514.933ms | 400000 | 30 | 6.27746e+10 | 2.79696e+06 | 2(Loss) |
| strtoll/strtoull | 127.83 | 0.0948196 | 539.406ms | 400000 | 30 | 2.40199e+08 | 2.98419e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 388.488 | 0.390748 | 0.192625ms | 400 | 30 | 441.651 | 981.933 | 1(Win) |
| std::from_chars | 244.568 | 2.27298 | 0.360416ms | 400 | 30 | 37707.8 | 1559.77 | 2(Loss) |
| strtoll/strtoull | 119.837 | 0.948848 | 0.573084ms | 400 | 30 | 27368.5 | 3183.23 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 431.716 | 0.0675154 | 1.62712ms | 4000 | 30 | 1067.71 | 8836.13 | 1(Win) |
| std::from_chars | 286.518 | 0.0491673 | 2.46025ms | 4000 | 30 | 1285.55 | 13314 | 2(Loss) |
| strtoll/strtoull | 126.611 | 0.634091 | 5.4435ms | 4000 | 30 | 1.09497e+06 | 30129.3 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 271.597 | 0.210285 | 25.8663ms | 40000 | 30 | 2.61703e+06 | 140454 | 1(Win) |
| std::from_chars | 160.086 | 0.269595 | 43.2871ms | 40000 | 30 | 1.2381e+07 | 238290 | 2(Loss) |
| strtoll/strtoull | 127.826 | 0.335933 | 53.5922ms | 40000 | 30 | 3.01512e+07 | 298428 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 208.547 | 0.523158 | 359.249ms | 400000 | 30 | 2.74725e+09 | 1.82918e+06 | 1(Win) |
| std::from_chars | 152.273 | 0.099269 | 457.352ms | 400000 | 30 | 1.85535e+08 | 2.50518e+06 | 2(Loss) |
| strtoll/strtoull | 114.027 | 0.85533 | 589.924ms | 400000 | 30 | 2.45638e+10 | 3.34544e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 403.302 | 0.375408 | 0.209167ms | 400 | 30 | 378.257 | 945.867 | 1(Win) |
| std::from_chars | 331.751 | 0.327947 | 0.221ms | 400 | 30 | 426.602 | 1149.87 | 2(Loss) |
| strtoll/strtoull | 118.083 | 0.614528 | 0.628125ms | 400 | 30 | 11823.7 | 3230.53 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 427.61 | 0.0606767 | 1.66042ms | 4000 | 30 | 878.999 | 8920.97 | 1(Win) |
| std::from_chars | 276.397 | 0.0554531 | 2.52608ms | 4000 | 30 | 1757.22 | 13801.5 | 2(Loss) |
| strtoll/strtoull | 128.363 | 0.0305504 | 5.37825ms | 4000 | 30 | 2472.85 | 29718.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 281.322 | 1.3217 | 24.6374ms | 40000 | 30 | 9.63603e+07 | 135599 | 1(Win) |
| std::from_chars | 179.752 | 0.327046 | 38.5448ms | 40000 | 30 | 1.44514e+07 | 212219 | 2(Loss) |
| strtoll/strtoull | 127.612 | 0.143902 | 53.9585ms | 40000 | 30 | 5.55126e+06 | 298929 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 237.46 | 0.235892 | 297.238ms | 400000 | 30 | 4.3081e+08 | 1.60646e+06 | 1(Win) |
| std::from_chars | 160.264 | 0.235862 | 428.838ms | 400000 | 30 | 9.45552e+08 | 2.38026e+06 | 2(Loss) |
| strtoll/strtoull | 101.668 | 1.49829 | 590.389ms | 400000 | 30 | 9.48128e+10 | 3.75213e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 495.329 | 0.20379 | 0.331583ms | 800 | 30 | 295.582 | 1540.27 | 1(Win) |
| std::from_chars | 289.577 | 2.12585 | 0.449333ms | 800 | 30 | 94110.9 | 2634.67 | 2(Loss) |
| strtoll/strtoull | 155.702 | 1.78862 | 0.959875ms | 800 | 30 | 230435 | 4900 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 496.536 | 0.387948 | 2.98492ms | 8000 | 30 | 106597 | 15365.2 | 1(Win) |
| std::from_chars | 268.391 | 0.849977 | 5.25846ms | 8000 | 30 | 1.75138e+06 | 28426.4 | 2(Loss) |
| strtoll/strtoull | 155.218 | 1.81534 | 9.3625ms | 8000 | 30 | 2.38854e+07 | 49152.7 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.773 | 0.2683 | 35.9445ms | 80000 | 30 | 8.14814e+06 | 194244 | 1(Win) |
| std::from_chars | 228.598 | 0.191714 | 60.1465ms | 80000 | 30 | 1.22818e+07 | 333747 | 2(Loss) |
| strtoll/strtoull | 175.753 | 0.167051 | 78.2068ms | 80000 | 30 | 1.57759e+07 | 434097 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 341.431 | 0.23175 | 408.43ms | 800000 | 30 | 8.04516e+08 | 2.23453e+06 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 173.475 | 0.192893 | 799.808ms | 800000 | 30 | 2.15903e+09 | 4.39798e+06 | 2(Tie) |
| std::from_chars STATISTICAL TIE | 168.427 | 1.47741 | 826.452ms | 800000 | 30 | 1.34363e+11 | 4.5298e+06 | 2(Tie) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 424.169 | 1.1858 | 0.358458ms | 800 | 30 | 13647.3 | 1798.67 | 1(Win) |
| std::from_chars | 272.602 | 2.08155 | 0.520333ms | 800 | 30 | 101817 | 2798.73 | 2(Loss) |
| strtoll/strtoull | 147.19 | 1.59536 | 0.942208ms | 800 | 30 | 205146 | 5183.37 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 482.113 | 2.19123 | 2.89758ms | 8000 | 30 | 3.60728e+06 | 15824.9 | 1(Win) |
| std::from_chars | 266.167 | 0.0418004 | 5.40787ms | 8000 | 30 | 4306.79 | 28664 | 2(Loss) |
| strtoll/strtoull | 165.621 | 1.78607 | 7.57596ms | 8000 | 30 | 2.0308e+07 | 46065.3 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 413.67 | 0.495116 | 33.3097ms | 80000 | 30 | 2.50154e+07 | 184432 | 1(Win) |
| std::from_chars | 229.548 | 0.272268 | 59.774ms | 80000 | 30 | 2.45666e+07 | 332365 | 2(Loss) |
| strtoll/strtoull | 190.509 | 0.130609 | 72.2071ms | 80000 | 30 | 8.20763e+06 | 400473 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 381.982 | 1.02506 | 351.918ms | 800000 | 30 | 1.25753e+10 | 1.99732e+06 | 1(Win) |
| strtoll/strtoull | 189.608 | 0.0843614 | 722.687ms | 800000 | 30 | 3.45682e+08 | 4.02378e+06 | 2(Loss) |
| std::from_chars | 170.709 | 1.3834 | 2105.64ms | 800000 | 30 | 1.1468e+11 | 4.46924e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.917 | 1.16709 | 0.385042ms | 800 | 30 | 15251 | 1931.9 | 1(Win) |
| std::from_chars | 300.508 | 1.21377 | 0.497042ms | 800 | 30 | 28488 | 2538.83 | 2(Loss) |
| strtoll/strtoull | 161.616 | 1.32805 | 0.863625ms | 800 | 30 | 117913 | 4720.7 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 503.771 | 0.0694689 | 2.77129ms | 8000 | 30 | 3320.6 | 15144.6 | 1(Win) |
| std::from_chars | 260.387 | 0.0363878 | 5.38488ms | 8000 | 30 | 3410.14 | 29300.2 | 2(Loss) |
| strtoll/strtoull | 184.811 | 0.235077 | 7.48046ms | 8000 | 30 | 282531 | 41282.1 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 426.412 | 0.243647 | 32.3152ms | 80000 | 30 | 5.70118e+06 | 178921 | 1(Win) |
| std::from_chars | 226.094 | 0.8341 | 60.0899ms | 80000 | 30 | 2.37661e+08 | 337443 | 2(Loss) |
| strtoll/strtoull | 170.989 | 0.849332 | 79.4408ms | 80000 | 30 | 4.30843e+08 | 446192 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.391 | 0.169524 | 846.624ms | 800000 | 30 | 3.25932e+08 | 1.94434e+06 | 1(Win) |
| std::from_chars STATISTICAL TIE | 196.181 | 2.27945 | 3076.24ms | 800000 | 30 | 2.35749e+11 | 3.88897e+06 | 2(Tie) |
| strtoll/strtoull STATISTICAL TIE | 189.207 | 0.119142 | 723.97ms | 800000 | 30 | 6.924e+08 | 4.0323e+06 | 2(Tie) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 476.837 | 0.321969 | 0.324375ms | 800 | 30 | 796.138 | 1600 | 1(Win) |
| std::from_chars | 314.588 | 0.786727 | 1.12571ms | 800 | 30 | 10921.1 | 2425.2 | 2(Loss) |
| strtoll/strtoull | 158.853 | 1.4537 | 0.87425ms | 800 | 30 | 146238 | 4802.8 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 452.334 | 1.44319 | 3.2335ms | 8000 | 30 | 1.77757e+06 | 16866.7 | 1(Win) |
| std::from_chars | 249.735 | 0.664877 | 5.51392ms | 8000 | 30 | 1.23773e+06 | 30550 | 2(Loss) |
| strtoll/strtoull | 172.285 | 1.48882 | 7.94579ms | 8000 | 30 | 1.30403e+07 | 44283.5 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 366.069 | 0.195013 | 37.796ms | 80000 | 30 | 4.95568e+06 | 208414 | 1(Win) |
| std::from_chars | 230.376 | 0.158103 | 59.6773ms | 80000 | 30 | 8.22447e+06 | 331171 | 2(Loss) |
| strtoll/strtoull | 189.406 | 0.181344 | 72.566ms | 80000 | 30 | 1.60074e+07 | 402806 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.869 | 0.273463 | 414.641ms | 800000 | 30 | 1.18567e+09 | 2.29892e+06 | 1(Win) |
| std::from_chars | 224.482 | 0.4957 | 780.404ms | 800000 | 30 | 8.5148e+09 | 3.39866e+06 | 2(Loss) |
| strtoll/strtoull | 184.49 | 0.83673 | 744.586ms | 800000 | 30 | 3.59192e+10 | 4.1354e+06 | 3(Loss) |
