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
 
int main()
{
    debugMode();
    string s;
    cin>>s;
    char t = s[0];
    s[0]=s[1];
    s[1]=s[2];
    s[2]=t;
    cout<<s;
    return 0;
    
}