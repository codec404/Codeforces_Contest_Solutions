#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> noFriendList(n+1,n+1);
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        noFriendList[a] = min(noFriendList[a],b);
    }
    for(int i=n-1;i>=1;i--)
    {
        noFriendList[i] = min(noFriendList[i],noFriendList[i+1]);
    }
    ll ans = 0;
    for(int i=n;i>=1;i--)
    {
        ans+=noFriendList[i]-i;
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
