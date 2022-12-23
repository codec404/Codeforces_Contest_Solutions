#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
        ll getMaxFirst,getMax;
        if((n%k)==0){
            getMaxFirst=n/k;
            getMax=k;
        }else{
            getMaxFirst=n/k+1;
            getMax=(n%k);
        }
        
        
        
        ll a[m];
        
        for(int i=0; i<m; i++)
        {
            cin>>a[i];
            
        }
        
        for(int i=0; i<m; i++){
            if(a[i]==getMaxFirst){
                getMax--;
            }else if(a[i]>getMaxFirst){
                getMax=-1;
                break;
            }
        }
        
        if(getMax<0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
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
