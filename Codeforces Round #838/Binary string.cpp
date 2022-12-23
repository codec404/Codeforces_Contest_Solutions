#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count = 1,ans = 1;
    for(int i =1;i<n;i++)
    {
        if(s[i-1] == s[i])
        count += count;
        else
        count = 1;
        count %=mod;
        ans+=count;
        ans%=mod;
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
