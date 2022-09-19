pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> ans;
    int firstOccurence;
    int lastOccurence;
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag1++;
            firstOccurence=i;
            break;
        }
    }
    if(flag1==0){
            firstOccurence=-1;
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            flag2++;
            lastOccurence=i;
            break;
        }
    }
    if(flag2==0){
            lastOccurence=-1;
    }
    ans=make_pair(firstOccurence,lastOccurence);
    return ans;
}
