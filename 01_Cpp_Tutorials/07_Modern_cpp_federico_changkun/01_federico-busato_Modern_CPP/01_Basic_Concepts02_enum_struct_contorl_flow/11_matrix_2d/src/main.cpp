//
#include <iostream>
#include <vector>

int main() {
  int matrix[2][4];
  for (auto &row : matrix) {
    for (auto element : row)
      std::cout << "@";
    std::cout << '\n';
  }
  std::cout << '\n';
}
