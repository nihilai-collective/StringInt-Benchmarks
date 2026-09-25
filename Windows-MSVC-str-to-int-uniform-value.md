# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.51.36257.0 compiler).  

Latest Results: (Sep 25, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 5.000000% AND mean shift < 2.500000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [49d7727](https://github.com/nihilai-collective/benchmarksuite/commit/49d7727).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 147.248 | 0.609038 | 1.1963ms | 1000 | 30 | 46678.2 | 6476.67 | 20.5637 | 1(Win) |
| std::from_chars | 131.24 | 4.61271 | 8.659ms | 1000 | 30 | 3.37057e+06 | 7266.67 | 23.0607 | 2(Loss) |
| strtoll/strtoull | 73.4915 | 4.69135 | 5.4593ms | 1000 | 30 | 1.11184e+07 | 12976.7 | 41.3107 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 142.318 | 1.21669 | 12.2379ms | 10000 | 30 | 1.99416e+07 | 67010 | 21.3356 | 1(Win) |
| std::from_chars | 130.095 | 1.45713 | 67.0524ms | 10000 | 48 | 5.4767e+07 | 73306.2 | 23.3479 | 2(Loss) |
| strtoll/strtoull | 73.913 | 0.933545 | 23.4884ms | 10000 | 30 | 4.35262e+07 | 129027 | 41.1071 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 145.005 | 0.47993 | 119.394ms | 100000 | 30 | 2.9889e+08 | 657683 | 20.9521 | 1(Win) |
| std::from_chars | 127.622 | 1.80021 | 132.57ms | 100000 | 30 | 5.42891e+09 | 747263 | 23.803 | 2(Loss) |
| strtoll/strtoull | 72.4231 | 0.766196 | 234.278ms | 100000 | 30 | 3.05385e+09 | 1.31681e+06 | 41.9571 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 221.785 | 3.37285 | 0.0939ms | 100 | 30 | 6310.34 | 430 | 13.206 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 207.321 | 2.87345 | 0.276ms | 100 | 30 | 5241.38 | 460 | 14.5697 | 1(Tie) |
| strtoll/strtoull | 97.9802 | 1.38746 | 0.4348ms | 100 | 30 | 5471.26 | 973.333 | 30.2843 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 241.03 | 1.86821 | 1.6749ms | 1000 | 30 | 163920 | 3956.67 | 12.4853 | 1(Win) |
| std::from_chars | 226.885 | 0.743483 | 1.8519ms | 1000 | 30 | 29298.9 | 4203.33 | 13.3054 | 2(Loss) |
| strtoll/strtoull | 102.179 | 0.378662 | 11.8728ms | 1000 | 30 | 37471.3 | 9333.33 | 29.6935 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 242.83 | 0.567842 | 71.534ms | 100000 | 30 | 1.49201e+08 | 392733 | 12.5106 | 1(Win) |
| std::from_chars | 221.082 | 0.677612 | 78.1159ms | 100000 | 30 | 2.56317e+08 | 431367 | 13.7408 | 2(Loss) |
| strtoll/strtoull | 97.9105 | 0.319228 | 414.77ms | 100000 | 30 | 2.90045e+08 | 974027 | 31.0327 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 213.509 | 3.3489 | 0.0931ms | 100 | 30 | 6712.64 | 446.667 | 13.1663 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 204.359 | 3.45882 | 0.0996ms | 100 | 30 | 7816.09 | 466.667 | 14.3347 | 1(Tie) |
| strtoll/strtoull | 100.74 | 1.40845 | 0.1861ms | 100 | 30 | 5333.33 | 946.667 | 29.4533 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 259.703 | 0.568452 | 66.3398ms | 100000 | 30 | 1.30724e+08 | 367217 | 11.6987 | 1(Win) |
| std::from_chars | 218.803 | 0.497046 | 78.8444ms | 100000 | 30 | 1.40802e+08 | 435860 | 13.8837 | 2(Loss) |
| strtoll/strtoull | 101.909 | 0.453706 | 172.097ms | 100000 | 30 | 5.40806e+08 | 935807 | 29.8155 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 193.312 | 1.66455 | 0.1078ms | 100 | 30 | 2022.99 | 493.333 | 15.0023 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 188.225 | 2.30506 | 0.1075ms | 100 | 30 | 4091.95 | 506.667 | 15.535 | 1(Tie) |
| strtoll/strtoull | 92.8904 | 1.39583 | 0.2032ms | 100 | 30 | 6160.92 | 1026.67 | 32.4277 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 210.834 | 0.650686 | 0.8522ms | 1000 | 30 | 25988.5 | 4523.33 | 14.3 | 1(Win) |
| std::from_chars | 204.944 | 0.522684 | 2.0579ms | 1000 | 30 | 17747.1 | 4653.33 | 14.7516 | 2(Loss) |
| strtoll/strtoull | 95.019 | 0.329182 | 1.8393ms | 1000 | 30 | 32747.1 | 10036.7 | 31.8966 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 197.04 | 1.20417 | 8.8092ms | 10000 | 30 | 1.01903e+07 | 48400 | 15.4105 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 190.329 | 2.43916 | 20.9922ms | 10000 | 30 | 4.48117e+07 | 50106.7 | 15.9582 | 1(Tie) |
| strtoll/strtoull | 93.4578 | 1.04317 | 43.417ms | 10000 | 30 | 3.39936e+07 | 102043 | 32.5002 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 198.177 | 0.547572 | 87.3887ms | 100000 | 30 | 2.08304e+08 | 481223 | 15.3298 | 1(Win) |
| std::from_chars | 195.127 | 0.511864 | 88.7792ms | 100000 | 30 | 1.87758e+08 | 488747 | 15.5678 | 2(Loss) |
| strtoll/strtoull | 91.2896 | 0.438519 | 943.834ms | 100000 | 48 | 1.00734e+09 | 1.04467e+06 | 33.2744 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 218.399 | 1.89651 | 0.1901ms | 200 | 30 | 8229.89 | 873.333 | 13.584 | 1(Win) |
| std::from_chars | 192.015 | 1.59601 | 0.1967ms | 200 | 30 | 7540.23 | 993.333 | 15.4737 | 2(Loss) |
| strtoll/strtoull | 130.231 | 0.825536 | 1.3756ms | 200 | 48 | 7016.84 | 1464.58 | 22.8709 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 230.756 | 0.972172 | 15.0566ms | 20000 | 30 | 1.93715e+07 | 82656.7 | 13.1642 | 1(Win) |
| std::from_chars | 196.905 | 1.01838 | 17.6904ms | 20000 | 30 | 2.9194e+07 | 96866.7 | 15.4271 | 2(Loss) |
| strtoll/strtoull | 129.861 | 0.893959 | 63.247ms | 20000 | 30 | 5.17205e+07 | 146877 | 23.3977 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 229.638 | 0.401686 | 150.247ms | 200000 | 30 | 3.3394e+08 | 830590 | 13.2303 | 1(Win) |
| std::from_chars | 198.277 | 0.265941 | 174.61ms | 200000 | 30 | 1.96339e+08 | 961960 | 15.3244 | 2(Loss) |
| strtoll/strtoull | 125.768 | 0.485695 | 272.721ms | 200000 | 30 | 1.62768e+09 | 1.51656e+06 | 24.1597 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.68 | 3.7159 | 0.2841ms | 200 | 30 | 15413.8 | 610 | 9.3015 | 1(Win) |
| std::from_chars | 286.102 | 2.31189 | 0.14ms | 200 | 30 | 7126.44 | 666.667 | 10.3522 | 2(Loss) |
| strtoll/strtoull | 158.946 | 1.2635 | 0.2453ms | 200 | 30 | 6896.55 | 1200 | 18.659 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 350.938 | 1.79492 | 9.926ms | 20000 | 30 | 2.85502e+07 | 54350 | 8.65297 | 1(Win) |
| std::from_chars | 314.364 | 1.39014 | 10.8895ms | 20000 | 30 | 2.1342e+07 | 60673.3 | 9.65861 | 2(Loss) |
| strtoll/strtoull | 162.85 | 1.07807 | 21.2711ms | 20000 | 30 | 4.78301e+07 | 117123 | 18.6559 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 344.264 | 0.674754 | 99.1721ms | 200000 | 30 | 4.19266e+08 | 554037 | 8.82466 | 1(Win) |
| std::from_chars | 304.739 | 0.804716 | 563.253ms | 200000 | 48 | 1.21767e+09 | 625896 | 9.9671 | 2(Loss) |
| strtoll/strtoull | 159.8 | 0.802078 | 213.763ms | 200000 | 30 | 2.74955e+09 | 1.19359e+06 | 19.0118 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 326.974 | 2.4772 | 0.1127ms | 200 | 30 | 6264.37 | 583.333 | 9.17517 | 1(Win) |
| std::from_chars | 294.951 | 2.06186 | 0.3183ms | 200 | 30 | 5333.33 | 646.667 | 10.0153 | 2(Loss) |
| strtoll/strtoull | 167.802 | 0.893147 | 0.5314ms | 200 | 30 | 3091.95 | 1136.67 | 17.8263 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 353.104 | 1.72402 | 9.7623ms | 20000 | 30 | 2.60173e+07 | 54016.7 | 8.59961 | 1(Win) |
| std::from_chars | 305.436 | 1.52459 | 11.1463ms | 20000 | 30 | 2.71922e+07 | 62446.7 | 9.94176 | 2(Loss) |
| strtoll/strtoull | 168.251 | 0.792458 | 20.7059ms | 20000 | 30 | 2.42114e+07 | 113363 | 18.0566 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 355.824 | 0.507932 | 96.7493ms | 200000 | 30 | 2.22393e+08 | 536037 | 8.53616 | 1(Win) |
| std::from_chars | 309.048 | 0.556967 | 112.282ms | 200000 | 30 | 3.54478e+08 | 617170 | 9.83089 | 2(Loss) |
| strtoll/strtoull | 164.568 | 0.376915 | 208.863ms | 200000 | 30 | 5.72499e+08 | 1.159e+06 | 18.4617 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars STATISTICAL TIE | 430.229 | 2.7959 | 0.2057ms | 200 | 30 | 4609.2 | 443.333 | 6.92183 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 411.658 | 2.63488 | 0.0959ms | 200 | 30 | 4471.26 | 463.333 | 6.929 | 1(Tie) |
| strtoll/strtoull | 180.506 | 1.41198 | 0.215ms | 200 | 30 | 6678.16 | 1056.67 | 16.5665 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 499.306 | 0.508293 | 0.7144ms | 2000 | 30 | 11310.3 | 3820 | 6.03957 | 1(Win) |
| std::from_chars | 486.983 | 0.660178 | 0.7547ms | 2000 | 30 | 20057.5 | 3916.67 | 6.17548 | 2(Loss) |
| strtoll/strtoull | 186.995 | 1.80794 | 9.4964ms | 2000 | 48 | 1.63234e+06 | 10200 | 16.2058 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 480.521 | 1.75369 | 7.2198ms | 20000 | 30 | 1.45365e+07 | 39693.3 | 6.31133 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 478.232 | 2.1625 | 7.2305ms | 20000 | 30 | 2.23159e+07 | 39883.3 | 6.34663 | 1(Tie) |
| strtoll/strtoull | 183.953 | 1.3028 | 18.6029ms | 20000 | 30 | 5.47426e+07 | 103687 | 16.515 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 472.932 | 1.02212 | 72.3619ms | 200000 | 30 | 5.09791e+08 | 403303 | 6.42186 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 451.28 | 2.08613 | 74.4144ms | 200000 | 30 | 2.33223e+09 | 422653 | 6.73054 | 1(Tie) |
| strtoll/strtoull | 186.735 | 0.562657 | 184.888ms | 200000 | 30 | 9.90871e+08 | 1.02142e+06 | 16.271 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 356.514 | 1.80077 | 0.2062ms | 400 | 30 | 11137.9 | 1070 | 8.345 | 1(Win) |
| std::from_chars | 286.102 | 1.58114 | 0.2688ms | 400 | 30 | 13333.3 | 1333.33 | 10.4277 | 2(Loss) |
| strtoll/strtoull | 183.693 | 2.07387 | 0.4073ms | 400 | 30 | 55643.7 | 2076.67 | 16.3278 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 353.69 | 3.5851 | 9.6804ms | 4000 | 48 | 7.17659e+06 | 10785.4 | 8.57803 | 1(Win) |
| std::from_chars | 300.863 | 0.223963 | 11.8468ms | 4000 | 48 | 38705.7 | 12679.2 | 10.0706 | 2(Loss) |
| strtoll/strtoull | 182.988 | 2.60897 | 3.8313ms | 4000 | 30 | 8.8743e+06 | 20846.7 | 16.5768 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 362.821 | 1.30516 | 19.0916ms | 40000 | 30 | 5.64914e+07 | 105140 | 8.37313 | 1(Win) |
| std::from_chars | 292.805 | 0.882202 | 120.515ms | 40000 | 48 | 6.34075e+07 | 130281 | 10.3744 | 2(Loss) |
| strtoll/strtoull | 182.054 | 1.35284 | 87.8509ms | 40000 | 30 | 2.41064e+08 | 209537 | 16.6888 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 361.011 | 0.709409 | 188.904ms | 400000 | 30 | 1.68575e+09 | 1.05667e+06 | 8.41581 | 1(Win) |
| std::from_chars | 287.122 | 0.378638 | 239.352ms | 400000 | 30 | 7.59198e+08 | 1.3286e+06 | 10.583 | 2(Loss) |
| strtoll/strtoull | 178.799 | 0.437382 | 379.45ms | 400000 | 30 | 2.61237e+09 | 2.13352e+06 | 16.9939 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 461.455 | 2.31515 | 0.1636ms | 400 | 30 | 10988.5 | 826.667 | 6.38242 | 1(Win) |
| std::from_chars | 387.115 | 1.35091 | 0.9445ms | 400 | 48 | 8506.21 | 985.417 | 7.76406 | 2(Loss) |
| strtoll/strtoull | 218.399 | 0.856399 | 0.3443ms | 400 | 30 | 6712.64 | 1746.67 | 13.7907 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 512.04 | 0.449352 | 9.2338ms | 4000 | 30 | 33620.7 | 7450 | 5.9066 | 1(Win) |
| std::from_chars | 414.641 | 0.345696 | 1.763ms | 4000 | 30 | 30344.8 | 9200 | 7.30913 | 2(Loss) |
| strtoll/strtoull | 226.257 | 1.39189 | 3.0943ms | 4000 | 30 | 1.65214e+06 | 16860 | 13.4008 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 491.374 | 2.28601 | 13.9399ms | 40000 | 30 | 9.44878e+07 | 77633.3 | 6.1798 | 1(Win) |
| std::from_chars | 394.27 | 1.93358 | 17.3222ms | 40000 | 30 | 1.04997e+08 | 96753.3 | 7.7041 | 2(Loss) |
| strtoll/strtoull | 221.238 | 1.03764 | 155.899ms | 40000 | 48 | 1.53652e+08 | 172425 | 13.7322 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 490.138 | 0.441679 | 138.894ms | 400000 | 30 | 3.54502e+08 | 778290 | 6.19792 | 1(Win) |
| std::from_chars | 395.43 | 0.304486 | 173.325ms | 400000 | 30 | 2.58843e+08 | 964697 | 7.68246 | 2(Loss) |
| strtoll/strtoull | 222.928 | 0.231819 | 308.056ms | 400000 | 30 | 4.72072e+08 | 1.71118e+06 | 13.6309 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 508.626 | 2.37053 | 0.1446ms | 400 | 30 | 9482.76 | 750 | 5.97017 | 1(Win) |
| std::from_chars | 390.583 | 1.60458 | 1.2254ms | 400 | 30 | 7367.82 | 976.667 | 7.64825 | 2(Loss) |
| strtoll/strtoull | 226.056 | 0.487216 | 1.642ms | 400 | 48 | 3244.68 | 1687.5 | 13.1666 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 534.796 | 1.91139 | 12.8981ms | 40000 | 30 | 5.57656e+07 | 71330 | 5.68004 | 1(Win) |
| std::from_chars | 403.729 | 0.97284 | 17.3458ms | 40000 | 30 | 2.53481e+07 | 94486.7 | 7.52338 | 2(Loss) |
| strtoll/strtoull | 225.677 | 1.14863 | 30.0799ms | 40000 | 30 | 1.13091e+08 | 169033 | 13.4633 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 517.722 | 1.12433 | 306.653ms | 400000 | 30 | 2.05889e+09 | 736823 | 5.86837 | 1(Win) |
| std::from_chars | 399.865 | 0.356615 | 171.449ms | 400000 | 30 | 3.47228e+08 | 953997 | 7.59842 | 2(Loss) |
| strtoll/strtoull | 227.689 | 0.248052 | 303.399ms | 400000 | 30 | 5.18133e+08 | 1.6754e+06 | 13.3462 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 614.242 | 0.477603 | 5.9578ms | 4000 | 48 | 42229.6 | 6210.42 | 4.9293 | 1(Win) |
| vn::from_chars | 493.705 | 2.04204 | 1.4654ms | 4000 | 30 | 746851 | 7726.67 | 6.13051 | 2(Loss) |
| strtoll/strtoull | 249.544 | 3.35233 | 2.7401ms | 4000 | 30 | 7.87844e+06 | 15286.7 | 12.1372 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 705.255 | 2.25135 | 48.4348ms | 40000 | 48 | 7.11793e+07 | 54089.6 | 4.30609 | 1(Win) |
| std::from_chars | 601.814 | 1.52618 | 11.6413ms | 40000 | 30 | 2.80757e+07 | 63386.7 | 5.04622 | 2(Loss) |
| strtoll/strtoull | 254.274 | 0.980022 | 27.0586ms | 40000 | 30 | 6.48501e+07 | 150023 | 11.9489 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 714.296 | 0.652511 | 95.9869ms | 400000 | 30 | 3.64302e+08 | 534050 | 4.25333 | 1(Win) |
| std::from_chars | 593.216 | 0.548189 | 115.822ms | 400000 | 30 | 3.728e+08 | 643053 | 5.12126 | 2(Loss) |
| strtoll/strtoull | 250.878 | 0.394134 | 273.496ms | 400000 | 30 | 1.07746e+09 | 1.52054e+06 | 12.1115 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 820.954 | 1.68599 | 4.0239ms | 8000 | 30 | 736506 | 9293.33 | 3.69144 | 1(Win) |
| std::from_chars | 535.146 | 3.98545 | 2.5461ms | 8000 | 30 | 9.6853e+06 | 14256.7 | 5.66389 | 2(Loss) |
| strtoll/strtoull | 278.128 | 1.64259 | 23.3212ms | 8000 | 48 | 9.74517e+06 | 27431.2 | 10.9196 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 822.399 | 2.6908 | 16.3353ms | 80000 | 30 | 1.86939e+08 | 92770 | 3.69409 | 1(Win) |
| std::from_chars | 552.561 | 0.951497 | 25.3697ms | 80000 | 30 | 5.17793e+07 | 138073 | 5.49744 | 2(Loss) |
| strtoll/strtoull | 297.471 | 0.743584 | 234.458ms | 80000 | 48 | 1.74579e+08 | 256475 | 10.2144 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 834.845 | 1.57584 | 380.351ms | 800000 | 30 | 6.22177e+09 | 913870 | 3.63862 | 1(Win) |
| std::from_chars | 539.167 | 0.583334 | 592.87ms | 800000 | 30 | 2.04404e+09 | 1.41503e+06 | 5.63518 | 2(Loss) |
| strtoll/strtoull | 288.113 | 0.58528 | 473.2ms | 800000 | 30 | 7.20616e+09 | 2.64806e+06 | 10.5477 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1141.81 | 0.705619 | 121.046ms | 800000 | 30 | 6.66889e+08 | 668183 | 2.66054 | 1(Win) |
| std::from_chars | 697.821 | 0.417788 | 196.046ms | 800000 | 30 | 6.25929e+08 | 1.09332e+06 | 4.35333 | 2(Loss) |
| strtoll/strtoull | 339.695 | 0.361981 | 954.805ms | 800000 | 30 | 1.98287e+09 | 2.24595e+06 | 8.94482 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1138.72 | 1.91352 | 0.2973ms | 800 | 30 | 4931.03 | 670 | 2.57883 | 1(Win) |
| std::from_chars | 671.208 | 2.58251 | 0.2121ms | 800 | 30 | 25850.6 | 1136.67 | 4.42413 | 2(Loss) |
| strtoll/strtoull | 339.084 | 0.698678 | 1.0257ms | 800 | 30 | 7413.79 | 2250 | 8.85058 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1096.49 | 4.15236 | 12.723ms | 80000 | 30 | 2.50426e+08 | 69580 | 2.76928 | 1(Win) |
| std::from_chars | 679.558 | 2.25756 | 45.9629ms | 80000 | 30 | 1.92721e+08 | 112270 | 4.46823 | 2(Loss) |
| strtoll/strtoull | 344.743 | 0.924057 | 40.2542ms | 80000 | 30 | 1.25461e+08 | 221307 | 8.81284 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 1212.55 | 0.628765 | 113.447ms | 800000 | 30 | 4.69543e+08 | 629200 | 2.50491 | 1(Win) |
| std::from_chars | 709.333 | 0.209387 | 194.023ms | 800000 | 30 | 1.5216e+08 | 1.07557e+06 | 4.2833 | 2(Loss) |
| strtoll/strtoull | 341.666 | 0.339087 | 400.125ms | 800000 | 30 | 1.71997e+09 | 2.233e+06 | 8.89213 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 803.094 | 1.57592 | 0.1937ms | 800 | 30 | 6724.14 | 950 | 3.75667 | 1(Win) |
| std::from_chars | 628.796 | 1.23284 | 0.2345ms | 800 | 30 | 6712.64 | 1213.33 | 4.71108 | 2(Loss) |
| strtoll/strtoull | 308.466 | 0.579401 | 0.4654ms | 800 | 30 | 6160.92 | 2473.33 | 9.74437 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 822.761 | 1.37461 | 8.5445ms | 8000 | 48 | 779889 | 9272.92 | 3.68093 | 1(Win) |
| std::from_chars | 630.702 | 1.98476 | 14.467ms | 8000 | 30 | 1.7293e+06 | 12096.7 | 4.79966 | 2(Loss) |
| strtoll/strtoull | 304.81 | 0.363527 | 4.5607ms | 8000 | 30 | 248379 | 25030 | 9.96087 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 825.275 | 3.05472 | 16.7069ms | 80000 | 30 | 2.39247e+08 | 92446.7 | 3.67883 | 1(Win) |
| std::from_chars | 553.778 | 1.81648 | 25.3682ms | 80000 | 30 | 1.87886e+08 | 137770 | 5.48512 | 2(Loss) |
| strtoll/strtoull | 299.004 | 0.986469 | 45.778ms | 80000 | 30 | 1.9007e+08 | 255160 | 10.1608 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 772.858 | 0.962051 | 400.434ms | 800000 | 30 | 2.70582e+09 | 987167 | 3.93056 | 1(Win) |
| std::from_chars | 475.462 | 0.33638 | 287.581ms | 800000 | 30 | 8.74037e+08 | 1.60463e+06 | 6.38941 | 2(Loss) |
| strtoll/strtoull | 297.579 | 0.364861 | 463.582ms | 800000 | 30 | 2.62513e+09 | 2.56382e+06 | 10.2106 | 3(Loss) |
