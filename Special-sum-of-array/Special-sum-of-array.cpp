#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n){
    // Write your code here.
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
     while(sum>=10){
            int digit=sum%10;
            int newAnswer=sum/10;
            sum=digit+newAnswer;
        }return sum;
}