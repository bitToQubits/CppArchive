#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;
    int z;
    int o;

    int z_1;
    int o_1;

    if(n & 1){
        cout << 1 << '\n';
        cout << s;
    }else{
        int a = 0;
        while(a < n){
            z = 0;
            o = 0;
            for(int i = 0; i < a; i++){
                if(s[i] == '0') z++;
                else o++;
            }
            
            z_1 = 0;
            o_1 = 0;
            for(int i = a; i < n; i++){
                if(s[i] == '0') z_1++;
                else o_1++;
            }

            if((z != o || (z == 0 && o == 0)) && (z_1 != o_1)){

                if(z != o){
                    cout << 2 << '\n';
                }else{
                    cout << 1 << '\n';
                }

                for(int i = 0; i < a; i++){
                    cout << s[i];

                    if(i == a-1){
                        cout << ' ';
                    }
                }

                for(int i = a; i < n; i++){
                    cout << s[i];
                }
                break;
            }else{
                a++;
            }

        }
    }

    return 0;
}