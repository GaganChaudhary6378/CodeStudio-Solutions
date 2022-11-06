void printDFS(vector<vector<int>>& edges,int vertex,int sv,vector<bool>&visited,vector<int> &temp){
    temp.push_back(sv);
    visited[sv]=true;
     for(auto i : edges[sv]){
        if(!visited[i]){
            printDFS(edges,vertex,i,visited,temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> edgeVector(V);
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        edgeVector[v].push_back(u);        
        edgeVector[u].push_back(v);
    }
    vector<vector<int>> ans;
    vector<bool>visited(V);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int>temp;
            printDFS(edgeVector,V,i,visited,temp);                       
            ans.push_back(temp);
        }
    }
    return ans;
    
}