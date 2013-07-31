//Copyright (c) 2000-2013 zyl910 <zyl910hero@gmail.com>
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.

/** @addtogroup GROUP_ZYLLIBC	zyllibc
 * @{
 */

/** @addtogroup GROUP_C99INT	c99int
 * @{
 */

/** @addtogroup GROUP_C99INT_C99INTTEST	c99inttest
 * Test c99int (测试C99整数类型).
 *
 * @author	[zyl910](mailto:zyl910hero@gmail.com)
 * @since	@ref GROUP_C99INT 1.0
 * @version	1.2
 * @date	2013-07-31
 *
 * Links:
 *
 * * Git: https://github.com/zyl910/c99int
 * * Blog: http://www.cnblogs.com/zyl910/tag/c99int/
 *
 *
 *
 * ## Change history (变更日志)
 *
 * [2013-07-31] v1.2
 *
 * * Using @ref GROUP_C99INT v1.2 .
 * * Using Doxygen style comments (使用doxygen规范注释).
 *
 * [2013-01-10] v1.1
 *
 * * Using @ref GROUP_C99INT v1.1 .
 *
 * [2013-06-08] v1.0
 *
 * * V1.0发布.
 *
 * @{
 */

/**
 * @file	c99inttest.c
 * @brief	Test c99int (测试C99整数类型).
 * @since	@ref GROUP_C99INT 1.0
 */

#define __STDC_LIMIT_MACROS	//!< C++ implementations should define these macros only when __STDC_LIMIT_MACROS is defined before <stdint.h>is included.
#define __STDC_CONSTANT_MACROS	//!< C++ implementations should define these macros only when __STDC_CONSTANT_MACROS is defined before <stdint.h>is included.
#define __STDC_FORMAT_MACROS	//!< C++ implementations should define these macros only when __STDC_FORMAT_MACROSis defined before <inttypes.h>is included.

#include <stdio.h>

#include <wchar.h>

#include "auto_stdint.h"
#include "auto_inttypes.h"

/// main.
int main(int argc, char* argv[]) {
	uint8_t i8 = (uint8_t)INT8_C(-1);
	uint16_t i16 = (uint16_t)INT16_C(-1);
	uint32_t i32 = (uint32_t)INT32_C(-1);
	uint64_t i64 = (uint64_t)INT64_C(-1);

	printf("c99int:\t%" PRIu8 ", %" PRIu16 ", %" PRIu32 ", %" PRIu64 "\n", i8, i16, i32, i64);
	return 0;
}


/** @} */	// @addtogroup GROUP_C99INT_C99INTTEST
/** @} */	// @addtogroup GROUP_C99INT
/** @} */	// @addtogroup GROUP_ZYLLIBC
