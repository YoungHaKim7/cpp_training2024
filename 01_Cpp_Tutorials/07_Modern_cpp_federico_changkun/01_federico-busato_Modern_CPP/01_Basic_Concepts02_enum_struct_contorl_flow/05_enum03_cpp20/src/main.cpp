#include <iostream>
enum Color { red, green, blue };

int main() {
  Color r = red;
  switch (r) {
  case red:
    std::cout << "red\n";
    break;
  case green:
    std::cout << "green\n";
    break;
  case blue:
    std::cout << "blue\n";
    break;
  }
}
