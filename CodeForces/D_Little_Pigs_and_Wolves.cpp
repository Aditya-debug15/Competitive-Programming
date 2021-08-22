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
    vector<vector<char>> A(n+1);
    for(int i=1;i<=n;i++)
    {
        A[i].resize(m+1);
        for(int j=1;j<=m;j++)
        {
            cin>>A[i][j];
        }
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i][j]=='W')
            {
                if(j>1 && A[i][j-1]=='P')
                {
                    count++;
                }
                else if(j<m && A[i][j+1]=='P')
                    count++;
                else if(i>1 && A[i-1][j]=='P')
                    count++;
                else if(i<n && A[i+1][j]=='P')
                    count++;
            }
        }
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