// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
// source/i_to_str.hpp

#pragma once

#include "utility.hpp"

namespace vn_unchecked {

	template<typename v_type, uint64_t digit_length> struct to_chars_internal;

	template<typename v_type> struct to_chars_impl;

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 5ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type a = value * 3518437209ULL >> 45;
			*buf		   = static_cast<char>(a) + static_cast<char>('0');
			std::memcpy(buf + 1, vn::detail::char_table_4_digit_data + value - a * 10000, 4ULL);
			return buf + 5;
		}
	};

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 6ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type ab = value * 3518437209ULL >> 45;
			std::memcpy(buf, vn::detail::char_table_2_digit_data + ab, 2ULL);
			std::memcpy(buf + 2, vn::detail::char_table_4_digit_data + value - (ab * 10000U), 4ULL);
			return buf + 6;
		}
	};

	template<vn::detail::integer_types v_type> VN_FORCE_INLINE static void copy_3_digits(char* __restrict buf, const v_type value) noexcept {
		uint32_t packed;
		std::memcpy(&packed, &vn::detail::char_table_3_digit_data[static_cast<uint64_t>(value)], 4ULL);
		std::memcpy(buf, &packed, 2ULL);
		buf[2] = static_cast<char>(packed >> 16);
	}

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 7ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abc = value * 3518437209ULL >> 45;
			copy_3_digits(buf, abc);
			std::memcpy(buf + 3, vn::detail::char_table_4_digit_data + value - (abc * 10000U), 4ULL);
			return buf + 7;
		}
	};

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 8ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcd = value * 3518437209ULL >> 45;
			std::memcpy(buf, vn::detail::char_table_4_digit_data + abcd, 4ULL);
			std::memcpy(buf + 4, vn::detail::char_table_4_digit_data + value - (abcd * 10000U), 4ULL);
			return buf + 8;
		}
	};

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 9ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type a		  = static_cast<v_type>(vn::detail::multiply_and_shift::impl(value));
			const v_type bcdefghi = value - a * 100000000ULL;
			const v_type bcde	  = bcdefghi * 3518437209ULL >> 45;
			const v_type fghi	  = bcdefghi - (bcde * 10000U);
			*buf				  = static_cast<char>(a) + static_cast<char>('0');
			std::memcpy(buf + 1, vn::detail::char_table_4_digit_data + bcde, 4ULL);
			std::memcpy(buf + 5, vn::detail::char_table_4_digit_data + fghi, 4ULL);
			return buf + 9;
		}
	};

	template<vn::detail::uint_types v_type> struct to_chars_internal<v_type, 10ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type ab		  = static_cast<v_type>(vn::detail::multiply_and_shift::impl(value));
			const v_type cdefghij = value - ab * 100000000ULL;
			const v_type cdef	  = cdefghij * 3518437209ULL >> 45;
			const v_type ghij	  = cdefghij - (cdef * 10000U);
			std::memcpy(buf, vn::detail::char_table_2_digit_data + ab, 2ULL);
			std::memcpy(buf + 2, vn::detail::char_table_4_digit_data + cdef, 4ULL);
			std::memcpy(buf + 6, vn::detail::char_table_4_digit_data + ghij, 4ULL);
			return buf + 10;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 11ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abc	  = vn::detail::multiply_and_shift::impl(value);
			const v_type defghijk = value - abc * 100000000ULL;
			const v_type defg	  = defghijk * 3518437209U >> 45;
			const v_type hijk	  = defghijk - (defg * 10000U);
			copy_3_digits(buf, abc);
			std::memcpy(buf + 3, vn::detail::char_table_4_digit_data + defg, 4ULL);
			std::memcpy(buf + 7, vn::detail::char_table_4_digit_data + hijk, 4ULL);
			return buf + 11;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 12ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcd	  = vn::detail::multiply_and_shift::impl(value);
			const v_type efghijkl = value - abcd * 100000000ULL;
			const v_type efgh	  = efghijkl * 3518437209U >> 45;
			const v_type ijkl	  = efghijkl - (efgh * 10000U);
			std::memcpy(buf, vn::detail::char_table_4_digit_data + abcd, 4ULL);
			std::memcpy(buf + 4, vn::detail::char_table_4_digit_data + efgh, 4ULL);
			std::memcpy(buf + 8, vn::detail::char_table_4_digit_data + ijkl, 4ULL);
			return buf + 12;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 13ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcde	  = vn::detail::multiply_and_shift::impl(value);
			const v_type fghijklm = value - abcde * 100000000ULL;
			const v_type a		  = abcde * 3518437209U >> 45;
			const v_type bcde	  = abcde - (a * 10000U);
			const v_type fghi	  = fghijklm * 3518437209U >> 45;
			const v_type jklm	  = fghijklm - (fghi * 10000U);
			*buf				  = static_cast<char>(a) + static_cast<char>('0');
			std::memcpy(buf + 1, vn::detail::char_table_4_digit_data + bcde, 4ULL);
			std::memcpy(buf + 5, vn::detail::char_table_4_digit_data + fghi, 4ULL);
			std::memcpy(buf + 9, vn::detail::char_table_4_digit_data + jklm, 4ULL);
			return buf + 13;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 14ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdef	  = vn::detail::multiply_and_shift::impl(value);
			const v_type ghijklmn = value - abcdef * 100000000ULL;
			const v_type ab		  = abcdef * 3518437209U >> 45;
			const v_type cdef	  = abcdef - (ab * 10000U);
			const v_type ghij	  = ghijklmn * 3518437209U >> 45;
			const v_type klmn	  = ghijklmn - (ghij * 10000U);
			std::memcpy(buf, vn::detail::char_table_2_digit_data + ab, 2ULL);
			std::memcpy(buf + 2, vn::detail::char_table_4_digit_data + cdef, 4ULL);
			std::memcpy(buf + 6, vn::detail::char_table_4_digit_data + ghij, 4ULL);
			std::memcpy(buf + 10, vn::detail::char_table_4_digit_data + klmn, 4ULL);
			return buf + 14;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 15ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefg  = vn::detail::multiply_and_shift::impl(value);
			const v_type hijklmno = value - abcdefg * 100000000ULL;
			const v_type abc	  = abcdefg * 3518437209U >> 45;
			const v_type defg	  = abcdefg - (abc * 10000U);
			const v_type hijk	  = hijklmno * 3518437209U >> 45;
			const v_type lmno	  = hijklmno - (hijk * 10000U);
			copy_3_digits(buf, abc);
			std::memcpy(buf + 3, vn::detail::char_table_4_digit_data + defg, 4ULL);
			std::memcpy(buf + 7, vn::detail::char_table_4_digit_data + hijk, 4ULL);
			std::memcpy(buf + 11, vn::detail::char_table_4_digit_data + lmno, 4ULL);
			return buf + 15;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 16ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefgh = vn::detail::multiply_and_shift::impl(value);
			const v_type ijklmnop = value - abcdefgh * 100000000ULL;
			const v_type abcd	  = abcdefgh * 3518437209U >> 45;
			const v_type efgh	  = abcdefgh - (abcd * 10000U);
			const v_type ijkl	  = ijklmnop * 3518437209U >> 45;
			const v_type mnop	  = ijklmnop - (ijkl * 10000U);
			std::memcpy(buf, vn::detail::char_table_4_digit_data + abcd, 4ULL);
			std::memcpy(buf + 4, vn::detail::char_table_4_digit_data + efgh, 4ULL);
			std::memcpy(buf + 8, vn::detail::char_table_4_digit_data + ijkl, 4ULL);
			std::memcpy(buf + 12, vn::detail::char_table_4_digit_data + mnop, 4ULL);
			return buf + 16;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 17ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefghi = vn::detail::multiply_and_shift::impl(value);
			const v_type jklmnopq  = value - abcdefghi * 100000000ULL;
			const v_type a		   = vn::detail::multiply_and_shift::impl(abcdefghi);
			const v_type bcdefghi  = abcdefghi - a * 100000000ULL;
			const v_type bcde	   = bcdefghi * 3518437209U >> 45;
			const v_type fghi	   = bcdefghi - (bcde * 10000U);
			const v_type jklm	   = jklmnopq * 3518437209U >> 45;
			const v_type nopq	   = jklmnopq - (jklm * 10000U);
			*buf				   = static_cast<char>(a) + static_cast<char>('0');
			std::memcpy(buf + 1, vn::detail::char_table_4_digit_data + bcde, 4ULL);
			std::memcpy(buf + 5, vn::detail::char_table_4_digit_data + fghi, 4ULL);
			std::memcpy(buf + 9, vn::detail::char_table_4_digit_data + jklm, 4ULL);
			std::memcpy(buf + 13, vn::detail::char_table_4_digit_data + nopq, 4ULL);
			return buf + 17;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 18ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefghij = vn::detail::multiply_and_shift::impl(value);
			const v_type klmnopqr	= value - abcdefghij * 100000000ULL;
			const v_type ab			= vn::detail::multiply_and_shift::impl(abcdefghij);
			const v_type cdefghij	= abcdefghij - ab * 100000000ULL;
			const v_type cdef		= cdefghij * 3518437209U >> 45;
			const v_type ghij		= cdefghij - (cdef * 10000U);
			const v_type klmn		= klmnopqr * 3518437209U >> 45;
			const v_type opqr		= klmnopqr - (klmn * 10000U);
			std::memcpy(buf, vn::detail::char_table_2_digit_data + ab, 2ULL);
			std::memcpy(buf + 2, vn::detail::char_table_4_digit_data + cdef, 4ULL);
			std::memcpy(buf + 6, vn::detail::char_table_4_digit_data + ghij, 4ULL);
			std::memcpy(buf + 10, vn::detail::char_table_4_digit_data + klmn, 4ULL);
			std::memcpy(buf + 14, vn::detail::char_table_4_digit_data + opqr, 4ULL);
			return buf + 18;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 19ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefghijk = vn::detail::multiply_and_shift::impl(value);
			const v_type lmnopqrs	 = value - abcdefghijk * 100000000ULL;
			const v_type abc		 = vn::detail::multiply_and_shift::impl(abcdefghijk);
			const v_type defghijk	 = abcdefghijk - abc * 100000000ULL;
			const v_type defg		 = defghijk * 3518437209U >> 45;
			const v_type hijk		 = defghijk - (defg * 10000U);
			const v_type lmno		 = lmnopqrs * 3518437209U >> 45;
			const v_type pqrs		 = lmnopqrs - (lmno * 10000U);
			copy_3_digits(buf, abc);
			std::memcpy(buf + 3, vn::detail::char_table_4_digit_data + defg, 4ULL);
			std::memcpy(buf + 7, vn::detail::char_table_4_digit_data + hijk, 4ULL);
			std::memcpy(buf + 11, vn::detail::char_table_4_digit_data + lmno, 4ULL);
			std::memcpy(buf + 15, vn::detail::char_table_4_digit_data + pqrs, 4ULL);
			return buf + 19;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_internal<v_type, 20ULL> {
		inline static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			const v_type abcdefghijkl = vn::detail::multiply_and_shift::impl(value);
			const v_type mnopqrst	  = value - abcdefghijkl * 100000000ULL;
			const v_type abcd		  = vn::detail::multiply_and_shift::impl(abcdefghijkl);
			const v_type efghijkl	  = abcdefghijkl - abcd * 100000000ULL;
			const v_type efgh		  = efghijkl * 3518437209U >> 45;
			const v_type ijkl		  = efghijkl - (efgh * 10000U);
			const v_type mnop		  = mnopqrst * 3518437209U >> 45;
			const v_type qrst		  = mnopqrst - (mnop * 10000U);
			std::memcpy(buf, vn::detail::char_table_4_digit_data + abcd, 4ULL);
			std::memcpy(buf + 4, vn::detail::char_table_4_digit_data + efgh, 4ULL);
			std::memcpy(buf + 8, vn::detail::char_table_4_digit_data + ijkl, 4ULL);
			std::memcpy(buf + 12, vn::detail::char_table_4_digit_data + mnop, 4ULL);
			std::memcpy(buf + 16, vn::detail::char_table_4_digit_data + qrst, 4ULL);
			return buf + 20;
		}
	};

	template<vn::detail::uint64_types v_type> struct to_chars_impl<v_type> {
#if VN_ARCH_X64
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 100U
				? value < 10U ? (buf[0] = char(value) + static_cast<char>('0'), buf + 1) : (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2)
				: value < 100000000ULL
					? value < 10000ULL
						? value < 1000U ? (copy_3_digits(buf, value), buf + 3) : (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4)
						: value < 1000000ULL ? value < 100000ULL ? to_chars_internal<v_type, 5ULL>::impl(buf, value) : to_chars_internal<v_type, 6ULL>::impl(buf, value)
						: value < 10000000ULL ? to_chars_internal<v_type, 7ULL>::impl(buf, value) : to_chars_internal<v_type, 8ULL>::impl(buf, value)
					: value < 1000000000000ULL ? value < 10000000000ULL
						? value < 1000000000ULL ? to_chars_internal<v_type, 9ULL>::impl(buf, value) : to_chars_internal<v_type, 10ULL>::impl(buf, value)
						: value < 100000000000ULL ? to_chars_internal<v_type, 11ULL>::impl(buf, value)
												  : to_chars_internal<v_type, 12ULL>::impl(buf, value)
					: value < 10000000000000000ULL ? value < 100000000000000ULL
						? value < 10000000000000ULL ? to_chars_internal<v_type, 13ULL>::impl(buf, value) : to_chars_internal<v_type, 14ULL>::impl(buf, value)
						: value < 1000000000000000ULL ? to_chars_internal<v_type, 15ULL>::impl(buf, value)
													  : to_chars_internal<v_type, 16ULL>::impl(buf, value)
					: value < 1000000000000000000ULL
				? value < 100000000000000000ULL ? to_chars_internal<v_type, 17ULL>::impl(buf, value) : to_chars_internal<v_type, 18ULL>::impl(buf, value)
				: value < 10000000000000000000ULL ? to_chars_internal<v_type, 19ULL>::impl(buf, value)
											  : to_chars_internal<v_type, 20ULL>::impl(buf, value);
		}
#else
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 100000000ULL		   ? value < 10000ULL ? value < 100ULL
							   ? value < 10U ? (buf[0] = char(value) + static_cast<char>('0'), buf + 1) : (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2)
							   : value < 1000U ? (copy_3_digits(buf, value), buf + 3)
											   : (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4)
						   : value < 1000000ULL	 ? value < 100000ULL ? to_chars_internal<v_type, 5ULL>::impl(buf, value) : to_chars_internal<v_type, 6ULL>::impl(buf, value)
							: value < 10000000ULL ? to_chars_internal<v_type, 7ULL>::impl(buf, value)
												 : to_chars_internal<v_type, 8ULL>::impl(buf, value)
					   : value < 1000000000000ULL ? value < 10000000000ULL
						   ? value < 1000000000ULL ? to_chars_internal<v_type, 9ULL>::impl(buf, value) : to_chars_internal<v_type, 10ULL>::impl(buf, value)
						   : value < 100000000000ULL ? to_chars_internal<v_type, 11ULL>::impl(buf, value)
													 : to_chars_internal<v_type, 12ULL>::impl(buf, value)
					   : value < 10000000000000000ULL ? value < 100000000000000ULL
						   ? value < 10000000000000ULL ? to_chars_internal<v_type, 13ULL>::impl(buf, value) : to_chars_internal<v_type, 14ULL>::impl(buf, value)
						   : value < 1000000000000000ULL ? to_chars_internal<v_type, 15ULL>::impl(buf, value)
														 : to_chars_internal<v_type, 16ULL>::impl(buf, value)
					   : value < 1000000000000000000ULL
				? value < 100000000000000000ULL ? to_chars_internal<v_type, 17ULL>::impl(buf, value) : to_chars_internal<v_type, 18ULL>::impl(buf, value)
				: value < 10000000000000000000ULL ? to_chars_internal<v_type, 19ULL>::impl(buf, value)
												  : to_chars_internal<v_type, 20ULL>::impl(buf, value);
		}
#endif
	};

	template<vn::detail::uint32_types v_type> struct to_chars_impl<v_type> {
#if VN_ARCH_X64
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 100U
				? value < 10U ? (buf[0] = char(value) + static_cast<char>('0'), buf + 1) : (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2)
				: value < 1000000U
					? value < 10000U
						? value < 1000U ? (copy_3_digits(buf, value), buf + 3) : (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4)
						: value < 100000U ? to_chars_internal<v_type, 5ULL>::impl(buf, value) : to_chars_internal<v_type, 6ULL>::impl(buf, value)
					: value < 100000000U ? value < 10000000U ? to_chars_internal<v_type, 7ULL>::impl(buf, value) : to_chars_internal<v_type, 8ULL>::impl(buf, value)
					: value < 1000000000U ? to_chars_internal<v_type, 9ULL>::impl(buf, value) : to_chars_internal<v_type, 10ULL>::impl(buf, value);
		}
#else
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 100000U	  ? value < 1000U ? value < 100U
						   ? value < 10U ? (buf[0] = char(value) + static_cast<char>('0'), buf + 1) : (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2)
						   : (copy_3_digits(buf, value), buf + 3)
					   : value < 10000U				  ? (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4)
													  : to_chars_internal<v_type, 5ULL>::impl(buf, value)
				   : value < 10000000U ? value < 1000000U ? to_chars_internal<v_type, 6ULL>::impl(buf, value) : to_chars_internal<v_type, 7ULL>::impl(buf, value)
				   : value < 1000000000U ? value < 100000000U ? to_chars_internal<v_type, 8ULL>::impl(buf, value) : to_chars_internal<v_type, 9ULL>::impl(buf, value)
										 : to_chars_internal<v_type, 10ULL>::impl(buf, value);
		}
#endif
	};

	template<vn::detail::uint16_types v_type> struct to_chars_impl<v_type> {
#if VN_ARCH_X64
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 10U
				? (buf[0] = char(value) + static_cast<char>('0'), buf + 1)
				: value < 1000U
					? value < 100U ? (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2) : (copy_3_digits(buf, value), buf + 3)
					: value < 10000U ? (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4) : to_chars_internal<v_type, 5ULL>::impl(buf, value);
		}
#else
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			return value < 1000U ? value < 100U
					? value < 10U ? (buf[0] = char(value) + static_cast<char>('0'), buf + 1) : (std::memcpy(buf, vn::detail::char_table_2_digit_data + value, 2ULL), buf + 2)
					: (copy_3_digits(buf, value), buf + 3)
				: value < 10000U ? (std::memcpy(buf, vn::detail::char_table_4_digit_data + value, 4ULL), buf + 4)
								 : to_chars_internal<v_type, 5ULL>::impl(buf, value);
		}
#endif
	};

	template<vn::detail::integral8_types v_type> struct to_chars_impl<v_type> {
		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			uint32_t t = static_cast<uint8_t>(value);
			if constexpr (std::is_signed_v<v_type>) {
				if (value < v_type(0)) {
					t	 = static_cast<uint8_t>(0u - t);
					*buf = '-';
					++buf;
				}
			}
			uint32_t packed;
			std::memcpy(&packed, &vn::detail::char_table_1_byte_data[t], 4ULL);
			const uint32_t len{ packed >> 24 };
			std::memcpy(buf, &packed, 2ULL);
			buf[2] = static_cast<char>(packed >> 16);
			return buf + len;
		}
	};

	template<vn::detail::int_types v_type>
		requires(!vn::detail::int8_types<v_type>)
	struct to_chars_impl<v_type> {
		VN_FORCE_INLINE static char* impl_negative(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			using unsigned_type = std::make_unsigned_t<v_type>;
			*buf				= '-';
			return to_chars_impl<unsigned_type>::impl(buf + 1, static_cast<unsigned_type>(unsigned_type{ 0 } - static_cast<unsigned_type>(value)));
		}

		VN_FORCE_INLINE static char* impl(char* __restrict buf VN_LIFETIME_BOUND, const v_type value) noexcept {
			using unsigned_type = std::make_unsigned_t<v_type>;
			return (value < 0) ? impl_negative(buf, value) : to_chars_impl<unsigned_type>::impl(buf, static_cast<unsigned_type>(value));
		}
	};
}

namespace benchmarks {

	template<uint64_t total_size, typename int_type, sign_types sign_type> struct uniform_digit_length_generator {
		using entry_type	   = string_entry<int_type>;
		using test_data_type   = std::vector<int_type>;
		using output_data_type = std::vector<entry_type>;

		using raw_unsigned_type = std::make_unsigned_t<int_type>;
		using dist_type			= std::conditional_t<(sizeof(raw_unsigned_type) < sizeof(uint32_t)), uint32_t, raw_unsigned_type>;

		static constexpr uint32_t max_digits = std::numeric_limits<raw_unsigned_type>::digits10 + 1;

		static test_data_type impl() {
			test_data_type data(total_size);

			benchmarksuite::random_generator<uint64_t> rng{};
			benchmarksuite::random_generator<bool> rg_neg{};

			for (uint64_t x = 0; x < data.size(); ++x) {
				uint32_t len	  = rng.impl(1,max_digits);
				dist_type min_val = static_cast<dist_type>((len == 1) ? 0 : pow10_table[len - 1]);
				dist_type max_val;

				if (len == max_digits) {
					max_val = static_cast<dist_type>(std::numeric_limits<raw_unsigned_type>::max());
				} else {
					max_val = static_cast<dist_type>(pow10_table[len] - 1);
				}

				raw_unsigned_type uval = static_cast<raw_unsigned_type>(rng.impl(min_val, max_val));
				int_type value		   = static_cast<int_type>(uval);

				data[x] = apply_sign<sign_type>(value, rg_neg);
			}
			return data;
		}
	};

	template<uint64_t total_size, typename int_type, sign_types sign_type> struct natural_digit_generator {
		using entry_type	   = string_entry<int_type>;
		using test_data_type   = std::vector<int_type>;
		using output_data_type = std::vector<entry_type>;
		static test_data_type impl() {
			test_data_type data(total_size);
			benchmarksuite::random_generator<int_type> rg{};
			benchmarksuite::random_generator<bool> rg_neg{};
			for (uint64_t x = 0; x < data.size(); ++x) {
				int_type value = rg.impl();
				data[x]		   = apply_sign<sign_type>(value, rg_neg);
			}
			return data;
		}
	};

	struct vn_op {
		template<typename v_type> VN_FORCE_INLINE static char* convert(v_type v, char* buf, char* end) noexcept {
			return const_cast<char*>(vn_unchecked::to_chars_impl<v_type>::impl(buf, v));
		}
	};

	struct std_op {
		template<typename v_type> VN_FORCE_INLINE static char* convert(v_type v, char* buf, char* end) noexcept {
			return std::to_chars(buf, end, v).ptr;
		}
	};

	struct jeaiii_op {
		template<typename v_type> VN_FORCE_INLINE static char* convert(v_type v, char* buf, char* end) noexcept {
			return jeaiii::to_text(buf, v);
		}
	};

	struct verify_correctness_i_to_str {
		template<typename int_type> static void impl(const std::vector<int_type>& test_data, const char* test_label) {
			uint64_t vn_correct{}, vn_incorrect{};
			uint64_t jeaiii_incorrect{};
			uint64_t total_incorrect{};
			int_type first_bad_value{};
			bool found_bad{ false };
			for (uint64_t x = 0; x < test_data.size(); ++x) {
				auto& v = test_data[x];
				char buf_std[32]{};
				char buf_vn[32]{};
				char buf_jeaiii[32]{};
				char* std_end		   = std_op::convert(v, buf_std, buf_std + 32);
				char* vn_end		   = vn_op::convert(v, buf_vn, buf_vn + 32);
				char* jeaiii_end	   = jeaiii_op::convert(v, buf_jeaiii, buf_jeaiii + 32);
				const uint64_t std_len = static_cast<uint64_t>(std_end - buf_std);
				auto same			   = [&](char* end, char* buf) {
					 return static_cast<uint64_t>(end - buf) == std_len && std::memcmp(buf, buf_std, std_len) == 0;
				};
				if (same(vn_end, buf_vn)) {
					++vn_correct;
				} else {
					++vn_incorrect;
					++total_incorrect;
					if (!found_bad) {
						first_bad_value = v;
						found_bad		= true;
					}
				}
				if (!same(jeaiii_end, buf_jeaiii)) {
					++jeaiii_incorrect;
					++total_incorrect;
				}
			}
			if (total_incorrect > 0) {
				std::cout << "[" << test_label << "] vn correct: " << vn_correct << " | incorrect: " << vn_incorrect << " | jeaiii incorrect: " << jeaiii_incorrect << std::endl;
				if (vn_incorrect > 0) {
					std::cout << "  FIRST BAD vn VALUE: " << static_cast<int64_t>(first_bad_value) << std::endl;
				}
				std::exit(-1);
			}
		}
	};

}
