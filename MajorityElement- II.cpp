#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
     int n = arr.size(); 
    vector<int> v; 
    map<int, int> mpp;
    int ans = int(n / 3) + 1;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
        if (mpp[arr[i]] == ans) {
            v.push_back(arr[i]);
        }
        if (v.size() == 2) break;
    }
    return v;

}