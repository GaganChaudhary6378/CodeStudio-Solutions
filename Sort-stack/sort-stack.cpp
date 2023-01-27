#include <bits/stdc++.h> 
stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	stack<int> answer;
	vector<int> temp;
	while(s.size()!=0){
		temp.push_back(s.top());
		s.pop();
	}
	sort(temp.begin(),temp.end());
	for(int i=0;i<temp.size();i++){
		answer.push(temp[i]);
	}
	return answer;
}