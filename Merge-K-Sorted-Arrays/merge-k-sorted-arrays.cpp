#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> answer;
    for(int i=0;i<k;i++){
        for(int j=0;j<kArrays[i].size();j++){
            answer.push_back(kArrays[i][j]);
        }
    }sort(answer.begin(),answer.end());
    return answer;
}
