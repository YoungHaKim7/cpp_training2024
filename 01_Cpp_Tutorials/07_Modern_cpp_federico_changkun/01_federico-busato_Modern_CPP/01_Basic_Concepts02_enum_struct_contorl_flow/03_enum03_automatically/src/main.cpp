#include <iostream>

enum Color { RED, GREEN = -1, BLUE, BLACK };
//            0     -1          0     1

enum class Device { PC = 0, COMPUTER = 0, PRINTER };

int main() {
  std::cout << (Color::RED == Color::BLUE) << '\n';
  std::cout << (Device::PC == Device::COMPUTER) << '\n';

  return 0;
}
