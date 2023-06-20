#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>array;
    
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;

        array.push_back(element);
    }

    for (int i = n-1; i >= 0; i--) {
        cout << array[i] << ' ';
    }

    return 0;
}
