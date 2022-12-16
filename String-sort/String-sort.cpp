#include <bits/stdc++.h> 
char getMax(int a[], int n) {  
   char max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}  
string stringSort(string s){
    // Write your code here.
    int n=s.length();
    int a[n];
//     sort(c.begin(),c.end());
    for(int i=0;i<n;i++){
        a[i]=s[i];
    }
    char output[n+1];  
    char max = getMax(a, n);  
   int count[max+1]; //create count array with size [max+1]  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; // Initialize count array with all zeros  
  }  
    
  for (int i = 0; i < n; i++) // Store the count of each element  
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; //find cumulative frequency  
  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--; // decrease count for same numbers  
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; //store the sorted elements into main array  
   }
    
    string answer="";
    for(int i=0;i<n;i++){
        answer+=a[i];
    }return answer;
}
