int findDuplicate(vector<int> &arr, int n){
    // Write your code here.
    //Using count sort
    int i,f[n+1];

   int ans;
   for(i=0;i<=n;i++)
       f[i]=0;
   for(i=0;i<n;i++)
   {
       f[arr[i]]++;
       if( f[arr[i]]>1)
       {
           ans = arr[i];
           break;
       }
   }
   
   return ans;
   
}