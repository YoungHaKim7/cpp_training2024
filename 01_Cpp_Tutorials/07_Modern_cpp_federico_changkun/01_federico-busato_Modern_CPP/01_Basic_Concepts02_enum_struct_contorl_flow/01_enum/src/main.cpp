#include <iostream>

enum Color_t { BLACK, BLUE, GREENT };
enum Fruit_t { APPLE, CHERRY };

int main() {
  // Color_t color = BLUE;
  Color_t color = BLACK;
  Fruit_t fruit = APPLE;
  bool b = (color == fruit);
  std::cout << (color == BLACK) << '\n';
  std::cout << b << '\n';
  return 0;
}
