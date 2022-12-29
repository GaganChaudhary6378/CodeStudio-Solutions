#include <bits/stdc++.h> 
int maxDiff(vector<int> &a, int n)
{
    // Write your code here.
    int i=0;
    int j=i+1;
    int max=INT_MIN;
    while(i<j && j<a.size()){
       if(a[i]<=a[j] && (j-i)>max){
           max=j-i;
       }else if(j==a.size()-1){
           i++;
           j=i+1;
       }j++;
    }return max;
}

