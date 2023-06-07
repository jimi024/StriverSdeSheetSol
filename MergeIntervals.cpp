#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.

     vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());  

    int start = intervals[0][0], end = intervals[0][1];

    for(auto pair: intervals){
        if(pair[0] <= end){ 
            end = max(end, pair[1]);
        } else {
            ans.push_back({start, end}); 
            start = pair[0];
            end = pair[1];
        }
    }
    ans.push_back({start, end}); 
    return ans;
}
