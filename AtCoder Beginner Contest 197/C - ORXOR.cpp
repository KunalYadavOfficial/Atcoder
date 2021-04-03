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
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
        ll min_xor = INT_MAX;
    for(int i=0;i<(1<<n);i++)
    {
        vector<ll> b;
        ll total=0;
        for(int j=0;j<n;j++)
        {
            total |=arr[j];
            if(i&(1<<j))
            {
                b.push_back(total);
                total=0;
            }
        }
        if(total) 
            b.push_back(total);
             //total=0;
 
        ll cal=0;        
        for(ll i=0;i<b.size();i++)
        {
            cal ^=b[i];
        }
        min_xor = min(min_xor,cal);
        b.clear();     
    }    
    
    cout<<min_xor;
    return 0;
    
}