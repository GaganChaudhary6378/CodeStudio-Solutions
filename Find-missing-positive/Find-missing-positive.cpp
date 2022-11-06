#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    unordered_map<int,bool> seen;
    for(int i=0;i<n;i++){
        if(seen.count(arr[i])>0){
            continue;
        }seen[arr[i]]=true;
    }
//     unordered_map<int,bool>::iterator it=0;
    int finalAnswer;
    for(int i=1;i<=n+1;i++){
        if(seen.count(i)==false){
            finalAnswer=i;
            break;
        }
    }return finalAnswer;
}