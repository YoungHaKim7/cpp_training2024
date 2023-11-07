#include <iostream>

int main() {
	std::cout << "Enter an integer: " ;

	int num{};
	std::cin >> num;

	num = num * 2;

	std::cout << "Double that number is : " << num << std::endl;

	return 0;
}
