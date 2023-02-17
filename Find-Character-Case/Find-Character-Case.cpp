#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char n;
    cin>>n;
    if(n>'A' && n<'Z'){
        cout<<1<<endl;
    }else if(n>'a' && n<'z'){
        cout<<0<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}