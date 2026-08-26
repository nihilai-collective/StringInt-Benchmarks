// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
// source/main.cpp

#include "i_to_str.hpp"
#include "str_to_i.hpp"

int32_t main() {
	benchmarksuite::pin_for_benchmark();
	benchmarks::tests<"int-to-str-natural", vn::detail::conversion_classes::i_to_str, benchmarks::verify_correctness_i_to_str, benchmarks::natural_digit_generator,
		benchmarks::test_holder<"jeaiii::to_text", benchmarks::jeaiii_op>, benchmarks::test_holder<"vn::to_chars", benchmarks::vn_op>>::impl();
	benchmarks::tests<"int-to-str-uniform", vn::detail::conversion_classes::i_to_str, benchmarks::verify_correctness_i_to_str, benchmarks::uniform_digit_length_generator,
		benchmarks::test_holder<"jeaiii::to_text", benchmarks::jeaiii_op>, benchmarks::test_holder<"vn::to_chars", benchmarks::vn_op>>::impl();
	benchmarks::tests<"str-to-int-natural", vn::detail::conversion_classes::str_to_i, benchmarks::verify_correctness_str_to_i, benchmarks::natural_string_generator,
		benchmarks::test_holder<"std::from_chars", benchmarks::std_from_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"strtoll/strtoull", benchmarks::strto_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"vn::from_chars", benchmarks::vn_from_op, benchmarks::parse_subject_type>>::impl();
	benchmarks::tests<"str-to-int-uniform", vn::detail::conversion_classes::str_to_i, benchmarks::verify_correctness_str_to_i, benchmarks::uniform_digit_length_string_generator,
		benchmarks::test_holder<"std::from_chars", benchmarks::std_from_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"strtoll/strtoull", benchmarks::strto_op, benchmarks::parse_subject_type>,
		benchmarks::test_holder<"vn::from_chars", benchmarks::vn_from_op, benchmarks::parse_subject_type>>::impl();
	return 0;
}