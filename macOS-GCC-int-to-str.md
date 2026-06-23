# int-to-str  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the GCC 16.1.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 549.927 | 1.96696 | 0.896ms | 2667 | 30 | 248284 | 4625.07 | 1(Win) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 680.617 | 0.217971 | 6.85414ms | 26577 | 30 | 197663 | 37239.5 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 672.298 | 0.933971 | 7.15699ms | 26577 | 30 | 3.71943e+06 | 37700.3 | 1(Tie) |
| fmt::format_to | 452.087 | 0.290447 | 10.347ms | 26577 | 30 | 795471 | 56064 | 3(Loss) |
| std::to_chars | 359.198 | 0.295962 | 13.1881ms | 26577 | 30 | 1.30838e+06 | 70562.1 | 4(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 414.418 | 0.627628 | 107.593ms | 264439 | 30 | 4.37624e+08 | 608538 | 1(Win) |
| jeaiii::to_text | 404.37 | 0.38601 | 113.734ms | 264439 | 30 | 1.73865e+08 | 623659 | 2(Loss) |
| fmt::format_to | 391.212 | 1.27951 | 114.766ms | 264439 | 30 | 2.04097e+09 | 644634 | 3(Loss) |
| std::to_chars | 255.352 | 0.494399 | 1002.8ms | 264439 | 48 | 1.14437e+09 | 987611 | 4(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 766.068 | 1.22774 | 0.738816ms | 3160 | 30 | 69980.4 | 3933.87 | 1(Win) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1112.12 | 0.140678 | 4.96614ms | 31525 | 30 | 43389.4 | 27033.6 | 1(Win) |
| fmt::format_to | 1013.58 | 0.404882 | 5.44691ms | 31525 | 30 | 432688 | 29661.9 | 2(Loss) |
| jeaiii::to_text | 996.66 | 0.68582 | 5.5511ms | 31525 | 30 | 1.28398e+06 | 30165.3 | 3(Loss) |
| std::to_chars | 653.169 | 0.455989 | 8.46208ms | 31525 | 30 | 1.32157e+06 | 46028.8 | 4(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 863.655 | 0.535267 | 62.23ms | 314315 | 30 | 1.03541e+08 | 347076 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 857.75 | 0.394869 | 62.9929ms | 314315 | 30 | 5.71264e+07 | 349466 | 1(Tie) |
| jeaiii::to_text | 761.703 | 0.600525 | 72.5028ms | 314315 | 30 | 1.67549e+08 | 393532 | 3(Loss) |
| std::to_chars | 542.249 | 0.315401 | 99.9089ms | 314315 | 30 | 9.11967e+07 | 552798 | 4(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 522.43 | 1.37723 | 0.724992ms | 2155 | 30 | 88059.3 | 3933.87 | 1(Win) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1319.52 | 0.604061 | 3.04307ms | 21583 | 30 | 266362 | 15598.9 | 1(Win) |
| vn::to_chars STATISTICAL TIE | 997.555 | 1.7288 | 3.74093ms | 21583 | 30 | 3.81736e+06 | 20633.6 | 2(Tie) |
| fmt::format_to STATISTICAL TIE | 965.221 | 0.360144 | 3.9168ms | 21583 | 30 | 176947 | 21324.8 | 2(Tie) |
| std::to_chars | 435.238 | 0.296985 | 8.8279ms | 21583 | 30 | 591783 | 47291.7 | 4(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 677.855 | 0.423861 | 54.5091ms | 215247 | 30 | 4.94274e+07 | 302831 | 1(Win) |
| fmt::format_to STATISTICAL TIE | 618.304 | 0.636133 | 59.3861ms | 215247 | 30 | 1.3381e+08 | 331998 | 2(Tie) |
| jeaiii::to_text STATISTICAL TIE | 613.307 | 0.788857 | 59.8049ms | 215247 | 30 | 2.0914e+08 | 334703 | 2(Tie) |
| std::to_chars | 364.851 | 0.19572 | 103.05ms | 215247 | 30 | 3.63778e+07 | 562628 | 4(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::to_chars | 661.767 | 1.89099 | 3.33901ms | 2561 | 48 | 233792 | 3690.67 | 1(Win) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 866.903 | 0.62469 | 5.1881ms | 25784 | 30 | 941911 | 28364.8 | 1(Win) |
| jeaiii::to_text | 837.184 | 0.320809 | 5.40621ms | 25784 | 30 | 266362 | 29371.7 | 2(Loss) |
| fmt::format_to | 753.553 | 0.314108 | 6.06592ms | 25784 | 30 | 315175 | 32631.5 | 3(Loss) |
| std::to_chars | 501.494 | 0.348428 | 9.02093ms | 25784 | 30 | 875621 | 49032.5 | 4(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 683.918 | 0.150204 | 64.81ms | 257017 | 30 | 8.69361e+06 | 358391 | 1(Win) |
| vn::to_chars | 633.844 | 0.560208 | 69.0678ms | 257017 | 30 | 1.40792e+08 | 386705 | 2(Loss) |
| fmt::format_to | 555.47 | 0.145154 | 79.4691ms | 257017 | 30 | 1.23079e+07 | 441267 | 3(Loss) |
| std::to_chars | 370.817 | 0.34449 | 120.354ms | 257017 | 30 | 1.55553e+08 | 661001 | 4(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2435.68 | 1.99837 | 0.49792ms | 5187 | 30 | 49415.7 | 2030.93 | 1(Win) |
| std::to_chars | 1059.77 | 1.96224 | 0.875008ms | 5187 | 30 | 251673 | 4667.73 | 2(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1339.19 | 0.207079 | 6.87104ms | 51634 | 30 | 173934 | 36770.1 | 1(Win) |
| jeaiii::to_text | 1033.78 | 0.197819 | 8.85606ms | 51634 | 30 | 266362 | 47633.1 | 2(Loss) |
| fmt::format_to | 934.351 | 0.262189 | 9.52192ms | 51634 | 30 | 572800 | 52701.9 | 3(Loss) |
| std::to_chars | 823.423 | 0.43034 | 10.7069ms | 51634 | 30 | 1.98687e+06 | 59801.6 | 4(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text STATISTICAL TIE | 686.364 | 0.223296 | 128.818ms | 516142 | 30 | 7.69329e+07 | 717158 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 682.361 | 0.561372 | 131.487ms | 516142 | 30 | 4.91963e+08 | 721365 | 1(Tie) |
| vn::to_chars | 645.127 | 1.93641 | 134.206ms | 516142 | 30 | 6.54883e+09 | 762999 | 3(Loss) |
| std::to_chars | 527.405 | 0.243648 | 172.593ms | 516142 | 30 | 1.5513e+08 | 933308 | 4(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 1787.19 | 1.15198 | 0.593152ms | 5677 | 30 | 36534.4 | 3029.33 | 1(Win) |
| std::to_chars | 1143.16 | 1.73372 | 0.873984ms | 5677 | 30 | 202258 | 4736 | 2(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2406.98 | 0.408121 | 4.36685ms | 56600 | 30 | 251297 | 22425.6 | 1(Win) |
| fmt::format_to STATISTICAL TIE | 1397.29 | 0.252895 | 7.45498ms | 56600 | 30 | 286325 | 38630.4 | 2(Tie) |
| jeaiii::to_text STATISTICAL TIE | 1392.37 | 1.16146 | 31.679ms | 56600 | 30 | 6.08212e+06 | 38766.9 | 2(Tie) |
| std::to_chars | 1004.53 | 0.180369 | 10.122ms | 56600 | 30 | 281805 | 53734.4 | 4(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1461.48 | 0.497896 | 65.4469ms | 566042 | 30 | 1.01464e+08 | 369365 | 1(Win) |
| jeaiii::to_text | 1287.95 | 0.110186 | 76.2611ms | 566042 | 30 | 6.3985e+06 | 419132 | 2(Loss) |
| fmt::format_to | 1167.01 | 0.387543 | 81.9231ms | 566042 | 30 | 9.64073e+07 | 462566 | 3(Loss) |
| std::to_chars | 831.943 | 0.405755 | 114.604ms | 566042 | 30 | 2.0795e+08 | 648866 | 4(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2109.55 | 2.26648 | 1.9561ms | 4660 | 48 | 109430 | 2106.67 | 1(Win) |
| std::to_chars | 925.037 | 1.60943 | 0.96ms | 4660 | 30 | 179358 | 4804.27 | 2(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 1305.47 | 1.52692 | 5.90694ms | 46678 | 30 | 8.13279e+06 | 34099.2 | 1(Tie) |
| fmt::format_to STATISTICAL TIE | 1287.43 | 0.272513 | 7.43578ms | 46678 | 30 | 266362 | 34577.1 | 1(Tie) |
| jeaiii::to_text | 1144.51 | 0.596205 | 7.01107ms | 46678 | 30 | 1.61324e+06 | 38894.9 | 3(Loss) |
| std::to_chars | 789.329 | 0.773514 | 11.1101ms | 46678 | 30 | 5.70909e+06 | 56396.8 | 4(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars STATISTICAL TIE | 971.343 | 1.68707 | 464.571ms | 466366 | 48 | 2.86427e+09 | 457883 | 1(Tie) |
| jeaiii::to_text STATISTICAL TIE | 940.327 | 1.09784 | 89.1059ms | 466366 | 30 | 8.08907e+08 | 472986 | 1(Tie) |
| fmt::format_to | 898.04 | 1.20932 | 228.359ms | 466366 | 30 | 1.07613e+09 | 495258 | 3(Loss) |
| std::to_chars | 639.225 | 0.842727 | 127.274ms | 466366 | 30 | 1.03143e+09 | 695782 | 4(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2251.49 | 1.37036 | 11.5062ms | 48310 | 30 | 2.35899e+06 | 20462.9 | 1(Win) |
| jeaiii::to_text | 1840.8 | 0.394422 | 4.76109ms | 48310 | 30 | 292351 | 25028.3 | 2(Loss) |
| fmt::format_to | 1522.15 | 0.40488 | 7.18003ms | 48310 | 30 | 450541 | 30267.7 | 3(Loss) |
| std::to_chars | 870.957 | 0.622394 | 24.5279ms | 48310 | 30 | 3.25187e+06 | 52898.1 | 4(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1860.25 | 0.739815 | 44.255ms | 483111 | 30 | 1.00721e+08 | 247671 | 1(Win) |
| jeaiii::to_text | 1652.8 | 0.395169 | 58.8662ms | 483111 | 30 | 3.64034e+07 | 278758 | 2(Loss) |
| fmt::format_to | 1329.95 | 0.569036 | 155.935ms | 483111 | 30 | 1.1658e+08 | 346428 | 3(Loss) |
| std::to_chars | 764.692 | 0.692047 | 129.462ms | 483111 | 30 | 5.2157e+08 | 602505 | 4(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fmt::format_to | 2473.96 | 1.41728 | 3.58707ms | 10003 | 48 | 143360 | 3856 | 1(Win) |
| std::to_chars | 1193.09 | 0.95477 | 1.46278ms | 10003 | 30 | 174838 | 7995.73 | 2(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1642.05 | 0.35283 | 10.825ms | 99823 | 30 | 1.25528e+06 | 57975.5 | 1(Win) |
| fmt::format_to | 1131.56 | 0.208117 | 15.659ms | 99823 | 30 | 919689 | 84130.1 | 2(Loss) |
| jeaiii::to_text | 1115.61 | 0.281988 | 15.8461ms | 99823 | 30 | 1.73708e+06 | 85333.3 | 3(Loss) |
| std::to_chars | 707.29 | 1.03554 | 23.9401ms | 99823 | 30 | 5.82804e+07 | 134596 | 4(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1152.72 | 0.290828 | 148.562ms | 998244 | 30 | 1.73069e+08 | 825873 | 1(Win) |
| jeaiii::to_text | 980.338 | 0.527574 | 201.214ms | 998244 | 30 | 7.87428e+08 | 971093 | 2(Loss) |
| fmt::format_to | 740.433 | 1.36693 | 228.434ms | 998244 | 30 | 9.26658e+09 | 1.28573e+06 | 3(Loss) |
| std::to_chars | 624.552 | 0.822846 | 275.774ms | 998244 | 30 | 4.71949e+09 | 1.52429e+06 | 4(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4928.18 | 1.99837 | 0.3968ms | 10495 | 30 | 49415.7 | 2030.93 | 1(Win) |
| jeaiii::to_text | 3341.62 | 0.727319 | 0.56576ms | 10495 | 30 | 14237.1 | 2995.2 | 2(Loss) |
| fmt::format_to | 2160.05 | 1.7641 | 0.859904ms | 10495 | 30 | 200450 | 4633.6 | 3(Loss) |
| std::to_chars | 1068.22 | 0.941021 | 1.7129ms | 10495 | 30 | 233218 | 9369.6 | 4(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2186.6 | 0.185544 | 8.69709ms | 104792 | 30 | 215741 | 45704.5 | 1(Win) |
| jeaiii::to_text | 1699.52 | 0.590077 | 10.868ms | 104792 | 30 | 3.61194e+06 | 58803.2 | 2(Loss) |
| fmt::format_to | 1169.39 | 0.620261 | 15.9309ms | 104792 | 30 | 8.42966e+06 | 85461.3 | 3(Loss) |
| std::to_chars | 840.734 | 0.836478 | 21.216ms | 104792 | 30 | 2.96599e+07 | 118869 | 4(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1787.73 | 0.227124 | 101.634ms | 1048194 | 30 | 4.83867e+07 | 559164 | 1(Win) |
| jeaiii::to_text | 1446.86 | 0.300879 | 124.11ms | 1048194 | 30 | 1.2964e+08 | 690901 | 2(Loss) |
| fmt::format_to | 936.574 | 0.471779 | 188.066ms | 1048194 | 30 | 7.60674e+08 | 1.06733e+06 | 3(Loss) |
| std::to_chars | 776.482 | 0.243315 | 554.655ms | 1048194 | 30 | 2.94359e+08 | 1.28739e+06 | 4(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| jeaiii::to_text | 2792.2 | 2.4737 | 1.41312ms | 9469 | 30 | 192013 | 3234.13 | 1(Win) |
| fmt::format_to | 2129.26 | 2.17895 | 0.830208ms | 9469 | 30 | 256193 | 4241.07 | 2(Loss) |
| std::to_chars | 1129.4 | 0.251463 | 1.46381ms | 9469 | 30 | 12127.9 | 7995.73 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2021.44 | 0.363476 | 20.2171ms | 94887 | 30 | 794266 | 44765.9 | 1(Win) |
| jeaiii::to_text | 1432.45 | 0.670732 | 11.628ms | 94887 | 30 | 5.38608e+06 | 63172.3 | 2(Loss) |
| fmt::format_to | 1205.46 | 0.0647532 | 13.7211ms | 94887 | 30 | 70884.3 | 75067.7 | 3(Loss) |
| std::to_chars | 784.121 | 1.79923 | 59.8001ms | 94887 | 30 | 1.29343e+08 | 115405 | 4(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 1599.03 | 0.373817 | 100.138ms | 948352 | 30 | 1.34112e+08 | 565606 | 1(Win) |
| jeaiii::to_text | 1148.57 | 0.55802 | 139.832ms | 948352 | 30 | 5.79222e+08 | 787430 | 2(Loss) |
| fmt::format_to | 772.39 | 2.31695 | 196.716ms | 948352 | 30 | 2.20811e+10 | 1.17094e+06 | 3(Loss) |
| std::to_chars | 732.326 | 0.799001 | 227.498ms | 948352 | 30 | 2.9211e+09 | 1.235e+06 | 4(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4501.75 | 2.29689 | 0.402944ms | 9748 | 30 | 67494.5 | 2065.07 | 1(Win) |
| fmt::format_to | 2481.6 | 2.1853 | 0.730112ms | 9748 | 30 | 201052 | 3746.13 | 2(Loss) |
| std::to_chars | 1107.14 | 1.11709 | 2.60685ms | 9748 | 30 | 263952 | 8396.8 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3035.31 | 1.34402 | 5.53805ms | 97394 | 30 | 5.07444e+06 | 30600.5 | 1(Win) |
| jeaiii::to_text | 2760.49 | 0.99281 | 6.45709ms | 97394 | 30 | 3.34768e+06 | 33646.9 | 2(Loss) |
| fmt::format_to | 1593.18 | 2.27769 | 10.3539ms | 97394 | 30 | 5.28985e+07 | 58299.7 | 3(Loss) |
| std::to_chars | 1013.56 | 0.441494 | 16.5599ms | 97394 | 30 | 4.9106e+06 | 91639.5 | 4(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2576.78 | 0.145534 | 65.2521ms | 974234 | 30 | 8.26085e+06 | 360567 | 1(Win) |
| jeaiii::to_text | 2137.65 | 0.13662 | 84.256ms | 974234 | 30 | 1.0578e+07 | 434637 | 2(Loss) |
| fmt::format_to | 1343.14 | 0.491086 | 123.829ms | 974234 | 30 | 3.46194e+08 | 691738 | 3(Loss) |
| std::to_chars | 1055.85 | 0.667193 | 159.352ms | 974234 | 30 | 1.03406e+09 | 879957 | 4(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4426.84 | 1.79129 | 0.795904ms | 19330 | 30 | 166928 | 4164.27 | 1(Win) |
| jeaiii::to_text | 2724.21 | 1.70814 | 1.27693ms | 19330 | 30 | 400824 | 6766.93 | 2(Loss) |
| fmt::format_to | 1385.69 | 0.649023 | 2.94298ms | 19330 | 30 | 223651 | 13303.5 | 3(Loss) |
| std::to_chars | 1020.45 | 0.960123 | 10.2948ms | 19330 | 30 | 902514 | 18065.1 | 4(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2927.81 | 0.288123 | 11.5551ms | 193810 | 30 | 992531 | 63129.6 | 1(Win) |
| jeaiii::to_text | 2083.89 | 0.41648 | 16.66ms | 193810 | 30 | 4.09366e+06 | 88695.5 | 2(Loss) |
| fmt::format_to | 1305.37 | 0.172144 | 32.7711ms | 193810 | 30 | 1.78235e+06 | 141594 | 3(Loss) |
| std::to_chars | 1069.84 | 0.615549 | 31.0211ms | 193810 | 30 | 3.39284e+07 | 172766 | 4(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2441.99 | 0.120765 | 136.402ms | 1937820 | 30 | 2.50577e+07 | 756779 | 1(Win) |
| jeaiii::to_text | 1885.32 | 0.147436 | 179.761ms | 1937820 | 30 | 6.26591e+07 | 980233 | 2(Loss) |
| fmt::format_to | 1355.97 | 0.143427 | 245.798ms | 1937820 | 30 | 1.14634e+08 | 1.3629e+06 | 3(Loss) |
| std::to_chars | 983.802 | 1.50739 | 337.184ms | 1937820 | 30 | 2.40538e+10 | 1.87848e+06 | 4(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4555.08 | 1.58546 | 1.81709ms | 19890 | 30 | 130771 | 4164.27 | 1(Win) |
| jeaiii::to_text | 3157.5 | 0.394777 | 2.67699ms | 19890 | 30 | 16873.6 | 6007.47 | 2(Loss) |
| fmt::format_to | 1545.81 | 0.670505 | 2.25997ms | 19890 | 30 | 203086 | 12270.9 | 3(Loss) |
| std::to_chars | 1264.44 | 0.155242 | 2.73306ms | 19890 | 30 | 16271 | 15001.6 | 4(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4546.59 | 0.202532 | 7.57786ms | 198814 | 30 | 214009 | 41702.4 | 1(Win) |
| jeaiii::to_text | 3003.41 | 0.264167 | 11.3979ms | 198814 | 30 | 834341 | 63129.6 | 2(Loss) |
| fmt::format_to | 1514.39 | 0.180486 | 22.6511ms | 198814 | 30 | 1.53189e+06 | 125201 | 3(Loss) |
| std::to_chars | 1189.4 | 0.499485 | 28.4849ms | 198814 | 30 | 1.90197e+07 | 159411 | 4(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4250.14 | 0.264358 | 80.6761ms | 1987923 | 30 | 4.17156e+07 | 446063 | 1(Win) |
| jeaiii::to_text | 2912.95 | 0.232569 | 117.293ms | 1987923 | 30 | 6.87321e+07 | 650829 | 2(Loss) |
| fmt::format_to | 1387.53 | 0.231732 | 240.861ms | 1987923 | 30 | 3.0075e+08 | 1.36633e+06 | 3(Loss) |
| std::to_chars | 1254.66 | 0.0996554 | 271.948ms | 1987923 | 30 | 6.80252e+07 | 1.51103e+06 | 4(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4700.09 | 1.96132 | 0.737024ms | 18883 | 30 | 169414 | 3831.47 | 1(Win) |
| jeaiii::to_text | 2931.03 | 0.9787 | 2.71206ms | 18883 | 30 | 108473 | 6144 | 2(Loss) |
| fmt::format_to | 1472.67 | 0.648055 | 2.2359ms | 18883 | 30 | 188397 | 12228.3 | 3(Loss) |
| std::to_chars | 1123.12 | 1.82037 | 2.95603ms | 18883 | 30 | 2.55583e+06 | 16034.1 | 4(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4201.84 | 0.370816 | 7.82285ms | 188852 | 30 | 757882 | 42862.9 | 1(Win) |
| jeaiii::to_text | 2872.33 | 0.136934 | 11.351ms | 188852 | 30 | 221165 | 62702.9 | 2(Loss) |
| fmt::format_to | 1332.1 | 0.246749 | 24.3331ms | 188852 | 30 | 3.33887e+06 | 135202 | 3(Loss) |
| std::to_chars | 1217.46 | 0.167128 | 27.0397ms | 188852 | 30 | 1.8338e+06 | 147934 | 4(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 4355.41 | 0.0891766 | 74.7ms | 1887977 | 30 | 4.07717e+06 | 413397 | 1(Win) |
| jeaiii::to_text | 2787.77 | 0.213234 | 116.666ms | 1887977 | 30 | 5.69004e+07 | 645862 | 2(Loss) |
| fmt::format_to | 1406.32 | 0.72058 | 226.167ms | 1887977 | 30 | 2.55334e+09 | 1.2803e+06 | 3(Loss) |
| std::to_chars | 1200.87 | 0.514714 | 270.491ms | 1887977 | 30 | 1.78671e+09 | 1.49934e+06 | 4(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 5728.55 | 1.98684 | 3.008ms | 19382 | 48 | 197276 | 3226.67 | 1(Win) |
| jeaiii::to_text | 3185.45 | 1.29246 | 2.56307ms | 19382 | 30 | 168736 | 5802.67 | 2(Loss) |
| fmt::format_to | 1232.14 | 0.155242 | 2.78118ms | 19382 | 30 | 16271 | 15001.6 | 3(Loss) |
| std::to_chars | 1060.26 | 0.577799 | 3.14394ms | 19382 | 30 | 304403 | 17433.6 | 4(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 3233.37 | 1.2781 | 10.454ms | 194045 | 30 | 1.60526e+07 | 57233.1 | 1(Win) |
| jeaiii::to_text | 2469.68 | 0.341706 | 13.654ms | 194045 | 30 | 1.96676e+06 | 74931.2 | 2(Loss) |
| fmt::format_to | 1026.23 | 0.131212 | 32.6989ms | 194045 | 30 | 1.67953e+06 | 180326 | 3(Loss) |
| std::to_chars | 992.959 | 0.263112 | 33.6141ms | 194045 | 30 | 7.21348e+06 | 186368 | 4(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-GCC/int-to-str/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::to_chars | 2795.84 | 0.194999 | 119.799ms | 1939948 | 30 | 4.99508e+07 | 661726 | 1(Win) |
| jeaiii::to_text | 2153.08 | 0.442177 | 150.179ms | 1939948 | 30 | 4.33088e+08 | 859273 | 2(Loss) |
| std::to_chars | 984.806 | 0.141067 | 340.644ms | 1939948 | 30 | 2.10694e+08 | 1.87862e+06 | 3(Loss) |
| fmt::format_to | 926.973 | 0.480706 | 352.587ms | 1939948 | 30 | 2.76138e+09 | 1.99583e+06 | 4(Loss) |
