#include <iostream>


int main() {
	// decltype(expression);
	auto x = 1;
	auto y = 2;
	decltype(x+y) z;

	if (std::is_same<decltype(x), int>::value)
		std::cout << "type x == int" << '\n';
	if (std::is_same<decltype(x), float>::value)
		std::cout << "type x == float" << '\n';
	if (std::is_same<decltype(x), decltype(z)>::value)
		std::cout << "type z == type x" << '\n';

	return 0;
}
