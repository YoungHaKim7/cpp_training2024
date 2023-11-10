#include <iostream>
#include <string>

int main() {
  char question1[] = "What is your name?";
  std::string question2 = "Where do you live?";
  char answer1[80];
  std::string answer2;
  std::cout << question1 << std::endl;
  std::cin >> answer1;
  std::cout << question2 << std::endl;
  std::cin >> answer2;
  std::cout << "Hello ! \n" << answer1;
  std::cout << " from " << answer2 << "!\n";

  return 0;
}
