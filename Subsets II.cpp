#include <bits/stdc++.h> 

void solve(int i, vector<int> &arr, vector<int> &subst, vector<vector<int>> &ans){
    ans.push_back(subst);

    for(int j = i; j < arr.size(); j++){
        if(j != i and arr[j] == arr[j-1]){ //skip duplicates
            continue;
        }
        subst.push_back(arr[j]); //take it
        solve(j+1, arr, subst, ans); //recurse
        subst.pop_back(); //backtrack
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
     vector<vector<int>> ans;
    vector<int> subst;
    sort(arr.begin(), arr.end()); //sort the array to skip duplicates
    solve(0, arr, subst, ans);
    return ans;
}