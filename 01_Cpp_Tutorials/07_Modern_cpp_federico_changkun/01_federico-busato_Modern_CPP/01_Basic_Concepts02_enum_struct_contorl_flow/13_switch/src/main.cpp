#include <iostream>

int main() {
  char x = 'a';
  char y = 'b';
  switch (x) {
  case 'a':
    y = 1;
    std::cout << "char x = y";
    break;
  default:
    return -1;
  }
  std::cout << '\n';
}
