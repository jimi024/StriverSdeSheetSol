
void solve(int i, int k,vector<int> &arr,vector<vector<int>> &ans,vector<int> &currSubSet){
  if(i==arr.size()){
    if(k == 0) ans.push_back(currSubSet); //if k is 0, we have found a subset
    return ;
  }
  solve(i+1,k,arr,ans,currSubSet); //don't take it
  currSubSet.push_back(arr[i]); //take it
  solve(i+1,k-arr[i],arr,ans,currSubSet); //recurse
  currSubSet.pop_back(); //backtrack
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
     vector<vector<int>> ans;
  vector<int> currSubSet;
  solve(0,k,arr,ans,currSubSet);
  return ans;
}