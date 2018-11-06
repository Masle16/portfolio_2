#include <iostream>
#include <vector>

#include "Priority_Queue.h"
#include "Quick_Select.h"

using namespace std;

int main()
{
    vector<int> v = { 150, 80, 40, 30, 10, 70, 110, 100, 20, 90, 60, 50, 120, 140, 130 };

    Priority_Queue q(v);
    q.print_queue();
    cout << q.delete_min() << endl;
    q.print_queue();

    Quick_Select qs(v, 1);
    qs.print();

    return 0;
}
