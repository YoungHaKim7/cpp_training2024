#include <iostream>


int main(int argc, char **argv) {
	int first_number = {3}; // Statement
	int second_number = {7};


	std::cout << "First number : " << first_number << '\n';
	std::cout << "Second number : " << second_number << '\n';

	int sum = first_number + second_number;
	std::cout << "Sum : " << sum << '\n';

	return 0;
}
