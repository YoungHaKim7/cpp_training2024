#include <iostream>

bool my_function(int M, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (i < 10) {
        return false;
      }
    }
  }
  return true;
}

int main() { my_function(3, 5); }
