# str-to-int  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 540.632 | 1.85238 | 0.1215ms | 100 | 30 | 320.317 | 176.4 | 1(Win) |
| std::from_chars | 208.059 | 0.434508 | 0.9105ms | 100 | 30 | 118.999 | 458.367 | 2(Loss) |
| strtoll/strtoull | 105.791 | 0.566254 | 0.366875ms | 100 | 30 | 781.706 | 901.467 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 589.902 | 0.380176 | 0.374791ms | 1000 | 30 | 1133.26 | 1616.67 | 1(Win) |
| std::from_chars | 209.22 | 0.359958 | 1.05867ms | 1000 | 30 | 8076.39 | 4558.23 | 2(Loss) |
| strtoll/strtoull | 82.3816 | 0.0547531 | 2.24912ms | 1000 | 30 | 1205.25 | 11576.3 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 435.139 | 0.046509 | 4.84133ms | 10000 | 30 | 3117.02 | 21916.5 | 1(Win) |
| std::from_chars | 160.005 | 0.102915 | 11.2727ms | 10000 | 30 | 112878 | 59602.8 | 2(Loss) |
| strtoll/strtoull | 70.2322 | 0.177426 | 24.467ms | 10000 | 30 | 1.74134e+06 | 135789 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 139.855 | 0.255505 | 132.037ms | 100000 | 30 | 9.10675e+07 | 681901 | 1(Win) |
| vn::from_chars | 116.758 | 0.209884 | 146.464ms | 100000 | 30 | 8.81668e+07 | 816796 | 2(Loss) |
| strtoll/strtoull | 67.4774 | 0.0815986 | 261.116ms | 100000 | 30 | 3.98998e+07 | 1.41333e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 512.361 | 2.33369 | 0.149417ms | 100 | 30 | 566.051 | 186.133 | 1(Win) |
| strtoll/strtoull | 103.879 | 0.154037 | 0.261166ms | 100 | 30 | 59.9954 | 918.067 | 2(Loss) |
| std::from_chars | 64.9612 | 0.261723 | 5.14429ms | 100 | 30 | 442.892 | 1468.07 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 523.393 | 1.22734 | 1.8805ms | 1000 | 30 | 15003.7 | 1822.1 | 1(Win) |
| std::from_chars | 213.511 | 0.0939698 | 1.66787ms | 1000 | 30 | 528.516 | 4466.63 | 2(Loss) |
| strtoll/strtoull | 97.1218 | 0.114042 | 6.43625ms | 1000 | 30 | 3761.96 | 9819.37 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 333.759 | 0.0566282 | 5.39329ms | 10000 | 30 | 7854.55 | 28573.7 | 1(Win) |
| std::from_chars | 156.17 | 0.0223433 | 11.213ms | 10000 | 30 | 5585.01 | 61066.6 | 2(Loss) |
| strtoll/strtoull | 97.9858 | 0.176185 | 17.6079ms | 10000 | 30 | 882135 | 97327.8 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 215.014 | 0.135151 | 80.6542ms | 100000 | 30 | 1.07801e+07 | 443540 | 1(Win) |
| std::from_chars | 141.191 | 0.380143 | 124.661ms | 100000 | 30 | 1.97789e+08 | 675451 | 2(Loss) |
| strtoll/strtoull | 97.4621 | 0.249865 | 427.504ms | 100000 | 30 | 1.79333e+08 | 978508 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 567.438 | 0.820864 | 2.08004ms | 100 | 30 | 57.0989 | 168.067 | 1(Win) |
| std::from_chars | 210.586 | 0.585252 | 2.37504ms | 100 | 30 | 210.74 | 452.867 | 2(Loss) |
| strtoll/strtoull | 92.6647 | 0.754374 | 6.20067ms | 100 | 30 | 1808.28 | 1029.17 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 538.961 | 0.218421 | 1.7355ms | 1000 | 30 | 448.12 | 1769.47 | 1(Win) |
| std::from_chars | 213.516 | 0.1221 | 2.30725ms | 1000 | 30 | 892.257 | 4466.53 | 2(Loss) |
| strtoll/strtoull | 99.9041 | 0.0705443 | 1.73233ms | 1000 | 30 | 1360.44 | 9545.9 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 367.464 | 0.0398825 | 4.80213ms | 10000 | 30 | 3214.07 | 25952.8 | 1(Win) |
| std::from_chars | 159.429 | 1.12753 | 11.0238ms | 10000 | 30 | 1.36473e+07 | 59818.1 | 2(Loss) |
| strtoll/strtoull | 99.1574 | 0.192052 | 17.3471ms | 10000 | 30 | 1.02355e+06 | 96177.8 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 258.87 | 0.182762 | 365.228ms | 100000 | 48 | 2.17595e+07 | 368399 | 1(Win) |
| std::from_chars | 133.227 | 2.4208 | 146.425ms | 100000 | 30 | 9.00861e+09 | 715829 | 2(Loss) |
| strtoll/strtoull | 98.3631 | 0.0810532 | 191.386ms | 100000 | 30 | 1.85267e+07 | 969544 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 490.153 | 2.12923 | 0.135125ms | 100 | 30 | 514.875 | 194.567 | 1(Win) |
| std::from_chars | 286.045 | 0.0272861 | 1.40946ms | 100 | 30 | 0.248276 | 333.4 | 2(Loss) |
| strtoll/strtoull | 88.0315 | 0.183836 | 1.72933ms | 100 | 30 | 118.989 | 1083.33 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 565.587 | 0.257963 | 0.995583ms | 1000 | 30 | 567.592 | 1686.17 | 1(Win) |
| std::from_chars | 286.466 | 0.124763 | 0.628333ms | 1000 | 30 | 517.541 | 3329.1 | 2(Loss) |
| strtoll/strtoull | 88.6567 | 0.0376471 | 3.38558ms | 1000 | 30 | 491.995 | 10756.9 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 395.304 | 0.0297388 | 4.63858ms | 10000 | 30 | 1544.2 | 24125.1 | 1(Win) |
| std::from_chars | 184.701 | 0.579133 | 11.3919ms | 10000 | 30 | 2.6825e+06 | 51633.5 | 2(Loss) |
| strtoll/strtoull | 87.7871 | 0.161307 | 19.6665ms | 10000 | 30 | 921231 | 108635 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 177.45 | 0.237221 | 98.406ms | 100000 | 30 | 4.87612e+07 | 537432 | 1(Win) |
| std::from_chars | 133.947 | 0.35256 | 128.79ms | 100000 | 30 | 1.89026e+08 | 711979 | 2(Loss) |
| strtoll/strtoull | 86.7252 | 1.08884 | 197.419ms | 100000 | 30 | 4.30093e+09 | 1.09965e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 666.594 | 0.920202 | 0.921458ms | 200 | 30 | 207.982 | 286.133 | 1(Win) |
| std::from_chars | 287.309 | 0.667885 | 2.069ms | 200 | 30 | 589.775 | 663.867 | 2(Loss) |
| strtoll/strtoull | 135.168 | 0.542833 | 1.9675ms | 200 | 30 | 1760.23 | 1411.1 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 713.401 | 0.150453 | 1.55292ms | 2000 | 30 | 485.421 | 2673.6 | 1(Win) |
| std::from_chars | 297.374 | 0.293687 | 2.65088ms | 2000 | 30 | 10644.9 | 6413.97 | 2(Loss) |
| strtoll/strtoull | 121.366 | 0.0181661 | 3.93467ms | 2000 | 30 | 244.516 | 15715.6 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.783 | 0.905505 | 10.8192ms | 20000 | 30 | 6.07565e+06 | 49698.7 | 1(Win) |
| std::from_chars | 242.892 | 0.059462 | 13.9863ms | 20000 | 30 | 65408.2 | 78526.5 | 2(Loss) |
| strtoll/strtoull | 115.17 | 0.147268 | 30.7503ms | 20000 | 30 | 1.78449e+06 | 165611 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 216.94 | 0.269985 | 158.387ms | 200000 | 30 | 1.69036e+08 | 879204 | 1(Win) |
| vn::from_chars | 207.21 | 0.0822275 | 166.817ms | 200000 | 30 | 1.71867e+07 | 920490 | 2(Loss) |
| strtoll/strtoull | 114.35 | 0.122935 | 305.641ms | 200000 | 30 | 1.2614e+08 | 1.66799e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 650.972 | 0.471724 | 0.103792ms | 200 | 30 | 57.3103 | 293 | 1(Win) |
| std::from_chars | 292.868 | 0.569971 | 2.77142ms | 200 | 30 | 413.375 | 651.267 | 2(Loss) |
| strtoll/strtoull | 152.081 | 0.185092 | 0.594709ms | 200 | 30 | 161.661 | 1254.17 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 695.698 | 0.152914 | 0.529541ms | 2000 | 30 | 527.275 | 2741.63 | 1(Win) |
| std::from_chars | 300.423 | 0.101407 | 1.18429ms | 2000 | 30 | 1243.5 | 6348.87 | 2(Loss) |
| strtoll/strtoull | 156.321 | 0.0466868 | 3.7505ms | 2000 | 30 | 973.5 | 12201.5 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 682.961 | 0.0710952 | 5.20563ms | 20000 | 30 | 11826.9 | 27927.6 | 1(Win) |
| std::from_chars | 254.781 | 0.402243 | 13.6458ms | 20000 | 30 | 2.72035e+06 | 74862.3 | 2(Loss) |
| strtoll/strtoull | 150.06 | 0.756543 | 27.7073ms | 20000 | 30 | 2.77407e+07 | 127106 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 348.823 | 0.191698 | 533.885ms | 200000 | 48 | 5.27382e+07 | 546796 | 1(Win) |
| std::from_chars | 217.669 | 0.152862 | 158.604ms | 200000 | 30 | 5.38254e+07 | 876260 | 2(Loss) |
| strtoll/strtoull | 152.852 | 0.383046 | 528.1ms | 200000 | 30 | 6.85394e+08 | 1.24784e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 654.023 | 0.682926 | 0.120333ms | 200 | 30 | 118.999 | 291.633 | 1(Win) |
| std::from_chars | 287.887 | 0.552882 | 0.178167ms | 200 | 30 | 402.533 | 662.533 | 2(Loss) |
| strtoll/strtoull | 132.841 | 2.34435 | 1.44887ms | 200 | 48 | 54385.2 | 1435.81 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 723.549 | 0.149591 | 1.95204ms | 2000 | 30 | 466.507 | 2636.1 | 1(Win) |
| std::from_chars | 300.305 | 0.0815097 | 2.6545ms | 2000 | 30 | 804.033 | 6351.37 | 2(Loss) |
| strtoll/strtoull | 156.696 | 0.0784421 | 2.21571ms | 2000 | 30 | 2735.03 | 12172.3 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.869 | 0.113538 | 11.363ms | 20000 | 30 | 95476.9 | 49687.5 | 1(Win) |
| std::from_chars | 257.445 | 0.0363341 | 13.7384ms | 20000 | 30 | 21739.1 | 74087.5 | 2(Loss) |
| strtoll/strtoull | 155.188 | 0.195472 | 22.1563ms | 20000 | 30 | 1.73155e+06 | 122906 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 326.624 | 0.238563 | 105.357ms | 200000 | 30 | 5.82224e+07 | 583958 | 1(Win) |
| std::from_chars | 205.978 | 2.26493 | 913.932ms | 200000 | 48 | 2.11138e+10 | 925995 | 2(Loss) |
| strtoll/strtoull | 154.897 | 0.246403 | 220.676ms | 200000 | 30 | 2.76176e+08 | 1.23137e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 653.948 | 0.0300129 | 0.789584ms | 200 | 30 | 0.229885 | 291.667 | 1(Win) |
| std::from_chars | 375.192 | 0.611263 | 2.6595ms | 200 | 30 | 289.689 | 508.367 | 2(Loss) |
| strtoll/strtoull | 166.867 | 0.417542 | 0.981125ms | 200 | 30 | 683.344 | 1143.03 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 665.037 | 0.198506 | 0.53425ms | 2000 | 30 | 972.378 | 2868.03 | 1(Win) |
| std::from_chars | 391.8 | 0.130092 | 0.895292ms | 2000 | 30 | 1203.25 | 4868.17 | 2(Loss) |
| strtoll/strtoull | 168.606 | 0.0994228 | 6.80204ms | 2000 | 30 | 3794.94 | 11312.4 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 532.941 | 0.245604 | 6.58121ms | 20000 | 30 | 231791 | 35789.1 | 1(Win) |
| std::from_chars | 349.047 | 0.615865 | 9.98658ms | 20000 | 30 | 3.3977e+06 | 54644.5 | 2(Loss) |
| strtoll/strtoull | 151.37 | 0.861462 | 21.4632ms | 20000 | 30 | 3.53487e+07 | 126006 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 467.247 | 0.167576 | 74.0446ms | 200000 | 30 | 1.40383e+07 | 408210 | 1(Win) |
| std::from_chars | 309.692 | 0.408932 | 110.385ms | 200000 | 30 | 1.90293e+08 | 615885 | 2(Loss) |
| strtoll/strtoull | 168.404 | 0.0680412 | 207.529ms | 200000 | 30 | 1.78164e+07 | 1.1326e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 789.248 | 0.784323 | 1.65171ms | 400 | 30 | 431.126 | 483.333 | 1(Win) |
| std::from_chars | 323.133 | 0.457224 | 0.272667ms | 400 | 30 | 874.051 | 1180.53 | 2(Loss) |
| strtoll/strtoull | 181.416 | 0.183961 | 1.79054ms | 400 | 30 | 448.892 | 2102.73 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 818.411 | 0.233583 | 2.49863ms | 4000 | 30 | 3556.16 | 4661.1 | 1(Win) |
| std::from_chars | 285.33 | 0.0854297 | 4.71108ms | 4000 | 30 | 3913.5 | 13369.4 | 2(Loss) |
| strtoll/strtoull | 169.877 | 0.0366133 | 5.60396ms | 4000 | 30 | 2027.9 | 22455.6 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 752.611 | 0.319968 | 9.50383ms | 40000 | 30 | 789065 | 50686.2 | 1(Win) |
| std::from_chars | 250.411 | 1.963 | 27.8753ms | 40000 | 30 | 2.68272e+08 | 152338 | 2(Loss) |
| strtoll/strtoull | 170.567 | 0.200118 | 42.4982ms | 40000 | 30 | 6.00934e+06 | 223649 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.083 | 0.108804 | 210.535ms | 400000 | 30 | 4.8308e+07 | 1.16628e+06 | 1(Win) |
| std::from_chars | 255.478 | 0.352174 | 677.423ms | 400000 | 30 | 8.29561e+08 | 1.49316e+06 | 2(Loss) |
| strtoll/strtoull | 168.879 | 0.403719 | 405.256ms | 400000 | 30 | 2.49488e+09 | 2.25884e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 805.411 | 0.786707 | 2.32104ms | 400 | 30 | 416.516 | 473.633 | 1(Win) |
| std::from_chars | 330.115 | 0.341637 | 0.27675ms | 400 | 30 | 467.564 | 1155.57 | 2(Loss) |
| strtoll/strtoull | 195.478 | 0.397088 | 0.4395ms | 400 | 30 | 1801.43 | 1951.47 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 823.808 | 0.342038 | 0.880083ms | 4000 | 30 | 7525.56 | 4630.57 | 1(Win) |
| std::from_chars | 291.194 | 0.0562045 | 2.39933ms | 4000 | 30 | 1626.37 | 13100.2 | 2(Loss) |
| strtoll/strtoull | 207.933 | 0.313838 | 4.9345ms | 4000 | 30 | 99450 | 18345.8 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 741.437 | 0.669601 | 9.54767ms | 40000 | 30 | 3.56061e+06 | 51450 | 1(Win) |
| std::from_chars | 261.941 | 0.236533 | 26.317ms | 40000 | 30 | 3.55974e+06 | 145632 | 2(Loss) |
| strtoll/strtoull | 207.464 | 0.372786 | 33.5448ms | 40000 | 30 | 1.40952e+07 | 183872 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 461.609 | 0.229208 | 162.048ms | 400000 | 30 | 1.07635e+08 | 826392 | 1(Win) |
| std::from_chars | 253.05 | 0.220411 | 645.828ms | 400000 | 30 | 3.31204e+08 | 1.50749e+06 | 2(Loss) |
| strtoll/strtoull | 204.265 | 1.89353 | 330.941ms | 400000 | 30 | 3.75145e+10 | 1.86752e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 765.082 | 0.280786 | 0.172125ms | 400 | 30 | 58.8 | 498.6 | 1(Win) |
| std::from_chars | 325.412 | 0.329165 | 1.75642ms | 400 | 30 | 446.685 | 1172.27 | 2(Loss) |
| strtoll/strtoull | 199.611 | 0.358277 | 2.45267ms | 400 | 30 | 1406.41 | 1911.07 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 799.113 | 0.0995784 | 2.31013ms | 4000 | 30 | 677.885 | 4773.67 | 1(Win) |
| std::from_chars | 293.565 | 0.0780694 | 3.82675ms | 4000 | 30 | 3087.42 | 12994.4 | 2(Loss) |
| strtoll/strtoull | 210.773 | 0.0600126 | 4.85867ms | 4000 | 30 | 3539.14 | 18098.6 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 470.219 | 0.31724 | 93.6992ms | 40000 | 48 | 3.17934e+06 | 81126 | 1(Win) |
| std::from_chars | 263.922 | 0.687779 | 25.9537ms | 40000 | 30 | 2.96475e+07 | 144539 | 2(Loss) |
| strtoll/strtoull | 208.186 | 0.351237 | 32.9802ms | 40000 | 30 | 1.24262e+07 | 183235 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 434.799 | 0.186747 | 158.419ms | 400000 | 30 | 8.05326e+07 | 877347 | 1(Win) |
| std::from_chars | 250.476 | 1.04773 | 272.84ms | 400000 | 30 | 7.63846e+09 | 1.52298e+06 | 2(Loss) |
| strtoll/strtoull | 208.473 | 0.206854 | 783.052ms | 400000 | 30 | 4.29801e+08 | 1.82983e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 740.287 | 0.724689 | 2.74271ms | 400 | 30 | 418.355 | 515.3 | 1(Win) |
| std::from_chars | 373.173 | 0.507289 | 2.36292ms | 400 | 30 | 806.737 | 1022.23 | 2(Loss) |
| strtoll/strtoull | 222.552 | 0.191869 | 0.392958ms | 400 | 30 | 324.478 | 1714.07 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 776.75 | 0.0973369 | 0.900042ms | 4000 | 30 | 685.541 | 4911.1 | 1(Win) |
| std::from_chars | 358.093 | 0.803138 | 5.22333ms | 4000 | 30 | 219598 | 10652.8 | 2(Loss) |
| strtoll/strtoull | 228.614 | 0.0686357 | 3.02229ms | 4000 | 30 | 3934.92 | 16686.2 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 699.643 | 0.513828 | 9.90696ms | 40000 | 30 | 2.35464e+06 | 54523.5 | 1(Win) |
| std::from_chars | 358.501 | 0.39125 | 21.763ms | 40000 | 30 | 5.19959e+06 | 106407 | 2(Loss) |
| strtoll/strtoull | 226.646 | 0.568811 | 30.3854ms | 40000 | 30 | 2.74968e+07 | 168311 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 568.619 | 0.154786 | 121.069ms | 400000 | 30 | 3.23491e+07 | 670871 | 1(Win) |
| std::from_chars | 347.839 | 1.89346 | 521.136ms | 400000 | 30 | 1.29359e+10 | 1.09669e+06 | 2(Loss) |
| strtoll/strtoull | 223.347 | 0.714283 | 309.164ms | 400000 | 30 | 4.46498e+09 | 1.70797e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 748.42 | 0.377843 | 0.21875ms | 800 | 30 | 445.076 | 1019.4 | 1(Win) |
| std::from_chars | 362.373 | 0.207054 | 2.60233ms | 800 | 30 | 570.11 | 2105.4 | 2(Loss) |
| strtoll/strtoull | 256.447 | 0.143764 | 0.579459ms | 800 | 30 | 548.792 | 2975.03 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 766.992 | 0.0724701 | 3.35242ms | 8000 | 30 | 1558.97 | 9947.17 | 1(Win) |
| std::from_chars | 364.948 | 0.910421 | 6.06125ms | 8000 | 30 | 1.08674e+06 | 20905.4 | 2(Loss) |
| strtoll/strtoull | 256.643 | 0.0366059 | 6.94821ms | 8000 | 30 | 3552.59 | 29727.6 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 697.739 | 0.407419 | 19.9684ms | 80000 | 30 | 5.95385e+06 | 109344 | 1(Win) |
| std::from_chars | 359.613 | 0.580308 | 47.5611ms | 80000 | 30 | 4.54723e+07 | 212155 | 2(Loss) |
| strtoll/strtoull | 249.926 | 1.15395 | 136.474ms | 80000 | 30 | 3.72269e+08 | 305267 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 575.961 | 0.550226 | 268.814ms | 800000 | 30 | 1.59366e+09 | 1.32464e+06 | 1(Win) |
| std::from_chars | 327.784 | 2.40852 | 2761.12ms | 800000 | 48 | 1.5085e+11 | 2.32756e+06 | 2(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 822.34 | 0.568136 | 0.644ms | 800 | 30 | 833.495 | 927.767 | 1(Win) |
| std::from_chars | 356.936 | 0.249914 | 3.028ms | 800 | 30 | 856.051 | 2137.47 | 2(Loss) |
| strtoll/strtoull | 292.333 | 0.319034 | 0.539042ms | 800 | 30 | 2079.8 | 2609.83 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 823.079 | 0.0854405 | 1.84658ms | 8000 | 30 | 1881.68 | 9269.33 | 1(Win) |
| std::from_chars | 367.73 | 0.0490916 | 9.86058ms | 8000 | 30 | 3112.13 | 20747.3 | 2(Loss) |
| strtoll/strtoull | 298.963 | 1.08938 | 11.9688ms | 8000 | 30 | 2.31861e+06 | 25519.5 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 812.634 | 0.879882 | 16.8728ms | 80000 | 30 | 2.0472e+07 | 93884.8 | 1(Win) |
| std::from_chars | 364.65 | 0.214629 | 37.7491ms | 80000 | 30 | 6.04959e+06 | 209225 | 2(Loss) |
| strtoll/strtoull | 301.342 | 0.200963 | 127.219ms | 80000 | 30 | 7.76633e+06 | 253181 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 778.477 | 0.151309 | 196.044ms | 800000 | 30 | 6.59693e+07 | 980042 | 1(Win) |
| strtoll/strtoull | 300.993 | 0.201758 | 461.682ms | 800000 | 30 | 7.84605e+08 | 2.53474e+06 | 2(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 699.709 | 0.485126 | 0.661541ms | 800 | 30 | 839.413 | 1090.37 | 1(Win) |
| std::from_chars | 361.149 | 0.16741 | 0.977292ms | 800 | 30 | 375.223 | 2112.53 | 2(Loss) |
| strtoll/strtoull | 296.126 | 0.348215 | 0.850667ms | 800 | 30 | 2414.59 | 2576.4 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 721.551 | 0.0859095 | 1.93912ms | 8000 | 30 | 2475.42 | 10573.6 | 1(Win) |
| std::from_chars | 367.756 | 0.0435101 | 9.12275ms | 8000 | 30 | 2444.35 | 20745.8 | 2(Loss) |
| strtoll/strtoull | 302.938 | 0.0480913 | 16.5531ms | 8000 | 30 | 4400.77 | 25184.7 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 703.557 | 0.461894 | 23.107ms | 80000 | 30 | 7.52641e+06 | 108440 | 1(Win) |
| std::from_chars | 365.96 | 0.176428 | 37.6003ms | 80000 | 30 | 4.05856e+06 | 208476 | 2(Loss) |
| strtoll/strtoull | 303.212 | 0.151964 | 45.3407ms | 80000 | 30 | 4.38623e+06 | 251619 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 359.355 | 0.71812 | 2501.26ms | 800000 | 48 | 1.11575e+10 | 2.12308e+06 | 1(Win) |
| strtoll/strtoull | 293.404 | 0.675806 | 488.413ms | 800000 | 30 | 9.26432e+09 | 2.6003e+06 | 2(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 676.445 | 0.499798 | 0.3545ms | 800 | 30 | 953.292 | 1127.87 | 1(Win) |
| std::from_chars | 342.038 | 0.884936 | 1.20883ms | 800 | 30 | 11688.9 | 2230.57 | 2(Loss) |
| strtoll/strtoull | 265.635 | 0.138162 | 1.28492ms | 800 | 30 | 472.395 | 2872.13 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 708.343 | 0.0736679 | 2.05ms | 8000 | 30 | 1888.74 | 10770.8 | 1(Win) |
| std::from_chars | 345.396 | 0.255337 | 11.2325ms | 8000 | 30 | 95432.4 | 22088.8 | 2(Loss) |
| strtoll/strtoull | 270.001 | 0.0387844 | 5.78817ms | 8000 | 30 | 3603.17 | 28256.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 667.562 | 0.243809 | 21.1996ms | 80000 | 30 | 2.32926e+06 | 114288 | 1(Win) |
| std::from_chars | 337.829 | 0.213744 | 40.7115ms | 80000 | 30 | 6.99028e+06 | 225836 | 2(Loss) |
| strtoll/strtoull | 267.171 | 0.235475 | 51.5798ms | 80000 | 30 | 1.35647e+07 | 285562 | 3(Loss) |
