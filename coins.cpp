#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;

    int sum = 0;
    int c = 0;
    for(int i = n; i > 0;){
        if((i + sum) <= s){
            sum+=i;
            c++;

            if(sum == s){
                break;
            }
        }else{
            i--;
        }
    }

    cout << c;

    return 0;
}