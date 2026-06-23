# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 626.739 | 1.39334 | 0.867072ms | 2675 | 30 | 96496.1 | 4070.4 | 1(Win) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1220.52 | 0.645719 | 5.80096ms | 26538 | 30 | 537847 | 20736 | 1(Win) |
| std::to_chars | 464.43 | 0.500488 | 10.85ms | 26538 | 30 | 2.23154e+06 | 54493.9 | 2(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 393.873 | 0.368545 | 617.799ms | 264546 | 48 | 2.67494e+08 | 640539 | 1(Win) |
| fmt::format_to | 352.312 | 1.54959 | 129.045ms | 264546 | 30 | 3.69405e+09 | 716100 | 2(Loss) |
| vn::to_chars | 330.941 | 1.63692 | 315.423ms | 264546 | 30 | 4.67172e+09 | 762342 | 3(Loss) |
| std::to_chars | 244.839 | 0.517378 | 194.699ms | 264546 | 30 | 8.52663e+08 | 1.03043e+06 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 745.058 | 0.583152 | 0.75392ms | 3120 | 30 | 16271 | 3993.6 | 1(Win) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1439.36 | 0.633899 | 9.13587ms | 31541 | 30 | 526473 | 20898.1 | 1(Win) |
| jeaiii::to_text | 1126.55 | 1.26742 | 13.8939ms | 31541 | 30 | 3.43567e+06 | 26700.8 | 2(Loss) |
| std::to_chars | 614.644 | 1.8173 | 9.29894ms | 31541 | 30 | 2.37289e+07 | 48938.7 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to **STATISTICAL TIE** | 793.389 | 1.54055 | 181.654ms | 314832 | 30 | 1.01967e+09 | 378436 | 1(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 776.578 | 0.581584 | 79.7601ms | 314832 | 30 | 1.51682e+08 | 386628 | 1(Tie) |
| vn::to_chars | 687.278 | 1.87536 | 183.989ms | 314832 | 30 | 2.01365e+09 | 436864 | 3(Loss) |
| std::to_chars | 508.06 | 0.4749 | 112.28ms | 314832 | 30 | 2.36294e+08 | 590967 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 503.38 | 1.528 | 0.745984ms | 2162 | 30 | 117513 | 4096 | 1(Win) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1135.98 | 0.475442 | 3.86586ms | 21559 | 30 | 222144 | 18099.2 | 1(Win) |
| jeaiii::to_text | 706.985 | 0.476763 | 10.304ms | 21559 | 30 | 576717 | 29081.6 | 2(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 581.822 | 1.68917 | 62.0111ms | 215437 | 30 | 1.0674e+09 | 353126 | 1(Win) |
| fmt::format_to **STATISTICAL TIE** | 528.653 | 1.72372 | 178.372ms | 215437 | 30 | 1.34634e+09 | 388642 | 2(Tie) |
| jeaiii::to_text **STATISTICAL TIE** | 506.99 | 2.44674 | 377.038ms | 215437 | 48 | 4.71908e+09 | 405248 | 2(Tie) |
| std::to_chars | 329.998 | 1.26912 | 116.827ms | 215437 | 30 | 1.87303e+09 | 622601 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 620.802 | 0.965886 | 0.793088ms | 2583 | 30 | 44067.3 | 3968 | 1(Win) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1000.2 | 0.475247 | 11.616ms | 25766 | 30 | 408960 | 24567.5 | 1(Win) |
| jeaiii::to_text | 926.504 | 0.418062 | 5.69907ms | 25766 | 30 | 368809 | 26521.6 | 2(Loss) |
| std::to_chars | 457.62 | 0.390692 | 61.0181ms | 25766 | 48 | 2.11249e+06 | 53696 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 638.502 | 0.552211 | 183.646ms | 256849 | 30 | 1.34637e+08 | 383633 | 1(Win) |
| vn::to_chars | 512.683 | 2.14491 | 205.131ms | 256849 | 30 | 3.15064e+09 | 477781 | 2(Loss) |
| fmt::format_to | 447.146 | 1.76516 | 522.979ms | 256849 | 48 | 4.48812e+09 | 547808 | 3(Loss) |
| std::to_chars | 336.547 | 0.360795 | 131.523ms | 256849 | 30 | 2.06874e+08 | 727834 | 4(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1091.62 | 2.44172 | 50.3181ms | 51683 | 48 | 5.83427e+07 | 45152 | 1(Win) |
| jeaiii::to_text | 944.47 | 0.388083 | 56.193ms | 51683 | 48 | 1.96884e+06 | 52186.7 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 660.058 | 1.04395 | 326.752ms | 516341 | 30 | 1.81966e+09 | 746027 | 1(Win) |
| fmt::format_to | 585.404 | 1.68822 | 363.486ms | 516341 | 30 | 6.04979e+09 | 841165 | 2(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1801.16 | 0.699866 | 0.632064ms | 5673 | 30 | 13257.9 | 3003.73 | 1(Win) |
| std::to_chars | 1124.13 | 1.45168 | 1.10899ms | 5673 | 30 | 146439 | 4812.8 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2142.02 | 0.37491 | 26.921ms | 56661 | 48 | 429354 | 25226.7 | 1(Win) |
| jeaiii::to_text | 1423 | 0.197499 | 7.28218ms | 56661 | 30 | 168736 | 37973.3 | 2(Loss) |
| std::to_chars | 992.066 | 0.317638 | 35.551ms | 56661 | 30 | 897994 | 54468.3 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1296.25 | 2.36292 | 195.199ms | 566015 | 30 | 2.90466e+09 | 416427 | 1(Win) |
| std::to_chars | 686.416 | 2.32018 | 782.658ms | 566015 | 48 | 1.59795e+10 | 786395 | 2(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2208.54 | 0.883463 | 0.509952ms | 4644 | 30 | 9416.09 | 2005.33 | 1(Win) |
| std::to_chars | 916.974 | 1.51914 | 0.976896ms | 4644 | 30 | 161505 | 4829.87 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1352.77 | 0.324677 | 6.58099ms | 46626 | 30 | 341691 | 32870.4 | 1(Win) |
| fmt::format_to | 1107.52 | 0.423381 | 40.2742ms | 46626 | 48 | 1.38695e+06 | 40149.3 | 2(Loss) |
| std::to_chars | 814.961 | 0.553662 | 25.2009ms | 46626 | 30 | 2.73775e+06 | 54562.1 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 888.301 | 1.12003 | 485.296ms | 466138 | 48 | 1.50804e+09 | 500443 | 1(Win) |
| std::to_chars | 696.839 | 0.330456 | 336.149ms | 466138 | 30 | 1.33325e+08 | 637943 | 2(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2316.84 | 0.952284 | 0.614144ms | 4851 | 30 | 10847.3 | 1996.8 | 1(Win) |
| std::to_chars | 944.497 | 1.31967 | 2.91994ms | 4851 | 30 | 125347 | 4898.13 | 2(Loss) |
| fmt::format_to | 541.465 | 0.899341 | 8.01715ms | 4851 | 48 | 283408 | 8544 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2239.9 | 0.443969 | 14.9128ms | 48302 | 30 | 250091 | 20565.3 | 1(Win) |
| jeaiii::to_text | 1911.53 | 0.304473 | 4.59802ms | 48302 | 30 | 161505 | 24098.1 | 2(Loss) |
| fmt::format_to | 1547.2 | 0.340337 | 5.49018ms | 48302 | 30 | 308019 | 29772.8 | 3(Loss) |
| std::to_chars | 908.63 | 0.177062 | 11.082ms | 48302 | 30 | 241730 | 50696.5 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1622.67 | 2.46326 | 287.651ms | 482789 | 48 | 2.34485e+09 | 283744 | 1(Win) |
| fmt::format_to | 1199.23 | 1.62082 | 175.789ms | 482789 | 30 | 1.16172e+09 | 383932 | 2(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2548.97 | 2.3433 | 0.734976ms | 9967 | 30 | 229075 | 3729.07 | 1(Tie) |
| fmt::format_to **STATISTICAL TIE** | 2437.42 | 2.00756 | 0.920832ms | 9967 | 30 | 183877 | 3899.73 | 1(Tie) |
| std::to_chars | 1132.01 | 1.15471 | 2.64781ms | 9967 | 30 | 282031 | 8396.8 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1736.68 | 0.32989 | 10.528ms | 99795 | 30 | 980479 | 54801.1 | 1(Win) |
| fmt::format_to | 768.534 | 1.76142 | 22.0521ms | 99795 | 30 | 1.42737e+08 | 123836 | 2(Loss) |
| std::to_chars | 728.714 | 0.825547 | 62.0349ms | 99795 | 30 | 3.48746e+07 | 130603 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1111.05 | 0.752984 | 167.053ms | 998025 | 30 | 1.24828e+09 | 856661 | 1(Win) |
| jeaiii::to_text | 894.687 | 0.713863 | 197.349ms | 998025 | 30 | 1.73018e+09 | 1.06383e+06 | 2(Loss) |
| fmt::format_to | 641.978 | 2.40118 | 1363.92ms | 998025 | 48 | 6.08322e+10 | 1.48259e+06 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2628.84 | 2.08345 | 1.83117ms | 10491 | 30 | 188623 | 3805.87 | 1(Win) |
| fmt::format_to | 2086.23 | 1.67702 | 0.989952ms | 10491 | 30 | 194047 | 4795.73 | 2(Loss) |
| std::to_chars | 1087.63 | 0.8109 | 1.71802ms | 10491 | 30 | 166928 | 9198.93 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1456.85 | 0.503722 | 12.4682ms | 104846 | 30 | 3.58572e+06 | 68633.6 | 1(Win) |
| fmt::format_to | 1157.64 | 0.307192 | 104.152ms | 104846 | 48 | 3.37926e+06 | 86373.3 | 2(Loss) |
| std::to_chars | 848.353 | 2.30776 | 20.7311ms | 104846 | 30 | 2.21948e+08 | 117862 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1531.8 | 2.05841 | 290.616ms | 1048641 | 30 | 5.41799e+09 | 652868 | 1(Win) |
| jeaiii::to_text | 1282.92 | 0.710719 | 751.415ms | 1048641 | 48 | 1.4733e+09 | 779520 | 2(Loss) |
| fmt::format_to | 895.847 | 1.06674 | 196.607ms | 1048641 | 30 | 4.25429e+09 | 1.11633e+06 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2766.51 | 1.99526 | 4.49818ms | 9484 | 48 | 204248 | 3269.33 | 1(Win) |
| jeaiii::to_text | 2447.85 | 2.31782 | 1.54394ms | 9484 | 30 | 220035 | 3694.93 | 2(Loss) |
| std::to_chars | 1093.83 | 1.69995 | 1.63405ms | 9484 | 30 | 592762 | 8268.8 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 1062.41 | 0.208168 | 59.7619ms | 94768 | 30 | 940781 | 85068.8 | 1(Win) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1595.21 | 0.612347 | 137.825ms | 948416 | 30 | 3.61642e+08 | 566997 | 1(Win) |
| jeaiii::to_text | 1144.13 | 1.11323 | 377.262ms | 948416 | 30 | 2.32347e+09 | 790537 | 2(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2528.51 | 2.27775 | 1.6489ms | 9706 | 30 | 208585 | 3660.8 | 1(Win) |
| jeaiii::to_text | 1207.94 | 1.14315 | 6.33011ms | 9706 | 30 | 230205 | 7662.93 | 2(Loss) |
| std::to_chars | 1067.65 | 1.05692 | 1.66195ms | 9706 | 30 | 251899 | 8669.87 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text **STATISTICAL TIE** | 2979.85 | 1.57043 | 9.2352ms | 97401 | 30 | 7.18945e+06 | 31172.3 | 1(Tie) |
| vn::to_chars **STATISTICAL TIE** | 2957.99 | 0.690777 | 9.02605ms | 97401 | 30 | 1.41166e+06 | 31402.7 | 1(Tie) |
| fmt::format_to | 1640.36 | 0.502013 | 12.8722ms | 97401 | 30 | 2.42438e+06 | 56627.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4512.72 | 2.43449 | 2.688ms | 19382 | 30 | 298302 | 4096 | 1(Win) |
| jeaiii::to_text | 2797.23 | 2.49447 | 8.07091ms | 19382 | 48 | 1.30418e+06 | 6608 | 2(Loss) |
| fmt::format_to | 1436.41 | 0.624989 | 7.008ms | 19382 | 30 | 194047 | 12868.3 | 3(Loss) |
| std::to_chars | 1025.13 | 2.21911 | 3.67309ms | 19382 | 30 | 4.80304e+06 | 18030.9 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2480.63 | 2.38753 | 75.649ms | 193843 | 48 | 1.51955e+08 | 74522.7 | 1(Win) |
| jeaiii::to_text | 2037.61 | 0.871562 | 157.481ms | 193843 | 48 | 3.0012e+07 | 90725.3 | 2(Loss) |
| fmt::format_to | 1201.2 | 2.12964 | 38.389ms | 193843 | 30 | 3.22257e+08 | 153899 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2074.64 | 2.0917 | 166.821ms | 1937851 | 30 | 1.04154e+10 | 890795 | 1(Win) |
| fmt::format_to | 1308.01 | 0.124543 | 258.207ms | 1937851 | 30 | 9.28927e+07 | 1.4129e+06 | 2(Loss) |
| std::to_chars | 909.208 | 1.78029 | 2290ms | 1937851 | 48 | 6.28548e+10 | 2.03262e+06 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4370.91 | 2.06005 | 1.46995ms | 19868 | 30 | 239244 | 4334.93 | 1(Win) |
| fmt::format_to | 1392.99 | 0.697424 | 5.10387ms | 19868 | 30 | 269978 | 13602.1 | 2(Loss) |
| std::to_chars | 1181.08 | 0.279375 | 3.12883ms | 19868 | 30 | 60263 | 16042.7 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2706.51 | 1.97426 | 66.4192ms | 198780 | 48 | 9.17859e+07 | 70042.7 | 1(Win) |
| fmt::format_to | 1371.41 | 1.59987 | 67.2561ms | 198780 | 30 | 1.46726e+08 | 138231 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 493.83 | 1.98772 | 3.7079ms | 1889 | 48 | 252383 | 3648 | 1(Win) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2729.63 | 1.42546 | 2.08794ms | 18880 | 30 | 265232 | 6596.27 | 1(Win) |
| vn::to_chars **STATISTICAL TIE** | 1360.42 | 0.964446 | 2.53082ms | 18880 | 30 | 488808 | 13235.2 | 2(Tie) |
| fmt::format_to **STATISTICAL TIE** | 1359.1 | 0.516218 | 14.434ms | 18880 | 48 | 224496 | 13248 | 2(Tie) |
| std::to_chars | 1130.16 | 1.04131 | 4.1449ms | 18880 | 30 | 825678 | 15931.7 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2570.65 | 1.33128 | 19.766ms | 188776 | 30 | 2.60774e+07 | 70033.1 | 1(Win) |
| fmt::format_to | 1330.28 | 0.925016 | 191.736ms | 188776 | 48 | 7.52227e+07 | 135333 | 2(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3975.88 | 0.492815 | 217.68ms | 1887852 | 30 | 1.49403e+08 | 452830 | 1(Win) |
| std::to_chars | 1078.09 | 1.8897 | 884.069ms | 1887852 | 30 | 2.98767e+10 | 1.66999e+06 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5650.58 | 2.04902 | 4.42701ms | 19371 | 48 | 215403 | 3269.33 | 1(Win) |
| jeaiii::to_text | 3165.03 | 1.23339 | 1.68781ms | 19371 | 30 | 155479 | 5836.8 | 2(Loss) |
| fmt::format_to | 1250.65 | 0.552135 | 7.44704ms | 19371 | 30 | 199546 | 14771.2 | 3(Loss) |
| std::to_chars | 982.695 | 0.500172 | 3.65082ms | 19371 | 30 | 265232 | 18798.9 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2981.12 | 0.18284 | 62.3342ms | 193941 | 48 | 617683 | 62042.7 | 1(Win) |
| jeaiii::to_text | 2180.27 | 1.71055 | 91.2059ms | 193941 | 48 | 1.01072e+08 | 84832 | 2(Loss) |
| fmt::format_to | 964.473 | 0.227678 | 35.991ms | 193941 | 30 | 5.71903e+06 | 191770 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2405.51 | 2.46895 | 139.558ms | 1939687 | 30 | 1.08142e+10 | 768998 | 1(Win) |
| jeaiii::to_text | 2082.83 | 0.273429 | 166.611ms | 1939687 | 30 | 1.76915e+08 | 888132 | 2(Loss) |
| fmt::format_to | 851.184 | 0.967089 | 401.889ms | 1939687 | 30 | 1.32517e+10 | 2.17324e+06 | 3(Loss) |
