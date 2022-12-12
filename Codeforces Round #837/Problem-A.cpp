#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    unordered_map<ll ,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    if(mp[a[0]]==n)
    {
        cout<<(n-1)*n<<endl;
        return;
    }
    ll firstVal = mp[a[0]];
    ll lastVal = mp[a[n-1]];
    int res = 0;
    cout<<firstVal*lastVal*2<<endl;
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
