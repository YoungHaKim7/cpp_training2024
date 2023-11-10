#include <iostream>

template <typename T>
T max(T x, T y)
{
	return (x < y) ? y: x;
}

int main() {
	std::cout << max<int>(1,2) << std::endl;
	
	return 0;
}
