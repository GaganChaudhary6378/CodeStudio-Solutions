#include <bits/stdc++.h>
#include <vector>
void dfs(int row,int col,char** arr,vector<vector<int>> &visited,int drow[],int dcol[],int n,int m){
         visited[row][col]=1;
         for(int i=0;i<4;i++){
             int nrow=row+drow[i];
             int ncol=col+dcol[i];
             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && arr[nrow][ncol]=='O'){
                 dfs(nrow,ncol,arr,visited,drow,dcol,n,m);
             }
         }
    }
void replaceOWithX(char **arr, int n, int m) {

    vector<vector<int>> visited(n,vector<int>(m,0));
        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        for(int i=0;i<m;i++){
            //for visiting 1st row
            if(!visited[0][i] && arr[0][i]=='O'){
                dfs(0,i,arr,visited,drow,dcol,n,m);
            }
            //for visiting last row
            if(!visited[n-1][i] && arr[n-1][i]=='O'){
                dfs(n-1,i,arr,visited,drow,dcol,n,m);
            }
        }
        for(int j=0;j<n;j++){
            //for visiting 1st column
            if(!visited[j][0] && arr[j][0]=='O'){
                dfs(j,0,arr,visited,drow,dcol,n,m);
            }
            //for visiting last column
            if(!visited[j][m-1] && arr[j][m-1]=='O'){
                dfs(j,m-1,arr,visited,drow,dcol,n,m);
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && arr[i][j]=='O'){
                    arr[i][j]='X';
                }
            }
        }
}