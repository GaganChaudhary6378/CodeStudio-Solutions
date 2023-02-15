#include <bits/stdc++.h> 

long long int sum(long long int n){
	long long int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
    vector<int> sum
	return sum;
}

long long int product1(long long int n){
	long long int product=1;
	for(int i=1;i<=n;i++){
		product=(product*i)%1000000007;
	}
	return product;
}

long long int sumOrProduct(long long int n, long long int q)
{
	if(q==1){
		return sum(n);
	}
	if(q==2){
		return product1(n);
	}
}