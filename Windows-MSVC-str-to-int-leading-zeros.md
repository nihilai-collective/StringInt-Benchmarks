# str-to-int-leading-zeros  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36248.0 compiler).  

Latest Results: (Jul 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1800 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 6 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 125.483 | 1.197 | 0.1654ms | 100 | 30 | 2482.76 | 760 | 18.6247 | 1(Win) |
| std::from_chars | 56.8792 | 0.468431 | 0.3647ms | 100 | 30 | 1850.57 | 1676.67 | 42.484 | 2(Loss) |
| strtoll/strtoull | 30.5013 | 0.262636 | 0.6358ms | 100 | 30 | 2022.99 | 3126.67 | 80.028 | 3(Loss) |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 134.194 | 2.23144 | 3.2869ms | 1000 | 30 | 754437 | 7106.67 | 18.3499 | 1(Win) |
| std::from_chars | 55.7704 | 0.0280388 | 3.2258ms | 1000 | 30 | 689.655 | 17100 | 44.2962 | 2(Loss) |
| strtoll/strtoull | 27.5575 | 1.98822 | 6.2133ms | 1000 | 30 | 1.42027e+07 | 34606.7 | 89.7797 | 3(Loss) |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 99.6074 | 0.847838 | 20.7089ms | 10000 | 30 | 1.97681e+07 | 95743.3 | 24.8449 | 1(Win) |
| std::from_chars | 37.0666 | 0.738503 | 49.3989ms | 10000 | 30 | 1.08308e+08 | 257287 | 66.7807 | 2(Loss) |
| strtoll/strtoull | 20.6514 | 0.526566 | 84.012ms | 10000 | 30 | 1.7739e+08 | 461797 | 119.859 | 3(Loss) |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars STATISTICAL TIE | 34.5512 | 0.122248 | 498.547ms | 100000 | 30 | 3.41572e+08 | 2.76018e+06 | 71.6543 | 1(Tie) |
| std::from_chars STATISTICAL TIE | 34.1545 | 1.03404 | 503.699ms | 100000 | 30 | 2.50092e+10 | 2.79224e+06 | 72.4804 | 1(Tie) |
| strtoll/strtoull | 19.7255 | 0.244746 | 868.828ms | 100000 | 30 | 4.20043e+09 | 4.83472e+06 | 125.487 | 3(Loss) |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 124.935 | 1.1723 | 0.167ms | 100 | 30 | 2402.3 | 763.333 | 18.5987 | 1(Win) |
| std::from_chars | 55.1257 | 0.491886 | 0.3738ms | 100 | 30 | 2172.41 | 1730 | 43.9227 | 2(Loss) |
| strtoll/strtoull | 28.9577 | 0.202429 | 0.624ms | 100 | 30 | 1333.33 | 3293.33 | 84.604 | 3(Loss) |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 130.939 | 0.0746371 | 6.8027ms | 1000 | 48 | 1418.44 | 7283.33 | 18.8045 | 1(Win) |
| std::from_chars | 53.7584 | 2.49993 | 3.261ms | 1000 | 30 | 5.90041e+06 | 17740 | 45.9212 | 2(Loss) |
| strtoll/strtoull | 28.1265 | 1.93215 | 6.0877ms | 1000 | 30 | 1.28758e+07 | 33906.7 | 87.9511 | 3(Loss) |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 99.788 | 1.09069 | 18.5386ms | 10000 | 30 | 3.2596e+07 | 95570 | 24.7984 | 1(Win) |
| std::from_chars | 41.9948 | 0.680784 | 43.9531ms | 10000 | 30 | 7.17048e+07 | 227093 | 58.9443 | 2(Loss) |
| strtoll/strtoull | 22.5279 | 0.542999 | 76.0704ms | 10000 | 30 | 1.58517e+08 | 423330 | 109.885 | 3(Loss) |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 40.3297 | 0.134702 | 431.436ms | 100000 | 30 | 3.04383e+08 | 2.36469e+06 | 61.3844 | 1(Win) |
| vn::from_chars | 39.4313 | 0.160245 | 434.245ms | 100000 | 30 | 4.50618e+08 | 2.41857e+06 | 62.7849 | 2(Loss) |
| strtoll/strtoull | 21.8849 | 0.25317 | 816.326ms | 100000 | 30 | 3.65137e+09 | 4.35768e+06 | 113.118 | 3(Loss) |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 145.23 | 1.4013 | 0.1679ms | 100 | 30 | 2540.23 | 656.667 | 15.9207 | 1(Win) |
| std::from_chars | 56.9925 | 0.490742 | 0.3319ms | 100 | 30 | 2022.99 | 1673.33 | 42.4233 | 2(Loss) |
| strtoll/strtoull | 29.2838 | 0.282555 | 0.6134ms | 100 | 30 | 2540.23 | 3256.67 | 83.278 | 3(Loss) |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 148.316 | 0.132343 | 1.264ms | 1000 | 30 | 2172.41 | 6430 | 16.5802 | 1(Win) |
| std::from_chars | 56.8227 | 0.0501634 | 3.1621ms | 1000 | 30 | 2126.44 | 16783.3 | 43.4997 | 2(Loss) |
| strtoll/strtoull | 28.2431 | 2.03067 | 6.0601ms | 1000 | 30 | 1.41051e+07 | 33766.7 | 87.5845 | 3(Loss) |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 99.7706 | 1.57319 | 19.7458ms | 10000 | 30 | 6.78391e+07 | 95586.7 | 24.8013 | 1(Win) |
| std::from_chars | 42.0374 | 0.754723 | 41.0184ms | 10000 | 30 | 8.79479e+07 | 226863 | 58.8875 | 2(Loss) |
| strtoll/strtoull | 22.4459 | 0.614497 | 82.5996ms | 10000 | 30 | 2.04497e+08 | 424877 | 110.276 | 3(Loss) |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| std::from_chars | 40.221 | 0.203016 | 429ms | 100000 | 30 | 6.9515e+08 | 2.37109e+06 | 61.5461 | 1(Win) |
| vn::from_chars | 39.8722 | 0.166997 | 430.234ms | 100000 | 30 | 4.78628e+08 | 2.39183e+06 | 62.0867 | 2(Loss) |
| strtoll/strtoull | 21.9102 | 0.165702 | 783.987ms | 100000 | 30 | 1.56058e+09 | 4.35265e+06 | 112.992 | 3(Loss) |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 131.24 | 1.13006 | 0.2056ms | 100 | 30 | 2022.99 | 726.667 | 17.6107 | 1(Win) |
| std::from_chars | 63.8621 | 0.310182 | 0.3034ms | 100 | 30 | 643.678 | 1493.33 | 37.6653 | 2(Loss) |
| strtoll/strtoull | 31.268 | 0.304419 | 0.6125ms | 100 | 30 | 2586.21 | 3050 | 78.0087 | 3(Loss) |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 144.569 | 0.0505306 | 1.3065ms | 1000 | 30 | 333.333 | 6596.67 | 17.0404 | 1(Win) |
| std::from_chars | 56.6203 | 2.02783 | 3.0786ms | 1000 | 30 | 3.49978e+06 | 16843.3 | 43.6124 | 2(Loss) |
| strtoll/strtoull | 28.8555 | 0.0280931 | 6.1429ms | 1000 | 30 | 2586.21 | 33050 | 85.6943 | 3(Loss) |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 110.726 | 1.46417 | 79.1202ms | 10000 | 48 | 7.63349e+07 | 86129.2 | 22.3497 | 1(Win) |
| std::from_chars | 43.18 | 0.61919 | 40.1966ms | 10000 | 30 | 5.61052e+07 | 220860 | 57.3196 | 2(Loss) |
| strtoll/strtoull | 22.2613 | 0.698793 | 79.6663ms | 10000 | 30 | 2.68854e+08 | 428400 | 111.199 | 3(Loss) |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 42.8682 | 0.107782 | 400.801ms | 100000 | 30 | 1.72481e+08 | 2.22467e+06 | 57.7493 | 1(Win) |
| std::from_chars | 41.0104 | 0.213695 | 418.691ms | 100000 | 30 | 7.40837e+08 | 2.32545e+06 | 60.3658 | 2(Loss) |
| strtoll/strtoull | 21.9368 | 0.0959361 | 782.654ms | 100000 | 30 | 5.21843e+08 | 4.34738e+06 | 112.848 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 181.652 | 0.884264 | 0.219ms | 200 | 30 | 2586.21 | 1050 | 13.091 | 1(Win) |
| std::from_chars | 93.804 | 0.430513 | 0.9448ms | 200 | 30 | 2298.85 | 2033.33 | 25.818 | 2(Loss) |
| strtoll/strtoull | 51.3188 | 0.186201 | 0.6971ms | 200 | 30 | 1436.78 | 3716.67 | 47.6277 | 3(Loss) |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.54 | 0.0860006 | 1.9935ms | 2000 | 30 | 2344.83 | 10280 | 13.2765 | 1(Win) |
| std::from_chars | 91.2316 | 0.0221559 | 9.0085ms | 2000 | 30 | 643.678 | 20906.7 | 27.0829 | 2(Loss) |
| strtoll/strtoull | 50.3524 | 0.0388069 | 7.0057ms | 2000 | 30 | 6482.76 | 37880 | 49.1274 | 3(Loss) |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 176.361 | 0.978185 | 21.0342ms | 20000 | 30 | 3.3575e+07 | 108150 | 14.0322 | 1(Win) |
| std::from_chars | 67.8144 | 0.605325 | 50.6654ms | 20000 | 30 | 8.6959e+07 | 281260 | 36.5024 | 2(Loss) |
| strtoll/strtoull | 37.3027 | 0.435947 | 92.1661ms | 20000 | 30 | 1.49063e+08 | 511317 | 66.3626 | 3(Loss) |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 73.7537 | 0.116522 | 463.934ms | 200000 | 30 | 2.72412e+08 | 2.58611e+06 | 33.5679 | 1(Win) |
| std::from_chars | 65.8697 | 0.106435 | 522.058ms | 200000 | 30 | 2.84958e+08 | 2.89564e+06 | 37.5843 | 2(Loss) |
| strtoll/strtoull | 36.354 | 0.0950595 | 945.333ms | 200000 | 30 | 7.46223e+08 | 5.2466e+06 | 68.0965 | 3(Loss) |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 172.351 | 0.418559 | 0.5011ms | 200 | 30 | 643.678 | 1106.67 | 13.8493 | 1(Win) |
| std::from_chars | 94.893 | 0.365673 | 0.4563ms | 200 | 30 | 1620.69 | 2010 | 25.5017 | 2(Loss) |
| strtoll/strtoull | 52.9329 | 0.0925069 | 0.6748ms | 200 | 30 | 333.333 | 3603.33 | 46.267 | 3(Loss) |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 179.939 | 0.0452324 | 2.0204ms | 2000 | 30 | 689.655 | 10600 | 13.7042 | 1(Win) |
| std::from_chars | 90.7397 | 0.441358 | 3.8769ms | 2000 | 30 | 258207 | 21020 | 27.2341 | 2(Loss) |
| strtoll/strtoull | 50.1143 | 1.62712 | 6.8727ms | 2000 | 30 | 1.15052e+07 | 38060 | 49.3623 | 3(Loss) |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 165.535 | 1.25029 | 21.6815ms | 20000 | 30 | 6.22625e+07 | 115223 | 14.9486 | 1(Win) |
| std::from_chars | 74.2034 | 0.715449 | 46.3848ms | 20000 | 30 | 1.01459e+08 | 257043 | 33.3583 | 2(Loss) |
| strtoll/strtoull | 40.6098 | 0.558412 | 84.4533ms | 20000 | 30 | 2.06361e+08 | 469677 | 60.9573 | 3(Loss) |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 85.5105 | 0.214822 | 403.997ms | 200000 | 30 | 6.88814e+08 | 2.23054e+06 | 28.9503 | 1(Win) |
| std::from_chars | 71.1082 | 0.150352 | 1115.82ms | 200000 | 30 | 4.87933e+08 | 2.68232e+06 | 34.8144 | 2(Loss) |
| strtoll/strtoull | 39.955 | 0.1185 | 861.378ms | 200000 | 30 | 9.60011e+08 | 4.77374e+06 | 61.9581 | 3(Loss) |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 186.386 | 0.767495 | 0.2089ms | 200 | 30 | 1850.57 | 1023.33 | 12.7877 | 1(Win) |
| std::from_chars | 89.5469 | 0.399513 | 0.4184ms | 200 | 30 | 2172.41 | 2130 | 27.6077 | 2(Loss) |
| strtoll/strtoull | 49.8002 | 0.222184 | 0.7124ms | 200 | 30 | 2172.41 | 3830 | 49.2093 | 3(Loss) |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 194.231 | 0.0756396 | 1.8782ms | 2000 | 30 | 1655.17 | 9820 | 12.704 | 1(Win) |
| std::from_chars | 91.9204 | 1.61544 | 3.8013ms | 2000 | 30 | 3.37086e+06 | 20750 | 26.8853 | 2(Loss) |
| strtoll/strtoull | 51.204 | 1.58783 | 6.8802ms | 2000 | 30 | 1.0495e+07 | 37250 | 48.295 | 3(Loss) |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 176.454 | 1.28481 | 20.0266ms | 20000 | 30 | 5.7862e+07 | 108093 | 14.0233 | 1(Win) |
| std::from_chars | 75.0728 | 0.750825 | 45.6727ms | 20000 | 30 | 1.09168e+08 | 254067 | 32.9694 | 2(Loss) |
| strtoll/strtoull | 40.2151 | 0.569 | 85.3638ms | 20000 | 30 | 2.18488e+08 | 474287 | 61.5553 | 3(Loss) |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 87.5174 | 0.142091 | 392.1ms | 200000 | 30 | 2.87692e+08 | 2.17939e+06 | 28.2873 | 1(Win) |
| std::from_chars | 71.8272 | 0.203801 | 477.118ms | 200000 | 30 | 8.78653e+08 | 2.65547e+06 | 34.466 | 2(Loss) |
| strtoll/strtoull | 39.5786 | 0.134611 | 867.029ms | 200000 | 30 | 1.26246e+09 | 4.81914e+06 | 62.5503 | 3(Loss) |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 182.813 | 0.881968 | 0.4947ms | 200 | 30 | 2540.23 | 1043.33 | 12.6837 | 1(Win) |
| std::from_chars | 94.2676 | 0.388173 | 0.396ms | 200 | 30 | 1850.57 | 2023.33 | 25.7443 | 2(Loss) |
| strtoll/strtoull | 49.8436 | 0.214593 | 0.7145ms | 200 | 30 | 2022.99 | 3826.67 | 49.2397 | 3(Loss) |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 195.025 | 0.075949 | 1.8483ms | 2000 | 30 | 1655.17 | 9780 | 12.6269 | 1(Win) |
| std::from_chars | 98.4523 | 0.0423869 | 8.3548ms | 2000 | 30 | 2022.99 | 19373.3 | 25.0757 | 2(Loss) |
| strtoll/strtoull | 50.5749 | 0.277877 | 6.9307ms | 2000 | 30 | 329471 | 37713.3 | 48.8822 | 3(Loss) |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 185.654 | 0.627305 | 19.469ms | 20000 | 30 | 1.24603e+07 | 102737 | 13.3283 | 1(Win) |
| std::from_chars | 66.3064 | 0.660246 | 51.7664ms | 20000 | 30 | 1.08214e+08 | 287657 | 37.3327 | 2(Loss) |
| strtoll/strtoull | 40.7263 | 0.502215 | 84.4428ms | 20000 | 30 | 1.65963e+08 | 468333 | 60.7874 | 3(Loss) |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 100.013 | 0.0661719 | 344.117ms | 200000 | 30 | 4.77766e+07 | 1.9071e+06 | 24.7525 | 1(Win) |
| std::from_chars | 80.4131 | 0.0968771 | 427.407ms | 200000 | 30 | 1.58405e+08 | 2.37194e+06 | 30.7865 | 2(Loss) |
| strtoll/strtoull | 39.6224 | 0.362996 | 861.814ms | 200000 | 30 | 9.16021e+09 | 4.81382e+06 | 62.4784 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 295.713 | 0.43185 | 0.2595ms | 400 | 30 | 931.034 | 1290 | 8.11417 | 1(Win) |
| std::from_chars | 208.453 | 0.465007 | 0.3686ms | 400 | 30 | 2172.41 | 1830 | 11.5938 | 2(Loss) |
| strtoll/strtoull | 79.4177 | 0.0693963 | 0.9233ms | 400 | 30 | 333.333 | 4803.33 | 30.927 | 3(Loss) |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.937 | 0.0602956 | 2.2912ms | 4000 | 30 | 1620.69 | 12190 | 7.88992 | 1(Win) |
| std::from_chars | 218.733 | 0.0521627 | 3.3044ms | 4000 | 30 | 2482.76 | 17440 | 11.3018 | 2(Loss) |
| strtoll/strtoull | 82.06 | 0.0286821 | 8.5624ms | 4000 | 30 | 5333.33 | 46486.7 | 30.1407 | 3(Loss) |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 309.693 | 1.05719 | 25.2932ms | 40000 | 30 | 5.08729e+07 | 123177 | 7.99052 | 1(Win) |
| std::from_chars | 134.685 | 0.510835 | 51.4481ms | 40000 | 30 | 6.28001e+07 | 283230 | 18.3797 | 2(Loss) |
| strtoll/strtoull | 62.9024 | 0.418071 | 109.359ms | 40000 | 30 | 1.92845e+08 | 606447 | 39.3561 | 3(Loss) |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 141.87 | 0.210162 | 487.526ms | 400000 | 30 | 9.58009e+08 | 2.68887e+06 | 17.4502 | 1(Win) |
| std::from_chars | 124.947 | 1.01765 | 1496.2ms | 400000 | 30 | 2.89589e+10 | 3.05304e+06 | 19.8128 | 2(Loss) |
| strtoll/strtoull | 60.2151 | 1.04969 | 1220.32ms | 400000 | 30 | 1.32663e+11 | 6.33511e+06 | 41.1119 | 3(Loss) |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 301.16 | 0.691086 | 0.2541ms | 400 | 30 | 2298.85 | 1266.67 | 8.00583 | 1(Win) |
| std::from_chars | 212.715 | 0.258293 | 0.3471ms | 400 | 30 | 643.678 | 1793.33 | 11.1908 | 2(Loss) |
| strtoll/strtoull | 83.9625 | 0.202536 | 0.8459ms | 400 | 30 | 2540.23 | 4543.33 | 29.237 | 3(Loss) |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 301.478 | 0.0824392 | 2.3928ms | 4000 | 30 | 3264.37 | 12653.3 | 8.18263 | 1(Win) |
| std::from_chars | 209.911 | 1.9523 | 16.6511ms | 4000 | 48 | 6.04202e+06 | 18172.9 | 11.7693 | 2(Loss) |
| strtoll/strtoull | 83.564 | 0.0310684 | 8.4992ms | 4000 | 30 | 6034.48 | 45650 | 29.6036 | 3(Loss) |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 294.132 | 0.913052 | 26.3641ms | 40000 | 30 | 4.20675e+07 | 129693 | 8.41434 | 1(Win) |
| std::from_chars | 148.669 | 1.4931 | 119.764ms | 40000 | 30 | 4.40329e+08 | 256590 | 16.6491 | 2(Loss) |
| strtoll/strtoull | 67.6657 | 0.532161 | 101.508ms | 40000 | 30 | 2.70017e+08 | 563757 | 36.5816 | 3(Loss) |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 163.034 | 0.187765 | 421.452ms | 400000 | 30 | 5.79046e+08 | 2.33982e+06 | 15.1847 | 1(Win) |
| std::from_chars | 147.249 | 0.0998264 | 466.879ms | 400000 | 30 | 2.00644e+08 | 2.59064e+06 | 16.8124 | 2(Loss) |
| strtoll/strtoull | 66.6152 | 0.130564 | 1038.79ms | 400000 | 30 | 1.67704e+09 | 5.72647e+06 | 37.1645 | 3(Loss) |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 314.398 | 0.520255 | 0.2458ms | 400 | 30 | 1195.4 | 1213.33 | 7.59633 | 1(Win) |
| std::from_chars | 208.074 | 0.477478 | 0.3605ms | 400 | 30 | 2298.85 | 1833.33 | 11.6545 | 2(Loss) |
| strtoll/strtoull | 80.0286 | 0.183645 | 0.9071ms | 400 | 30 | 2298.85 | 4766.67 | 30.7558 | 3(Loss) |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 324.932 | 0.0774887 | 2.2116ms | 4000 | 30 | 2482.76 | 11740 | 7.60652 | 1(Win) |
| std::from_chars | 216.416 | 0.0465871 | 7.7506ms | 4000 | 30 | 2022.99 | 17626.7 | 11.414 | 2(Loss) |
| strtoll/strtoull | 82.1602 | 0.0234347 | 8.6337ms | 4000 | 30 | 3551.72 | 46430 | 30.1071 | 3(Loss) |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 315.013 | 0.927404 | 24.6176ms | 40000 | 30 | 3.78376e+07 | 121097 | 7.85653 | 1(Win) |
| std::from_chars | 150.195 | 0.999491 | 45.9655ms | 40000 | 30 | 1.93326e+08 | 253983 | 16.4805 | 2(Loss) |
| strtoll/strtoull | 67.0909 | 0.421013 | 102.498ms | 40000 | 30 | 1.71912e+08 | 568587 | 36.896 | 3(Loss) |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 170.903 | 0.192547 | 400.966ms | 400000 | 30 | 5.54131e+08 | 2.23208e+06 | 14.4853 | 1(Win) |
| std::from_chars | 144.109 | 0.351139 | 481.266ms | 400000 | 30 | 2.59188e+09 | 2.64708e+06 | 17.1784 | 2(Loss) |
| strtoll/strtoull | 66.0643 | 0.159453 | 1040.24ms | 400000 | 30 | 2.54315e+09 | 5.77422e+06 | 37.4745 | 3(Loss) |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 313.537 | 0.568805 | 0.2598ms | 400 | 30 | 1436.78 | 1216.67 | 7.657 | 1(Win) |
| std::from_chars | 180.791 | 0.264022 | 0.8811ms | 400 | 30 | 931.034 | 2110 | 13.4593 | 2(Loss) |
| strtoll/strtoull | 84.5206 | 0.139862 | 0.8792ms | 400 | 30 | 1195.4 | 4513.33 | 29.0247 | 3(Loss) |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 330.277 | 0.0803876 | 2.186ms | 4000 | 30 | 2586.21 | 11550 | 7.47002 | 1(Win) |
| std::from_chars | 173.133 | 1.54197 | 20.2378ms | 4000 | 48 | 5.54057e+06 | 22033.3 | 14.2737 | 2(Loss) |
| strtoll/strtoull | 81.3657 | 1.79575 | 8.5162ms | 4000 | 30 | 2.12642e+07 | 46883.3 | 30.4003 | 3(Loss) |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 321.572 | 0.740749 | 22.6128ms | 40000 | 30 | 2.31648e+07 | 118627 | 7.69726 | 1(Win) |
| std::from_chars | 133.79 | 0.675189 | 51.4949ms | 40000 | 30 | 1.11185e+08 | 285127 | 18.5013 | 2(Loss) |
| strtoll/strtoull | 66.8561 | 0.664166 | 103.188ms | 40000 | 30 | 4.30837e+08 | 570583 | 37.0257 | 3(Loss) |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 189.957 | 0.229374 | 362.374ms | 400000 | 30 | 6.3653e+08 | 2.00819e+06 | 13.0318 | 1(Win) |
| std::from_chars | 129.307 | 0.924063 | 527.018ms | 400000 | 30 | 2.22948e+10 | 2.95012e+06 | 19.1441 | 2(Loss) |
| strtoll/strtoull | 65.54 | 0.27659 | 1043.37ms | 400000 | 30 | 7.77503e+09 | 5.82041e+06 | 37.7717 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 427.018 | 0.353308 | 0.35ms | 800 | 30 | 1195.4 | 1786.67 | 5.68208 | 1(Win) |
| std::from_chars | 215.039 | 0.205386 | 4.0986ms | 800 | 48 | 2548.76 | 3547.92 | 11.3845 | 2(Loss) |
| strtoll/strtoull | 116.896 | 0.125819 | 2.8635ms | 800 | 30 | 2022.99 | 6526.67 | 21.0459 | 3(Loss) |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 430.067 | 0.63649 | 3.2994ms | 8000 | 30 | 382483 | 17740 | 5.74448 | 1(Win) |
| std::from_chars | 215.71 | 1.63092 | 32.1763ms | 8000 | 48 | 1.59716e+07 | 35368.8 | 11.4661 | 2(Loss) |
| strtoll/strtoull | 118.2 | 1.10826 | 11.8218ms | 8000 | 30 | 1.53515e+07 | 64546.7 | 20.9358 | 3(Loss) |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 424.602 | 0.61379 | 182.343ms | 80000 | 48 | 5.83844e+07 | 179683 | 5.82871 | 1(Win) |
| std::from_chars | 162.737 | 0.596719 | 84.6798ms | 80000 | 30 | 2.34784e+08 | 468817 | 15.2113 | 2(Loss) |
| strtoll/strtoull | 96.8894 | 0.433364 | 142.335ms | 80000 | 30 | 3.49344e+08 | 787433 | 25.55 | 3(Loss) |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 260.75 | 0.25565 | 540.481ms | 800000 | 30 | 1.67859e+09 | 2.92594e+06 | 9.49364 | 1(Win) |
| std::from_chars | 165.447 | 0.119726 | 852.701ms | 800000 | 30 | 9.14456e+08 | 4.61138e+06 | 14.9623 | 2(Loss) |
| strtoll/strtoull | 93.2256 | 0.286227 | 1475ms | 800000 | 30 | 1.64609e+10 | 8.1838e+06 | 26.5535 | 3(Loss) |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 412.4 | 0.501879 | 0.8485ms | 800 | 30 | 2586.21 | 1850 | 5.91933 | 1(Win) |
| std::from_chars | 222.215 | 0.254964 | 1.1476ms | 800 | 30 | 2298.85 | 3433.33 | 11.0348 | 2(Loss) |
| strtoll/strtoull | 122.005 | 0.148147 | 1.1948ms | 800 | 30 | 2574.71 | 6253.33 | 20.1576 | 3(Loss) |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 418.24 | 0.0394221 | 16.9474ms | 8000 | 48 | 2482.27 | 18241.7 | 5.90444 | 1(Win) |
| std::from_chars | 208.681 | 2.09246 | 6.6836ms | 8000 | 30 | 1.7557e+07 | 36560 | 11.8486 | 2(Loss) |
| strtoll/strtoull | 117.225 | 1.2923 | 11.8745ms | 8000 | 30 | 2.12221e+07 | 65083.3 | 21.1069 | 3(Loss) |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 396.318 | 1.18023 | 34.2771ms | 80000 | 30 | 1.54861e+08 | 192507 | 6.24443 | 1(Win) |
| std::from_chars | 182.44 | 0.692563 | 75.682ms | 80000 | 30 | 2.51641e+08 | 418187 | 13.5664 | 2(Loss) |
| strtoll/strtoull | 103.754 | 0.330401 | 133.129ms | 80000 | 30 | 1.77082e+08 | 735337 | 23.8593 | 3(Loss) |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 294.554 | 0.196053 | 466.041ms | 800000 | 30 | 7.73605e+08 | 2.59015e+06 | 8.40434 | 1(Win) |
| std::from_chars | 183.949 | 0.0851389 | 752.229ms | 800000 | 30 | 3.7408e+08 | 4.14757e+06 | 13.4585 | 2(Loss) |
| strtoll/strtoull | 102.794 | 0.0664409 | 1337.97ms | 800000 | 30 | 7.29525e+08 | 7.42205e+06 | 24.0835 | 3(Loss) |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 448.788 | 0.282037 | 0.7883ms | 800 | 30 | 689.655 | 1700 | 5.39067 | 1(Win) |
| std::from_chars | 220.079 | 0.252512 | 0.7167ms | 800 | 30 | 2298.85 | 3466.67 | 11.1063 | 2(Loss) |
| strtoll/strtoull | 120.337 | 0.143489 | 2.7646ms | 800 | 30 | 2482.76 | 6340 | 20.4273 | 3(Loss) |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 450.056 | 1.37908 | 15.8267ms | 8000 | 48 | 2.6234e+06 | 16952.1 | 5.48932 | 1(Win) |
| std::from_chars | 197.21 | 1.52474 | 7.1034ms | 8000 | 30 | 1.04384e+07 | 38686.7 | 12.5374 | 2(Loss) |
| strtoll/strtoull | 115.989 | 1.20667 | 11.951ms | 8000 | 30 | 1.88991e+07 | 65776.7 | 21.3267 | 3(Loss) |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 443.466 | 0.799206 | 32.0615ms | 80000 | 30 | 5.67149e+07 | 172040 | 5.58143 | 1(Win) |
| std::from_chars | 183.823 | 0.678971 | 75.4589ms | 80000 | 30 | 2.38234e+08 | 415040 | 13.4652 | 2(Loss) |
| strtoll/strtoull | 102.522 | 0.468362 | 135.161ms | 80000 | 30 | 3.64446e+08 | 744173 | 24.146 | 3(Loss) |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 312.853 | 0.159518 | 438.72ms | 800000 | 30 | 4.53985e+08 | 2.43865e+06 | 7.91251 | 1(Win) |
| std::from_chars | 183.526 | 0.112757 | 750.313ms | 800000 | 30 | 6.59169e+08 | 4.15712e+06 | 13.4887 | 2(Loss) |
| strtoll/strtoull | 102.39 | 0.0758436 | 1340.9ms | 800000 | 30 | 9.58135e+08 | 7.45133e+06 | 24.1775 | 3(Loss) |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 453.231 | 0.411116 | 0.3394ms | 800 | 30 | 1436.78 | 1683.33 | 5.33 | 1(Win) |
| strtoll/strtoull | 119.271 | 0.0521105 | 2.8251ms | 800 | 30 | 333.333 | 6396.67 | 20.6256 | 2(Loss) |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 465.396 | 0.0282557 | 3.1323ms | 8000 | 30 | 643.678 | 16393.3 | 5.30692 | 1(Win) |
| std::from_chars | 232.367 | 0.0266612 | 6.161ms | 8000 | 30 | 2298.85 | 32833.3 | 10.6422 | 2(Loss) |
| strtoll/strtoull | 115.416 | 1.03168 | 12.1343ms | 8000 | 30 | 1.39527e+07 | 66103.3 | 21.4347 | 3(Loss) |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 456.331 | 1.15544 | 30.7192ms | 80000 | 30 | 1.11953e+08 | 167190 | 5.42378 | 1(Win) |
| std::from_chars | 184.511 | 2.3356 | 70.178ms | 80000 | 30 | 2.79805e+09 | 413493 | 13.4156 | 2(Loss) |
| strtoll/strtoull | 102.389 | 0.4035 | 137.679ms | 80000 | 30 | 2.71193e+08 | 745137 | 24.1767 | 3(Loss) |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-leading-zeros/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| vn::from_chars | 289.48 | 0.112043 | 474.482ms | 800000 | 30 | 2.61597e+08 | 2.63555e+06 | 8.55187 | 1(Win) |
| std::from_chars | 250.092 | 0.105167 | 550.178ms | 800000 | 30 | 3.08789e+08 | 3.05064e+06 | 9.89834 | 2(Loss) |
| strtoll/strtoull | 102.013 | 0.0646458 | 1346.21ms | 800000 | 30 | 7.01243e+08 | 7.47882e+06 | 24.2661 | 3(Loss) |
