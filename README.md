<p align="center">
  <img width=75px src="https://github.com/YoungHaKim7/Cpp_Training/assets/67513038/02580529-b8e2-4aa9-b80e-dd1f56a08491" />
</p>

<hr>

# link


- [(외부링크)C++언어 Wiki에 잘 정리됨](https://en.wikipedia.org/wiki/C%2B%2B)
- [gcc/clang 옵션 활용법](#compilers)
  - [clang -std옵션 넣는 패턴 c++14 17, 20, 23](#c-support-in-clang)
- [구글의-c-가이드-라인](#구글의-c-가이드-라인)
  - [(Bjarne Stroustrup)C++가이드라인C++ Core Guidelines - edt.: Bjarne Stroustrup, Herb Sutter](#cpp--bjarne-stroustrup)
- [C/C++ Cheat-Sheet](#c-cheat-sheet)
- [c-라이브러리-찾는곳](#c-라이브러리-찾는곳)
- [ASCII아스키 table](https://cplusplus.com/doc/ascii/)

- C++
  - [온라인으로 디버깅 된다. 완전 최고..https://www.onlinegdb.com/online_c++_debugger](https://www.onlinegdb.com/online_c++_debugger)

<hr />

- C++ Standard Library 구현하는거 자세히 설명한 영상241210
  - [(241210)How To Implement the C++ Standard Library - (Part 1 of 2) - Christopher Di Bella - C++ on Sea 2024 | cpponsea](https://youtu.be/FgfJhKik_jY?si=ARg6YWqBqRlsDTOX)
  - [How to Implement the C++ Standard Library (Part 2): An Excursion into libc++ - Christopher Di Bella | cpponsea](https://youtu.be/xS1gI0K7tWk?si=jpbm_6Zb2CbVhEUU)

<hr>

- 병렬 & 동시성 
  - [유명한 coroutine](#coroutinesc)

- (Modern C++시리즈) 이분이 최고 The C++ Programming Language | Mike Shah
  - modern C++ (C++11,14,17,20,23, etc.)
    - https://youtube.com/playlist?list=PLvv0ScY6vfd8j-tlhYVPYgiIyXduu6m-L&si=yihPgZSNZIWAxW8S
      - (다른사람) C++ 게시자: The Cherno
        - https://youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&si=FpQAPS-C-IVfU1em


- Tutorial(C/C++)
  - [cppman(문서보기) & & c98부터 c++26까지 나온 기능들 잘 정리됨 & Doc c-981114-manual-pages-for-linuxmacos- ](#c-981114-manual-pages-for-linuxmacos-)
    - [C++디자인 패턴Design-pattern](#c-design-patterns-from-c03-to-c17---fedor-pikus---cppcon-2019)
  - [마소microsoft-설명서](#microsoft-설명서)
  - [useful-resources--cppreference](#useful-resources--cppreference)
  - [www.cplusplus.com/doc/tutorial](https://cplusplus.com/doc/)

<hr>

- [c-vs-rust-변수-용량-비교--범위](#c-vs-rust-변수-용량-비교--범위)
  - [C의 헷갈리는 예약어 정리(`char16_t` `wchar_t` 이런거](#c의-헷갈리는-예약어-정리char16_t-wchar_t-이런거)

<hr>

- C++/C++ 기초 
  - [C++| 연산자 총 정리 (Operator)](#cc-%EA%B8%B0%EC%B4%88-c-%EC%97%B0%EC%82%B0%EC%9E%90-%EC%B4%9D-%EC%A0%95%EB%A6%AC-operator)

<hr />


# 여기에 다 정리중.(C23 & C++14 / 23/ 26)

- C언어
  - https://github.com/YoungHaKim7/c_project
  - C23(build + cmake)
    - https://github.com/YoungHaKim7/c23_pthread_cmake_just_sample

- C++
  - C++98/03/11/14/17/20
    - https://github.com/YoungHaKim7/cpp_training2024
  - C++23/26/29
    - https://github.com/YoungHaKim7/cpp23_26_project
    - 빌드 & cmake
      - https://github.com/YoungHaKim7/cpp26_pthread_cmake_just_sample

# C++23, 26 ~ 여기에 정리중..
- https://github.com/YoungHaKim7/cpp23_26_project

<hr />

# vim tab setting[[🔝]](#link)

```
set tabstop=2
set shiftwidth=2
```

<hr>

# Assembly Code로 공부하기  넘 좋다.[[🔝]](#link)

https://godbolt.org/

<hr>

# 내가 정리하는 github[[🔝]](#link)

- https://github.com/YoungHaKim7/cpp_training2024
- https://github.com/YoungHaKim7/cpp23_project

# C++ Cheat Sheet[[🔝]](#link)

- C++ Cheat Sheet(간단하게 보기 좋다)
  - https://quickref.me/cpp.html

- Modern C++ Cheatsheet (C11, C14)
  - https://github.com/mortennobel/cpp-cheatsheet



<hr>

# C++ vs Rust 변수 용량 비교  범위[[🔝]](#link)

- [C의 헷갈리는 예약어 정리(`char16_t` `wchar_t` 이런거](#c의-헷갈리는-예약어-정리char16_t-wchar_t-이런거)

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

# C의 헷갈리는 예약어 정리(`char16_t` `wchar_t` 이런거)[|🔝|](#link)

- https://cplusplus.com/doc/tutorial/variables/

<table class="boxed">
<tr><th>Group</th><th>Type names*</th><th>Notes on size / precision</th></tr>
<tr><td rowspan="4">Character types</td><td><code><b>char</b></code></td><td>Exactly one byte in size. At least 8 bits.</td></tr>
<tr><td><code><b>char16_t</b></code></td><td>Not smaller than <code>char</code>. At least 16 bits.</td></tr>
<tr><td><code><b>char32_t</b></code></td><td>Not smaller than <code>char16_t</code>. At least 32 bits.</td></tr>
<tr><td><code><b>wchar_t</b></code></td><td>Can represent the largest supported character set.</td></tr>
<tr><td rowspan="5">Integer types (signed)</td><td><code><b>signed char</b></code></td><td>Same size as <code>char</code>. At least 8 bits.</td></tr>
<tr><td><code><i>signed</i> <b>short</b> <i>int</i></code></td><td>Not smaller than <code>char</code>. At least 16 bits.</td></tr>
<tr><td><code><i>signed</i> <b>int</b></code></td><td>Not smaller than <code>short</code>. At least 16 bits.</td></tr>
<tr><td><code><i>signed</i> <b>long</b> <i>int</i></code></td><td>Not smaller than <code>int</code>. At least 32 bits.</td></tr>
<tr><td><code><i>signed</i> <b>long long</b> <i>int</i></code></td><td>Not smaller than <code>long</code>. At least 64 bits.</td></tr>
<tr><td rowspan="5">Integer types (unsigned)</td><td><code><b>unsigned char</b></code></td><td rowspan="5">(same size as their signed counterparts)</td></tr>
<tr><td><code><b>unsigned short</b> <i>int</i></code></td></tr>
<tr><td><code><b>unsigned</b> <i>int</i></code></td></tr>
<tr><td><code><b>unsigned long</b> <i>int</i></code></td></tr>
<tr><td><code><b>unsigned long long</b> <i>int</i></code></td></tr>
<tr><td rowspan="3">Floating-point types</td><td><code><b>float</b></code></td><td></td></tr>
<tr><td><code><b>double</b></code></td><td>Precision not less than <code>float</code></td></tr>
<tr><td><code><b>long double</b></code></td><td>Precision not less than <code>double</code></td></tr>
<tr><td>Boolean type</td><td><code><b>bool</b></code></td><td></td></tr>
<tr><td>Void type</td><td><code><b>void</b></code></td><td>no storage</td></tr>
<tr><td>Null pointer</td><td><code><b>decltype(nullptr)</b></code></td><td></td></tr>
</table>

# 코딩의 근본 shellscript

https://www.shellscript.sh/

<hr>

# C++ 라이브러리 찾는곳[[🔝]](#link)

https://en.cppreference.com/w/cpp/links/libs

- C++질문하고 답해주는 좋은 곳[[🔝]](#link)
  - https://cplusplus.com/forum/beginner/


# Generators, Coroutines and Other Brain Unrolling Sweetness - Adi Shavit - CppCon 2019[[🔝]](#link)

https://youtu.be/qYHDERleSL8?si=iyod9wk7aMVcnk0r

# coroutines(c++)[[🔝]](#link)

https://gcc.gnu.org/wiki/cxx-coroutines

<hr>

# C++ Design Patterns: From C++03 to C++17 - Fedor Pikus - CppCon 2019[[🔝]](#link)

https://youtu.be/MdtYi0vvct0

# Reflect *this!: Design and Implementation of a Mixin Library with Static Reflection - Andy Soffer[[🔝]](#link)

https://youtu.be/kFChd-RrSP8

<hr>

# 구글 differential-privacy[[🔝]](#link)

- Google's differential privacy libraries.

  - https://github.com/google/differential-privacy


# Microsoft C++, C, and Assembler documentation[[🔝]](#link)

- Learn how to use C++, C, and assembly language to develop applications, services, and tools for your platforms and devices.

https://learn.microsoft.com/en-us/cpp/?view=msvc-170

# Useful resources | cppreference[[🔝]](#link)

https://en.cppreference.com/w/cpp/links

# C++ 98/11/14 manual pages for Linux/MacOS [[🔝]](#link)

https://github.com/aitjcize/cppman

- cppman
  - C++ 98/11/14/17/20 manual pages for Linux, with source from cplusplus.com and cppreference.com.
```
$ pip install cppman
```

- Demo

<img src="https://camo.githubusercontent.com/8f37711d2918fb70895895bcabb3fdd76836ab94a6ee4318f669f820eafc704f/68747470733a2f2f7261772e6769746875622e636f6d2f6169746a63697a652f6370706d616e2f6d61737465722f77696b692f64656d6f2e676966" />

- c98부터 c++26까지 나온 기능들 잘 정리됨
  - https://clang.llvm.org/cxx_status.html#cxx26

# Cpp : Bjarne Stroustrup[[🔝]](#link)

  - C++ Core Guidelines - edt.: Bjarne Stroustrup, Herb Sutter

    - https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md
    
  - Joint Strike Fighter, C++ Coding Standards - Bjarne Stroustrup (PDF)
  
    - https://www.stroustrup.com/JSF-AV-rules.pdf

# Learning C++ eBook - Compiled from StackOverflow Documentation (PDF)[[🔝]](#link)

https://riptutorial.com/Download/cplusplus.pdf

# C++.com[[🔝]](#link)

https://cplusplus.com/doc/tutorial/

<br>

<hr>

# Compilers[[🔝]](#link)

Use every available and reasonable set of warning options. Some warning options only work with optimizations enabled, or work better the higher the chosen level of optimization is, for example 
```-Wnull-dereference```
 with GCC.

You should use as many compilers as you can for your platform(s). Each compiler implements the standard slightly differently and supporting multiple will help ensure the most portable, most reliable code.

# GCC / Clang[[🔝]](#link)
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

# C++ Support in Clang[[🔝]](#link)

- Clang implements the following published and upcoming ISO C++ standards:
- https://clang.llvm.org/cxx_status.html

|Language Standard |	Flag |	Available in Clang? |
|-|-|-|
|[C++2c](https://clang.llvm.org/cxx_status.html#cxx26)<br> C++26|	-std=c++2c | Partial|
|C++23|	-std=c++23 <br> -std=c++2b |	Partial|
|C++20|	-std=c++20 <br> -std=c++2a |	Partial|
|C++17|	-std=c++17|	Clang 5|
|C++14|	-std=c++14|	Clang 3.4|
|C++11|	-std=c++11|	Clang 3.3|
|C++98/C++03	|-std=c++98|	Yes (other than export)|


<hr>

<br>

# C++ Concurrency vs Parallelism ~~~[[🔝]](#link)

- CppCon 2017: Fedor Pikus “C++ atomics, from basic to advanced. What do they really do?”
  - https://youtu.be/ZQFzMfHIxng

# C++ Tutorial ~~[[🔝]](#link)
- C++ From Scratch | CoffeeBeforeArch
  - https://youtube.com/playlist?list=PLxNPSjHT5qvvIGGhRnFOGA4CbX1oTrt6z

# 국내 C++ 무료 강좌 (모두의 C++) [[🔝]](#link)

https://modoocode.com/135

# 구글의 C++ 가이드 라인[[🔝]](#link)

https://google.github.io/styleguide/cppguide.html

# MicroSoft 설명서[[🔝]](#link)

- https://learn.microsoft.com/en-us/training/

https://learn.microsoft.com/ko-kr/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170

- English Ver.

  - https://learn.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170

# Cpp_Training[[🔝]](#link)

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

# c20 compile[[🔝]](#link)

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

# cpp 17 compile & debug[[🔝]](#link)

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

# c++ algorithm study[[🔝]](#link)

https://github.com/jungeu1509/Algorithm_study


# Awesome modern c++[[🔝]](#link)

https://github.com/rigtorp/awesome-modern-cpp

# C++20[[🔝]](#link)

https://itnext.io/c-20-coroutines-complete-guide-7c3fc08db89d?gi=b495cc70f832

https://github.com/HappyCerberus/article-cpp20-coroutines


# C++❤ A modern formatting library[[🔝]](#link)

https://github.com/fmtlib/fmt


<hr> 

# - Visual C++ CRT 오류 -

1. VS에서 scanf, strcpy를 썼을 때 오류가 난다면 맨 위에 `#define _CRT_SECURE_NO_WARNINGS`를 붙여주세요.

2. `#define _CRT_SECURE_NO_WARNINGS`는 `#include`보다 위에 놓아야 합니다.

3. `scanf_s`에서 `%c` 또는 `%s`를 쓸 땐 주소가 가리키는 영역에 할당된 크기를 추가로 넣어야 합니다.
- 예)

```cpp
scanf_s("%s %c", &s, sizeof s, &c, sizeof c);
```

# 추천 공부 자료 -

C++: https://modoocode.com/135

C++: https://en.cppreference.com (영어)

C: https://modoocode.com/231

C#: https://learn.microsoft.com/en-us/dotnet/csharp/tour-of-csharp (영어; 한국어 번역은 기계번역, 퀄리티 낮음)

Rust: https://doc.rust-lang.org/book (영어)

더 나은 한국어 자료를 알고 계신다면 언제든지 방장에게 알려주세요. 내용이 충분히 정확하면서 학습자의 학습을 방해하지 않는 좋은 문장력을 갖춘 자료를 찾고 있습니다. 위 항목 외에도 유니티, 언리얼, 그래픽스 등에 관련된 위 목록에 꼭 들어갔으면 좋겠다고 생각하시는 자료가 있다면 언제든지 알려주세요.


<hr />

# C++/C++ 기초 [C++] 연산자 총 정리 (Operator)[|🔝|](#link)
C++ 은 여러 종류의 연산을 위해 다양한 연산자(operator) 을 제공합니다. C++ 의 연산자를 총 정리하는 포스팅입니다.
 

- 1. 산술 연산자(arithmetic operator)
- 2. 대입 연산자(assignment operator)
- 3. 증감 연산자(increment and decrement operator)
- 4. 비교 연산자(comparison operator)
- 5. 논리 연산자(logical operator)
- 6. 비트 연산자(bitwise operator)
- 7. 삼항 연산자
- 8. sizeof 연산자
- 9. 범위 지정 연산자(scope resolution operator)
- 10. 멤버 포인터 연산자(pointer-to-member operator)
- 11. typeid 연산자
  연산자의 우선순위(operator precedence)와 
- 12. 결합 방향(associativity)
- 출처: https://songsite123.tistory.com/8 [Song 컴퓨터공학:티스토리]






