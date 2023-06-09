#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long ans = 1;
	long long _x = x; 

	while(n > 0){
    
		if(n%2 != 0){
			ans = ((ans)%m *(_x)%m)%m;
		}
		_x = ((_x)%m * (_x)%m)%m;
   
		n/=2;
	}

	return (int)(ans%m);
}