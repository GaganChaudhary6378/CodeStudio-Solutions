#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    if(n<0){
        return -2;
    }
    return n*factorial(n-1);
}
int main() {
    //Write your code here
    int n;
    cin>>n;
    int answer=factorial(n);
    if(answer==-2){
        cout<<"Error";
    }else{
    cout<<answer;
    }
    return 0;
}