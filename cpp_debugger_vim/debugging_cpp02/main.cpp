#include <math.h>
#include <iostream>
#include "vector.h"

int main() {
    std::cout << "Hello World \n";

    Vector myVector(1, 2.6, 3.1, 4.5);
    Vector myVector2(10, 2.6, 3.1, 4.5);

    std::cout << myVector.get_length();

    return getchar();
}
