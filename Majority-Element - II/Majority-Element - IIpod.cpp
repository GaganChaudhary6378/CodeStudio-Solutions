#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int > answer;
    unordered_map<int,int> freq;
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for(auto it: freq){
        if(it.second > ((arr.size())/3)){
            answer.push_back(it.first);
        }
    }return answer;
}