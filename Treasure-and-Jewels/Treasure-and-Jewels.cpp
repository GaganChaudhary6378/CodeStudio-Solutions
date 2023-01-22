#include <bits/stdc++.h> 
int treasureAndJewels(int n, int m, string stones, string jewels)
{
    // Write your code here.
    int count=0;
    for(int i=0;i<jewels.size();i++){
        for(int j=0;j<stones.size();j++){
            if(jewels[i]==stones[j]){
                count++;
            }
        }
    }return count;
}