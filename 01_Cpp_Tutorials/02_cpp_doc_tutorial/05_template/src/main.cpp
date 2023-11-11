#include <iostream>    

template <typename T>
T myMax(T x, T y)
{
  return (x > y)? x: y;
}

int main(void) {
	std::cout << myMax<int>(3,7) << "\n";
	std::cout << myMax<char>('g', 'e') << "\n";

	return 0;
}
