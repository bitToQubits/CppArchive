#include "vectorfunctions.h"
#include <vector>
#include <algorithm>
using namespace std;

// Reverse a vector.
// Note that it is sent as a reference, so you should
// reverse the same vector that was sent in.
void backwards(vector<int>& vec){
    reverse(vec.begin(), vec.end());
}

// Return every other element of the vector, starting with the first.
// You should return a new vector with the answer.
// You are not allowed to modify the vector, even though it is
// sent as a reference. Therefore, the parameter is declared "const".
vector<int> everyOther(const vector<int>& vec){
    vector<int>other;
    for(int i = 0; i < vec.size(); i += 2){
        other.push_back(vec[i]);
    }
    return other;
}

// Return the smallest value of a vector.
int smallest(const vector<int>& vec){
    vector<int>results = vec;
    sort(results.begin(), results.end());
    return results[0];
}

// Return the sum of the elements in the vector.
int sum(const vector<int>& vec){
    int sum = 0;
    for(int i = 0; i < vec.size(); i++){
        sum+= vec[i];
    }
    return sum;
}

// Return the number of odd integers, that are also on an
// odd index (with the first index being 0).
int veryOdd(const vector<int>& vec){
  int n = 0;
  for(int i = 1; i < vec.size(); i+= 2){
    if(vec[i] % 2  != 0){
        n++;
    }
  }
  return n;
}