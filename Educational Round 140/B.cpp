#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> getFirstAns(n);
    for(int i = 0;i<n;i++)
    {
        cin>>getFirstAns[i];
    }
    sort(getFirstAns.begin()+1,getFirstAns.end());
    ll first = getFirstAns[0];
    int k = 1;
    while(k<n)
    {
        if(getFirstAns[k]>first)
        first+= (getFirstAns[k]-first+1)/2;
        k++;
    }
    cout<<first<<endl;
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
