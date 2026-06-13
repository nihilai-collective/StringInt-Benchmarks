// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
// src/tests/utility.hpp

#pragma once

#include <void-numerics>
#include <bnch_swt/index.hpp>
#include <fmt/format.h>
#include <to_text_from_integer.h>
#include <fmt/compile.h>
#include <charconv>
#include <cstring>
#include <limits>
#include <vector>
#include <memory>
#include <map>
#include <iostream>
#include <rt-ut>

#if _DEBUG
static constexpr uint64_t max_executions{ 2 };
static constexpr uint64_t measured_executions{ 1 };
#else
static constexpr uint64_t max_executions{ 1200 };
static constexpr uint64_t measured_executions{ 60 };
#endif

namespace benchmarks {	

	enum class sign_types {
		positive,
		negative,
		mixed,
	};

	template<typename v_type_new> struct string_entry {
		using v_type = v_type_new;
		char buf[vn::detail::max_digits_v<v_type> + 1]{};
		uint8_t len{};
		v_type expected{};
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

	inline static std::string current_path{ bnch_swt::get_current_path_impl() };
	inline static std::string base_path{ BASE_PATH };
	inline static std::string markdown_path{ base_path + "/Results" };
	inline static std::string csv_path{ base_path + "/csv" };
	inline static std::string json_path{ base_path + "/example-data" };
	inline static std::string graphs_path{ base_path + "/graphs/" };
	inline static std::string markdown_out_path{ markdown_path + "/" + current_path };
	inline static std::string csv_out_path{ csv_path + "/" + current_path };
	inline static std::string json_out_path{ json_path + "/" + current_path };
	inline static std::string graphs_out_path{ graphs_path + "/" + current_path };

	std::string make_section01(const auto& cpu_name) {
		std::stringstream stream{};
		std::string round_sequence{};
		uint64_t round_size = measured_executions;
		for (uint64_t i = 0; i < 3 && round_size < max_executions; ++i) {
			if (!round_sequence.empty()) {
				round_sequence += " → ";
			}
			round_sequence += std::to_string(round_size);
			round_size *= 2;
		}
		round_sequence += " → ...";

		stream << "\n> Competitive benchmarking on (" << cpu_name
			   << "): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured "
				  "measured-execution count to find each subject's lowest-deviation window. The round size starts at "
			   << std::to_string(measured_executions);
		stream << " iterations and doubles for still-entangled subjects (" << round_sequence << ") until either every subject is statistically separated, the pool reaches "
			   << std::to_string(max_executions);
		stream
			<< " iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap "
			   "are "
			   "grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a "
			   "resolution report is returned with the final status, tie groups, rounds executed, and sample counts.\n\n";
		stream << "#### Note:\n  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).\n  ";
		return stream.str();
	}

	std::string make_commit_row(std::string_view label, std::string_view org_repo, std::string_view commit) {
		return std::string("| ") + std::string(label) + ": [" + std::string(commit) + "](https://github.com/" + std::string(org_repo) + "/commit/" + std::string(commit) + ")  \n";
	}

	std::string make_section00(const std::string& stage_name, const std::string& os_id, const std::string& os_version, const std::string& compiler_id,
		const std::string& compiler_version) {
		return std::string("# " + stage_name + "  \n----\n\nPerformance profiling of libraries (Compiled and run on ") + os_id + " " + os_version + " using the " + compiler_id +
			" " + compiler_version + " compiler).  \n\nLatest Results: (";
	}

	std::string generate_section(const auto& test_name_new, const auto& current_path_new) {
		std::string test_name{ static_cast<std::string>(test_name_new) };
		std::string current_path{ static_cast<std::string>(current_path_new) };
		std::string encoded = bnch_swt::url_encode(test_name);

		return "\n----\n### " + test_name +
			" Results \n\n"
			"<p align=\"left\"><a href=\"./graphs/" +
			current_path + "/" + encoded +
			"_Results.png\" target=\"_blank\">"
			"<img src=\"./graphs/" +
			current_path + "/" + encoded +
			"_Results.png?raw=true\" \n"
			"alt=\"\" width=\"400\"/></p>\n\n";
	}

	template<typename v_type> VN_FORCE_INLINE constexpr v_type pow10(uint32_t n) {
		uint64_t r = 1;
		for (uint32_t i = 0; i < n; ++i)
			r *= 10;
		return static_cast<v_type>(r);
	}

	template<uint64_t count, typename op_type> struct conversion_subject_type {
		template<typename input_type, typename output_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, input_type& inputs_new, output_type& outputs_new) {
			auto& inputs	 = inputs_new[index];
			auto& outputs	 = outputs_new[index];
			using value_type = typename std::remove_reference_t<decltype(inputs)>::value_type;
			uint64_t accumulator{};
			for (uint64_t x = 0; x < count; ++x) {
				char* end_ptr  = op_type::template convert<value_type>(inputs[x], outputs[x].buf);
				outputs[x].end = end_ptr;
				bnch_swt::do_not_optimize_away(outputs[x].buf);
				accumulator += static_cast<uint64_t>(end_ptr - outputs[x].buf);
			}
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
				bnch_swt::do_not_optimize_away(outputs[x]);
			}
			return count * sizeof(value_type);
		}
	};

	template<bnch_swt::string_literal library_name_new, typename op_type_new, template<uint64_t, typename> typename subject_template_new = conversion_subject_type>
	struct test_holder {
		static constexpr bnch_swt::string_literal library_name{ library_name_new };
		using op_type								= op_type_new;
		template<uint64_t count> using subject_type = subject_template_new<count, op_type>;
	};

	template<typename benchmark_type, bnch_swt::string_literal test_name, uint64_t count, vn::detail::integer_types v_type,
		template<uint64_t, typename, sign_types> typename data_generator_type, sign_types sign_type, typename correctness_verifier, typename... test_types>
	void run_one_test(std::string& results_string, std::string_view stage_name) {
		using generator_type   = data_generator_type<count, v_type, sign_type>;
		using test_data_type   = typename generator_type::test_data_type;
		using output_data_type = typename generator_type::output_data_type;

		std::vector<test_data_type> input_data{ max_executions };
		std::vector<output_data_type> output_buffer{ max_executions };

		for (uint64_t x = 0; x < max_executions; ++x) {
			input_data[x] = generator_type::impl();
			output_buffer[x].resize(count);
		}

		correctness_verifier::impl(input_data[0], test_name.data());

		std::cout << "Starting benchmark: " << test_name << std::endl;

		benchmark_type::template run_until_resolved<test_name, bnch_swt::functor_subject<test_types::library_name, typename test_types::template subject_type<count>>...>(
			input_data, output_buffer);

		results_string += generate_section(test_name.operator std::string(), current_path + "/" + std::string{ stage_name });
		auto results = benchmark_type::get_test_results(test_name.operator std::string());
		results_string += results.to_markdown(false, false);
		std::stringstream stream{};
		stream << "[";
		for (uint64_t x = 0; x < count; ++x) {
			stream << convert_to_string(input_data[0][x]);
			if (x < count - 1) {
				stream << ",";
			}
		}
		stream << "]";
		bnch_swt::file_handle::save_file(results.to_csv(false), csv_out_path + "/" + std::string{ stage_name } + "/" + test_name.operator std::string() + ".csv");
		bnch_swt::file_handle::save_file(stream.str(), json_out_path + "/" + std::string{ stage_name } + "/" + test_name.operator std::string() + ".json");
	}

	template<typename benchmark_type, bnch_swt::string_literal stage_name, bnch_swt::string_literal test_name, vn::detail::integer_types v_type,
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

	template<typename benchmark_type, bnch_swt::string_literal stage_name, bnch_swt::string_literal type_name, vn::detail::integer_types v_type,
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

	template<typename benchmark_type, bnch_swt::string_literal stage_name, template<uint64_t, typename, sign_types> typename data_generator_type, typename correctness_verifier,
		typename... test_types>
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

	template<bnch_swt::string_literal stage_name, vn::detail::conversion_classes conversion_class, typename correctness_verifier,
		template<uint64_t, typename, sign_types> typename data_generator_type, typename... test_types>
	struct tests {
		static void impl() {
			std::string results_string{};
			static constexpr bnch_swt::stage_config config{ .measured_execution_count = measured_executions, .max_execution_count = max_executions };
			using benchmark_type = bnch_swt::competitive_benchmark<stage_name, config>;

			all_integer_widths<benchmark_type, stage_name, data_generator_type, correctness_verifier, test_types...>(results_string);

			auto results = benchmark_type::get_all_results();
			results.print();
			std::string time_string{};
			time_string.resize(1024);
			std::tm tm_result{ bnch_swt::get_time() };
			time_string.resize(strftime(time_string.data(), 1024, "%b %d, %Y", &tm_result));

			std::string header{ make_section00(stage_name.operator std::string(), bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_id,
									bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_version, bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_id,
									bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_version) +
				time_string + ")\n" + static_cast<std::string>(make_section01(bnch_swt::internal::get_device_info<bnch_swt::benchmark_types::cpu>())) };

			bnch_swt::file_handle::save_file(header + results_string, base_path + "/" + current_path + "-" + stage_name.operator std::string() + ".md");
			bnch_swt::file_handle::save_file(results.to_csv(), csv_out_path + "/" + stage_name.operator std::string() + "/Results.csv");
			bnch_swt::execute_python_script(std::string{ base_path } + "/GenerateGraphs.py", csv_out_path + "/" + stage_name.operator std::string() + "/",
				graphs_out_path + "/" + stage_name.operator std::string());
		}
	};



}
