#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() {
   //Write your code here
   int n,arr[1000],k,i;
   cin>>n;
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>k;
   for(i = k;i<n+k;i++){
       if(i>=n){
           cout<<arr[i-n]<<' ';
       }
       else{
           cout<<arr[i]<<' ';
       }
   }
   return 0;
}