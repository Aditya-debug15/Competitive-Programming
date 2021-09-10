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
int find(vector<int> &parent, int u)
{
    if (parent[u] != u)
    {
        parent[u] = find(parent, parent[u]);
    }
    return parent[u];
}

void Union(vector<int> &rank, vector<int> &parent, int rootu, int rootv)
{
    if (rank[rootu] < rank[rootv])
    {
        parent[rootu] = rootv;
    }
    else if (rank[rootv] < rank[rootu])
    {
        parent[rootv] = rootu;
    }
    else
    {
        parent[rootv] = rootu;
        rank[rootu]++;
    }
}

void kruskal2(vector<pair<int, int>> &edges, vector<pair<int, int>> &edges2, int n)
{
    vector<int> parent(n + 1);
    vector<int> rank(n + 1);
    vector<int> parent2(n + 1);
    vector<int> rank2(n + 1);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
        parent2[i] = i;
        rank2[i] = 0;
    }

    int cnt = 0;
    vpi new_edges;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first, v = edges[i].second;

        int rootu = find(parent, u);
        int rootv = find(parent, v);

        if (rootu != rootv)
        {
            Union(rank, parent, rootu, rootv);
        }
    }
    for(int i=0;i<edges2.size();i++)
    {
        int u2 = edges2[i].first, v2 = edges2[i].second;

        int rootu2 = find(parent2, u2);
        int rootv2 = find(parent2, v2);

        if (rootu2 != rootv2)
        {
            Union(rank2, parent2, rootu2, rootv2);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int rootu1=find(parent,i);
            int rootv1=find(parent,j);
            int rootu2=find(parent2,i);
            int rootv2=find(parent2,j);
            if ((rootu1 != rootv1) && (rootu2 != rootv2))
            {
                cnt++;
                new_edges.push_back({i, j});
                Union(rank, parent, rootu1, rootv1);
                Union(rank2, parent2, rootu2, rootv2);
            }
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < new_edges.size(); i++)
    {
        cout << new_edges[i].first << " " << new_edges[i].second << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m1, m2;
    vpi edges;
    vpi edges2;
    cin >> n >> m1>> m2;
    fo(i, m1)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    fo(i, m2)
    {
        int u, v;
        cin >> u >> v;
        edges2.push_back({u, v});
    }
    kruskal2(edges, edges2, n);
}