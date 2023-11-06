r:
		rm -rf out
		mkdir out
		g++ -pthread -lm -Wall -Wextra -ggdb -o out/main src/main.cpp
		./out/main

b:
		rm -rf out
		mkdir out
		g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main

ll:
		rm -rf out
		mkdir out
		cp -rf ./src/main.cpp ./.
		clang++ -S -emit-llvm -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11 main.cpp
		mv *.ll ./out/.
		clang++ -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11 main.cpp
		mv *.out ./out/.
		rm -rf *.out

as:
		rm -rf out
		mkdir out
		cp -rf ./src/*.cpp ./out/.
		g++ -Wall -save-temps ./out/main.cpp
		mv *.ii ./out
		mv *.o ./out
		mv *.s ./out
		mv *.out ./out

fsan:
		rm -rf out
		mkdir out
		cp -rf ./src/main.cpp ./.
		g++ -ggdb -fsanitize=address -fno-omit-frame-pointer -static-libstdc++ -static-libasan -lrt main.cpp
		mv *.out ./out
		mv *.cpp ./out

mem:
		rm -rf out
		mkdir out
		cp -rf ./src/main.cpp ./.
		g++ -fsanitize=address -g3 -std=c++2b main.cpp
		mv *.out ./out
		mv *.cpp ./out
		valgrind --leak-check=full ./out/a.out

obj:
		rm -rf out
		mkdir out
		g++ -std=c++2b -Wall -Wextra -ggdb -c ./src/main.cpp
		mv *.o ./out
		objdump --disassemble -S -C ./out/main.o

clean:
		rm -rf ./out *.out

init:
		mkdir src
		echo "#include <iostream>" >> src/main.cpp

		echo "int main(int argc, char **argv) {" >> src/main.cpp
		echo "	std::cout<< \"Hello C++ \" << std::endl;" >> src/main.cpp
		echo "	return 0;" >> src/main.cpp
		echo "}" >> src/main.cpp
