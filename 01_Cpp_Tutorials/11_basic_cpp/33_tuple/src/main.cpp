#include <iostream>
#include <tuple>

// Function returning RGB color as a tuple
std::tuple<int, int, int> getColor()
{
    return {255, 128, 64}; // example RGB values
}

int main()
{
    auto [r, g, b] = getColor();  // structured binding

    std::cout << "color: " << r << ", " << g << ", " << b << "\n";

    return 0;
}
