# str-to-int-natural  
----

Performance profiling of libraries (Compiled and run on macOS 25.5.0 using the Clang 22.1.8 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 118.124 | 0.563459 | 0.19175ms | 100 | 120 | 2483.31 | 807.35 | 1(Win) |
| strtoll/strtoull | 58.2148 | 1.05301 | 0.313125ms | 100 | 120 | 35708.9 | 1638.2 | 2(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 131.226 | 0.951425 | 1.35008ms | 1000 | 120 | 573705 | 7267.4 | 1(Win) |
| vn::from_chars | 118.337 | 1.36202 | 1.49529ms | 1000 | 120 | 1.44581e+06 | 8058.99 | 2(Loss) |
| strtoll/strtoull | 62.2413 | 0.943059 | 2.74892ms | 1000 | 120 | 2.50554e+06 | 15322.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 92.7305 | 2.01171 | 88.437ms | 10000 | 480 | 2.05459e+09 | 102844 | 1(Win) |
| vn::from_chars | 83.6606 | 2.01788 | 157.322ms | 10000 | 300 | 1.58734e+09 | 113993 | 2(Loss) |
| strtoll/strtoull | 70.7166 | 0.522317 | 143.899ms | 10000 | 480 | 2.38159e+08 | 134859 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 133.482 | 0.385273 | 404.736ms | 100000 | 240 | 1.81845e+09 | 714457 | 1(Win) |
| vn::from_chars | 110.332 | 1.0542 | 153.683ms | 100000 | 120 | 9.96392e+09 | 864371 | 2(Loss) |
| strtoll/strtoull | 64.3312 | 2.0536 | 263.842ms | 100000 | 120 | 1.11217e+11 | 1.48244e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 173.387 | 1.30048 | 0.114583ms | 100 | 120 | 6139.79 | 550.025 | 1(Win) |
| std::from_chars | 112.154 | 0.463599 | 0.86625ms | 100 | 480 | 7459.26 | 850.325 | 2(Loss) |
| strtoll/strtoull | 76.2543 | 0.975908 | 0.239458ms | 100 | 120 | 17876 | 1250.65 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 195.948 | 1.07615 | 0.922542ms | 1000 | 120 | 329191 | 4866.98 | 1(Win) |
| strtoll/strtoull | 80.0576 | 0.826014 | 4.92521ms | 1000 | 240 | 2.32371e+06 | 11912.3 | 2(Loss) |
| std::from_chars | 51.386 | 1.85138 | 3.32104ms | 1000 | 120 | 1.41672e+07 | 18559 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 206.788 | 0.910677 | 8.19421ms | 10000 | 120 | 2.1167e+07 | 46118.4 | 1(Win) |
| std::from_chars | 127.249 | 1.4024 | 13.4289ms | 10000 | 120 | 1.32561e+08 | 74945.5 | 2(Loss) |
| strtoll/strtoull | 93.4952 | 1.49374 | 18.5742ms | 10000 | 120 | 2.78582e+08 | 102002 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 209.14 | 0.368847 | 81.9213ms | 100000 | 120 | 3.3947e+08 | 455999 | 1(Win) |
| std::from_chars | 106.504 | 2.03692 | 149.834ms | 100000 | 120 | 3.99207e+10 | 895434 | 2(Loss) |
| strtoll/strtoull | 94.6155 | 1.47011 | 179.171ms | 100000 | 120 | 2.63487e+10 | 1.00795e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 184.206 | 0.843847 | 0.258292ms | 100 | 240 | 4580.68 | 517.721 | 1(Win) |
| std::from_chars | 118.697 | 2.24809 | 0.379ms | 100 | 240 | 78299.8 | 803.454 | 2(Loss) |
| strtoll/strtoull | 84.5375 | 1.17865 | 0.227167ms | 100 | 120 | 21215.5 | 1128.11 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 211.848 | 1.11791 | 0.830208ms | 1000 | 120 | 303914 | 4501.7 | 1(Win) |
| std::from_chars | 118.316 | 1.48682 | 1.49283ms | 1000 | 120 | 1.7235e+06 | 8060.39 | 2(Loss) |
| strtoll/strtoull | 89.5297 | 1.34245 | 4.6885ms | 1000 | 240 | 4.90763e+06 | 10652 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 229.09 | 0.588997 | 7.48371ms | 10000 | 120 | 7.21432e+06 | 41628.8 | 1(Win) |
| std::from_chars | 129.711 | 0.950861 | 13.4527ms | 10000 | 120 | 5.86489e+07 | 73522.9 | 2(Loss) |
| strtoll/strtoull | 97.6559 | 0.618384 | 17.5862ms | 10000 | 120 | 4.37623e+07 | 97656.6 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.79 | 0.834013 | 239.547ms | 100000 | 240 | 6.25576e+09 | 612155 | 1(Win) |
| std::from_chars | 124.085 | 1.67306 | 365.499ms | 100000 | 240 | 3.96818e+10 | 768563 | 2(Loss) |
| strtoll/strtoull | 94.3276 | 1.24446 | 180.867ms | 100000 | 120 | 1.8996e+10 | 1.01102e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 143.503 | 1.24517 | 0.138ms | 100 | 120 | 8216.99 | 664.567 | 1(Win) |
| std::from_chars | 127.918 | 0.954251 | 0.15175ms | 100 | 120 | 6073.53 | 745.533 | 2(Loss) |
| strtoll/strtoull | 85.382 | 0.662589 | 0.245917ms | 100 | 120 | 6572.6 | 1116.95 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 176.789 | 0.760588 | 1.0145ms | 1000 | 120 | 202008 | 5394.42 | 1(Win) |
| std::from_chars | 120.594 | 1.70895 | 3.37521ms | 1000 | 240 | 4.38352e+06 | 7908.17 | 2(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 164.961 | 0.936143 | 10.5565ms | 10000 | 120 | 3.51483e+07 | 57812.2 | 1(Win) |
| std::from_chars | 115.01 | 1.42131 | 38.3212ms | 10000 | 240 | 3.3336e+08 | 82920.8 | 2(Loss) |
| strtoll/strtoull | 89.1293 | 0.657365 | 19.3218ms | 10000 | 120 | 5.93682e+07 | 106999 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 171.427 | 0.667973 | 98.3806ms | 100000 | 120 | 1.65707e+09 | 556314 | 1(Win) |
| std::from_chars | 101.661 | 1.90629 | 183.079ms | 100000 | 120 | 3.83756e+10 | 938096 | 2(Loss) |
| strtoll/strtoull | 83.2156 | 1.02291 | 201.448ms | 100000 | 120 | 1.64911e+10 | 1.14603e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 184.64 | 1.09815 | 0.204375ms | 200 | 120 | 15442.2 | 1033.01 | 1(Win) |
| vn::from_chars | 177.888 | 1.22817 | 0.210833ms | 200 | 120 | 20809.5 | 1072.22 | 2(Loss) |
| strtoll/strtoull | 94.3539 | 0.895238 | 0.404042ms | 200 | 120 | 39300.6 | 2021.48 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 186.912 | 0.912979 | 1.87321ms | 2000 | 120 | 1.04157e+06 | 10204.5 | 1(Win) |
| std::from_chars | 164.058 | 1.41962 | 2.10954ms | 2000 | 120 | 3.26881e+06 | 11626 | 2(Loss) |
| strtoll/strtoull | 97.1212 | 1.692 | 8.22888ms | 2000 | 240 | 2.65e+07 | 19638.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 194.061 | 0.918323 | 18.1655ms | 20000 | 120 | 9.77583e+07 | 98285.8 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 189.41 | 1.23107 | 17.9482ms | 20000 | 120 | 1.84418e+08 | 100699 | 1(Tie) |
| strtoll/strtoull | 117.067 | 0.389985 | 70.326ms | 20000 | 240 | 9.68943e+07 | 162928 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 187.983 | 0.464616 | 179.815ms | 200000 | 120 | 2.66683e+09 | 1.01464e+06 | 1(Win) |
| strtoll/strtoull | 103.312 | 1.19736 | 2252.37ms | 200000 | 480 | 2.34557e+11 | 1.84621e+06 | 2(Loss) |
| std::from_chars | 34.8957 | 1.71877 | 4746.93ms | 200000 | 480 | 4.23638e+12 | 5.46586e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.517 | 0.640395 | 0.132458ms | 200 | 120 | 1868.82 | 616.233 | 1(Win) |
| std::from_chars | 188.337 | 2.34855 | 0.469208ms | 200 | 240 | 135768 | 1012.73 | 2(Loss) |
| strtoll/strtoull | 116.808 | 2.38432 | 1.68617ms | 200 | 480 | 727588 | 1632.89 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 334.355 | 1.30024 | 1.03862ms | 2000 | 120 | 660194 | 5704.56 | 1(Win) |
| std::from_chars | 189.695 | 0.884949 | 1.8675ms | 2000 | 120 | 950097 | 10054.8 | 2(Loss) |
| strtoll/strtoull | 151.698 | 0.567289 | 2.93983ms | 2000 | 120 | 610504 | 12573.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 321.209 | 0.599275 | 10.7669ms | 20000 | 120 | 1.51956e+07 | 59380.2 | 1(Win) |
| std::from_chars | 175.647 | 1.50953 | 19.4911ms | 20000 | 120 | 3.22437e+08 | 108590 | 2(Loss) |
| strtoll/strtoull | 148.788 | 0.913959 | 23.015ms | 20000 | 120 | 1.64724e+08 | 128192 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 309.893 | 1.54357 | 110.755ms | 200000 | 120 | 1.08311e+10 | 615486 | 1(Win) |
| strtoll/strtoull | 150.557 | 0.738977 | 227.051ms | 200000 | 120 | 1.05172e+10 | 1.26686e+06 | 2(Loss) |
| std::from_chars | 137.633 | 1.37028 | 244.195ms | 200000 | 120 | 4.32727e+10 | 1.38582e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 316.039 | 0.879747 | 0.125667ms | 200 | 120 | 3382.79 | 603.517 | 1(Win) |
| std::from_chars | 183.11 | 1.36921 | 0.457834ms | 200 | 240 | 48818.8 | 1041.64 | 2(Loss) |
| strtoll/strtoull | 141.651 | 0.970123 | 0.304ms | 200 | 120 | 20476.4 | 1346.51 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 189.793 | 0.822665 | 1.83983ms | 2000 | 120 | 820217 | 10049.6 | 1(Win) |
| vn::from_chars | 159.856 | 0.720772 | 2.16675ms | 2000 | 120 | 887517 | 11931.6 | 2(Loss) |
| strtoll/strtoull | 149.591 | 0.895539 | 2.38537ms | 2000 | 120 | 1.56458e+06 | 12750.4 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 331.509 | 0.559043 | 10.4038ms | 20000 | 120 | 1.24149e+07 | 57535.4 | 1(Win) |
| std::from_chars STATISTICAL TIE | 150.361 | 1.95368 | 119.847ms | 20000 | 480 | 2.94809e+09 | 126852 | 2(Tie) |
| strtoll/strtoull STATISTICAL TIE | 145.143 | 0.899551 | 23.3017ms | 20000 | 120 | 1.67688e+08 | 131412 | 2(Tie) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 194.282 | 0.461535 | 175.612ms | 200000 | 120 | 2.46369e+09 | 981744 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 187.8 | 1.66091 | 160.376ms | 200000 | 120 | 3.41463e+10 | 1.01563e+06 | 1(Tie) |
| strtoll/strtoull | 144.998 | 1.42973 | 236.277ms | 200000 | 120 | 4.24449e+10 | 1.31543e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 272.719 | 1.31899 | 0.13825ms | 200 | 120 | 10211.6 | 699.383 | 1(Win) |
| strtoll/strtoull | 138.894 | 1.35962 | 0.257125ms | 200 | 120 | 41832.4 | 1373.24 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 387.722 | 2.14746 | 0.936459ms | 2000 | 120 | 1.33921e+06 | 4919.38 | 1(Win) |
| std::from_chars | 286.817 | 0.875248 | 1.32812ms | 2000 | 120 | 406530 | 6650.05 | 2(Loss) |
| strtoll/strtoull | 161.408 | 0.586716 | 2.25312ms | 2000 | 120 | 576832 | 11817 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 441.796 | 0.440091 | 7.97167ms | 20000 | 120 | 4.33193e+06 | 43172.6 | 1(Win) |
| std::from_chars | 202.274 | 1.74788 | 17.3738ms | 20000 | 120 | 3.25975e+08 | 94295.1 | 2(Loss) |
| strtoll/strtoull | 165.264 | 0.437861 | 21.042ms | 20000 | 120 | 3.06451e+07 | 115413 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 413.72 | 1.68631 | 82.7243ms | 200000 | 120 | 7.25276e+09 | 461024 | 1(Win) |
| std::from_chars | 250.626 | 1.75325 | 155.647ms | 200000 | 120 | 2.13639e+10 | 761035 | 2(Loss) |
| strtoll/strtoull | 126.439 | 1.36234 | 250.854ms | 200000 | 120 | 5.06817e+10 | 1.50852e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 297.661 | 1.02635 | 0.25375ms | 400 | 120 | 20761.1 | 1281.56 | 1(Win) |
| std::from_chars | 207.983 | 1.26906 | 0.3385ms | 400 | 120 | 65015.1 | 1834.14 | 2(Loss) |
| strtoll/strtoull | 153.593 | 0.898038 | 0.487041ms | 400 | 120 | 59696.1 | 2483.63 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 311.149 | 0.953328 | 5.197ms | 4000 | 240 | 3.27854e+06 | 12260 | 1(Win) |
| std::from_chars | 226.043 | 0.87874 | 3.07533ms | 4000 | 120 | 2.639e+06 | 16876 | 2(Loss) |
| strtoll/strtoull | 179.563 | 0.0660504 | 3.90587ms | 4000 | 120 | 23627.6 | 21244.4 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 316.281 | 1.2515 | 21.6277ms | 40000 | 120 | 2.73413e+08 | 120611 | 1(Win) |
| std::from_chars | 240.304 | 0.481116 | 29.3318ms | 40000 | 120 | 6.99968e+07 | 158744 | 2(Loss) |
| strtoll/strtoull | 167.815 | 0.480296 | 99.4999ms | 40000 | 240 | 2.86082e+08 | 227316 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 62.1227 | 2.23182 | 2511.16ms | 400000 | 240 | 4.50763e+12 | 6.14059e+06 | 1(Win) |
| strtoll/strtoull | 49.9935 | 1.6014 | 6992.71ms | 400000 | 480 | 7.16695e+12 | 7.63039e+06 | 2(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 361.394 | 1.23827 | 0.474042ms | 400 | 240 | 41001.6 | 1055.55 | 1(Win) |
| std::from_chars | 222.889 | 0.808227 | 0.325916ms | 400 | 120 | 22960.9 | 1711.47 | 2(Loss) |
| strtoll/strtoull | 178.467 | 1.05523 | 0.411292ms | 400 | 120 | 61049.3 | 2137.47 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 443.763 | 0.483667 | 1.58375ms | 4000 | 120 | 207440 | 8596.24 | 1(Win) |
| std::from_chars | 231.969 | 0.716199 | 3.00079ms | 4000 | 120 | 1.66459e+06 | 16444.9 | 2(Loss) |
| strtoll/strtoull | 185.733 | 1.43158 | 8.68292ms | 4000 | 240 | 2.07483e+07 | 20538.6 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 394.69 | 1.06722 | 108.394ms | 40000 | 480 | 5.10694e+08 | 96650.6 | 1(Win) |
| std::from_chars | 195.517 | 1.28558 | 33.9364ms | 40000 | 120 | 7.5497e+08 | 195108 | 2(Loss) |
| strtoll/strtoull | 185.513 | 0.800709 | 44.6026ms | 40000 | 120 | 3.25312e+08 | 205629 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 292.072 | 1.82955 | 717.315ms | 400000 | 240 | 1.37038e+11 | 1.30608e+06 | 1(Win) |
| strtoll/strtoull | 88.842 | 2.35371 | 4396.28ms | 400000 | 480 | 4.90265e+12 | 4.2938e+06 | 2(Loss) |
| std::from_chars | 69.247 | 1.7762 | 4395.27ms | 400000 | 480 | 4.59559e+12 | 5.50882e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 244.034 | 0.28397 | 0.29525ms | 400 | 120 | 2364.54 | 1563.18 | 1(Win) |
| strtoll/strtoull | 185.737 | 1.93512 | 0.929292ms | 400 | 240 | 379099 | 2053.82 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 457.516 | 0.493447 | 1.53692ms | 4000 | 120 | 203128 | 8337.85 | 1(Win) |
| std::from_chars | 236.062 | 0.75742 | 2.919ms | 4000 | 120 | 1.79772e+06 | 16159.7 | 2(Loss) |
| strtoll/strtoull | 204.691 | 0.715732 | 3.38142ms | 4000 | 120 | 2.13503e+06 | 18636.4 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.024 | 1.36675 | 14.7067ms | 40000 | 120 | 1.53473e+08 | 82744 | 1(Win) |
| std::from_chars | 211.97 | 1.55844 | 31.7425ms | 40000 | 120 | 9.43914e+08 | 179964 | 2(Loss) |
| strtoll/strtoull | 187.779 | 1.19568 | 36.309ms | 40000 | 120 | 7.08011e+08 | 203148 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull | 82.0582 | 2.4395 | 1850.13ms | 400000 | 240 | 3.08667e+12 | 4.64877e+06 | 1(Win) |
| std::from_chars | 66.2427 | 1.52038 | 4638.53ms | 400000 | 480 | 3.67948e+12 | 5.75866e+06 | 2(Loss) |
| vn::from_chars | 59.113 | 1.77877 | 4423.42ms | 400000 | 300 | 3.95291e+12 | 6.45323e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 292.155 | 0.863044 | 1.40008ms | 400 | 480 | 60953.8 | 1305.71 | 1(Win) |
| strtoll/strtoull | 220.787 | 0.49782 | 0.752917ms | 400 | 240 | 17755.3 | 1727.77 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 571.704 | 0.860777 | 6.28587ms | 4000 | 480 | 1.58343e+06 | 6672.5 | 1(Win) |
| std::from_chars | 356.491 | 0.125752 | 1.94567ms | 4000 | 120 | 21728.6 | 10700.7 | 2(Loss) |
| strtoll/strtoull | 213.398 | 1.12781 | 3.18746ms | 4000 | 120 | 4.87747e+06 | 17876 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 673.822 | 0.429017 | 10.226ms | 40000 | 120 | 7.07882e+06 | 56612.8 | 1(Win) |
| std::from_chars | 307.388 | 1.19479 | 23.0505ms | 40000 | 120 | 2.63821e+08 | 124100 | 2(Loss) |
| strtoll/strtoull | 217.728 | 0.3847 | 31.5817ms | 40000 | 120 | 5.45151e+07 | 175204 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| strtoll/strtoull STATISTICAL TIE | 68.4905 | 2.2949 | 2135.11ms | 400000 | 240 | 3.92101e+12 | 5.56967e+06 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 65.1037 | 1.96545 | 4271.44ms | 400000 | 480 | 6.36607e+12 | 5.85941e+06 | 1(Tie) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 719.488 | 0.541875 | 0.231333ms | 800 | 120 | 3961.97 | 1060.39 | 1(Win) |
| std::from_chars | 335.358 | 0.251194 | 0.443417ms | 800 | 120 | 3918.89 | 2275 | 2(Loss) |
| strtoll/strtoull | 265.147 | 0.259009 | 0.545208ms | 800 | 120 | 6665.24 | 2877.42 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 574.831 | 2.43359 | 5.58212ms | 8000 | 240 | 2.50383e+07 | 13272.4 | 1(Win) |
| std::from_chars | 340.118 | 0.151898 | 4.56875ms | 8000 | 120 | 139318 | 22431.6 | 2(Loss) |
| strtoll/strtoull | 247.674 | 0.864996 | 5.59071ms | 8000 | 120 | 8.51978e+06 | 30804.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 760.442 | 0.282131 | 18.1067ms | 80000 | 120 | 9.61456e+06 | 100328 | 1(Win) |
| std::from_chars | 320.149 | 0.58155 | 42.2914ms | 80000 | 120 | 2.30479e+08 | 238308 | 2(Loss) |
| strtoll/strtoull | 258.693 | 0.349742 | 53.5287ms | 80000 | 120 | 1.2767e+08 | 294921 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.496 | 1.44659 | 188.302ms | 800000 | 120 | 2.80793e+10 | 1.05744e+06 | 1(Win) |
| strtoll/strtoull | 268.959 | 0.333251 | 1443.45ms | 800000 | 240 | 2.14467e+10 | 2.83664e+06 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1099.72 | 0.787643 | 0.157417ms | 800 | 120 | 3583.08 | 693.758 | 1(Win) |
| strtoll/strtoull | 311.195 | 0.131791 | 0.454375ms | 800 | 120 | 1252.75 | 2451.64 | 2(Loss) |
| std::from_chars | 287.231 | 2.46146 | 0.506083ms | 800 | 120 | 512961 | 2656.18 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 986.42 | 1.19762 | 1.38154ms | 8000 | 120 | 1.02961e+06 | 7734.43 | 1(Win) |
| std::from_chars | 338.755 | 0.537916 | 4.105ms | 8000 | 120 | 1.76124e+06 | 22521.9 | 2(Loss) |
| strtoll/strtoull | 283.316 | 1.6971 | 4.81275ms | 8000 | 120 | 2.50629e+07 | 26928.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 989.974 | 0.748471 | 13.8473ms | 80000 | 120 | 3.99267e+07 | 77066.6 | 1(Win) |
| std::from_chars | 283.812 | 1.61512 | 47.1875ms | 80000 | 120 | 2.26209e+09 | 268819 | 2(Loss) |
| strtoll/strtoull | 269.857 | 0.360623 | 50.9785ms | 80000 | 120 | 1.24738e+08 | 282720 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 783.372 | 1.34893 | 180.38ms | 800000 | 120 | 2.07112e+10 | 973917 | 1(Win) |
| strtoll/strtoull | 136.55 | 1.38753 | 2431.94ms | 800000 | 240 | 1.44244e+12 | 5.58727e+06 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1092.63 | 0.847002 | 0.159292ms | 800 | 120 | 4197.42 | 698.258 | 1(Win) |
| strtoll/strtoull | 317.155 | 0.171336 | 0.45925ms | 800 | 120 | 2038.53 | 2405.57 | 2(Loss) |
| std::from_chars | 291.377 | 1.09352 | 0.499041ms | 800 | 120 | 98378.5 | 2618.39 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1135.65 | 0.734937 | 1.24146ms | 8000 | 120 | 292533 | 6718.1 | 1(Win) |
| std::from_chars | 321.256 | 0.634264 | 4.30779ms | 8000 | 120 | 2.72271e+06 | 23748.7 | 2(Loss) |
| strtoll/strtoull | 295.729 | 0.624346 | 4.66117ms | 8000 | 120 | 3.11332e+06 | 25798.6 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1110.54 | 0.585197 | 12.3487ms | 80000 | 120 | 1.93954e+07 | 68700 | 1(Win) |
| std::from_chars | 326.869 | 0.727508 | 41.6022ms | 80000 | 120 | 3.4601e+08 | 233408 | 2(Loss) |
| strtoll/strtoull | 294.765 | 0.308703 | 46.8834ms | 80000 | 120 | 7.66108e+07 | 258830 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 774.461 | 1.54765 | 181.478ms | 800000 | 120 | 2.78937e+10 | 985123 | 1(Win) |
| strtoll/strtoull | 93.9388 | 2.0485 | 1348.2ms | 800000 | 120 | 3.32158e+12 | 8.12166e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 598.873 | 1.05502 | 0.244042ms | 800 | 120 | 21677.7 | 1273.96 | 1(Win) |
| std::from_chars | 325.187 | 0.244943 | 0.441625ms | 800 | 120 | 3963.03 | 2346.16 | 2(Loss) |
| strtoll/strtoull | 272.407 | 0.773787 | 3.31246ms | 800 | 120 | 56359.6 | 2800.73 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 624.826 | 2.00917 | 2.26554ms | 8000 | 120 | 7.22234e+06 | 12210.4 | 1(Win) |
| std::from_chars | 297.813 | 1.20318 | 4.72104ms | 8000 | 120 | 1.14007e+07 | 25618.1 | 2(Loss) |
| strtoll/strtoull | 236.247 | 1.00393 | 5.72742ms | 8000 | 120 | 1.26134e+07 | 32294.1 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 656.729 | 0.856384 | 20.8821ms | 80000 | 120 | 1.18775e+08 | 116173 | 1(Win) |
| std::from_chars | 273.845 | 0.798347 | 49.3895ms | 80000 | 120 | 5.93659e+08 | 278603 | 2(Loss) |
| strtoll/strtoull | 239.444 | 0.666815 | 57.5909ms | 80000 | 120 | 5.41709e+08 | 318630 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 162.274 | 2.35665 | 825.409ms | 800000 | 120 | 1.47317e+12 | 4.70155e+06 | 1(Win) |
| strtoll/strtoull | 75.3133 | 1.28993 | 4581.42ms | 800000 | 240 | 4.09809e+12 | 1.01302e+07 | 2(Loss) |
