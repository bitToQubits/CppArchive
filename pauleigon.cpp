#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N, P, Q, result;
    cin >> N >> P >> Q;

    result = ((P+Q) / N) + 1;

    if(result % 2 == 0){
        cout << "opponent";
    }else{
        cout << "paul";
    }
}