#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 5 == 0) {
      continue;
    }

    sum += i;
  }

  cout << "The sum is " << sum << endl;

  return 0;
}