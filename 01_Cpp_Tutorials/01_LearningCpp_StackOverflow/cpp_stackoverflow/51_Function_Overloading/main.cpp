#include <iostream>

int add2(int i) {
  int j = i + 2;
  return j;
}

int add2(int i, int j) {
  int k = i + j + 2;
  return k;
}

int main() {

  std::cout << add2(2) << "\n";
  std::cout << add2(1, 3) << "\n";
  std::cout << add2(5, 7) << "\n";
  std::cout << add2(9) << "\n";

  return 0;
}