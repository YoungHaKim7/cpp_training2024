#include <cstdint>
#include <iostream>

int main() {
  // Promotion
  int16_t x = -1;
  int y = x;
  std::cout << "\nPromotion : " << y; // print -1

  // Truncation
  int a = 65537;                              // 2^16 + 1
  int16_t b = a;                              // x % 2^16
  std::cout << "\nTruncation :" << b << '\n'; // print 1

  int d = 32769; // 2^15 + 1 (does not fit in a int16_t)
  int16_t e = d; // (int16_t) (x % 2^16 = 32769)
  std::cout << "\nTruncation (32,769) :" << e << '\n'; // print -32,767

  return 0;
}
