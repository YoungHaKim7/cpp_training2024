#include <iostream>

int main() {
  int count = 10;
  int &countRef = count;
  auto myAuto = countRef;

  countRef = 11;
  std::cout << count << " ";

  myAuto = 12;
  std::cout << count << "\n";
  return 0;
}
