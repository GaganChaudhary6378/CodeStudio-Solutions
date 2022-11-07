#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long int sum=0;
    if(n==0){
        return sum;
    }
    long int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }if(maxSum<sum){
            maxSum=sum;
        }
    }return maxSum;
}