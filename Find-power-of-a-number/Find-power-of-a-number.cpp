#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here. 
    long long answer=1;
    if(N==0){
        return 1;
    }
    for(int i=0;i<N;i++){
        answer=answer*X;
    }return answer;
}