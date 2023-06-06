#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi = 0;
    int n = prices.size();
    int buyPrice = INT_MAX;
    for (int i = 0; i < n; i++ ){
        buyPrice = min(buyPrice,prices[i]);
        maxi = max(maxi, prices[i] - buyPrice);
    }
    return maxi;
}