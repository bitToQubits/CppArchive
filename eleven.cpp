#include <bits/stdc++.h>
using namespace std;

bool is_fibonacci(int n){
    bool es_fibonnaci = 0;
    int i = 1;
    while(true){
        int f = (pow((1 + sqrt(5)),i) - pow((1 - sqrt(5)),i)) / (pow(2,i) * sqrt(5));
        if(f == n){
            es_fibonnaci = 1;
            break;
        }else if (f > n){
            break;
        }
        i++;
    }

    return es_fibonnaci;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(is_fibonacci(i))
            cout << 'O';
        else
            cout << 'o';
    }

    cout << '\n';

    return 0;
}