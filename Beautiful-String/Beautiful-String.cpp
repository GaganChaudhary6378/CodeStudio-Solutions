int getMin(string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            if(str[i]=='0')
                str[i+1]='1';
            else
            str[i+1]='0';
            count++;
        }
    }return count;
}

int makeBeautiful(string str) {
	// Write your code here
    int count = getMin(str);
    if(str[0]=='1')
        str[0] = '0';
    else
        str[0] = '1';
    int count1 = getMin(str);    
    
    return min(count,count1+1);
    
}