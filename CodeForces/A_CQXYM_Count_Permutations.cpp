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
    ll answer;
    cin>>answer;
    ll final1=1;
    ll final2=1;
    for(ll i=2;i<=answer;i++)
    {
        final1*=(i);
        final1%=M;
    }
    final2=final1;
    for(ll i=1;i<=answer;i++)
    {
        final2*=(answer+i);
        final2%=M;
    }
    cout<<(final2-final1)%M<<endl;
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