#include <array>
#include <iostream>

int f(int a, unsigned b, int *array) {
  if (a > b)
    return array[a - b];
  return 0;
}

int main() {
  // Segmentation fault!
  unsigned a = 10;
  int b = -1;
  // std::array[10ull + a * b] = 0;

  std::cout << "unsigned a" << b << '\n';

  return 0;
}
