#include <bits/stdc++.h> 
int countNumberOfPalindromeWords(string s)
{
    //Your code goes here
    istringstream ss(s);
    string word; 
    int count=0;
    while(ss >> word){
        std::transform(word.begin(), word.end(),word.begin(), ::toupper);
        int start=0;
        int end=word.size()-1;
        while(start<end){
            if(word[start]!=word[end]){
                break;
            }else{
                start++;
                end--;
            }
        }
        if(start>=end){
            count++;
        }
    }return count;
}