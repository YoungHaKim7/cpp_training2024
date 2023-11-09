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

echo "vscode:\xa\x09\x09rm -rf mkdir\xa\x09\x09mkdir .vscode" >> Makefile && 
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
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"tasks\\\",\x22 >> .vscode/launch.json" >> Makefile &&
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
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"problemMatcher\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
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

echo "vscode:\xa\x09\x09rm -rf mkdir\xa\x09\x09mkdir .vscode" >> Makefile && 
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
echo "\x09\x09echo \x22\x09\x09\x09\\\"request\\\": \\\"tasks\\\",\x22 >> .vscode/launch.json" >> Makefile &&
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
echo "\x09\x09echo \x22\x09\x09\x09\x09\\\"problemMatcher\\\": [\x22 >> .vscode/tasks.json" >> Makefile &&
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
