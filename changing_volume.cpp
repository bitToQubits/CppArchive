#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int c;
    int a, b;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        c = 0;
        if(a == b){
            cout << 0 << '\n';
        }else{
            int r = abs(a-b);
            while(r >= 1){
                if(r / 5 >= 1){
                    c += r / 5;
                    r = r % 5;
                }

                if(r / 2 >= 1){
                    c += r / 2;
                    r = r % 2;
                }

                if(r / 1 >= 1){
                    c += r / 1;
                    r = r % 1;
                }
            }
            cout << c << '\n';
        }
    }
    return 0;
}