#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, a,b,j=0;
    cin >> n;
    vector<int>num;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        num.push_back(b);
    }

    cin >> k;
    k--;

    for(int i = 0; i < n; i++){
        if(k < num[i]) j++;
    }

    cout << j;
}