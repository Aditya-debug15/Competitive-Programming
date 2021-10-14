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
    ll n,h;
    cin>>n>>h;
    vector<ll> A(n);
    fo(i,n)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    ll wa=A[n-1];
    ll wb=A[n-2];
    if(wa>=h)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        ll n=h/(wa+wb);
        ll r = h%(wa+wb);
        if(r==0)
        {
            cout<<2*n<<endl;
            return;
        }
        if(r<=wa)
        {
            cout<< (2*n)+1<<endl;
        }
        else{
            cout<< 2*n +2 <<endl;
        }
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