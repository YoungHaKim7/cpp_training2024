# Result

```

$ g++ -c -std=c++2b -pedantic -pthread -pedantic-errors -Wall -Wextra -ggdb ./src/main.cpp
mv *.o ./target/
$ g++ ./target/*.o -o ./target/main
./target/main


 Hello world in C++20!
The number is : 12
The age is : 21
std::cerr output : Something went wrong
std::clog output : This is a log message

```
