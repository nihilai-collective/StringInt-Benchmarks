// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
// src/benchmarks/utility.hpp

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

#if _DEBUG
static constexpr uint64_t max_executions{ 2 };
static constexpr uint64_t measured_executions{ 1 };
#else
static constexpr uint64_t max_executions{ 400 };
static constexpr uint64_t measured_executions{ 40 };
#endif

namespace benchmarks {

	std::tm get_time() {
#if BNCH_SWT_PLATFORM_WINDOWS
		std::time_t result = std::time(nullptr);
		std::tm result_two{};
		localtime_s(&result_two, &result);
		return result_two;
#else
		std::time_t result = std::time(nullptr);
		return *localtime(&result);
#endif
	}

	static std::string url_encode(std::string value) {
		std::ostringstream escaped;
		escaped.fill('0');
		escaped << std::hex;

		for (char c: value) {
			if (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
				escaped << c;
			} else if (c == ':') {
				escaped << '%' << std::setw(2) << int32_t(( unsigned char )' ');
			} else {
				escaped << '%' << std::setw(2) << int32_t(( unsigned char )c);
			}
		}

		return escaped.str();
	}

	std::string get_current_path_impl() {
		return bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_id + "-" + bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_id;
	}

	inline static std::string current_path{ get_current_path_impl() };
	inline static std::string base_path{ BASE_PATH };
	inline static std::string markdown_path{ base_path + "/Results" };
	inline static std::string csv_path{ base_path + "/csv" };
	inline static std::string graphs_path{ base_path + "/graphs/" };
	inline static std::string markdown_out_path{ markdown_path + "/" + current_path };
	inline static std::string csv_out_path{ csv_path + "/" + current_path };
	inline static std::string graphs_out_path{ graphs_path + "/" + current_path };

	std::string make_section01(const auto& cpu_name) {
		std::stringstream stream{};
		stream << "\n> Adaptive sampling on (" << cpu_name << "): an inner sliding window of 10 consecutive iterations is evaluated across a growing pool that starts at "
			   << std::to_string(measured_executions);
		stream << " iterations anddoubles(20 → 40 → 80 → ...) until either the lowest - deviation window falls below 1.0 % throughput deviation,the pool reaches "
			   << std::to_string(max_executions);
		stream << " iterations, or 5.5 seconds elapse. The reported result is the window with the lowest deviation observed across the entire search.\n\n";
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
		std::string encoded = url_encode(test_name);

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

	template<bnch_swt::string_literal library_name_new, typename test_type_new> struct test_holder {
		static constexpr bnch_swt::string_literal library_name{ library_name_new };
		using test_type = test_type_new;
	};

	template<typename benchmark_stage_type, bnch_swt::string_literal test_name_new, typename test_type, typename test_data_type, typename output_data_type>
	auto execute_test(uint64_t test_size, test_data_type& test_data, output_data_type& output_buffer, uint64_t& output_buffer_index) {
		static constexpr bnch_swt::string_literal test_name{ test_name_new };
		uint64_t current_index{};
		benchmark_stage_type::template run_benchmark<test_name, test_type::library_name, typename test_type::test_type>(test_size, test_data, output_buffer[output_buffer_index],
			current_index);
		++output_buffer_index;
	}

	template<typename benchmark_stage_type, bnch_swt::string_literal test_name_new, typename test_data_type, typename output_data_type, typename... test_types>
	auto execute_tests(uint64_t test_size, test_data_type& test_data, output_data_type& output_buffer) {
		uint64_t output_buffer_index{};
		(execute_test<benchmark_stage_type, test_name_new, test_types>(test_size, test_data, output_buffer, output_buffer_index), ...);
	}

	template<typename benchmark_stage_type, bnch_swt::string_literal stage_name_new, bnch_swt::string_literal test_name_new, uint64_t test_size, uint64_t total_iters,
		uint64_t measured_iters, vn::detail::integer_types v_type, typename correctness_verifier, template<uint64_t, typename, bool> typename digit_generator_type, bool negative,
		typename... test_types>
	auto run_one_test(std::string& results_string) {
		auto test_data		   = digit_generator_type<test_size * total_iters, v_type, negative>::impl();
		using output_data_type = std::vector<typename digit_generator_type<test_size * total_iters, v_type, negative>::output_data_type>;
		output_data_type output_buffer{};
		output_buffer.resize(sizeof...(test_types));
		for (uint64_t x = 0; x < sizeof...(test_types); ++x) {
			output_buffer[x].resize(test_size * total_iters);
		}
		using test_data_type = decltype(test_data);
		static constexpr bnch_swt::string_literal test_name{ test_name_new + "-mixed-lengths" + "-test-size[" + bnch_swt::internal::to_string_literal<test_size>() + "]" };
		std::cout << "Starting benchmark: " << test_name << std::endl;
		execute_tests<benchmark_stage_type, test_name, test_data_type, output_data_type, test_types...>(test_size, test_data, output_buffer);
		results_string += generate_section(test_name.operator std::string(), current_path + "/" + stage_name_new.operator std::string());
		auto results = benchmark_stage_type::get_test_results(test_name.operator std::string());
		results.print(false);
		results_string += results.to_markdown(false);
		bnch_swt::file_handle::save_file(results.to_csv(), csv_out_path + "/" + stage_name_new.operator std::string() + "/" + test_name.operator std::string() + ".csv");
		correctness_verifier::impl(test_data, test_name.data());
	}

	template<typename benchmark_stage_type, bnch_swt::string_literal stage_name_new, bnch_swt::string_literal test_name, uint64_t total_iters_new, uint64_t measured_iters,
		vn::detail::integer_types v_type, typename correctness_verifier, template<uint64_t, typename, bool> typename digit_generator_type, bool negative, typename... test_types>
	static void mixed_digit_count(std::string& results_string) {
		run_one_test<benchmark_stage_type, stage_name_new, test_name, 100, total_iters_new, measured_iters, v_type, correctness_verifier, digit_generator_type, negative,
			test_types...>(results_string);
		run_one_test<benchmark_stage_type, stage_name_new, test_name, 1000, total_iters_new, measured_iters, v_type, correctness_verifier, digit_generator_type, negative,
			test_types...>(results_string);
		run_one_test<benchmark_stage_type, stage_name_new, test_name, 10000, total_iters_new, measured_iters, v_type, correctness_verifier, digit_generator_type, negative,
			test_types...>(results_string);
		run_one_test<benchmark_stage_type, stage_name_new, test_name, 100000, total_iters_new, measured_iters, v_type, correctness_verifier, digit_generator_type, negative,
			test_types...>(results_string);
	}

	template<typename benchmark_stage_type, bnch_swt::string_literal stage_name_new, bnch_swt::string_literal test_name, uint64_t total_iters, uint64_t measured_iters,
		vn::detail::integer_types v_type, typename correctness_verifier, template<uint64_t, typename, bool> typename digit_generator_type, typename... test_types>
	struct digit_iterator {
		static auto impl(std::string& results_string) {
			if constexpr (vn::detail::int_types<v_type>) {
				mixed_digit_count<benchmark_stage_type, stage_name_new, test_name + "-negative", total_iters, measured_iters, v_type, correctness_verifier, digit_generator_type,
					true, test_types...>(results_string);
			}
			mixed_digit_count<benchmark_stage_type, stage_name_new, test_name + "-positive", total_iters, measured_iters, v_type, correctness_verifier, digit_generator_type, false,
				test_types...>(results_string);
		}
	};

	template<typename benchmark_stage_type, bnch_swt::string_literal stage_name, uint64_t total_iters, uint64_t measured_iters, typename correctness_verifier,
		template<uint64_t, typename, bool> typename digit_generator_type, typename... test_types>
	auto test_function_impl(std::string& results_string) {
		digit_iterator<benchmark_stage_type, stage_name, "int8", total_iters, measured_iters, int8_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "uint8", total_iters, measured_iters, uint8_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "int16", total_iters, measured_iters, int16_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "uint16", total_iters, measured_iters, uint16_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "int32", total_iters, measured_iters, int32_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "uint32", total_iters, measured_iters, uint32_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "int64", total_iters, measured_iters, int64_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
		digit_iterator<benchmark_stage_type, stage_name, "uint64", total_iters, measured_iters, uint64_t, correctness_verifier, digit_generator_type, test_types...>::impl(
			results_string);
	}

	template<bnch_swt::string_literal stage_name, vn::detail::conversion_classes conversion_class, uint64_t total_iters, uint64_t measured_iters, typename correctness_verifier,
		template<uint64_t, typename, bool> typename digit_generator_type, typename... test_types>
	struct tests {
		static void impl() {
			std::string results_string{};
			static constexpr bnch_swt::stage_config config_data{ .clear_cpu_cache_before_all_executions = true,
				.measured_execution_count																= measured_iters,
				.max_execution_count																	= total_iters };
			using bench_stage_type = bnch_swt::benchmark_stage<stage_name, config_data>;
			test_function_impl<bench_stage_type, stage_name, total_iters, measured_iters, correctness_verifier, digit_generator_type, test_types...>(results_string);
			auto results = bench_stage_type::get_all_results();
			results.print();
			std::string new_time_string{};
			new_time_string.resize(1024);
			std::tm result_two{ get_time() };
			new_time_string.resize(strftime(new_time_string.data(), 1024, "%b %d, %Y", &result_two));
			std::string newer_string{ make_section00(stage_name.operator std::string(), bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_id,
										  bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_version,
										  bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_id,
										  bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_version) +
				new_time_string + ")\n" + static_cast<std::string>(make_section01(bnch_swt::internal::get_device_info<bnch_swt::benchmark_types::cpu>())) };
			bnch_swt::file_handle::save_file(newer_string + results_string, base_path + "/" + current_path + "-" + stage_name.operator std::string() + ".md");
			bnch_swt::file_handle::save_file(results.to_csv(), csv_out_path + "/" + stage_name.operator std::string() + "/" + "Results.csv");
			bnch_swt::execute_python_script(std::string{ base_path } + "/GenerateGraphs.py", csv_out_path + "/" + stage_name.operator std::string() + "/",
				graphs_out_path + "/" + stage_name.operator std::string());
		}
	};

}
