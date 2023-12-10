#include <iostream>

int main() {
  bool flag = true;
  int N = 0;
  int M = 0;
  for (int i = 0; i < N && flag; i++) {
    for (int j = 0; j < M && flag; j++) {
      if (i < 10) {
        flag = false;
        goto LABEL;
      }
    }
  }

LABEL: //* Something * // ;
}
