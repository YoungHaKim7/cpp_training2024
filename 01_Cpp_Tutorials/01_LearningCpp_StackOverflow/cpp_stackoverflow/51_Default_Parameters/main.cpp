#include <iostream>

// defining the default arguments
void display(char = '*', int = 3);

int main() {
  int count = 5;

  std::cout << "No argument passed: ";
  // *, 3 will be parameters
  display();

  std::cout << "First argument passed: ";
  // #, 3 will be parameters
  display('#');

  std::cout << "Both arguments passed: ";
  // $, 5 will be parameters
  display('$', count);

  return 0;
}

void display(char c, int count) {
  for (int i = 1; i <= count; ++i) {
    std::cout << c;
  }
  std::cout << std::endl;
}