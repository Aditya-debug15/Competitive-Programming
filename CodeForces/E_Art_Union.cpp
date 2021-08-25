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
    int m,n;
    cin>>m>>n;
    vector<vector<int>> last(m);
    fo(i,m)
    {
        last[i].resize(n);
        fo(j,n)
        {
            int alpha;
            cin>>alpha;
            if(i==0 && j==0)
            {
                last[i][j]=alpha;
            }
            else if(i==0)
            {
                last[i][j]=alpha+last[i][j-1];
            }
            else if(j==0)
            {
                last[i][j]=alpha+last[i-1][j];
            }
            else{
                last[i][j]=alpha+max(last[i-1][j],last[i][j-1]);
            }
        }
    }
    fo(i,m)
    {
        cout<<last[i][n-1]<<" ";
    }
    cout<<endl;
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