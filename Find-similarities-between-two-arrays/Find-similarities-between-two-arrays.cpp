#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.
    pair<int,int> answer;
    vector<int> temp;
    vector<int> finalArr;
    int common=0;
    for(int i=0;i<arr1.size();i++){
        temp.push_back(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        temp.push_back(arr2[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        if(temp[i]==temp[i+1]){
            common++;
        }
    }
    unordered_map<int,bool> seen;
    for(int i=0;i<temp.size();i++){
        if(seen.count(temp[i])>0){
            continue;
        }
        seen[temp[i]]=true;
        finalArr.push_back(temp[i]);
    }
    int uniqueElements=finalArr.size();
    answer.first=common;
    answer.second=uniqueElements;
    return answer;
}