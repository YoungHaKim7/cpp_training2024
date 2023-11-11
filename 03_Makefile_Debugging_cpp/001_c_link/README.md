# make(macOS)

https://changkun.de/modern-cpp/en-us/01-intro/

```bash

echo "C = gcc " >> Makefile &&
echo "CXX = clang++" >> Makefile &&
echo "" >> Makefile &&
echo "SOURCE_C = ./src/foo.c" >> Makefile &&
echo "OBJECTS_C = ./out/foo.o" >> Makefile &&
echo "SOURCE_CXX = ./src/main.cpp" >> Makefile &&
echo "" >> Makefile &&
echo "TARGET = ./out/main" >> Makefile &&
echo "LDFLAGS_COMMON = -std=c++2a -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb" >> Makefile &&
echo "" >> Makefile &&
echo "r3:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09\x24(C) -c \x24(SOURCE_C) -o \x24(OBJECTS_C)" >> Makefile &&
echo "\x09\x09\x24(CXX) \x24(SOURCE_CXX) \x24(OBJECTS_C) \x24(LDFLAGS_COMMON) -o \x24(TARGET)" >> Makefile &&
echo "\x09\x09\x24(TARGET)" >> Makefile &&
echo "" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf \x24(TARGET) ./out *.out ./src/*.out ./src/out/ *.dSYM ./src/*.dSYM" >> Makefile &&
echo "" >> Makefile &&

echo "init3:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include \\\"foo.h\\\"\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22#include <functional>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main() {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09[out = std::ref(std::cout << \\\"Result from C code: \\\" << add(1, 2))](){\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09out.get() << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09}();\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&
echo "" >> Makefile &&

echo "\x09\x09echo \x22int add(int x, int y) {\x22 >> src/foo.c" >> Makefile &&
echo "\x09\x09echo \x22\x09return x + y;\x22 >> src/foo.c" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/foo.c" >> Makefile &&
echo "" >> Makefile &&


echo "\x09\x09echo \x22#ifdef __cplusplus\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22extern \\\"C\\\" {\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22#endif\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22int add(int x, int y);\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22#ifdef __cplusplus\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/foo.h" >> Makefile &&
echo "\x09\x09echo \x22#endif\x22 >> src/foo.h" >> Makefile &&


echo "# Result\xa\xa\x60\x60\x60\xa\xa\x60\x60\x60" >> README.md &&

echo "# A collection of useful .gitignore templates " >> .gitignore &&
echo "# https://github.com/github/gitignore\xa" >> .gitignore &&
echo "# General" >> .gitignore &&
echo ".DS_Store" >> .gitignore &&
echo "dir/otherdir/.DS_Store\xa" >> .gitignore &&
echo "out/" >> .gitignore &&
echo ".vscode/" >> .gitignore &&


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

# Result

```
Result from C code: 3  
```


https://changkun.de/modern-cpp/en-us/01-intro/# Result


# Makefile

```Makefile
C = gcc 
CXX = clang++

SOURCE_C = ./src/foo.c
OBJECTS_C = ./out/foo.o
SOURCE_CXX = ./src/main.cpp

TARGET = ./out/main
LDFLAGS_COMMON = -std=c++2a -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb

r3:
		rm -rf out
		mkdir out
		$(C) -c $(SOURCE_C) -o $(OBJECTS_C)
		$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) -o $(TARGET)
		$(TARGET)

clean:
		rm -rf $(TARGET) ./out *.out ./src/*.out ./src/out/ *.dSYM ./src/*.dSYM

init3:
		mkdir src
		echo "#include \"foo.h\"" >> src/main.cpp
		echo "#include <iostream>" >> src/main.cpp
		echo "#include <functional>" >> src/main.cpp
		echo "" >> src/main.cpp
		echo "int main() {" >> src/main.cpp
		echo "	[out = std::ref(std::cout << \"Result from C code: \" << add(1, 2))](){" >> src/main.cpp
		echo "		out.get() << std::endl;" >> src/main.cpp
		echo "	}();" >> src/main.cpp
		echo "	return 0;" >> src/main.cpp
		echo "}" >> src/main.cpp

		echo "int add(int x, int y) {" >> src/foo.c
		echo "	return x + y;" >> src/foo.c
		echo "}" >> src/foo.c

		echo "#ifdef __cplusplus" >> src/foo.h
		echo "extern \"C\" {" >> src/foo.h
		echo "#endif" >> src/foo.h
		echo "" >> src/foo.h
		echo "int add(int x, int y);" >> src/foo.h
		echo "" >> src/foo.h
		echo "#ifdef __cplusplus" >> src/foo.h
		echo "}" >> src/foo.h
		echo "#endif" >> src/foo.h
```
