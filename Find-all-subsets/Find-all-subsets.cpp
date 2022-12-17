
void helper(vector<int>& arr,int i,vector<int> &temp,vector<vector<int>>&answer){
    //Base Case
    if(i==arr.size()){
        answer.push_back(temp);
        return;
    }//We are including a particular element
    temp.push_back(arr[i]);
    helper(arr,i+1,temp,answer);
    temp.pop_back();
    helper(arr,i+1,temp,answer);
}
vector<vector<int>> FindAllSubsets(int n, vector<int> &arr){
    // Write your code here
    vector<vector<int>>answer;
    vector<int> temp;
    helper(arr,0,temp,answer);
    return answer;
    

}