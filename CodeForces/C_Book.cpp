#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int, int>>
vi adj[200015];
int n;
vector<char> color;
vector<int> parent;
int cycle_start, cycle_end;
bool dfs(int v)
{
    color[v] = 1;
    for (int u : adj[v])
    {
        if (color[u] == 0)
        {
            parent[u] = v;
            if (dfs(u))
                return true;
        }
        else if (color[u] == 1)
        {
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;
    return false;
}
bool find_cycle()
{
    color.assign(n + 1, 0);
    parent.assign(n + 1, -1);
    cycle_start = -1;

    for (int v = 1; v <= n; v++)
    {
        if (color[v] == 0 && dfs(v))
            break;
    }

    if (cycle_start == -1)
    {
        return false;
    }
    else{
        return true;
    }
}
vector<ll> values;
vector<char> color2;
void dfs2(int v)
{
    color2[v]=1;
    ll dependency=0;
    for (int u : adj[v])
    {
        if (color2[u] == 0)
        {
            dfs2(u);
        }
        ll factor=values[u];
        if(u>v)
        {
            factor++;
        }
        dependency=max(dependency,factor);
    }
    values[v]=dependency;
}
void findanswer()
{
    ll answer=0;
    values.assign(n+1,0);
    color2.assign(n+1,0);
    for (int v = 1; v <= n; v++)
    {
        if (color2[v] == 0)
        {
            dfs2(v);
        }
        answer=max(answer,values[v]);
    }
    cout<<answer+1<<endl;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int alpha;
            cin >> alpha;
            adj[i + 1].push_back(alpha);
        }
    }
    if(find_cycle())
    {
        cout<<-1<<endl;
    }
    else
    {
        findanswer();
    }
    fo(i,n+1)
    {
        adj[i].clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}