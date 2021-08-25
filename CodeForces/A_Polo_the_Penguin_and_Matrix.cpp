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
    int n,m,d;
    cin>>n>>m>>d;
    vi A(n*m);
    fo(i,n*m)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    ll count=0;
    ll mid=A[(n*m)/2];
    fo(i,n*m)
    {
        ll val=mid-A[i];
        if(val%d !=0)
        {
            cout<<-1<<endl;
            return;
        }
        val/=d;
        if(val<0)
            val*=-1;
        count+=val;
    }
    cout<<count<<endl;
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