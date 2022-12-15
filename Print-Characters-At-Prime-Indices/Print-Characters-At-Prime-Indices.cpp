#include <bits/stdc++.h> 

bool checkPrime(int n){
    int i, flag = 0;
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    return true;
  else
    return false;
}
string printCharactersAtPrimeIndices(string str, int n) {
	// Write your code here.
    string answer="";
    bool flag;
    for(int i=2;i<n;i++){
        flag=checkPrime(i);
            if(flag==true){
                answer+=str[i];
            }
    }return answer;
}