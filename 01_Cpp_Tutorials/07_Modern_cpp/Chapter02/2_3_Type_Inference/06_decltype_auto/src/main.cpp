// decltype_1.cpp
// compile with: cl /EHsc decltype_1.cpp

#include <iomanip>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

template <typename T1, typename T2>
auto Plus(T1 &&t1, T2 &&t2)
    -> decltype(std::forward<T1>(t1) + std::forward<T2>(t2)) {
  return std::forward<T1>(t1) + std::forward<T2>(t2);
}

class X {
  friend X operator+(const X &x1, const X &x2) {
    return X(x1.m_data + x2.m_data);
  }

public:
  X(int data) : m_data(data) {}
  int Dump() const { return m_data; }

private:
  int m_data;
};

int main() {
  // Integer
  int i = 4;
  cout << "Plus(i, 9) = " << Plus(i, 9) << endl;

  // Floating point
  float dx = 4.0;
  float dy = 9.5;
  cout << setprecision(3) << "Plus(dx, dy) = " << Plus(dx, dy) << endl;

  // String
  string hello = "Hello, ";
  string world = "world!";
  cout << Plus(hello, world) << endl;

  // Custom type
  X x1(20);
  X x2(22);
  X x3 = Plus(x1, x2);
  cout << "x3.Dump() = " << x3.Dump() << endl;
}