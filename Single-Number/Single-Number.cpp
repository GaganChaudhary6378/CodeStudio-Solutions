#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	// Write your code here.
	unordered_map<int,int> frequency;
    for(int i=0;i<n;i++){
        frequency[a[i]]++;
    }
    for (auto& it : frequency) {
        if(it.second==1){
            return it.first;
        }
    }
}
