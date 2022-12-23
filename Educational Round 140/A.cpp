#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x1,y1;
    cin>>x1>>y1;
    ll x2,y2;
    cin>>x2>>y2;
    ll x3,y3;
    cin>>x3>>y3;
    if(x1 != x2 && x1 != x3 && x2 !=x3)
    cout<<"Yes"<<endl;
    else if(y1 != y2 && y1 != y3 && y2 !=y3)
    cout<<"Yes"<<endl;
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
