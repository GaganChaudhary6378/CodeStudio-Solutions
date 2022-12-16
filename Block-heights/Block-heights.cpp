#include <bits/stdc++.h> 

int getNumberOfBlocks(vector<int> &heights) {
    vector<int> temp;
    int count=0;
    for(int i=0;i<heights.size();i++){
        temp.push_back(heights[i]);
    }
    sort(temp.begin(),temp.end());
    for(int j=0;j<temp.size();j++){
        if(temp[j]!=heights[j]){
            count++;
        }
    }return count;
}
