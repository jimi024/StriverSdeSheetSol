#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maximum = LONG_MIN;
    long long total = 0;
    for (int i = 0; i < n; i++) {
    total+=arr[i];
    if(total>maximum)
       maximum=total;
    if(total<0)
        total=0;
    }
    if(maximum<0)return 0;
    else
     return maximum;
}