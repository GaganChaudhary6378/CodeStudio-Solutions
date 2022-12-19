#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> answer;
    unordered_map<int,int> count;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(count[arr[i]]>floor((arr.size())/3)){
            answer.push_back(arr[i]);
        }
    }
    unordered_map<int,bool> seen;
    vector<int> answer1;
    for(int i=0;i<answer.size();i++){
        if(seen.count(answer[i])>0){
            continue;
        }else{
            seen[answer[i]]=true;
            answer1.push_back(answer[i]);
        }
    }return answer1;
}