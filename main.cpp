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

int priority_q_data( int l ) {
    int result;
    vector<int> list = random_list( l );
    Priority_Queue q( list );
    result = q.get_counter();
    return result;
}

int quick_s_data( int l ) {
    int result;
    vector<int> list = random_list( l );
    Quick_Select qs( list, 1 );
    result = qs.get_counter();
    return result;
}

int main() {
    ofstream priority_q;
    priority_q.open("priority_q.txt");
    for ( int i = 0; i <= 10000; i++ )
        priority_q << priority_q_data( i ) << " ";
    priority_q.close();

    ofstream quick_s;
    quick_s.open("quick_s.txt");
    for ( int i = 0; i <= 10000; i++ )
        quick_s << quick_s_data( i ) << " ";
    quick_s.close();

    return 0;
}
