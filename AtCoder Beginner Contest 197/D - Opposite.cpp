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
    int n;
    cin>>n;
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float x = (x1+x2)/2;
    float y = (y1+y2)/2;
    cout<<x + cos((2*M_PI)/n)*(x1-x)-sin((2*M_PI)/n)*(y1-y)<<" "<<y+sin((2*M_PI)/n)*(x1-x) + cos((2*M_PI)/n)*(y1-y);
 
    return 0;
    
}