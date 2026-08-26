// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
// source/utility.hpp

#pragma once

#include <benchmarksuite>
#include <void-numerics>
#include <to_text_from_integer.h>
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

static constexpr benchmarksuite::stage_config_data config{ .clear_cpu_caches_before_iterations = cache_clearing,
	.measured_iteration_count																   = measured_iteration_count,
	.max_iteration_count																	   = max_iteration_count,
	.max_time_in_s																			   = 6,
	.min_k																					   = max_iteration_count };

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

	template<sign_types sign_type, typename int_type> VN_FORCE_INLINE int_type apply_sign(int_type value, benchmarksuite::random_generator<bool>& rg_neg) {
		if constexpr (std::is_signed_v<int_type>) {
			using unsigned_type = std::make_unsigned_t<int_type>;
			if constexpr (sign_type == sign_types::mixed) {
				if (rg_neg.impl()) {
					unsigned_type uval = static_cast<unsigned_type>(value);
					uval			   = static_cast<unsigned_type>(0) - uval;
					value			   = static_cast<int_type>(uval);
				}
			} else if constexpr (sign_type == sign_types::negative) {
				if (value > 0) {
					unsigned_type uval = static_cast<unsigned_type>(value);
					uval			   = static_cast<unsigned_type>(0) - uval;
					value			   = static_cast<int_type>(uval);
				}
			} else if constexpr (sign_type == sign_types::positive) {
				if (value < 0) {
					if (value == std::numeric_limits<int_type>::min()) {
						value = std::numeric_limits<int_type>::max();
					} else {
						unsigned_type uval = static_cast<unsigned_type>(value);
						uval			   = static_cast<unsigned_type>(0) - uval;
						value			   = static_cast<int_type>(uval);
					}
				}
			}
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

	std::string make_section01(const std::string& cpu_name) {
		return std::format("\n> Adaptive sampling on ({}): iterations begin at {} and double each epoch "
						   "(e.g. {} → {} → {} → ...) up to a maximum of {} iterations. "
						   "Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, {}) samples, capped at {}. "
						   "Convergence requires RSE < {}% AND mean shift < {}% epoch-over-epoch simultaneously. "
						   "The first epoch satisfying both conditions is retained as the canonical result. "
						   "If convergence is never reached before {} seconds elapse or the iteration cap is hit, "
						   "the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. "
						   "All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.\n\n"
						   "#### Note:\n  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).\n  "
						   "For the int-to-string benchmarks specifically, our core algorithm was run with its bounds checks stripped out, to keep the comparison apples-to-apples "
						   "against jeaiii's unchecked implementation.\n  ",
			cpu_name, config.measured_iteration_count, config.measured_iteration_count, config.measured_iteration_count * 2, config.measured_iteration_count * 4,
			config.max_iteration_count, config.min_k, config.max_k, config.rse_threshold, config.convergence_threshold, config.max_time_in_s);
	}

	std::string make_commit_row(const std::string& label, const std::string& org_repo, const std::string& commit) {
		return std::format("| {0}: [{2}](https://github.com/{1}/commit/{2})  \n", label, org_repo, commit);
	}

	std::string make_section00(const std::string& stage_name, const std::string& os_id, const std::string& os_version, const std::string& compiler_id, const std::string& compiler_version) {
		return std::format("# {}  \n----\n\nPerformance profiling of libraries (Compiled and run on {} {} using the {} {} compiler).  \n\nLatest Results: (", stage_name, os_id,
			os_version, compiler_id, compiler_version);
	}

	std::string generate_section(const std::string& test_name_new, const std::string& current_path_new) {
		std::string encoded = benchmarksuite::url_encode(test_name_new);

		return std::format("\n----\n### {} Results \n\n<p align=\"left\"><a href=\"./graphs/{}/{}_Results.png\" target=\"_blank\"><img src=\"./graphs/{}/{}_Results.png?raw=true\" "
						   "alt=\"\" width=\"400\"/></p>\n\n",
			test_name_new, current_path_new, encoded, current_path_new, encoded);
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
	void run_one_test(std::string& results_string, const std::string& stage_name) {
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
		if (results.sorted_results.size() > 0) {
			results_string += generate_section(test_name.operator std::string(), current_path.operator std::string() + "/" + stage_name);

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
			benchmarksuite::file_handle::save_file(results.to_csv(false), csv_out_path.operator std::string() + "/" + stage_name + "/" + test_name.operator std::string() + ".csv");
			benchmarksuite::file_handle::save_file(json_out, json_out_path.operator std::string() + "/" + stage_name + "/" + test_name.operator std::string() + ".json");
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

	template<benchmarksuite::string_literal stage_name, vn::detail::conversion_classes conversion_class, typename correctness_verifier,
		template<uint64_t, typename, sign_types> typename data_generator_type, typename... test_types>
	struct tests {
		static void impl() {
			std::string results_string{};

			all_integer_widths<benchmark_type<stage_name>, stage_name, data_generator_type, correctness_verifier, test_types...>(results_string);

			auto results = benchmark_type<stage_name>::get_all_results();
			std::string time_string{ benchmarksuite::get_time() };

			std::string header{ make_section00(stage_name.operator std::string(),
									static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_id),
									static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_version),
									static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_id),
									static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_version)) +
				time_string + ")\n" + make_section01(benchmarksuite::internal::get_device_info<benchmarksuite::benchmark_types::cpu>()) };

			benchmarksuite::file_handle::save_file(header + results_string,
				base_path.operator std::string() + "/" + current_path.operator std::string() + "-" + stage_name.operator std::string() + ".md");
			benchmarksuite::file_handle::save_file(results.to_csv(), csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/Results.csv");
			benchmarksuite::execute_python_script(base_path.operator std::string() + "/GenerateGraphs.py",
				csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/",
				graphs_out_path.operator std::string() + "/" + stage_name.operator std::string());
		}
	};

}
