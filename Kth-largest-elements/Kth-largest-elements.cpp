#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    sort(a.begin(),a.end());    
    reverse(a.begin(),a.end());

    vector<int> answer;
    for(int i=0;i<k;i++){
         answer.push_back(a[i]);
    }reverse(answer.begin(),answer.end());
    return answer;
}