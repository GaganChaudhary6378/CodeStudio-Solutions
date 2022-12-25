class Solution {
public:
    int Length(string s){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }return count;
}
bool isPalindrome(string s)
{
    // Write your code here.
//     int length=strlen(s)+1;
    int length=Length(s);
//     cout<<length;
//     char str[length+1];
    string newS="";
    for(int i=0;i<length;i++){
        if((int(s[i])>=32 && int(s[i])<=47) ||(int(s[i])>=58 && int(s[i])<=64)|| (int(s[i])>=91 && int(s[i])<=96) ||(int(s[i])>=123 && int(s[i])<=127)){
            continue;
        }else{
            newS+=s[i];
        }
    }
    s=newS;
//     cout<<newLength;
    std::transform(s.begin(), s.end(),s.begin(), ::tolower);
//     cout<<s;
    int start=0;
    int end=s.size()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }else{
            start++;
            end--;
        }
    }return true;
}
};