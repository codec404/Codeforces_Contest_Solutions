#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum = s[0] - '0';
    for(int i=1;i<n;i++)
    {
        if(sum == 0)
        {
            cout<<"+";
            sum += s[i] -'0';
        }
        else
        {
            cout<<"-";
            sum-= s[i]-'0';
        }
    }
    cout<<"\n";
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
