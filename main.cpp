#include <iostream>
#include <vector>

#include "priority_queue.h"

using namespace std;

int main()
{
    vector<int> v = { 150, 80, 40, 30, 10, 70, 110, 100, 20, 90, 60, 50, 120, 140, 130 };
    priority_queue q(v);
    q.print_queue();
    cout << q.delete_min() << endl;
    q.print_queue();

    return 0;
}
