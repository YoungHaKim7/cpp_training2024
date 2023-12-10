#include <iostream>

int main() {
  int x = 1;
  switch (1) {
  case 0:
    int x;
  case 1:
    std::cout << x;
    break;
    [[fallthrough]];
  case 2: {
    int y;
    std::cout << "int y";
  }
  default:

    break;
  }
}
