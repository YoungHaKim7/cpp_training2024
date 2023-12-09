#include <iostream>

int add(auto x, auto y) {
	return x+y;
}

int main() {
	auto i =5; // i as it
	auto arr = new auto(10); // arr as int *
	auto j = 6;
	std::cout << add(i,j) << '\n';

	// illegal, can't infer array type
	// auto auto_arr2[10] = {arr};

	int arr2[10] = {*arr};
	std::cout << arr2 << '\n';

	for (int i = 0; i < 10; ++i) {
    std::cout << arr2[i] << " ";
  }
	std::cout << '\n';

	return 0;
}
