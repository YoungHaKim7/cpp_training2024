#include <iostream>

int main() {
	int age;
	std::string name;

	std::cout << "Please type in your Last name and age, separated by space : " << '\n';

	std::cin >> name >> age;

	std::cout << "Hello " << name << "! You are " << age << " years old." << '\n';
	
	return 0;
}
