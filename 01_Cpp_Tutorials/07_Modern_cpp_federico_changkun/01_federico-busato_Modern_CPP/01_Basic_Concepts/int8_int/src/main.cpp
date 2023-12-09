#include <cstdint>
#include <iostream>

int main() {
  int8_t var;
  std::cout << "input int No(ASCII Table No.). : " << '\n';
  std::cin >> var; // read '2'
  std::cout << var;
  int a = var * 2;
  std::cout << "int8_t print (x2) : " << a << '\n';
  std::cout << "int8_t print (x) : " << a / 2 << '\n';
  std::cout << "Hello C++ " << std::endl;
  return 0;
}
