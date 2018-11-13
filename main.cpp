#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <fstream>

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
    clock_t begin, end;
    double time_priority_q, time_quick_select;
    ofstream priority_q, quick_s;
    vector<double> times_priority_q, times_quick_select;
    priority_q.open("priority_q.txt");
    quick_s.open("quick_s.txt");

    cout << "/***********************************" << endl;
    cout << "* TEST 1" << endl;
    cout << "***********************************/" << endl;

    vector<int> list = { 150, 80, 40, 30, 10, 70, 110, 100, 20, 90, 60, 50, 120, 140, 130 };
    cout << "List: ";
    for (unsigned i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl; cout << endl;
    cout << "Priority queue" << endl;
    Priority_Queue *q = new Priority_Queue(list) ;
    q->print_queue();
    cout << endl;

    cout << "Quick select" << endl;
    Quick_Select *qs = new Quick_Select(list, 1);
    qs->print();
    cout << endl;
    list.clear();
    delete q;
    delete qs;

    cout << "/***********************************" << endl;
    cout << "* TEST 2" << endl;
    cout << "***********************************/" << endl;
    cout << "Generated random list" << endl;
    list = random_list( 25 );
    cout << "List: ";
    for (unsigned i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl; cout << endl;
    cout << "Priority queue" << endl;
    q = new Priority_Queue(list);
    q->print_queue();
    cout << endl;
    cout << "Quick select" << endl;
    qs = new Quick_Select(list, 1);
    qs->print();
    cout << endl;
    list.clear();
    delete q;
    delete qs;

    cout << "/***********************************" << endl;
    cout << "* TEST 3" << endl;
    cout << "* The test is done 1000 times." << endl;
    cout << "***********************************/" << endl;
    list = random_list( 1000 );
    cout << "Number of elements: " << list.size() << endl;
    for (int i = 0; i < 10; i++) {
        begin = clock();
        q = new Priority_Queue(list);
        end = clock();
        time_priority_q = double( end-begin ) / CLOCKS_PER_SEC;
        times_priority_q.push_back( time_priority_q );
        begin = clock();
        qs = new Quick_Select(list, 1);
        end = clock();
        time_quick_select = double( end-begin ) / CLOCKS_PER_SEC;
        times_quick_select.push_back( time_quick_select );
        delete q;
        delete qs;
    }
    list.clear();
    cout << "Priority Queue times: ";
    for (unsigned i = 0; i < times_priority_q.size(); i++) {
        cout << times_priority_q[i] << " ";
        priority_q << times_priority_q[i] << " ";
    }
    priority_q << "\n";
    cout << endl;
    cout << "Quick Select times: ";
    for (unsigned i = 0; i < times_quick_select.size(); i++) {
        cout << times_quick_select[i] << " ";
        quick_s << times_quick_select[i] << " ";
    }
    quick_s << "\n";
    times_priority_q.clear();
    times_quick_select.clear();
    cout << endl;

    cout << "/***********************************" << endl;
    cout << "* TEST 4" << endl;
    cout << "* The test is done 2500 times." << endl;
    cout << "***********************************/" << endl;
    list = random_list( 2500 );
    cout << "Number of elements: " << list.size() << endl;
    for (int i = 0; i < 10; i++) {
        begin = clock();
        q = new Priority_Queue(list);
        end = clock();
        time_priority_q = double( end-begin ) / CLOCKS_PER_SEC;
        times_priority_q.push_back( time_priority_q );
        begin = clock();
        qs = new Quick_Select(list, 1);
        end = clock();
        time_quick_select = double( end-begin ) / CLOCKS_PER_SEC;
        times_quick_select.push_back( time_quick_select );
        delete q;
        delete qs;
    }
    list.clear();
    cout << "Priority Queue times: ";
    for (unsigned i = 0; i < times_priority_q.size(); i++) {
        cout << times_priority_q[i] << " ";
        priority_q << times_priority_q[i] << " ";
    }
    priority_q << "\n";
    cout << endl;
    cout << "Quick Select times: ";
    for (unsigned i = 0; i < times_quick_select.size(); i++) {
        cout << times_quick_select[i] << " ";
        quick_s << times_quick_select[i] << " ";
    }
    quick_s << "\n";
    times_priority_q.clear();
    times_quick_select.clear();
    cout << endl;

    cout << "/***********************************" << endl;
    cout << "* TEST 5" << endl;
    cout << "* Random list with 5000 elements." << endl;
    cout << "* The test is done 10 times." << endl;
    cout << "***********************************/" << endl;
    list = random_list( 5000 );
    for (int i = 0; i < 10; i++) {
        begin = clock();
        q = new Priority_Queue(list);
        end = clock();
        time_priority_q = double( end-begin ) / CLOCKS_PER_SEC;
        times_priority_q.push_back( time_priority_q );
        begin = clock();
        qs = new Quick_Select(list, 1);
        end = clock();
        time_quick_select = double( end-begin ) / CLOCKS_PER_SEC;
        times_quick_select.push_back( time_quick_select );
        delete q;
        delete qs;
    }
    list.clear();
    cout << "Priority Queue times: ";
    for (unsigned i = 0; i < times_priority_q.size(); i++) {
        cout << times_priority_q[i] << " ";
        priority_q << times_priority_q[i] << " ";
    }
    priority_q << "\n";
    cout << endl;
    cout << "Quick Select times: ";
    for (unsigned i = 0; i < times_quick_select.size(); i++) {
        cout << times_quick_select[i] << " ";
        quick_s << times_quick_select[i] << " ";
    }
    quick_s << "\n";
    times_priority_q.clear();
    times_quick_select.clear();
    cout << endl;

    cout << "/***********************************" << endl;
    cout << "* TEST 6" << endl;
    cout << "* Random list with 7500 elements." << endl;
    cout << "* The test is done 10 times." << endl;
    cout << "***********************************/" << endl;
    list = random_list( 7500 );
    for (int i = 0; i < 10; i++) {
        begin = clock();
        q = new Priority_Queue(list);
        end = clock();
        time_priority_q = double( end-begin ) / CLOCKS_PER_SEC;
        times_priority_q.push_back( time_priority_q );
        begin = clock();
        qs = new Quick_Select(list, 1);
        end = clock();
        time_quick_select = double( end-begin ) / CLOCKS_PER_SEC;
        times_quick_select.push_back( time_quick_select );
        delete q;
        delete qs;
    }
    list.clear();
    cout << "Priority Queue times: ";
    for (unsigned i = 0; i < times_priority_q.size(); i++) {
        cout << times_priority_q[i] << " ";
        priority_q << times_priority_q[i] << " ";
    }
    priority_q << "\n";
    cout << endl;
    cout << "Quick Select times: ";
    for (unsigned i = 0; i < times_quick_select.size(); i++) {
        cout << times_quick_select[i] << " ";
        quick_s << times_quick_select[i] << " ";
    }
    quick_s << "\n";
    times_priority_q.clear();
    times_quick_select.clear();
    cout << endl;

    cout << "/***********************************" << endl;
    cout << "* TEST 7" << endl;
    cout << "* Random list with 10000 elements." << endl;
    cout << "* The test is done 10 times." << endl;
    cout << "***********************************/" << endl;
    list = random_list( 10000 );
    for (int i = 0; i < 10; i++) {
        begin = clock();
        q = new Priority_Queue(list);
        end = clock();
        time_priority_q = double( end-begin ) / CLOCKS_PER_SEC;
        times_priority_q.push_back( time_priority_q );
        begin = clock();
        qs = new Quick_Select(list, 1);
        end = clock();
        time_quick_select = double( end-begin ) / CLOCKS_PER_SEC;
        times_quick_select.push_back( time_quick_select );
        delete q;
        delete qs;
    }
    list.clear();
    cout << "Priority Queue times: ";
    for (unsigned i = 0; i < times_priority_q.size(); i++) {
        cout << times_priority_q[i] << " ";
        priority_q << times_priority_q[i] << " ";
    }
    priority_q << "\n";
    cout << endl;
    cout << "Quick Select times: ";
    for (unsigned i = 0; i < times_quick_select.size(); i++) {
        cout << times_quick_select[i] << " ";
        quick_s << times_quick_select[i] << " ";
    }
    quick_s << "\n";
    quick_s.close();
    times_priority_q.clear();
    times_quick_select.clear();
    cout << endl;

    priority_q.close();
    quick_s.close();

    return 0;
}
