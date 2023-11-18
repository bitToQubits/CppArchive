#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, k;
    cin >> n >> k >> t;

    if(t >= n){
        cout << abs(n - abs(k-t));
    }else{
        if(t<=k){
            cout << t;
        }else{
            cout << t - abs(t-k);
        }
    }

    return 0;
}