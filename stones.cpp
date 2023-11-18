#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a = 0,b = 0,c = 0;
    int a_1 = a, b_1 = b, c_1 = c;
    int stock = 0;
    int stock_1 = 0;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        a_1 = a, b_1 = b, c_1 = c;

        while((b >= 1 && c >= 2)){
            b--;
            c-=2;
            stock+=3;
        }

        while((a >= 1 && b >= 2)){
            a--;
            b-=2;
            stock+=3;
        }

        while((b_1 >= 1 && c_1 >= 2)){
            b_1--;
            c_1-=2;
            stock_1+=3;
        }

        while((a_1 >= 1 && b_1 >= 2)){
            a_1--;
            b_1-=2;
            stock_1+=3;
        }

        cout << max(stock_1, stock) << '\n';
        stock = 0;
        stock_1 = 0;
        a = b = c = 0;
        a_1 = b_1 = c_1 = 0;
    }
    return 0;
}