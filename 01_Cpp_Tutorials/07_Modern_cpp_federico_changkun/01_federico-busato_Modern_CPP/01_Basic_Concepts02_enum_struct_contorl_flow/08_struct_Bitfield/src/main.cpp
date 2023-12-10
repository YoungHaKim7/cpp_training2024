// A bitfield

#include <iostream>

struct S1 {
  int b1 : 10; // range [0, 1023]
  int b2 : 10; // range [0, 1023]
  int b3 : 8;  // range [0, 255]
};             // sizeof(S1) : 4 bytes

struct S2 {
  int b1 : 10;
  int : 0;    // reset: force the next field
  int b3 : 8; //       to start at bit 32
};            // sizeof(S2) : 8 bytes

int main() {}
