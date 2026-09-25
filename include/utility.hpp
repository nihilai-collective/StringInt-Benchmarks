/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 Nihilai Collective Corp
 * https://github.com/nihilai-collective/stringint-benchmarks
 * source/utility.hpp
 */

#pragma once

#include <benchmarksuite>
#include <void-numerics>
#include <to_text_from_integer.h>
#include <algorithm>
#include <charconv>
#include <cstring>
#include <limits>
#include <vector>
#include <memory>
#include <map>
#include <iostream>

#if defined(PGO_TRAINING)
static constexpr uint64_t max_iteration_count{ 20 };
static constexpr uint64_t measured_iteration_count{ 10 };
static constexpr bool cache_clearing{ false };
inline static constexpr benchmarksuite::string_literal base_path{ PGO_BASE_PATH };
#elif defined(NDEBUG)
static constexpr uint64_t max_iteration_count{ 1200 };
static constexpr uint64_t measured_iteration_count{ 60 };
static constexpr bool cache_clearing{ true };
inline static constexpr benchmarksuite::string_literal base_path{ BASE_PATH };
#else
static constexpr uint64_t max_iteration_count{ 200 };
static constexpr uint64_t measured_iteration_count{ 10 };
static constexpr bool cache_clearing{ true };
inline static constexpr benchmarksuite::string_literal base_path{ BASE_PATH };
#endif

#if SIB_CI_RUN
static constexpr double convergence_threshold{ 5.0 };
static constexpr double rse_threshold{ 10.0 };
#else
static constexpr double convergence_threshold{ 2.5 };
static constexpr double rse_threshold{ 5.0 };
#endif

namespace detail {

	using true_type	 = std::integral_constant<bool, true>;
	using false_type = std::integral_constant<bool, false>;

	enum class conversion_classes {
		i_to_str,
		d_to_str,
		str_to_i,
		str_to_d,
	};

}

static constexpr benchmarksuite::stage_config_data config{ .clear_cpu_caches_before_iterations = true,
	.measured_iteration_count																   = measured_iteration_count,
	.max_iteration_count																	   = max_iteration_count,
	.convergence_threshold																	   = convergence_threshold,
	.max_time_in_s																			   = 20,
	.rse_threshold																			   = rse_threshold,
	.min_k																					   = std::min(uint64_t{ 30 }, max_iteration_count) };

template<benchmarksuite::string_literal stage_name> using benchmark_type = benchmarksuite::benchmark_stage<stage_name, config>;

namespace benchmarks {

	enum class sign_types {
		positive,
		negative,
		mixed,
	};

	inline constexpr uint64_t pow10_table[] = { 1ULL, 10ULL, 100ULL, 1000ULL, 10000ULL, 100000ULL, 1000000ULL, 10000000ULL, 100000000ULL, 1000000000ULL, 10000000000ULL,
		100000000000ULL, 1000000000000ULL, 10000000000000ULL, 100000000000000ULL, 1000000000000000ULL, 10000000000000000ULL, 100000000000000000ULL, 1000000000000000000ULL,
		10000000000000000000ULL };	

	template<sign_types sign_type, typename int_type> VN_INLINE int_type apply_sign(int_type value, benchmarksuite::random_generator<bool>& rg_neg) {
		if constexpr (std::is_signed_v<int_type>) {
			using unsigned_type = std::make_unsigned_t<int_type>;

			if (value == std::numeric_limits<int_type>::min()) {
				value = std::numeric_limits<int_type>::max();
			}

			unsigned_type uval = static_cast<unsigned_type>(value < 0 ? -value : value);

			bool make_negative = false;
			if constexpr (sign_type == sign_types::mixed) {
				make_negative = rg_neg.impl();
			} else if constexpr (sign_type == sign_types::negative) {
				make_negative = true;
			}

			if (make_negative) {
				uval = static_cast<unsigned_type>(0) - uval;
			}
			return static_cast<int_type>(uval);
		}
		return value;
	}

	const char* get_rt_end_value(const char* start, uint64_t full_length, uint64_t required_length) {
		static benchmarksuite::random_generator<uint64_t> rg{};
		return start + rg.impl(required_length, full_length);
	}

	template<typename v_type_new> struct string_entry {
		using v_type						= v_type_new;
		static constexpr size_t max_size	= vn::detail::max_digits_v<v_type> * 2;
		static constexpr size_t target_size = vn::detail::max_digits_v<v_type> + 1;

		char buf[max_size]{};
		uint8_t len{};
		v_type expected{};
		const char* actual_end{ get_rt_end_value(buf, max_size, target_size) };
	};

	static constexpr uint64_t max_leading_zeros = 20;

	template<typename v_type_new> struct leading_zero_string_entry {
		using v_type = v_type_new;
		char buf[vn::detail::max_digits_v<v_type> + max_leading_zeros + 2]{};
		uint8_t len{};
		v_type expected{};
	};

	template<typename v_type_new> struct integer_entry {
		using v_type = v_type_new;
		char buf[vn::detail::max_digits_v<v_type> + 1]{};
		char* end{ buf + vn::detail::max_digits_v<v_type> + 1 };
	};

	template<typename v_type_new> std::string convert_to_string(leading_zero_string_entry<v_type_new>& string) {
		return std::to_string(string.expected);
	}

	template<typename v_type_new> std::string convert_to_string(integer_entry<v_type_new>& string) {
		return std::string{ string.buf };
	}

	template<typename v_type_new> std::string convert_to_string(string_entry<v_type_new>& string) {
		return std::to_string(string.expected);
	}

	template<typename v_type_new> std::string convert_to_string(v_type_new& string) {
		return std::to_string(string);
	}

	inline static constexpr benchmarksuite::string_literal current_path{ benchmarksuite::get_current_path_impl() };
	inline static constexpr benchmarksuite::string_literal markdown_path{ base_path + "/Results" };
	inline static constexpr benchmarksuite::string_literal csv_path{ base_path + "/csv" };
	inline static constexpr benchmarksuite::string_literal json_path{ base_path + "/example-data" };
	inline static constexpr benchmarksuite::string_literal graphs_path{ base_path + "/graphs/" };
	inline static constexpr benchmarksuite::string_literal markdown_out_path{ markdown_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal csv_out_path{ csv_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal json_out_path{ json_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal graphs_out_path{ graphs_path + "/" + current_path };

	std::string make_section01() {
		std::string result;
		result.reserve(1400);
		result += "\n> Adaptive sampling on (";
		result += benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::device_name();
		result += "): iterations begin at ";
		result += std::to_string(config.measured_iteration_count);
		result += " and double each epoch (e.g. ";
		result += std::to_string(config.measured_iteration_count);
		result += " → ";
		result += std::to_string(config.measured_iteration_count * 2);
		result += " → ";
		result += std::to_string(config.measured_iteration_count * 4);
		result += " → ...) up to a maximum of ";
		result += std::to_string(config.max_iteration_count);
		result += " iterations. Each epoch runs all iterations and evaluates a trailing window of ";
		result += "max(iterations/10, ";
		result += std::to_string(config.min_k);
		result += ") samples, capped at ";
		result += std::to_string(config.max_k);
		result += ". Convergence requires RSE < ";
		result += std::to_string(config.rse_threshold);
		result += "% AND mean shift < ";
		result += std::to_string(config.convergence_threshold);
		result += "% epoch-over-epoch simultaneously. ";
		result += "The first epoch satisfying both conditions is retained as the canonical result. ";
		result += "If convergence is never reached before ";
		result += std::to_string(config.max_time_in_s);
		result += " seconds elapse or the iteration cap is hit, the result is marked non-converged and ";
		result += "excluded from all rankings — only converged results participate in win/tie/loss tallying. ";
		result += "All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.\n\n";
		result +=
			"#### Note:\n  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/nihilai-collective/benchmarksuite), at commit [";
		result += BNCH_SWT_COMMIT;
		result += "](https://github.com/nihilai-collective/benchmarksuite/commit/";
		result += BNCH_SWT_COMMIT;
		result += ").\n  ";
		result += "For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples ";
		result += "against jeaiii's unchecked implementation. Also note: There is no explicit SIMD in any of our code. Also note: There is no explicit SIMD in any of our code.\n  ";
		return result;
	}

	std::string make_commit_row(std::string_view label, std::string_view org_repo, std::string_view commit) {
		std::string result;
		result.reserve(label.size() + org_repo.size() + commit.size() * 2 + 40);
		result += "| ";
		result += label;
		result += ": [";
		result += commit;
		result += "](https://github.com/";
		result += org_repo;
		result += "/commit/";
		result += commit;
		result += ")  \n";
		return result;
	}

	std::string make_section00(std::string_view stage_name) {
		std::string result;
		result.reserve(stage_name.size() + 192);
		result += "# ";
		result += stage_name;
		result += "  \n----\n\nPerformance profiling of libraries (Compiled and run on ";
		result += benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_id;
		result += " ";
		result += benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_version;
		result += " using the ";
		result += benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_id;
		result += " ";
		result += benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_version;
		result += " compiler).  \n\nLatest Results: (";
		return result;
	}

	std::string generate_section(std::string_view test_name_new, std::string_view current_path_new) {
		std::string encoded{ benchmarksuite::url_encode(test_name_new) };
		std::string result;
		result.reserve(test_name_new.size() + current_path_new.size() * 2 + encoded.size() * 2 + 160);
		result += "\n----\n### ";
		result += test_name_new;
		result += " Results \n\n<p align=\"left\"><a href=\"./graphs/";
		result += current_path_new;
		result += "/";
		result += encoded;
		result += "_Results.png\" target=\"_blank\"><img src=\"./graphs/";
		result += current_path_new;
		result += "/";
		result += encoded;
		result += "_Results.png?raw=true\" alt=\"\" width=\"400\"/></p>\n\n";
		return result;
	}

	template<uint64_t count, typename op_type> struct conversion_subject_type {
		template<typename input_type, typename output_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, input_type& inputs_new, output_type& outputs_new) {
			auto& inputs	 = inputs_new[index];
			auto& outputs	 = outputs_new[index];
			using value_type = typename std::remove_reference_t<decltype(inputs)>::value_type;
			uint64_t accumulator{};
			for (uint64_t x = 0; x < count; ++x) {
				char* end_ptr = op_type::template convert<value_type>(inputs[x], outputs[x].buf, const_cast<char*>(outputs[x].actual_end));
				benchmarksuite::do_not_optimize_away(outputs[x].buf);
				accumulator += static_cast<uint64_t>(end_ptr - outputs[x].buf);
			}
			++index;
			return accumulator;
		}
	};

	template<uint64_t count, typename op_type> struct parse_subject_type {
		template<typename input_type, typename output_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, input_type& inputs_new, output_type& outputs_new) {
			auto& inputs	 = inputs_new[index];
			auto& outputs	 = outputs_new[index];
			using value_type = typename std::remove_reference_t<decltype(outputs)>::value_type;
			for (uint64_t x = 0; x < count; ++x) {
				outputs[x] = op_type::template convert<value_type>(inputs[x].buf, inputs[x].len);
				benchmarksuite::do_not_optimize_away(outputs[x]);
			}
			++index;
			return count * sizeof(value_type);
		}
	};

	template<benchmarksuite::string_literal library_name_new, typename op_type_new, template<uint64_t, typename> typename subject_template_new = conversion_subject_type>
	struct test_holder {
		static constexpr benchmarksuite::string_literal library_name{ library_name_new };
		using op_type								= op_type_new;
		template<uint64_t count> using subject_type = subject_template_new<count, op_type>;
	};

	template<typename benchmark_type, benchmarksuite::string_literal test_name, uint64_t count, vn::detail::integer_types v_type,
		template<uint64_t, typename, sign_types> typename data_generator_type, sign_types sign_type, typename correctness_verifier, typename... test_types>
	void run_one_test(std::string& results_string, std::string_view stage_name) {
		using generator_type   = data_generator_type<count, v_type, sign_type>;
		using test_data_type   = typename generator_type::test_data_type;
		using output_data_type = typename generator_type::output_data_type;

		std::vector<test_data_type> input_data(max_iteration_count);
		std::vector<output_data_type> output_buffer(max_iteration_count);

		for (uint64_t x = 0; x < max_iteration_count; ++x) {
			input_data[x] = generator_type::impl();
			output_buffer[x].resize(count);
		}

		correctness_verifier::impl(input_data[0], test_name.data_val);

		std::cout << "Starting benchmark: " << test_name << std::endl;

		uint64_t current_index{};

		((current_index = 0,
			 benchmark_type::template run_benchmark<test_name, test_types::library_name, typename test_types::template subject_type<count>>(current_index, input_data,
				 output_buffer)),
			...);

		auto results = benchmark_type::get_test_results(test_name.operator std::string());
		results.print(false);
		if (results.size() > 0) {
			results_string += generate_section(test_name.operator std::string(), current_path.operator std::string() + "/" + static_cast<std::string>(stage_name));

			results_string += results.to_markdown(false, false);
			std::string json_out{};
			json_out.reserve(count * 8);
			json_out += '[';
			for (uint64_t x = 0; x < count; ++x) {
				auto s = convert_to_string(input_data[0][x]);
				json_out += s;
				if (x < count - 1) {
					json_out += ',';
				}
			}
			json_out += ']';
			benchmarksuite::file_handle::save_file(results.to_csv(false),
				csv_out_path.operator std::string() + "/" + static_cast<std::string>(stage_name) + "/" + test_name.operator std::string() + ".csv");
			benchmarksuite::file_handle::save_file(json_out,
				json_out_path.operator std::string() + "/" + static_cast<std::string>(stage_name) + "/" + test_name.operator std::string() + ".json");
		}
	}

	template<typename benchmark_type, benchmarksuite::string_literal stage_name, benchmarksuite::string_literal test_name, vn::detail::integer_types v_type,
		template<uint64_t, typename, sign_types> typename data_generator_type, sign_types sign_type, typename correctness_verifier, typename... test_types>
	void mixed_size_sweep(std::string& results_string) {
		static constexpr auto base = test_name + "-integer_count[";
		run_one_test<benchmark_type, base + "100]", 100, v_type, data_generator_type, sign_type, correctness_verifier, test_types...>(results_string,
			stage_name.operator std::string());
		run_one_test<benchmark_type, base + "1000]", 1000, v_type, data_generator_type, sign_type, correctness_verifier, test_types...>(results_string,
			stage_name.operator std::string());
		run_one_test<benchmark_type, base + "10000]", 10000, v_type, data_generator_type, sign_type, correctness_verifier, test_types...>(results_string,
			stage_name.operator std::string());
		run_one_test<benchmark_type, base + "100000]", 100000, v_type, data_generator_type, sign_type, correctness_verifier, test_types...>(results_string,
			stage_name.operator std::string());
	}

	template<typename benchmark_type, benchmarksuite::string_literal stage_name, benchmarksuite::string_literal type_name, vn::detail::integer_types v_type,
		template<uint64_t, typename, sign_types> typename data_generator_type, typename correctness_verifier, typename... test_types>
	struct sign_iterator {
		static void impl(std::string& results_string) {
			if constexpr (vn::detail::int_types<v_type>) {
				mixed_size_sweep<benchmark_type, stage_name, type_name + "-mixed-sign", v_type, data_generator_type, sign_types::mixed, correctness_verifier, test_types...>(
					results_string);
				mixed_size_sweep<benchmark_type, stage_name, type_name + "-negative", v_type, data_generator_type, sign_types::negative, correctness_verifier, test_types...>(
					results_string);
			}
			mixed_size_sweep<benchmark_type, stage_name, type_name + "-positive", v_type, data_generator_type, sign_types::positive, correctness_verifier, test_types...>(
				results_string);
		}
	};

	template<typename benchmark_type, benchmarksuite::string_literal stage_name, template<uint64_t, typename, sign_types> typename data_generator_type,
		typename correctness_verifier, typename... test_types>
	void all_integer_widths(std::string& results_string) {
		sign_iterator<benchmark_type, stage_name, "int8", int8_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "uint8", uint8_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "int16", int16_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "uint16", uint16_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "int32", int32_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "uint32", uint32_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "int64", int64_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
		sign_iterator<benchmark_type, stage_name, "uint64", uint64_t, data_generator_type, correctness_verifier, test_types...>::impl(results_string);
	}

	template<benchmarksuite::string_literal stage_name, detail::conversion_classes conversion_class, typename correctness_verifier,
		template<uint64_t, typename, sign_types> typename data_generator_type, typename... test_types>
	struct tests {
		static void impl() {
			std::string results_string{};

			all_integer_widths<benchmark_type<stage_name>, stage_name, data_generator_type, correctness_verifier, test_types...>(results_string);

			auto results = benchmark_type<stage_name>::get_all_results();
			std::string time_string{ benchmarksuite::get_time() };

			std::string header{ make_section00(stage_name.operator std::string()) + time_string + ")\n" + make_section01() };

			benchmarksuite::file_handle::save_file(header + results_string,
				base_path.operator std::string() + "/" + current_path.operator std::string() + "-" + stage_name.operator std::string() + ".md");
			benchmarksuite::file_handle::save_file(results.to_csv(), csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/Results.csv");
			benchmarksuite::execute_python_script(base_path.operator std::string() + "/GenerateGraphs.py",
				csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/",
				graphs_out_path.operator std::string() + "/" + stage_name.operator std::string());
		}
	};

}
