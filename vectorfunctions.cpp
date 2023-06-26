#include <bits/stdc++.h>
#include "vectorfunctions.h"
using namespace std;

    void backwards(vector<int>& vec){
        /*int n  = vec.size();
        
        for(int i = 0, j = n-1; i < n/2; i++,j--){
            int copy = vec[i];
            vec[i] = vec[j];
            vec[j] = copy;
        }*/
        reverse(vec.begin(), vec.end());
    }

    vector<int> everyOther(const vector<int>& vec){
        vector<int> result;
        int n = vec.size();

        for (int i = 0; i < n; i += 2) {
            result.push_back(vec[i]);
        }
      
        return result;
    }

    int smallest(const vector<int>& vec){
        vector<int>other = vec;
        sort(other.begin(), other.end());

        return other[0];
    }

    // Return the sum of the elements in the vector.
    int sum(const vector<int>& vec){
        /*int sum = 0;
        int n = vec.size();
        for(int i = 0; i < n; i++){
            sum += vec[i];
        }*/
        int sum = std::accumulate(vec.begin(), vec.end(), 0);
        return sum;
    }

    int veryOdd(const vector<int>& vec){
        int n = vec.size();
        int j = 0;

        for(int i = 1; i < n; i++){
            if((vec[i] % 2 != 0) && (i % 2 != 0)) j++;
        }

        return j;
    }