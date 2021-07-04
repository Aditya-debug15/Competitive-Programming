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
ll lcm(ll a, ll b)
{
    ll l=a/(__gcd(a,b));
    l*=b;
    return l;
}
void solve()
{
    ll n;
    cin>>n;
    ll looper=2;
    ll looper_inc=3;
    ll ans=(n%M);
    ans*=2;
    ans%=M;
    ll extra;
    while(looper<=n)
    {
        extra=n/looper;
        ans+=(extra);
        ans%=M;
        ll multiplier=lcm(looper,looper_inc);
        looper=multiplier;
        looper_inc++;
    }
    ans=ans%M;
    cout<<ans<<endl;
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