#include <bits/stdc++.h> 
int findPeak(vector<int> &arr) {
    // Write your code here
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }return max;
}
