#include <bits/stdc++.h> 
void printBFS(vector<vector<int>> edgeVector,int vertex,int sv,vector<bool>& visited,vector<int>& ans){
    queue<int> remainingData;
    remainingData.push(sv);
    visited[sv]=true;
    while(remainingData.size()!=0){
        int front=remainingData.front();
        remainingData.pop();
        ans.push_back(front);
        for(int i=0;i<edgeVector[front].size();i++){
             if(!visited[edgeVector[front][i]]){
               remainingData.push(edgeVector[front][i]);
               visited[edgeVector[front][i]] = true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here

    vector<vector<int>> edgeVector(vertex);
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        edgeVector[u].push_back(v);
        edgeVector[v].push_back(u);
    
    }for(int i=0;i<edgeVector.size();i++){
       sort(edgeVector[i].begin(),edgeVector[i].end());
    }
    vector<int> finalAnswer;
    vector<bool> visited(vertex);
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            printBFS(edgeVector,vertex,i,visited,finalAnswer);                       visited[i]=true;
        }
    }
    return finalAnswer;
    
}