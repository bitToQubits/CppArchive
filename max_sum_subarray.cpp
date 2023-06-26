#include <bits/stdc++.h>
using namespace std;

/*Kadane's Algorithm Implementation*/

int main()
{
    vector<int>vec={-1, 2, 4, -3, 5, 2, -5, 2}; //Max sum substring: 10.
    int n = vec.size();
    int sum = 0; int best= 0;
    for(int i = 0; i < n; i++){
        sum = max(vec[i], sum+vec[i]);
        best = max(best, sum);
    }

    cout << best;
}