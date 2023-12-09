#include <iostream>
#include <limits.h>
// #include <limits>

void f(int *ptr, int pos) {
  pos++;
  if (pos < 0)
    return;
  ptr[pos] = 0;
}

int main() {
  int tmp[10];
  f(tmp, INT_MAX);
}
