#include <bits/stdc++.h>
using namespace std;

bool is_composite(int k){
    for(int i = sqrt(k); i > 1; i--){
        if(k % i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a=2, b=2,n;
    cin >> n;
    while(a-b != n){
        a+=(long) 2;
        b++;

        if((a-b == n)){
            if(!is_composite(a))
                a+=(long) 2;

            if(!is_composite(b))
                b++;
        }
    }
        cout << a << ' ' << b << '\n';


    return 0;
}