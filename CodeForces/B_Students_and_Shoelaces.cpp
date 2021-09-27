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
    vector<vector<int>> graph;
    graph.resize(n+1);
    fo(i,n)
    {
        graph[i+1].resize(n+1);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            graph[i][j]=0;
        }
    }
    vi degree(n+1,0);
    fo(i,m)
    {
        int a,b;
        cin>>a>>b;
        graph[a][b]=1;
        graph[b][a]=1;
        degree[a]++;
        degree[b]++;
    }
    bool possible=true;
    int count=0;
    int taken=0;
    while(possible)
    {
        vi removal;
        for(int i=1;i<=n;i++)
        {
            if(degree[i]==1)
            {
                removal.push_back(i);
            }
        }
        if(removal.size()==0 || taken==n-1)
        {
            possible=false;
        }
        else
        {
            taken+=removal.size();
            count++;
            for(auto it:removal)
            {
                for(int j=1;j<=n;j++)
                {
                    if(graph[it][j]==1)
                    {
                        degree[j]--;
                        graph[j][it]=0;
                    }
                }
                degree[it]=0;
            }
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}