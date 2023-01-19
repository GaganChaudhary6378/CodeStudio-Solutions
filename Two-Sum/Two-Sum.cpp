#include <bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    vector<pair<int,int>> ans;
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
   while(i<j){
       if((arr[i]+arr[j])<target){
           i++;
       }
    else   if((arr[i]+arr[j])>target){
           j--;
       }
     else  if((arr[i]+arr[j])==target){
           ans.push_back({arr[i],arr[j]});
           i++;
           j--;
       }
   }
    if(ans.empty()){
        ans.push_back({-1,-1});
        return ans;
    }
    return ans;
}