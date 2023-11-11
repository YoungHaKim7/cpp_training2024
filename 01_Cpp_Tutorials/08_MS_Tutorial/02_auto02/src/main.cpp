#include <initializer_list>
#include <iostream>

int main() {
  auto A = {1, 2};

  auto B = {3};

  auto C = {4};

  // C3535: cannot deduce type for 'auto' from initializer list'
  // auto D = {5, 6.7};

  auto E = {8, 9};
  return 0;
}
