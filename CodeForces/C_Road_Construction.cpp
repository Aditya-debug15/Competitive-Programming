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
    int n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    bool A[n+1];
    memset(A,true,sizeof(A));
    A[0]=false;
    fo(i,m)
    {
        int alpha,beta;
        cin>>alpha>>beta;
        A[alpha]=false;
        A[beta]=false;
    }
    int centre=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i])
        {
            centre=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i!=centre)
        {
            cout<<i<<" "<<centre<<endl;
        }
    }
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