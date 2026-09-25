/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 Nihilai Collective Corp
 * https://github.com/nihilai-collective/stringint-benchmarks
 * source/str_to_i.hpp
 */

#pragma once

#include <utility.hpp>

namespace benchmarks {

	template<uint64_t total_size, typename int_type, sign_types sign_type> struct uniform_string_generator {
		using entry_type	   = string_entry<int_type>;
		using test_data_type   = std::vector<entry_type>;
		using output_data_type = std::vector<int_type>;

		static test_data_type impl() {
			test_data_type data(total_size);
			benchmarksuite::random_generator<int_type> rg_val{};
			benchmarksuite::random_generator<bool> rg_neg{};

			for (auto& e: data) {
				int_type value = static_cast<int_type>(rg_val.impl());
				value		   = apply_sign<sign_type>(value, rg_neg);
				auto [ptr, ec] = std::to_chars(e.buf, e.buf + sizeof(e.buf) - 1, value);
				*ptr		   = '\0';
				e.len		   = static_cast<uint8_t>(ptr - e.buf);
				e.expected	   = value;
			}
			return data;
		}
	};

	struct vn_from_op {
		template<typename v_type> VN_INLINE static v_type convert(const char* buf, uint8_t len) noexcept {
			v_type result{};
			vn::from_chars(buf, buf + len, result);
			return result;
		}
	};

	struct std_from_op {
		template<typename v_type> VN_INLINE static v_type convert(const char* buf, uint8_t len) noexcept {
			v_type result{};
			std::from_chars(buf, buf + len, result);
			return result;
		}
	};

	struct strto_op {
		template<typename v_type> VN_INLINE static v_type convert(const char* buf, uint8_t) noexcept {
			if constexpr (std::is_signed_v<v_type>) {
				return static_cast<v_type>(std::strtoll(buf, nullptr, 10));
			} else {
				return static_cast<v_type>(std::strtoull(buf, nullptr, 10));
			}
		}
	};

	struct verify_correctness_str_to_i {
		template<typename int_type> static void impl(const std::vector<string_entry<int_type>>& test_data, const char* test_label) {
			uint64_t vn_correct{}, vn_incorrect{};
			uint64_t strto_incorrect{}, total_incorrect{};
			int_type first_bad_value{};
			bool found_bad{ false };
			for (uint64_t x = 0; x < test_data.size(); ++x) {
				const auto& e = test_data[x];
				int_type vn_result{};
				vn::from_chars(e.buf, e.buf + e.len, vn_result);
				int_type strto_result{};
				if constexpr (std::is_signed_v<int_type>) {
					strto_result = static_cast<int_type>(std::strtoll(e.buf, nullptr, 10));
				} else {
					strto_result = static_cast<int_type>(std::strtoull(e.buf, nullptr, 10));
				}
				if (vn_result == e.expected) {
					++vn_correct;
				} else {
					++vn_incorrect;
					++total_incorrect;
					if (!found_bad) {
						first_bad_value = e.expected;
						found_bad		= true;
					}
				}
				if (strto_result != e.expected) {
					++strto_incorrect;
					++total_incorrect;
				}
			}
			if (total_incorrect > 0) {
				std::cout << "[" << test_label << "] vn correct: " << vn_correct << " | incorrect: " << vn_incorrect << " | strto incorrect: " << strto_incorrect << std::endl;
				if (vn_incorrect > 0) {
					std::cout << "  FIRST BAD vn VALUE: " << static_cast<int64_t>(first_bad_value) << std::endl;
				}
				std::exit(-1);
			}
		}
	};

}
