#include <iostream>

struct A {
  int x;
  int y;
};

int main() {
  A array[] = {{1, 2}, {5, 6}, {7, 1}};
  for (auto [x1, y1] : array)
    std::cout << x1 << ","
              << " " << '\n';
  std::cout << '\n';
}
