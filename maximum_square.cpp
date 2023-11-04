#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, n_planks, best;
    cin >> n;

    for(int j = 0; j < n; j++){

        cin >> n_planks;
        int* temp = new int[n_planks];
        best = 1;

        for(int i = 0; i < n_planks; i++){
            cin >> temp[i];
        }
        
        sort(temp, temp+n_planks);

        for(int i = 1; i <= n_planks; i++){
            if(temp+n_planks - lower_bound(temp, temp+n_planks, i) >= i)
                best = max(best, i);
        }

        cout << best << '\n';

    }

    return 0;
}