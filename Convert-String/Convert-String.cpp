#include <bits/stdc++.h> 
#include <cctype>
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	for(int i=0;i<str.length();i++){
		str[0]=toupper(str[0]);
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}return str;
}