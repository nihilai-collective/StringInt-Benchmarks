cmake_minimum_required(VERSION 3.18)

project(
  "StringInt-Benchmarks"
  VERSION "${PRODUCT_VERSION}"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(FetchContent)
FetchContent_Declare(
  void-numerics
  GIT_REPOSITORY https://github.com/nihilai-collective/void-numerics.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(void-numerics)

FetchContent_Declare(
  benchmarksuite
  GIT_REPOSITORY https://github.com/realtimechris/benchmarksuite.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(benchmarksuite)

set(FMT_DOC OFF CACHE BOOL "" FORCE)
set(FMT_TEST OFF CACHE BOOL "" FORCE)
set(FMT_INSTALL OFF CACHE BOOL "" FORCE)
set(FMT_FUZZ OFF CACHE BOOL "" FORCE)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 12.1.0
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
  jeaiii_itoa
  GIT_REPOSITORY https://github.com/jeaiii/itoa.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(jeaiii_itoa)

add_library(jeaiii_itoa INTERFACE)
target_include_directories(jeaiii_itoa INTERFACE ${jeaiii_itoa_SOURCE_DIR}/itoa)

add_executable(StringInt-Benchmarks source/void-numerics.cpp)

target_link_libraries(
	StringInt-Benchmarks PRIVATE 
	void-numerics::void-numerics
	benchmarksuite::benchmarksuite
	fmt::fmt
	jeaiii_itoa
)

install(
    FILES
        $<TARGET_FILE:StringInt-Benchmarks>
    DESTINATION bin
    OPTIONAL
)

target_compile_options(
	StringInt-Benchmarks PUBLIC
	$<$<CXX_COMPILER_ID:MSVC>:$<$<STREQUAL:${ASAN_ENABLED},TRUE>:/fsanitize=address>>
	$<$<CXX_COMPILER_ID:CLANG>:-Wpedantic>
	$<$<CXX_COMPILER_ID:GNU>:-Wpedantic>
	$<$<CXX_COMPILER_ID:CLANG>:-Wextra>
	$<$<CXX_COMPILER_ID:CLANG>:-Wall>
	$<$<CXX_COMPILER_ID:GNU>:-Wextra>
	$<$<CXX_COMPILER_ID:MSVC>:/Wall>
	$<$<CXX_COMPILER_ID:MSVC>:/bigobj>
	$<$<CXX_COMPILER_ID:GNU>:-Wall>
	$<$<CXX_COMPILER_ID:MSVC>:/W4>
)

target_link_options(
	StringInt-Benchmarks PUBLIC
	$<$<CXX_COMPILER_ID:GNU>:$<$<STREQUAL:${ASAN_ENABLED},TRUE>:-fsanitize=address>>
)

if (WIN32)
	install(
		FILES 
		$<TARGET_PDB_FILE:StringInt-Benchmarks>
		DESTINATION $<IF:$<CONFIG:Debug>,bin,bin>
		OPTIONAL
	)
endif()

target_compile_definitions(
	StringInt-Benchmarks PUBLIC 
	"BASE_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}\""
)

install(
	FILES 
	$<TARGET_FILE:StringInt-Benchmarks>
	DESTINATION $<IF:$<CONFIG:Debug>,bin,bin>
	OPTIONAL
)
