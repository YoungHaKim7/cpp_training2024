// Union

#include <iostream>

union A {
  int x;
  char y;
}; // sizeof(A): 4

int main() {
  A a;
  a.x = 1023;               // bits : 00..00 0011 1111 1111
  a.y = 0;                  // bits : 00..00 0011 0000 0000
  std::cout << a.x << '\n'; // print 512 + 256 = 768
}
