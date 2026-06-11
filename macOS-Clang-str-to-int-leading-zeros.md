# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 228.9 | 0.0214782 | 0.183ms | 100 | 30 | 0.24023 | 416.633 | 1(Win) |
| std::from_chars | 147.354 | 0.595912 | 0.332792ms | 100 | 30 | 446.234 | 647.2 | 2(Loss) |
| strtoll/strtoull | 45.0548 | 0.446832 | 0.48575ms | 100 | 30 | 2683.67 | 2116.7 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.962 | 0.208776 | 0.88225ms | 1000 | 30 | 2480.53 | 4355.43 | 1(Win) |
| std::from_chars | 140.364 | 1.24709 | 1.24929ms | 1000 | 30 | 215379 | 6794.3 | 2(Loss) |
| strtoll/strtoull | 36.0691 | 0.130619 | 4.92204ms | 1000 | 30 | 35781.9 | 26440.2 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 65.2928 | 1.48699 | 27.9625ms | 10000 | 30 | 1.41517e+08 | 146061 | 1(Win) |
| std::from_chars | 54.0058 | 0.564088 | 32.6753ms | 10000 | 30 | 2.9767e+07 | 176588 | 2(Loss) |
| strtoll/strtoull | 35.2868 | 0.11987 | 48.7645ms | 10000 | 30 | 3.14858e+06 | 270264 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 48.3495 | 0.0286052 | 362.988ms | 100000 | 30 | 9.5505e+06 | 1.97246e+06 | 1(Win) |
| std::from_chars | 46.3097 | 0.172595 | 371.703ms | 100000 | 30 | 3.78995e+08 | 2.05934e+06 | 2(Loss) |
| strtoll/strtoull | 32.9431 | 0.110316 | 519.168ms | 100000 | 30 | 3.05963e+08 | 2.89491e+06 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.184 | 0.804553 | 0.136166ms | 100 | 30 | 440.731 | 476.4 | 1(Win) |
| std::from_chars | 135.164 | 0.393941 | 1.59446ms | 100 | 30 | 231.771 | 705.567 | 2(Loss) |
| strtoll/strtoull | 38.4443 | 0.416505 | 1.37533ms | 100 | 30 | 3202.57 | 2480.67 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 218.329 | 0.917542 | 1.44725ms | 1000 | 30 | 48189.4 | 4368.07 | 1(Win) |
| std::from_chars | 143.35 | 0.233245 | 3.03733ms | 1000 | 30 | 7223.56 | 6652.77 | 2(Loss) |
| strtoll/strtoull | 38.5173 | 0.784663 | 4.44171ms | 1000 | 30 | 1.13234e+06 | 24759.6 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 65.3892 | 0.142025 | 26.653ms | 10000 | 30 | 1.28717e+06 | 145846 | 1(Win) |
| std::from_chars | 52.2287 | 1.22578 | 31.5153ms | 10000 | 30 | 1.50289e+08 | 182596 | 2(Loss) |
| strtoll/strtoull | 38.8469 | 0.298321 | 44.2869ms | 10000 | 30 | 1.60908e+07 | 245496 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 51.2721 | 0.185388 | 333.897ms | 100000 | 30 | 3.56716e+08 | 1.86003e+06 | 1(Win) |
| std::from_chars | 48.6319 | 0.175359 | 353.929ms | 100000 | 30 | 3.54758e+08 | 1.961e+06 | 2(Loss) |
| strtoll/strtoull | 39.3043 | 0.211728 | 441.956ms | 100000 | 30 | 7.91766e+08 | 2.42639e+06 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 240.928 | 0.977469 | 0.9805ms | 100 | 30 | 449.109 | 395.833 | 1(Win) |
| std::from_chars | 140.701 | 0.50529 | 1.56842ms | 100 | 30 | 351.89 | 677.8 | 2(Loss) |
| strtoll/strtoull | 38.9022 | 0.375348 | 0.54475ms | 100 | 30 | 2540.05 | 2451.47 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 241.182 | 0.354754 | 1.79383ms | 1000 | 30 | 5903.18 | 3954.17 | 1(Win) |
| std::from_chars | 137.684 | 1.27051 | 1.3675ms | 1000 | 30 | 232332 | 6926.53 | 2(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 73.8186 | 1.25671 | 59.4695ms | 10000 | 30 | 7.90791e+07 | 129192 | 1(Win) |
| std::from_chars | 52.3434 | 0.693286 | 33.2874ms | 10000 | 30 | 4.78655e+07 | 182196 | 2(Loss) |
| strtoll/strtoull | 35.8605 | 1.4042 | 48.2119ms | 10000 | 30 | 4.18358e+08 | 265940 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 54.8431 | 0.162468 | 313.494ms | 100000 | 30 | 2.39448e+08 | 1.73891e+06 | 1(Win) |
| std::from_chars | 45.759 | 0.208938 | 364.484ms | 100000 | 30 | 5.68861e+08 | 2.08413e+06 | 2(Loss) |
| strtoll/strtoull | 38.7998 | 0.223558 | 437.507ms | 100000 | 30 | 9.05817e+08 | 2.45793e+06 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 213.908 | 1.19765 | 1.86517ms | 100 | 30 | 855.316 | 445.833 | 1(Win) |
| std::from_chars | 150.572 | 0.663688 | 2.20808ms | 100 | 30 | 530.102 | 633.367 | 2(Loss) |
| strtoll/strtoull | 38.9668 | 0.325705 | 1.54917ms | 100 | 30 | 1906.25 | 2447.4 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 239.422 | 0.0957356 | 2.24204ms | 1000 | 30 | 436.254 | 3983.23 | 1(Win) |
| std::from_chars | 144.8 | 0.0599653 | 1.24883ms | 1000 | 30 | 467.937 | 6586.17 | 2(Loss) |
| strtoll/strtoull | 38.5213 | 1.22114 | 4.46017ms | 1000 | 30 | 2.74187e+06 | 24757 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 66.2517 | 2.40468 | 23.7445ms | 10000 | 30 | 3.59455e+08 | 143947 | 1(Win) |
| std::from_chars | 51.9383 | 0.325074 | 33.3602ms | 10000 | 30 | 1.06884e+07 | 183617 | 2(Loss) |
| strtoll/strtoull | 41.3269 | 0.118143 | 41.7177ms | 10000 | 30 | 2.22983e+06 | 230764 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars | 51.6257 | 0.0502711 | 338.828ms | 100000 | 30 | 2.58718e+07 | 1.84729e+06 | 1(Win) |
| vn::from_chars | 51.3579 | 0.137452 | 330.325ms | 100000 | 30 | 1.95437e+08 | 1.85692e+06 | 2(Loss) |
| strtoll/strtoull | 38.8093 | 0.0787804 | 443.064ms | 100000 | 30 | 1.12431e+08 | 2.45733e+06 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.725 | 0.570667 | 1.81321ms | 200 | 30 | 345.528 | 594.7 | 1(Win) |
| std::from_chars | 224.764 | 0.439638 | 0.214458ms | 200 | 30 | 417.559 | 848.6 | 2(Loss) |
| strtoll/strtoull | 69.7513 | 0.306224 | 0.526959ms | 200 | 30 | 2103.57 | 2734.5 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 305.582 | 0.359875 | 1.17613ms | 2000 | 30 | 15136.7 | 6241.7 | 1(Win) |
| std::from_chars | 217.434 | 0.197074 | 1.66871ms | 2000 | 30 | 8965.72 | 8772.07 | 2(Loss) |
| strtoll/strtoull | 65.4821 | 0.0194148 | 5.28458ms | 2000 | 30 | 959.407 | 29127.8 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 133.681 | 1.22618 | 30.4038ms | 20000 | 30 | 9.18225e+07 | 142679 | 1(Win) |
| std::from_chars | 93.4269 | 0.596118 | 37.214ms | 20000 | 30 | 4.44325e+07 | 204154 | 2(Loss) |
| strtoll/strtoull | 61.5743 | 0.311453 | 56.1651ms | 20000 | 30 | 2.79235e+07 | 309764 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| std::from_chars **STATISTICAL TIE** | 90.6074 | 0.0413313 | 379.149ms | 200000 | 30 | 2.27097e+07 | 2.10507e+06 | 1(Tie) |
| vn::from_chars **STATISTICAL TIE** | 89.5385 | 2.3207 | 385.981ms | 200000 | 30 | 7.33164e+10 | 2.1302e+06 | 1(Tie) |
| strtoll/strtoull | 60.7066 | 0.0715939 | 567.064ms | 200000 | 30 | 1.51797e+08 | 3.14191e+06 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 290.327 | 0.897567 | 1.49308ms | 200 | 30 | 1043.14 | 656.967 | 1(Win) |
| std::from_chars | 223.683 | 0.454312 | 1.83662ms | 200 | 30 | 450.217 | 852.7 | 2(Loss) |
| strtoll/strtoull | 70.4989 | 0.12627 | 0.535875ms | 200 | 30 | 350.121 | 2705.5 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 306.133 | 1.32259 | 2.22512ms | 2000 | 30 | 203710 | 6230.47 | 1(Win) |
| std::from_chars | 218.638 | 0.886682 | 1.63917ms | 2000 | 30 | 179500 | 8723.77 | 2(Loss) |
| strtoll/strtoull | 71.5588 | 0.862012 | 4.86408ms | 2000 | 30 | 1.58374e+06 | 26654.3 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 146.638 | 0.754783 | 24.7863ms | 20000 | 30 | 2.89157e+07 | 130072 | 1(Win) |
| std::from_chars | 94.5507 | 0.645384 | 36.9651ms | 20000 | 30 | 5.08497e+07 | 201728 | 2(Loss) |
| strtoll/strtoull | 70.5015 | 0.202281 | 48.9342ms | 20000 | 30 | 8.98454e+06 | 270540 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 107.048 | 0.100697 | 321.247ms | 200000 | 30 | 9.6574e+07 | 1.78178e+06 | 1(Win) |
| std::from_chars | 90.4498 | 0.14657 | 378.948ms | 200000 | 30 | 2.86585e+08 | 2.10874e+06 | 2(Loss) |
| strtoll/strtoull | 72.2709 | 0.222603 | 483.485ms | 200000 | 30 | 1.03542e+09 | 2.63917e+06 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 320.76 | 1.29994 | 1.86871ms | 200 | 30 | 1792.52 | 594.633 | 1(Win) |
| std::from_chars | 221.142 | 0.411131 | 0.19125ms | 200 | 30 | 377.224 | 862.5 | 2(Loss) |
| strtoll/strtoull | 70.7491 | 0.364156 | 0.525459ms | 200 | 30 | 2891.44 | 2695.93 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 322.294 | 0.269053 | 1.34392ms | 2000 | 30 | 7605.9 | 5918.03 | 1(Win) |
| std::from_chars | 218.991 | 0.215782 | 2.62621ms | 2000 | 30 | 10596.4 | 8709.7 | 2(Loss) |
| strtoll/strtoull | 70.733 | 0.995792 | 5.12917ms | 2000 | 30 | 2.16309e+06 | 26965.5 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 155.661 | 1.09036 | 23.7437ms | 20000 | 30 | 5.35498e+07 | 122532 | 1(Win) |
| std::from_chars | 94.1165 | 0.324584 | 37.2389ms | 20000 | 30 | 1.29809e+07 | 202658 | 2(Loss) |
| strtoll/strtoull | 74.1022 | 0.108655 | 46.394ms | 20000 | 30 | 2.3465e+06 | 257394 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 109.738 | 0.144517 | 313.108ms | 200000 | 30 | 1.89278e+08 | 1.73809e+06 | 1(Win) |
| std::from_chars | 89.1261 | 0.25122 | 400.251ms | 200000 | 30 | 8.67124e+08 | 2.14006e+06 | 2(Loss) |
| strtoll/strtoull | 70.7464 | 0.0837443 | 485.265ms | 200000 | 30 | 1.52927e+08 | 2.69604e+06 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 327.011 | 0.341409 | 1.48525ms | 200 | 30 | 118.961 | 583.267 | 1(Win) |
| std::from_chars | 291.584 | 0.541546 | 1.78708ms | 200 | 30 | 376.464 | 654.133 | 2(Loss) |
| strtoll/strtoull | 73.0514 | 0.369838 | 2.20912ms | 200 | 30 | 2797.34 | 2610.97 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 317.85 | 0.384202 | 5.54442ms | 2000 | 48 | 25514 | 6000.79 | 1(Win) |
| std::from_chars | 283.56 | 0.253437 | 2.44754ms | 2000 | 30 | 8718.25 | 6726.43 | 2(Loss) |
| strtoll/strtoull | 74.9081 | 0.637658 | 5.66092ms | 2000 | 30 | 790860 | 25462.5 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 154.908 | 1.63979 | 21.914ms | 20000 | 30 | 1.22296e+08 | 123128 | 1(Win) |
| std::from_chars | 104.645 | 0.991931 | 32.9895ms | 20000 | 30 | 9.80631e+07 | 182268 | 2(Loss) |
| strtoll/strtoull | 71.2953 | 0.279379 | 48.3327ms | 20000 | 30 | 1.67589e+07 | 267528 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 120.44 | 0.136722 | 278.071ms | 200000 | 30 | 1.40643e+08 | 1.58365e+06 | 1(Win) |
| std::from_chars | 93.4744 | 0.260964 | 370.427ms | 200000 | 30 | 8.50661e+08 | 2.0405e+06 | 2(Loss) |
| strtoll/strtoull | 70.8914 | 0.103092 | 484.286ms | 200000 | 30 | 2.30806e+08 | 2.69052e+06 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 413.652 | 0.417435 | 1.30846ms | 400 | 30 | 444.579 | 922.2 | 1(Win) |
| std::from_chars | 274.123 | 0.568687 | 2.29308ms | 400 | 30 | 1878.87 | 1391.6 | 2(Loss) |
| strtoll/strtoull | 111.424 | 0.30907 | 2.519ms | 400 | 30 | 3358.94 | 3423.6 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 399.739 | 0.228811 | 1.76554ms | 4000 | 30 | 14303.5 | 9542.97 | 1(Win) |
| std::from_chars | 269.906 | 0.145751 | 3.89825ms | 4000 | 30 | 12730.3 | 14133.4 | 2(Loss) |
| strtoll/strtoull | 110.942 | 0.0305915 | 6.22367ms | 4000 | 30 | 3319.34 | 34384.6 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 189.187 | 0.580391 | 36.3456ms | 40000 | 30 | 4.10866e+07 | 201636 | 1(Win) |
| std::from_chars | 152.315 | 0.224724 | 44.9685ms | 40000 | 30 | 9.50292e+06 | 250448 | 2(Loss) |
| strtoll/strtoull | 105.281 | 0.181931 | 65.5462ms | 40000 | 30 | 1.30364e+07 | 362336 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 172.606 | 0.148044 | 397.761ms | 400000 | 30 | 3.21151e+08 | 2.21006e+06 | 1(Win) |
| std::from_chars | 137.722 | 0.2134 | 1171.82ms | 400000 | 30 | 1.04815e+09 | 2.76986e+06 | 2(Loss) |
| strtoll/strtoull | 107.954 | 0.420681 | 637.531ms | 400000 | 30 | 6.62939e+09 | 3.53365e+06 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 390.184 | 0.530791 | 1.31725ms | 400 | 30 | 807.885 | 977.667 | 1(Win) |
| std::from_chars | 268.483 | 0.494308 | 0.338833ms | 400 | 30 | 1479.8 | 1420.83 | 2(Loss) |
| strtoll/strtoull | 122.724 | 0.121715 | 0.587917ms | 400 | 30 | 429.413 | 3108.37 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 417.983 | 0.0597838 | 2.70038ms | 4000 | 30 | 893.082 | 9126.43 | 1(Win) |
| std::from_chars | 284.354 | 0.0432752 | 2.49196ms | 4000 | 30 | 1011.11 | 13415.3 | 2(Loss) |
| strtoll/strtoull | 119.427 | 0.937825 | 6.25387ms | 4000 | 30 | 2.69205e+06 | 31941.8 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 219.158 | 0.0996305 | 31.6282ms | 40000 | 30 | 902213 | 174061 | 1(Win) |
| std::from_chars | 146.906 | 0.3559 | 47.4195ms | 40000 | 30 | 2.56224e+07 | 259670 | 2(Loss) |
| strtoll/strtoull | 119.748 | 0.181094 | 57.4938ms | 40000 | 30 | 9.9842e+06 | 318561 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 200.538 | 0.242991 | 340.176ms | 400000 | 30 | 6.40957e+08 | 1.90223e+06 | 1(Win) |
| std::from_chars | 147.482 | 0.0358512 | 466.625ms | 400000 | 30 | 2.5797e+07 | 2.58655e+06 | 2(Loss) |
| strtoll/strtoull | 124.618 | 0.189101 | 568.971ms | 400000 | 30 | 1.00523e+09 | 3.06112e+06 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 383.053 | 0.646972 | 0.469667ms | 400 | 30 | 1245.36 | 995.867 | 1(Win) |
| std::from_chars | 265.124 | 0.566865 | 2.01783ms | 400 | 30 | 1995.73 | 1438.83 | 2(Loss) |
| strtoll/strtoull | 116.827 | 0.337905 | 0.669083ms | 400 | 30 | 3652.13 | 3265.27 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 419.067 | 0.0715739 | 1.91925ms | 4000 | 30 | 1273.45 | 9102.83 | 1(Win) |
| std::from_chars | 274.002 | 0.405909 | 2.55737ms | 4000 | 30 | 95806 | 13922.2 | 2(Loss) |
| strtoll/strtoull | 119.131 | 0.696518 | 5.80508ms | 4000 | 30 | 1.49229e+06 | 32021 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 212.47 | 1.15899 | 32.055ms | 40000 | 30 | 1.29898e+08 | 179540 | 1(Win) |
| std::from_chars | 146.616 | 0.276453 | 47.3356ms | 40000 | 30 | 1.55211e+07 | 260183 | 2(Loss) |
| strtoll/strtoull | 124.88 | 0.108547 | 54.9899ms | 40000 | 30 | 3.29827e+06 | 305468 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 199.576 | 0.135488 | 347.27ms | 400000 | 30 | 2.01198e+08 | 1.9114e+06 | 1(Win) |
| std::from_chars | 146.836 | 0.197401 | 466.912ms | 400000 | 30 | 7.88997e+08 | 2.59793e+06 | 2(Loss) |
| strtoll/strtoull | 124.858 | 0.26458 | 566.863ms | 400000 | 30 | 1.9603e+09 | 3.05524e+06 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 392.459 | 0.378249 | 1.44463ms | 400 | 30 | 405.517 | 972 | 1(Win) |
| std::from_chars | 323.517 | 0.301141 | 1.59004ms | 400 | 30 | 378.257 | 1179.13 | 2(Loss) |
| strtoll/strtoull | 120.306 | 0.460264 | 0.673875ms | 400 | 30 | 6389.73 | 3170.83 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 402.842 | 0.374696 | 1.75517ms | 4000 | 30 | 37768.5 | 9469.47 | 1(Win) |
| std::from_chars | 228.026 | 0.176311 | 3.07658ms | 4000 | 30 | 26099.6 | 16729.2 | 2(Loss) |
| strtoll/strtoull | 119.354 | 1.02928 | 5.78554ms | 4000 | 30 | 3.24661e+06 | 31961.1 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 251.077 | 0.616251 | 27.223ms | 40000 | 30 | 2.62992e+07 | 151933 | 1(Win) |
| std::from_chars | 163.263 | 0.44366 | 42.8626ms | 40000 | 30 | 3.22381e+07 | 233654 | 2(Loss) |
| strtoll/strtoull | 125.018 | 0.13672 | 54.9165ms | 40000 | 30 | 5.22105e+06 | 305132 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 222.104 | 0.124445 | 310.938ms | 400000 | 30 | 1.37051e+08 | 1.71753e+06 | 1(Win) |
| std::from_chars | 159.381 | 0.0489267 | 451.081ms | 400000 | 30 | 4.11394e+07 | 2.39344e+06 | 2(Loss) |
| strtoll/strtoull | 119.239 | 0.126087 | 575.662ms | 400000 | 30 | 4.88144e+08 | 3.19921e+06 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 498.936 | 0.265702 | 1.38208ms | 800 | 30 | 495.223 | 1529.13 | 1(Win) |
| std::from_chars | 309.129 | 0.22456 | 2.58746ms | 800 | 30 | 921.482 | 2468.03 | 2(Loss) |
| strtoll/strtoull | 167.273 | 0.286206 | 0.835083ms | 800 | 30 | 5112.17 | 4561.03 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 474.49 | 0.686663 | 2.94779ms | 8000 | 30 | 365707 | 16079.1 | 1(Win) |
| std::from_chars | 249.974 | 0.765473 | 5.72496ms | 8000 | 30 | 1.63746e+06 | 30520.7 | 2(Loss) |
| strtoll/strtoull | 172.529 | 0.572682 | 7.94175ms | 8000 | 30 | 1.924e+06 | 44221 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 363.675 | 0.412909 | 38.8304ms | 80000 | 30 | 2.25104e+07 | 209786 | 1(Win) |
| std::from_chars | 211.807 | 0.51626 | 67.361ms | 80000 | 30 | 1.03743e+08 | 360206 | 2(Loss) |
| strtoll/strtoull | 169.561 | 0.0932736 | 80.9092ms | 80000 | 30 | 5.28402e+06 | 449949 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 315.629 | 0.163701 | 418.565ms | 800000 | 30 | 4.69734e+08 | 2.4172e+06 | 1(Win) |
| std::from_chars | 209.236 | 0.119382 | 658.799ms | 800000 | 30 | 5.68468e+08 | 3.64631e+06 | 2(Loss) |
| strtoll/strtoull | 160.839 | 0.0596512 | 845.183ms | 800000 | 30 | 2.40193e+08 | 4.74351e+06 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 503.048 | 0.363206 | 0.3325ms | 800 | 30 | 910.309 | 1516.63 | 1(Win) |
| std::from_chars | 290.644 | 0.364867 | 1.64846ms | 800 | 30 | 2752 | 2625 | 2(Loss) |
| strtoll/strtoull | 172.251 | 1.80364 | 1.30967ms | 800 | 30 | 191461 | 4429.23 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 489.021 | 0.208216 | 2.83796ms | 8000 | 30 | 31657.5 | 15601.4 | 1(Win) |
| std::from_chars | 253.059 | 1.33193 | 5.54921ms | 8000 | 30 | 4.83745e+06 | 30148.6 | 2(Loss) |
| strtoll/strtoull | 188.219 | 0.0164367 | 7.32333ms | 8000 | 30 | 1331.69 | 40534.6 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 391.848 | 0.486377 | 35.3401ms | 80000 | 30 | 2.69037e+07 | 194703 | 1(Win) |
| std::from_chars | 214.161 | 0.217959 | 64.3806ms | 80000 | 30 | 1.80872e+07 | 356246 | 2(Loss) |
| strtoll/strtoull | 187.381 | 0.121551 | 76.1533ms | 80000 | 30 | 7.34803e+06 | 407160 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 356.644 | 0.60714 | 385.3ms | 800000 | 30 | 5.06067e+09 | 2.13922e+06 | 1(Win) |
| std::from_chars | 220.308 | 0.038662 | 628.906ms | 800000 | 30 | 5.37785e+07 | 3.46305e+06 | 2(Loss) |
| strtoll/strtoull | 187.036 | 0.0179577 | 756.427ms | 800000 | 30 | 1.60972e+07 | 4.0791e+06 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 459.298 | 0.411822 | 4.73975ms | 800 | 30 | 1403.89 | 1661.1 | 1(Win) |
| std::from_chars | 297.895 | 0.309539 | 1.68663ms | 800 | 30 | 1885.4 | 2561.1 | 2(Loss) |
| strtoll/strtoull | 187.676 | 0.136302 | 0.772834ms | 800 | 30 | 921.062 | 4065.2 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 453.567 | 2.37408 | 3.07279ms | 8000 | 30 | 4.78421e+06 | 16820.9 | 1(Win) |
| std::from_chars | 264.006 | 0.0298792 | 5.28008ms | 8000 | 30 | 2236.73 | 28898.6 | 2(Loss) |
| strtoll/strtoull | 177.813 | 0.831268 | 7.73329ms | 8000 | 30 | 3.81644e+06 | 42906.9 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 414.991 | 0.0929913 | 33.2593ms | 80000 | 30 | 876814 | 183845 | 1(Win) |
| std::from_chars | 220.948 | 0.319639 | 62.8747ms | 80000 | 30 | 3.65461e+07 | 345303 | 2(Loss) |
| strtoll/strtoull | 178.847 | 0.223197 | 76.6119ms | 80000 | 30 | 2.71967e+07 | 426589 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 359.716 | 0.080246 | 381.88ms | 800000 | 30 | 8.69019e+07 | 2.12095e+06 | 1(Win) |
| std::from_chars | 209.617 | 0.0829011 | 665.074ms | 800000 | 30 | 2.73129e+08 | 3.63968e+06 | 2(Loss) |
| strtoll/strtoull | 177.878 | 0.0582362 | 773.407ms | 800000 | 30 | 1.87173e+08 | 4.28912e+06 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 470.292 | 0.27448 | 0.550875ms | 800 | 30 | 594.823 | 1622.27 | 1(Win) |
| std::from_chars | 347.449 | 0.259499 | 2.75413ms | 800 | 30 | 974.075 | 2195.83 | 2(Loss) |
| strtoll/strtoull | 181.41 | 0.268753 | 1.04942ms | 800 | 30 | 3832.52 | 4205.6 | 3(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 451.738 | 0.117987 | 4.75096ms | 8000 | 30 | 11912.4 | 16889 | 1(Win) |
| std::from_chars | 274.659 | 0.115863 | 5.44013ms | 8000 | 30 | 31074.3 | 27777.7 | 2(Loss) |
| strtoll/strtoull | 173.527 | 0.704716 | 7.92296ms | 8000 | 30 | 2.88003e+06 | 43966.7 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 329.694 | 0.305661 | 42.2118ms | 80000 | 30 | 1.50092e+07 | 231408 | 1(Win) |
| std::from_chars | 212.783 | 0.353409 | 64.6188ms | 80000 | 30 | 4.81706e+07 | 358553 | 2(Loss) |
| strtoll/strtoull | 180.615 | 0.248161 | 74.44ms | 80000 | 30 | 3.29656e+07 | 422412 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/macOS-Clang/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| vn::from_chars | 322.044 | 0.0416573 | 426.554ms | 800000 | 30 | 2.92183e+07 | 2.36906e+06 | 1(Win) |
| std::from_chars | 220.599 | 0.0407023 | 646.132ms | 800000 | 30 | 5.94471e+07 | 3.45849e+06 | 2(Loss) |
| strtoll/strtoull | 174.856 | 0.559759 | 1805.66ms | 800000 | 30 | 1.78954e+10 | 4.36324e+06 | 3(Loss) |
