# Cpp Makefile(macOS)

```bash
echo "r:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09g++ -pthread -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&

echo "b:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main" >> Makefile &&
echo "" >> Makefile &&

echo "ll:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.cpp ./." >> Makefile &&
echo "\x09\x09clang++ -S -emit-llvm -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11 main.cpp" >> Makefile &&
echo "\x09\x09mv *.ll ./out/." >> Makefile &&
echo "\x09\x09clang++ -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11 main.cpp" >> Makefile &&
echo "\x09\x09mv *.out ./out/." >> Makefile &&
echo "\x09\x09rm -rf *.out" >> Makefile &&
echo "" >> Makefile &&

echo "as:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/*.cpp ./out/." >> Makefile &&
echo "\x09\x09g++ -Wall -save-temps ./out/main.cpp" >> Makefile &&
echo "\x09\x09mv *.ii ./out" >> Makefile &&
echo "\x09\x09mv *.o ./out" >> Makefile &&
echo "\x09\x09mv *.s ./out" >> Makefile &&
echo "\x09\x09mv *.out ./out" >> Makefile &&
echo "" >> Makefile &&

echo "fsan:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.cpp ./." >> Makefile &&
echo "\x09\x09g++ -ggdb -fsanitize=address -fno-omit-frame-pointer -static-libstdc++ -static-libasan -lrt main.cpp" >> Makefile &&
echo "\x09\x09mv *.out ./out" >> Makefile &&
echo "\x09\x09mv *.cpp ./out" >> Makefile &&
echo "" >> Makefile &&

echo "mem:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.cpp ./." >> Makefile &&
echo "\x09\x09g++ -fsanitize=address -g3 -std=c++2b main.cpp" >> Makefile &&
echo "\x09\x09mv *.out ./out" >> Makefile &&
echo "\x09\x09mv *.cpp ./out" >> Makefile &&
echo "\x09\x09valgrind --leak-check=full ./out/a.out" >> Makefile &&
echo "" >> Makefile &&

echo "obj:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -std=c++2b -Wall -Wextra -ggdb -c ./src/main.cpp" >> Makefile &&
echo "\x09\x09mv *.o ./out" >> Makefile &&
echo "\x09\x09objdump --disassemble -S -C ./out/main.o" >> Makefile &&
echo "" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf ./out *.out ./src/*.out" >> Makefile &&
echo "" >> Makefile &&
echo "init:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "" >> Makefile &&
echo "\x09\x09echo \x22int main(int argc, char **argv) {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&

echo "# Result\xa\xa\x60\x60\x60\xa\xa\x60\x60\x60" >> README.md &&

echo "# A collection of useful .gitignore templates " >> .gitignore &&
echo "# https://github.com/github/gitignore\xa" >> .gitignore &&
echo "# General" >> .gitignore &&
echo ".DS_Store" >> .gitignore &&
echo "dir/otherdir/.DS_Store\xa" >> .gitignore &&
echo "out/" >> .gitignore &&

echo "a.out.dSYM/\xa" >> .gitignore &&

echo "# Prerequisites" >> .gitignore &&
echo "*.d\xa" >> .gitignore &&

echo "# Compiled Object files" >> .gitignore &&
echo "*.slo" >> .gitignore &&
echo "*.lo" >> .gitignore &&
echo "*.o" >> .gitignore &&
echo "*.obj\xa" >> .gitignore &&

echo "# Precompiled Headers" >> .gitignore &&
echo "*.gch" >> .gitignore &&
echo "*.pch\xa" >> .gitignore &&

echo "# Compiled Dynamic libraries" >> .gitignore &&
echo "*.so" >> .gitignore &&
echo "*.dylib" >> .gitignore &&
echo "*.dll\xa" >> .gitignore &&

echo "# Fortran module files" >> .gitignore &&
echo "*.mod" >> .gitignore &&
echo "*.smod\xa" >> .gitignore &&

echo "# Compiled Static libraries" >> .gitignore &&
echo "*.lai" >> .gitignore &&
echo "*.la" >> .gitignore &&
echo "*.a" >> .gitignore &&
echo "*.lib\xa" >> .gitignore &&

echo "# Executables" >> .gitignore &&
echo "*.exe" >> .gitignore &&
echo "*.out" >> .gitignore &&
echo "*.app\xa" >> .gitignore

```

https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md


- clang++
https://stackoverflow.com/questions/54521402/locating-iostream-in-clang-fatal-error-iostream-file-not-found/58338868#58338868
https://askubuntu.com/questions/1449769/clang-cannot-find-iostream


- sanitizer
  - https://doc.rust-lang.org/nightly/unstable-book/compiler-flags/sanitizer.html
  - https://gcc.gnu.org/legacy-ml/gcc-patches/2013-11/msg01874.html
  - http://gavinchou.github.io/experience/summary/syntax/gcc-address-sanitizer/
# Result

```

```
