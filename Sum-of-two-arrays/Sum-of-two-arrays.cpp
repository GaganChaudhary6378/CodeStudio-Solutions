#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
int sum1 = 0;
   vector<int> ans;
   
   for(int i = 0; i < n; i++){
       sum1 = sum1 * 10 + a[i]; 
   }
   
   int sum2 = 0;
   
   for(int j = 0; j < m; j++){
       sum2 = sum2 * 10 + b[j]; 
   }
   
   int sum3 = sum1 + sum2;
   
   while(sum3 > 0){
       int rem = sum3 % 10;
       ans.push_back(rem);
       sum3 /= 10; 
   }
   
   reverse(ans.begin(), ans.end());
   return ans;
}