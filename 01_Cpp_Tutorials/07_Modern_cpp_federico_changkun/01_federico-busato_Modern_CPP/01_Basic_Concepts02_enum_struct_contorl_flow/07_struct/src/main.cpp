// struct

#include <iostream>

// struct A {
//   int x;
//   char y;
// };

// struct A {
//   int x;
// } a, b;

struct A {
  enum { X, Y };
};

int f() {
  struct A {
    int x;
  } a;
  return a.x;
}

int main() {
  A::X;
  f();
}
