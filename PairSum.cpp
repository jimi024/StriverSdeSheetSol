#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
  unordered_map<int,int>mp; // to store the frequency of elements

  for(int i=0;i<arr.size();i++){
    if(mp[s-arr[i]]){ // if the difference is present in the map
        int val=mp[s-arr[i]]; // get the frequency of the difference
        vector<int> temp;
        while(val--){ // push the pairs in the ans vector
          temp.push_back(min(arr[i],s-arr[i]));
          temp.push_back(max(arr[i],s-arr[i]));
          ans.push_back(temp);
        }
    }
    mp[arr[i]]++; // increase the frequency of the element
  }
  sort(ans.begin(),ans.end()); // sort the ans vector
  return ans;
}