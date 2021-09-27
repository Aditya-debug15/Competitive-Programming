#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int,int>>
void solve()
{
    ll n;
    cin>>n;
    if(n%4==0)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n/4;i++)
        {
            cout<<i<<" ";
        }
        for(int i=3*(n/4)+1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=n/4+1;i<=3*(n/4);i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}