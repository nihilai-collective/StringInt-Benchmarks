# str-to-int-uniform  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 99.3575 | 1.13677 | 0.17797ms | 100 | 120 | 14286.4 | 959.842 | 29.7463 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 96.6603 | 1.03791 | 0.201392ms | 100 | 120 | 12583.6 | 986.625 | 30.6773 | 1(Tie) |
| strtoll/strtoull | 65.3146 | 0.524463 | 0.261733ms | 100 | 120 | 7037.05 | 1460.12 | 45.8041 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 122.676 | 1.155 | 1.40588ms | 1000 | 120 | 967445 | 7773.94 | 24.6973 | 1(Win) |
| std::from_chars | 110.748 | 2.2626 | 1.54108ms | 1000 | 120 | 4.55537e+06 | 8611.18 | 27.2912 | 2(Loss) |
| strtoll/strtoull | 78.8308 | 2.2534 | 2.17278ms | 1000 | 120 | 8.91794e+06 | 12097.7 | 38.4867 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 132.185 | 0.490244 | 13.0301ms | 10000 | 120 | 1.50121e+07 | 72146.9 | 22.9788 | 1(Win) |
| std::from_chars | 118.767 | 0.528638 | 14.5714ms | 10000 | 120 | 2.16225e+07 | 80297.9 | 25.5775 | 2(Loss) |
| strtoll/strtoull | 81.7141 | 0.447622 | 21.0076ms | 10000 | 120 | 3.275e+07 | 116709 | 37.1787 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 128.476 | 0.624099 | 132.451ms | 100000 | 120 | 2.5754e+09 | 742298 | 23.6404 | 1(Win) |
| std::from_chars | 115.609 | 0.818704 | 147.444ms | 100000 | 120 | 5.47334e+09 | 824914 | 26.2715 | 2(Loss) |
| strtoll/strtoull | 81.3399 | 0.216499 | 211.212ms | 100000 | 120 | 7.73187e+08 | 1.17246e+06 | 37.3529 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 145.412 | 1.27351 | 0.129905ms | 100 | 120 | 8371.11 | 655.842 | 20.1724 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 144.91 | 1.84768 | 0.13459ms | 100 | 120 | 17743.5 | 658.117 | 20.2489 | 1(Tie) |
| strtoll/strtoull | 85.0565 | 0.518334 | 0.210025ms | 100 | 120 | 4053.08 | 1121.22 | 35.0153 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 177.758 | 1.9192 | 2.33232ms | 1000 | 240 | 2.54444e+06 | 5365 | 16.997 | 1(Win) |
| std::from_chars | 166.959 | 0.484486 | 1.08126ms | 1000 | 120 | 91902.4 | 5712.04 | 18.129 | 2(Loss) |
| strtoll/strtoull | 111.067 | 0.326415 | 1.66244ms | 1000 | 120 | 94264.6 | 8586.44 | 27.3024 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 180.927 | 0.792931 | 9.66259ms | 10000 | 120 | 2.09626e+07 | 52710.5 | 16.7856 | 1(Win) |
| std::from_chars | 153.701 | 0.458805 | 26.6083ms | 10000 | 240 | 1.94497e+07 | 62047.2 | 19.7523 | 2(Loss) |
| strtoll/strtoull | 106.34 | 0.440386 | 16.3429ms | 10000 | 120 | 1.8718e+07 | 89682 | 28.5682 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 170.811 | 0.621023 | 97.5356ms | 100000 | 120 | 1.44267e+09 | 558322 | 17.7729 | 1(Win) |
| std::from_chars | 155.529 | 0.838809 | 107.787ms | 100000 | 120 | 3.17459e+09 | 613183 | 19.525 | 2(Loss) |
| strtoll/strtoull | 103.123 | 0.349286 | 164.994ms | 100000 | 120 | 1.25208e+09 | 924792 | 29.459 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 147.939 | 1.49602 | 0.132766ms | 100 | 120 | 11160.7 | 644.642 | 19.7812 | 1(Win) |
| std::from_chars | 128.773 | 1.27092 | 0.144179ms | 100 | 120 | 10630.8 | 740.583 | 22.8415 | 2(Loss) |
| strtoll/strtoull | 85.8206 | 0.660421 | 0.206942ms | 100 | 120 | 6463.09 | 1111.24 | 34.6791 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 189.557 | 1.98999 | 0.983447ms | 1000 | 120 | 1.20282e+06 | 5031.06 | 15.9487 | 1(Win) |
| std::from_chars | 164.959 | 2.18851 | 1.12848ms | 1000 | 120 | 1.92101e+06 | 5781.29 | 18.3476 | 2(Loss) |
| strtoll/strtoull | 113.048 | 0.318692 | 1.64049ms | 1000 | 120 | 86735.7 | 8436 | 26.8253 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 195.507 | 0.546654 | 8.88389ms | 10000 | 120 | 8.53257e+06 | 48779.4 | 15.5318 | 1(Win) |
| std::from_chars | 170.916 | 0.479615 | 10.2679ms | 10000 | 120 | 8.59411e+06 | 55797.8 | 17.7691 | 2(Loss) |
| strtoll/strtoull | 106.689 | 0.741372 | 16.0533ms | 10000 | 120 | 5.27006e+07 | 89388.4 | 28.4643 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 183.181 | 0.593132 | 92.792ms | 100000 | 120 | 1.14425e+09 | 520618 | 16.5774 | 1(Win) |
| std::from_chars | 160.748 | 0.553508 | 106.225ms | 100000 | 120 | 1.29401e+09 | 593272 | 18.8918 | 2(Loss) |
| strtoll/strtoull | 105.658 | 0.359662 | 162.22ms | 100000 | 120 | 1.26464e+09 | 902605 | 28.7532 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 137.625 | 1.77815 | 0.143233ms | 100 | 120 | 18218.8 | 692.95 | 21.3324 | 1(Win) |
| std::from_chars | 115.752 | 0.90133 | 0.174614ms | 100 | 120 | 6617.43 | 823.892 | 25.4247 | 2(Loss) |
| strtoll/strtoull | 75.705 | 0.746906 | 0.231993ms | 100 | 120 | 10623.4 | 1259.72 | 39.3795 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 156.144 | 0.836332 | 2.70069ms | 1000 | 240 | 626209 | 6107.66 | 19.3776 | 1(Win) |
| std::from_chars | 145.934 | 1.4995 | 1.2512ms | 1000 | 120 | 1.15229e+06 | 6534.98 | 20.743 | 2(Loss) |
| strtoll/strtoull | 97.1585 | 0.478922 | 4.22302ms | 1000 | 240 | 530370 | 9815.66 | 31.2057 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 147.653 | 2.09904 | 11.4962ms | 10000 | 120 | 2.20566e+08 | 64589 | 20.5248 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 144.538 | 0.525606 | 11.9035ms | 10000 | 120 | 1.44324e+07 | 65980.9 | 21.0127 | 1(Tie) |
| strtoll/strtoull | 98.1179 | 0.522467 | 17.5063ms | 10000 | 120 | 3.09459e+07 | 97196.7 | 30.9593 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 153.765 | 0.374712 | 111.044ms | 100000 | 120 | 6.48126e+08 | 620214 | 19.7513 | 1(Win) |
| std::from_chars | 139.799 | 0.428575 | 122.008ms | 100000 | 120 | 1.02572e+09 | 682177 | 21.7229 | 2(Loss) |
| strtoll/strtoull | 96.1115 | 0.27043 | 180.01ms | 100000 | 120 | 8.64052e+08 | 992258 | 31.6088 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 186.13 | 0.663869 | 1.09782ms | 200 | 480 | 22214.4 | 1024.74 | 15.9854 | 1(Win) |
| std::from_chars | 149.042 | 1.25742 | 0.233069ms | 200 | 120 | 31073.1 | 1279.74 | 20.0036 | 2(Loss) |
| strtoll/strtoull | 107.057 | 1.22008 | 0.321199ms | 200 | 120 | 56701.2 | 1781.62 | 28.0435 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 200.87 | 1.26051 | 1.71256ms | 2000 | 120 | 1.7191e+06 | 9495.42 | 15.0824 | 1(Win) |
| std::from_chars | 177.361 | 2.43668 | 1.92544ms | 2000 | 120 | 8.23995e+06 | 10754.1 | 17.0917 | 2(Loss) |
| strtoll/strtoull | 122.206 | 2.02892 | 2.77184ms | 2000 | 120 | 1.20333e+07 | 15607.6 | 24.8344 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 195.919 | 1.15531 | 17.3866ms | 20000 | 120 | 1.51805e+08 | 97353.7 | 15.4847 | 1(Win) |
| std::from_chars | 185.284 | 0.515682 | 18.5171ms | 20000 | 120 | 3.38167e+07 | 102942 | 16.3944 | 2(Loss) |
| strtoll/strtoull | 132.814 | 0.40635 | 26.0256ms | 20000 | 120 | 4.08653e+07 | 143611 | 22.8712 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 203.442 | 0.315713 | 171.182ms | 200000 | 120 | 1.05135e+09 | 937540 | 14.9266 | 1(Win) |
| std::from_chars | 184.813 | 0.274085 | 186.989ms | 200000 | 120 | 9.6017e+08 | 1.03204e+06 | 16.4312 | 2(Loss) |
| strtoll/strtoull | 130.82 | 0.19255 | 263.629ms | 200000 | 120 | 9.45754e+08 | 1.45799e+06 | 23.2218 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 197.038 | 0.944395 | 0.189029ms | 200 | 120 | 10028.7 | 968.008 | 15.0471 | 1(Win) |
| vn::from_chars | 191.49 | 1.01804 | 0.185355ms | 200 | 120 | 12339.1 | 996.058 | 15.401 | 2(Loss) |
| strtoll/strtoull | 136.532 | 1.2086 | 0.283667ms | 200 | 120 | 34209 | 1397 | 21.8898 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 240.322 | 0.393014 | 1.48182ms | 2000 | 120 | 116754 | 7936.62 | 12.6092 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 239.566 | 1.20848 | 1.48262ms | 2000 | 120 | 1.11088e+06 | 7961.68 | 12.6426 | 1(Tie) |
| strtoll/strtoull | 157.816 | 0.508941 | 5.12925ms | 2000 | 240 | 908035 | 12085.9 | 19.2219 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 233.72 | 0.727726 | 14.7213ms | 20000 | 120 | 4.2324e+07 | 81608.4 | 12.9954 | 1(Win) |
| std::from_chars | 225.604 | 0.542426 | 15.0917ms | 20000 | 120 | 2.52364e+07 | 84543.9 | 13.4585 | 2(Loss) |
| strtoll/strtoull | 153.812 | 0.608115 | 22.4488ms | 20000 | 120 | 6.82386e+07 | 124005 | 19.7449 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.988 | 0.306966 | 149.422ms | 200000 | 120 | 7.70979e+08 | 825733 | 13.1495 | 1(Win) |
| std::from_chars | 226.099 | 0.28471 | 152.165ms | 200000 | 120 | 6.9223e+08 | 843591 | 13.4358 | 2(Loss) |
| strtoll/strtoull | 152.586 | 0.50252 | 224.342ms | 200000 | 120 | 4.73497e+09 | 1.25001e+06 | 19.9091 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 237.162 | 1.11047 | 0.410578ms | 200 | 240 | 19142.3 | 804.237 | 12.4691 | 1(Win) |
| std::from_chars | 201.229 | 1.73971 | 0.187533ms | 200 | 120 | 32629.8 | 947.85 | 14.7455 | 2(Loss) |
| strtoll/strtoull | 131.569 | 1.19128 | 0.278081ms | 200 | 120 | 35789.9 | 1449.69 | 22.7573 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 250.174 | 0.49922 | 1.46253ms | 2000 | 120 | 173836 | 7624.08 | 12.1104 | 1(Win) |
| std::from_chars | 245.651 | 0.626344 | 3.73128ms | 2000 | 240 | 567622 | 7764.45 | 12.3344 | 2(Loss) |
| strtoll/strtoull | 154.889 | 2.08271 | 2.2287ms | 2000 | 120 | 7.89332e+06 | 12314.3 | 19.5642 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 254.344 | 1.39714 | 13.5189ms | 20000 | 120 | 1.31728e+08 | 74991 | 11.9293 | 1(Win) |
| std::from_chars | 242.548 | 0.852679 | 14.2708ms | 20000 | 120 | 5.39532e+07 | 78638 | 12.5211 | 2(Loss) |
| strtoll/strtoull | 164.824 | 0.701369 | 20.9525ms | 20000 | 120 | 7.90482e+07 | 115720 | 18.4329 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 253.506 | 0.323928 | 135.88ms | 200000 | 120 | 7.12791e+08 | 752388 | 11.9796 | 1(Win) |
| std::from_chars | 235.991 | 0.25755 | 145.638ms | 200000 | 120 | 5.19964e+08 | 808228 | 12.8721 | 2(Loss) |
| strtoll/strtoull | 161.2 | 0.223895 | 213.144ms | 200000 | 120 | 8.42172e+08 | 1.18322e+06 | 18.8495 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 215.765 | 0.557198 | 0.17636ms | 200 | 120 | 2911.37 | 883.992 | 13.701 | 1(Win) |
| vn::from_chars | 198.553 | 1.30368 | 0.189896ms | 200 | 120 | 18820.5 | 960.625 | 14.8603 | 2(Loss) |
| strtoll/strtoull | 126.351 | 0.593268 | 0.282985ms | 200 | 120 | 9624.72 | 1509.57 | 23.6909 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 258.244 | 0.570139 | 1.35994ms | 2000 | 120 | 212786 | 7385.85 | 11.7312 | 1(Win) |
| vn::from_chars | 243.516 | 1.77782 | 1.45791ms | 2000 | 120 | 2.32682e+06 | 7832.54 | 12.4217 | 2(Loss) |
| strtoll/strtoull | 155.972 | 2.17566 | 5.22184ms | 2000 | 240 | 1.69888e+07 | 12228.8 | 19.4443 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 258.595 | 0.757954 | 13.3981ms | 20000 | 120 | 3.75049e+07 | 73758.2 | 11.7446 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 257.166 | 0.522863 | 13.5153ms | 20000 | 120 | 1.80464e+07 | 74168 | 11.8107 | 1(Tie) |
| strtoll/strtoull | 161.209 | 0.484298 | 21.5017ms | 20000 | 120 | 3.93993e+07 | 118315 | 18.8452 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 255.463 | 0.255191 | 135.401ms | 200000 | 120 | 4.35628e+08 | 746625 | 11.8895 | 1(Win) |
| std::from_chars | 249.656 | 0.27399 | 138.646ms | 200000 | 120 | 5.25806e+08 | 763990 | 12.1676 | 2(Loss) |
| strtoll/strtoull | 157.187 | 0.215377 | 218.737ms | 200000 | 120 | 8.19613e+08 | 1.21343e+06 | 19.3259 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 268.049 | 1.59089 | 0.2764ms | 400 | 120 | 61511 | 1423.13 | 11.1512 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 266.433 | 0.668347 | 0.264088ms | 400 | 120 | 10988.3 | 1431.77 | 11.2072 | 1(Tie) |
| strtoll/strtoull | 222.768 | 0.20363 | 1.67992ms | 400 | 480 | 5836.3 | 1712.41 | 13.495 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 296.446 | 1.73572 | 2.32988ms | 4000 | 120 | 5.98646e+06 | 12868.1 | 10.2262 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 288.126 | 1.82378 | 2.3889ms | 4000 | 120 | 6.99652e+06 | 13239.7 | 10.5243 | 1(Tie) |
| strtoll/strtoull | 216.661 | 1.71667 | 3.23946ms | 4000 | 120 | 1.09626e+07 | 17606.8 | 14.0042 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 300.368 | 0.660565 | 22.7831ms | 40000 | 120 | 8.4455e+07 | 127001 | 10.1109 | 1(Win) |
| std::from_chars | 291.154 | 0.66904 | 23.5014ms | 40000 | 120 | 9.22063e+07 | 131020 | 10.4298 | 2(Loss) |
| strtoll/strtoull | 214.811 | 0.89953 | 32.149ms | 40000 | 120 | 3.06211e+08 | 177584 | 14.1395 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 288.289 | 0.36657 | 239.067ms | 400000 | 120 | 2.82331e+09 | 1.32322e+06 | 10.5358 | 1(Win) |
| std::from_chars | 280.808 | 0.275573 | 244.839ms | 400000 | 120 | 1.68173e+09 | 1.35847e+06 | 10.8154 | 2(Loss) |
| strtoll/strtoull | 212.887 | 0.19388 | 322.254ms | 400000 | 120 | 1.44834e+09 | 1.79189e+06 | 14.2712 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 365.977 | 1.46798 | 0.244398ms | 400 | 120 | 28095.2 | 1042.33 | 8.12977 | 1(Win) |
| vn::from_chars | 304.926 | 2.17096 | 0.257736ms | 400 | 120 | 88515 | 1251.03 | 9.78771 | 2(Loss) |
| strtoll/strtoull | 237.838 | 1.28466 | 0.315504ms | 400 | 120 | 50946.8 | 1603.91 | 12.6066 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 385.159 | 1.00191 | 1.88647ms | 4000 | 120 | 1.18161e+06 | 9904.21 | 7.86852 | 1(Win) |
| vn::from_chars | 338.739 | 1.22745 | 2.06249ms | 4000 | 120 | 2.29287e+06 | 11261.5 | 8.94727 | 2(Loss) |
| strtoll/strtoull | 258.964 | 0.931463 | 2.71568ms | 4000 | 120 | 2.25919e+06 | 14730.6 | 11.7164 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 382.597 | 0.720489 | 17.9892ms | 40000 | 120 | 6.19261e+07 | 99705.5 | 7.9357 | 1(Win) |
| vn::from_chars | 344.855 | 0.621607 | 20.0309ms | 40000 | 120 | 5.6736e+07 | 110617 | 8.80963 | 2(Loss) |
| strtoll/strtoull | 259.186 | 0.422594 | 26.6024ms | 40000 | 120 | 4.64221e+07 | 147180 | 11.7211 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 353.652 | 0.328459 | 195.508ms | 400000 | 120 | 1.5063e+09 | 1.07866e+06 | 8.58615 | 1(Win) |
| vn::from_chars | 326.146 | 0.270657 | 211.54ms | 400000 | 120 | 1.20259e+09 | 1.16963e+06 | 9.31454 | 2(Loss) |
| strtoll/strtoull | 246.095 | 0.256654 | 279.209ms | 400000 | 120 | 1.89929e+09 | 1.55009e+06 | 12.3438 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 305.744 | 1.59045 | 0.242307ms | 400 | 120 | 47252.2 | 1247.67 | 9.71631 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 300.427 | 0.987442 | 0.254642ms | 400 | 120 | 18864.6 | 1269.76 | 9.92371 | 1(Tie) |
| strtoll/strtoull | 254.884 | 1.07168 | 0.298613ms | 400 | 120 | 30870.6 | 1496.64 | 11.7479 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 404.039 | 0.496375 | 4.21258ms | 4000 | 240 | 527114 | 9441.4 | 7.49872 | 1(Win) |
| vn::from_chars | 359.83 | 1.55205 | 1.96797ms | 4000 | 120 | 3.24878e+06 | 10601.4 | 8.42289 | 2(Loss) |
| strtoll/strtoull | 261.456 | 0.66553 | 2.72522ms | 4000 | 120 | 1.13146e+06 | 14590.2 | 11.605 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 384.264 | 0.818488 | 17.9335ms | 40000 | 120 | 7.92258e+07 | 99272.8 | 7.9044 | 1(Win) |
| vn::from_chars | 363.754 | 0.516953 | 18.9272ms | 40000 | 120 | 3.52685e+07 | 104870 | 8.34972 | 2(Loss) |
| strtoll/strtoull | 257.979 | 0.526433 | 26.739ms | 40000 | 120 | 7.2714e+07 | 147868 | 11.7766 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 353.801 | 0.434391 | 188.189ms | 400000 | 120 | 2.63236e+09 | 1.07821e+06 | 8.58377 | 1(Win) |
| vn::from_chars | 340.213 | 0.383989 | 195.81ms | 400000 | 120 | 2.22452e+09 | 1.12127e+06 | 8.92661 | 2(Loss) |
| strtoll/strtoull | 242.661 | 1.27254 | 275.485ms | 400000 | 120 | 4.80229e+10 | 1.57203e+06 | 12.5182 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 376.9 | 1.38481 | 0.206888ms | 400 | 120 | 23573.7 | 1012.12 | 7.8709 | 1(Win) |
| vn::from_chars | 333.688 | 1.79887 | 0.227456ms | 400 | 120 | 50747.9 | 1143.19 | 8.9315 | 2(Loss) |
| strtoll/strtoull | 257.05 | 0.227047 | 0.694278ms | 400 | 240 | 2724.76 | 1484.03 | 11.6777 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 400.995 | 1.03979 | 1.76368ms | 4000 | 120 | 1.17412e+06 | 9513.08 | 7.55759 | 1(Win) |
| vn::from_chars | 379.793 | 1.01187 | 4.39724ms | 4000 | 240 | 2.47904e+06 | 10044.2 | 7.97518 | 2(Loss) |
| strtoll/strtoull | 253.321 | 1.46602 | 2.73606ms | 4000 | 120 | 5.84841e+06 | 15058.8 | 11.9773 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 402.043 | 0.456215 | 17.1688ms | 40000 | 120 | 2.24852e+07 | 94882.9 | 7.55331 | 1(Win) |
| vn::from_chars | 379.361 | 0.894786 | 18.2017ms | 40000 | 120 | 9.71481e+07 | 100556 | 8.00427 | 2(Loss) |
| strtoll/strtoull | 261.269 | 0.395502 | 26.4703ms | 40000 | 120 | 4.00152e+07 | 146007 | 11.6274 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 398.561 | 0.405721 | 174.879ms | 400000 | 120 | 1.80954e+09 | 957118 | 7.6146 | 1(Win) |
| vn::from_chars | 378.742 | 0.23905 | 184.748ms | 400000 | 120 | 6.95653e+08 | 1.0072e+06 | 8.01592 | 2(Loss) |
| strtoll/strtoull | 259.612 | 0.181819 | 267.487ms | 400000 | 120 | 8.56506e+08 | 1.46939e+06 | 11.7011 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 488.758 | 0.734057 | 0.285955ms | 800 | 120 | 15755.5 | 1560.97 | 6.11705 | 1(Win) |
| std::from_chars | 425.158 | 0.643637 | 0.324794ms | 800 | 120 | 16008.2 | 1794.48 | 7.04435 | 2(Loss) |
| strtoll/strtoull | 301.685 | 1.03589 | 0.451822ms | 800 | 120 | 82352.7 | 2528.93 | 9.9726 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 544.716 | 2.35501 | 2.56346ms | 8000 | 120 | 1.30559e+07 | 14006.2 | 5.56631 | 1(Win) |
| std::from_chars | 516.695 | 0.778995 | 6.43762ms | 8000 | 240 | 3.17535e+06 | 14765.8 | 5.86601 | 2(Loss) |
| strtoll/strtoull | 361.353 | 0.853843 | 3.84294ms | 8000 | 120 | 3.8999e+06 | 21113.4 | 8.39947 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 569.527 | 0.37873 | 24.5311ms | 80000 | 120 | 3.08881e+07 | 133960 | 5.33378 | 1(Win) |
| std::from_chars | 499.146 | 0.420339 | 27.4835ms | 80000 | 120 | 4.95343e+07 | 152849 | 6.08484 | 2(Loss) |
| strtoll/strtoull | 369.91 | 0.442432 | 37.1808ms | 80000 | 120 | 9.9922e+07 | 206250 | 8.21402 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 553.78 | 0.365341 | 254.323ms | 800000 | 120 | 3.04008e+09 | 1.37769e+06 | 5.48178 | 1(Win) |
| std::from_chars | 496.4 | 0.34539 | 284.247ms | 800000 | 120 | 3.38157e+09 | 1.53695e+06 | 6.11533 | 2(Loss) |
| strtoll/strtoull | 359.307 | 0.28853 | 388.588ms | 800000 | 120 | 4.50416e+09 | 2.12337e+06 | 8.45342 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 532.104 | 1.34789 | 0.279556ms | 800 | 120 | 44820.8 | 1433.82 | 5.62042 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 523.505 | 1.21849 | 0.317768ms | 800 | 120 | 37840.7 | 1457.37 | 5.70675 | 1(Tie) |
| strtoll/strtoull | 408.687 | 0.266675 | 1.77158ms | 800 | 480 | 11896 | 1866.8 | 7.36233 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 643.775 | 0.744615 | 2.27015ms | 8000 | 120 | 934453 | 11851 | 4.71128 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 633.768 | 0.903407 | 5.26558ms | 8000 | 240 | 2.83856e+06 | 12038.1 | 4.78035 | 1(Tie) |
| strtoll/strtoull | 399.631 | 1.55657 | 3.5371ms | 8000 | 120 | 1.0597e+07 | 19091.1 | 7.59225 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 631.682 | 0.668098 | 21.9791ms | 80000 | 120 | 7.81347e+07 | 120779 | 4.80571 | 1(Win) |
| vn::from_chars | 612.495 | 1.19607 | 22.2784ms | 80000 | 120 | 2.66362e+08 | 124562 | 4.95317 | 2(Loss) |
| strtoll/strtoull | 424.771 | 0.439616 | 32.5709ms | 80000 | 120 | 7.48169e+07 | 179612 | 7.15287 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 601.188 | 0.412833 | 233.117ms | 800000 | 120 | 3.29374e+09 | 1.26905e+06 | 5.05217 | 1(Win) |
| std::from_chars | 553.636 | 0.688204 | 254.387ms | 800000 | 120 | 1.07931e+10 | 1.37805e+06 | 5.47978 | 2(Loss) |
| strtoll/strtoull | 393.292 | 0.333735 | 355.972ms | 800000 | 120 | 5.02962e+09 | 1.93988e+06 | 7.72359 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 582.182 | 1.17118 | 0.259051ms | 800 | 120 | 28267.9 | 1310.48 | 5.12726 | 1(Win) |
| std::from_chars | 553.764 | 1.45232 | 0.273615ms | 800 | 120 | 48043.4 | 1377.73 | 5.38242 | 2(Loss) |
| strtoll/strtoull | 357.188 | 1.30285 | 0.404844ms | 800 | 120 | 92929.4 | 2135.96 | 8.422 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 684.171 | 1.44658 | 2.0822ms | 8000 | 120 | 3.12261e+06 | 11151.3 | 4.42753 | 1(Win) |
| std::from_chars | 594.599 | 1.24367 | 2.44558ms | 8000 | 120 | 3.05581e+06 | 12831.2 | 5.09927 | 2(Loss) |
| strtoll/strtoull | 427.687 | 0.531575 | 3.32232ms | 8000 | 120 | 1.07904e+06 | 17838.7 | 7.09518 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 667.412 | 0.837894 | 20.5107ms | 80000 | 120 | 1.10091e+08 | 114313 | 4.54752 | 1(Win) |
| std::from_chars | 594.49 | 0.564788 | 23.1179ms | 80000 | 120 | 6.30438e+07 | 128335 | 5.09907 | 2(Loss) |
| strtoll/strtoull | 403.106 | 0.576358 | 33.812ms | 80000 | 120 | 1.42793e+08 | 189265 | 7.5344 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 620.228 | 0.692511 | 213.417ms | 800000 | 120 | 8.70788e+09 | 1.23009e+06 | 4.89531 | 1(Win) |
| std::from_chars | 532.495 | 0.700386 | 252.09ms | 800000 | 120 | 1.20838e+10 | 1.43276e+06 | 5.70025 | 2(Loss) |
| strtoll/strtoull | 397.353 | 0.352433 | 339.326ms | 800000 | 120 | 5.49492e+09 | 1.92005e+06 | 7.64495 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 560.583 | 2.13728 | 0.269638ms | 800 | 120 | 101533 | 1360.97 | 5.29291 | 1(Win) |
| std::from_chars | 525.751 | 1.39534 | 0.286271ms | 800 | 120 | 49199.7 | 1451.14 | 5.68817 | 2(Loss) |
| strtoll/strtoull | 397.226 | 0.276313 | 1.91365ms | 800 | 480 | 13519.1 | 1920.67 | 7.57536 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 682.603 | 0.573605 | 4.93926ms | 8000 | 240 | 986463 | 11176.9 | 4.43913 | 1(Win) |
| std::from_chars | 640.646 | 0.598113 | 5.22593ms | 8000 | 240 | 1.21765e+06 | 11908.9 | 4.72704 | 2(Loss) |
| strtoll/strtoull | 406.688 | 1.01448 | 3.49065ms | 8000 | 120 | 4.34632e+06 | 18759.8 | 7.45909 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 681.056 | 0.582796 | 20.3581ms | 80000 | 120 | 5.1148e+07 | 112023 | 4.45953 | 1(Win) |
| std::from_chars | 623.753 | 0.667823 | 22.1811ms | 80000 | 120 | 8.00682e+07 | 122314 | 4.86587 | 2(Loss) |
| strtoll/strtoull | 410.235 | 0.34493 | 33.978ms | 80000 | 120 | 4.93809e+07 | 185976 | 7.40603 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 658.825 | 0.495036 | 210.441ms | 800000 | 120 | 3.94362e+09 | 1.15803e+06 | 4.60895 | 1(Win) |
| std::from_chars | 591.783 | 0.40486 | 234.78ms | 800000 | 120 | 3.26925e+09 | 1.28922e+06 | 5.12968 | 2(Loss) |
| strtoll/strtoull | 400.186 | 0.267406 | 345.361ms | 800000 | 120 | 3.11876e+09 | 1.90646e+06 | 7.59037 | 3(Loss) |
