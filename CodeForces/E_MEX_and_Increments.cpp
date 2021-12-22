#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
ll M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int,int>>
void solve()
{
    int n;
    cin>>n;
    vi A(n+1,0);
    vi dp(n+1);
    vi dp1(n+1,0);
    multiset<int> m;
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        A[alpha]++;
        m.insert(alpha);
    }
    // dp[i] = answer for ith index
    // dp[i] = make atleast 1 (0,1,2,3,4,5,....i-1) + remove i
    // dp[i-1] = make atleast 1 (0,1,2,3,......i-2) + remove i-1
    // dp[i] = dp[i-1] - cnt[i-1] + cnt[i] + make at least 1 (i-1)
    // to make an element we need a multiset and will use lower bound
    
    // base state
    // dp[0] = cnt[0]
    dp[0]=A[0];
    dp1[0]=A[0];
    cout<<dp[0]<<" ";
    bool possi=true;
    for(int i=1;i<=n;i++)
    {
        dp1[i]=dp1[i-1]+A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(dp1[i-1]>=i && possi)
        {
            dp[i]=dp[i-1]-A[i-1]+A[i];
            auto it = m.upper_bound(i-1);
                it--;
                int extra = *it;
                dp[i]+=(i-extra-1);
                m.erase(it);
            cout<<dp[i]<<" ";
        }
        else{
            cout<<-1<<" ";
            possi=false;
        }
    }
    cout<<endl;

}
signed main()
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