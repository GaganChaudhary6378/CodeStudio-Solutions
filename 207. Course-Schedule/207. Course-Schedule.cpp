class Solution {
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // now i am going to solve this question using khans algorithm that is 
        // topological sort using bfs
        int V=numCourses;
        vector<int> adj[V];

        for(auto it :prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        
        int indegree[V];
        queue<int> q;
        vector<int> topo;
        for(int i=0;i<V;i++){
            indegree[i]=0;
        }

        for(int i=0;i<V;i++){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }

        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int fnode=q.front();
            q.pop();
            topo.push_back(fnode);
            for(auto it : adj[fnode]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(topo.size()==V){
            return true;
        }return false;

    }
};