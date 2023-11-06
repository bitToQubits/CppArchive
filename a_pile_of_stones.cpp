#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c = 0;
    string s;
    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i] == '-' && c > 0)
            c--;
        else if(s[i] == '+')
            c++;
    }

    cout << c;

    return 0;
}