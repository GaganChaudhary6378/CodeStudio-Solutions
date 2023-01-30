#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> answer;
    vector<int> temp;
    while(!myStack.empty()){
        int num=myStack.top();
        temp.push_back(num);
        myStack.pop();
    }
    temp.push_back(x);
    
    for(int i=temp.size()-1;i>=0;i--){
        answer.push(temp[i]);
    }
    return answer;
}
