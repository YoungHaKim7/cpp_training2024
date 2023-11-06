# Source
http://gavinchou.github.io/experience/summary/syntax/gcc-address-sanitizer/

./a.out heap_leak
./a.out heap_buffer_overflow

# ./a.out heap_leak

```
$ ./out/a.out

container_deferred
stack_buffer_overflow
heap_buffer_overflow
heap_leak
global_buffer_overflow

```

```
$ ./out/a.out heap_leak
int heap_leak()10086

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

=================================================================
==54720==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 40344 byte(s) in 1 object(s) allocated from:
    #0 0x7f0e5b5f6357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x556c90b7c89e in heap_leak() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:20
    #2 0x556c90b848ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x556c90b83df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x556c90b82544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x556c90b8000b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x556c90b7d602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7f0e5b00ed8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 40344 byte(s) leaked in 1 allocation(s).

```

# ./a.out heap_buffer_overflow

```

$ ./out/./a.out heap_buffer_overflow

int heap_buffer_overflow()-1094795586
=================================================================
==55200==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x62e00000a068 at pc 0x55ef713bbd25 bp 0x7ffe2b6b6d30 sp 0x7ffe2b6b6d20
READ of size 4 at 0x62e00000a068 thread T0
    #0 0x55ef713bbd24 in heap_buffer_overflow() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:44
    #1 0x55ef713c38ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #2 0x55ef713c2df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #3 0x55ef713c1544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #4 0x55ef713bf00b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #5 0x55ef713bc602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #6 0x7fcaf57b4d8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #7 0x7fcaf57b4e3f in __libc_start_main_impl ../csu/libc-start.c:392
    #8 0x55ef713bb7c4 in _start (/home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/out/a.out+0x47c4)

0x62e00000a068 is located 0 bytes to the right of 40040-byte region [0x62e000000400,0x62e00000a068)
allocated by thread T0 here:
    #0 0x7fcaf5d9c357 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x55ef713bbc25 in heap_buffer_overflow() /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:41
    #2 0x55ef713c38ba in int std::__invoke_impl<int, int (*&)()>(std::__invoke_other, int (*&)()) /usr/include/c++/11/bits/invoke.h:61
    #3 0x55ef713c2df1 in std::enable_if<is_invocable_r_v<int, int (*&)()>, int>::type std::__invoke_r<int, int (*&)()>(int (*&)()) /usr/include/c++/11/bits/invoke.h:114
    #4 0x55ef713c1544 in std::_Function_handler<int (), int (*)()>::_M_invoke(std::_Any_data const&) /usr/include/c++/11/bits/std_function.h:290
    #5 0x55ef713bf00b in std::function<int ()>::operator()() const /usr/include/c++/11/bits/std_function.h:590
    #6 0x55ef713bc602 in main /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:87
    #7 0x7fcaf57b4d8f in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: heap-buffer-overflow /home/gy/my_project/cpp_lang/1111/Cpp_Training/04_memory_leak_test/main.cpp:44 in heap_buffer_overflow()
Shadow bytes around the buggy address:
  0x0c5c7fff93b0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c5c7fff93c0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c5c7fff93d0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c5c7fff93e0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c5c7fff93f0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x0c5c7fff9400: 00 00 00 00 00 00 00 00 00 00 00 00 00[fa]fa fa
  0x0c5c7fff9410: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c5c7fff9420: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c5c7fff9430: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c5c7fff9440: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c5c7fff9450: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc
==55200==ABORTING

```


# ```g++ -fsanitize=address -g3 -std=c++2b main.cpp```

```bash

g++ -fsanitize=address -g3 -std=c++2b main.cpp

valgrind --leak-check=full ./out/a.out
==52948== Memcheck, a memory error detector
==52948== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==52948== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==52948== Command: ./out/a.out
==52948==
==52948==ASan runtime does not come first in initial library list; you should either link runtime to your application or manually preload it with LD_PRELOAD.
==52948==
==52948== Process terminating with default action of signal 11 (SIGSEGV)
==52948==  General Protection Fault
==52948==    at 0x562AEC2: __pthread_once_slow (pthread_once.c:114)
==52948==    by 0x56F9AB2: __rpc_thread_variables (rpc_thread.c:59)
==52948==    by 0x574CE0C: free_mem (in /usr/lib/x86_64-linux-gnu/libc.so.6)
==52948==    by 0x574C941: __libc_freeres (in /usr/lib/x86_64-linux-gnu/libc.so.6)
==52948==    by 0x483F1B2: _vgnU_freeres (in /usr/libexec/valgrind/vgpreload_core-amd64-linux.so)
==52948==    by 0x4A5B3DF: ???
==52948==    by 0x49512D6: __sanitizer::Die() (sanitizer_termination.cpp:59)
==52948==    by 0x49273B8: __asan::AsanCheckDynamicRTPrereqs() (asan_linux.cpp:181)
==52948==    by 0x4933564: __asan::AsanInitInternal() [clone .part.0] (asan_rtl.cpp:420)
==52948==    by 0x40065BD: _dl_init (dl-init.c:102)
==52948==    by 0x40202C9: ??? (in /usr/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2)
==52948==
==52948== HEAP SUMMARY:
==52948==     in use at exit: 0 bytes in 0 blocks
==52948==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==52948==
==52948== All heap blocks were freed -- no leaks are possible
==52948==
==52948== For lists of detected and suppressed errors, rerun with: -s
==52948== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
make: *** [Makefile:47: mem] Error 1

```
