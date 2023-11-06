// main.cpp
// g++ -std=c++17 main.cpp -o main

#include <iostream>

// Note the '\' allos us to use multiple lines
#define PRINT(x, line, file)                                                   \
  std::cout << file << ":" << line << ": ";                                    \
  std::cout << "Value is : " << (x) << "\n";

int main() {

  float PI = 3.1415;

  PRINT(PI, __LINE__, __FILE__)

  return 0;
}
