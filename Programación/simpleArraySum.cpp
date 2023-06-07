#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int a = 0;
    int length = ar.size();
    for (int i = 0; i < length; i++) {
        a += ar[i];
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int>array;
    
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;

        array.push_back(element);
    }

    int result = simpleArraySum(array);
    cout << result << endl;

    return 0;
}
