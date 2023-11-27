#include <iostream>

int main() {
	int age;
	std::string full_name;

	std::cout << "Please type in your full name: " << '\n';
	std::getline(std::cin,full_name);

	std::cout << "Type in your age : " << '\n';
	std::cin >> age;
	std::cout << "Hello " << full_name << "! You are " << age << " years old. " << '\n';

	
	return 0;
}
