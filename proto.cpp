#include <bits/stdc++.h>
using namespace std;
  
int solve(vector<int> v) {
    vector<int> overhead(2,0);
    int num_of_moves = 0, sum = 0;
    for(int i = 0; i < v.size(); i++) {
        num_of_moves += overhead[i % 2];
        int left = abs(v[i]);
        if((sum > 0 && v[i] < 0) || (sum < 0 && v[i] > 0)) {
            int used = min(abs(sum), abs(v[i]));
            int diff = min(overhead[(i + 1) % 2], used);
            overhead[(i + 1) % 2] -= diff;
            overhead[i % 2] -= min(overhead[i % 2], (used - diff));
            left -= used;
        }
        sum += v[i];
        overhead[(i + 1) % 2] += abs(left);
    }

    assert(sum == 0);
    return num_of_moves;
}

    if((sum>0&&v[i])||(sum<0&&v[i]>0)){
        num_of_moves +=overhead[i%2];
        used = min(abs(sum),abs(b[])){{

            
        }}






}

//write a function for given two arrays A and B and a string P of length M representing a partial phone number, returns the contact name whose phone number contains P as a substring, that is a continous segment. ? 