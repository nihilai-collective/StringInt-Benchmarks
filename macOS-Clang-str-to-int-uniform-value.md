# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the Clang 23.1.0 compiler).  

Latest Results: (Sep 25, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 10.000000% AND mean shift < 5.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [49d7727](https://github.com/nihilai-collective/benchmarksuite/commit/49d7727).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 144.053 | 0.857684 | 11.856ms | 10000 | 30 | 9.67228e+06 | 66202.8 | 1(Win) |
| vn::from_chars | 116.773 | 0.912188 | 14.8181ms | 10000 | 30 | 1.66498e+07 | 81669.4 | 2(Loss) |
| strtoll/strtoull | 69.0519 | 0.448808 | 24.3173ms | 10000 | 30 | 1.15263e+07 | 138110 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 126.14 | 1.33175 | 136.142ms | 100000 | 30 | 3.04134e+09 | 756046 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 125.53 | 0.14472 | 138.039ms | 100000 | 30 | 3.62647e+07 | 759721 | 1(Tie) |
| strtoll/strtoull | 68.9176 | 0.26817 | 250.753ms | 100000 | 30 | 4.13125e+08 | 1.38379e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 196.769 | 1.9532 | 0.094458ms | 100 | 30 | 2688.44 | 484.667 | 1(Win) |
| std::from_chars | 137.595 | 1.01827 | 0.139583ms | 100 | 30 | 1494.3 | 693.1 | 2(Loss) |
| strtoll/strtoull | 96.5648 | 0.859492 | 0.741625ms | 100 | 30 | 2161.56 | 987.6 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 213.969 | 0.665427 | 0.810208ms | 1000 | 30 | 26388.8 | 4457.07 | 1(Win) |
| std::from_chars | 133.018 | 3.70029 | 1.2625ms | 1000 | 30 | 2.1114e+06 | 7169.5 | 2(Loss) |
| strtoll/strtoull | 98.2619 | 0.89219 | 1.76829ms | 1000 | 30 | 224940 | 9705.43 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 203.493 | 1.52537 | 19.797ms | 10000 | 30 | 1.53311e+07 | 46865.3 | 1(Win) |
| std::from_chars | 139.065 | 0.723509 | 12.3698ms | 10000 | 30 | 7.38544e+06 | 68577.8 | 2(Loss) |
| strtoll/strtoull | 101.928 | 0.66007 | 39.5525ms | 10000 | 30 | 1.14424e+07 | 93564 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 216.593 | 0.343371 | 79.397ms | 100000 | 30 | 6.85741e+07 | 440307 | 1(Win) |
| std::from_chars | 140.916 | 0.474933 | 121.405ms | 100000 | 30 | 3.0993e+08 | 676767 | 2(Loss) |
| strtoll/strtoull | 99.2043 | 0.423361 | 173.775ms | 100000 | 30 | 4.96915e+08 | 961324 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 220.809 | 2.3345 | 0.089083ms | 100 | 30 | 3049.82 | 431.9 | 1(Win) |
| std::from_chars | 141.867 | 2.19959 | 0.134333ms | 100 | 30 | 6559.08 | 672.233 | 2(Loss) |
| strtoll/strtoull | 100.687 | 1.63089 | 0.183541ms | 100 | 30 | 7158.56 | 947.167 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 210.835 | 2.01696 | 8.19771ms | 10000 | 30 | 2.49709e+07 | 45233.3 | 1(Win) |
| std::from_chars | 131.423 | 1.32488 | 12.931ms | 10000 | 30 | 2.77289e+07 | 72565.4 | 2(Loss) |
| strtoll/strtoull | 89.9681 | 0.804144 | 18.9488ms | 10000 | 30 | 2.17978e+07 | 106001 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 233.873 | 0.346138 | 74.9576ms | 100000 | 30 | 5.97669e+07 | 407775 | 1(Win) |
| std::from_chars | 133.529 | 0.910568 | 313.158ms | 100000 | 30 | 1.26881e+09 | 714210 | 2(Loss) |
| strtoll/strtoull | 98.0708 | 0.209081 | 873.474ms | 100000 | 48 | 1.98422e+08 | 972435 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 144.248 | 0.991231 | 0.131792ms | 100 | 30 | 1288.4 | 661.133 | 1(Win) |
| vn::from_chars | 126.22 | 3.45486 | 0.158125ms | 100 | 30 | 20442.3 | 755.567 | 2(Loss) |
| strtoll/strtoull | 88.1454 | 0.625741 | 0.20625ms | 100 | 30 | 1375.03 | 1081.93 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 170.556 | 0.397209 | 1.02342ms | 1000 | 30 | 14798.8 | 5591.57 | 1(Win) |
| std::from_chars | 115.343 | 1.78886 | 6.99362ms | 1000 | 48 | 1.05005e+06 | 8268.17 | 2(Loss) |
| strtoll/strtoull | 88.4851 | 0.294251 | 4.59529ms | 1000 | 30 | 30172.9 | 10777.8 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 165.457 | 1.34864 | 10.3105ms | 10000 | 30 | 1.81276e+07 | 57638.8 | 1(Win) |
| std::from_chars | 132.624 | 0.920142 | 12.9357ms | 10000 | 30 | 1.31337e+07 | 71908.3 | 2(Loss) |
| strtoll/strtoull | 89.0763 | 0.633459 | 19.3363ms | 10000 | 30 | 1.37986e+07 | 107063 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 169.41 | 0.415002 | 101.539ms | 100000 | 30 | 1.63736e+08 | 562939 | 1(Win) |
| std::from_chars | 137.059 | 0.945933 | 121.83ms | 100000 | 30 | 1.29966e+09 | 695815 | 2(Loss) |
| strtoll/strtoull | 89.108 | 0.487829 | 192.281ms | 100000 | 30 | 8.17755e+08 | 1.07025e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 202.536 | 0.962373 | 1.36554ms | 200 | 30 | 2464.13 | 941.733 | 1(Win) |
| vn::from_chars | 182.854 | 0.967427 | 0.194417ms | 200 | 30 | 3054.99 | 1043.1 | 2(Loss) |
| strtoll/strtoull | 115.115 | 0.698874 | 0.304875ms | 200 | 30 | 4022.64 | 1656.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 205.429 | 0.226469 | 9.07783ms | 2000 | 48 | 21222.3 | 9284.69 | 1(Win) |
| vn::from_chars | 201.423 | 0.26507 | 1.71879ms | 2000 | 30 | 18901 | 9469.37 | 2(Loss) |
| strtoll/strtoull | 122.681 | 0.417525 | 2.82262ms | 2000 | 30 | 126412 | 15547.2 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 211.865 | 0.613029 | 16.291ms | 20000 | 30 | 9.13741e+06 | 90026.5 | 1(Win) |
| vn::from_chars | 194.542 | 0.544862 | 17.816ms | 20000 | 30 | 8.56108e+06 | 98043.1 | 2(Loss) |
| strtoll/strtoull | 121.128 | 0.340685 | 28.458ms | 20000 | 30 | 8.63369e+06 | 157465 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 197.486 | 0.346809 | 176.42ms | 200000 | 30 | 3.3658e+08 | 965812 | 1(Win) |
| strtoll/strtoull | 120.284 | 0.157499 | 285.406ms | 200000 | 30 | 1.87122e+08 | 1.58571e+06 | 2(Loss) |
| std::from_chars | 69.2754 | 1.26431 | 491.202ms | 200000 | 30 | 3.63523e+10 | 2.75328e+06 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 293.626 | 4.05465 | 1.16583ms | 2000 | 30 | 2.08113e+06 | 6495.83 | 1(Win) |
| std::from_chars | 201.573 | 0.707992 | 1.7405ms | 2000 | 30 | 134640 | 9462.33 | 2(Loss) |
| strtoll/strtoull | 156.607 | 0.333908 | 2.22117ms | 2000 | 30 | 49614.9 | 12179.2 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 335.08 | 0.250806 | 10.3839ms | 20000 | 30 | 611447 | 56922.2 | 1(Win) |
| std::from_chars | 197.462 | 1.35185 | 17.3542ms | 20000 | 30 | 5.11531e+07 | 96593.1 | 2(Loss) |
| strtoll/strtoull | 154.191 | 1.01113 | 21.9854ms | 20000 | 30 | 4.69322e+07 | 123700 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.503 | 0.363718 | 105.024ms | 200000 | 30 | 1.34611e+08 | 582390 | 1(Win) |
| strtoll/strtoull | 156.866 | 0.242484 | 219.869ms | 200000 | 30 | 2.6079e+08 | 1.21591e+06 | 2(Loss) |
| std::from_chars | 126.881 | 4.57418 | 554.688ms | 200000 | 30 | 1.41846e+11 | 1.50326e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 314.969 | 1.07783 | 0.120834ms | 200 | 30 | 1278.05 | 605.567 | 1(Win) |
| std::from_chars | 195.079 | 1.16987 | 0.190083ms | 200 | 30 | 3924.96 | 977.733 | 2(Loss) |
| strtoll/strtoull | 152.077 | 0.48848 | 0.239125ms | 200 | 30 | 1126.03 | 1254.2 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 319.14 | 0.50651 | 1.10483ms | 2000 | 30 | 27491.3 | 5976.53 | 1(Win) |
| std::from_chars | 201.687 | 0.846055 | 1.7695ms | 2000 | 30 | 192053 | 9456.97 | 2(Loss) |
| strtoll/strtoull | 150.415 | 1.5879 | 2.31883ms | 2000 | 30 | 1.21632e+06 | 12680.6 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 322.733 | 0.480389 | 10.6728ms | 20000 | 30 | 2.41814e+06 | 59100 | 1(Win) |
| std::from_chars | 211.993 | 0.645427 | 16.2328ms | 20000 | 30 | 1.01165e+07 | 89972.1 | 2(Loss) |
| strtoll/strtoull | 156.436 | 0.307284 | 22.0035ms | 20000 | 30 | 4.211e+06 | 121925 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 340.142 | 0.228893 | 104.241ms | 200000 | 30 | 4.94224e+07 | 560750 | 1(Win) |
| std::from_chars | 201.272 | 0.690634 | 169.715ms | 200000 | 30 | 1.28502e+09 | 947647 | 2(Loss) |
| strtoll/strtoull | 156.403 | 0.277321 | 220.098ms | 200000 | 30 | 3.43127e+08 | 1.21951e+06 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 380.21 | 2.07671 | 0.895958ms | 2000 | 30 | 325601 | 5016.57 | 1(Win) |
| std::from_chars | 303.094 | 0.354147 | 2.93829ms | 2000 | 30 | 14900.3 | 6292.93 | 2(Loss) |
| strtoll/strtoull | 168.317 | 0.285666 | 2.06558ms | 2000 | 30 | 31437.1 | 11331.9 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 317.143 | 1.09714 | 0.255625ms | 400 | 30 | 5224.63 | 1202.83 | 1(Win) |
| std::from_chars | 232.561 | 0.705122 | 0.304042ms | 400 | 30 | 4013.25 | 1640.3 | 2(Loss) |
| strtoll/strtoull | 171.673 | 0.444064 | 0.432833ms | 400 | 30 | 2920.96 | 2222.07 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 335.195 | 1.01922 | 2.04183ms | 4000 | 30 | 403627 | 11380.5 | 1(Win) |
| std::from_chars | 242.309 | 0.7829 | 2.84358ms | 4000 | 30 | 455739 | 15743.1 | 2(Loss) |
| strtoll/strtoull | 175.221 | 0.182155 | 3.99292ms | 4000 | 30 | 47179 | 21770.8 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 314.925 | 1.25286 | 21.1692ms | 40000 | 30 | 6.90924e+07 | 121130 | 1(Win) |
| std::from_chars | 237.222 | 0.492237 | 28.7964ms | 40000 | 30 | 1.87966e+07 | 160807 | 2(Loss) |
| strtoll/strtoull | 166.006 | 1.01291 | 41.474ms | 40000 | 30 | 1.6253e+08 | 229793 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 339.857 | 0.346308 | 202.891ms | 400000 | 30 | 4.5329e+08 | 1.12244e+06 | 1(Win) |
| strtoll/strtoull | 174.674 | 0.114018 | 402.292ms | 400000 | 30 | 1.86007e+08 | 2.18389e+06 | 2(Loss) |
| std::from_chars | 164.086 | 1.09858 | 404.009ms | 400000 | 30 | 1.95686e+10 | 2.32481e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 427.785 | 1.67264 | 1.17892ms | 400 | 30 | 6674.13 | 891.733 | 1(Win) |
| std::from_chars | 228.12 | 1.77422 | 0.315417ms | 400 | 30 | 26407.8 | 1672.23 | 2(Loss) |
| strtoll/strtoull | 198.748 | 1.15935 | 0.379ms | 400 | 30 | 14854.7 | 1919.37 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 439.887 | 1.62582 | 7.64562ms | 4000 | 48 | 954166 | 8672 | 1(Win) |
| std::from_chars | 243.213 | 1.09476 | 2.83592ms | 4000 | 30 | 884508 | 15684.6 | 2(Loss) |
| strtoll/strtoull | 209.776 | 0.212973 | 3.32125ms | 4000 | 30 | 44996.5 | 18184.6 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.174 | 1.57427 | 115.747ms | 40000 | 30 | 6.92825e+07 | 96532 | 1(Win) |
| std::from_chars | 240.185 | 0.446209 | 28.9862ms | 40000 | 30 | 1.5067e+07 | 158824 | 2(Loss) |
| strtoll/strtoull | 209.482 | 0.412083 | 32.9656ms | 40000 | 30 | 1.68934e+07 | 182101 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 475.846 | 0.577858 | 14.4232ms | 40000 | 30 | 6.438e+06 | 80166.7 | 1(Win) |
| std::from_chars | 228.716 | 0.924794 | 29.2185ms | 40000 | 30 | 7.13737e+07 | 166787 | 2(Loss) |
| strtoll/strtoull | 214.178 | 0.154073 | 32.7688ms | 40000 | 30 | 2.25915e+06 | 178108 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 464.669 | 0.239294 | 150.655ms | 400000 | 30 | 1.15775e+08 | 820949 | 1(Win) |
| strtoll/strtoull | 195.951 | 0.474013 | 347.495ms | 400000 | 30 | 2.55463e+09 | 1.94676e+06 | 2(Loss) |
| std::from_chars | 172.181 | 2.35553 | 883.14ms | 400000 | 30 | 8.1705e+10 | 2.21552e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 624.064 | 1.40116 | 0.121167ms | 400 | 30 | 2200.69 | 611.267 | 1(Win) |
| std::from_chars | 348.12 | 0.635067 | 0.22ms | 400 | 30 | 1452.86 | 1095.8 | 2(Loss) |
| strtoll/strtoull | 219.551 | 0.630597 | 0.326167ms | 400 | 30 | 3601.43 | 1737.5 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 611.038 | 1.85621 | 5.92917ms | 4000 | 48 | 644582 | 6242.98 | 1(Win) |
| std::from_chars | 331.753 | 1.16262 | 2.07442ms | 4000 | 30 | 536149 | 11498.6 | 2(Loss) |
| strtoll/strtoull | 221.25 | 0.914099 | 3.18358ms | 4000 | 30 | 745179 | 17241.6 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 668.721 | 0.216772 | 10.3161ms | 40000 | 30 | 458729 | 57044.6 | 1(Win) |
| std::from_chars | 341.814 | 0.873457 | 19.924ms | 40000 | 30 | 2.85066e+07 | 111602 | 2(Loss) |
| strtoll/strtoull | 218.754 | 0.639035 | 31.3357ms | 40000 | 30 | 3.72546e+07 | 174383 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 727.51 | 0.952379 | 0.222917ms | 800 | 30 | 2992.56 | 1048.7 | 1(Win) |
| std::from_chars | 328.679 | 0.396083 | 2.16975ms | 800 | 48 | 4057.41 | 2321.23 | 2(Loss) |
| strtoll/strtoull | 257.304 | 0.398629 | 0.545708ms | 800 | 30 | 4191.29 | 2965.13 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 756.002 | 0.275245 | 1.82658ms | 8000 | 30 | 23146.9 | 10091.8 | 1(Win) |
| std::from_chars | 331.692 | 0.184336 | 4.15038ms | 8000 | 30 | 53932.4 | 23001.4 | 2(Loss) |
| strtoll/strtoull | 257.846 | 1.15534 | 5.31721ms | 8000 | 30 | 3.50591e+06 | 29588.9 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 743.908 | 1.54963 | 18.2954ms | 80000 | 30 | 7.57741e+07 | 102558 | 1(Win) |
| std::from_chars | 326 | 1.0615 | 41.6654ms | 80000 | 30 | 1.85142e+08 | 234031 | 2(Loss) |
| strtoll/strtoull | 240.461 | 1.17333 | 56.2976ms | 80000 | 30 | 4.15772e+08 | 317282 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 934.116 | 1.98478 | 0.759667ms | 800 | 48 | 12613.8 | 816.75 | 1(Win) |
| std::from_chars | 332.929 | 0.713927 | 0.426083ms | 800 | 30 | 8029.83 | 2291.6 | 2(Loss) |
| strtoll/strtoull | 262.671 | 5.59078 | 2.88725ms | 800 | 48 | 1.26573e+06 | 2904.54 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1125.65 | 0.327049 | 6.28767ms | 8000 | 48 | 23585.4 | 6777.79 | 1(Win) |
| std::from_chars | 323.374 | 0.971473 | 4.39508ms | 8000 | 30 | 1.57598e+06 | 23593.1 | 2(Loss) |
| strtoll/strtoull | 293.61 | 1.30259 | 4.68663ms | 8000 | 30 | 3.43693e+06 | 25984.8 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1135.87 | 0.0950244 | 12.2635ms | 80000 | 30 | 122213 | 67167.9 | 1(Win) |
| std::from_chars | 330.676 | 0.449861 | 41.4881ms | 80000 | 30 | 3.23185e+07 | 230721 | 2(Loss) |
| strtoll/strtoull | 298.027 | 0.393559 | 46.4117ms | 80000 | 30 | 3.04517e+07 | 255997 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1159.35 | 0.273394 | 2.80337ms | 8000 | 30 | 9710.62 | 6580.73 | 1(Win) |
| std::from_chars | 333.524 | 0.24265 | 9.72792ms | 8000 | 30 | 92429.3 | 22875.1 | 2(Loss) |
| strtoll/strtoull | 262.315 | 2.40047 | 4.99683ms | 8000 | 30 | 1.46234e+07 | 29084.8 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1116.36 | 1.27628 | 12.3624ms | 80000 | 30 | 2.28237e+07 | 68341.8 | 1(Win) |
| std::from_chars | 323.146 | 0.809481 | 114.299ms | 80000 | 30 | 1.09576e+08 | 236097 | 2(Loss) |
| strtoll/strtoull | 296.727 | 0.587492 | 110.661ms | 80000 | 30 | 6.84525e+07 | 257118 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 729.504 | 0.999592 | 0.211083ms | 800 | 30 | 3278.63 | 1045.83 | 1(Win) |
| std::from_chars | 282.267 | 1.84949 | 0.491541ms | 800 | 30 | 74969.6 | 2702.9 | 2(Loss) |
| strtoll/strtoull | 249.566 | 4.13235 | 1.28279ms | 800 | 30 | 478769 | 3057.07 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 770.314 | 0.252929 | 1.84425ms | 8000 | 30 | 18826.3 | 9904.27 | 1(Win) |
| std::from_chars | 330.756 | 1.78186 | 9.99683ms | 8000 | 30 | 5.06795e+06 | 23066.5 | 2(Loss) |
| strtoll/strtoull | 257.46 | 1.45028 | 5.23212ms | 8000 | 30 | 5.54093e+06 | 29633.3 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 767.416 | 0.311249 | 18.0608ms | 80000 | 30 | 2.87247e+06 | 99416.6 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 262.659 | 0.48971 | 52.569ms | 80000 | 30 | 6.0701e+07 | 290468 | 2(Tie) |
| std::from_chars STATISTICAL TIE | 258.4 | 1.73718 | 55.8074ms | 80000 | 30 | 7.89238e+08 | 295256 | 2(Tie) |
