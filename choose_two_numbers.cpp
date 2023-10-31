#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, best_a = 0, best_b = 0,temp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        best_a = max(best_a, temp);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> temp;
        best_b = max(best_b, temp);
    }

    cout << best_a << ' ' << best_b;
    
    return 0;
}