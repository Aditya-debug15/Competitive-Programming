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
    vector<bool> A(n,false);
    int edge_count=0;
    fo(i,m)
    {
        int a,b,c;
        cin>>a>>b>>c;
        A[b-1]=true;
    }
    int free=0;
    int count=0;
    fo(i,n)
    {
        if(A[i]==false && free==0)
        {
            free=i+1;
        }
    }
    fo(i,n)
    {
        if(free==i+1)
        {
            continue;
        }
        cout<<free<<" "<<i+1<<endl;
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