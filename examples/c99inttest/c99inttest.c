////////////////////////////////////////////////////////////
/*
c99int.c: 测试C99整数类型.
Author: zyl910
Blog: http://www.cnblogs.com/zyl910
URL: http://www.cnblogs.com/zyl910/archive/2013/01/10/c99int_v101.html
Version: V1.01
Updata: 2013-01-01



Update
~~~~~~

[2013-01-10] V1.01
* 使用V1.01版的auto_stdint.h、auto_inttypes.h。

[2012-08-08] V1.0
* V1.0发布.


*/
////////////////////////////////////////////////////////////

#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#define __STDC_FORMAT_MACROS

#include <stdio.h>

#include <wchar.h>

#include "auto_stdint.h"
#include "auto_inttypes.h"

/**
 * main.
 *
 * @param argc argc.
 * \param argv argv.
 * \return status.
 */
int main(int argc, char* argv[]) {
	uint8_t i8 = (uint8_t)INT8_C(-1);
	uint16_t i16 = (uint16_t)INT16_C(-1);
	uint32_t i32 = (uint32_t)INT32_C(-1);
	uint64_t i64 = (uint64_t)INT64_C(-1);

	printf("c99int:\t%" PRIu8 ", %" PRIu16 ", %" PRIu32 ", %" PRIu64 "\n", i8, i16, i32, i64);
	return 0;
}