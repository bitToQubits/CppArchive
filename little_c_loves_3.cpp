#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a=1,b=1,c=1,d=0;
    cin >> n;

    a = b = c = (n / 3);
    d = n % 3;

    a+=d;

    do{

        if(a % 3 == 0){
            for(int i = 1; i <= 2; i++){
                if((a-i) % 3 == 0) continue;
                if((b+i) % 3 !=0){
                    a-=i;
                    b+=i;
                }else if((c+i) % 3 !=0){
                    a-=i;
                    c+=i;
                }
            }
        }

        if(b % 3 == 0){
            for(int i = 1; i <= 2; i++){
                if((b-i) % 3 == 0) continue;
                if((a+i) % 3 !=0){
                    b-=i;
                    a+=i;
                }else if((c+i) % 3 !=0){
                    b-=i;
                    c+=i;
                }
            }
        }

        if(c % 3 == 0){
            for(int i = 1; i <= 2; i++){
                if((c-i) % 3 == 0) continue;
                if((a+i) % 3 !=0){
                    c-=i;
                    a+=i;
                }else if((b+i) % 3 !=0){
                    c-=i;
                    b+=i;
                }
            }
        }

    }while(a + b + c != n || (a % 3 == 0) || (b % 3 == 0) || (c % 3 == 0));

    cout << a << ' ' << b << ' ' << c;

    return 0;
}

    // if(a % 3 == 0){
    //     cout << "Problema -2" << endl;
    //     a+=d;
    // }else if(b % 3 == 0){
    //     cout << "Problema -1" << endl;
    //     b+=d;
    // }else if(c % 3 == 0){
    //     cout << "Problema 0" << endl;
    //     c+=d;
    // }else{
    //     if(c + d % 3 != 0){
    //         if(d == 2 && (a + 1) % 3 != 0){
    //             cout << "Problema 1" << endl;
    //             a+=1;
    //             b+=1;
    //         }else{
    //             cout << "Problema 2" << endl;
    //             while(a + i % 3 == 0 && i > 0){
    //                 i--;
    //             }
    //             a = n / i;
    //             b = n / i;
    //             c = n - (a + b);
    //         }
    //     }else{
    //         cout << "Problema 3" << endl;
    //         c+=d;
    //     }
    // }

// do{
//         if(a % 3 == 0 || (b+temp+1) % 3 != 0){
//             a--;
//             temp++;
//         }else if((a+temp) + b + c <= n){
//             a+=temp;
//             temp = 0;
//         }

//         if(b % 3 == 0 || (c+temp+1) % 3 != 0){
//             b--;
//             temp++;
//         }else if(a + (b+temp) + c <= n){
//             b+=temp;
//             temp = 0;
//         }

//         if(c % 3 == 0){
//             c--;
//             temp++;
//         }else if(a + b + (c+temp) <= n){
//             c+=temp;
//             temp = 0;
//         }
//         cout << a << ' ' << b << ' ' << c << '\n';
//     } while(a+b+c != n);

// for(int i = n; i > 0; i--){
//             if(i % 3 != 0){
//                 a = i;
//                 if(a+b+c == n) break;
//             };
//         }

//         for(int i = n; i > a; i--){
//             if(i % 3 != 0){
//                 b = i;
//                 if(a+b+c == n) break;
//             };
//         }

//         for(int i = n; i > 0; i--){
//             if(i % 3 != 0){
//                 c = i;
//                 if(a+b+c == n) break;
//             }
//         }