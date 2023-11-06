#include <iostream>

consteval int get_value() {
    return 3;

}

int main() {
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    std::cout << "Hello there" << std::endl;
    return 0;


}
