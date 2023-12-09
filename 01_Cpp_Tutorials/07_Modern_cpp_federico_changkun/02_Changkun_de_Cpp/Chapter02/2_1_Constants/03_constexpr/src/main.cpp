#include <iostream>
#define LEN 10

int len_foo() {
	int i = 2;
	return i;
}

constexpr int len_foo_constexpr() {
	return 5;
}

constexpr int fibonacii(const int n) {
	return n == 1 || n == 2 ? 1 : fibonacii(n-1) + fibonacii(n-2);
}

int main() {
	char arr_1[10]; // legal
	char arr_2[LEN];

	int len = 10;
	// char arr_3[len];

	const int len_2 = len + 1;
	constexpr int len_2_consexpr = 1 + 2 + 3;
	// char arr_4[len_2];
	char arr_4[len_2_consexpr];

	char arr_6[len_foo_constexpr() + 1];

	std::cout << fibonacii(10) << '\n';

	return 0;
}
