#include <iostream>

int f() { 4; };

int main() {
  // C++17
  int x = 2;
  int y = 3;
  if (int ret = x + y; ret < 10)
    std::cout << ret << '\n';
  std::cout << '\n';

  // 17 switch
  switch (auto i = f(); x) {
  case 1:
    return i + x;
  }
  std::cout << '\n';

  // C++20
  for (int i = 0; auto x : {'A', 'B', 'C'})
    std::cout << i++ << ":" << x;
}
