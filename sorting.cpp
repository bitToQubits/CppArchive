#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int>vec = {3,2,5,5,8,9,-1,1,2,3,4};
    sort(vec.begin(), vec.end());
    // for(auto elem : vec){
    //     cout << elem << ' ';
    // }
    int n = 5;
    int num[5] = {5,4,3,2,1};
    sort(num, num + n);
    for(int i = 0; i < n; i++){
        cout << num[i] << ' ';
    }
}