int magicIndex(vector<int> a, int n) {
	// Write your code here
    int magicIndex;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==i){
            magicIndex=i;
            flag=true;
        }
    }if(flag==false){
        magicIndex=-1;
    }
    return magicIndex;
}
