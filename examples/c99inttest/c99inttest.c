
/** @addtogroup GROUP_ZYLLIBC	zylLibC
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
 * @date	2013-06-07
 *
 * Links:
 *
 * * Git: https://github.com/zyl910/c99int
 * * Blog: http://www.cnblogs.com/zyl910
 *
 *
 * ## Change history (变更日志)
 *
 * [2013-01-10] v1.1
 *
 * + 使用V1.01版的auto_stdint.h、auto_inttypes.h.
 *
 * [2013-06-08] v1.0
 *
 * + V1.0发布.
 *
 * @{
 */

/**
 * @file	c99inttest.c
 * @brief	Test c99int (测试C99整数类型).
 * @since	@ref GROUP_C99INT 1.0
 */

#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#define __STDC_FORMAT_MACROS

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
