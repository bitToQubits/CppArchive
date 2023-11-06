#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, c = 0;
    vector<int>posiciones;
    string s;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> s;
        c = 0;
        do{
            posiciones.clear();
            for(int j = 0; j < n-1; j++){
                if(s[j] == 'A' && s[j + 1] == 'P'){
                   posiciones.push_back(j+1);
                }
            }

            for(int j = 0; j < posiciones.size(); j++){
                s[posiciones[j]] = 'A'; 
            }

            if(posiciones.size() != 0)
                c++;
        }while(posiciones.size() != 0);
        cout << c << '\n';
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t, n, c = 0;
//     char s_actual, s_before = ' ';
//     cin >> t;

//     for(int i = 0; i < t; i++){
//         cin >> n;
//         c = 0;
//         s_before = ' ';
//         for(int j = 0; j < n; j++){
//             cin >> s_actual;
//             if(s_actual == 'P' && s_before == 'A'){
//                 c++;
//                 s_actual = 'A';
//             }
//             s_before = s_actual;
//         }
//         cout << c << '\n';
//     }

//     return 0;
// }