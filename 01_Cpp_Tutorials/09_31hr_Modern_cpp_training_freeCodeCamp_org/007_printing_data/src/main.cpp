#include <iostream>

int main(int argc, char **argv) {
	std::cout << " Hello world in C++20!" << '\n';

	std::cout << "The number is : " << 12 << '\n';

	int age {21};
	std::cout << "The age is : " << age << '\n';

	// Error
	std::cerr << "std::cerr output : Something went wrong" << '\n';

	// Log message
	std::clog << "std::clog output : This is a log message" << '\n';

	return 0;
}
