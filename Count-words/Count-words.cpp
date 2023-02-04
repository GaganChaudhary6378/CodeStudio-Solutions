#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code here
    int count=0;
    for(int i=0;i<input.size();i++){
        if(int(input[i])==32 ){
            count++;
        }
    }return count+1;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}