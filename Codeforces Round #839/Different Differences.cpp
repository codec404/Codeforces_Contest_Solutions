#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int k,n;
    cin>>k>>n;
    vector<int> v;
    int sum = 1;
    cout<<sum<<" ";
    for(int i=1;i<k;i++)
    {
        if(n-sum>=k-1)
        sum+=i;
        else
        sum++;
        v.push_back(sum);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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
