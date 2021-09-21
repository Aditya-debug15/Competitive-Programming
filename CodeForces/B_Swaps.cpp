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
    int n;
    cin>>n;
    vpi A(n);
    vpi B(n);
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        A[i]={alpha,i};
    }
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        B[i]={alpha,i};
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    vi dp(n);
    dp[0]=A[0].second;
    for(int i=1;i<n;i++)
        dp[i]=min(dp[i-1],A[i].second);
    int answer=A[0].second+B[0].second;
    for(int i=1;i<n;i++)
        answer=min(answer,dp[i]+B[i].second);
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