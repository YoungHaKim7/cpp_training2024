#include <iostream>

enum Color { BLACK, BLUE, GREEN, RED };
enum Fruit { APPLE, CHERRY };

int main() {
  // Color_t color = BLUE;
  Color color = BLACK;
  Fruit fruit = APPLE;
  // bool b = (color == fruit);
  // std::cout << (color == BLACK) << '\n';
  int a3 = (int)Color::GREEN;
  std::cout << a3 << '\n';
  std::cout << (Color::RED < Color::GREEN) << '\n';
  return 0;
}
