# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1020-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 324.563 | 0.299587 | 0.092516ms | 100 | 30 | 23.2471 | 293.833 | 6.734 | 1(Win) |
| std::from_chars | 204.505 | 0.197324 | 0.100639ms | 100 | 30 | 25.4023 | 466.333 | 11.154 | 2(Loss) |
| strtoll/strtoull | 90.2332 | 0.088007 | 0.237993ms | 100 | 30 | 25.9552 | 1056.9 | 26.416 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 384.494 | 0.0358182 | 0.473441ms | 1000 | 30 | 23.6782 | 2480.33 | 6.34747 | 1(Win) |
| std::from_chars | 226.1 | 0.0163915 | 0.808286ms | 1000 | 30 | 14.3402 | 4217.93 | 10.8559 | 2(Loss) |
| strtoll/strtoull | 97.4317 | 0.0123992 | 1.81182ms | 1000 | 30 | 44.1885 | 9788.13 | 25.311 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 384.546 | 1.06353 | 10.9048ms | 10000 | 30 | 2.08701e+06 | 24800 | 6.42859 | 1(Win) |
| std::from_chars | 227.086 | 0.571589 | 18.528ms | 10000 | 30 | 1.72866e+06 | 41996.2 | 10.893 | 2(Loss) |
| strtoll/strtoull | 92.1512 | 0.439295 | 19.2052ms | 10000 | 30 | 6.20057e+06 | 103490 | 26.8572 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 102.55 | 0.316815 | 167.981ms | 100000 | 30 | 2.60413e+08 | 929960 | 24.1414 | 1(Win) |
| std::from_chars | 84.0745 | 0.147068 | 204.76ms | 100000 | 30 | 8.34885e+07 | 1.13432e+06 | 29.4459 | 2(Loss) |
| strtoll/strtoull | 56.6172 | 0.117902 | 303.225ms | 100000 | 30 | 1.18322e+08 | 1.68442e+06 | 43.7275 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 307.24 | 0.0293079 | 0.071425ms | 100 | 30 | 0.248276 | 310.4 | 7.10667 | 1(Win) |
| std::from_chars | 200.338 | 0.19491 | 0.101821ms | 100 | 30 | 25.8264 | 476.033 | 11.3707 | 2(Loss) |
| strtoll/strtoull | 85.0508 | 0.0673582 | 0.217652ms | 100 | 30 | 17.1138 | 1121.3 | 28.1927 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 361.478 | 0.0343825 | 0.495553ms | 1000 | 30 | 24.6851 | 2638.27 | 6.75307 | 1(Win) |
| std::from_chars | 219.232 | 0.0303441 | 0.816428ms | 1000 | 30 | 52.2713 | 4350.07 | 11.1999 | 2(Loss) |
| strtoll/strtoull | 90.5654 | 0.00873081 | 1.9434ms | 1000 | 30 | 25.3575 | 10530.2 | 27.2367 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 348.367 | 1.53849 | 4.99963ms | 10000 | 30 | 5.32155e+06 | 27375.6 | 7.09679 | 1(Win) |
| std::from_chars | 219.415 | 0.566585 | 7.94395ms | 10000 | 30 | 1.81936e+06 | 43464.4 | 11.2742 | 2(Loss) |
| strtoll/strtoull | 82.4265 | 0.462689 | 21.5698ms | 10000 | 30 | 8.59737e+06 | 115700 | 30.0261 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 184.037 | 0.266953 | 95.4901ms | 100000 | 30 | 5.74089e+07 | 518196 | 13.4513 | 1(Win) |
| std::from_chars | 137.474 | 0.109917 | 125.069ms | 100000 | 30 | 1.74425e+07 | 693715 | 18.0075 | 2(Loss) |
| strtoll/strtoull | 72.2037 | 0.208378 | 238.051ms | 100000 | 30 | 2.27252e+08 | 1.32081e+06 | 34.2875 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 345.034 | 0.334391 | 0.065797ms | 100 | 30 | 25.6276 | 276.4 | 6.20533 | 1(Win) |
| std::from_chars | 210.369 | 0.181142 | 0.097305ms | 100 | 30 | 20.2299 | 453.333 | 10.8073 | 2(Loss) |
| strtoll/strtoull | 97.7292 | 0.095411 | 0.192115ms | 100 | 30 | 26.0057 | 975.833 | 24.44 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 412.471 | 0.0273817 | 0.462735ms | 1000 | 30 | 12.0241 | 2312.1 | 5.90373 | 1(Win) |
| strtoll/strtoull | 106.374 | 0.0113061 | 1.64385ms | 1000 | 30 | 30.823 | 8965.27 | 23.1747 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 405.109 | 2.08743 | 4.21573ms | 10000 | 30 | 7.24438e+06 | 23541.2 | 6.10185 | 1(Win) |
| std::from_chars | 233.354 | 0.753791 | 7.41227ms | 10000 | 30 | 2.84704e+06 | 40868.2 | 10.5995 | 2(Loss) |
| strtoll/strtoull | 97.3601 | 2.39443 | 17.3603ms | 10000 | 30 | 1.65031e+08 | 97953.3 | 25.4196 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 200.024 | 0.381148 | 86.3921ms | 100000 | 30 | 9.90704e+07 | 476780 | 12.3765 | 1(Win) |
| std::from_chars | 142.094 | 0.139607 | 121.087ms | 100000 | 30 | 2.6338e+07 | 671155 | 17.4225 | 2(Loss) |
| strtoll/strtoull | 81.2731 | 0.664777 | 209.862ms | 100000 | 30 | 1.82549e+09 | 1.17342e+06 | 30.4607 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 309.133 | 0.242646 | 0.086168ms | 100 | 30 | 16.8103 | 308.5 | 7.02 | 1(Win) |
| std::from_chars | 264.518 | 0.135447 | 0.080039ms | 100 | 30 | 7.15402 | 360.533 | 8.41533 | 2(Loss) |
| strtoll/strtoull | 85.5569 | 0.0755302 | 0.221889ms | 100 | 30 | 21.2644 | 1114.67 | 28.054 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 370.1 | 0.033045 | 0.483566ms | 1000 | 30 | 21.7517 | 2576.8 | 6.5884 | 1(Win) |
| std::from_chars | 265.998 | 0.023657 | 0.683131ms | 1000 | 30 | 21.5816 | 3585.27 | 9.20747 | 2(Loss) |
| strtoll/strtoull | 88.061 | 0.00822513 | 2.00282ms | 1000 | 30 | 23.8034 | 10829.7 | 28.0133 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 371.659 | 1.7927 | 4.69889ms | 10000 | 30 | 6.34816e+06 | 25659.9 | 6.65158 | 1(Win) |
| std::from_chars | 303.439 | 0.818556 | 5.79931ms | 10000 | 30 | 1.98552e+06 | 31428.8 | 8.14814 | 2(Loss) |
| strtoll/strtoull | 79.7062 | 0.417782 | 22.2871ms | 10000 | 30 | 7.49611e+06 | 119649 | 31.0524 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 161.065 | 0.18591 | 107.103ms | 100000 | 30 | 3.63517e+07 | 592106 | 15.3704 | 1(Win) |
| std::from_chars | 134.145 | 0.371396 | 127.397ms | 100000 | 30 | 2.09144e+08 | 710927 | 18.4548 | 2(Loss) |
| strtoll/strtoull | 66.346 | 0.398804 | 260.142ms | 100000 | 30 | 9.85854e+08 | 1.43743e+06 | 37.3151 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 353.365 | 0.163955 | 0.113609ms | 200 | 30 | 23.4954 | 539.767 | 6.513 | 1(Win) |
| std::from_chars | 288.861 | 0.0700818 | 0.152986ms | 200 | 30 | 6.42414 | 660.3 | 8.06867 | 2(Loss) |
| strtoll/strtoull | 136.688 | 0.0621912 | 0.268237ms | 200 | 30 | 22.5931 | 1395.4 | 17.6107 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 382.204 | 0.117759 | 0.949165ms | 2000 | 30 | 1036.04 | 4990.4 | 6.41983 | 1(Win) |
| std::from_chars | 305.392 | 0.0269968 | 1.16821ms | 2000 | 30 | 85.2885 | 6245.57 | 8.05783 | 2(Loss) |
| strtoll/strtoull | 136.665 | 0.0108773 | 2.57068ms | 2000 | 30 | 69.1368 | 13956.4 | 18.0665 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 378.983 | 1.06083 | 9.17103ms | 20000 | 30 | 8.55138e+06 | 50328.1 | 6.52583 | 1(Win) |
| std::from_chars | 301.465 | 0.560877 | 11.8379ms | 20000 | 30 | 3.77784e+06 | 63269.3 | 8.20798 | 2(Loss) |
| strtoll/strtoull | 105.9 | 0.282763 | 32.9178ms | 20000 | 30 | 7.78101e+06 | 180109 | 23.373 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 173.931 | 0.116323 | 197.72ms | 200000 | 30 | 4.88159e+07 | 1.09661e+06 | 14.2339 | 1(Win) |
| std::from_chars | 139.914 | 0.573322 | 578.705ms | 200000 | 30 | 1.83255e+09 | 1.36323e+06 | 17.6931 | 2(Loss) |
| strtoll/strtoull | 89.3032 | 0.111646 | 382.489ms | 200000 | 30 | 1.70582e+08 | 2.13581e+06 | 27.7221 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.076 | 0.167482 | 0.112707ms | 200 | 30 | 24.2816 | 537.167 | 6.487 | 1(Win) |
| std::from_chars | 291.658 | 0.130841 | 0.133007ms | 200 | 30 | 21.9644 | 653.967 | 7.98633 | 2(Loss) |
| strtoll/strtoull | 125.605 | 0.0584533 | 0.311931ms | 200 | 30 | 23.6368 | 1518.53 | 19.2443 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 376.807 | 0.0187713 | 0.950807ms | 2000 | 30 | 27.0851 | 5061.87 | 6.5221 | 1(Win) |
| std::from_chars | 301.81 | 0.0143579 | 1.17368ms | 2000 | 30 | 24.7 | 6319.7 | 8.1575 | 2(Loss) |
| strtoll/strtoull | 123.551 | 0.960515 | 2.76875ms | 2000 | 30 | 659630 | 15437.8 | 19.9892 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 373.969 | 1.19675 | 9.24075ms | 20000 | 30 | 1.11767e+07 | 51002.8 | 6.61566 | 1(Win) |
| std::from_chars | 285.41 | 0.5249 | 12.5574ms | 20000 | 30 | 3.69143e+06 | 66828.3 | 8.6681 | 2(Loss) |
| strtoll/strtoull | 115.393 | 0.338169 | 30.0643ms | 20000 | 30 | 9.37324e+06 | 165291 | 21.4502 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 261.688 | 0.111674 | 132.26ms | 200000 | 30 | 1.98755e+07 | 728863 | 9.45974 | 1(Win) |
| std::from_chars | 200.812 | 0.24976 | 170.601ms | 200000 | 30 | 1.6883e+08 | 949819 | 12.3277 | 2(Loss) |
| strtoll/strtoull | 105.088 | 0.344889 | 327.808ms | 200000 | 30 | 1.17553e+09 | 1.815e+06 | 23.558 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 364.137 | 0.162563 | 0.110514ms | 200 | 30 | 21.7517 | 523.8 | 6.30933 | 1(Win) |
| std::from_chars | 292.838 | 0.0511771 | 0.134059ms | 200 | 30 | 3.33333 | 651.333 | 7.956 | 2(Loss) |
| strtoll/strtoull | 145.451 | 0.0508388 | 0.253004ms | 200 | 30 | 13.3333 | 1311.33 | 16.5187 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 376.788 | 1.89086 | 0.963356ms | 2000 | 30 | 274857 | 5062.13 | 6.52253 | 1(Win) |
| std::from_chars | 297.288 | 1.97534 | 1.18382ms | 2000 | 30 | 481848 | 6415.83 | 8.2771 | 2(Loss) |
| strtoll/strtoull | 144.075 | 1.97503 | 5.58454ms | 2000 | 30 | 2.05093e+06 | 13238.6 | 17.1336 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 375.475 | 2.18805 | 9.00699ms | 20000 | 30 | 3.70623e+07 | 50798.2 | 6.58879 | 1(Win) |
| std::from_chars | 267.292 | 0.618732 | 13.0751ms | 20000 | 30 | 5.84812e+06 | 71358.4 | 9.25695 | 2(Loss) |
| strtoll/strtoull | 130.551 | 0.35329 | 26.4467ms | 20000 | 30 | 7.99256e+06 | 146100 | 18.9597 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 263.378 | 0.116303 | 131.705ms | 200000 | 30 | 2.12818e+07 | 724187 | 9.3992 | 1(Win) |
| std::from_chars | 213.36 | 0.154504 | 161.195ms | 200000 | 30 | 5.72317e+07 | 893959 | 11.6022 | 2(Loss) |
| strtoll/strtoull | 118.503 | 0.0598695 | 290.026ms | 200000 | 30 | 2.78571e+07 | 1.60954e+06 | 20.8909 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 351.132 | 0.144875 | 0.145595ms | 200 | 30 | 18.5793 | 543.2 | 6.55633 | 1(Win) |
| std::from_chars | 335.505 | 0.159743 | 0.117323ms | 200 | 30 | 24.7414 | 568.5 | 6.89867 | 2(Loss) |
| strtoll/strtoull | 129.884 | 0.0609731 | 0.279884ms | 200 | 30 | 24.0517 | 1468.5 | 18.5857 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 378.805 | 0.0465238 | 0.944418ms | 2000 | 30 | 164.626 | 5035.17 | 6.48743 | 1(Win) |
| std::from_chars | 365.297 | 0.025223 | 0.968324ms | 2000 | 30 | 52.0333 | 5221.37 | 6.7262 | 2(Loss) |
| strtoll/strtoull | 128.911 | 0.00834613 | 2.72014ms | 2000 | 30 | 45.7483 | 14795.9 | 19.1559 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 374.4 | 1.11644 | 9.16375ms | 20000 | 30 | 9.70467e+06 | 50944.1 | 6.60751 | 1(Win) |
| std::from_chars | 331.076 | 0.852047 | 10.4191ms | 20000 | 30 | 7.22857e+06 | 57610.5 | 7.47331 | 2(Loss) |
| strtoll/strtoull | 120.06 | 0.592856 | 28.5356ms | 20000 | 30 | 2.66124e+07 | 158866 | 20.6163 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 318.444 | 0.186812 | 107.9ms | 200000 | 30 | 3.75601e+07 | 598959 | 7.77396 | 1(Win) |
| std::from_chars | 288.146 | 0.202688 | 119.254ms | 200000 | 30 | 5.40027e+07 | 661939 | 8.59101 | 2(Loss) |
| strtoll/strtoull | 118.273 | 0.18093 | 292.317ms | 200000 | 30 | 2.55408e+08 | 1.61267e+06 | 20.9314 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 482.73 | 0.177379 | 0.159025ms | 400 | 30 | 58.9437 | 790.233 | 4.888 | 1(Win) |
| std::from_chars | 332.204 | 0.0758675 | 0.223671ms | 400 | 30 | 22.769 | 1148.3 | 7.2215 | 2(Loss) |
| strtoll/strtoull | 185.989 | 0.0364019 | 0.385661ms | 400 | 30 | 16.723 | 2051.03 | 13.0628 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.28 | 0.030686 | 3.22505ms | 4000 | 30 | 157.872 | 7475.7 | 4.82863 | 1(Win) |
| std::from_chars | 342.182 | 0.0161901 | 2.06819ms | 4000 | 30 | 97.7299 | 11148.2 | 7.21262 | 2(Loss) |
| strtoll/strtoull | 183.815 | 1.40002 | 3.74751ms | 4000 | 30 | 2.53249e+06 | 20753 | 13.4429 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 503.569 | 0.577062 | 13.8347ms | 40000 | 30 | 5.73281e+06 | 75753.2 | 4.91422 | 1(Win) |
| std::from_chars | 243.148 | 0.32136 | 28.6859ms | 40000 | 30 | 7.62573e+06 | 156888 | 10.1796 | 2(Loss) |
| strtoll/strtoull | 134.023 | 0.23743 | 51.3888ms | 40000 | 30 | 1.37011e+07 | 284630 | 18.4708 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 260.668 | 0.183578 | 262.668ms | 400000 | 30 | 2.16524e+08 | 1.46343e+06 | 9.4977 | 1(Win) |
| std::from_chars | 201.454 | 0.122018 | 334.797ms | 400000 | 30 | 1.60154e+08 | 1.89358e+06 | 12.2887 | 2(Loss) |
| strtoll/strtoull | 128.772 | 0.078448 | 532.766ms | 400000 | 30 | 1.62018e+08 | 2.96237e+06 | 19.2255 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 506.264 | 0.102356 | 0.150894ms | 400 | 30 | 17.8448 | 753.5 | 4.65183 | 1(Win) |
| std::from_chars | 328.844 | 0.0608131 | 0.224632ms | 400 | 30 | 14.9299 | 1160.03 | 7.27783 | 2(Loss) |
| strtoll/strtoull | 177.491 | 0.0423677 | 0.403397ms | 400 | 30 | 24.8747 | 2149.23 | 13.6847 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 529.922 | 0.0984305 | 1.34399ms | 4000 | 30 | 1506.18 | 7198.6 | 4.6488 | 1(Win) |
| std::from_chars | 334.941 | 0.961025 | 2.07623ms | 4000 | 30 | 359397 | 11389.2 | 7.3671 | 2(Loss) |
| strtoll/strtoull | 161.351 | 1.91509 | 4.25967ms | 4000 | 30 | 6.15004e+06 | 23642.3 | 15.3201 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 526.369 | 0.527874 | 13.229ms | 40000 | 30 | 4.39057e+06 | 72471.9 | 4.70104 | 1(Win) |
| std::from_chars | 294.344 | 0.41278 | 23.5181ms | 40000 | 30 | 8.58558e+06 | 129600 | 8.4089 | 2(Loss) |
| strtoll/strtoull | 150.493 | 0.274433 | 45.6597ms | 40000 | 30 | 1.45171e+07 | 253479 | 16.4483 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.089 | 0.192633 | 193.607ms | 400000 | 30 | 1.28478e+08 | 1.07429e+06 | 6.97177 | 1(Win) |
| std::from_chars | 264.172 | 0.125049 | 257.679ms | 400000 | 30 | 9.78193e+07 | 1.44402e+06 | 9.37121 | 2(Loss) |
| strtoll/strtoull | 146.026 | 0.175779 | 470.055ms | 400000 | 30 | 6.32577e+08 | 2.61234e+06 | 16.9537 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 464.716 | 0.138559 | 0.164344ms | 400 | 30 | 38.8092 | 820.867 | 5.07217 | 1(Win) |
| std::from_chars | 329.601 | 0.078873 | 0.2231ms | 400 | 30 | 24.9989 | 1157.37 | 7.26267 | 2(Loss) |
| strtoll/strtoull | 192.354 | 0.0307798 | 0.417178ms | 400 | 30 | 11.1782 | 1983.17 | 12.623 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 487.63 | 0.0210798 | 1.45668ms | 4000 | 30 | 81.5816 | 7822.93 | 5.05353 | 1(Win) |
| std::from_chars | 347.255 | 0.0299767 | 2.02571ms | 4000 | 30 | 325.321 | 10985.3 | 7.1006 | 2(Loss) |
| strtoll/strtoull | 184.282 | 0.0174227 | 3.7796ms | 4000 | 30 | 390.217 | 20700.3 | 13.4112 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 484.148 | 0.513507 | 14.2752ms | 40000 | 30 | 4.91109e+06 | 78792 | 5.11136 | 1(Win) |
| std::from_chars | 298.329 | 0.421824 | 23.3225ms | 40000 | 30 | 8.72797e+06 | 127869 | 8.29625 | 2(Loss) |
| strtoll/strtoull | 163.024 | 0.264472 | 42.1679ms | 40000 | 30 | 1.14894e+07 | 233995 | 15.1846 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 336.419 | 0.19393 | 203.87ms | 400000 | 30 | 1.45067e+08 | 1.13391e+06 | 7.35917 | 1(Win) |
| std::from_chars | 271.008 | 0.167495 | 253.045ms | 400000 | 30 | 1.66755e+08 | 1.40759e+06 | 9.13438 | 2(Loss) |
| strtoll/strtoull | 150.985 | 1.1201 | 439.563ms | 400000 | 30 | 2.40264e+10 | 2.52654e+06 | 16.3952 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 450.786 | 0.110837 | 0.167628ms | 400 | 30 | 26.392 | 846.233 | 5.252 | 1(Win) |
| std::from_chars | 367.434 | 0.0864483 | 0.224943ms | 400 | 30 | 24.1655 | 1038.2 | 6.49783 | 2(Loss) |
| strtoll/strtoull | 163.035 | 0.0379732 | 0.437978ms | 400 | 30 | 23.6828 | 2339.8 | 14.9565 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 464.026 | 0.043268 | 1.52048ms | 4000 | 30 | 379.568 | 8220.87 | 5.31093 | 1(Win) |
| std::from_chars | 365.422 | 0.0175921 | 4.64455ms | 4000 | 30 | 101.178 | 10439.2 | 6.75133 | 2(Loss) |
| strtoll/strtoull | 156.762 | 0.0444612 | 4.44216ms | 4000 | 30 | 3511.76 | 24334.4 | 15.7686 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 459.256 | 0.51228 | 15.0563ms | 40000 | 30 | 5.43183e+06 | 83062.5 | 5.38809 | 1(Win) |
| std::from_chars | 335.1 | 0.508126 | 20.5559ms | 40000 | 30 | 1.00377e+07 | 113838 | 7.38584 | 2(Loss) |
| strtoll/strtoull | 152.467 | 0.314014 | 45.1421ms | 40000 | 30 | 1.85176e+07 | 250197 | 16.2354 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 403.643 | 0.273116 | 170.16ms | 400000 | 30 | 1.99867e+08 | 945067 | 6.13268 | 1(Win) |
| std::from_chars | 314.431 | 0.229635 | 221.175ms | 400000 | 30 | 2.32845e+08 | 1.21321e+06 | 7.87319 | 2(Loss) |
| strtoll/strtoull | 150.274 | 0.432024 | 454.561ms | 400000 | 30 | 3.60821e+09 | 2.5385e+06 | 16.4744 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 596.73 | 0.0683027 | 0.246284ms | 800 | 30 | 22.8782 | 1278.53 | 4.02458 | 1(Win) |
| std::from_chars | 369.994 | 0.0432814 | 0.415294ms | 800 | 30 | 23.8954 | 2062.03 | 6.57258 | 2(Loss) |
| strtoll/strtoull | 224.614 | 0.0203743 | 0.650703ms | 800 | 30 | 14.3678 | 3396.67 | 10.9016 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 518.499 | 2.02262 | 2.65826ms | 8000 | 30 | 2.65726e+06 | 14714.4 | 4.76233 | 1(Win) |
| std::from_chars | 376.439 | 0.018641 | 3.69825ms | 8000 | 30 | 428.202 | 20267.3 | 6.56413 | 2(Loss) |
| strtoll/strtoull | 208.048 | 0.643605 | 6.65928ms | 8000 | 30 | 1.67114e+06 | 36671.2 | 11.8885 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 529.403 | 0.807805 | 25.9625ms | 80000 | 30 | 4.06576e+07 | 144113 | 4.67501 | 1(Win) |
| std::from_chars | 322.508 | 0.902777 | 42.3192ms | 80000 | 30 | 1.3683e+08 | 236565 | 7.67536 | 2(Loss) |
| strtoll/strtoull | 195.153 | 0.179 | 70.6ms | 80000 | 30 | 1.46912e+07 | 390944 | 12.6849 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 423.097 | 0.102159 | 323.866ms | 800000 | 30 | 1.01806e+08 | 1.80323e+06 | 5.85121 | 1(Win) |
| std::from_chars | 321.178 | 0.290894 | 423.203ms | 800000 | 30 | 1.43245e+09 | 2.37544e+06 | 7.70815 | 2(Loss) |
| strtoll/strtoull | 192.385 | 0.0388592 | 714.661ms | 800000 | 30 | 7.12437e+07 | 3.96569e+06 | 12.8681 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 632.532 | 0.0863689 | 0.235108ms | 800 | 30 | 32.5575 | 1206.17 | 3.79383 | 1(Win) |
| std::from_chars | 362.78 | 0.0228537 | 0.418139ms | 800 | 30 | 6.92989 | 2103.03 | 6.70583 | 2(Loss) |
| strtoll/strtoull | 215.505 | 0.0261453 | 0.685324ms | 800 | 30 | 25.7023 | 3540.23 | 11.3685 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 639.478 | 0.0285821 | 2.19196ms | 8000 | 30 | 348.851 | 11930.7 | 3.85938 | 1(Win) |
| std::from_chars | 363.194 | 1.2634 | 3.79797ms | 8000 | 30 | 2.11303e+06 | 21006.4 | 6.80387 | 2(Loss) |
| strtoll/strtoull | 212.618 | 0.692945 | 6.50657ms | 8000 | 30 | 1.85481e+06 | 35883.2 | 11.6327 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 645.699 | 0.503459 | 21.2952ms | 80000 | 30 | 1.06162e+07 | 118157 | 3.83315 | 1(Win) |
| std::from_chars | 364.4 | 0.274646 | 37.6916ms | 80000 | 30 | 9.91951e+06 | 209369 | 6.79288 | 2(Loss) |
| strtoll/strtoull | 211.206 | 0.184771 | 65.1974ms | 80000 | 30 | 1.33646e+07 | 361230 | 11.7209 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 612.023 | 0.0779047 | 226.022ms | 800000 | 30 | 2.82939e+07 | 1.24659e+06 | 4.04487 | 1(Win) |
| std::from_chars | 360.94 | 0.111928 | 379.988ms | 800000 | 30 | 1.67922e+08 | 2.11376e+06 | 6.85899 | 2(Loss) |
| strtoll/strtoull | 211.372 | 0.188836 | 647.741ms | 800000 | 30 | 1.39371e+09 | 3.60946e+06 | 11.7126 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 572.648 | 0.0252299 | 0.258983ms | 800 | 30 | 3.38966 | 1332.3 | 4.20875 | 1(Win) |
| std::from_chars | 372.887 | 0.0414244 | 0.383508ms | 800 | 30 | 21.5506 | 2046.03 | 6.51192 | 2(Loss) |
| strtoll/strtoull | 227.472 | 0.0166096 | 0.673277ms | 800 | 30 | 9.31034 | 3354 | 10.7467 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 456.959 | 0.0130607 | 3.0774ms | 8000 | 30 | 142.654 | 16696 | 5.40573 | 1(Win) |
| std::from_chars | 372.433 | 0.0232563 | 3.72429ms | 8000 | 30 | 680.907 | 20485.3 | 6.63455 | 2(Loss) |
| strtoll/strtoull | 224.981 | 0.817849 | 6.1816ms | 8000 | 30 | 2.30757e+06 | 33911.2 | 10.9924 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 475.569 | 0.420818 | 28.949ms | 80000 | 30 | 1.3673e+07 | 160427 | 5.20482 | 1(Win) |
| std::from_chars | 366.915 | 0.296297 | 37.2941ms | 80000 | 30 | 1.13874e+07 | 207934 | 6.74651 | 2(Loss) |
| strtoll/strtoull | 225.338 | 0.198843 | 61.3216ms | 80000 | 30 | 1.35973e+07 | 338576 | 10.9855 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 441.843 | 0.150337 | 310.508ms | 800000 | 30 | 2.02162e+08 | 1.72672e+06 | 5.60285 | 1(Win) |
| std::from_chars | 367.366 | 0.245978 | 372.731ms | 800000 | 30 | 7.82883e+08 | 2.07678e+06 | 6.73885 | 2(Loss) |
| strtoll/strtoull | 224.07 | 0.0751569 | 613.487ms | 800000 | 30 | 1.96458e+08 | 3.40491e+06 | 11.0481 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 565.001 | 0.05125 | 0.280017ms | 800 | 30 | 14.3678 | 1350.33 | 4.26508 | 1(Win) |
| std::from_chars | 384.159 | 0.0428481 | 0.389747ms | 800 | 30 | 21.7241 | 1986 | 6.32342 | 2(Loss) |
| strtoll/strtoull | 180.536 | 0.01774 | 0.7992ms | 800 | 30 | 16.8609 | 4225.97 | 13.5872 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 566.328 | 2.46826 | 2.42807ms | 8000 | 30 | 3.31703e+06 | 13471.7 | 4.35998 | 1(Win) |
| std::from_chars | 385.789 | 1.23714 | 3.58572ms | 8000 | 30 | 1.79572e+06 | 19776.1 | 6.40532 | 2(Loss) |
| strtoll/strtoull | 172.316 | 0.537549 | 8.0879ms | 8000 | 30 | 1.69936e+06 | 44275.6 | 14.355 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 580.038 | 0.330991 | 23.8352ms | 80000 | 30 | 5.6862e+06 | 131533 | 4.26672 | 1(Win) |
| std::from_chars | 360.888 | 0.710429 | 38.3552ms | 80000 | 30 | 6.76705e+07 | 211406 | 6.85916 | 2(Loss) |
| strtoll/strtoull | 170.174 | 0.159717 | 81.1482ms | 80000 | 30 | 1.53822e+07 | 448328 | 14.5473 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 466.031 | 0.146075 | 294.781ms | 800000 | 30 | 1.71564e+08 | 1.6371e+06 | 5.31212 | 1(Win) |
| std::from_chars | 346.372 | 0.267707 | 413.336ms | 800000 | 30 | 1.04312e+09 | 2.20266e+06 | 7.14719 | 2(Loss) |
| strtoll/strtoull | 169.467 | 0.118567 | 810.779ms | 800000 | 30 | 8.54792e+08 | 4.50199e+06 | 14.6077 | 3(Loss) |
