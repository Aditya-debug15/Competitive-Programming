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
    ll k;
    ll r,c;
    cin>>k;
    ll value=ceil(sqrt(k));
    ll square=value*value;
    ll diagnol=square-value+1;
    if(k>diagnol)
    {
        r=value;
        c=value-(k-diagnol);
    }
    else if(k==diagnol)
    {
        r=value;
        c=value;
    }
    else{
        c=value;
        r=value-(diagnol-k);
    }
    cout<<r<<" "<<c<<endl;;
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