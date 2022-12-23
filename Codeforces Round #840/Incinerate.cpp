#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> v;
    ll h[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        if(h[i]<=k)
        {
            continue;
        }
        v.push({p[i],h[i]});
    }
    ll getAns = k;
    while(!v.empty() && k>0)
    {
        while(!v.empty() && v.top().second<=getAns)
        {
            v.pop();
        }
        k-=v.top().first;
        getAns+=k;
    }
    if(v.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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
