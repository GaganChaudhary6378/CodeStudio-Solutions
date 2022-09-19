int binarySearch(int *input, int n, int val)
{
    int start=0;
    int end=n;
    if(n==1){
        
    }
    while(start<=end){
        int mid=(start+end)/2;
        if(val==input[mid]){
            return mid;
        }else if(val<input[mid]){
            end=mid-1;
        }else if(val>input[mid]){
            start=mid+1;
        }
    }return -1;
}