﻿c99int
======

* Git:	https://github.com/zyl910/c99int
* Blog:	http://www.cnblogs.com/zyl910/tag/c99int/

c99int is a lightweight C library. Use for auto C99 integer type compliant (用于让VC等编译器自动兼容C99的整数类型) .


References (参考文献) :

* ISO/IEC 9899:1999 - Programming languages -- C (C99). ISO/IEC，1999.
* msinttypes. http://code.google.com/p/msinttypes/


## Usage (用法)

Add `src/*.*` to you project (将 `src/*.*` 加入到您的项目).

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

## Documentation (文档)

You can generate documentation with [doxygen](http://www.stack.nl/~dimitri/doxygen/index.html) (您可以用doxygen生成文档).

Use doxywizard to open *.doxygen file (使用doxywizard打开 *.doxygen).

* c99int_doc.doxygen: Generates documentation from interface files (生成接口的文档) .
* c99int_docfull.doxygen: Generates documentation from interface and implement and example files (生成接口、实现、示例等内容的详细文档).

You may need change INCLUDE_PATH in *.doxyfile with the actual location (您可能需要在 *.doxygen 中调整INCLUDE_PATH为实际路径).


## MIT License (MIT许可证)

Copyright (c) 2000-2013 zyl910 <zyl910hero@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

## Tested compiler (测试过的编译器)

* Virtual C++: 6, 7.1(2003), 8(2005), 9(2008), 10(2010), 11(2012).
* Borland C++ Builder: 6.
* GCC(Linux): 4.7.0(Fedora 17),  4.7.2(Fedora 18),  4.8.1(Fedora 19).
* GCC(MinGW): 4.6.2(MinGW(20120426)), 4.7.1(TDM-GCC(MinGW-w64)).
* LLVM GCC: 4.2(Mac OS X Lion 10.7.4), 4.2.1(Mac OS X Mountain Lion 10.8.3).



## Change history (变更日志)

[2013-07-30] v1.2: 

* Upload the code to [github](https://github.com/zyl910/c99int) (将代码上传到github).
* Change the directory structure (调整目录结构).
* Using Doxygen style comments (使用doxygen规范注释).
* Add CMake file (添加CMake编译配置文件).
* Fix bug: `__AUTO_STDINT_H_USESYS` (修正 `__AUTO_STDINT_H_USESYS` 误为 `_INTTYPES_H_SYS_` 的bug).

[2013-01-10] v1.1: http://www.cnblogs.com/zyl910/archive/2013/01/10/c99int_v101.html

* Files rename to "auto_stdint.h", "auto_inttypes.h" (文件改名为 "auto_stdint.h", "auto_inttypes.h").
* Check compiler compliant(检测编译器兼容性): Visual C++ 9(2008), Visual C++ 11(2012).

[2012-08-08] v1.0: http://www.cnblogs.com/zyl910/archive/2012/08/08/c99int.html

* Release v1.0 (发布1.0版) .
