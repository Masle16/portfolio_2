#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include <iostream>
#include <vector>

using namespace std;

class priority_queue
{
public:
    priority_queue();
    priority_queue(vector<int> v);
    ~priority_queue();

    void print_queue();
    int delete_min();

private:
    vector<int> p_queue = { -1 };

    void build_heap();
    void percolate_down(int node);
};

#endif // PRIORITY_QUEUE_H
