# Cpp Makefile(macOS)

```bash
echo "r:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09g++ -std=c++2b -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&

echo "zr:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09zig c++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&

echo "b:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main" >> Makefile &&
echo "" >> Makefile &&

echo "ll:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.cpp ./." >> Makefile &&
echo "\x09\x09clang++ -S -emit-llvm main.cpp" >> Makefile &&
echo "\x09\x09mv *.ll ./out/." >> Makefile &&
echo "\x09\x09clang++ main.cpp" >> Makefile &&
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

echo "xx:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09xxd -c 16 ./out/main" >> Makefile &&
echo "" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf ./out *.out ./src/*.out ./src/out/ *.dSYM ./src/*.dSYM" >> Makefile &&
echo "" >> Makefile &&

echo "init:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main() {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&
echo "" >> Makefile &&

echo "init2:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main(int argc, char **argv) {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&

echo "vscode:\xa\x09\x09rm -rf .vscode\xa\x09\x09mkdir .vscode" >> Makefile && 
echo "\x09\x09echo \x22{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"0.2.0\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"configurations\\\": [\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"Launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"\\\x24{workspaceFolder}/out/\\\x24{fileBasenameNoExtension}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"\\\x24{workspaceFolder}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"preLaunchTask\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09},\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"gcc - Build and debug active file\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppdbg\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"'${fileDirname}/out/${fileBasenameNoExtension}'\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"stopAtEntry\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"${fileDirname}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"environment\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"externalConsole\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"MIMode\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"tasks\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09]\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"tasks\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppbuild\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"label\\\": \\\"C/C++: clang build active file\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"command\\\": \\\"/home/gy/Utilities/llvm16_0_4/bin/g++\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-c\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fcolor-diagnostics\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fansi-escape-codes\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-g\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24{file}\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-o\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24{fileDirname}/out/\\\x24{fileBasenameNoExtension}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"options\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"cwd\\\": \\\"\\\x24{fileDirname}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"problemMatcher\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\\\x24gcc\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"group\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"kind\\\": \\\"build\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"isDefault\\\": true\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"detail\\\": \\\"Task generated by Debugger.\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"2.0.0\\\"\x22 >> .vscode/tasks.json" >>  Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/tasks.json" >> Makefile &&


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


# Cpp Makefile(LinuxOS)

- \ 이거 제거 못하겠다. ㅠㅠ(빔 활용해서 하자 여기까지 ㅠㅠ)
```
// 안 물어보고 \ 이거 다 지워줌 
%s/\\//g

// 물어보고 
%s/\\//gc


//
std::endl; 이거 보다
'\n';
이걸 쓰도로 하자 endl구현 된 코드가 너무 길어서 최적화에 안좋다.
'\n'; 이게 슈퍼 갑

//

:%s/std::endl/'\\n'\

이렇게 바꿔서 쓰자 \n 하는거 실패 ㅠㅠ


```
<hr>

<br>

- LinuxOS

<br>

```bash
echo "r:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09g++ -std=c++2b -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&

echo "zr:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out\xa\x09\x09zig c++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09./out/main\xa" >> Makefile &&

echo "b:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main" >> Makefile &&
echo "" >> Makefile &&

echo "ll:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09cp -rf ./src/main.cpp ./." >> Makefile &&
echo "\x09\x09clang++ -S -emit-llvm main.cpp" >> Makefile &&
echo "\x09\x09mv *.ll ./out/." >> Makefile &&
echo "\x09\x09clang++ main.cpp" >> Makefile &&
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

echo "xx:\xa\x09\x09rm -rf out\xa\x09\x09mkdir out" >> Makefile &&
echo "\x09\x09g++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp" >> Makefile &&
echo "\x09\x09xxd -c 16 ./out/main" >> Makefile &&
echo "" >> Makefile &&

echo "clean:" >> Makefile &&
echo "\x09\x09rm -rf ./out *.out ./src/*.out ./src/out/ *.dSYM ./src/*.dSYM" >> Makefile &&
echo "" >> Makefile &&

echo "init:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main() {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&
echo "" >> Makefile &&

echo "init2:\xa\x09\x09mkdir src" >> Makefile &&
echo "\x09\x09echo \x22#include <iostream>\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22int main(int argc, char **argv) {\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09std::cout<< \\\"Hello C++ \\\" << std::endl;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22\x09return 0;\x22 >> src/main.cpp" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> src/main.cpp" >> Makefile &&

echo "vscode:\xa\x09\x09rm -rf .vscode\xa\x09\x09mkdir .vscode" >> Makefile && 
echo "\x09\x09echo \x22{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"0.2.0\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"configurations\\\": [\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"Launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"\$$\\\{workspaceFolder}/out/\$$\\\{fileBasenameNoExtension}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"\$$\\\{workspaceFolder}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"preLaunchTask\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09},\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"name\\\": \\\"gcc - Build and debug active file\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppdbg\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"launch\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"program\\\": \\\"\$$\\\{fileDirname}/out/${fileBasenameNoExtension}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"stopAtEntry\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"cwd\\\": \\\"\$$\\\{fileDirname}\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"environment\\\": [],\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"externalConsole\\\": false,\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"MIMode\\\": \\\"lldb\\\",\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09// \\\"tasks\\\": \\\"C/C++: clang build active file\\\"\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22\x09]\x22 >> .vscode/launch.json" >> Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/launch.json" >> Makefile &&

echo "\x09\x09echo \x22{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"tasks\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09{\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"type\\\": \\\"cppbuild\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"label\\\": \\\"C/C++: clang build active file\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"command\\\": \\\"/home/gy/Utilities/llvm16_0_4/bin/g++\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"args\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-c\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fcolor-diagnostics\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-fansi-escape-codes\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-g\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\$$\\\{file}\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"-o\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\$$\\\{fileDirname}/out/\$$\\\{fileBasenameNoExtension}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"options\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"cwd\\\": \\\"\$$\\\{fileDirname}\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"problemMatcher\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"\$$\\\gcc\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"group\\\": {\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"kind\\\": \\\"build\\\",\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"isDefault\\\": true\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09},\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09\x09\\\"detail\\\": \\\"Task generated by Debugger.\\\"\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\x09}\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09],\x22 >> .vscode/tasks.json" >> Makefile &&
echo "\x09\x09echo \x22\x09\\\"version\\\": \\\"2.0.0\\\"\x22 >> .vscode/tasks.json" >>  Makefile &&
echo "\x09\x09echo \x22}\x22 >> .vscode/tasks.json" >> Makefile &&


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

<hr>

https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md


- clang++
https://stackoverflow.com/questions/54521402/locating-iostream-in-clang-fatal-error-iostream-file-not-found/58338868#58338868
https://askubuntu.com/questions/1449769/clang-cannot-find-iostream


- sanitizer
  - https://doc.rust-lang.org/nightly/unstable-book/compiler-flags/sanitizer.html
  - https://gcc.gnu.org/legacy-ml/gcc-patches/2013-11/msg01874.html
  - http://gavinchou.github.io/experience/summary/syntax/gcc-address-sanitizer/

- xxd dump(러스트로 만든 xxd 괜찮다. ㅎ
  - https://github.com/Nicoretti/xxd-rs
  - Usage

```
xxd-rs dump -f Hex Cargo.toml
```
```
USAGE:
    xxd-rs [OPTIONS] [SUBCOMMAND]

FLAGS:
    -h, --help       Prints help information
    -V, --version    Prints version information

OPTIONS:
    -l, --length <length>          Amount of bytes which shall be read
    -o, --output-file <outfile>    File to which the output will be written (default: stdout)
    -s, --seek <seek>              Offset in the file where to start reading

SUBCOMMANDS:
    dump        Dumps an input file in the appropriate output format
    generate    Generates a source file containing the specified file as array
    help        Prints this message or the help of the given subcommand(s)

```

- hex dump
```
user@host:~$ xxd-rs dump Cargo.toml
00000000: 5b70 6163 6b61 6765 5d0a 6e61 6d65 203d  [package].name =
00000010: 2022 7878 642d 7273 220a 6465 7363 7269   "xxd-rs".descri
00000020: 7074 696f 6e20 3d20 2241 2072 7573 7420  ption = "A rust
00000030: 636c 6f6e 6520 6f66 2078 7864 220a 7265  clone of xxd".re
...
...
...
```

- xxd 사용법 https://twpower.github.io/122-xxd-command-usage



- 달러 escape는 달러 2개 였다. ㄱㄱ
  - https://stackoverflow.com/questions/33873789/how-to-escape-double-dollars-in-a-makefile

- n 은 \\ 이거 2개 추가 ㅋ
  - https://stackoverflow.com/questions/16904064/end-of-line-new-line-escapes-in-bash
  - 

# Makefile
```Makefile
r:
		rm -rf out
		mkdir out
		g++ -std=c++2b -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp
		./out/main

zr:
		rm -rf out
		mkdir out
		zig c++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp
		./out/main

b:
		rm -rf out
		mkdir out
		g++ -c -pthread -lm -Wall -Wextra -ggdb src/main.cpp -o out/main

ll:
		rm -rf out
		mkdir out
		cp -rf ./src/main.cpp ./.
		clang++ -S -emit-llvm main.cpp
		mv *.ll ./out/.
		clang++ main.cpp
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

xx:
		rm -rf out
		mkdir out
		g++ -pedantic -pthread -pedantic-errors -lm -Wall -Wextra -ggdb -o out/main src/main.cpp
		xxd -c 16 ./out/main

clean:
		rm -rf ./out *.out ./src/*.out ./src/out/ *.dSYM ./src/*.dSYM

init:
		mkdir src
		echo "#include <iostream>" >> src/main.cpp
		echo "" >> src/main.cpp
		echo "int main() {" >> src/main.cpp
		echo "	std::cout<< \"Hello C++ \" << std::endl;" >> src/main.cpp
		echo "	return 0;" >> src/main.cpp
		echo "}" >> src/main.cpp

init2:
		mkdir src
		echo "#include <iostream>" >> src/main.cpp
		echo "" >> src/main.cpp
		echo "int main(int argc, char **argv) {" >> src/main.cpp
		echo "	std::cout<< \"Hello C++ \" << std::endl;" >> src/main.cpp
		echo "	return 0;" >> src/main.cpp
		echo "}" >> src/main.cpp
vscode:
		rm -rf .vscode
		mkdir .vscode
		echo "{" >> .vscode/launch.json
		echo "	\"version\": \"0.2.0\"," >> .vscode/launch.json
		echo "	\"configurations\": [" >> .vscode/launch.json
		echo "		{" >> .vscode/launch.json
		echo "			\"type\": \"lldb\"," >> .vscode/launch.json
		echo "			\"request\": \"launch\"," >> .vscode/launch.json
		echo "			\"name\": \"Launch\"," >> .vscode/launch.json
		echo "			\"program\": \"$$\{workspaceFolder}/out/$$\{fileBasenameNoExtension}\"," >> .vscode/launch.json
		echo "			\"args\": []," >> .vscode/launch.json
		echo "			\"cwd\": \"$$\{workspaceFolder}\"," >> .vscode/launch.json
		echo "			// \"preLaunchTask\": \"C/C++: clang build active file\"" >> .vscode/launch.json
		echo "		}," >> .vscode/launch.json
		echo "		{" >> .vscode/launch.json
		echo "			\"name\": \"gcc - Build and debug active file\"," >> .vscode/launch.json
		echo "			\"type\": \"cppdbg\"," >> .vscode/launch.json
		echo "			\"request\": \"launch\"," >> .vscode/launch.json
		echo "			\"program\": \"$$\{fileDirname}/out/\"," >> .vscode/launch.json
		echo "			\"args\": []," >> .vscode/launch.json
		echo "			\"stopAtEntry\": false," >> .vscode/launch.json
		echo "			\"cwd\": \"$$\{fileDirname}\"," >> .vscode/launch.json
		echo "			\"environment\": []," >> .vscode/launch.json
		echo "			\"externalConsole\": false," >> .vscode/launch.json
		echo "			\"MIMode\": \"lldb\"," >> .vscode/launch.json
		echo "			// \"tasks\": \"C/C++: clang build active file\"" >> .vscode/launch.json
		echo "		}" >> .vscode/launch.json
		echo "	]" >> .vscode/launch.json
		echo "}" >> .vscode/launch.json
		echo "{" >> .vscode/tasks.json
		echo "	\"tasks\": [" >> .vscode/tasks.json
		echo "		{" >> .vscode/tasks.json
		echo "			\"type\": \"cppbuild\"," >> .vscode/tasks.json
		echo "			\"label\": \"C/C++: clang build active file\"," >> .vscode/tasks.json
		echo "			\"command\": \"/home/gy/Utilities/llvm16_0_4/bin/g++\"," >> .vscode/tasks.json
		echo "			\"args\": [" >> .vscode/tasks.json
		echo "				\"-c\"," >> .vscode/tasks.json
		echo "				\"-fcolor-diagnostics\"," >> .vscode/tasks.json
		echo "				\"-fansi-escape-codes\"," >> .vscode/tasks.json
		echo "				\"-g\"," >> .vscode/tasks.json
		echo "				\"$$\{file}\"," >> .vscode/tasks.json
		echo "				\"-o\"," >> .vscode/tasks.json
		echo "				\"$$\{fileDirname}/out/$$\{fileBasenameNoExtension}\"" >> .vscode/tasks.json
		echo "			]," >> .vscode/tasks.json
		echo "			\"options\": {" >> .vscode/tasks.json
		echo "				\"cwd\": \"$$\{fileDirname}\"" >> .vscode/tasks.json
		echo "			}," >> .vscode/tasks.json
		echo "			\"problemMatcher\": [" >> .vscode/tasks.json
		echo "				\"$$\gcc\"" >> .vscode/tasks.json
		echo "			]," >> .vscode/tasks.json
		echo "			\"group\": {" >> .vscode/tasks.json
		echo "				\"kind\": \"build\"," >> .vscode/tasks.json
		echo "				\"isDefault\": true" >> .vscode/tasks.json
		echo "			}," >> .vscode/tasks.json
		echo "			\"detail\": \"Task generated by Debugger.\"" >> .vscode/tasks.json
		echo "		}" >> .vscode/tasks.json
		echo "	]," >> .vscode/tasks.json
		echo "	\"version\": \"2.0.0\"" >> .vscode/tasks.json
		echo "}" >> .vscode/tasks.json
```

