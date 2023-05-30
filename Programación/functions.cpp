#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
  int max = 0;
  max = (max <= a) ? a : b; 
  max = (max <= b) ? b : c;
  max = (max <= c) ? c : d;
  max = (max <= d) ? d : max;
  
  return max;   
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}