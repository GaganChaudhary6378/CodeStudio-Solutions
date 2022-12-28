#include <bits/stdc++.h>
string reverseString(string str)
{
    // Write your code here.
    vector<string> answer;
    istringstream ss(str);
 
    string word; 
    while (ss >> word)
    {
        answer.push_back(word);
    }reverse(answer.begin(),answer.end());
    
    string finalAns="";
    for(int i=0;i<answer.size();i++){
        finalAns+=answer[i];
        finalAns+=" ";
    }return finalAns;
}