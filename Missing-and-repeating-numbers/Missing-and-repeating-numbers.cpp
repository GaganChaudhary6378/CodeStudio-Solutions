#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int>answer;
    vector<int> temp(n+1);
    int missingNumber;
    int repeatedNumber;
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(temp[i]==0){
            missingNumber=i;
        }
        if(temp[i]>1){
            repeatedNumber=i;
        }
    }answer.first=missingNumber;
    answer.second=repeatedNumber;
    return answer;
}
