#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
    // Write your code here.
    vector<int> answer;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=mat[i][j];
        }answer.push_back(sum);
        sum=0;
    }
    int maximum=answer[0];
    for(int i=0;i<answer.size();i++){
        if(answer[i]>maximum){
            maximum=answer[i];
        }
    }return maximum;
}
