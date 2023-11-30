#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<int[]> ptr(new int[10]);
  for(int i = 0; i < 10; i +=1) {
    ptr[i] = i * i;
  }
  std::cout << ptr[4] << '\n';
  std::cout << ptr[7] << '\n';

  return 0;
}
