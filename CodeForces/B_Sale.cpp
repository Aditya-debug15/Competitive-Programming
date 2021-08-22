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
    vi A(n);
    int max_sum=0;
    int num_neg=0;
    fo(i,n)
    {
        cin>>A[i];
        if(A[i]<0)
        {
            max_sum+=A[i];
            num_neg++;
        }
    }
    if(m>=num_neg)
    {
        cout<<max_sum*(-1)<<endl;
        return;
    }
    sort(A.begin(),A.end());
    max_sum=0;
    for(int i=0;i<m;i++)
    {
        max_sum+=A[i];
    }
    cout<<max_sum*(-1)<<endl;
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