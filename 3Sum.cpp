#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(), arr.end()); // sorting the array
	vector<vector<int>> ans;

	for(int i = 0; i < n; i++){
		if (i == 0 || (i > 0 && arr[i] != arr[i-1])) { // to avoid duplicates
			
			int lo = i+1, hi = n-1, sum = K - arr[i]; // sum = K - arr[i], two sum problem
			
			while (lo < hi) {
				if (arr[lo] + arr[hi] == sum) {
					ans.push_back({arr[i], arr[lo], arr[hi]});
					while (lo < hi && arr[lo] == arr[lo+1]) lo++; // to avoid duplicates
					while (lo < hi && arr[hi] == arr[hi-1]) hi--; // to avoid duplicates
					lo++; hi--;
				} 
				else if (arr[lo] + arr[hi] < sum) lo++; // if sum is less than sum then we need to increase lo
				else hi--; // if sum is greater than sum then we need to decrease hi
			}
		}
	}

	return ans;
}

