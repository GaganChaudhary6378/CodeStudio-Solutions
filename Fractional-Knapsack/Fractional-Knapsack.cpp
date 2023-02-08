#include <bits/stdc++.h> 
bool cmp(pair<int,int> a,pair<int,int> b){
    double a1=(double)a.second/a.first;    
    double b1=(double)b.second/b.first;
    return a1>b1;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),cmp);

    double answer;

    for(int i=0;i<n;i++){
        if(items[i].first<=w){
            answer+=items[i].second;
            w-=items[i].first;
            continue;
        }
        double remaining=(double)items[i].second/items[i].first;
        answer+=remaining*w;
        break;
    }
    return answer;
}