cmake_minimum_required(VERSION 3.18)
project(
  "StringInt-Benchmarks"
  VERSION "${PRODUCT_VERSION}"
  LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(CheckIPOSupported)
check_ipo_supported(RESULT IPO_SUPPORTED OUTPUT IPO_OUTPUT)
if(IPO_SUPPORTED)
	set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)
	message(STATUS "LTO/IPO enabled")
else()
	message(STATUS "LTO/IPO not supported: ${IPO_OUTPUT}")
endif()

set(PGO_MODE "OFF" CACHE STRING "PGO mode: OFF, GENERATE, or USE")
set_property(CACHE PGO_MODE PROPERTY STRINGS OFF GENERATE USE)
set(PGO_DATA_DIR "${CMAKE_BINARY_DIR}/pgo-data" CACHE PATH "PGO profile data directory")

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
FetchContent_Declare(
  rt-ut
  GIT_REPOSITORY https://github.com/realtimechris/rt-ut.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(rt-ut)
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
	rt-ut::rt-ut
)

install(
    FILES
        $<TARGET_FILE:StringInt-Benchmarks>
    DESTINATION bin
    OPTIONAL
)

set(STRINGINT_MSVC_COMPILER_OPTIONS
    /wd4324 /wd4820 /wd5039 /wd4710 /wd5045 /wd4711
    /Wall /W4 /bigobj
    $<$<CONFIG:RELEASE>:/O2> /arch:AVX2 /GL /Oi /Ot
    /Zc:preprocessor /EHsc /GS-
)

set(STRINGINT_CLANG_COMPILER_OPTIONS
    -Weverything -Wpedantic
    -Wno-unsafe-buffer-usage
    -Wno-c++20-extensions
    -Wextra -Wall
    -Wno-c++98-compat-pedantic
    -Wno-c++98-compat
    -Wno-padded
    -O3 -march=native
    -funroll-loops -fomit-frame-pointer
    -flto=thin -finline-functions
    -ffunction-sections
    -fdata-sections
)

set(STRINGINT_APPLE_CLANG_COMPILER_OPTIONS
    ${STRINGINT_CLANG_COMPILER_OPTIONS}
)

set(STRINGINT_MSVC_LINKER_OPTIONS
    /LTCG
    /OPT:REF
    /OPT:ICF
    /INCREMENTAL:NO
)

if(APPLE)
    set(STRINGINT_GCC_LTO)
else()
    set(STRINGINT_GCC_LTO -flto=auto)
endif()

set(STRINGINT_GCC_COMPILER_OPTIONS
    -Wpedantic -Wall
    -O3 -march=native
    -funroll-loops -fomit-frame-pointer
    ${STRINGINT_GCC_LTO}
    -fvect-cost-model=unlimited
    -falign-functions=64 -falign-loops=64
    -ffunction-sections
    -fdata-sections
)

target_compile_options(
    StringInt-Benchmarks PUBLIC
    $<$<CXX_COMPILER_ID:Clang>:${STRINGINT_CLANG_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:AppleClang>:${STRINGINT_APPLE_CLANG_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:GNU>:${STRINGINT_GCC_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:MSVC>:${STRINGINT_MSVC_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:MSVC>:$<$<STREQUAL:${ASAN_ENABLED},TRUE>:/fsanitize=address>>
)

target_link_options(
    StringInt-Benchmarks PUBLIC
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-fuse-ld=lld;-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now>
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:AppleClang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<CXX_COMPILER_ID:MSVC>:${STRINGINT_MSVC_LINKER_OPTIONS}>
    $<$<CXX_COMPILER_ID:GNU>:$<$<STREQUAL:${ASAN_ENABLED},TRUE>:-fsanitize=address>>
)

if(PGO_MODE STREQUAL "GENERATE")
    file(MAKE_DIRECTORY "${PGO_DATA_DIR}")
    target_compile_options(StringInt-Benchmarks PUBLIC
        $<$<CXX_COMPILER_ID:GNU>:-fprofile-generate=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:Clang>:-fprofile-generate=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:MSVC>:/GL>
    )
    target_link_options(StringInt-Benchmarks PUBLIC
        $<$<CXX_COMPILER_ID:GNU>:-fprofile-generate=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:Clang>:-fprofile-generate=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:MSVC>:/LTCG:PGINSTRUMENT /GENPROFILE:PGD=${PGO_DATA_DIR}/StringInt-Benchmarks.pgd>
    )
    target_compile_definitions(StringInt-Benchmarks PRIVATE PGO_TRAINING)
    message(STATUS "PGO: GENERATE mode -- profile data will be written to ${PGO_DATA_DIR} (PGO_TRAINING macro set)")
elseif(PGO_MODE STREQUAL "USE")
    target_compile_options(StringInt-Benchmarks PUBLIC
        $<$<CXX_COMPILER_ID:GNU>:-fprofile-use=${PGO_DATA_DIR} -fprofile-correction>
        $<$<CXX_COMPILER_ID:Clang>:-fprofile-use=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:MSVC>:/GL>
    )
    target_link_options(StringInt-Benchmarks PUBLIC
        $<$<CXX_COMPILER_ID:GNU>:-fprofile-use=${PGO_DATA_DIR} -fprofile-correction>
        $<$<CXX_COMPILER_ID:Clang>:-fprofile-use=${PGO_DATA_DIR}>
        $<$<CXX_COMPILER_ID:MSVC>:/LTCG:PGOPTIMIZE /USEPROFILE:PGD=${PGO_DATA_DIR}/StringInt-Benchmarks.pgd>
    )
    message(STATUS "PGO: USE mode -- consuming profile data from ${PGO_DATA_DIR}")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" AND PGO_MODE STREQUAL "USE")
	find_program(LLVM_PROFDATA llvm-profdata)
	if(LLVM_PROFDATA)
		add_custom_target(merge-pgo-data
			COMMAND ${LLVM_PROFDATA} merge -output=${PGO_DATA_DIR}/default.profdata ${PGO_DATA_DIR}
			COMMENT "Merging Clang PGO raw profiles into default.profdata"
		)
	endif()
endif()

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
    "PGO_BASE_PATH=\"${CMAKE_CURRENT_BINARY_DIR}\""
)

install(
	FILES 
	$<TARGET_FILE:StringInt-Benchmarks>
	DESTINATION $<IF:$<CONFIG:Debug>,bin,bin>
	OPTIONAL
)