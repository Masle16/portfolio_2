#include "Quick_Select.h"

// PUBLIC

Quick_Select::Quick_Select() {}

Quick_Select::Quick_Select(vector<int> v, int k) {
    table = v;
    quick_select(table, 0, table.size()-1, k);
}

void Quick_Select::print() {
    for (unsigned i = 0; i < table.size(); i++) {
        cout << table[i] << " ";
    }
    cout << endl;
}

// PRIVATE
void Quick_Select::quick_select(vector<int> &v, int left, int right, int k) {
    if (left + 10 <= right ) {
        int pivot = median3(v);

        int i = left; int j = right;
        while (true) {
            while( v[++i] < pivot ) {}
            while( pivot < v[--j] ) {}

            if ( i<j ) {
                swap( v[i], v[j] );
            }
            else {
                break;
            }
        }

        swap( v[i], v[ right-1 ] );

        if ( k<=i ) {
            quick_select(v, left, i-1, k);
        }
        else if ( k>i+1 ) {
            quick_select(v, i+1, right, k);
        }
    }
    else {
        insertion_sort(v);
    }
}

void Quick_Select::insertion_sort(vector<int> &v) {
    for (unsigned i = 1; i < v.size(); ++i) {
        int tmp = v[i];

        int j;
        for ( j = i; j > 0 && tmp < v[j-1]; --j) {
            v[j] = v[j-1];
        }

        v[j] = tmp;
    }
}

int Quick_Select::median3(vector<int> v) {
    int middle = v[ v.size()/2 ];
    int left = v[ 0 ];
    int right = v[ v.size()-1 ];

    if(left <= right && left <= middle)
    {
        if(right <= middle)
            return right;
        else
            return left;
    }
    if(right <= left && right <= middle)
    {
        if(left <= middle)
            return left;
        else
            return middle;
    }
    if(middle <= left && middle <= right)
    {
        if(left <= right)
            return left;
        else
            return right;
    }
}
