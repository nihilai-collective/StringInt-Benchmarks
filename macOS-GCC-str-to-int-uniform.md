# str-to-int-uniform  
----

Performance profiling of libraries (Compiled and run on macOS 25.5.0 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 01, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 1200) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 103.361 | 1.95711 | 0.422912ms | 100 | 240 | 78258.2 | 922.667 | 1(Win) |
| std::from_chars | 95.8274 | 1.23382 | 0.468992ms | 100 | 240 | 36185.3 | 995.2 | 2(Loss) |
| strtoll/strtoull | 58.9756 | 2.07764 | 0.791808ms | 100 | 240 | 270900 | 1617.07 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 97.2872 | 1.11194 | 1.84499ms | 1000 | 120 | 1.42571e+06 | 9802.67 | 1(Win) |
| std::from_chars | 89.5682 | 1.92827 | 2.02701ms | 1000 | 120 | 5.05838e+06 | 10647.5 | 2(Loss) |
| strtoll/strtoull | 65.6921 | 0.795876 | 2.81907ms | 1000 | 120 | 1.60194e+06 | 14517.3 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 92.6036 | 0.999798 | 18.3278ms | 10000 | 120 | 1.27218e+08 | 102985 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 90.8294 | 0.660347 | 18.9668ms | 10000 | 120 | 5.76863e+07 | 104996 | 1(Tie) |
| strtoll/strtoull | 58.7053 | 0.565999 | 29.3399ms | 10000 | 120 | 1.01452e+08 | 162451 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 82.8591 | 1.77281 | 198.6ms | 100000 | 120 | 4.99602e+10 | 1.15096e+06 | 1(Win) |
| std::from_chars | 77.7955 | 1.74426 | 225.737ms | 100000 | 120 | 5.48648e+10 | 1.22587e+06 | 2(Loss) |
| strtoll/strtoull | 49.727 | 1.99005 | 328.288ms | 100000 | 120 | 1.74793e+11 | 1.91782e+06 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 140.268 | 1.07112 | 1.34298ms | 1000 | 120 | 636411 | 6798.93 | 1(Win) |
| vn::from_chars | 130.903 | 1.30442 | 1.36678ms | 1000 | 120 | 1.08371e+06 | 7285.33 | 2(Loss) |
| strtoll/strtoull | 83.6987 | 1.05423 | 2.10893ms | 1000 | 120 | 1.73147e+06 | 11394.1 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 150.239 | 0.660448 | 11.4381ms | 10000 | 120 | 2.10909e+07 | 63477.3 | 1(Win) |
| vn::from_chars | 128.828 | 0.987066 | 13.558ms | 10000 | 120 | 6.40692e+07 | 74026.7 | 2(Loss) |
| strtoll/strtoull | 88.2823 | 0.517214 | 19.6311ms | 10000 | 120 | 3.74607e+07 | 108026 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 160.328 | 0.131832 | 107.076ms | 100000 | 120 | 7.37912e+07 | 594827 | 1(Win) |
| vn::from_chars | 140.201 | 0.571021 | 122.277ms | 100000 | 120 | 1.81043e+09 | 680218 | 2(Loss) |
| strtoll/strtoull | 88.0577 | 0.396391 | 197.814ms | 100000 | 120 | 2.21153e+09 | 1.08301e+06 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 148.863 | 0.85838 | 1.2119ms | 1000 | 120 | 362885 | 6406.4 | 1(Win) |
| vn::from_chars | 103.678 | 1.56879 | 7.09299ms | 1000 | 480 | 9.99523e+06 | 9198.4 | 2(Loss) |
| strtoll/strtoull | 88.1204 | 1.98541 | 1.95891ms | 1000 | 120 | 5.54023e+06 | 10822.4 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 148.438 | 1.09263 | 11.721ms | 10000 | 120 | 5.91343e+07 | 64247.5 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 147.213 | 1.46599 | 28.8581ms | 10000 | 240 | 2.1646e+08 | 64781.9 | 1(Tie) |
| strtoll/strtoull | 81.2318 | 1.66371 | 21.151ms | 10000 | 120 | 4.57807e+08 | 117402 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 163.09 | 0.704612 | 104.524ms | 100000 | 120 | 2.03717e+09 | 584753 | 1(Win) |
| std::from_chars | 98.9869 | 2.15421 | 163.092ms | 100000 | 120 | 5.16893e+10 | 963435 | 2(Loss) |
| strtoll/strtoull | 60.4175 | 1.60649 | 634.371ms | 100000 | 240 | 1.54326e+11 | 1.57847e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 101.507 | 2.01457 | 1.42822ms | 100 | 300 | 107472 | 939.52 | 1(Win) |
| strtoll/strtoull | 68.1975 | 2.30792 | 0.61184ms | 100 | 240 | 249986 | 1398.4 | 2(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 106.437 | 1.43405 | 8.42906ms | 1000 | 480 | 7.92479e+06 | 8960 | 1(Win) |
| vn::from_chars | 101.071 | 1.27032 | 1.71213ms | 1000 | 120 | 1.72409e+06 | 9435.73 | 2(Loss) |
| strtoll/strtoull | 36.0454 | 0.596619 | 4.83891ms | 1000 | 120 | 2.99004e+06 | 26457.6 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 107.084 | 0.775217 | 15.478ms | 10000 | 120 | 5.71972e+07 | 89058.1 | 1(Win) |
| std::from_chars | 99.6245 | 1.62762 | 43.3659ms | 10000 | 240 | 5.82618e+08 | 95726.9 | 2(Loss) |
| strtoll/strtoull | 72.8675 | 1.42153 | 23.509ms | 10000 | 120 | 4.15361e+08 | 130878 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 118.941 | 0.24492 | 141.629ms | 100000 | 120 | 4.62774e+08 | 801807 | 1(Win) |
| std::from_chars | 104.999 | 1.21392 | 165.719ms | 100000 | 120 | 1.4588e+10 | 908273 | 2(Loss) |
| strtoll/strtoull | 77.0333 | 0.417962 | 229.193ms | 100000 | 120 | 3.21291e+09 | 1.238e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 171.606 | 1.89916 | 0.505856ms | 200 | 240 | 106937 | 1111.47 | 1(Win) |
| std::from_chars | 144.379 | 1.63095 | 1.32301ms | 200 | 480 | 222829 | 1321.07 | 2(Loss) |
| strtoll/strtoull | 123.49 | 2.11697 | 0.700928ms | 200 | 240 | 256587 | 1544.53 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 173.404 | 0.243154 | 2.00704ms | 2000 | 120 | 85839.3 | 10999.5 | 1(Win) |
| vn::from_chars | 143.834 | 1.87392 | 2.36698ms | 2000 | 120 | 7.41008e+06 | 13260.8 | 2(Loss) |
| strtoll/strtoull | 108.874 | 1.40043 | 3.1319ms | 2000 | 120 | 7.22299e+06 | 17518.9 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 175.818 | 0.376743 | 20.6538ms | 20000 | 120 | 2.00449e+07 | 108484 | 1(Win) |
| std::from_chars | 109.814 | 1.55469 | 71.7722ms | 20000 | 240 | 1.75003e+09 | 173690 | 2(Loss) |
| strtoll/strtoull | 103.892 | 1.08855 | 33.0721ms | 20000 | 120 | 4.7927e+08 | 183590 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 153.051 | 0.858751 | 221.588ms | 200000 | 120 | 1.37436e+10 | 1.24621e+06 | 1(Win) |
| std::from_chars | 114.254 | 0.765854 | 298.428ms | 200000 | 120 | 1.96153e+10 | 1.6694e+06 | 2(Loss) |
| strtoll/strtoull | 111.909 | 0.667161 | 308.375ms | 200000 | 120 | 1.55157e+10 | 1.70437e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 201.594 | 1.85911 | 0.443904ms | 200 | 240 | 74254.7 | 946.133 | 1(Win) |
| std::from_chars | 178.102 | 1.99603 | 0.487168ms | 200 | 240 | 109665 | 1070.93 | 2(Loss) |
| strtoll/strtoull | 143.51 | 2.37652 | 0.587008ms | 200 | 240 | 239435 | 1329.07 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 203.661 | 0.909581 | 1.69216ms | 2000 | 120 | 870784 | 9365.33 | 1(Win) |
| std::from_chars | 190.877 | 1.07875 | 1.78995ms | 2000 | 120 | 1.39436e+06 | 9992.53 | 2(Loss) |
| strtoll/strtoull | 120.219 | 1.48203 | 2.9161ms | 2000 | 120 | 6.63451e+06 | 15865.6 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 208.983 | 1.05558 | 16.278ms | 20000 | 120 | 1.11378e+08 | 91268.3 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 205.363 | 1.10377 | 16.5829ms | 20000 | 120 | 1.26111e+08 | 92876.8 | 1(Tie) |
| strtoll/strtoull | 143.753 | 0.413539 | 23.9649ms | 20000 | 120 | 3.61278e+07 | 132683 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.525 | 0.562293 | 181.813ms | 200000 | 120 | 3.43266e+09 | 951179 | 1(Win) |
| std::from_chars | 128.926 | 0.417189 | 656.993ms | 200000 | 240 | 9.14227e+09 | 1.47941e+06 | 2(Loss) |
| strtoll/strtoull | 125.335 | 0.331139 | 274.144ms | 200000 | 120 | 3.04734e+09 | 1.5218e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 204.009 | 1.64804 | 0.935936ms | 200 | 480 | 113956 | 934.933 | 1(Win) |
| std::from_chars | 190.633 | 1.94653 | 0.454912ms | 200 | 240 | 91032.9 | 1000.53 | 2(Loss) |
| strtoll/strtoull | 140.136 | 2.3296 | 0.62592ms | 200 | 240 | 241286 | 1361.07 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 210.172 | 1.5672 | 1.64096ms | 2000 | 120 | 2.42742e+06 | 9075.2 | 1(Win) |
| vn::from_chars | 197.891 | 0.991835 | 1.71008ms | 2000 | 120 | 1.09665e+06 | 9638.4 | 2(Loss) |
| strtoll/strtoull | 134.995 | 1.73504 | 2.58099ms | 2000 | 120 | 7.21149e+06 | 14129.1 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 222.102 | 0.796071 | 15.561ms | 20000 | 120 | 5.60844e+07 | 85877.3 | 1(Win) |
| vn::from_chars | 194.744 | 1.84335 | 17.505ms | 20000 | 120 | 3.91135e+08 | 97941.3 | 2(Loss) |
| strtoll/strtoull | 139.112 | 1.06826 | 24.3571ms | 20000 | 120 | 2.57435e+08 | 137109 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 208.379 | 0.287016 | 166.228ms | 200000 | 120 | 8.28216e+08 | 915326 | 1(Win) |
| std::from_chars | 191.933 | 0.985267 | 198.2ms | 200000 | 120 | 1.15041e+10 | 993760 | 2(Loss) |
| strtoll/strtoull | 142.319 | 0.343749 | 239.693ms | 200000 | 120 | 2.54681e+09 | 1.34019e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 170.787 | 2.1856 | 0.467968ms | 200 | 240 | 142990 | 1116.8 | 1(Win) |
| strtoll/strtoull | 141.916 | 2.27881 | 0.592128ms | 200 | 240 | 225126 | 1344 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.167 | 0.564103 | 1.65811ms | 2000 | 120 | 308607 | 8989.87 | 1(Win) |
| std::from_chars | 202.05 | 1.27834 | 1.71699ms | 2000 | 120 | 1.74751e+06 | 9440 | 2(Loss) |
| strtoll/strtoull | 135.856 | 1.16729 | 2.51802ms | 2000 | 120 | 3.22282e+06 | 14039.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 206.812 | 0.872191 | 16.564ms | 20000 | 120 | 7.76447e+07 | 92226.1 | 1(Win) |
| vn::from_chars | 200.226 | 0.538003 | 17.14ms | 20000 | 120 | 3.15187e+07 | 95259.7 | 2(Loss) |
| strtoll/strtoull | 135.025 | 0.695833 | 25.481ms | 20000 | 120 | 1.15937e+08 | 141259 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 206.165 | 0.696011 | 165.451ms | 200000 | 120 | 4.97559e+09 | 925156 | 1(Win) |
| std::from_chars | 169.017 | 1.7306 | 205.274ms | 200000 | 120 | 4.57694e+10 | 1.12849e+06 | 2(Loss) |
| strtoll/strtoull | 145.479 | 0.666845 | 239.818ms | 200000 | 120 | 9.17257e+09 | 1.31108e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 290.047 | 2.33927 | 0.595968ms | 400 | 240 | 227172 | 1315.2 | 1(Win) |
| vn::from_chars | 261.998 | 2.25507 | 0.641792ms | 400 | 240 | 258734 | 1456 | 2(Loss) |
| strtoll/strtoull | 181.721 | 1.61745 | 0.413184ms | 400 | 120 | 138342 | 2099.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 306.819 | 0.510403 | 2.2999ms | 4000 | 120 | 483241 | 12433.1 | 1(Win) |
| vn::from_chars | 225.377 | 1.2549 | 3.08096ms | 4000 | 120 | 5.41381e+06 | 16925.9 | 2(Loss) |
| strtoll/strtoull | 174.64 | 2.23625 | 3.85613ms | 4000 | 120 | 2.86323e+07 | 21843.2 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 298.735 | 0.63907 | 22.86ms | 40000 | 120 | 7.99146e+07 | 127695 | 1(Win) |
| vn::from_chars | 266.532 | 0.637377 | 25.632ms | 40000 | 120 | 9.98605e+07 | 143123 | 2(Loss) |
| strtoll/strtoull | 201.231 | 0.331001 | 34.145ms | 40000 | 120 | 4.72465e+07 | 189568 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 205.528 | 0.65999 | 344.755ms | 400000 | 120 | 1.80067e+10 | 1.85605e+06 | 1(Win) |
| strtoll/strtoull | 149.88 | 2.34732 | 427.5ms | 400000 | 120 | 4.28309e+11 | 2.54516e+06 | 2(Loss) |
| std::from_chars | 92.7489 | 1.51794 | 1414.21ms | 400000 | 240 | 9.35451e+11 | 4.11293e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 309.099 | 2.41472 | 0.537088ms | 400 | 240 | 213142 | 1234.13 | 1(Win) |
| vn::from_chars | 269.197 | 2.46579 | 1.32915ms | 400 | 480 | 586048 | 1417.07 | 2(Loss) |
| strtoll/strtoull | 235.747 | 2.20902 | 0.709888ms | 400 | 240 | 306647 | 1618.13 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 312.721 | 1.04774 | 2.2249ms | 4000 | 120 | 1.96019e+06 | 12198.4 | 1(Win) |
| std::from_chars | 297.169 | 1.39793 | 12.0051ms | 4000 | 480 | 1.54571e+07 | 12836.8 | 2(Loss) |
| strtoll/strtoull | 225.946 | 0.544541 | 3.0848ms | 4000 | 120 | 1.01427e+06 | 16883.2 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 396.404 | 0.557133 | 18.133ms | 40000 | 120 | 3.4494e+07 | 96232.5 | 1(Win) |
| vn::from_chars | 325.643 | 0.355444 | 21.0839ms | 40000 | 120 | 2.08046e+07 | 117143 | 2(Loss) |
| strtoll/strtoull | 250.506 | 0.202873 | 27.426ms | 40000 | 120 | 1.14528e+07 | 152279 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 314.531 | 0.641252 | 215.522ms | 400000 | 120 | 7.25826e+09 | 1.21282e+06 | 1(Win) |
| std::from_chars | 264.855 | 1.21192 | 274.957ms | 400000 | 120 | 3.65619e+10 | 1.44029e+06 | 2(Loss) |
| strtoll/strtoull | 239.703 | 0.647874 | 288.861ms | 400000 | 120 | 1.27566e+10 | 1.59143e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 370.983 | 2.33354 | 0.457216ms | 400 | 240 | 138183 | 1028.27 | 1(Win) |
| vn::from_chars | 317.496 | 2.48057 | 1.5721ms | 400 | 300 | 266481 | 1201.49 | 2(Loss) |
| strtoll/strtoull | 231.624 | 2.44823 | 0.719104ms | 400 | 240 | 390181 | 1646.93 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 345.334 | 1.14459 | 2.04314ms | 4000 | 120 | 1.91833e+06 | 11046.4 | 1(Win) |
| vn::from_chars | 284.962 | 2.34775 | 2.48704ms | 4000 | 120 | 1.18531e+07 | 13386.7 | 2(Loss) |
| strtoll/strtoull | 246.674 | 0.619981 | 2.83085ms | 4000 | 120 | 1.10309e+06 | 15464.5 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 363.244 | 0.799574 | 19.0221ms | 40000 | 120 | 8.46102e+07 | 105018 | 1(Win) |
| vn::from_chars | 330.165 | 0.330874 | 20.809ms | 40000 | 120 | 1.75374e+07 | 115539 | 2(Loss) |
| strtoll/strtoull | 248.989 | 0.227658 | 27.6649ms | 40000 | 120 | 1.45985e+07 | 153207 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 310.089 | 0.319026 | 221.885ms | 400000 | 120 | 1.84833e+09 | 1.23019e+06 | 1(Win) |
| strtoll/strtoull | 221.16 | 0.996064 | 305.436ms | 400000 | 120 | 3.54212e+10 | 1.72486e+06 | 2(Loss) |
| std::from_chars | 184.841 | 1.52116 | 815.407ms | 400000 | 240 | 2.36528e+11 | 2.06377e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 380.051 | 2.30745 | 0.440064ms | 400 | 240 | 128740 | 1003.73 | 1(Win) |
| vn::from_chars | 305.273 | 2.25279 | 1.18989ms | 400 | 480 | 380387 | 1249.6 | 2(Loss) |
| strtoll/strtoull | 183.164 | 1.09428 | 3.05101ms | 400 | 480 | 249310 | 2082.67 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 317.243 | 1.475 | 5.02502ms | 4000 | 240 | 7.54975e+06 | 12024.5 | 1(Win) |
| vn::from_chars | 287.76 | 1.277 | 2.5129ms | 4000 | 120 | 3.43891e+06 | 13256.5 | 2(Loss) |
| strtoll/strtoull | 243.749 | 0.66722 | 2.94912ms | 4000 | 120 | 1.30844e+06 | 15650.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 413.596 | 0.235319 | 16.6459ms | 40000 | 120 | 5.65282e+06 | 92232.5 | 1(Win) |
| vn::from_chars | 297.443 | 1.61069 | 22.1158ms | 40000 | 120 | 5.12054e+08 | 128250 | 2(Loss) |
| strtoll/strtoull | 248.882 | 0.206043 | 27.6472ms | 40000 | 120 | 1.19683e+07 | 153274 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 307.402 | 0.619412 | 223.823ms | 400000 | 120 | 7.09003e+09 | 1.24095e+06 | 1(Win) |
| strtoll/strtoull STATISTICAL TIE | 232.831 | 0.706079 | 292.74ms | 400000 | 120 | 1.60594e+10 | 1.6384e+06 | 2(Tie) |
| std::from_chars STATISTICAL TIE | 230.055 | 2.35941 | 265.776ms | 400000 | 120 | 1.83673e+11 | 1.65817e+06 | 2(Tie) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 432.44 | 2.20445 | 0.363008ms | 800 | 120 | 181514 | 1764.27 | 1(Win) |
| std::from_chars | 369.164 | 1.79025 | 1.92ms | 800 | 480 | 657063 | 2066.67 | 2(Loss) |
| strtoll/strtoull | 329.307 | 1.82538 | 0.432128ms | 800 | 120 | 214617 | 2316.8 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 482.108 | 0.426792 | 2.87386ms | 8000 | 120 | 547400 | 15825.1 | 1(Win) |
| std::from_chars | 402.1 | 2.42926 | 3.57402ms | 8000 | 120 | 2.54943e+07 | 18973.9 | 2(Loss) |
| strtoll/strtoull | 280.647 | 2.30072 | 4.81203ms | 8000 | 120 | 4.69428e+07 | 27185.1 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 468.142 | 1.14008 | 29.2508ms | 80000 | 120 | 4.14261e+08 | 162972 | 1(Win) |
| vn::from_chars | 443.267 | 1.79415 | 30.0851ms | 80000 | 120 | 1.14432e+09 | 172117 | 2(Loss) |
| strtoll/strtoull | 329.882 | 0.413053 | 41.6189ms | 80000 | 120 | 1.09511e+08 | 231277 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 89.509 | 2.09727 | 3262.97ms | 800000 | 240 | 7.66947e+12 | 8.5236e+06 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 85.5357 | 2.1275 | 3894.01ms | 800000 | 240 | 8.64245e+12 | 8.91954e+06 | 1(Tie) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 487.896 | 2.3142 | 1.57389ms | 800 | 480 | 628594 | 1563.73 | 1(Win) |
| strtoll/strtoull | 319.168 | 2.43515 | 1.06112ms | 800 | 240 | 813212 | 2390.4 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 484.919 | 1.27526 | 2.8672ms | 8000 | 120 | 4.83082e+06 | 15733.3 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 474.182 | 1.66339 | 3.01082ms | 8000 | 120 | 8.59529e+06 | 16089.6 | 1(Tie) |
| strtoll/strtoull | 305.482 | 0.752965 | 4.44698ms | 8000 | 120 | 4.24364e+06 | 24974.9 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 497.957 | 0.405799 | 27.6549ms | 80000 | 120 | 4.63874e+07 | 153214 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 493.212 | 0.430396 | 27.9741ms | 80000 | 120 | 5.31902e+07 | 154688 | 1(Tie) |
| strtoll/strtoull | 330.18 | 0.546807 | 42.25ms | 80000 | 120 | 1.9157e+08 | 231068 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 487.257 | 0.905225 | 282.746ms | 800000 | 120 | 2.41079e+10 | 1.56579e+06 | 1(Win) |
| strtoll/strtoull | 231.304 | 2.02548 | 926.02ms | 800000 | 120 | 5.35612e+11 | 3.29842e+06 | 2(Loss) |
| std::from_chars | 142.018 | 1.65945 | 2010.06ms | 800000 | 240 | 1.90736e+12 | 5.37212e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 500.879 | 1.75491 | 1.45792ms | 800 | 480 | 342976 | 1523.2 | 1(Win) |
| strtoll/strtoull | 288.177 | 2.03747 | 2.42688ms | 800 | 480 | 1.39664e+06 | 2647.47 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.367 | 1.3646 | 2.77402ms | 8000 | 120 | 5.23693e+06 | 15308.8 | 1(Win) |
| std::from_chars | 461.217 | 1.81089 | 7.70202ms | 8000 | 240 | 2.1536e+07 | 16541.9 | 2(Loss) |
| strtoll/strtoull | 330.494 | 1.11458 | 4.08704ms | 8000 | 120 | 7.94435e+06 | 23084.8 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 530 | 0.557572 | 26.0308ms | 80000 | 120 | 7.73058e+07 | 143951 | 1(Win) |
| std::from_chars | 503.177 | 1.17578 | 27.103ms | 80000 | 120 | 3.81393e+08 | 151625 | 2(Loss) |
| strtoll/strtoull | 299.165 | 1.24602 | 48.8988ms | 80000 | 120 | 1.21169e+09 | 255023 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 60.0382 | 1.4899 | 9864.65ms | 800000 | 480 | 1.7206e+13 | 1.27076e+07 | 1(Win) |
| std::from_chars | 56.2298 | 1.89786 | 9856.47ms | 800000 | 480 | 3.18287e+13 | 1.35682e+07 | 2(Loss) |
| strtoll/strtoull | 52.4581 | 2.1246 | 6221.89ms | 800000 | 240 | 2.29149e+13 | 1.45438e+07 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 570.835 | 2.26387 | 0.749056ms | 800 | 240 | 219723 | 1336.53 | 1(Win) |
| vn::from_chars | 493.791 | 2.24003 | 1.46893ms | 800 | 480 | 574965 | 1545.07 | 2(Loss) |
| strtoll/strtoull | 343.213 | 1.72924 | 0.436992ms | 800 | 120 | 177314 | 2222.93 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 505.338 | 2.42242 | 2.67213ms | 8000 | 120 | 1.60508e+07 | 15097.6 | 1(Win) |
| vn::from_chars | 479.33 | 1.15493 | 2.8969ms | 8000 | 120 | 4.05515e+06 | 15916.8 | 2(Loss) |
| strtoll/strtoull | 330.052 | 1.12323 | 9.92998ms | 8000 | 240 | 1.61794e+07 | 23115.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 469.5 | 0.634927 | 29.3409ms | 80000 | 120 | 1.27743e+08 | 162500 | 1(Win) |
| std::from_chars | 428.164 | 1.08423 | 32.8159ms | 80000 | 120 | 4.47903e+08 | 178189 | 2(Loss) |
| strtoll/strtoull | 351.757 | 0.376707 | 39.4168ms | 80000 | 120 | 8.01092e+07 | 216894 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 87.6333 | 2.45686 | 1567.4ms | 800000 | 120 | 5.49016e+12 | 8.70605e+06 | 1(Win) |
| std::from_chars | 62.6184 | 2.44984 | 9334.52ms | 800000 | 480 | 4.27653e+13 | 1.21839e+07 | 2(Loss) |
| strtoll/strtoull | 58.1168 | 2.04107 | 6143.84ms | 800000 | 240 | 1.72308e+13 | 1.31277e+07 | 3(Loss) |
