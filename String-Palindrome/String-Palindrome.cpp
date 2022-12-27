int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }return count;
}
bool checkPalindrome(char str[]) {
    // Write your code here
   int strLength=length(str);
   // Now calculate mid point of string array
   int start=0;
    int last=strLength-1;
    while(start<=last){
        if(str[start]!=str[last]){
            return false;
        }else{
            start++;
            last--;
        }
    }return true;
}
