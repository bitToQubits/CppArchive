#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

        int r_1 = a, r_2 = r_1*2, r_3 = r_2*2;
        int sum = 0;
        while(r_1 > 0){

            if(r_1 <= a){
                if(r_2 <= b){
                    if(r_3 <= c){
                        sum = r_1 + r_2 + r_3;
                        break;
                    }
                }
            }

            r_1--;
            r_2 = r_1*2; 
            r_3 = r_2*2;
        }

        cout << sum;

    return 0;
}