#include <iostream>
#include <ostream>

int main() {
	std::cout << 2 + 3 << '\n';

	int x{6};
	int y{x-2};
	std::cout << y << std::endl;

	int z{};
	z = x;
	std::cout << z - y << std::endl;

	return 0;
}
