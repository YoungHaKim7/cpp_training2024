#include <iostream>

template<typename R, typename T, typename U>
R add(T x, U y) {
	return x+y;
}

template<typename T, typename U>
auto add2(T x, U y) -> decltype(x+y) {
	return x+y;
}

template<typename T, typename U>
auto add3(T x, U y){
	return x+y;
}



int main() {
	auto x = 1;
	auto y = 2;
	decltype(x+y) z;

	// after c++11
	auto w = add2<int, double>(1,2.0);
	if (std::is_same<decltype(w), double>::value) {
		std::cout << "(c++11) w is double: "<< w << '\n'; 
	}

	// after c++14
	auto q = add3<double, int>(1.0, 4);
	std::cout << "(c++14) q: " << q << '\n';

	std::cout << w << '\n';
	return 0;
}
