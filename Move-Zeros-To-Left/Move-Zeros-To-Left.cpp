#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    vector<int> nonZero;
    vector<int> zero;
//     vector<int> answer;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero.push_back(arr[i]);
        }else{
            nonZero.push_back(arr[i]);
        }
    }
    for(int i=0;i<nonZero.size();i++){
        zero.push_back(nonZero[i]);
    }
    for(int i=0;i<zero.size();i++){
        arr[i]=zero[i];
    }

}
