#include <bits/stdc++.h> 
#include <string>
bool checkPalindrome(string s)
{
    // Write your code here.
    string p="";
    for (int i = 0; i <s.size(); i++){  
        if (s[i] >='a' && s[i] <= 'z'){
            p.push_back(s[i]);
        }if(s[i]>='A' and s[i]<='Z' or s[i]>='0' and s[i]<='9'){
           char ch=tolower(s[i]);
           p.push_back(ch);
        }
 }  
    string k="";
    for(int i=p.size()-1;i>=0;i--){
        k.push_back(p[i]);
    }
    
    for(int i=0;i<=p.size();i++){
        if(p[i]==k[i]){
            continue;
        }else{
            return false;
        }
    }return true;
}