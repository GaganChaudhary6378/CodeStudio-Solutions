class Solution {
private:
    bool dfs(int node, vector<vector<int>>& graph, int visited[], int pathVisited[], int check[]) {
        visited[node] = 1;
        pathVisited[node] = 1;
        check[node] = 0;

        for (auto it : graph[node]) {
            if (!visited[it]) {
                if (dfs(it, graph, visited, pathVisited, check) == true) {
                    check[node] = 0;
                    return true;
                }
            } else if (pathVisited[it]) {
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;
        pathVisited[node] = 0;

        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        int V = n;

        int visited[V];
        int pathVisited[V];
        int check[V];
        for (int i = 0; i < V; i++) {
            visited[i] = 0;
            pathVisited[i] = 0;
            check[i] = 0;
        }

        vector<int> safeNodes;
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, graph, visited, pathVisited, check);
            }
        }
        for (int i = 0; i < V; i++) {
            if (check[i] == 1) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};
