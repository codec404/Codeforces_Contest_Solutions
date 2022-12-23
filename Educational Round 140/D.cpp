#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    int countOne = 0, countZero = 0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        countOne++;
    }
    for(ll i =1<<countOne ;i<=(1<<n)-(1<<(n-countOne))+1;i++)
    {
        cout<<i<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
