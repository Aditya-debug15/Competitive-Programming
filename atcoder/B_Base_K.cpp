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

ll changetod(ll a,ll k)
{
    ll aa=0;
    ll f=0;
    ll i=1;
    while(a!=0)
    {
        aa=a%10;
        f+=(aa*i);
        i*=k;
        a/=10;
    }
    return f;
}
void solve()
{
    ll k;
    cin>>k;
    ll a,b;
    cin>>a>>b;
    cout<<changetod(a,k)*changetod(b,k)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}