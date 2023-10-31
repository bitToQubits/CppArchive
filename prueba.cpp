#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[] = {5,4,4,3,2,1};
    sort(arr, arr+n);
    int k = 0;

    for(int b = n/2; b >= 1; b/=2)
        while(b+k < n && arr[b+k] <= 6) k+=b;

    if(arr[k] == 6)
        cout << 1;
    
}