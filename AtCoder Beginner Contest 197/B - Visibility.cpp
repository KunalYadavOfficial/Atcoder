#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
#include <bits/stdc++.h>
 
#define MAX 1000001
 
#define ll long long
 
using namespace std;
 
void debugMode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
 
int main()
{
    debugMode();
    unordered_map<pair<int,int>, char,hash_pair> hash;
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    int i=1,j=1;
    int t=h;
    while(t--)
    {
        j=1;
        string s;
        cin>>s;
        for(auto c:s)
        {
                pair<int ,int> p(i,j);
                hash[p]=c;
                j++;
        }
        i++;
    }
int v=1;
    //right side
    for(int i=y+1;i<=w;i++)
    {
        pair<int ,int> p(x,i);
        if(hash[p]=='.') v++;
        else 
            break;
    }
    
    // left side
    for(int i=y-1;i>=1;i--)
    {
        pair<int ,int> p(x,i);
        if(hash[p]=='.') v++;
        else 
            break;
    }
 
    // upward
    for(int i=x-1;i>=1;i--)
    {
        pair<int ,int> p(i,y);
        if(hash[p]=='.') v++;
        else 
            break;
    }
 
    for(int i=x+1;i<=h;i++)
    {
        pair<int ,int> p(i,y);
        if(hash[p]=='.') v++;
        else 
            break;
    }
 
    cout<<v;
    return 0;
    
}