#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long int count=0;
    for(int i=0;i<n;i++){
        long long int e=n-1;
        while(i<e){
            if(arr[i]>arr[e]){
                count++;
            }e--;
        }
    }return count;
}