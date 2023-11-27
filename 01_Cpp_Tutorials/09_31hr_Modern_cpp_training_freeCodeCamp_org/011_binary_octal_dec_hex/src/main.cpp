#include <iostream>

int main() {
	int number1 = 15; // Decimal
	int number2 = 017; // Octal
	int number3 = 0x0f; // Hexadecimal
	int number4 = 0b00001111; // Binary - C++14

	std::cout << "Hello World!" << '\n';
	std::cout << "Number1 is : " << number1 << '\n';
	std::cout << "Number2 is : " << number2 << '\n';
	std::cout << "Number3 is : " << number3 << '\n';
	std::cout << "Number4 is : " << number4 << '\n';
	return 0;
}
