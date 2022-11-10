#include <bits/stdc++.h> 
void printSolution(vector<vector<int>> &ans,vector<int> &path,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            path.push_back(ans[i][j]);
        }
    }
}
void mazeHelper(vector<vector<int>> &maze,int n,vector<vector<int>> &ans,vector<vector<int>> & res,int x,int y){
    if(x>=n || y>=n || x<0 || y<0 || ans[x][y]==1 || maze[x][y]==0){
        return;
    }if(x==n-1 && y==n-1){
        vector<int> path;
        ans[x][y]=1;
        printSolution(ans,path,n);
        ans[x][y]=0;
        res.push_back(path);
    }
    ans[x][y]=1;
    mazeHelper(maze,n,ans,res,x+1,y);    
    mazeHelper(maze,n,ans,res,x-1,y);
    mazeHelper(maze,n,ans,res,x,y+1);
    mazeHelper(maze,n,ans,res,x,y-1);
    ans[x][y]=0;

}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
    vector<vector<int>>ans(n,vector<int>(n,0));
    vector<vector<int>> res;
    
    mazeHelper(maze,n,ans,res,0,0);
    return res;
}