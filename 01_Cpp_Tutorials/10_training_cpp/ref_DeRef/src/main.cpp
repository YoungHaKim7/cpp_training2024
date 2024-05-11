#include <string>
#include <iostream>

class B
{
    int &x;

public:
    B(int &a) : x{a} {}
    void print()
    {
        std::cout << x << "\n";
    }
};

int main()
{

    int *ptr = new int;

    int val = 10;
    ptr = &val;

    B b(*ptr);
    val = 12;
    b.print();

    return 0;
}
