#include "Priority_Queue.h"

Priority_Queue::Priority_Queue() { }

Priority_Queue::Priority_Queue(vector<int> v) {
    for (unsigned i = 0; i < v.size(); i++) {
        p_queue.push_back(v[i]);
    }
    build_heap();
}

void Priority_Queue::print_queue() {
    for (unsigned i = 1; i < p_queue.size(); i++) {
        cout << p_queue[i] << " ";
    }
    cout << endl;
}

int Priority_Queue::delete_min() {
    int result = p_queue[1];
    p_queue[1] = p_queue[ p_queue.size()-1 ];
    percolate_down(1);
    p_queue.pop_back();
    return result;
}

void Priority_Queue::build_heap() {
    for (unsigned i = (p_queue.size()-1)/2; i > 0 ; i--) {
        percolate_down(i);
    }
}

void Priority_Queue::percolate_down(int node) {
    int child;
    int temp = p_queue[node];

    for ( ; node * 2 <= (int)p_queue.size()-1; node = child) {
        child = node * 2;

        if ( ( child!=(int)p_queue.size() ) && ( p_queue[child+1]<p_queue[child] ) ) {
            ++child;
        }

        if ( p_queue[child] < temp ) {
            p_queue[node] = p_queue[child];
        }
        else {
            break;
        }
    }

    p_queue[node] = temp;
}
