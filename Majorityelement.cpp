#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int>m;
        for (int i = 0; i < n; i++) {
        m[arr[i]]++;
		}
                for (auto it : m) {
                   if(it.second > (n/2))
				      return it.first;
				}
				return -1;
}