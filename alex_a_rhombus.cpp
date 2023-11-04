#include <bits/stdc++.h>
using namespace std;

int main(){
    int rhambus;
    int actual_size = 1, before_size;
    cin >> rhambus;

    for(int i = 0; i < rhambus; i++){
        before_size = actual_size;
        actual_size = i * 4 + before_size;
    }

    cout << actual_size;
    
    return 0;
}