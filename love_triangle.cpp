#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    auto *planes = new int[n+1];
    int plane_a;
    int plane_b;
    int plane_c;


    for(int i = 1; i <= n; i++){
        cin >> planes[i];
    }

    bool true_love = false;
    for(int i = 1; i <= n; i++){
        if(planes[i] != planes[planes[i]] && planes[i] <= n && planes[planes[i]] <= n){
            plane_a = planes[i];
            plane_b = planes[plane_a];
            if(plane_b != planes[plane_b] && planes[plane_b] <= n){
                plane_c = planes[plane_b];
                if(planes[plane_c] != plane_c && plane_a == planes[plane_c]){
                    cout << "YES";
                    true_love = true;
                    break;
                }
            }

        }
        if(true_love){
            break;
        }
    }

    if(!true_love){
        cout << "NO";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     auto *planes = new int[n];
//     int plane_a;
//     int plane_b;
//     int plane_c;


//     for(int i = 1; i <= n; i++){
//         cin >> planes[i];
//     }

//     bool true_love = false;
//     for(int i = 1; i <= n; i++){
//         if(planes[i] != planes[planes[i]]){
//             plane_a = planes[i];
//             int plane_a_index = i;
//             plane_b = planes[planes[i]];
//             for(int j = 1; j <= n; j++){
//                 if(plane_b != planes[planes[j]]){
//                     plane_c = planes[planes[j]];
//                     if(planes[plane_c] != plane_c && plane_a_index == planes[plane_c]){
//                         //cout << "YES";
//                         true_love = true;
//                         cout << plane_a_index << '\n';
//                         cout << plane_a << ' ' << plane_b << ' ' << plane_c << '\n';
//                         break;
//                     }
//                 }
//             }

//         }
//         if(true_love){
//             break;
//         }
//     }

//     if(!true_love){
//         cout << "NO";
//     }

//     return 0;
// }