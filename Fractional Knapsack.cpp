#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
     sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b) {
    return ((double) a.second / a.first) > ((double) b.second / b.first);
  });
  
  double maxProfit = 0.0;

  for(auto item: items){
    if(item.first <= w){ //weight of item is less than or equal to remaining weight
      maxProfit += item.second;
      w -= item.first; //reduce remaining weight
    } else {
      //weight of item is greater than remaining weight. Take fraction of item
      maxProfit += (((1.0 * item.second) / (1.0 * item.first)) * w);
      w -=  w;
      break;
    }
  }

  return maxProfit;
}