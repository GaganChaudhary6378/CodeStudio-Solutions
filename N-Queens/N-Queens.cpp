bool isPossible(int n,int row,int col,vector<vector<int>> board){
    // For same column
    for(int i=row-1;i>=0;i--){
        if(board[i][col]==1){
            return false;
        }
    }// for left diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }// For right diagonal
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }return true;
}

void nQueenHelper(int n,int row,vector<vector<int>> &board, vector<vector<int>> & ans){
    if(row==n){
        vector<int> temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp.push_back(board[i][j]);
            }
        }ans.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(isPossible(n,row,j,board)){
            board[row][j]=1;
            nQueenHelper(n,row+1,board,ans);
            board[row][j]=0;
        }
    }
}


vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>> board(n,vector<int>(n,0));
    nQueenHelper(n,0,board,ans);
    return ans;
    
}