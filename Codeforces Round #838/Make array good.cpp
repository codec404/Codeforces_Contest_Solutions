#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<pair<ll,ll>> p;
    for(int i=0;i<n;i++)
    {
        ll get;
        cin>>get;
        p.push_back({get,i});
    }
    sort(p.begin(),p.end());
    vector<pair<ll,ll>> getAns;
    ll count = 0;
    for(int i=1;i<n;i++)
    {
        if(p[i].first % p[i-1].first != 0)
        {
            ll store = p[i-1].first - (p[i].first%p[i-1].first);
            count++;
            getAns.push_back({(p[i].second + 1),store});
            p[i].first += store;
        }
    }
    cout<<count<<endl;
    for(auto x:getAns)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
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
