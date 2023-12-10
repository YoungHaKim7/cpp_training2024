#include <iostream>

// C++11 enum/enum class allows to set the underlying type
enum class Color : int8_t { RED, GREEN, BLUE };

// C++17 enum class supports direct-list-initialization
enum class Color_cpp17 { RED, GREEN, BLUE };

int main() {
  std::cout << (Color::RED < Color::GREEN) << '\n';

  Color_cpp17 a{2};
  // std::cout << a << '\n';

  return 0;
}
