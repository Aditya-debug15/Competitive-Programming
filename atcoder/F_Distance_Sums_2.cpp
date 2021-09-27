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
ll n;
vector<ll> graph[200015];
vector<ll> answers;
vector<ll> subtree;
void dfs(ll v,ll parent,ll d)
{
    answers[1]+=d;
    for (ll u : graph[v])
    {
        if(u!=parent)
        {
            dfs(u,v,d+1);
            subtree[v]+=subtree[u];
        }
    }
}
void dfs2(ll v, ll parent)
{
    for(ll u:graph[v])
    {
        if(u!=parent)
        {
            // This means u is adjacent vertex of v and != condition is to check if it is not done twice
            answers[u]=answers[v]+n-(2*subtree[u]);
            dfs2(u,v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    fo(i,n-1)
    {
        ll alpha,beta;
        cin>>alpha>>beta;
        graph[alpha].push_back(beta);
        graph[beta].push_back(alpha);
    }
    answers.assign(n+1,0);
    subtree.assign(n+1,1);
    dfs(1,0,0);
    dfs2(1,0);
    for(int i=1;i<=n;i++)
    {
        cout<<answers[i]<<endl;
    }
}