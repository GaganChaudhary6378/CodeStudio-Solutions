#include <queue>
bool isCheck(int src,int colour[],vector<int> ad[]){
	queue<int> q;
	q.push(src);
	colour[src]=0;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto it: ad[node]){
			if(colour[it]==-1){
				colour[it]=!colour[node];
				q.push(it);
			}else if(colour[it] == colour[node]){
				return false;
			}	
		}
	}return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	int V=edges.size();
	vector<int> ad[V]; // Here we are creating our adjacency list
	for(int i=0;i<edges.size();i++){
		for(int j=0;j<edges.size();j++){
			if(edges[i][j]==1 && i!=j){
				ad[i].push_back(j);
				ad[j].push_back(i);
			}
		}
	}int colour[V];
	for(int i=0;i<V;i++){
		colour[i]=-1;
	}
	for(int i=0;i<V;i++){
		if(!colour[i]){
			if(isCheck(i,colour,ad)==false){
				return false;
			}
		}
	}return true;

}