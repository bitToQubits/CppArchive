#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k,d=0;
    cin >> n >> k;
    d = n / k;
    if(d % 2 != 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}