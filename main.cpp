#include <iostream>
#include <vector>
#include <math.h>

#include "Priority_Queue.h"
#include "Quick_Select.h"

using namespace std;

vector<int> random_list( int length ) {
    vector<int> list;
    srand( time( NULL ) );
    for ( int i = 0; i < length; i++) {
        list.push_back( (rand() % 100) + 1 );
    }
    return list;
}

int main() {
//    cout << "TEST 1" << endl;
//    vector<int> list1 = { 150, 80, 40, 30, 10, 70, 110, 100, 20, 90, 60, 50, 120, 140, 130 };
//    cout << "List: ";
//    for (unsigned i = 0; i < list1.size(); i++) {
//        cout << list1[i] << " ";
//    }
//    cout << endl; cout << endl;
//    cout << "Priority queue" << endl;
//    Priority_Queue q1(list1);
//    q1.print_queue();
//    cout << "Smallest element: " << q1.delete_min() << endl;
//    q1.print_queue();
//    cout << endl;

//    cout << "Quick select" << endl;
//    Quick_Select qs1(list1, 1);
//    qs1.print();
//    cout << endl;

    cout << "TEST 2" << endl;
    cout << "Generated random list" << endl;
    vector<int> list2 = random_list( 10 );
    cout << "List: ";
    for (unsigned i = 0; i < list2.size(); i++) {
        cout << list2[i] << " ";
    }
    cout << endl; cout << endl;
    cout << "Priority queue" << endl;
    Priority_Queue q2(list2);
    q2.print_queue();
    cout << "Smallest element: " << q2.delete_min() << endl;
    q2.print_queue();
    cout << endl;

    cout << "Quick select" << endl;
    Quick_Select qs2(list2, 1);
    qs2.print();

    return 0;
}
