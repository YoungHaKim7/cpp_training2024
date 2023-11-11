#include <iostream>
#include <string>

struct {
  int myNum;
  std::string myString;
} myStruture;

int main() {
  myStruture.myNum = 1;
  myStruture.myString = "Hello World";

  std::cout << myStruture.myNum << "\n";
  std::cout << myStruture.myString << "\n";
	return 0;
}
