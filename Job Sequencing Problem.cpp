#include <bits/stdc++.h> 

bool cmp(const vector<int>& a, const vector<int>& b) {
    return a[1] > b[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
     int n = jobs.size();
    int maxDeadline = INT_MIN;
    for(int i = 0; i < n; i++){
        maxDeadline = max(maxDeadline, jobs[i][0]); //max deadline
    }
    vector<int> slots(maxDeadline+1, -1); //slots[i] = -1 means slot i is empty

    sort(jobs.begin(), jobs.end(), cmp); //sort by profit

    int profit = 0;

    for(int i = 0; i < n; i++){
        int currDeadline = jobs[i][0];
        int currProfit = jobs[i][1];

        for(int j = currDeadline; j > 0; j--){ //find empty slot
            if(slots[j] == -1){ //slot is empty
                slots[j] = i; //assign job
                profit += currProfit; //add profit
                break;
            }
        }
    }

    return  profit;
}
