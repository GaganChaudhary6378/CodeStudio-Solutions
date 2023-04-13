#include <bits/stdc++.h> 
#include <queue>
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    vector<int> temp;
    while(!q.empty()){
        temp.push_back(q.front());
        q.pop();
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        q.push(temp[i]);
    }
    return q;

}
