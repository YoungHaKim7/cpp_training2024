#include <iostream>

int five(){
	return 5;
}

int main() {
	int a{2};
	int b{2+3};
	int c{(2*3)+4};
	int d{b};

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	return 0;
}
