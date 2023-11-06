#ifndef __MERGESORT_H__
#define __MERGESORT_H__

#include <iostream>
using namespace std;

class MergeSort;

class MergeSort
{
    public:

    MergeSort();
    MergeSort(const int* list, int length);
    ~MergeSort();

    friend ostream& operator<< (ostream& os, const MergeSort& ms);

    private:

    int* list;
    int len;
};

ostream& operator<< (ostream& os, const MergeSort& ms);
#endif
