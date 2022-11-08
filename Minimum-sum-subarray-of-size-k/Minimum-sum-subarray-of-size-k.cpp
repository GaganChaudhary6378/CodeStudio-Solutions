#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
    // Write your code here 
      int mini = INT_MAX;
    int sum = 0;
    int i = 0;
    int j = 0;
    while(j<n)
    {
        sum = sum + arr[j];
        if(j-i+1 < k)
        {
            j++;
        }
        else if(j - i + 1 == k)
        {
            mini = min(mini, sum);
            sum = sum - arr[i];
            i++; 
            j++;
        }
    }
    return mini;
}
