#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    for(int i=1;i<=4;i++)
    {
        if(a[0][0]<a[0][1] && a[0][0]<a[1][0] && a[1][0]<a[1][1] && a[0][1]<a[1][1])
        {
            c++;
            break;
        }
        int temp = a[0][1];
        int temp2 = a[1][1];
        a[0][1] = a[0][0];
        a[1][1] = temp;
        temp = a[1][0];
        a[1][0] = temp2;
        a[0][0] = temp;
    }
    if(c)
    {
        cout<<"YES"<<endl;
    }
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
