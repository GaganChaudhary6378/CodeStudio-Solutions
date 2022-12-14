#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    vector<int> answer;
    sort(arr.begin(),arr.end());
    answer.push_back(arr[k-1]);
    answer.push_back(arr[n-k]);
    return answer;
}