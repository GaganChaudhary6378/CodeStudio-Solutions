#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int answer=1;
    int maxCount=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==1){
            answer++;
        }
        else if(arr[i]-arr[i-1]!=0){
            answer=1;
        }
        maxCount=max(answer,maxCount);
    }
    return maxCount;
}