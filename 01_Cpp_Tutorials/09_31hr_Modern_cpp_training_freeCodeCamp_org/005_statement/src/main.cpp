#include <iostream>

int addNumbers(int first_param, int second_param) {

	int result = first_param + second_param;
	return result;
}

int main(int argc, char **argv) {
	int first_number = {3}; // Statement
	int second_number = {7};


	std::cout << "First number : " << first_number << '\n';
	std::cout << "Second number : " << second_number << '\n';

	int sum = first_number + second_number;
	std::cout << "Sum : " << sum << '\n';

	sum = addNumbers(25, 7);
	std::cout << "Sum : " << sum << '\n';

	return 0;
}
