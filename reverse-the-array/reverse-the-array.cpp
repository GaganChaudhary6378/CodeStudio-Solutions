void reverseArray(vector<int> &arr , int m)
{
    int i=m+1;
    for(int j=arr.size()-1;j>i;j--){
        int current=arr[i];
        arr[i]=arr[j];
        arr[j]=current;
        i++;
    }
}
    
    