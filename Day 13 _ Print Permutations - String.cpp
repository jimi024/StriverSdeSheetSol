#include <bits/stdc++.h> 
void f(int ind, string &s, vector<string> &result){
    if(ind == s.size()){
        result.push_back(s); // found a permutation
        return;
    }
    for(int i = ind; i < s.size(); i++){
        swap(s[i], s[ind]); // swap the current element with the first element
        f(ind+1, s, result); // find the permutation of the remaining string
        swap(s[i], s[ind]); // backtrack
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
     vector<string> result;
    f(0, s, result);
    return result;
}