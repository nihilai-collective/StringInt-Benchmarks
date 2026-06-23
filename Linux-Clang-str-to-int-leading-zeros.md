# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 311.726 | 0.184728 | 0.067697ms | 100 | 30 | 9.58161 | 305.933 | 9.05267 | 1(Win) |
| std::from_chars | 124.734 | 0.0794924 | 0.150558ms | 100 | 30 | 11.0816 | 764.567 | 23.726 | 2(Loss) |
| strtoll/strtoull | 90.1678 | 0.415311 | 0.243836ms | 100 | 30 | 578.851 | 1057.67 | 33.15 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.635 | 0.6246 | 3.29061ms | 1000 | 48 | 17424.9 | 3050.44 | 9.6415 | 1(Win) |
| std::from_chars | 118.551 | 0.0330166 | 1.47776ms | 1000 | 30 | 211.628 | 8044.4 | 25.5485 | 2(Loss) |
| strtoll/strtoull | 48.993 | 1.32681 | 3.65301ms | 1000 | 30 | 2.0011e+06 | 19465.5 | 61.9537 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 72.4162 | 0.971016 | 57.2616ms | 10000 | 30 | 4.90572e+07 | 131693 | 41.9343 | 1(Win) |
| std::from_chars | 68.0588 | 0.158741 | 25.3932ms | 10000 | 30 | 1.48434e+06 | 140125 | 44.6448 | 2(Loss) |
| strtoll/strtoull | 46.6127 | 0.533392 | 89.8077ms | 10000 | 30 | 3.57277e+07 | 204595 | 65.1792 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 63.9989 | 0.436069 | 269.825ms | 100000 | 30 | 1.26674e+09 | 1.49014e+06 | 47.4678 | 1(Win) |
| vn::from_chars | 60.802 | 0.400839 | 277.751ms | 100000 | 30 | 1.18584e+09 | 1.56849e+06 | 49.9566 | 2(Loss) |
| strtoll/strtoull | 45.3952 | 0.330622 | 429.348ms | 100000 | 30 | 1.44732e+09 | 2.10082e+06 | 66.9402 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 285.674 | 0.0953593 | 0.079163ms | 100 | 30 | 3.04023 | 333.833 | 9.949 | 1(Win) |
| std::from_chars | 113.353 | 0.0820582 | 0.165309ms | 100 | 30 | 14.2989 | 841.333 | 26.1293 | 2(Loss) |
| strtoll/strtoull | 65.0366 | 0.542939 | 0.284657ms | 100 | 30 | 1901.55 | 1466.37 | 46.0227 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 303.222 | 0.0468318 | 0.588235ms | 1000 | 30 | 65.0851 | 3145.13 | 9.9563 | 1(Win) |
| std::from_chars | 118.392 | 0.0387964 | 1.48256ms | 1000 | 30 | 292.993 | 8055.2 | 25.5869 | 2(Loss) |
| strtoll/strtoull | 50.8753 | 1.59209 | 3.334ms | 1000 | 30 | 2.67203e+06 | 18745.3 | 59.6681 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 89.9338 | 1.09032 | 19.8595ms | 10000 | 30 | 4.01039e+07 | 106042 | 33.7852 | 1(Win) |
| std::from_chars | 80.1194 | 0.579786 | 21.2814ms | 10000 | 30 | 1.42883e+07 | 119032 | 37.9224 | 2(Loss) |
| strtoll/strtoull | 51.3619 | 1.19067 | 33.3674ms | 10000 | 30 | 1.46629e+08 | 185677 | 59.1464 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 76.0876 | 1.81552 | 224.347ms | 100000 | 30 | 1.55344e+10 | 1.25339e+06 | 39.9285 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 74.5672 | 0.255933 | 230.219ms | 100000 | 30 | 3.21424e+08 | 1.27895e+06 | 40.753 | 1(Tie) |
| strtoll/strtoull | 51.0239 | 0.43731 | 855.431ms | 100000 | 30 | 2.00426e+09 | 1.86907e+06 | 59.556 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 307.505 | 0.139768 | 0.068933ms | 100 | 30 | 5.63678 | 310.133 | 9.118 | 1(Win) |
| std::from_chars | 117.723 | 0.0701169 | 0.157295ms | 100 | 30 | 9.67931 | 810.1 | 25.214 | 2(Loss) |
| strtoll/strtoull | 66.9574 | 0.0654615 | 0.276011ms | 100 | 30 | 26.0793 | 1424.3 | 44.8223 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 335.943 | 0.187904 | 0.578388ms | 1000 | 30 | 853.614 | 2838.8 | 8.97683 | 1(Win) |
| std::from_chars | 120.126 | 0.0376237 | 1.45705ms | 1000 | 30 | 267.651 | 7938.93 | 25.2131 | 2(Loss) |
| strtoll/strtoull | 54.2234 | 0.886573 | 3.10321ms | 1000 | 30 | 729418 | 17587.9 | 55.986 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 106.111 | 0.492883 | 18.0649ms | 10000 | 30 | 5.88698e+06 | 89875.6 | 28.6323 | 1(Win) |
| std::from_chars | 83.2115 | 0.20111 | 20.8247ms | 10000 | 30 | 1.59376e+06 | 114608 | 36.5135 | 2(Loss) |
| strtoll/strtoull | 50.7881 | 0.742313 | 33.347ms | 10000 | 30 | 5.82869e+07 | 187775 | 59.8327 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 76.992 | 0.352434 | 274.226ms | 100000 | 30 | 5.71724e+08 | 1.23867e+06 | 39.4627 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 76.8681 | 1.50543 | 218.941ms | 100000 | 30 | 1.04653e+10 | 1.24066e+06 | 39.5254 | 1(Tie) |
| strtoll/strtoull | 50.9678 | 0.698943 | 348.765ms | 100000 | 30 | 5.13114e+09 | 1.87113e+06 | 59.6202 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 289.753 | 0.138761 | 0.072616ms | 100 | 30 | 6.25747 | 329.133 | 9.712 | 1(Win) |
| std::from_chars | 132.412 | 0.363202 | 0.138564ms | 100 | 30 | 205.289 | 720.233 | 22.1063 | 2(Loss) |
| strtoll/strtoull | 67.7646 | 0.735047 | 0.274857ms | 100 | 30 | 3210.3 | 1407.33 | 44.292 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 309.645 | 0.0501638 | 0.643494ms | 1000 | 30 | 71.6103 | 3079.9 | 9.75887 | 1(Win) |
| std::from_chars | 130.782 | 0.0400648 | 1.33446ms | 1000 | 30 | 256.064 | 7292.07 | 23.1382 | 2(Loss) |
| strtoll/strtoull | 52.9542 | 0.100167 | 3.32408ms | 1000 | 30 | 9762.81 | 18009.4 | 57.3132 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 93.2445 | 0.491472 | 18.9409ms | 10000 | 30 | 7.58007e+06 | 102277 | 32.5845 | 1(Win) |
| std::from_chars | 88.8776 | 0.509906 | 20.2782ms | 10000 | 30 | 8.98084e+06 | 107302 | 34.1804 | 2(Loss) |
| strtoll/strtoull | 49.9813 | 0.40579 | 34.3874ms | 10000 | 30 | 1.7985e+07 | 190806 | 60.796 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 77.2942 | 0.106159 | 222.094ms | 100000 | 30 | 5.1468e+07 | 1.23382e+06 | 39.3182 | 1(Win) |
| vn::from_chars | 68.0227 | 0.329279 | 256.285ms | 100000 | 30 | 6.39356e+08 | 1.40199e+06 | 44.6668 | 2(Loss) |
| strtoll/strtoull | 47.8454 | 1.78447 | 406.413ms | 100000 | 30 | 3.79541e+10 | 1.99324e+06 | 63.5128 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 358.592 | 0.106027 | 0.117617ms | 200 | 30 | 9.54138 | 531.9 | 8.12117 | 1(Win) |
| std::from_chars | 199.988 | 0.0659187 | 0.184281ms | 200 | 30 | 11.8575 | 953.733 | 14.8503 | 2(Loss) |
| strtoll/strtoull | 137.434 | 0.742461 | 0.291294ms | 200 | 30 | 3185.25 | 1387.83 | 21.7463 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 373.904 | 0.0433081 | 0.957411ms | 2000 | 30 | 146.42 | 5101.17 | 8.09142 | 1(Win) |
| std::from_chars | 175.017 | 1.97337 | 2.00141ms | 2000 | 30 | 1.38752e+06 | 10898.1 | 17.3176 | 2(Loss) |
| strtoll/strtoull | 93.1632 | 1.39936 | 4.072ms | 2000 | 30 | 2.46237e+06 | 20473.2 | 32.5913 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 132.825 | 1.93288 | 25.1629ms | 20000 | 30 | 2.31116e+08 | 143599 | 22.8591 | 1(Win) |
| std::from_chars | 117.63 | 0.577068 | 71.1471ms | 20000 | 30 | 2.62663e+07 | 162148 | 25.8234 | 2(Loss) |
| strtoll/strtoull | 86.547 | 0.832456 | 47.1276ms | 20000 | 30 | 1.00972e+08 | 220383 | 35.1004 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 120.727 | 1.62934 | 325.774ms | 200000 | 30 | 1.98792e+10 | 1.57989e+06 | 25.1637 | 1(Win) |
| std::from_chars | 110.257 | 0.432871 | 314.113ms | 200000 | 30 | 1.68222e+09 | 1.7299e+06 | 27.5578 | 2(Loss) |
| strtoll/strtoull | 84.0336 | 0.778043 | 413.945ms | 200000 | 30 | 9.35582e+09 | 2.26974e+06 | 36.1626 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 367.481 | 0.103479 | 0.105624ms | 200 | 30 | 8.65402 | 519.033 | 7.8885 | 1(Win) |
| std::from_chars | 212.518 | 0.0613192 | 0.173829ms | 200 | 30 | 9.08621 | 897.5 | 13.9253 | 2(Loss) |
| strtoll/strtoull | 122.219 | 0.734811 | 0.297356ms | 200 | 30 | 3945.08 | 1560.6 | 24.5325 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 375.753 | 0.0450617 | 1.24185ms | 2000 | 30 | 156.961 | 5076.07 | 8.04472 | 1(Win) |
| std::from_chars | 182.701 | 0.0316401 | 1.90931ms | 2000 | 30 | 327.321 | 10439.7 | 16.5801 | 2(Loss) |
| strtoll/strtoull | 103.13 | 0.255797 | 3.38839ms | 2000 | 30 | 67143.6 | 18494.6 | 29.4395 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 188.519 | 0.365021 | 18.6871ms | 20000 | 30 | 4.09173e+06 | 101175 | 16.1167 | 1(Win) |
| std::from_chars | 143.646 | 0.434914 | 25.6316ms | 20000 | 30 | 1.00046e+07 | 132781 | 21.1505 | 2(Loss) |
| strtoll/strtoull | 100.247 | 0.412799 | 35.4617ms | 20000 | 30 | 1.85063e+07 | 190265 | 30.312 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 147.642 | 0.359007 | 230.521ms | 200000 | 30 | 6.45307e+08 | 1.29187e+06 | 20.5783 | 1(Win) |
| std::from_chars | 136.385 | 0.178343 | 306.089ms | 200000 | 30 | 1.86621e+08 | 1.3985e+06 | 22.2828 | 2(Loss) |
| strtoll/strtoull | 95.7322 | 0.363523 | 360.523ms | 200000 | 30 | 1.57373e+09 | 1.99238e+06 | 31.7448 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 367.104 | 0.136465 | 0.248998ms | 200 | 30 | 15.0816 | 519.567 | 7.90517 | 1(Win) |
| std::from_chars | 203.668 | 0.0690216 | 0.180231ms | 200 | 30 | 12.5345 | 936.5 | 14.5932 | 2(Loss) |
| strtoll/strtoull | 111.153 | 0.418023 | 0.334941ms | 200 | 30 | 1543.62 | 1715.97 | 27.066 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 375.803 | 0.051782 | 2.22456ms | 2000 | 30 | 207.214 | 5075.4 | 8.04513 | 1(Win) |
| std::from_chars | 185.239 | 0.0561205 | 4.51938ms | 2000 | 30 | 1001.75 | 10296.7 | 16.3657 | 2(Loss) |
| strtoll/strtoull | 94.9842 | 0.0812669 | 3.41965ms | 2000 | 30 | 7989.25 | 20080.7 | 31.9701 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 207.129 | 0.877723 | 17.3104ms | 20000 | 30 | 1.95981e+07 | 92085 | 14.6683 | 1(Win) |
| std::from_chars | 140.131 | 0.461279 | 24.9242ms | 20000 | 30 | 1.18262e+07 | 136112 | 21.683 | 2(Loss) |
| strtoll/strtoull | 99.1302 | 0.627246 | 34.5104ms | 20000 | 30 | 4.36964e+07 | 192408 | 30.6522 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 151.333 | 0.175321 | 230.388ms | 200000 | 30 | 1.46482e+08 | 1.26037e+06 | 20.0812 | 1(Win) |
| std::from_chars | 135.419 | 0.1903 | 303.158ms | 200000 | 30 | 2.15527e+08 | 1.40848e+06 | 22.4418 | 2(Loss) |
| strtoll/strtoull | 95.347 | 0.86295 | 359.612ms | 200000 | 30 | 8.94001e+09 | 2.00043e+06 | 31.868 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 368.902 | 0.10263 | 0.105151ms | 200 | 30 | 8.44713 | 517.033 | 7.86883 | 1(Win) |
| std::from_chars | 223.762 | 0.0678723 | 0.174177ms | 200 | 30 | 10.0414 | 852.4 | 13.283 | 2(Loss) |
| strtoll/strtoull | 112.654 | 0.461441 | 0.325664ms | 200 | 30 | 1831.13 | 1693.1 | 26.695 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 211.4 | 0.0370722 | 1.66123ms | 2000 | 30 | 335.637 | 9022.47 | 14.3356 | 1(Win) |
| strtoll/strtoull | 95.1192 | 0.180713 | 3.67129ms | 2000 | 30 | 39393.5 | 20052.2 | 31.9215 | 2(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 227.722 | 1.66799 | 15.8579ms | 20000 | 30 | 5.85541e+07 | 83757.8 | 13.3416 | 1(Win) |
| std::from_chars | 163.475 | 0.566068 | 20.9514ms | 20000 | 30 | 1.30862e+07 | 116675 | 18.5834 | 2(Loss) |
| strtoll/strtoull | 94.7611 | 0.27499 | 86.2969ms | 20000 | 30 | 9.19082e+06 | 201280 | 32.0677 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 162.01 | 0.0875615 | 212.858ms | 200000 | 30 | 3.18806e+07 | 1.17731e+06 | 18.7572 | 1(Win) |
| std::from_chars | 150.176 | 0.874472 | 599.602ms | 200000 | 30 | 3.70062e+09 | 1.27008e+06 | 20.2332 | 2(Loss) |
| strtoll/strtoull | 90.0548 | 1.40315 | 432.076ms | 200000 | 30 | 2.64957e+10 | 2.11799e+06 | 33.7338 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 496.361 | 0.0937326 | 0.149436ms | 400 | 30 | 15.5678 | 768.533 | 5.91283 | 1(Win) |
| std::from_chars | 286.69 | 0.0520433 | 0.250821ms | 400 | 30 | 14.3862 | 1330.6 | 10.3766 | 2(Loss) |
| strtoll/strtoull | 194.426 | 1.07916 | 0.404858ms | 400 | 30 | 13449.5 | 1962.03 | 15.4808 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 535.571 | 0.0348569 | 1.32068ms | 4000 | 30 | 184.92 | 7122.67 | 5.64248 | 1(Win) |
| std::from_chars | 291.083 | 0.0332208 | 2.47294ms | 4000 | 30 | 568.626 | 13105.2 | 10.4144 | 2(Loss) |
| strtoll/strtoull | 163.928 | 0.782008 | 4.2722ms | 4000 | 30 | 993483 | 23270.6 | 18.5199 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 258.69 | 0.511447 | 26.9998ms | 40000 | 30 | 1.70641e+07 | 147462 | 11.7457 | 1(Win) |
| std::from_chars | 220.288 | 0.344803 | 31.1678ms | 40000 | 30 | 1.06955e+07 | 173168 | 13.7935 | 2(Loss) |
| strtoll/strtoull | 153.684 | 0.304711 | 45.0127ms | 40000 | 30 | 1.71617e+07 | 248217 | 19.7734 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 231.381 | 0.119083 | 300.895ms | 400000 | 30 | 1.15634e+08 | 1.64866e+06 | 13.1337 | 1(Win) |
| std::from_chars | 208.294 | 0.169099 | 378.275ms | 400000 | 30 | 2.87722e+08 | 1.8314e+06 | 14.5898 | 2(Loss) |
| strtoll/strtoull | 151.909 | 0.201906 | 1112.97ms | 400000 | 30 | 7.71208e+08 | 2.51117e+06 | 20.0054 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 529.574 | 0.100137 | 0.140421ms | 400 | 30 | 15.6092 | 720.333 | 5.55258 | 1(Win) |
| std::from_chars | 303.042 | 0.0504445 | 0.236129ms | 400 | 30 | 12.0966 | 1258.8 | 9.83358 | 2(Loss) |
| strtoll/strtoull | 162.88 | 0.145661 | 0.428857ms | 400 | 30 | 349.137 | 2342.03 | 18.4765 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 538.566 | 0.0383276 | 1.3074ms | 4000 | 30 | 221.099 | 7083.07 | 5.61119 | 1(Win) |
| std::from_chars | 278.274 | 0.304326 | 5.98169ms | 4000 | 30 | 52212.2 | 13708.4 | 10.8907 | 2(Loss) |
| strtoll/strtoull | 177.981 | 0.305619 | 3.9533ms | 4000 | 30 | 128723 | 21433.1 | 17.0557 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 303.874 | 0.466677 | 23.5708ms | 40000 | 30 | 1.02965e+07 | 125536 | 9.99834 | 1(Win) |
| std::from_chars | 248.146 | 0.431651 | 28.6698ms | 40000 | 30 | 1.32097e+07 | 153728 | 12.2441 | 2(Loss) |
| strtoll/strtoull | 166.301 | 1.29582 | 41.4936ms | 40000 | 30 | 2.65059e+08 | 229386 | 18.2714 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 272.982 | 0.39129 | 252.087ms | 400000 | 30 | 8.96958e+08 | 1.39742e+06 | 11.1304 | 1(Win) |
| std::from_chars | 239.529 | 1.5542 | 288.104ms | 400000 | 30 | 1.83797e+10 | 1.59258e+06 | 12.6851 | 2(Loss) |
| strtoll/strtoull | 167.824 | 0.562518 | 1011.27ms | 400000 | 30 | 4.90464e+09 | 2.27304e+06 | 18.1067 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 503.812 | 0.114698 | 0.152984ms | 400 | 30 | 22.6264 | 757.167 | 5.823 | 1(Win) |
| std::from_chars | 304.486 | 0.0507833 | 0.260467ms | 400 | 30 | 12.1437 | 1252.83 | 9.79092 | 2(Loss) |
| strtoll/strtoull | 165.485 | 0.181064 | 0.42368ms | 400 | 30 | 522.626 | 2305.17 | 18.1964 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 517.009 | 0.0419 | 1.3855ms | 4000 | 30 | 286.731 | 7378.4 | 5.84515 | 1(Win) |
| std::from_chars | 275.108 | 0.0550433 | 2.58097ms | 4000 | 30 | 1747.61 | 13866.2 | 11.0205 | 2(Loss) |
| strtoll/strtoull | 179.249 | 0.160974 | 4.0981ms | 4000 | 30 | 35207.7 | 21281.5 | 16.9398 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 306.868 | 0.367739 | 22.6235ms | 40000 | 30 | 6.26927e+06 | 124311 | 9.90092 | 1(Win) |
| std::from_chars | 249.114 | 0.468429 | 232.71ms | 40000 | 30 | 1.54359e+07 | 153130 | 12.1968 | 2(Loss) |
| strtoll/strtoull | 175.28 | 0.526281 | 40.0523ms | 40000 | 30 | 3.93562e+07 | 217635 | 17.3369 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 273.291 | 0.722991 | 252.662ms | 400000 | 30 | 3.05532e+09 | 1.39584e+06 | 11.1168 | 1(Win) |
| std::from_chars | 243.877 | 0.344259 | 281.841ms | 400000 | 30 | 8.69904e+08 | 1.56419e+06 | 12.4593 | 2(Loss) |
| strtoll/strtoull | 169.173 | 0.497356 | 452.898ms | 400000 | 30 | 3.77325e+09 | 2.25491e+06 | 17.9621 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 495.137 | 0.095337 | 0.404877ms | 400 | 30 | 16.1851 | 770.433 | 5.94225 | 1(Win) |
| std::from_chars | 306.09 | 0.0921669 | 0.275977ms | 400 | 30 | 39.5816 | 1246.27 | 9.69175 | 2(Loss) |
| strtoll/strtoull | 170.818 | 0.0505521 | 0.411637ms | 400 | 30 | 38.2345 | 2233.2 | 17.6283 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.1 | 0.032656 | 1.40244ms | 4000 | 30 | 178.92 | 7478.33 | 5.93124 | 1(Win) |
| std::from_chars | 278.395 | 1.33037 | 5.87186ms | 4000 | 30 | 996927 | 13702.5 | 10.8886 | 2(Loss) |
| strtoll/strtoull | 167.977 | 0.0719422 | 4.14953ms | 4000 | 30 | 8007.75 | 22709.7 | 18.0779 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 334.379 | 0.796022 | 20.8363ms | 40000 | 30 | 2.47408e+07 | 114083 | 9.08585 | 1(Win) |
| std::from_chars | 256.919 | 0.329584 | 27.1908ms | 40000 | 30 | 7.18423e+06 | 148478 | 11.8264 | 2(Loss) |
| strtoll/strtoull | 171.404 | 0.278341 | 40.7876ms | 40000 | 30 | 1.15121e+07 | 222556 | 17.728 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 297.525 | 1.80741 | 231.755ms | 400000 | 30 | 1.61104e+10 | 1.28214e+06 | 10.2083 | 1(Win) |
| std::from_chars | 251.883 | 0.232616 | 324.254ms | 400000 | 30 | 3.72323e+08 | 1.51447e+06 | 12.0634 | 2(Loss) |
| strtoll/strtoull | 170.487 | 0.108154 | 404.308ms | 400000 | 30 | 1.75688e+08 | 2.23753e+06 | 17.8263 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 684.517 | 0.0716843 | 0.236978ms | 800 | 30 | 19.1506 | 1114.57 | 4.33192 | 1(Win) |
| std::from_chars | 481.269 | 0.0407952 | 0.303226ms | 800 | 30 | 12.5471 | 1585.27 | 6.2145 | 2(Loss) |
| strtoll/strtoull | 258.635 | 0.215377 | 0.546039ms | 800 | 30 | 1210.95 | 2949.87 | 11.6773 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 706.596 | 1.59904 | 1.94286ms | 8000 | 30 | 894290 | 10797.4 | 4.28366 | 1(Win) |
| std::from_chars | 443.908 | 0.103124 | 7.93503ms | 8000 | 30 | 9424.05 | 17186.9 | 6.83025 | 2(Loss) |
| strtoll/strtoull | 261.028 | 0.645051 | 5.81313ms | 8000 | 30 | 1.06639e+06 | 29228.2 | 11.6295 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 490.305 | 1.71931 | 27.2277ms | 80000 | 30 | 2.14722e+08 | 155605 | 6.192 | 1(Win) |
| std::from_chars | 332.849 | 0.578996 | 96.7713ms | 80000 | 30 | 5.28395e+07 | 229215 | 9.12928 | 2(Loss) |
| strtoll/strtoull | 254.63 | 0.463875 | 54.0518ms | 80000 | 30 | 5.79541e+07 | 299626 | 11.9343 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 432.957 | 0.122219 | 318.319ms | 800000 | 30 | 1.39151e+08 | 1.76216e+06 | 7.0177 | 1(Win) |
| std::from_chars | 317.415 | 0.555125 | 480.819ms | 800000 | 30 | 5.34105e+09 | 2.4036e+06 | 9.57218 | 2(Loss) |
| strtoll/strtoull | 255.042 | 0.168492 | 1321.12ms | 800000 | 30 | 7.62141e+08 | 2.99143e+06 | 11.9148 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 584.27 | 0.0743845 | 0.23573ms | 800 | 30 | 28.3034 | 1305.8 | 5.0745 | 1(Win) |
| std::from_chars | 456.886 | 0.0362887 | 0.313516ms | 800 | 30 | 11.0161 | 1669.87 | 6.54321 | 2(Loss) |
| strtoll/strtoull | 278.445 | 1.25718 | 0.523209ms | 800 | 30 | 35597.2 | 2740 | 10.8383 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 692.662 | 2.22031 | 1.99824ms | 8000 | 30 | 1.79427e+06 | 11014.6 | 4.3702 | 1(Win) |
| std::from_chars | 434.266 | 1.33651 | 3.2622ms | 8000 | 30 | 1.65401e+06 | 17568.5 | 6.98445 | 2(Loss) |
| strtoll/strtoull | 277.648 | 1.36785 | 4.939ms | 8000 | 30 | 4.23829e+06 | 27478.7 | 10.9362 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 565.379 | 0.352698 | 24.5823ms | 80000 | 30 | 6.79562e+06 | 134943 | 5.37404 | 1(Win) |
| std::from_chars | 363.603 | 1.6168 | 37.2502ms | 80000 | 30 | 3.4527e+08 | 209828 | 8.35441 | 2(Loss) |
| strtoll/strtoull | 279.645 | 0.385281 | 50.4074ms | 80000 | 30 | 3.31469e+07 | 272825 | 10.8664 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 525.977 | 0.174587 | 312.832ms | 800000 | 30 | 1.92394e+08 | 1.45052e+06 | 5.77637 | 1(Win) |
| std::from_chars | 360.214 | 0.356551 | 380.545ms | 800000 | 30 | 1.7109e+09 | 2.11802e+06 | 8.43401 | 2(Loss) |
| strtoll/strtoull | 279.212 | 0.354095 | 492.736ms | 800000 | 30 | 2.8085e+09 | 2.73248e+06 | 10.8828 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 674.392 | 0.0975836 | 0.211245ms | 800 | 30 | 36.5621 | 1131.3 | 4.43504 | 1(Win) |
| std::from_chars | 474.435 | 0.0500998 | 0.303346ms | 800 | 30 | 19.4724 | 1608.1 | 6.31496 | 2(Loss) |
| strtoll/strtoull | 286.056 | 0.0429326 | 0.490017ms | 800 | 30 | 39.3345 | 2667.1 | 10.5243 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 682.211 | 1.52629 | 2.01946ms | 8000 | 30 | 874048 | 11183.3 | 4.43726 | 1(Win) |
| std::from_chars | 424.795 | 0.0755585 | 3.23956ms | 8000 | 30 | 5524.72 | 17960.2 | 7.14112 | 2(Loss) |
| strtoll/strtoull | 292.623 | 0.530197 | 4.78249ms | 8000 | 30 | 573268 | 26072.4 | 10.3775 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 575.091 | 0.326158 | 24.1304ms | 80000 | 30 | 5.61673e+06 | 132664 | 5.28331 | 1(Win) |
| std::from_chars | 382.304 | 0.578949 | 36.4264ms | 80000 | 30 | 4.00465e+07 | 199564 | 7.94806 | 2(Loss) |
| strtoll/strtoull | 286.718 | 0.301603 | 48.0474ms | 80000 | 30 | 1.93224e+07 | 266094 | 10.5991 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 479.8 | 0.848128 | 285.053ms | 800000 | 30 | 5.45637e+09 | 1.59012e+06 | 6.33159 | 1(Win) |
| std::from_chars | 357.98 | 0.277379 | 387.146ms | 800000 | 30 | 1.04841e+09 | 2.13124e+06 | 8.48684 | 2(Loss) |
| strtoll/strtoull | 283.93 | 0.27125 | 537.024ms | 800000 | 30 | 1.59374e+09 | 2.68707e+06 | 10.7024 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 680.224 | 0.0971616 | 0.216252ms | 800 | 30 | 35.6276 | 1121.6 | 4.36158 | 1(Win) |
| std::from_chars | 460.453 | 0.0776959 | 0.309732ms | 800 | 30 | 49.7195 | 1656.93 | 6.50612 | 2(Loss) |
| strtoll/strtoull | 275.951 | 1.84083 | 0.504457ms | 800 | 30 | 77708 | 2764.77 | 10.913 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 695.058 | 0.361761 | 2.01534ms | 8000 | 30 | 47304.7 | 10976.6 | 4.36156 | 1(Win) |
| std::from_chars | 424.456 | 0.0210133 | 3.25542ms | 8000 | 30 | 427.982 | 17974.5 | 7.14685 | 2(Loss) |
| strtoll/strtoull | 276.79 | 0.268751 | 5.05012ms | 8000 | 30 | 164627 | 27563.8 | 10.9719 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 475.146 | 0.602628 | 29.2795ms | 80000 | 30 | 2.80895e+07 | 160569 | 6.39495 | 1(Win) |
| std::from_chars | 358.579 | 0.737459 | 38.1321ms | 80000 | 30 | 7.38595e+07 | 212767 | 8.4727 | 2(Loss) |
| strtoll/strtoull | 270.252 | 0.82052 | 530.584ms | 80000 | 30 | 1.60969e+08 | 282306 | 11.2408 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 448.789 | 0.143758 | 307.472ms | 800000 | 30 | 1.79175e+08 | 1.69999e+06 | 6.76893 | 1(Win) |
| std::from_chars | 377.982 | 0.194834 | 363.764ms | 800000 | 30 | 4.63969e+08 | 2.01846e+06 | 8.03805 | 2(Loss) |
| strtoll/strtoull | 273.864 | 0.398931 | 499.069ms | 800000 | 30 | 3.70533e+09 | 2.78583e+06 | 11.0953 | 3(Loss) |
