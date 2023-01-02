#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
    stack<char>st;
    if(str.size() == 0) return "";
    if(str.size() == 1) return str;
    string ans = "";
    
    for(int i = 0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    while(!st.empty())
    {
        char a = st.top();
        st.pop();
        ans += a;
    }
    return ans;
}