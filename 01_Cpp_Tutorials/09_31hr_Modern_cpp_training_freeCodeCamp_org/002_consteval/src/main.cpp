#include <iostream>

consteval int get_value() {
	return 3;
}

int main() {
	constexpr int value = get_value();
	std::cout<< "value: " << value << '\n';
	std::cout<< "Hello there" << '\n';
	return 0;
}
