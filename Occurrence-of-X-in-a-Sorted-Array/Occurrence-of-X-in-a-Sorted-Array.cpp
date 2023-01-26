int countOccurences(int arr[], int n, int X)
{
	//Write your code here
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==X){
			count++;
		}
	}return count;
}