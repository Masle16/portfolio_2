#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include <iostream>
#include <vector>

using namespace std;

class Priority_Queue
{
public:
    Priority_Queue();
    Priority_Queue(vector<int> v);
    ~Priority_Queue();

    void print_queue();
    int delete_min();

private:
    vector<int> p_queue = { -1 };
    vector<int> list;
    void build_heap();
    void percolate_down(int node);
    void make_list();
};

#endif // PRIORITY_QUEUE_H
