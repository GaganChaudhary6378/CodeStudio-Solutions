#include <unordered_map>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    unordered_map<int,bool> seen;
    vector<int> answer;
    for(int i=0;i<arr.size();i++){
        if(seen.count(arr[i])>0){
            continue;
        }else{
            seen[arr[i]]=true;
            answer.push_back(arr[i]);
        }
    }return answer.size();
}