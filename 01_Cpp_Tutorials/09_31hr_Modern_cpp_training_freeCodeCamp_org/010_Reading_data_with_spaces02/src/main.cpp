#include <iostream>

int main() {
	std::string full_name;
	int age3;

	std::cout << "Please type in your full name: " << '\n';
	std::getline(std::cin,full_name);


	std::cout << "Type in your age : " << '\n';
	std::cin >> age3;

	std::cout << "Hello " << full_name
					<< " you are " << age3 << " years old! " << '\n';
	return 0;
}
