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

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<vector<int>> dp;
    dp.resize(26);
    for(int i=0;i<26;i++)
    {
        dp[i].resize(n);
        if(s[0]==('a'+i))
            dp[i][0]=1;
        else
            dp[i][1]=0;
        for(int j=1;j<n;j++)
        {
            if(s[j]==('a'+i))
            {
                dp[i][j]=dp[i][j-1]+1;
            }
            else{
                dp[i][j]=dp[i][j-1];
            }
        }
    }
    for(int temp=0;temp<q;temp++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        ll final=0;
        for(int i=0;i<26;i++)
        {
            if(l==0)
            {
                final+=((dp[i][r])*(i+1));
            }
            else{
                final+=((dp[i][r]-dp[i][l-1])*(i+1));
            }
        }
        cout<<final<<endl;
    }
}