#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


void all_permutations(vector<int>nums){
    sort(nums.begin(), nums.end());
    do{
        for(auto it = nums.begin(); it != nums.end(); it++){
            cout << *it << ' ';
        }
        cout << '\n';
    }while(next_permutation(nums.begin(), nums.end()));
}

int main(){
    vector<int>nums = {1,2,3,4,5,5,9,9};
    auto it = find(nums.begin(), nums.end(), 5);
    int howmuch = count(nums.begin(), nums.end(), 9);
    bool sorted = is_sorted(nums.begin(), nums.end());
    cout << howmuch;
}