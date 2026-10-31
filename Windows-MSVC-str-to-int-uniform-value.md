# str-to-int-uniform-value  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36260.0 compiler).  

Latest Results: (Oct 31, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 20 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [35ec835](https://github.com/nihilai-collective/benchmarksuite/commit/35ec835).
  For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples against jeaiii's unchecked implementation. The timed int-to-string code is a harness-local copy of that core (vn_unchecked in include/i_to_str.hpp), not the shipped vn::to_chars entry point, which is why its row is labelled "vn (unchecked core)". std::to_chars is omitted from the int-to-string stage because it performs bounds checking, which neither contestant does; it is used only as the correctness reference. Also note: There is no explicit SIMD in any of our code.
  
----
### int8-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 93.4975 | 1.58711 | 1.3198ms | 100 | 30 | 7862.07 | 1020 | 1.88377 | 24.002 | 1(Win) | true |
| std::from_chars | 85.1495 | 2.47406 | 1.4378ms | 100 | 30 | 23034.5 | 1120 | 0.111732 | 26.737 | 2(Loss) | true |
| strtoll/strtoull | 43.4146 | 0.597089 | 2.8372ms | 100 | 30 | 5160.92 | 2196.67 | 2.08024 | 52.8063 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 102.661 | 0.331915 | 11.3917ms | 1000 | 48 | 45633.9 | 9289.58 | 0.464131 | 22.6027 | 1(Win) | true |
| std::from_chars DID NOT CONVERGE | 92.8715 | 0.297335 | 12.5638ms | 1000 | 48 | 44747.3 | 10268.8 | 8.39652 | 25.0589 | -(Loss) | false |
| strtoll/strtoull | 44.8436 | 0.225828 | 26.0791ms | 1000 | 30 | 69195.4 | 21266.7 | 0.499064 | 51.9236 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 101.772 | 1.31543 | 113.033ms | 10000 | 30 | 4.55827e+07 | 93706.7 | 0.353407 | 22.9025 | 1(Win) | true |
| std::from_chars | 91.6789 | 1.20148 | 126.586ms | 10000 | 30 | 4.68619e+07 | 104023 | 0.475299 | 25.4257 | 2(Loss) | true |
| strtoll/strtoull | 44.5115 | 0.754707 | 258.909ms | 10000 | 30 | 7.84391e+07 | 214253 | 0.127412 | 52.3824 | 3(Loss) | true |

----
### int8-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 102.617 | 0.308828 | 1124.56ms | 100000 | 30 | 2.47125e+08 | 929353 | 0.162023 | 22.7242 | 1(Win) | true |
| std::from_chars | 94.1852 | 0.211455 | 1223.23ms | 100000 | 48 | 2.20046e+08 | 1.01255e+06 | 0.0530966 | 24.7595 | 2(Loss) | true |
| strtoll/strtoull | 44.1893 | 0.113054 | 2609.19ms | 100000 | 30 | 1.78589e+08 | 2.15816e+06 | 0.336133 | 52.7733 | 3(Loss) | true |

----
### int8-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 136.646 | 2.19573 | 0.9083ms | 100 | 48 | 11272.2 | 697.917 | 2.6348 | 15.761 | 1(Win) | true |
| std::from_chars | 89.6872 | 2.27622 | 1.3783ms | 100 | 30 | 17574.7 | 1063.33 | 0.275049 | 24.6473 | 2(Loss) | true |
| strtoll/strtoull | 51.1811 | 1.24694 | 2.3442ms | 100 | 30 | 16195.4 | 1863.33 | 0.178571 | 44.533 | 3(Loss) | true |

----
### int8-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 163.207 | 0.516891 | 7.2728ms | 1000 | 30 | 27367.8 | 5843.33 | 0.284414 | 14.1789 | 1(Win) | true |
| std::from_chars | 144.35 | 0.475522 | 8.181ms | 1000 | 30 | 29609.2 | 6606.67 | 0.20141 | 16.0614 | 2(Loss) | true |
| strtoll/strtoull | 54.763 | 0.337644 | 21.37ms | 1000 | 48 | 165953 | 17414.6 | 0.17977 | 42.4875 | 3(Loss) | true |

----
### int8-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 163.103 | 1.00993 | 70.8849ms | 10000 | 48 | 1.67379e+07 | 58470.8 | 0.633037 | 14.2888 | 1(Win) | true |
| std::from_chars | 142.859 | 0.942873 | 80.6128ms | 10000 | 48 | 1.90166e+07 | 66756.2 | 0.234756 | 16.3154 | 2(Loss) | true |
| strtoll/strtoull | 54.4535 | 0.735159 | 210.953ms | 10000 | 48 | 7.95704e+07 | 175135 | 0.0430805 | 42.8159 | 3(Loss) | true |

----
### int8-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 159.936 | 0.515419 | 714.331ms | 100000 | 30 | 2.83366e+08 | 596283 | 0.109128 | 14.5799 | 1(Win) | true |
| std::from_chars | 143.184 | 0.389426 | 803.421ms | 100000 | 30 | 2.01829e+08 | 666050 | 0.0710153 | 16.2861 | 2(Loss) | true |
| strtoll/strtoull | 53.4663 | 0.104775 | 2144.06ms | 100000 | 48 | 1.67646e+08 | 1.78369e+06 | 0.137826 | 43.6162 | 3(Loss) | true |

----
### int8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 145.971 | 2.71962 | 0.8651ms | 100 | 30 | 9471.26 | 653.333 | 1.0101 | 14.994 | 1(Win) | true |
| std::from_chars | 125.483 | 2.93203 | 0.9904ms | 100 | 30 | 14896.6 | 760 | 0 | 17.5017 | 2(Loss) | true |
| strtoll/strtoull | 52.8595 | 0.737277 | 2.271ms | 100 | 48 | 8492.91 | 1804.17 | 0.41744 | 43.3748 | 3(Loss) | true |

----
### int8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 176.389 | 0.65727 | 6.6416ms | 1000 | 30 | 37885.1 | 5406.67 | 0.239475 | 13.096 | 1(Win) | true |
| std::from_chars | 147.933 | 0.45686 | 7.8937ms | 1000 | 30 | 26023 | 6446.67 | 0.886802 | 15.6629 | 2(Loss) | true |
| strtoll/strtoull | 56.834 | 0.239745 | 20.503ms | 1000 | 30 | 48551.7 | 16780 | 0.0795229 | 40.9403 | 3(Loss) | true |

----
### int8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 174.965 | 0.135114 | 66.7605ms | 10000 | 30 | 162713 | 54506.7 | 1.90173 | 13.3184 | 1(Win) | true |
| std::from_chars | 147.051 | 1.49712 | 81.0273ms | 10000 | 30 | 2.82812e+07 | 64853.3 | 0.279976 | 15.8498 | 2(Loss) | true |
| strtoll/strtoull | 56.1315 | 0.78802 | 203.34ms | 10000 | 48 | 8.60404e+07 | 169900 | 0.473093 | 41.5347 | 3(Loss) | true |

----
### int8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 173.788 | 0.42017 | 660.94ms | 100000 | 30 | 1.59489e+08 | 548757 | 0.0579763 | 13.4179 | 1(Win) | true |
| std::from_chars | 147.191 | 0.317081 | 793.205ms | 100000 | 48 | 2.02591e+08 | 647917 | 0.0853291 | 15.8423 | 2(Loss) | true |
| strtoll/strtoull | 55.4829 | 0.106697 | 2066.44ms | 100000 | 48 | 1.61446e+08 | 1.71886e+06 | 0.0437981 | 42.0299 | 3(Loss) | true |

----
### uint8-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 125.415 | 1.64917 | 1.0247ms | 100 | 48 | 7548.76 | 760.417 | 0.495595 | 17.5071 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 121.423 | 2.0056 | 1.0284ms | 100 | 48 | 11910.5 | 785.417 | 0.997899 | 18.2475 | 1(Tie) | true |
| strtoll/strtoull | 51.3764 | 0.678752 | 2.3699ms | 100 | 48 | 7619.68 | 1856.25 | 0.337838 | 44.8192 | 3(Loss) | true |

----
### uint8-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 143.626 | 0.454396 | 8.1483ms | 1000 | 30 | 27310.3 | 6640 | 0.0690738 | 16.1536 | 1(Win) | true |
| std::from_chars | 134.89 | 0.58002 | 8.6171ms | 1000 | 30 | 50448.3 | 7070 | 0.188947 | 17.2276 | 2(Loss) | true |
| strtoll/strtoull | 53.0114 | 0.201832 | 21.9846ms | 1000 | 30 | 39551.7 | 17990 | 0.304333 | 43.8665 | 3(Loss) | true |

----
### uint8-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 149.041 | 0.810251 | 77.875ms | 10000 | 48 | 1.29024e+07 | 63987.5 | 0.511791 | 15.6391 | 1(Win) | true |
| std::from_chars | 134.839 | 1.39756 | 84.442ms | 10000 | 30 | 2.9311e+07 | 70726.7 | 0.565199 | 17.2864 | 2(Loss) | true |
| strtoll/strtoull | 52.0843 | 0.666285 | 219.575ms | 10000 | 48 | 7.14411e+07 | 183102 | 0.10684 | 44.7631 | 3(Loss) | true |

----
### uint8-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint8-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 142.601 | 0.313656 | 813.203ms | 100000 | 30 | 1.32002e+08 | 668770 | 0.149002 | 16.3524 | 1(Win) | true |
| std::from_chars | 134.315 | 0.383716 | 867.571ms | 100000 | 48 | 3.56295e+08 | 710027 | 0.504924 | 17.3604 | 2(Loss) | true |
| strtoll/strtoull | 53.0011 | 0.123028 | 2167.47ms | 100000 | 30 | 1.47014e+08 | 1.79935e+06 | 0.0121094 | 43.9991 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 145.091 | 1.32048 | 1.6571ms | 200 | 48 | 14463.7 | 1314.58 | 1.40625 | 15.4015 | 1(Win) | true |
| std::from_chars | 130.939 | 1.5327 | 1.8257ms | 200 | 30 | 14954 | 1456.67 | 1.33333 | 17.2275 | 2(Loss) | true |
| strtoll/strtoull | 71.9754 | 0.804068 | 3.3071ms | 200 | 30 | 13620.7 | 2650 | 1.24224 | 32.1275 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 157.768 | 0.512031 | 14.8425ms | 2000 | 48 | 183932 | 12089.6 | 0.278389 | 14.7477 | 1(Win) | true |
| std::from_chars | 138.28 | 0.222395 | 16.5135ms | 2000 | 30 | 28229.9 | 13793.3 | 2.85856 | 16.8172 | 2(Loss) | true |
| strtoll/strtoull | 75.074 | 0.324652 | 31.1651ms | 2000 | 48 | 326556 | 25406.2 | 0.237238 | 31.017 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 159.99 | 0.791092 | 144.451ms | 20000 | 48 | 4.26942e+07 | 119217 | 0.198125 | 14.5711 | 1(Win) | true |
| std::from_chars | 142.706 | 0.84673 | 161.477ms | 20000 | 48 | 6.14766e+07 | 133656 | 0.0246339 | 16.3353 | 2(Loss) | true |
| strtoll/strtoull | 74.0382 | 0.671842 | 310.036ms | 20000 | 30 | 8.98676e+07 | 257617 | 0.083365 | 31.492 | 3(Loss) | true |

----
### int16-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 158.011 | 0.233546 | 1453.03ms | 200000 | 30 | 2.38426e+08 | 1.2071e+06 | 0.0438186 | 14.7582 | 1(Win) | true |
| std::from_chars | 141.261 | 0.304842 | 1625.29ms | 200000 | 30 | 5.08259e+08 | 1.35023e+06 | 0.00419665 | 16.5079 | 2(Loss) | true |
| strtoll/strtoull | 73.3715 | 0.13884 | 3127.97ms | 200000 | 48 | 6.25282e+08 | 2.59958e+06 | 0.00485632 | 31.7838 | 3(Loss) | true |

----
### int16-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 206.2 | 1.80659 | 1.2153ms | 200 | 48 | 13404.3 | 925 | 0.180505 | 10.8922 | 1(Win) | true |
| std::from_chars | 175.523 | 2.44604 | 1.3844ms | 200 | 30 | 21195.4 | 1086.67 | 1.4786 | 12.5318 | 2(Loss) | true |
| strtoll/strtoull | 82.9282 | 1.26803 | 2.9029ms | 200 | 30 | 25517.2 | 2300 | 1.42857 | 27.7462 | 3(Loss) | true |

----
### int16-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 224.306 | 0.306164 | 10.5053ms | 2000 | 30 | 20333.3 | 8503.33 | 0.156556 | 10.3447 | 1(Win) | true |
| std::from_chars | 199.028 | 0.332182 | 11.7979ms | 2000 | 30 | 30402.3 | 9583.33 | 0.239704 | 11.6657 | 2(Loss) | true |
| strtoll/strtoull | 87.5332 | 0.160718 | 26.6422ms | 2000 | 30 | 36793.1 | 21790 | 2.90382 | 26.6123 | 3(Loss) | true |

----
### int16-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 235.076 | 0.940379 | 99.9347ms | 20000 | 48 | 2.79441e+07 | 81137.5 | 0.513069 | 9.91495 | 1(Win) | true |
| std::from_chars | 193.906 | 1.47824 | 116.29ms | 20000 | 48 | 1.01487e+08 | 98364.6 | 1.01107 | 12.0221 | 2(Loss) | true |
| strtoll/strtoull | 86.741 | 0.823927 | 264.136ms | 20000 | 30 | 9.84713e+07 | 219890 | 0.233996 | 26.8776 | 3(Loss) | true |

----
### int16-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 221.734 | 0.262119 | 1037.85ms | 200000 | 48 | 2.44023e+08 | 860196 | 0.149065 | 10.5165 | 1(Win) | true |
| std::from_chars | 197.856 | 0.315193 | 1163.11ms | 200000 | 48 | 4.43158e+08 | 964010 | 0.507049 | 11.7858 | 2(Loss) | true |
| strtoll/strtoull | 86.226 | 0.154513 | 2664.13ms | 200000 | 30 | 3.50456e+08 | 2.21203e+06 | 0.196416 | 27.045 | 3(Loss) | true |

----
### int16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 202.999 | 1.8132 | 1.2669ms | 200 | 48 | 13931.7 | 939.583 | 0.0443262 | 11.0933 | 1(Win) | true |
| std::from_chars | 171.127 | 2.21883 | 1.4206ms | 200 | 48 | 29357.3 | 1114.58 | 1.01964 | 13.1228 | 2(Loss) | true |
| strtoll/strtoull | 87.627 | 0.752917 | 2.7412ms | 200 | 30 | 8057.47 | 2176.67 | 0.30722 | 26.178 | 3(Loss) | true |

----
### int16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 235.378 | 0.420403 | 9.9677ms | 2000 | 30 | 34816.1 | 8103.33 | 0.123254 | 9.8637 | 1(Win) | true |
| std::from_chars | 196.634 | 0.242153 | 11.9021ms | 2000 | 30 | 16551.7 | 9700 | 0.518135 | 11.7784 | 2(Loss) | true |
| strtoll/strtoull | 92.1424 | 0.137031 | 25.2981ms | 2000 | 30 | 24137.9 | 20700 | 0.112849 | 25.2546 | 3(Loss) | true |

----
### int16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 229.102 | 1.48666 | 99.8111ms | 20000 | 30 | 4.59564e+07 | 83253.3 | 0.232261 | 10.176 | 1(Win) | true |
| std::from_chars | 191.783 | 1.27002 | 118.136ms | 20000 | 30 | 4.78612e+07 | 99453.3 | 0.593392 | 12.1536 | 2(Loss) | true |
| strtoll/strtoull | 91.3053 | 0.657894 | 250.981ms | 20000 | 48 | 9.06611e+07 | 208898 | 0.123618 | 25.5338 | 3(Loss) | true |

----
### int16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 234.958 | 0.271849 | 977.309ms | 200000 | 48 | 2.33764e+08 | 811783 | 0.107057 | 9.92456 | 1(Win) | true |
| std::from_chars | 194.009 | 0.394166 | 1179.78ms | 200000 | 30 | 4.50501e+08 | 983123 | 0.208254 | 12.019 | 2(Loss) | true |
| strtoll/strtoull | 90.8319 | 0.10577 | 2535.13ms | 200000 | 30 | 1.47988e+08 | 2.09987e+06 | 0.182535 | 25.6737 | 3(Loss) | true |

----
### uint16-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars STATISTICAL TIE | 253.609 | 2.27388 | 1.0408ms | 200 | 48 | 14038.1 | 752.083 | 1.04167 | 8.68458 | 1(Tie) | true |
| std::from_chars STATISTICAL TIE | 241.437 | 3.05575 | 1.0563ms | 200 | 30 | 17482.8 | 790 | 0.83682 | 9.16733 | 1(Tie) | true |
| strtoll/strtoull | 93.345 | 0.650416 | 2.5723ms | 200 | 30 | 5298.85 | 2043.33 | 0.325203 | 24.549 | 3(Loss) | true |

----
### uint16-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 303.859 | 0.342837 | 7.7423ms | 2000 | 48 | 22229.6 | 6277.08 | 0.25821 | 7.62381 | 1(Win) | true |
| std::from_chars | 289.266 | 0.317398 | 8.1073ms | 2000 | 48 | 21023.9 | 6593.75 | 0.19551 | 8.0179 | 2(Loss) | true |
| strtoll/strtoull DID NOT CONVERGE | 98.1651 | 0.199177 | 23.7419ms | 2000 | 30 | 44931 | 19430 | 5.18868 | 23.7062 | -(Loss) | false |

----
### uint16-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 305.747 | 1.53174 | 75.4282ms | 20000 | 30 | 2.73925e+07 | 62383.3 | 1.4838 | 7.62019 | 1(Win) | true |
| std::from_chars | 290.607 | 1.01913 | 79.919ms | 20000 | 48 | 2.14759e+07 | 65633.3 | 0.63585 | 8.01826 | 2(Loss) | true |
| strtoll/strtoull | 67.4283 | 0.534298 | 340.113ms | 20000 | 48 | 1.09644e+08 | 282871 | 0.161997 | 34.5803 | 3(Loss) | true |

----
### uint16-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint16-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 302.208 | 0.306212 | 755.12ms | 200000 | 48 | 1.79281e+08 | 631138 | 0.326002 | 7.71614 | 1(Win) | true |
| std::from_chars | 288.26 | 0.410137 | 796.518ms | 200000 | 30 | 2.20938e+08 | 661677 | 0.0544369 | 8.0892 | 2(Loss) | true |
| strtoll/strtoull | 97.2081 | 0.148852 | 2357.45ms | 200000 | 30 | 2.5591e+08 | 1.96213e+06 | 0.0802493 | 23.99 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 247.106 | 1.07224 | 1.9969ms | 400 | 48 | 13151.6 | 1543.75 | 0.829764 | 9.22448 | 1(Win) | true |
| std::from_chars | 209.216 | 1.13662 | 2.2839ms | 400 | 30 | 12885.1 | 1823.33 | 0.829493 | 10.8822 | 2(Loss) | true |
| strtoll/strtoull | 104.322 | 0.566757 | 4.5095ms | 400 | 30 | 12885.1 | 3656.67 | 1.45665 | 22.1848 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 261.759 | 0.299613 | 17.8245ms | 4000 | 30 | 57195.4 | 14573.3 | 0 | 8.87734 | 1(Win) | true |
| std::from_chars | 225.472 | 0.164766 | 20.7774ms | 4000 | 48 | 37300.5 | 16918.8 | 0.086122 | 10.3235 | 2(Loss) | true |
| strtoll/strtoull | 106.476 | 2.44379 | 42.8024ms | 4000 | 30 | 2.29965e+07 | 35826.7 | 0.0570198 | 21.8893 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 260.217 | 0.867219 | 177.036ms | 40000 | 30 | 4.84872e+07 | 146597 | 0.00454783 | 8.95877 | 1(Win) | true |
| std::from_chars | 222.019 | 0.802537 | 205.939ms | 40000 | 48 | 9.12667e+07 | 171819 | 0.265761 | 10.4995 | 2(Loss) | true |
| strtoll/strtoull | 105.88 | 0.55458 | 430.568ms | 40000 | 48 | 1.9163e+08 | 360285 | 0.454125 | 22.022 | 3(Loss) | true |

----
### int32-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 261.262 | 0.159425 | 1816.32ms | 400000 | 30 | 1.62556e+08 | 1.46011e+06 | 0.0441373 | 8.92569 | 1(Win) | true |
| std::from_chars | 222.889 | 0.112915 | 2074.32ms | 400000 | 48 | 1.79263e+08 | 1.71148e+06 | 0.131341 | 10.4625 | 2(Loss) | true |
| strtoll/strtoull | 100.249 | 0.327131 | 4609.42ms | 400000 | 48 | 7.43774e+09 | 3.8052e+06 | 0.141775 | 23.2614 | 3(Loss) | true |

----
### int32-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 307.224 | 1.47495 | 1.5987ms | 400 | 48 | 16099.3 | 1241.67 | 0.948509 | 7.32313 | 1(Win) | true |
| std::from_chars | 262.329 | 1.2943 | 1.8527ms | 400 | 48 | 17003.5 | 1454.17 | 0.171625 | 8.59661 | 2(Loss) | true |
| strtoll/strtoull | 117.015 | 1.19121 | 4.1187ms | 400 | 30 | 45241.4 | 3260 | 0.307692 | 19.6365 | 3(Loss) | true |

----
### int32-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 342.253 | 0.306868 | 13.992ms | 4000 | 48 | 56152.5 | 11145.8 | 0.172259 | 6.79262 | 1(Win) | true |
| std::from_chars | 289.651 | 0.34374 | 16.3957ms | 4000 | 30 | 61482.8 | 13170 | 0.534351 | 8.02802 | 2(Loss) | true |
| strtoll/strtoull | 118.114 | 2.90923 | 38.5705ms | 4000 | 30 | 2.64845e+07 | 32296.7 | 0.0928026 | 19.7215 | 3(Loss) | true |

----
### int32-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 338.342 | 0.855578 | 135.911ms | 40000 | 30 | 2.79157e+07 | 112747 | 0.341155 | 6.88879 | 1(Win) | true |
| std::from_chars | 287.143 | 0.614886 | 159.799ms | 40000 | 48 | 3.20298e+07 | 132850 | 0.0827316 | 8.11796 | 2(Loss) | true |
| strtoll/strtoull | 119.028 | 0.647617 | 384.345ms | 40000 | 30 | 1.29234e+08 | 320487 | 0.555352 | 19.5892 | 3(Loss) | true |

----
### int32-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 332.113 | 0.203987 | 1406.92ms | 400000 | 48 | 2.6351e+08 | 1.14861e+06 | 0.0193311 | 7.02153 | 1(Win) | true |
| std::from_chars | 282.554 | 0.450315 | 1606ms | 400000 | 48 | 1.77415e+09 | 1.35008e+06 | 0.530299 | 8.25308 | 2(Loss) | true |
| strtoll/strtoull | 106.97 | 0.318626 | 4274.48ms | 400000 | 30 | 3.87329e+09 | 3.56614e+06 | 0.467222 | 21.8005 | 3(Loss) | true |

----
### int32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 311.828 | 2.02456 | 1.538ms | 400 | 30 | 18402.3 | 1223.33 | 0.547945 | 7.23975 | 1(Win) | true |
| std::from_chars | 274.439 | 1.10971 | 1.8348ms | 400 | 30 | 7137.93 | 1390 | 0.566319 | 8.29533 | 2(Loss) | true |
| strtoll/strtoull | 121.23 | 0.584864 | 3.9587ms | 400 | 30 | 10160.9 | 3146.67 | 0.159151 | 19.0427 | 3(Loss) | true |

----
### int32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 346.057 | 0.333196 | 13.5055ms | 4000 | 30 | 40471.3 | 11023.3 | 5.96766 | 6.70953 | -(Win) | false |
| std::from_chars | 290.681 | 0.275067 | 16.1292ms | 4000 | 30 | 39092 | 13123.3 | 0.45512 | 8.00027 | 2(Loss) | true |
| strtoll/strtoull | 125.552 | 0.0981596 | 37.4538ms | 4000 | 48 | 42695 | 30383.3 | 0.043903 | 18.552 | 3(Loss) | true |

----
### int32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 351.228 | 0.749956 | 133.881ms | 40000 | 48 | 3.18461e+07 | 108610 | 0.755003 | 6.636 | 1(Win) | true |
| std::from_chars | 286.887 | 0.825709 | 160.591ms | 40000 | 48 | 5.78622e+07 | 132969 | 0.0266424 | 8.12542 | 2(Loss) | true |
| strtoll/strtoull | 123.061 | 0.634171 | 371.861ms | 40000 | 48 | 1.85494e+08 | 309983 | 0.176043 | 18.9466 | 3(Loss) | true |

----
### int32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 341.94 | 0.22569 | 1347.08ms | 400000 | 30 | 1.9018e+08 | 1.1156e+06 | 0.031438 | 6.81989 | 1(Win) | true |
| std::from_chars | 287.593 | 0.206215 | 1609.16ms | 400000 | 30 | 2.24453e+08 | 1.32642e+06 | 0.0108048 | 8.10849 | 2(Loss) | true |
| strtoll/strtoull | 104.789 | 0.50648 | 4364.19ms | 400000 | 30 | 1.01983e+10 | 3.64034e+06 | 0.0368004 | 22.2546 | 3(Loss) | true |

----
### uint32-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 411.658 | 2.53124 | 1.2714ms | 400 | 30 | 16505.7 | 926.667 | 0.861678 | 5.35733 | 1(Win) | true |
| std::from_chars | 363.305 | 2.80559 | 1.3377ms | 400 | 30 | 26034.5 | 1050 | 1.5625 | 6.21275 | 2(Loss) | true |
| strtoll/strtoull | 129.899 | 0.502784 | 3.6577ms | 400 | 30 | 6540.23 | 2936.67 | 0.470421 | 17.7625 | 3(Loss) | true |

----
### uint32-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 456.964 | 0.460906 | 10.3175ms | 4000 | 48 | 71059.4 | 8347.92 | 0.343215 | 5.08131 | 1(Win) | true |
| std::from_chars | 415.111 | 0.350822 | 11.2806ms | 4000 | 48 | 49889.2 | 9189.58 | 0.104394 | 5.58982 | 2(Loss) | true |
| strtoll/strtoull | 132.747 | 0.0905956 | 34.8263ms | 4000 | 30 | 20333.3 | 28736.7 | 0.105958 | 17.5445 | 3(Loss) | true |

----
### uint32-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 451.943 | 1.29156 | 104.719ms | 40000 | 30 | 3.56537e+07 | 84406.7 | 1.04487 | 5.15698 | 1(Win) | true |
| std::from_chars | 410.882 | 1.12838 | 111.676ms | 40000 | 48 | 5.26791e+07 | 92841.7 | 0.0125678 | 5.67231 | 2(Loss) | true |
| strtoll/strtoull | 130.767 | 0.772202 | 350.138ms | 40000 | 30 | 1.52232e+08 | 291717 | 0.730498 | 17.829 | 3(Loss) | true |

----
### uint32-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint32-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 450.23 | 0.338603 | 1017.76ms | 400000 | 30 | 2.46918e+08 | 847277 | 0.200009 | 5.17928 | 1(Win) | true |
| std::from_chars | 411.167 | 0.29494 | 1112.8ms | 400000 | 48 | 3.59411e+08 | 927773 | 0.305197 | 5.67141 | 2(Loss) | true |
| strtoll/strtoull | 131.245 | 0.207251 | 3504.74ms | 400000 | 30 | 1.08861e+09 | 2.90656e+06 | 0.0484198 | 17.7685 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 486.983 | 1.62902 | 2.014ms | 800 | 30 | 19540.2 | 1566.67 | 0.423729 | 4.71312 | 1(Win) | true |
| std::from_chars | 334.134 | 1.51543 | 2.8477ms | 800 | 30 | 35919.5 | 2283.33 | 0.724638 | 6.83246 | 2(Loss) | true |
| strtoll/strtoull | 148.336 | 0.587239 | 5.9598ms | 800 | 30 | 27367.8 | 5143.33 | 0.290792 | 15.5902 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 519.714 | 0.234159 | 18.1018ms | 8000 | 30 | 35448.3 | 14680 | 0.446454 | 4.47329 | 1(Win) | true |
| std::from_chars | 364.636 | 0.151455 | 25.5804ms | 8000 | 30 | 30126.4 | 20923.3 | 0.10742 | 6.38471 | 2(Loss) | true |
| strtoll/strtoull | 152.588 | 1.6834 | 59.3335ms | 8000 | 30 | 2.12538e+07 | 50000 | 0.285847 | 15.2731 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 532.608 | 0.773494 | 172.428ms | 80000 | 48 | 5.89276e+07 | 143246 | 0.452899 | 4.37703 | 1(Win) | true |
| std::from_chars | 361.012 | 0.556078 | 254.509ms | 80000 | 30 | 4.14313e+07 | 211333 | 0.0650208 | 6.45759 | 2(Loss) | true |
| strtoll/strtoull | 154.899 | 0.72561 | 594.392ms | 80000 | 30 | 3.83187e+08 | 492540 | 0.19376 | 15.0534 | 3(Loss) | true |

----
### int64-mixed-sign-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-mixed-sign-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 508.25 | 0.183944 | 1851.74ms | 800000 | 30 | 2.28728e+08 | 1.50111e+06 | 0.0602139 | 4.58819 | 1(Win) | true |
| std::from_chars | 356.696 | 0.212157 | 2555.13ms | 800000 | 30 | 6.17761e+08 | 2.13891e+06 | 0.310098 | 6.53764 | 2(Loss) | true |
| strtoll/strtoull | 138.097 | 0.212304 | 6586.07ms | 800000 | 30 | 4.12713e+09 | 5.52465e+06 | 0.280926 | 16.887 | 3(Loss) | true |

----
### int64-negative-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 607.114 | 2.18121 | 1.6041ms | 800 | 30 | 22540.2 | 1256.67 | 0.265957 | 3.70054 | 1(Win) | true |
| std::from_chars | 415.394 | 1.12232 | 2.3153ms | 800 | 30 | 12747.1 | 1836.67 | 0.295791 | 5.52271 | 2(Loss) | true |
| strtoll/strtoull | 160.478 | 0.348466 | 5.6275ms | 800 | 48 | 13173.8 | 4754.17 | 0.47104 | 14.4168 | 3(Loss) | true |

----
### int64-negative-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 683.229 | 0.403547 | 13.7239ms | 8000 | 30 | 60919.5 | 11166.7 | 0.209393 | 3.40745 | 1(Win) | true |
| std::from_chars | 450.466 | 0.223774 | 20.6886ms | 8000 | 30 | 43092 | 16936.7 | 0.019685 | 5.16644 | 2(Loss) | true |
| strtoll/strtoull | 182.129 | 2.16901 | 54.3261ms | 8000 | 30 | 2.47664e+07 | 41890 | 1.51254 | 12.7919 | 3(Loss) | true |

----
### int64-negative-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 692.826 | 1.1921 | 132.589ms | 80000 | 30 | 5.16982e+07 | 110120 | 0.152718 | 3.36277 | 1(Win) | true |
| std::from_chars | 446.283 | 0.763724 | 206.024ms | 80000 | 48 | 8.18225e+07 | 170954 | 0.411181 | 5.22327 | 2(Loss) | true |
| strtoll/strtoull | 167.008 | 0.84651 | 547.619ms | 80000 | 48 | 7.17809e+08 | 456827 | 0.111856 | 13.9611 | 3(Loss) | true |

----
### int64-negative-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-negative-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 672.608 | 0.282336 | 1409.66ms | 800000 | 30 | 3.07688e+08 | 1.1343e+06 | 0.130942 | 3.46696 | 1(Win) | true |
| std::from_chars | 446.103 | 0.139663 | 2078.97ms | 800000 | 30 | 1.71155e+08 | 1.71023e+06 | 0.103334 | 5.22743 | 2(Loss) | true |
| strtoll/strtoull | 144.988 | 0.270721 | 6289.23ms | 800000 | 30 | 6.0881e+09 | 5.26209e+06 | 0.196378 | 16.0844 | 3(Loss) | true |

----
### int64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 641.126 | 2.29164 | 1.5481ms | 800 | 30 | 22310.3 | 1190 | 1.42045 | 3.52896 | 1(Win) | true |
| std::from_chars | 405.819 | 1.75585 | 2.3535ms | 800 | 30 | 32689.7 | 1880 | 0.355872 | 5.60746 | 2(Loss) | true |
| strtoll/strtoull | 164.441 | 0.361549 | 5.6585ms | 800 | 48 | 13506.2 | 4639.58 | 1.07498 | 14.0793 | 3(Loss) | true |

----
### int64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 733.361 | 0.337048 | 13.0163ms | 8000 | 30 | 36885.1 | 10403.3 | 0.478316 | 3.16827 | 1(Win) | true |
| std::from_chars | 454.491 | 0.186713 | 20.9307ms | 8000 | 30 | 29471.3 | 16786.7 | 3.81282 | 5.11725 | 2(Loss) | true |
| strtoll/strtoull | 165.126 | 1.65163 | 53.1859ms | 8000 | 30 | 1.747e+07 | 46203.3 | 0.260398 | 14.1151 | 3(Loss) | true |

----
### int64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 715.278 | 0.868051 | 130.172ms | 80000 | 30 | 2.57183e+07 | 106663 | 0.12516 | 3.2586 | 1(Win) | true |
| std::from_chars | 449.449 | 0.871195 | 205.835ms | 80000 | 30 | 6.56102e+07 | 169750 | 0.492166 | 5.18646 | 2(Loss) | true |
| strtoll/strtoull | 170.104 | 0.517293 | 538.498ms | 80000 | 48 | 2.58385e+08 | 448515 | 0.0940094 | 13.7075 | 3(Loss) | true |

----
### int64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/int64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 708.389 | 0.194285 | 1335.25ms | 800000 | 48 | 2.10164e+08 | 1.07701e+06 | 0.213755 | 3.29174 | 1(Win) | true |
| std::from_chars | 433.407 | 0.287651 | 2066.06ms | 800000 | 30 | 7.69201e+08 | 1.76033e+06 | 0.78437 | 5.38046 | 2(Loss) | true |
| strtoll/strtoull | 147.083 | 0.165885 | 6218.49ms | 800000 | 48 | 3.55395e+09 | 5.18715e+06 | 0.196874 | 15.8555 | 3(Loss) | true |

----
### uint64-positive-integer_count[100] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 449.339 | 1.38622 | 2.1576ms | 800 | 48 | 26591.3 | 1697.92 | 0.706628 | 5.06263 | 1(Win) | true |
| std::from_chars | 399.358 | 1.2394 | 2.3827ms | 800 | 48 | 26910.5 | 1910.42 | 0.196678 | 5.73073 | 2(Loss) | true |
| strtoll/strtoull | 157.172 | 0.588202 | 6.0012ms | 800 | 48 | 39131.2 | 4854.17 | 0.778547 | 14.7249 | 3(Loss) | true |

----
### uint64-positive-integer_count[1000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b1000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars DID NOT CONVERGE | 512.255 | 0.230036 | 18.4982ms | 8000 | 48 | 56343.1 | 14893.8 | 6.30897 | 4.54125 | -(Win) | false |
| std::from_chars | 346.633 | 0.127673 | 26.9438ms | 8000 | 30 | 23689.7 | 22010 | 2.90598 | 6.71494 | 2(Loss) | true |
| strtoll/strtoull | 155.775 | 1.09287 | 58.8905ms | 8000 | 48 | 1.3752e+07 | 48977.1 | 0.513745 | 14.9608 | 3(Loss) | true |

----
### uint64-positive-integer_count[10000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b10000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 493.057 | 0.920811 | 187.527ms | 80000 | 30 | 6.09045e+07 | 154737 | 0.019384 | 4.72763 | 1(Win) | true |
| std::from_chars | 338.432 | 0.857536 | 270.587ms | 80000 | 30 | 1.12115e+08 | 225433 | 0.850925 | 6.88875 | 2(Loss) | true |
| strtoll/strtoull | 155.852 | 0.358498 | 589.573ms | 80000 | 48 | 1.47832e+08 | 489527 | 0.226666 | 14.9612 | 3(Loss) | true |

----
### uint64-positive-integer_count[100000] Results 

<p align="left"><a href="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png" target="_blank"><img src="./graphs/Windows-MSVC/str-to-int-uniform-value/uint64-positive-integer_count%5b100000%5d_Results.png?raw=true" alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| vn::from_chars | 499.887 | 0.141056 | 1896.17ms | 800000 | 48 | 2.22464e+08 | 1.52622e+06 | 0.11878 | 4.66496 | 1(Win) | true |
| std::from_chars | 428.588 | 0.113624 | 2154.36ms | 800000 | 30 | 1.22734e+08 | 1.78012e+06 | 0.0106255 | 5.44069 | 2(Loss) | true |
| strtoll/strtoull | 156.746 | 0.073083 | 5869.57ms | 800000 | 30 | 3.79612e+08 | 4.86735e+06 | 0.0677528 | 14.8777 | 3(Loss) | true |
