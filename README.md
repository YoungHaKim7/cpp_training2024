# vim tab setting

```
set tabstop=2
set shiftwidth=2
```

<hr>

# 내가 정리하는 github

- https://github.com/YoungHaKim7/Cpp_Training
- https://github.com/YoungHaKim7/cpp23_project

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

g++ -std=c++2a main.pp
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



