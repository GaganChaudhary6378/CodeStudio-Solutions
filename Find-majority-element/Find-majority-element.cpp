#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
// Write your code here.
   int x = floor(n/2);
   unordered_map<int ,int>mp;
   for(int i=0;i<n;++i){
       mp[arr[i]]++;
   }
   for(auto it:mp){
       if(it.second>x){
           return it.first;
       }
   }
   return -1;
}