/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 Nihilai Collective Corp
 * https://github.com/nihilai-collective/stringint-benchmarks
 * source/main.cpp
 */

#include <i_to_str.hpp>
#include <str_to_i.hpp>

int32_t main() {
	benchmarksuite::pin_for_benchmark();
	benchmarks::tests<"int-to-str-uniform-value", detail::conversion_classes::i_to_str, benchmarks::verify_correctness_i_to_str, benchmarks::uniform_digit_generator,
		benchmarks::test_holder<"jeaiii::to_text", benchmarks::jeaiii_op>, benchmarks::test_holder<"vn::to_chars", benchmarks::vn_op>>::impl();
	benchmarks::tests<"str-to-int-uniform-value", detail::conversion_classes::str_to_i, benchmarks::verify_correctness_str_to_i, benchmarks::uniform_string_generator,
		benchmarks::test_holder<"std::from_chars", benchmarks::std_from_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"strtoll/strtoull", benchmarks::strto_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"vn::from_chars", benchmarks::vn_from_op, benchmarks::parse_subject_type>>::impl();
	return 0;
}