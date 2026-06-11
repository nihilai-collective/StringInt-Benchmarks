# str-to-int  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 752.505 | 0.130691 | 0.048934ms | 100 | 30 | 0.822989 | 126.733 | 1(Win) |
| std::from_chars | 411.007 | 0.0565266 | 0.070447ms | 100 | 30 | 0.516092 | 232.033 | 2(Loss) |
| strtoll/strtoull | 156.657 | 0.278979 | 0.137959ms | 100 | 30 | 86.5299 | 608.767 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 907.714 | 0.0894835 | 0.229414ms | 1000 | 30 | 26.5161 | 1050.63 | 1(Win) |
| std::from_chars | 439.562 | 0.0258286 | 0.427845ms | 1000 | 30 | 9.42069 | 2169.6 | 2(Loss) |
| strtoll/strtoull | 151.762 | 0.988714 | 1.22517ms | 1000 | 30 | 115807 | 6284 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 300.739 | 0.693395 | 6.54458ms | 10000 | 30 | 1.45045e+06 | 31711 | 1(Win) |
| std::from_chars | 165.942 | 1.30306 | 10.3614ms | 10000 | 30 | 1.68243e+07 | 57470.2 | 2(Loss) |
| strtoll/strtoull | 87.9407 | 1.84935 | 18.8833ms | 10000 | 30 | 1.20664e+08 | 108445 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 162.694 | 1.65189 | 104.11ms | 100000 | 30 | 2.81279e+09 | 586176 | 1(Win) |
| std::from_chars | 140.987 | 2.05372 | 122.426ms | 100000 | 30 | 5.78951e+09 | 676426 | 2(Loss) |
| strtoll/strtoull | 87.8692 | 2.01167 | 195.715ms | 100000 | 30 | 1.43008e+10 | 1.08533e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 731.158 | 0.130913 | 0.051337ms | 100 | 30 | 0.874713 | 130.433 | 1(Win) |
| std::from_chars | 433.16 | 0.0656336 | 0.066193ms | 100 | 30 | 0.626437 | 220.167 | 2(Loss) |
| strtoll/strtoull | 172.123 | 0.0334404 | 0.132313ms | 100 | 30 | 1.02989 | 554.067 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 733.671 | 0.0666735 | 0.255228ms | 1000 | 30 | 22.5333 | 1299.87 | 1(Win) |
| std::from_chars | 473.491 | 0.0460817 | 0.425537ms | 1000 | 30 | 25.8437 | 2014.13 | 2(Loss) |
| strtoll/strtoull | 154.169 | 0.0972186 | 1.15519ms | 1000 | 30 | 1084.99 | 6185.9 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 862.671 | 0.109631 | 2.15726ms | 10000 | 30 | 4406.58 | 11054.9 | 1(Win) |
| std::from_chars | 260.913 | 1.10374 | 34.4995ms | 10000 | 48 | 7.8124e+06 | 36551.4 | 2(Loss) |
| strtoll/strtoull | 132.146 | 1.12672 | 13.4461ms | 10000 | 30 | 1.98354e+07 | 72168 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 302.94 | 0.270479 | 142.207ms | 100000 | 30 | 2.17508e+07 | 314807 | 1(Win) |
| std::from_chars | 230.66 | 0.632782 | 178.427ms | 100000 | 30 | 2.05346e+08 | 413455 | 2(Loss) |
| strtoll/strtoull | 123.607 | 1.9105 | 139.019ms | 100000 | 30 | 6.51823e+09 | 771539 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 704.859 | 0.0947568 | 0.053699ms | 100 | 30 | 0.493103 | 135.3 | 1(Win) |
| std::from_chars | 441.993 | 0.0615951 | 0.065712ms | 100 | 30 | 0.529885 | 215.767 | 2(Loss) |
| strtoll/strtoull | 92.098 | 0.0933833 | 0.262833ms | 100 | 30 | 28.0517 | 1035.5 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 976.159 | 0.0682649 | 0.204665ms | 1000 | 30 | 13.3437 | 976.967 | 1(Win) |
| std::from_chars | 474.315 | 0.0756529 | 0.407254ms | 1000 | 30 | 69.4126 | 2010.63 | 2(Loss) |
| strtoll/strtoull | 162.133 | 0.222161 | 2.64183ms | 1000 | 30 | 5122.86 | 5882.03 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 816.143 | 2.04578 | 3.14559ms | 10000 | 30 | 1.71438e+06 | 11685.1 | 1(Win) |
| std::from_chars | 291.997 | 0.875983 | 14.5717ms | 10000 | 30 | 2.45559e+06 | 32660.4 | 2(Loss) |
| strtoll/strtoull | 135.31 | 1.89086 | 13.3003ms | 10000 | 30 | 5.32817e+07 | 70480.5 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.755 | 1.65592 | 53.8529ms | 100000 | 30 | 6.96467e+08 | 290971 | 1(Win) |
| std::from_chars | 241.256 | 1.62778 | 358.45ms | 100000 | 48 | 1.98736e+09 | 395296 | 2(Loss) |
| strtoll/strtoull | 127.267 | 1.94809 | 668.869ms | 100000 | 48 | 1.02289e+10 | 749350 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 722.298 | 0.190373 | 0.116119ms | 100 | 30 | 1.8954 | 132.033 | 1(Win) |
| std::from_chars | 272.946 | 0.0906099 | 0.137564ms | 100 | 30 | 3.0069 | 349.4 | 2(Loss) |
| strtoll/strtoull | 146.112 | 0.236457 | 0.152662ms | 100 | 30 | 71.4586 | 652.7 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 864.645 | 0.0397185 | 0.232086ms | 1000 | 30 | 5.75747 | 1102.97 | 1(Win) |
| std::from_chars | 402.27 | 0.0358337 | 0.460718ms | 1000 | 30 | 21.6506 | 2370.73 | 2(Loss) |
| strtoll/strtoull | 136.898 | 0.224974 | 1.30561ms | 1000 | 30 | 7368.78 | 6966.33 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 528.364 | 0.0780434 | 3.67397ms | 10000 | 30 | 5952.87 | 18049.6 | 1(Win) |
| std::from_chars | 258.768 | 0.641668 | 16.6836ms | 10000 | 30 | 1.67773e+06 | 36854.5 | 2(Loss) |
| strtoll/strtoull | 112.989 | 1.00315 | 15.3535ms | 10000 | 30 | 2.1507e+07 | 84404.2 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 266.713 | 0.711606 | 68.9245ms | 100000 | 30 | 1.94229e+08 | 357566 | 1(Win) |
| std::from_chars | 220.907 | 2.08033 | 77.0219ms | 100000 | 30 | 2.41975e+09 | 431709 | 2(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 791.54 | 0.164661 | 0.072244ms | 200 | 30 | 4.72299 | 240.967 | 1(Win) |
| std::from_chars | 627.968 | 0.0521962 | 0.087741ms | 200 | 30 | 0.754023 | 303.733 | 2(Loss) |
| strtoll/strtoull | 239.396 | 0.0224631 | 0.176787ms | 200 | 30 | 0.96092 | 796.733 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 766.681 | 0.0648545 | 1.47411ms | 2000 | 30 | 78.0966 | 2487.8 | 1(Win) |
| std::from_chars | 541.25 | 0.451693 | 0.715828ms | 2000 | 30 | 7601 | 3523.97 | 2(Loss) |
| strtoll/strtoull | 201.088 | 0.147257 | 1.71651ms | 2000 | 30 | 5852.74 | 9485.13 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 450.756 | 2.11021 | 8.3686ms | 20000 | 30 | 2.39193e+07 | 42314.5 | 1(Win) |
| std::from_chars | 238.592 | 1.99766 | 34.6815ms | 20000 | 30 | 7.65093e+07 | 79942 | 2(Loss) |
| strtoll/strtoull | 155.746 | 2.42088 | 23.9508ms | 20000 | 30 | 2.6369e+08 | 122466 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 284.18 | 2.39987 | 133.284ms | 200000 | 30 | 7.78339e+09 | 671176 | 1(Win) |
| std::from_chars | 243.06 | 1.62428 | 707.103ms | 200000 | 48 | 7.79825e+09 | 784725 | 2(Loss) |
| strtoll/strtoull | 148.125 | 1.37086 | 543.616ms | 200000 | 30 | 9.34785e+09 | 1.28766e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 805.241 | 0.124341 | 0.075314ms | 200 | 30 | 2.6023 | 236.867 | 1(Win) |
| std::from_chars | 617.731 | 0.029802 | 0.081744ms | 200 | 30 | 0.254023 | 308.767 | 2(Loss) |
| strtoll/strtoull | 225.437 | 0.167721 | 0.40296ms | 200 | 30 | 60.4092 | 846.067 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 841.391 | 0.0511718 | 0.450885ms | 2000 | 30 | 40.369 | 2266.9 | 1(Win) |
| std::from_chars | 422.089 | 0.513684 | 1.15068ms | 2000 | 30 | 16164.6 | 4518.83 | 2(Loss) |
| strtoll/strtoull | 211.247 | 0.198602 | 1.69237ms | 2000 | 30 | 9646.48 | 9029 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 769.937 | 0.634587 | 5.42643ms | 20000 | 30 | 741402 | 24772.8 | 1(Win) |
| std::from_chars | 373.02 | 1.34873 | 22.3722ms | 20000 | 30 | 1.4268e+07 | 51132.6 | 2(Loss) |
| strtoll/strtoull | 211.646 | 0.74285 | 18.0033ms | 20000 | 30 | 1.34451e+07 | 90119.9 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 464.639 | 2.04672 | 173.137ms | 200000 | 30 | 2.11771e+09 | 410501 | 1(Win) |
| std::from_chars | 409.169 | 0.284562 | 88.9888ms | 200000 | 30 | 5.27873e+07 | 466152 | 2(Loss) |
| strtoll/strtoull | 187.64 | 2.45961 | 180.785ms | 200000 | 30 | 1.87527e+10 | 1.0165e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 813.253 | 0.148455 | 0.06826ms | 200 | 30 | 3.63678 | 234.533 | 1(Win) |
| std::from_chars | 597.79 | 0.0540417 | 0.086866ms | 200 | 30 | 0.891954 | 319.067 | 2(Loss) |
| strtoll/strtoull | 201.027 | 0.37519 | 0.199289ms | 200 | 30 | 380.166 | 948.8 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 895.637 | 0.121985 | 0.41237ms | 2000 | 30 | 202.455 | 2129.6 | 1(Win) |
| std::from_chars | 640.652 | 0.0527874 | 0.610061ms | 2000 | 30 | 74.0966 | 2977.2 | 2(Loss) |
| strtoll/strtoull | 217.352 | 0.137 | 3.94527ms | 2000 | 30 | 4336.04 | 8775.4 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 797.924 | 0.954701 | 4.45964ms | 20000 | 30 | 1.5624e+06 | 23903.9 | 1(Win) |
| std::from_chars | 401.794 | 0.383012 | 8.71931ms | 20000 | 30 | 991748 | 47470.9 | 2(Loss) |
| strtoll/strtoull | 204.555 | 1.90535 | 18.3693ms | 20000 | 30 | 9.46913e+07 | 93243.8 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 467.008 | 2.4674 | 72.0133ms | 200000 | 30 | 3.04658e+09 | 408419 | 1(Win) |
| std::from_chars | 398.948 | 2.46081 | 205.939ms | 200000 | 30 | 4.15245e+09 | 478094 | 2(Loss) |
| strtoll/strtoull | 200.928 | 1.62845 | 173.591ms | 200000 | 30 | 7.16884e+09 | 949270 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 784.272 | 0.128373 | 0.073256ms | 200 | 30 | 2.92414 | 243.2 | 1(Win) |
| std::from_chars | 579.389 | 0.0305508 | 0.091808ms | 200 | 30 | 0.303448 | 329.2 | 2(Loss) |
| strtoll/strtoull | 209.752 | 0.318391 | 0.19263ms | 200 | 30 | 251.471 | 909.333 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 749.94 | 0.137532 | 1.61982ms | 2000 | 30 | 367.057 | 2543.33 | 1(Win) |
| std::from_chars | 589.938 | 0.152873 | 0.610867ms | 2000 | 30 | 732.878 | 3233.13 | 2(Loss) |
| strtoll/strtoull | 226.447 | 0.0697027 | 1.55565ms | 2000 | 30 | 1034.06 | 8422.93 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 839.549 | 0.266915 | 4.88965ms | 20000 | 30 | 110315 | 22718.7 | 1(Win) |
| std::from_chars | 556.982 | 0.992984 | 6.13877ms | 20000 | 30 | 3.46883e+06 | 34244.3 | 2(Loss) |
| strtoll/strtoull | 219.232 | 0.867082 | 16.8033ms | 20000 | 30 | 1.70725e+07 | 87001.5 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 628.62 | 0.556778 | 58.7053ms | 200000 | 30 | 8.56187e+07 | 303418 | 1(Win) |
| std::from_chars | 542.822 | 0.850585 | 66.6759ms | 200000 | 30 | 2.6798e+08 | 351377 | 2(Loss) |
| strtoll/strtoull | 210.734 | 1.44554 | 163.925ms | 200000 | 30 | 5.13537e+09 | 905097 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 889.138 | 0.0636934 | 0.113962ms | 400 | 30 | 2.24023 | 429.033 | 1(Win) |
| std::from_chars | 703.386 | 0.0725444 | 0.137483ms | 400 | 30 | 4.64368 | 542.333 | 2(Loss) |
| strtoll/strtoull | 178.44 | 0.0321432 | 0.439322ms | 400 | 30 | 14.1655 | 2137.8 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 936.842 | 0.0324558 | 0.819306ms | 4000 | 30 | 52.3954 | 4071.87 | 1(Win) |
| std::from_chars | 630.337 | 0.226121 | 3.06534ms | 4000 | 30 | 5617.94 | 6051.83 | 2(Loss) |
| strtoll/strtoull | 288.219 | 2.12967 | 2.40335ms | 4000 | 30 | 2.38352e+06 | 13235.4 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 612.061 | 1.06244 | 28.0937ms | 40000 | 30 | 1.3154e+07 | 62325.4 | 1(Win) |
| std::from_chars | 353.55 | 0.585359 | 47.612ms | 40000 | 30 | 1.1967e+07 | 107897 | 2(Loss) |
| strtoll/strtoull | 248.921 | 1.3848 | 66.4773ms | 40000 | 30 | 1.35111e+08 | 153249 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 415.59 | 2.22673 | 169.109ms | 400000 | 30 | 1.25328e+10 | 917899 | 1(Win) |
| std::from_chars | 315.547 | 2.28148 | 215.383ms | 400000 | 30 | 2.28218e+10 | 1.20892e+06 | 2(Loss) |
| strtoll/strtoull | 230.885 | 1.93439 | 686.592ms | 400000 | 30 | 3.06437e+10 | 1.65221e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 927.699 | 0.0998965 | 0.100764ms | 400 | 30 | 5.06207 | 411.2 | 1(Win) |
| std::from_chars | 724.264 | 0.0878584 | 0.119883ms | 400 | 30 | 6.42414 | 526.7 | 2(Loss) |
| strtoll/strtoull | 290.179 | 0.339673 | 0.271666ms | 400 | 30 | 598.179 | 1314.6 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 977.743 | 0.0377524 | 0.734811ms | 4000 | 30 | 65.0851 | 3901.53 | 1(Win) |
| std::from_chars | 681.805 | 0.0680884 | 1.05035ms | 4000 | 30 | 435.379 | 5595 | 2(Loss) |
| strtoll/strtoull | 305.25 | 0.0884081 | 2.58348ms | 4000 | 30 | 3661.96 | 12497 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 760.161 | 0.84936 | 9.30887ms | 40000 | 30 | 5.45021e+06 | 50182.7 | 1(Win) |
| std::from_chars | 485.536 | 1.11452 | 35.7137ms | 40000 | 30 | 2.30024e+07 | 78566.7 | 2(Loss) |
| strtoll/strtoull | 312.213 | 1.12773 | 23.8094ms | 40000 | 30 | 5.6957e+07 | 122183 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 608.823 | 0.829 | 278.945ms | 400000 | 30 | 8.09411e+08 | 626569 | 1(Win) |
| std::from_chars | 453.942 | 2.15238 | 365.071ms | 400000 | 30 | 9.81472e+09 | 840349 | 2(Loss) |
| strtoll/strtoull | 281.627 | 1.8078 | 253.065ms | 400000 | 30 | 1.79885e+10 | 1.35452e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 863.575 | 0.081899 | 0.1071ms | 400 | 30 | 3.92644 | 441.733 | 1(Win) |
| std::from_chars | 718.173 | 0.0847172 | 0.122784ms | 400 | 30 | 6.07471 | 531.167 | 2(Loss) |
| strtoll/strtoull | 338.502 | 0.226811 | 0.234328ms | 400 | 30 | 195.995 | 1126.93 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 901.216 | 0.0417587 | 0.810268ms | 4000 | 30 | 93.7299 | 4232.83 | 1(Win) |
| std::from_chars | 694.52 | 0.0754451 | 1.02135ms | 4000 | 30 | 515.151 | 5492.57 | 2(Loss) |
| strtoll/strtoull | 344.345 | 0.227709 | 2.19251ms | 4000 | 30 | 19090.4 | 11078.1 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 833.821 | 0.44511 | 9.50965ms | 40000 | 30 | 1.24403e+06 | 45749.6 | 1(Win) |
| std::from_chars | 476.043 | 0.505359 | 75.9639ms | 40000 | 48 | 7.87171e+06 | 80133.5 | 2(Loss) |
| strtoll/strtoull | 298.739 | 1.87168 | 23.9119ms | 40000 | 30 | 1.71365e+08 | 127693 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 550.392 | 2.24751 | 288.226ms | 400000 | 30 | 7.27951e+09 | 693087 | 1(Win) |
| std::from_chars | 448.224 | 1.47807 | 788.22ms | 400000 | 48 | 7.59555e+09 | 851069 | 2(Loss) |
| strtoll/strtoull | 286.313 | 1.93927 | 247.502ms | 400000 | 30 | 2.0028e+10 | 1.33235e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 837.168 | 0.0796731 | 0.107671ms | 400 | 30 | 3.95402 | 455.667 | 1(Win) |
| std::from_chars | 666.323 | 0.574872 | 0.133654ms | 400 | 30 | 324.948 | 572.5 | 2(Loss) |
| strtoll/strtoull | 328.485 | 0.557144 | 0.236175ms | 400 | 30 | 1255.87 | 1161.3 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 827.011 | 0.0978939 | 0.958589ms | 4000 | 30 | 611.689 | 4612.63 | 1(Win) |
| strtoll/strtoull | 314.974 | 0.339824 | 2.17688ms | 4000 | 30 | 50815.9 | 12111.1 | 2(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 888.579 | 0.0419287 | 8.1105ms | 40000 | 30 | 9720.15 | 42930.3 | 1(Win) |
| std::from_chars | 614.018 | 1.31237 | 12.6045ms | 40000 | 30 | 1.99432e+07 | 62126.8 | 2(Loss) |
| strtoll/strtoull | 320.927 | 1.30219 | 22.6465ms | 40000 | 30 | 7.18754e+07 | 118865 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 719.928 | 1.74453 | 493.274ms | 400000 | 48 | 4.10145e+09 | 529872 | 1(Win) |
| std::from_chars | 620.132 | 1.52268 | 568.313ms | 400000 | 48 | 4.21127e+09 | 615143 | 2(Loss) |
| strtoll/strtoull | 293.953 | 2.40518 | 554.289ms | 400000 | 30 | 2.92268e+10 | 1.29772e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1067.3 | 0.0643637 | 0.163278ms | 800 | 30 | 6.35057 | 714.833 | 1(Win) |
| std::from_chars | 792.198 | 0.135057 | 0.211023ms | 800 | 30 | 50.754 | 963.067 | 2(Loss) |
| strtoll/strtoull | 404.864 | 1.91045 | 0.45144ms | 800 | 30 | 38882.7 | 1884.43 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1074.44 | 0.0809029 | 3.04445ms | 8000 | 30 | 990.075 | 7100.83 | 1(Win) |
| std::from_chars | 753.689 | 0.24308 | 4.59833ms | 8000 | 30 | 18164.2 | 10122.7 | 2(Loss) |
| strtoll/strtoull | 369.853 | 2.07001 | 4.12562ms | 8000 | 30 | 5.47003e+06 | 20628.2 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 783.954 | 1.305 | 19.3146ms | 80000 | 30 | 4.83886e+07 | 97319.4 | 1(Win) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 701.156 | 1.79202 | 196.951ms | 800000 | 30 | 1.14066e+10 | 1.08812e+06 | 1(Win) |
| std::from_chars | 586.308 | 2.076 | 237.796ms | 800000 | 30 | 2.1893e+10 | 1.30126e+06 | 2(Loss) |
| strtoll/strtoull | 360.797 | 1.90647 | 1927.59ms | 800000 | 48 | 7.80109e+10 | 2.11459e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 789.901 | 0.0737517 | 0.200136ms | 800 | 30 | 15.223 | 965.867 | 1(Win) |
| vn::from_chars | 667.002 | 0.0229909 | 0.25587ms | 800 | 30 | 2.07471 | 1143.83 | 2(Loss) |
| strtoll/strtoull | 435.542 | 0.360285 | 0.398436ms | 800 | 30 | 1194.91 | 1751.7 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1051.48 | 0.0524228 | 1.3431ms | 8000 | 30 | 434.051 | 7255.87 | 1(Win) |
| std::from_chars | 801.32 | 0.0775918 | 1.82214ms | 8000 | 30 | 1637.27 | 9521.03 | 2(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1043.37 | 1.19191 | 13.1523ms | 80000 | 30 | 2.27881e+07 | 73122.5 | 1(Win) |
| std::from_chars | 785.208 | 0.592904 | 17.9934ms | 80000 | 30 | 9.95635e+06 | 97163.9 | 2(Loss) |
| strtoll/strtoull | 373.639 | 2.42674 | 89.8869ms | 80000 | 30 | 7.36617e+08 | 204191 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 966.361 | 1.81294 | 143.255ms | 800000 | 30 | 6.14594e+09 | 789498 | 1(Win) |
| std::from_chars | 762.4 | 1.94712 | 184.574ms | 800000 | 30 | 1.13899e+10 | 1.00071e+06 | 2(Loss) |
| strtoll/strtoull | 330.51 | 1.42581 | 417.352ms | 800000 | 30 | 3.2498e+10 | 2.30837e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1032.67 | 0.0732509 | 0.163874ms | 800 | 30 | 8.78621 | 738.8 | 1(Win) |
| std::from_chars | 814.555 | 0.0735577 | 0.196599ms | 800 | 30 | 14.2402 | 936.633 | 2(Loss) |
| strtoll/strtoull | 390.703 | 0.0506143 | 0.418379ms | 800 | 30 | 29.3057 | 1952.73 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1024.71 | 0.0318988 | 3.17962ms | 8000 | 30 | 169.22 | 7445.43 | 1(Win) |
| std::from_chars | 681.372 | 0.163599 | 2.92431ms | 8000 | 30 | 10066.9 | 11197.1 | 2(Loss) |
| strtoll/strtoull | 346.112 | 0.0911164 | 3.64188ms | 8000 | 30 | 12102.1 | 22043.1 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 879.284 | 0.396221 | 17.1867ms | 80000 | 30 | 3.54584e+06 | 86768.3 | 1(Win) |
| std::from_chars | 788.171 | 0.583368 | 17.7924ms | 80000 | 30 | 9.56635e+06 | 96798.8 | 2(Loss) |
| strtoll/strtoull | 370.698 | 1.07413 | 37.6189ms | 80000 | 30 | 1.46614e+08 | 205811 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 791.332 | 2.02061 | 175.95ms | 800000 | 30 | 1.13854e+10 | 964121 | 1(Win) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 793.571 | 0.175587 | 0.205767ms | 800 | 30 | 85.4897 | 961.4 | 1(Win) |
| vn::from_chars | 612.147 | 0.0310949 | 0.267543ms | 800 | 30 | 4.50575 | 1246.33 | 2(Loss) |
| strtoll/strtoull | 360.609 | 0.147324 | 0.413605ms | 800 | 30 | 291.459 | 2115.7 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 1076.72 | 0.0894895 | 1.31637ms | 8000 | 30 | 1206.25 | 7085.77 | 1(Win) |
| std::from_chars | 670.28 | 0.0636961 | 2.13386ms | 8000 | 30 | 1576.94 | 11382.4 | 2(Loss) |
| strtoll/strtoull | 355.354 | 0.414923 | 4.38448ms | 8000 | 30 | 238076 | 21469.9 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 976.924 | 0.985196 | 15.7201ms | 80000 | 30 | 1.77593e+07 | 78096.1 | 1(Win) |
| std::from_chars | 604.457 | 1.1103 | 23.1737ms | 80000 | 30 | 5.89185e+07 | 126219 | 2(Loss) |
| strtoll/strtoull | 352.376 | 0.897752 | 40.7647ms | 80000 | 30 | 1.13345e+08 | 216513 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Linux-Clang/str-to-int/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 791.383 | 2.23721 | 181.349ms | 800000 | 30 | 1.39554e+10 | 964058 | 1(Win) |
| std::from_chars | 615.409 | 1.78686 | 223.964ms | 800000 | 30 | 1.47215e+10 | 1.23973e+06 | 2(Loss) |
| strtoll/strtoull | 331.675 | 2.18421 | 969.415ms | 800000 | 30 | 7.57293e+10 | 2.30026e+06 | 3(Loss) |
