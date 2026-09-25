# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Sep 25, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 10.000000% AND mean shift < 5.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [49d7727](https://github.com/nihilai-collective/benchmarksuite/commit/49d7727).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 116.872 | 7.09281 | 0.833024ms | 100 | 48 | 160790 | 816 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 108.504 | 7.34765 | 0.187136ms | 100 | 30 | 125121 | 878.933 | 1(Tie) |
| strtoll/strtoull | 63.8621 | 6.37112 | 0.79488ms | 100 | 30 | 271560 | 1493.33 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 113.842 | 3.42568 | 98.8652ms | 10000 | 30 | 2.47065e+08 | 83771.7 | 1(Win) |
| std::from_chars | 96.9118 | 2.98078 | 17.5429ms | 10000 | 30 | 2.58124e+08 | 98406.4 | 2(Loss) |
| strtoll/strtoull | 65.8605 | 3.08072 | 59.6631ms | 10000 | 30 | 5.97004e+08 | 144802 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 124.551 | 0.445352 | 137.334ms | 100000 | 30 | 3.48844e+08 | 765687 | 1(Win) |
| std::from_chars | 99.6662 | 1.64743 | 168.345ms | 100000 | 30 | 7.45482e+09 | 956868 | 2(Loss) |
| strtoll/strtoull | 67.7264 | 0.61836 | 255.615ms | 100000 | 30 | 2.27451e+09 | 1.40813e+06 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.479 | 4.40376 | 21.5411ms | 10000 | 30 | 1.67986e+08 | 53734.4 | 1(Win) |
| std::from_chars | 131.597 | 5.29796 | 70.8982ms | 10000 | 48 | 7.07565e+08 | 72469.3 | 2(Loss) |
| strtoll/strtoull | 99.1296 | 0.854379 | 113.275ms | 10000 | 30 | 2.02683e+07 | 96204.8 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 189.422 | 1.40755 | 6.68109ms | 1000 | 30 | 150657 | 5034.67 | 1(Win) |
| vn::from_chars | 105.932 | 1.00267 | 7.2791ms | 1000 | 30 | 244442 | 9002.67 | 2(Loss) |
| strtoll/strtoull | 99.4295 | 1.72515 | 1.87392ms | 1000 | 30 | 821385 | 9591.47 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 210.231 | 2.89321 | 8.42112ms | 10000 | 30 | 5.16758e+07 | 45363.2 | 1(Win) |
| std::from_chars | 170.52 | 3.18664 | 14.187ms | 10000 | 30 | 9.52881e+07 | 55927.5 | 2(Loss) |
| strtoll/strtoull | 102.729 | 0.677731 | 16.863ms | 10000 | 30 | 1.18755e+07 | 92834.1 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 162.275 | 0.969254 | 10.559ms | 10000 | 30 | 9.73405e+06 | 58769.1 | 1(Win) |
| std::from_chars | 149.791 | 2.57234 | 11.255ms | 10000 | 30 | 8.04653e+07 | 63667.2 | 2(Loss) |
| strtoll/strtoull | 87.4687 | 1.28438 | 23.83ms | 10000 | 30 | 5.88303e+07 | 109030 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 139.938 | 2.53317 | 280.941ms | 100000 | 30 | 8.94088e+09 | 681498 | 1(Win) |
| std::from_chars | 129.743 | 2.27206 | 644.381ms | 100000 | 48 | 1.3388e+10 | 735051 | 2(Loss) |
| strtoll/strtoull | 90.8607 | 0.352807 | 191.901ms | 100000 | 30 | 4.11381e+08 | 1.0496e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 196.068 | 6.23256 | 0.198144ms | 200 | 30 | 110281 | 972.8 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 178.814 | 6.61868 | 1.70906ms | 200 | 30 | 149528 | 1066.67 | 1(Tie) |
| strtoll/strtoull | 116.872 | 6.11865 | 1.68704ms | 200 | 48 | 478622 | 1632 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars STATISTICAL TIE | 187.044 | 2.06767 | 1.93101ms | 2000 | 30 | 1.3337e+06 | 10197.3 | 1(Tie) |
| vn::from_chars STATISTICAL TIE | 172.102 | 4.04613 | 9.63098ms | 2000 | 48 | 9.6518e+06 | 11082.7 | 1(Tie) |
| strtoll/strtoull | 98.3359 | 6.38287 | 22.06ms | 2000 | 30 | 4.59822e+07 | 19396.3 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 187.735 | 2.47417 | 18.615ms | 20000 | 30 | 1.89561e+08 | 101598 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 177.747 | 2.38341 | 19.298ms | 20000 | 30 | 1.96233e+08 | 107307 | 1(Tie) |
| strtoll/strtoull | 110.016 | 1.36199 | 156.617ms | 20000 | 48 | 2.67633e+08 | 173371 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 280.448 | 3.84833 | 2.88691ms | 2000 | 30 | 2.05504e+06 | 6801.07 | 1(Win) |
| std::from_chars | 190.552 | 4.13911 | 1.71802ms | 2000 | 30 | 5.14955e+06 | 10009.6 | 2(Loss) |
| strtoll/strtoull | 99.3687 | 5.30227 | 18.123ms | 2000 | 48 | 4.97195e+07 | 19194.7 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars STATISTICAL TIE | 261.853 | 3.99542 | 29.865ms | 20000 | 30 | 2.54093e+08 | 72840.5 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 247.5 | 3.13991 | 32.1531ms | 20000 | 30 | 1.75657e+08 | 77064.5 | 1(Tie) |
| strtoll/strtoull | 140.586 | 1.96195 | 24.8018ms | 20000 | 30 | 2.12556e+08 | 135671 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 214.679 | 3.99218 | 1185.53ms | 200000 | 30 | 3.77417e+10 | 888465 | 1(Win) |
| strtoll/strtoull | 158.416 | 0.311801 | 215.287ms | 200000 | 30 | 4.22802e+08 | 1.20401e+06 | 2(Loss) |
| std::from_chars | 131.32 | 3.85662 | 246.544ms | 200000 | 30 | 9.41311e+10 | 1.45244e+06 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 315.368 | 1.67968 | 5.57696ms | 2000 | 48 | 495355 | 6048 | 1(Win) |
| std::from_chars | 264.518 | 2.41384 | 1.35706ms | 2000 | 30 | 908841 | 7210.67 | 2(Loss) |
| strtoll/strtoull | 160.084 | 0.372801 | 12.2371ms | 2000 | 48 | 94701.8 | 11914.7 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 359.425 | 3.66128 | 1.26515ms | 400 | 48 | 72478.9 | 1061.33 | 1(Win) |
| std::from_chars | 266.092 | 6.38417 | 0.715008ms | 400 | 30 | 251297 | 1433.6 | 2(Loss) |
| strtoll/strtoull | 172.767 | 2.66563 | 2.12403ms | 400 | 48 | 166280 | 2208 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 352.273 | 2.01859 | 2.13606ms | 4000 | 30 | 1.43343e+06 | 10828.8 | 1(Win) |
| std::from_chars | 256.034 | 0.791896 | 6.74509ms | 4000 | 30 | 417623 | 14899.2 | 2(Loss) |
| strtoll/strtoull | 158.917 | 5.14184 | 4.29798ms | 4000 | 30 | 4.5702e+07 | 24004.3 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 366.783 | 0.561162 | 18.8191ms | 40000 | 30 | 1.02188e+07 | 104004 | 1(Win) |
| std::from_chars | 265.602 | 1.60638 | 204.233ms | 40000 | 30 | 1.59689e+08 | 143625 | 2(Loss) |
| strtoll/strtoull | 150.72 | 2.80467 | 45.835ms | 40000 | 30 | 1.5117e+09 | 253099 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 425.747 | 6.38877 | 0.18304ms | 400 | 30 | 98304 | 896 | 1(Win) |
| std::from_chars | 333.608 | 5.8532 | 0.23296ms | 400 | 30 | 134386 | 1143.47 | 2(Loss) |
| strtoll/strtoull | 194.363 | 3.82118 | 1.05702ms | 400 | 30 | 168736 | 1962.67 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 471.158 | 1.85232 | 14.806ms | 40000 | 30 | 6.74747e+07 | 80964.3 | 1(Win) |
| std::from_chars | 357.085 | 0.579305 | 48.298ms | 40000 | 30 | 1.14898e+07 | 106829 | 2(Loss) |
| strtoll/strtoull | 198.912 | 1.7162 | 34.3828ms | 40000 | 30 | 3.24981e+08 | 191778 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 460.861 | 9.91237 | 0.380928ms | 400 | 30 | 201956 | 827.733 | 1(Win) |
| std::from_chars | 336.116 | 5.99068 | 0.225024ms | 400 | 30 | 138680 | 1134.93 | 2(Loss) |
| strtoll/strtoull | 201.367 | 4.17898 | 0.355072ms | 400 | 30 | 188021 | 1894.4 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 514.602 | 0.168601 | 31.979ms | 40000 | 30 | 468620 | 74129.1 | 1(Win) |
| std::from_chars | 353.684 | 0.38554 | 101.266ms | 40000 | 48 | 8.2998e+06 | 107856 | 2(Loss) |
| strtoll/strtoull | 199.64 | 2.86792 | 81.441ms | 40000 | 30 | 9.00901e+08 | 191078 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 757.686 | 1.17764 | 0.724992ms | 800 | 30 | 4218.41 | 1006.93 | 1(Win) |
| std::from_chars | 415.846 | 3.78947 | 0.788992ms | 800 | 30 | 145008 | 1834.67 | 2(Loss) |
| strtoll/strtoull | 266.092 | 2.91606 | 0.53888ms | 800 | 30 | 209715 | 2867.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 794.729 | 1.55413 | 1.77997ms | 8000 | 30 | 667789 | 9600 | 1(Win) |
| std::from_chars | 399.495 | 2.56409 | 3.32109ms | 8000 | 30 | 7.19359e+06 | 19097.6 | 2(Loss) |
| strtoll/strtoull | 265.381 | 0.576222 | 5.27898ms | 8000 | 30 | 823268 | 28748.8 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 723.174 | 1.07483 | 98.2892ms | 80000 | 48 | 6.17188e+07 | 105499 | 1(Win) |
| std::from_chars | 401 | 1.20126 | 34.996ms | 80000 | 30 | 1.56705e+08 | 190259 | 2(Loss) |
| strtoll/strtoull | 247.117 | 0.96324 | 55.7599ms | 80000 | 30 | 2.65317e+08 | 308736 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 974.994 | 2.2221 | 1.41901ms | 8000 | 30 | 907033 | 7825.07 | 1(Win) |
| std::from_chars | 474.056 | 0.806169 | 2.92403ms | 8000 | 30 | 505004 | 16093.9 | 2(Loss) |
| strtoll/strtoull | 305.665 | 0.373703 | 4.48384ms | 8000 | 30 | 261014 | 24960 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1036.6 | 1.17508 | 32.5891ms | 80000 | 30 | 2.24393e+07 | 73600 | 1(Win) |
| std::from_chars | 471.431 | 0.527928 | 29.8949ms | 80000 | 30 | 2.18984e+07 | 161835 | 2(Loss) |
| strtoll/strtoull | 296.708 | 0.627864 | 46.3611ms | 80000 | 30 | 7.81943e+07 | 257135 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 742.814 | 0.974725 | 93.5539ms | 80000 | 48 | 4.81089e+07 | 102709 | 1(Win) |
| std::from_chars | 421.056 | 0.830758 | 90.54ms | 80000 | 30 | 6.79785e+07 | 181197 | 2(Loss) |
| strtoll/strtoull | 260.424 | 0.673935 | 269.598ms | 80000 | 48 | 1.87108e+08 | 292960 | 3(Loss) |
