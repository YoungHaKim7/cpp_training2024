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
