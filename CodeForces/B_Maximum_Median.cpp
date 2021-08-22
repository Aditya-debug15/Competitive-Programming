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
    ll n,k;
    cin>>n>>k;
    vector<ll> A(n);
    fo(i,n)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    ll ans=A[n/2];
    int i=n/2 + 1;
    while(k>0 && i<n)
    {
        if(k>=(A[i]-A[n/2])*(i-n/2))
        {
            k-=(A[i]-A[n/2])*(i-n/2);
            A[n/2]=A[i];
        }
        else{
            A[n/2]+=(k/(i-n/2));
            k=0;
        }
        i++;
    }
    if(k!=0)
    {
        A[n/2]+=(k/(n-n/2));
    }
    cout<<A[n/2]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}