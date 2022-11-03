#include <unordered_map>
#include <vector>
string removeDuplicates(string str, int n)
{
    //Write your code here.
    unordered_map<char,bool> seen;
    vector<char> answer;
    for(int i=0;i<str.length();i++){
        if(seen.count(str[i])>0){
            continue;
        }seen[str[i]]=true;
        answer.push_back(str[i]);
    }string finalOutput="";
    for(int i=0;i<answer.size();i++){
        finalOutput+=answer[i];
    }return finalOutput;   
}