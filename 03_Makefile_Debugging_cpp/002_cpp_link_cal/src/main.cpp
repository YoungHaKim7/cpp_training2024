#include <iostream>
#include "header/Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator Console Application" << "\n";
    std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
         << "\n";

    Calculator c;
    while (true)
    {
        std::cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        std::cout << "Result " << "of " << x << oper << y << " is: " << result << "\n";
    }

    return 0;
}