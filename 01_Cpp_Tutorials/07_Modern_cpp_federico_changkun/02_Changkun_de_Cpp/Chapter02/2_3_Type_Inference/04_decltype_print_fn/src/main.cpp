#include <iostream>


template <class T1, class T2>
auto searchMin(T1 x, T2 y) -> decltype(x < y ? x:y)
{
	return (x < y) ? x: y;
}

int main() {

	std::cout << searchMin(5, 4.55) << '\n';
	std::cout << searchMin(6.5, 2) << '\n';

	return 0;
}
