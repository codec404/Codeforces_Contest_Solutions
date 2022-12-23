#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    ll getSum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        getSum +=a[i];
    }
    ll getMax = *max_element(a,a+n);
    if(n>=4)
    {
        cout<<max(n*getMax,getSum)<<endl;
        return;
    }
    else{
        if(n==3)
        {
            ll a1 = a[0] , a2 = a[1] , a3 = a[2];
            ll sum = getSum;
            sum = max(sum , 3*a1);
            sum = max(sum,3*a3);
            sum = max(sum, a1+2*abs(a2-a3));
            sum = max(sum,a3+2*abs(a1-a2));
            sum = max(sum,3*abs(a1-a2));
            sum = max(sum,3*abs(a2-a3));
            cout<<sum<<endl;
            return;
        }
        else if(n==2)
        {   
            cout<<max(getSum,2*abs(a[1]-a[0]))<<endl;
            return;
        }
    }
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
