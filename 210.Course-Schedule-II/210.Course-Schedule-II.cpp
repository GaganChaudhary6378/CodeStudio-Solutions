class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        int V=numCourses;
        vector<int> adj[V];

      
        for(auto it: prerequisites){
            adj[it[1]].push_back(it[0]);
        }

        int indegree[V];
        for(int i=0;i<V;i++){
            indegree[i]=0;
        }

        for(int i=0;i<V;i++){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }

        queue<int> q;
        vector<int> topo;
        vector<int> empty;
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

        }if(topo.size()==V){
            return topo;
        }
        return empty;
    }
};