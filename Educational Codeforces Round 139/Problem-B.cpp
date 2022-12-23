#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int k=2;// Minimum one two lengthed non overlapping substring required
    unordered_map<string,ll> mp;
    bool flag = false;
    for(int i=1;i<n;i++)
    {
        string current="";
        current+=s[i-1];
        current+=s[i];
        if(mp.find(current)!=mp.end())
        {
            if(i-mp[current]>=k)
            {   flag = true;
                break;// Minimum one substring is required to be true
            }
        }
        else{
                mp[current] = i;
            }
    }

    if(flag)
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

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
