#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    vector<int> temp;
    int mid=N/2;
    for(int i=0;i<mid;i++){
        temp.push_back(inputStack.top());
        inputStack.pop();
    }inputStack.pop();
    reverse(temp.begin(),temp.end());
    for(int i=0;i<mid;i++){
            inputStack.push(temp[i]);
    }
   
}