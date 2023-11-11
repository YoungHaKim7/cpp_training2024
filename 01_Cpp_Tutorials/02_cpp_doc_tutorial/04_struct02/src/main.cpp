#include <iostream>    

struct Person
{
	int citizenship;
	int age;
};

int main(void) {
	struct Person p;
	p.citizenship = 1;
	p.age = 27;
	std::cout << "Person citizenship: " << p.citizenship << "\n";
	std::cout << "Person age: " << p.age << "\n";

	return 0;
}
