# int-to-str-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Sep 27, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. Every epoch after the first is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result. A result counts as converged only if that retained epoch has RSE < 10.000000% AND mean shift < 5.000000%; non-converged results are excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [343f572](https://github.com/nihilai-collective/benchmarksuite/commit/343f572).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 544.496 | 2.60018 | 6.048ms | 2646 | 30 | 435475 | 4633.6 | 1(Win) |
| jeaiii::to_text | 394.934 | 2.22812 | 7.95494ms | 2650 | 48 | 976068 | 6400 | 2(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 569.631 | 0.661547 | 53.8309ms | 26479 | 48 | 4.1283e+06 | 44330.7 | 1(Win) |
| jeaiii::to_text | 397.279 | 0.798418 | 76.277ms | 26479 | 48 | 1.23625e+07 | 63562.7 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 522.862 | 0.554315 | 610.803ms | 264863 | 30 | 2.15131e+08 | 483098 | 1(Win) |
| jeaiii::to_text | 335.48 | 0.948069 | 928.003ms | 264863 | 30 | 1.52866e+09 | 752930 | 2(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2547.66 | 2.70692 | 14.059ms | 31436 | 30 | 3.04396e+06 | 11767.5 | 1(Win) |
| jeaiii::to_text | 859.359 | 1.11624 | 42.5029ms | 31450 | 48 | 7.28519e+06 | 34901.3 | 2(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2677.23 | 0.769148 | 136.162ms | 314430 | 48 | 3.56237e+07 | 112005 | 1(Win) |
| jeaiii::to_text | 858.849 | 0.383521 | 434.636ms | 314457 | 30 | 5.38005e+07 | 349175 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1275.1 | 4.12197 | 18.24ms | 21478 | 48 | 2.10454e+07 | 16064 | 1(Win) |
| jeaiii::to_text | 550.575 | 1.76607 | 43.265ms | 21494 | 30 | 1.29702e+07 | 37230.9 | 2(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2562.39 | 2.54527 | 11.678ms | 25702 | 30 | 1.77844e+06 | 9565.87 | 1(Win) |
| jeaiii::to_text | 611.443 | 1.11108 | 48.459ms | 25709 | 30 | 5.95466e+06 | 40098.1 | 2(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 753.472 | 1.47539 | 7.95904ms | 5164 | 30 | 279018 | 6536.53 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 732.154 | 1.29103 | 9.21702ms | 5169 | 30 | 226664 | 6732.8 | 1(Tie) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 723.255 | 0.393885 | 83.8728ms | 51598 | 30 | 2.15448e+06 | 68036.3 | 1(Win) |
| vn::to_chars | 698.294 | 1.12167 | 87.7138ms | 51598 | 30 | 1.8743e+07 | 70468.3 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1471.42 | 2.39667 | 4.48102ms | 5661 | 30 | 232013 | 3669.33 | 1(Win) |
| jeaiii::to_text | 1384.28 | 1.68568 | 4.81818ms | 5661 | 30 | 129641 | 3899.73 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1458.58 | 1.55018 | 44.3871ms | 56603 | 30 | 9.87417e+06 | 37009.1 | 1(Win) |
| jeaiii::to_text | 1400.91 | 0.321258 | 49.4771ms | 56609 | 30 | 459807 | 38536.5 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1208.16 | 0.228528 | 46.2218ms | 46614 | 30 | 212126 | 36795.7 | 1(Win) |
| jeaiii::to_text | 956.764 | 1.08878 | 59.945ms | 46609 | 48 | 1.22817e+07 | 46458.7 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2092.15 | 3.41862 | 2.79782ms | 4830 | 30 | 169942 | 2201.6 | 1(Win) |
| jeaiii::to_text | 1826.33 | 3.00622 | 3.07789ms | 4831 | 48 | 276059 | 2522.67 | 2(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1867.47 | 0.306669 | 31.4609ms | 48302 | 48 | 274664 | 24666.7 | 1(Win) |
| vn::to_chars | 1674.96 | 1.15836 | 34.9839ms | 48304 | 30 | 3.04486e+06 | 27502.9 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1117.54 | 6.1454 | 1.0839ms | 1000 | 48 | 132002 | 853.333 | 1(Win) |
| jeaiii::to_text | 977.085 | 2.42683 | 1.24902ms | 1000 | 48 | 26929 | 976 | 2(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 1101.46 | 1.27229 | 10.4919ms | 9985 | 48 | 580731 | 8645.33 | 1(Tie) |
| vn::to_chars STATISTICAL TIE | 1065.31 | 2.12984 | 10.9432ms | 9985 | 48 | 1.73973e+06 | 8938.67 | 1(Tie) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1170.28 | 0.55062 | 99.979ms | 99804 | 30 | 6.01643e+06 | 81331.2 | 1(Win) |
| jeaiii::to_text | 988.337 | 1.37583 | 124.98ms | 99815 | 48 | 8.42855e+07 | 96314.7 | 2(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1031.57 | 0.335445 | 2945.95ms | 998317 | 30 | 2.87542e+08 | 922931 | 1(Win) |
| vn::to_chars | 211.043 | 7.00574 | 4755.04ms | 998196 | 48 | 4.79337e+12 | 4.51072e+06 | 2(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1380.99 | 4.9654 | 8.70298ms | 10479 | 30 | 3.8731e+06 | 7236.27 | 1(Win) |
| vn::to_chars | 1199.62 | 4.82639 | 8.86989ms | 10487 | 30 | 4.85727e+06 | 8337.07 | 2(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1831.2 | 0.459056 | 66.1711ms | 104833 | 30 | 1.88442e+06 | 54596.3 | 1(Win) |
| jeaiii::to_text | 1564.07 | 0.867004 | 76.2591ms | 104823 | 48 | 1.47396e+07 | 63914.7 | 2(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1710.13 | 1.23375 | 6.48499ms | 9487 | 48 | 204510 | 5290.67 | 1(Win) |
| jeaiii::to_text | 1376.39 | 3.80701 | 8.20019ms | 9483 | 30 | 1.87719e+06 | 6570.67 | 2(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1628.57 | 1.25326 | 67.6659ms | 94822 | 30 | 1.4528e+07 | 55526.4 | 1(Win) |
| jeaiii::to_text | 1454.07 | 0.621998 | 77.1681ms | 94836 | 30 | 4.49027e+06 | 62199.5 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2630.96 | 2.60925 | 4.34509ms | 9746 | 30 | 254912 | 3532.8 | 1(Win) |
| jeaiii::to_text | 2110.58 | 2.81288 | 5.85114ms | 9738 | 48 | 735276 | 4400 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2662.22 | 1.18623 | 42.2029ms | 97405 | 30 | 5.1396e+06 | 34892.8 | 1(Win) |
| jeaiii::to_text | 2423.38 | 1.11888 | 52.095ms | 97405 | 30 | 5.51828e+06 | 38331.7 | 2(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2311.29 | 3.36213 | 9.17376ms | 19378 | 30 | 2.16804e+06 | 7995.73 | 1(Win) |
| jeaiii::to_text | 2019.62 | 1.83889 | 11.095ms | 19381 | 48 | 1.35952e+06 | 9152 | 2(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4889.56 | 1.65634 | 4.81997ms | 19879 | 48 | 197973 | 3877.33 | 1(Win) |
| jeaiii::to_text | 2904.17 | 1.14404 | 7.89914ms | 19879 | 48 | 267722 | 6528 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4700.77 | 3.53614 | 50.6179ms | 198784 | 30 | 6.10106e+07 | 40328.5 | 1(Win) |
| jeaiii::to_text | 2895.77 | 0.234869 | 81.174ms | 198789 | 30 | 709295 | 65467.7 | 2(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5022.96 | 2.12675 | 4.3479ms | 18877 | 48 | 278877 | 3584 | 1(Win) |
| jeaiii::to_text | 2874.81 | 1.489 | 7.79597ms | 18881 | 30 | 260939 | 6263.47 | 2(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4990.51 | 1.4185 | 43.2602ms | 188804 | 48 | 1.25729e+07 | 36080 | 1(Win) |
| jeaiii::to_text | 2596.79 | 1.14531 | 86.966ms | 188804 | 48 | 3.0272e+07 | 69338.7 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2970.46 | 1.35562 | 7.57197ms | 19403 | 30 | 213934 | 6229.33 | 1(Win) |
| jeaiii::to_text | 2546.97 | 1.2703 | 8.94387ms | 19394 | 30 | 255289 | 7261.87 | 2(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2961.53 | 0.745177 | 75.9291ms | 193958 | 48 | 1.03979e+07 | 62458.7 | 1(Win) |
| jeaiii::to_text | 2488.52 | 0.608442 | 93.1889ms | 193958 | 48 | 9.81782e+06 | 74330.7 | 2(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1618.9 | 3.00797 | 5681.14ms | 1939723 | 30 | 3.5441e+10 | 1.14266e+06 | 1(Win) |
| vn::to_chars | 333.454 | 1.47497 | 5214.3ms | 1939723 | 30 | 2.0086e+11 | 5.54759e+06 | 2(Loss) |
