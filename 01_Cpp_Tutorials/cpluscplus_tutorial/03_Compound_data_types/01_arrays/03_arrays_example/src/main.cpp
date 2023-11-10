#include <iostream>

int main() {
  int a = 0;
  int b = 0;

  int foo[5];
  foo[2] = 75;
  foo[0] = a;
  b = foo[a + 2];
  foo[foo[a]] = foo[2] + 5;

  std::cout << foo << std::endl;
  std::cout << foo[2] << std::endl;
  std::cout << foo[4] << std::endl;
  std::cout << b << std::endl;
  std::cout << foo[foo[a]] << std::endl;

  return 0;
}
