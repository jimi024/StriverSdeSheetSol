#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
     long l = 0, r = n-1, lMax = 0, rMax=0, ans = 0;

    while(l <= r){
        if(arr[l] <= arr[r]){
            if(arr[l] > lMax) lMax = arr[l];
            else ans += (lMax - arr[l]);
            l++;
        } else {
            if(arr[r] > rMax) rMax = arr[r];
            else ans += (rMax - arr[r]);
            r--;
        }
    }

    return ans;
}