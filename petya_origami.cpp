#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int minimum_red = (n * 2);
    int minimum_green = (n * 5);
    int minimum_blue = (n * 8);

    if(minimum_red % k != 0) minimum_red = (minimum_red / k) + 1;
    else minimum_red = (minimum_red / k);

    if(minimum_green % k != 0) minimum_green = (minimum_green / k) + 1;
    else minimum_green = (minimum_green / k);

    if(minimum_blue % k != 0) minimum_blue = (minimum_blue / k) + 1;
    else minimum_blue = (minimum_blue / k);

    cout << minimum_red + minimum_green + minimum_blue;
}