#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>num = {-1,-1,-1,-1,4};
    int n = num.size();

    int sum = 0; int best = 0;
    for(int k = 0; k < n; k++){
        sum = max(num[k], sum+num[k]);
        best = max(best, sum);
        cout << sum << ' ' << best;
        cout << endl;
    }
}