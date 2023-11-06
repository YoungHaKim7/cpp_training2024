#include <iostream>
#include "MergeSort.h"

MergeSort::MergeSort()
{
    list = new int[1];
    list[0] = 0;
    len = 0;
}

MergeSort::MergeSort (const int* t, int length)
{
    if (t) {
        len = length;
        list = new int[len];
        for (int i = 0; i < length; i++)
            list[i] = t[i];
    }
    else {
        list = new int[1];
        list[0] = 0;
        len = 0;
    }
}

MergeSort::~MergeSort()
{
    delete[] list;
}

ostream& operator<<(ostream& os, const MergeSort& ms)
{
    for (int i = 0; i < ms.len; i++)
        os << ms.list[i];
    return os;
}


int
main()
{
    int list[] = {1,2,3,4};
    int list_len = sizeof(list)/sizeof(int);
    MergeSort ms = MergeSort(list, list_len);
    std::cout << ms << std::endl;
    std::cout << "hello world" << std::endl;
}
