#include <iostream>

enum MyEnum { A, B, C };

int main() {
  MyEnum x;
  int y = 0;
  switch (x) {
  case MyEnum::A: // fallthrough
  case MyEnum::B: // fallthrough
  case MyEnum::C:
    return 0;
  default:
    return -1;
  }
}
