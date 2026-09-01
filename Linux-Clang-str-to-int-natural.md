# str-to-int-natural  
----

Performance profiling of libraries (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 146.06 | 1.00062 | 0.133804ms | 100 | 120 | 5122.2 | 652.933 | 20.1852 | 1(Win) |
| std::from_chars | 124.985 | 0.87211 | 0.151748ms | 100 | 120 | 5313.86 | 763.033 | 23.7387 | 2(Loss) |
| strtoll/strtoull | 89.1597 | 0.35028 | 0.513096ms | 100 | 240 | 3369.02 | 1069.62 | 33.471 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 144.245 | 0.542851 | 1.26333ms | 1000 | 120 | 154577 | 6611.51 | 20.9921 | 1(Win) |
| std::from_chars | 128.137 | 0.993512 | 3.19353ms | 1000 | 240 | 1.31223e+06 | 7442.61 | 23.6453 | 2(Loss) |
| strtoll/strtoull | 89.7532 | 0.825309 | 1.93823ms | 1000 | 120 | 922815 | 10625.5 | 33.7886 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 151.35 | 1.13704 | 11.4938ms | 10000 | 120 | 6.15985e+07 | 63011.2 | 20.0382 | 1(Win) |
| std::from_chars | 127.059 | 0.563212 | 13.6628ms | 10000 | 120 | 2.14444e+07 | 75057.7 | 23.8923 | 2(Loss) |
| strtoll/strtoull | 88.7845 | 0.390065 | 19.3601ms | 10000 | 120 | 2.10659e+07 | 107414 | 34.2171 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 146.06 | 0.487674 | 117.016ms | 100000 | 120 | 1.21669e+09 | 652935 | 20.7966 | 1(Win) |
| std::from_chars | 123.349 | 0.40555 | 138.503ms | 100000 | 120 | 1.17977e+09 | 773150 | 24.6284 | 2(Loss) |
| strtoll/strtoull | 86.0344 | 0.288849 | 520.384ms | 100000 | 240 | 2.46042e+09 | 1.10848e+06 | 35.313 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 241.055 | 1.61163 | 0.08578ms | 100 | 120 | 4878.4 | 395.625 | 11.9666 | 1(Win) |
| std::from_chars | 201.619 | 1.05143 | 0.097238ms | 100 | 120 | 2968.09 | 473.008 | 14.4627 | 2(Loss) |
| strtoll/strtoull | 119.751 | 0.842457 | 0.15751ms | 100 | 120 | 5401.58 | 796.383 | 24.7763 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 249.847 | 0.80813 | 0.734605ms | 1000 | 120 | 114182 | 3817.03 | 12.0896 | 1(Win) |
| std::from_chars | 214.585 | 0.683102 | 0.822021ms | 1000 | 120 | 110599 | 4444.27 | 14.0815 | 2(Loss) |
| strtoll/strtoull | 123.295 | 0.687437 | 3.28527ms | 1000 | 240 | 678552 | 7734.87 | 24.5844 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 250.492 | 1.4953 | 6.91707ms | 10000 | 120 | 3.88912e+07 | 38072 | 12.116 | 1(Win) |
| std::from_chars | 216.122 | 0.458772 | 8.047ms | 10000 | 120 | 4.91789e+06 | 44126.7 | 14.0498 | 2(Loss) |
| strtoll/strtoull | 121.908 | 0.9453 | 14.0937ms | 10000 | 120 | 6.56233e+07 | 78229.1 | 24.9144 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 248.116 | 0.352149 | 69.5378ms | 100000 | 120 | 2.19848e+08 | 384366 | 12.2397 | 1(Win) |
| std::from_chars | 221.086 | 0.274912 | 78.0547ms | 100000 | 120 | 1.68751e+08 | 431359 | 13.7364 | 2(Loss) |
| strtoll/strtoull | 122.411 | 0.281246 | 140.88ms | 100000 | 120 | 5.76122e+08 | 779076 | 24.8199 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 238.091 | 2.12064 | 0.088408ms | 100 | 120 | 8658.22 | 400.55 | 12.1732 | 1(Win) |
| std::from_chars | 214.546 | 1.4755 | 0.094176ms | 100 | 120 | 5162 | 444.508 | 13.5889 | 2(Loss) |
| strtoll/strtoull | 123.909 | 0.863157 | 0.154273ms | 100 | 120 | 5296.11 | 769.658 | 23.9296 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 255.561 | 1.55248 | 0.682915ms | 1000 | 120 | 402760 | 3731.69 | 11.818 | 1(Win) |
| std::from_chars | 218.713 | 0.695056 | 0.804548ms | 1000 | 120 | 110223 | 4360.4 | 13.8235 | 2(Loss) |
| strtoll/strtoull | 130.145 | 0.770927 | 1.33713ms | 1000 | 120 | 382957 | 7327.76 | 23.2843 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 277.514 | 0.793344 | 6.29135ms | 10000 | 120 | 8.91935e+06 | 34364.9 | 10.9378 | 1(Win) |
| std::from_chars | 221.057 | 0.611898 | 7.84534ms | 10000 | 120 | 8.36239e+06 | 43141.6 | 13.7342 | 2(Loss) |
| strtoll/strtoull | 129.994 | 0.436712 | 13.2223ms | 10000 | 120 | 1.23175e+07 | 73362.8 | 23.3687 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 255.64 | 1.0593 | 66.5496ms | 100000 | 120 | 1.87396e+09 | 373054 | 11.8801 | 1(Win) |
| std::from_chars | 213.365 | 0.59113 | 79.6981ms | 100000 | 120 | 8.37728e+08 | 446969 | 14.2333 | 2(Loss) |
| strtoll/strtoull | 127.296 | 0.361789 | 134.594ms | 100000 | 120 | 8.81577e+08 | 749177 | 23.865 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 205.87 | 2.07667 | 0.098948ms | 100 | 120 | 11105.3 | 463.242 | 14.1787 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 204.512 | 1.49099 | 0.101921ms | 100 | 120 | 5800.89 | 466.317 | 14.1715 | 1(Tie) |
| strtoll/strtoull | 102.132 | 0.687 | 0.184537ms | 100 | 120 | 4938.23 | 933.767 | 29.1393 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 216.89 | 0.555311 | 0.821452ms | 1000 | 120 | 71544.4 | 4397.04 | 13.9411 | 1(Win) |
| std::from_chars | 202.119 | 0.676105 | 0.852215ms | 1000 | 120 | 122122 | 4718.38 | 14.9655 | 2(Loss) |
| strtoll/strtoull | 108.484 | 1.16527 | 1.58675ms | 1000 | 120 | 1.25923e+06 | 8790.89 | 27.9531 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 205.162 | 0.961212 | 8.5083ms | 10000 | 120 | 2.39566e+07 | 46484 | 14.7967 | 1(Win) |
| std::from_chars | 191.255 | 0.888419 | 8.92772ms | 10000 | 120 | 2.355e+07 | 49864 | 15.8695 | 2(Loss) |
| strtoll/strtoull | 109.21 | 0.464413 | 77.226ms | 10000 | 240 | 3.94725e+07 | 87324.7 | 27.8078 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 199.63 | 0.549425 | 85.9663ms | 100000 | 120 | 8.26696e+08 | 477721 | 15.2126 | 1(Win) |
| std::from_chars | 190.162 | 0.463291 | 89.5857ms | 100000 | 120 | 6.478e+08 | 501506 | 15.9715 | 2(Loss) |
| strtoll/strtoull | 105.652 | 0.273244 | 162.027ms | 100000 | 120 | 7.3001e+08 | 902656 | 28.7557 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 248.137 | 0.789632 | 0.162564ms | 200 | 120 | 4420.86 | 768.667 | 11.9013 | 1(Win) |
| std::from_chars | 215.141 | 0.613636 | 0.185218ms | 200 | 120 | 3551.54 | 886.558 | 13.8022 | 2(Loss) |
| strtoll/strtoull | 142.313 | 0.45179 | 0.255067ms | 200 | 120 | 4399.74 | 1340.25 | 21.0682 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 251.061 | 1.53101 | 1.35375ms | 2000 | 120 | 1.62345e+06 | 7597.14 | 12.06 | 1(Win) |
| std::from_chars | 213.206 | 0.752164 | 1.6144ms | 2000 | 120 | 543334 | 8946.02 | 14.217 | 2(Loss) |
| strtoll/strtoull | 141.556 | 0.63424 | 2.41301ms | 2000 | 120 | 876383 | 13474.2 | 21.4357 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 252.017 | 0.246966 | 70.0853ms | 20000 | 240 | 8.38465e+06 | 75683.3 | 12.0531 | 1(Win) |
| std::from_chars | 199.618 | 1.38031 | 17.212ms | 20000 | 120 | 2.08736e+08 | 95550.1 | 15.2167 | 2(Loss) |
| strtoll/strtoull | 144.954 | 0.378874 | 23.9084ms | 20000 | 120 | 2.98243e+07 | 131583 | 20.9602 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 241.186 | 0.363619 | 143.062ms | 200000 | 120 | 9.92274e+08 | 790821 | 12.5948 | 1(Win) |
| std::from_chars | 200.883 | 0.48876 | 171.848ms | 200000 | 120 | 2.58431e+09 | 949480 | 15.1198 | 2(Loss) |
| strtoll/strtoull | 142.084 | 0.421717 | 246.958ms | 200000 | 120 | 3.84586e+09 | 1.34241e+06 | 21.3828 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 408.82 | 0.848147 | 0.10062ms | 200 | 120 | 1878.97 | 466.55 | 7.14254 | 1(Win) |
| std::from_chars | 355.462 | 0.666552 | 0.112394ms | 200 | 120 | 1535.05 | 536.583 | 8.23267 | 2(Loss) |
| strtoll/strtoull | 180.205 | 0.597568 | 0.207225ms | 200 | 120 | 4800.47 | 1058.43 | 16.5443 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 427.976 | 1.06452 | 2.02125ms | 2000 | 240 | 540185 | 4456.68 | 7.06184 | 1(Win) |
| std::from_chars | 376.12 | 0.199222 | 2.27759ms | 2000 | 240 | 24496 | 5071.12 | 8.04277 | 2(Loss) |
| strtoll/strtoull | 177.196 | 2.14235 | 1.92147ms | 2000 | 120 | 6.38139e+06 | 10764.1 | 17.1179 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 396.211 | 0.939182 | 8.64438ms | 20000 | 120 | 2.45294e+07 | 48139.7 | 7.65896 | 1(Win) |
| std::from_chars | 349.432 | 0.409418 | 10.1231ms | 20000 | 120 | 5.99307e+06 | 54584.2 | 8.68941 | 2(Loss) |
| strtoll/strtoull | 178.698 | 1.34979 | 18.9612ms | 20000 | 120 | 2.49078e+08 | 106736 | 16.9937 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 345.839 | 0.947011 | 98.3343ms | 200000 | 120 | 3.27344e+09 | 551514 | 8.77894 | 1(Win) |
| std::from_chars | 329.256 | 0.507974 | 104.096ms | 200000 | 120 | 1.0391e+09 | 579291 | 9.22557 | 2(Loss) |
| strtoll/strtoull | 178.985 | 0.335179 | 191.51ms | 200000 | 120 | 1.53094e+09 | 1.06564e+06 | 16.9753 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 404.335 | 1.47637 | 0.101653ms | 200 | 120 | 5820.34 | 471.725 | 7.22708 | 1(Win) |
| std::from_chars | 350.589 | 1.48221 | 0.115021ms | 200 | 120 | 7803.08 | 544.042 | 8.36712 | 2(Loss) |
| strtoll/strtoull | 190.202 | 0.365176 | 0.458629ms | 200 | 240 | 3218.44 | 1002.8 | 15.6854 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 378.057 | 0.818001 | 2.35605ms | 2000 | 240 | 408755 | 5045.13 | 7.99962 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 376.943 | 0.880004 | 0.899643ms | 2000 | 120 | 237935 | 5060.04 | 8.02382 | 1(Tie) |
| strtoll/strtoull | 193.774 | 0.555154 | 4.21867ms | 2000 | 240 | 716651 | 9843.16 | 15.6521 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 379.104 | 2.35453 | 8.92513ms | 20000 | 120 | 1.68396e+08 | 50312 | 7.98954 | 1(Win) |
| std::from_chars | 353.179 | 0.777363 | 9.89148ms | 20000 | 120 | 2.11494e+07 | 54005.1 | 8.59715 | 2(Loss) |
| strtoll/strtoull | 195.836 | 0.559879 | 17.7241ms | 20000 | 120 | 3.56816e+07 | 97395.2 | 15.5133 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 372.794 | 1.15271 | 92.7425ms | 200000 | 120 | 4.17392e+09 | 511636 | 8.14596 | 1(Win) |
| std::from_chars | 330.096 | 0.576516 | 106.922ms | 200000 | 120 | 1.33163e+09 | 577817 | 9.20274 | 2(Loss) |
| strtoll/strtoull | 186.844 | 0.406937 | 184.214ms | 200000 | 120 | 2.0708e+09 | 1.02082e+06 | 16.261 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 486.155 | 1.74184 | 0.08675ms | 200 | 120 | 5604.12 | 392.333 | 5.95333 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 473.004 | 1.57916 | 0.088712ms | 200 | 120 | 4865.9 | 403.242 | 6.13075 | 1(Tie) |
| strtoll/strtoull | 200.569 | 0.489689 | 0.186324ms | 200 | 120 | 2602.27 | 950.967 | 14.8513 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 517.826 | 0.28338 | 1.66727ms | 2000 | 240 | 26148.3 | 3683.38 | 5.83259 | 1(Win) |
| vn::from_chars | 492.456 | 0.898807 | 0.690556ms | 2000 | 120 | 145425 | 3873.13 | 6.13492 | 2(Loss) |
| strtoll/strtoull | 202.323 | 0.577614 | 1.69414ms | 2000 | 120 | 355819 | 9427.27 | 14.9906 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 524.674 | 0.801487 | 6.59838ms | 20000 | 120 | 1.01872e+07 | 36353.1 | 5.7832 | 1(Win) |
| std::from_chars | 491.811 | 0.448381 | 7.05383ms | 20000 | 120 | 3.62859e+06 | 38782.1 | 6.16765 | 2(Loss) |
| strtoll/strtoull | 206.042 | 0.538994 | 17.1ms | 20000 | 120 | 2.98745e+07 | 92571.1 | 14.7438 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 459.727 | 0.479268 | 178.418ms | 200000 | 240 | 9.48918e+08 | 414888 | 6.60546 | 1(Win) |
| std::from_chars | 439.346 | 0.766928 | 77.6516ms | 200000 | 120 | 1.33026e+09 | 434134 | 6.91112 | 2(Loss) |
| strtoll/strtoull | 198.778 | 0.356298 | 172.418ms | 200000 | 120 | 1.4026e+09 | 959539 | 15.2851 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 406.76 | 1.17288 | 0.198612ms | 400 | 120 | 14518.8 | 937.825 | 7.32535 | 1(Win) |
| std::from_chars | 307.529 | 0.607723 | 0.242779ms | 400 | 120 | 6819.29 | 1240.43 | 9.71623 | 2(Loss) |
| strtoll/strtoull | 209.395 | 1.0023 | 0.776622ms | 400 | 240 | 80018.5 | 1821.77 | 14.3648 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 402.923 | 0.583561 | 4.07177ms | 4000 | 240 | 732590 | 9467.57 | 7.52325 | 1(Win) |
| std::from_chars | 294.596 | 0.755501 | 2.41751ms | 4000 | 120 | 1.14847e+06 | 12948.9 | 10.2961 | 2(Loss) |
| strtoll/strtoull | 221.331 | 1.58171 | 3.09387ms | 4000 | 120 | 8.91813e+06 | 17235.3 | 13.7126 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 400.587 | 0.756275 | 17.2449ms | 40000 | 120 | 6.22395e+07 | 95227.6 | 7.5773 | 1(Win) |
| std::from_chars | 297.888 | 0.6893 | 23.2595ms | 40000 | 120 | 9.35002e+07 | 128058 | 10.1964 | 2(Loss) |
| strtoll/strtoull | 223.284 | 0.443495 | 30.8899ms | 40000 | 120 | 6.88911e+07 | 170845 | 13.6076 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 365.081 | 0.584311 | 188.552ms | 400000 | 120 | 4.47312e+09 | 1.04489e+06 | 8.31667 | 1(Win) |
| std::from_chars | 274.414 | 0.486278 | 249.796ms | 400000 | 120 | 5.48352e+09 | 1.39013e+06 | 11.0691 | 2(Loss) |
| strtoll/strtoull | 218.719 | 0.517321 | 313.743ms | 400000 | 120 | 9.76899e+09 | 1.74411e+06 | 13.8907 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 544.73 | 1.41796 | 0.144961ms | 400 | 120 | 11832.2 | 700.292 | 5.421 | 1(Win) |
| std::from_chars | 403.825 | 0.825743 | 0.189228ms | 400 | 120 | 7301.39 | 944.642 | 7.3675 | 2(Loss) |
| strtoll/strtoull | 275.785 | 0.492949 | 0.265605ms | 400 | 120 | 5579.13 | 1383.22 | 10.8689 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 526.637 | 0.958771 | 1.37661ms | 4000 | 120 | 578772 | 7243.5 | 5.75387 | 1(Win) |
| std::from_chars | 393.975 | 1.75592 | 4.15904ms | 4000 | 240 | 6.9375e+06 | 9682.58 | 7.68247 | 2(Loss) |
| strtoll/strtoull | 281.157 | 0.386437 | 12.4602ms | 4000 | 480 | 1.31954e+06 | 13567.9 | 10.789 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 537.842 | 0.858571 | 30.09ms | 40000 | 240 | 8.89969e+07 | 70926 | 5.63644 | 1(Win) |
| std::from_chars | 409.223 | 0.862449 | 16.726ms | 40000 | 120 | 7.7562e+07 | 93218.2 | 7.41589 | 2(Loss) |
| strtoll/strtoull | 277.512 | 0.695818 | 24.8768ms | 40000 | 120 | 1.09781e+08 | 137460 | 10.946 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 483.345 | 0.480254 | 143.945ms | 400000 | 120 | 1.72397e+09 | 789229 | 6.28228 | 1(Win) |
| std::from_chars | 362.016 | 0.454302 | 190.569ms | 400000 | 120 | 2.75001e+09 | 1.05374e+06 | 8.3869 | 2(Loss) |
| strtoll/strtoull | 266.887 | 0.323259 | 258.067ms | 400000 | 120 | 2.56181e+09 | 1.42933e+06 | 11.3829 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 519.46 | 1.73886 | 0.147739ms | 400 | 120 | 19567 | 734.358 | 5.70269 | 1(Win) |
| std::from_chars | 425.601 | 0.513373 | 0.179475ms | 400 | 120 | 2540.75 | 896.308 | 6.98752 | 2(Loss) |
| strtoll/strtoull | 273.934 | 1.09576 | 0.267296ms | 400 | 120 | 27940.7 | 1392.56 | 10.9439 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 537.076 | 1.01338 | 1.3298ms | 4000 | 120 | 621694 | 7102.71 | 5.63859 | 1(Win) |
| std::from_chars | 388.645 | 0.949266 | 1.77351ms | 4000 | 120 | 1.04177e+06 | 9815.38 | 7.7978 | 2(Loss) |
| strtoll/strtoull | 290.739 | 1.78185 | 2.38157ms | 4000 | 120 | 6.55899e+06 | 13120.7 | 10.4358 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 571.656 | 0.939922 | 12.0145ms | 40000 | 120 | 4.7208e+07 | 66730.6 | 5.30732 | 1(Win) |
| std::from_chars | 422.29 | 0.874283 | 16.1584ms | 40000 | 120 | 7.48487e+07 | 90333.6 | 7.18756 | 2(Loss) |
| strtoll/strtoull | 273.789 | 0.701192 | 25.1291ms | 40000 | 120 | 1.14536e+08 | 139330 | 11.0941 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 510.68 | 0.505753 | 135ms | 400000 | 120 | 1.7127e+09 | 746984 | 5.94603 | 1(Win) |
| std::from_chars | 366.482 | 0.577054 | 187.997ms | 400000 | 120 | 4.32941e+09 | 1.0409e+06 | 8.28497 | 2(Loss) |
| strtoll/strtoull | 272.74 | 0.33422 | 252.282ms | 400000 | 120 | 2.62223e+09 | 1.39866e+06 | 11.1391 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 656.283 | 2.13316 | 0.120269ms | 400 | 120 | 18448.8 | 581.258 | 4.48581 | 1(Win) |
| std::from_chars | 537.556 | 0.777445 | 0.347129ms | 400 | 240 | 7305.06 | 709.638 | 5.49984 | 2(Loss) |
| strtoll/strtoull | 297.397 | 0.237185 | 0.587735ms | 400 | 240 | 2221.43 | 1282.7 | 10.0763 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 688.088 | 1.93629 | 1.01508ms | 4000 | 120 | 1.38279e+06 | 5543.91 | 4.39451 | 1(Win) |
| std::from_chars | 523.127 | 1.52051 | 3.20769ms | 4000 | 240 | 2.95052e+06 | 7292.11 | 5.78043 | 2(Loss) |
| strtoll/strtoull | 277.436 | 2.33689 | 2.44353ms | 4000 | 120 | 1.23895e+07 | 13749.8 | 10.9377 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 763.959 | 0.669013 | 21.7548ms | 40000 | 240 | 2.67831e+07 | 49933.3 | 3.97287 | 1(Win) |
| std::from_chars | 533.974 | 1.43956 | 12.7827ms | 40000 | 120 | 1.26916e+08 | 71439.8 | 5.67889 | 2(Loss) |
| strtoll/strtoull | 283.564 | 1.5247 | 24.2893ms | 40000 | 120 | 5.04856e+08 | 134527 | 10.7113 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 648.399 | 0.607113 | 107.65ms | 400000 | 120 | 1.53093e+09 | 588325 | 4.68276 | 1(Win) |
| std::from_chars | 475.494 | 0.594811 | 145.609ms | 400000 | 120 | 2.73256e+09 | 802261 | 6.38645 | 2(Loss) |
| strtoll/strtoull | 277.76 | 0.439912 | 247.681ms | 400000 | 120 | 4.38021e+09 | 1.37338e+06 | 10.9376 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 807.03 | 1.42576 | 0.194982ms | 800 | 120 | 21800.9 | 945.367 | 3.69284 | 1(Win) |
| std::from_chars | 541.921 | 0.868527 | 0.274833ms | 800 | 120 | 17941.4 | 1407.84 | 5.52267 | 2(Loss) |
| strtoll/strtoull | 359.754 | 0.937696 | 0.409018ms | 800 | 120 | 47454.1 | 2120.72 | 8.37432 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 930.203 | 0.723631 | 1.5808ms | 8000 | 120 | 422708 | 8201.86 | 3.25694 | 1(Win) |
| std::from_chars | 530.361 | 0.588944 | 2.66631ms | 8000 | 120 | 861321 | 14385.3 | 5.71818 | 2(Loss) |
| strtoll/strtoull | 368.205 | 1.63494 | 3.73489ms | 8000 | 120 | 1.37717e+07 | 20720.5 | 8.24397 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 884.476 | 1.10824 | 15.5215ms | 80000 | 120 | 1.09663e+08 | 86258.9 | 3.43019 | 1(Win) |
| std::from_chars | 517.922 | 0.660475 | 26.4849ms | 80000 | 120 | 1.13591e+08 | 147308 | 5.86349 | 2(Loss) |
| strtoll/strtoull | 364.208 | 0.930204 | 38.8529ms | 80000 | 120 | 4.55637e+08 | 209479 | 8.34149 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 791.238 | 0.507413 | 175.707ms | 800000 | 120 | 2.87256e+09 | 964235 | 3.83822 | 1(Win) |
| std::from_chars | 513.036 | 0.399211 | 268.06ms | 800000 | 120 | 4.22932e+09 | 1.48711e+06 | 5.91817 | 2(Loss) |
| strtoll/strtoull | 355.183 | 0.500391 | 388.584ms | 800000 | 120 | 1.38636e+10 | 2.14802e+06 | 8.55367 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1108.19 | 1.86748 | 0.147048ms | 800 | 120 | 19835.7 | 688.458 | 2.66827 | 1(Win) |
| std::from_chars | 697.954 | 0.964745 | 0.215901ms | 800 | 120 | 13345.4 | 1093.11 | 4.27573 | 2(Loss) |
| strtoll/strtoull | 332.175 | 0.500488 | 0.435377ms | 800 | 120 | 15856.8 | 2296.8 | 9.07008 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1187.22 | 1.92043 | 1.2162ms | 8000 | 120 | 1.82767e+06 | 6426.27 | 2.54416 | 1(Win) |
| std::from_chars | 665.973 | 1.49935 | 2.10843ms | 8000 | 120 | 3.54043e+06 | 11456 | 4.5479 | 2(Loss) |
| strtoll/strtoull | 351.678 | 1.52708 | 3.97918ms | 8000 | 120 | 1.31703e+07 | 21694.3 | 8.63225 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1163.55 | 1.09663 | 11.7388ms | 80000 | 120 | 6.20457e+07 | 65569.8 | 2.60712 | 1(Win) |
| std::from_chars | 671.338 | 0.679906 | 20.4932ms | 80000 | 120 | 7.16436e+07 | 113645 | 4.52286 | 2(Loss) |
| strtoll/strtoull | 353.704 | 0.316978 | 38.9341ms | 80000 | 120 | 5.6097e+07 | 215700 | 8.58954 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1021.33 | 0.667114 | 136.914ms | 800000 | 120 | 2.98009e+09 | 747006 | 2.97218 | 1(Win) |
| std::from_chars | 654.637 | 0.505804 | 211.381ms | 800000 | 120 | 4.16989e+09 | 1.16544e+06 | 4.63848 | 2(Loss) |
| strtoll/strtoull | 337.233 | 0.348679 | 410.151ms | 800000 | 120 | 7.4671e+09 | 2.26235e+06 | 9.00665 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1136.85 | 2.05552 | 0.146414ms | 800 | 120 | 22834.9 | 671.1 | 2.60043 | 1(Win) |
| std::from_chars | 678.963 | 1.18136 | 0.227316ms | 800 | 120 | 21146.4 | 1123.68 | 4.39843 | 2(Loss) |
| strtoll/strtoull | 359.795 | 0.317187 | 0.404802ms | 800 | 120 | 5428.52 | 2120.48 | 8.36171 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1206.34 | 1.09235 | 1.19546ms | 8000 | 120 | 572722 | 6324.41 | 2.50917 | 1(Win) |
| std::from_chars | 717.293 | 0.423085 | 2.02668ms | 8000 | 120 | 243010 | 10636.4 | 4.22516 | 2(Loss) |
| strtoll/strtoull | 415.618 | 2.45125 | 3.57485ms | 8000 | 120 | 2.42968e+07 | 18356.7 | 7.29255 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1232.15 | 1.12463 | 11.0578ms | 80000 | 120 | 5.81906e+07 | 61919.2 | 2.46122 | 1(Win) |
| std::from_chars | 707.685 | 0.427933 | 19.5326ms | 80000 | 120 | 2.55407e+07 | 107808 | 4.29008 | 2(Loss) |
| strtoll/strtoull | 457.456 | 1.12109 | 31.6189ms | 80000 | 120 | 4.19508e+08 | 166779 | 6.64213 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1079.11 | 0.74466 | 128.843ms | 800000 | 120 | 3.32619e+09 | 707009 | 2.81314 | 1(Win) |
| std::from_chars | 642.823 | 2.06007 | 213.155ms | 800000 | 120 | 7.17367e+10 | 1.18686e+06 | 4.72352 | 2(Loss) |
| strtoll/strtoull | 424.557 | 1.01123 | 322.575ms | 800000 | 120 | 3.96271e+10 | 1.79702e+06 | 7.15289 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 776.944 | 1.69684 | 0.199636ms | 800 | 120 | 33316.8 | 981.975 | 3.83669 | 1(Win) |
| std::from_chars | 547.751 | 0.941978 | 0.269163ms | 800 | 120 | 20657.5 | 1392.86 | 5.46335 | 2(Loss) |
| strtoll/strtoull | 333.982 | 0.341021 | 0.430443ms | 800 | 120 | 7282.47 | 2284.38 | 9.02879 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 827.561 | 1.52321 | 1.72962ms | 8000 | 120 | 2.36638e+06 | 9219.13 | 3.65629 | 1(Win) |
| std::from_chars | 620.3 | 0.890728 | 2.27424ms | 8000 | 120 | 1.44028e+06 | 12299.5 | 4.8834 | 2(Loss) |
| strtoll/strtoull | 332.551 | 0.650601 | 4.17434ms | 8000 | 120 | 2.67345e+06 | 22942 | 9.12493 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 866.255 | 0.931502 | 15.812ms | 80000 | 120 | 8.07675e+07 | 88073.3 | 3.50356 | 1(Win) |
| std::from_chars | 614.868 | 0.694132 | 22.4257ms | 80000 | 120 | 8.90189e+07 | 124082 | 4.93751 | 2(Loss) |
| strtoll/strtoull | 325.103 | 0.83506 | 42.1397ms | 80000 | 120 | 4.60844e+08 | 234676 | 9.34315 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int-natural/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 755.998 | 0.618602 | 178.697ms | 800000 | 120 | 4.67672e+09 | 1.00918e+06 | 4.01698 | 1(Win) |
| std::from_chars | 562.862 | 0.356921 | 242.236ms | 800000 | 120 | 2.80868e+09 | 1.35546e+06 | 5.39504 | 2(Loss) |
| strtoll/strtoull | 318.13 | 0.292726 | 429.977ms | 800000 | 120 | 5.91393e+09 | 2.3982e+06 | 9.54946 | 3(Loss) |
