#include <iostream>

int main() {
  bool b = (1.1 != 1.1f);
  std::cout << (0.1 + (0.2 + 0.3) == (0.1 + 0.2) + 0.3) << '\n';
  std::cout << "1.1 != 1.1f = "<< b << '\n';
  return 0;
}
