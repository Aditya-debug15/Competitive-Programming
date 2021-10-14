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
long long binpow(long long a, long long b) {
    a %= M;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}
bool isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)))
        return true;
    else
        return false;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    ll answer=0;
    for(int i=0;i<32;i++)
    {
        if(isKthBitSet(k,i+1))
        {
            answer+=binpow(n,i);
            answer%=M;
        }
    }
    cout<<answer<<endl;
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