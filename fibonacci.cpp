#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x=1, y=1,z;
    cin >> n;

    cout << x << ' ' << y << ' ';
    while(z != n){
        z = x + y;
        x = y;
        y = z;
        cout << z << ' ';
    }
}