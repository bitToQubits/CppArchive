#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, pares = 0, impares = 0, temp;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp % 2 != 0)
            impares++;
        else
            pares++;
    }

    for(int i = 0; i < m; i++){
        cin >> temp;
        if(temp % 2 != 0)
            impares++;
        else
            pares++;
    } 


    if(pares > 0 && impares > 0){
        if(impares < pares){
            if(impares < n && impares < m){
                cout << impares;
            }else{
                if(n < m)
                    cout << n;
                else
                    cout << m;
            }
        }else{
            if(pares < n && pares < m){
                cout << pares;
            }else{
                if(n < m)
                    cout << n;
                else
                    cout << m;
            }
        }
    }
    else{
        cout << 0;
    }
    
    return 0;
}