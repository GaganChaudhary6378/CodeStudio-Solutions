#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N;
    cin>>N;
    int x;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>x;

    int lastIndex=-1;
    for(int i=0;i<N;i++){
        if(arr[i]==x){
            lastIndex=i;
        }
    }
    cout<<lastIndex<<endl;
    return 0;

}