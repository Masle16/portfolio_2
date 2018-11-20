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
    ~Quick_Select();

    void restart_counter();
    int get_counter();

    void print();

private:
    vector<int> table;
    int counter = 0;

    void quick_select(vector<int> &v, int left, int right, int k);
    void insertion_sort(vector<int> &v);
    int median3(vector<int> v, int left, int right);
};

#endif // QUICK_SELECT_H
