#include <iostream>
using namespace std;

int main(){
    int t, a,b,c,d,k,x,y;
    bool sufficient[2];
    cin >> t;
    for(int i = 0; i < t; i++){
        x= 1; 
        y=1;
        sufficient[0] = false;
        sufficient[1] = false;
        cin >> a >> b >> c >> d >> k;

        do{
            if(x * c < a){
                x++;
            }else{
                if((x + y) <= k){
                    sufficient[0] = true;
                }
            }

            if(y * d < b){
                y++;
            }else{
                if((x + y) <= k){
                    sufficient[1] = true;
                }
            }

        }while(((x + y) <= k) && ((sufficient[0] && sufficient[1]) == false));

        if(sufficient[0] && sufficient[1]){
            cout << x << ' ' << y << '\n';
        }else{
            cout << -1 << '\n';
        }
    }

}