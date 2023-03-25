/*class Graph
{
    
public:
	int V;    
    list<int> *adj;    
    */

bool dfs(int node,int parent,list<int>* ad,int visited[]){
	visited[node]=1;
	for(auto adjacentNode : ad[node]){
		if(!visited[adjacentNode]){
            if (dfs(adjacentNode, node, ad, visited) == true) {
            	return true;
			}
		}else if(adjacentNode!=parent){
			return true;
		}
	}return false;
}
bool isCyclic(Graph g)
{
	
		/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
	
	list<int>* ad=g.adj;
	int v=g.V;
    int visited[v] = {0};
	for(int i=0;i<v;i++){
		if(!visited[i]){
			if(dfs(i, -1, ad,visited)==true){
				return true;
			}
		}
	}return false;

}
