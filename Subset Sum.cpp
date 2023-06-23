void solve(int i, vector<int> &num, vector<int> &ans, int sum){
    if(i >= num.size()) return;
    //don't take it
    solve(i+1, num, ans, sum);
    //take it
    sum += num[i];
    ans.push_back(sum);
    solve(i+1, num, ans, sum);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	vector<int> ans;
    ans.push_back(0); //empty subset

    solve(0, num, ans, 0);

    sort(ans.begin(), ans.end()); //sort the ans vector
    return ans;
}