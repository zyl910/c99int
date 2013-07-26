c99int
======

* Brief:	Auto C99 integer type compliant (让VC等编译器自动兼容C99的整数类型) .
* Language:	C
* Type:	Lightweight C library.
* Platform:	All platform.
* Version:	v1.1
* Blog:	http://www.cnblogs.com/zyl910/tag/c99int/
* Git:	https://github.com/zyl910/c99int

Tested compiler (测试过的编译器) --

* Virtual C++: 6, 7.1(2003), 8(2005), 9(2008), 10(2010), 11(2012).
* Borland C++ Builder: 6.
* GCC(Linux): 4.7.0(Fedora 17).
* GCC(Mac): 4.2(Mac OS X Lion 10.7.4, Xcode 4.4.1).
* GCC(MinGW): 4.6.2(MinGW(20120426)), 4.7.1(TDM-GCC(MinGW-w64)).

References (参考文献) --

* ISO/IEC 9899:1999 (C99). ISO/IEC，1999. www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf
* msinttypes. http://code.google.com/p/msinttypes/



## Files (文件)

* auto_inttypes.h : Auto include C99 inttypes.h .
* auto_stdint.h : Auto include C99 stdint.h .


## Usage (用法)

Add "auto_stdint.h" and "auto_inttypes.h" to you project (将"auto_stdint.h" and "auto_inttypes.h"加入到您的项目).

Example code:

```c
#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#define __STDC_FORMAT_MACROS

#include <stdio.h>

#include "auto_stdint.h"
#include "auto_inttypes.h"

int main(int argc, char* argv[])
{
	uint8_t i8 = (uint8_t)INT8_C(-1);
	uint16_t i16 = (uint16_t)INT16_C(-1);
	uint32_t i32 = (uint32_t)INT32_C(-1);
	uint64_t i64 = (uint64_t)INT64_C(-1);

	printf("c99int:\t%" PRIu8 ", %" PRIu16 ", %" PRIu32 ", %" PRIu64 "\n", i8, i16, i32, i64);
	return 0;
}
```


## Version history (版本历史)

[2013-01-10] v1.1: http://www.cnblogs.com/zyl910/archive/2013/01/10/c99int_v101.html

* Files rename to "auto_stdint.h", "auto_inttypes.h" (文件改名为 "auto_stdint.h", "auto_inttypes.h").
* Check compiler compliant(检测编译器兼容性): Visual C++ 9(2008), Visual C++ 11(2012).

[2012-08-08] v1.0: http://www.cnblogs.com/zyl910/archive/2012/08/08/c99int.html

* Release v1.0 (发布1.0版) .
