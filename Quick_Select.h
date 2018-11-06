#ifndef QUICK_SELECT_H
#define QUICK_SELECT_H

#include <iostream>
#include <vector>

using namespace std;

class Quick_Select
{
public:
    Quick_Select();
    Quick_Select(vector<int> v, int k);

    void print();

private:
    vector<int> table;

    void quick_select(vector<int> &v, int left, int right, int k);
    void insertion_sort(vector<int> &v);
    int median3(vector<int> v);
};

#endif // QUICK_SELECT_H
