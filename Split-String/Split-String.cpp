#include <bits/stdc++.h> 
bool splitString(string &str){
    // Write your code here.
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    int n=str.length();
    int mid=n/2;
    int vowel1=0;
    int vowel2=0;
    for(int i=0;i<mid;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel1++;
        }
    }
    for(int i=mid;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel2++;
        }
    }return vowel1==vowel2;
}