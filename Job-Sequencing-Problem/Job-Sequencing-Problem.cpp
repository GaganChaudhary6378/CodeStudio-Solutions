#include <bits/stdc++.h> 
static bool cmp(vector<int> &a,vector<int>& b){
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),cmp);
    int max=INT_MIN;
    for(int i=0;i<jobs[0].size();i++){
        if(jobs[0][i]>max){
            max=jobs[0][i];
        }
    }
    int arr[max+1];

    for(int i=0;i<max+1;i++){
        arr[i]=-1;
    }

    int maxProfit=0;

    for(int i=0;i<jobs.size();i++){
        for(int j=jobs[i][0];j>0;j--){
            if(arr[j]==-1){
                arr[j]=i;
                maxProfit+=jobs[i][1];
                break;
            }
        }
    }return maxProfit;


}
