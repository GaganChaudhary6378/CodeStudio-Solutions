#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int position=0;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            position=i;
            found=true;
        }
    }if(found==false){
        position=-1;
    }
    return position;
}

