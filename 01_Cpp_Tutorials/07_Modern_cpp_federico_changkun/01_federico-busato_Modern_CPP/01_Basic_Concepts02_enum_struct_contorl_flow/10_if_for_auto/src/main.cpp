//
#include <iostream>
#include <vector>

int main() {
  std::vector vec{1, 2, 3, 4};
  for (auto x : vec) {
    std::cout << x << ", ";
  }
  std::cout << '\n';
}
