#include <iostream>
#include <thread>

using namespace std;

void threadFn(int value) {
  cout << "I am inside a thread function" << endl;
  cout << "Value => " << value++ << endl;
}

int main() {
  int localvalue = 100;
  thread t1{threadFn, localvalue};

  t1.join();
  cout << "Value in Main Thread => " << localvalue << endl;
  return 0;
}
