<p align="center">
  <img width=75px src="https://github.com/YoungHaKim7/Cpp_Training/assets/67513038/02580529-b8e2-4aa9-b80e-dd1f56a08491" />
</p>

<hr>

# link

- [gcc/clang 옵션 활용법](#compilers)
  - [clang -std옵션 넣는 패턴 c++14 17, 20, 23](#c-support-in-clang)
- [구글의-c-가이드-라인](#구글의-c-가이드-라인)
  - [(Bjarne Stroustrup)C++가이드라인C++ Core Guidelines - edt.: Bjarne Stroustrup, Herb Sutter](#cpp--bjarne-stroustrup)
- [C/C++ Cheat-Sheet](#c-cheat-sheet)
- [c-vs-rust-변수-용량-비교--범위](#c-vs-rust-변수-용량-비교--범위)
<hr>

# vim tab setting[[🔝]](#link)

```
set tabstop=2
set shiftwidth=2
```

<hr>

# Assembly Code로 공부하기  넘 좋다.

https://godbolt.org/

<hr>

# 내가 정리하는 github

- https://github.com/YoungHaKim7/cpp_training2024
- https://github.com/YoungHaKim7/cpp23_project

# C++ Cheat Sheet

- C++ Cheat Sheet(간단하게 보기 좋다)
  - https://quickref.me/cpp.html

- Modern C++ Cheatsheet (C11, C14)
  - https://github.com/mortennobel/cpp-cheatsheet



<hr>

# C++ vs Rust 변수 용량 비교  범위

<table border="1">
    <tr>
    <td colspan="5" align="center">Rust vs  C   Sizeof</td>
    </tr>
    <tr align="center">
        <td>Rust</td>
        <td colspan="4">C++</td>
    </tr>
    <tr align="center">
        <td></td>
        <td>Type<br>Name</td>
        <td>Bytes</td>
        <td>Other<br>Names</td>
        <td>Range of Values</td>
    </tr>
    <tr align="center">
        <td>i8</td>
        <td>__int8</td>
        <td>1</td>
        <td>char</td>
        <td>-128 to 127</td>
    </tr>
    <tr align="center">
        <td>u8</td>
        <td>unsigned<br>__int8</td>
        <td>1</td>
        <td>unsigned<br>char</td>
        <td>0 to 255</td>
    </tr>
    <tr align="center">
        <td>i16</td>
        <td>__int16</td>
        <td>2</td>
        <td>short, <br>short int,<br>signed short int</td>
        <td>-32,768 to 32,767</td>
    </tr>
    <tr align="center">
        <td>u16</td>
        <td>unsigned<br>__int16</td>
        <td>2</td>
        <td>unsigned short<br>unsigned short int</td>
        <td>0 to 65,535</td>
    </tr>
    <tr align="center">
        <td>i32</td>
        <td>__int32</td>
        <td>4</td>
        <td>signed, <br>signed int<br>int</td>
        <td>-2,147,483,648 to 2,147,483,647</td>
    </tr>
    <tr align="center">
        <td>u32</td>
        <td>unsigned __int32</td>
        <td>4</td>
        <td>unsigned, <br>unsigned int</td>
        <td>0 to 4,294,967,295</td>
    </tr>
    <tr align="center">
        <td>i32</td>
        <td>int</td>
        <td>4</td>
        <td>signed</td>
        <td>-2,147,483,648 to 2,147,483,647</td>
    </tr>
    <tr align="center">
        <td>u32</td>
        <td>unsigned int</td>
        <td>4</td>
        <td>unsigned</td>
        <td>0 to 4,294,967,295</td>
    </tr>
    <tr align="center">
        <td>i64</td>
        <td>__int64</td>
        <td>8</td>
        <td>long long,<br>signed long long</td>
        <td>-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807</td>
    </tr>
    <tr align="center">
        <td>u64</td>
        <td>unsigned __int64</td>
        <td>8</td>
        <td>unsigned long long</td>
        <td>0 to 18,446,744,073,709,551,615</td>
    </tr>
    <tr align="center">
        <td>bool</td>
        <td>bool</td>
        <td>1</td>
        <td>none</td>
        <td>false or true</td>
    </tr>
    <tr align="center">
        <td>char</td>
        <td>char</td>
        <td>1</td>
        <td>none</td>
        <td>-128 to 127<br> by default<br>

0 to 255 when compiled by using </td>
    </tr>
    <tr align="center">
        <td>char</td>
        <td>signed char</td>
        <td>1</td>
        <td>none</td>
        <td>128 to 127</td>
    </tr>
    <tr align="center">
        <td>char</td>
        <td>unsigned char</td>
        <td>1</td>
        <td>none</td>
        <td>0 to 255</td>
    </tr>
    <tr align="center">
        <td>i16</td>
        <td>short</td>
        <td>2</td>
        <td>short int<br>signed short int</td>
        <td>-32,768 to 32,767</td>
    </tr>
    <tr align="center">
        <td>u16</td>
        <td>unsigned short</td>
        <td>2</td>
        <td>unsigned short int</td>
        <td>0 to 65,535</td>
    </tr>
    <tr align="center">
        <td>i32</td>
        <td>long</td>
        <td>4</td>
        <td>long int,<br>signed long int</td>
        <td>-2,147,483,648 to 2,147,483,647</td>
    </tr>
    <tr align="center">
        <td>u32</td>
        <td>unsigned long</td>
        <td>4</td>
        <td>unsigned long int</td>
        <td>0 to 4,294,967,295</td>
    </tr>
    <tr align="center">
        <td>i64</td>
        <td>long long</td>
        <td>8</td>
        <td>none<br>(but equivalent to __int64)</td>
        <td>-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807</td>
    </tr>
    <tr align="center">
        <td>u64</td>
        <td>unsigned long long</td>
        <td>8</td>
        <td>none<br>(but equivalent to unsigned __int64)</td>
        <td>0 to 18,446,744,073,709,551,615</td>
    </tr>
    <tr align="center">
        <td>enum</td>
        <td>enum</td>
        <td>varies</td>
        <td>none</td>
        <td></td>
    </tr>
    <tr align="center">
        <td>f32</td>
        <td>float</td>
        <td>4</td>
        <td>none</td>
        <td>3.4E +/- 38 (7 digits)</td>
    </tr>
    <tr align="center">
        <td>f64</td>
        <td>double</td>
        <td>8</td>
        <td>none</td>
        <td>1.7E +/- 308 (15 digits)</td>
    </tr>
    <tr align="center">
        <td>f64</td>
        <td>long double</td>
        <td>same as double</td>
        <td>none</td>
        <td>Same as double</td>
    </tr>
    <tr align="center">
        <td>u16</td>
        <td>wchar_t</td>
        <td>2</td>
        <td>__wchar_t</td>
        <td>0 to 65,535</td>
    </tr>
</table>

- Depending on how it's used, a variable of __wchar_t designates either a wide-character type or multibyte-character type. Use the L prefix before a character or string constant to designate the wide-character-type constant.

- signed and unsigned are modifiers that you can use with any integral type except bool. Note that char, signed char, and unsigned char are three distinct types for the purposes of mechanisms like overloading and templates.

- The int and unsigned int types have a size of four bytes. However, portable code should not depend on the size of int because the language standard allows this to be implementation-specific.

- C/C++ in Visual Studio also supports sized integer types. For more information, see __int8, __int16, __int32, __int64 and Integer Limits.

- For more information about the restrictions of the sizes of each type, see Built-in types.

- The range of enumerated types varies depending on the language context and specified compiler flags. For more information, see C Enumeration Declarations and Enumerations.

https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170

# 코딩의 근본 shellscript

https://www.shellscript.sh/

<hr>

# C++ 라이브러리 찾는곳

https://en.cppreference.com/w/cpp/links/libs

- C++질문하고 답해주는 좋은 곳
  - https://cplusplus.com/forum/beginner/


# Generators, Coroutines and Other Brain Unrolling Sweetness - Adi Shavit - CppCon 2019

https://youtu.be/qYHDERleSL8?si=iyod9wk7aMVcnk0r

# coroutines(c++)

https://gcc.gnu.org/wiki/cxx-coroutines

<hr>

# C++ Design Patterns: From C++03 to C++17 - Fedor Pikus - CppCon 2019

https://youtu.be/MdtYi0vvct0

# Reflect *this!: Design and Implementation of a Mixin Library with Static Reflection - Andy Soffer

https://youtu.be/kFChd-RrSP8

<hr>

# 구글 differential-privacy

- Google's differential privacy libraries.

  - https://github.com/google/differential-privacy


# Microsoft C++, C, and Assembler documentation

- Learn how to use C++, C, and assembly language to develop applications, services, and tools for your platforms and devices.

https://learn.microsoft.com/en-us/cpp/?view=msvc-170

# Useful resources | cppreference

https://en.cppreference.com/w/cpp/links

# C++ 98/11/14 manual pages for Linux/MacOS 

https://github.com/aitjcize/cppman

# Cpp : Bjarne Stroustrup

  - C++ Core Guidelines - edt.: Bjarne Stroustrup, Herb Sutter

    - https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md
    
  - Joint Strike Fighter, C++ Coding Standards - Bjarne Stroustrup (PDF)
  
    - https://www.stroustrup.com/JSF-AV-rules.pdf

# Learning C++ eBook - Compiled from StackOverflow Documentation (PDF)

https://riptutorial.com/Download/cplusplus.pdf

# C++.com

https://cplusplus.com/doc/tutorial/

<br>

<hr>

# Compilers

Use every available and reasonable set of warning options. Some warning options only work with optimizations enabled, or work better the higher the chosen level of optimization is, for example 
```-Wnull-dereference```
 with GCC.

You should use as many compilers as you can for your platform(s). Each compiler implements the standard slightly differently and supporting multiple will help ensure the most portable, most reliable code.

# GCC / Clang
```-Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic``` 
- use these and consider the following (see descriptions below)

## see descriptions below

- ```-pedantic``` - Warn on language extensions

- ```-Wall -Wextra``` reasonable and standard

- ```-Wshadow``` warn the user if a variable declaration shadows one from a parent context

- ```-Wnon-virtual-dtor``` warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors

- ```-Wold-style-cast``` warn for c-style casts

- ```-Wcast-align``` warn for potential performance problem casts
-Wunused warn on anything being unused

- ```-Woverloaded-virtual``` warn if you overload (not override) a virtual function

- ```-Wpedantic``` (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used

- ```-Wconversion``` warn on type conversions that may lose data

- ```-Wsign-conversion``` (Clang all versions, GCC >= 4.3) warn on sign conversions

- ```-Wmisleading-indentation``` (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist

- ```-Wduplicated-cond``` (only in GCC >= 6.0) warn if if / else chain has duplicated conditions

- ```-Wduplicated-branches``` (only in GCC >= 7.0) warn if if / else branches have duplicated code

- ```-Wlogical-op``` (only in GCC) warn about logical operations being used where bitwise were probably wanted

- ```-Wnull-dereference``` (only in GCC >= 6.0) warn if a null dereference is detected

- ```-Wuseless-cast``` (only in GCC >= 4.8) warn if you perform a cast to the same type

- ```-Wdouble-promotion``` (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double

- ```-Wformat=2``` warn on security issues around functions that format output (i.e., printf)

- ```-Wlifetime``` (only special branch of Clang currently) shows object lifetime issues

- ```-Wimplicit-fallthrough``` Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)

Consider using ```-Weverything``` and disabling the few warnings you need to on Clang

- ```-Weffc++``` warning mode can be too noisy, but if it works for your project, use it also.


https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md

<hr>

# C++ Support in Clang

- Clang implements the following published and upcoming ISO C++ standards:
- https://clang.llvm.org/cxx_status.html

|Language Standard |	Flag |	Available in Clang? |
|-|-|-|
|[C++2c](https://clang.llvm.org/cxx_status.html#cxx26)|	-std=c++2c | Partial|
|C++23|	-std=c++23|	Partial|
|C++20|	-std=c++20|	Partial|
|C++17|	-std=c++17|	Clang 5|
|C++14|	-std=c++14|	Clang 3.4|
|C++11|	-std=c++11|	Clang 3.3|
|C++98/C++03	|-std=c++98|	Yes (other than export)|


<hr>

<br>

# C++ Concurrency vs Parallelism ~~~~~~~~~~

- CppCon 2017: Fedor Pikus “C++ atomics, from basic to advanced. What do they really do?”
  - https://youtu.be/ZQFzMfHIxng

# C++ Tutorial ~~~~~~~~~~~~~~~~~~~~~~~

- C++ From Scratch | CoffeeBeforeArch
  - https://youtube.com/playlist?list=PLxNPSjHT5qvvIGGhRnFOGA4CbX1oTrt6z

# 국내 C++ 무료 강좌 (모두의 C++) 

https://modoocode.com/135

# 구글의 C++ 가이드 라인

https://google.github.io/styleguide/cppguide.html

# MicroSoft 설명서

- https://learn.microsoft.com/en-us/training/

https://learn.microsoft.com/ko-kr/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170

- English Ver.

  - https://learn.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170

# Cpp_Training

Training

  - C++ Programming Course - Beginner to Advanced | freeCodeCamp.org
  
    - https://youtu.be/8jLOx1hD3_o

## Source

[Best Hindi Videos For Learning Programming : CodeWithHarry](https://www.youtube.com/watch?v=j8nAHeVKL08&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL)

<hr>

## C++20 Source

[C++ Programming Course - Beginner to Advanced](https://www.youtube.com/watch?v=8jLOx1hD3_o)

<hr>

<br>

# c20 compile

- build.sh

```
#!/bin/bash

g++ -std=c++2a main.cpp
```

<br>

- 권한 올려주기macOS 기준

```
chmod +x build.sh
```

- how to use c++20 / g++ -std=c++11 -o test test.cpp (build.sh❤️파일 만드는법)

  - https://economiceco.tistory.com/12470

```
g++ -std=c++20



// C++20 기능은 GCC 8부터 사용할 수 있습니다.

// C++20 지원을 활성화하려면 명령줄 매개변수를 추가하세요.

-std=c++20

// G++ 9 이상 사용

-std=c++2a

// 또는 C++20 기능 외에 GNU 확장을 활성화하려면 다음을 추가하십시오.

-std=gnu++20

 
```

# cpp 17 compile & debug

```
$ g++ -Wall -Wextra -std=c++17 main.cpp -o main

$ clang++ -Wall -Wextra -std=c++17 main.cpp -o main

```

build.sh

```
#!/bin/bash

clang++ -Wall -Wextra -std=c++17 main.cpp -o main
```

- 28분 29초 Back to Basics: Debugging in C++ - Mike Shah - CppCon 2022

https://youtu.be/YzIBwqWC6EM

출처: https://economiceco.tistory.com/15424 [경제PLUS:티스토리]

<br>

# c++ algorithm study

https://github.com/jungeu1509/Algorithm_study


# Awesome modern c++

https://github.com/rigtorp/awesome-modern-cpp

# C++20

https://itnext.io/c-20-coroutines-complete-guide-7c3fc08db89d?gi=b495cc70f832

https://github.com/HappyCerberus/article-cpp20-coroutines


# C++❤ A modern formatting library

https://github.com/fmtlib/fmt



