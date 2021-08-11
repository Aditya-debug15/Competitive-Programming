#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
const int N=100005;
#define vi vector<int>
#define vpi vector<pair<int,int>>
vi graph[N];
vi centroid;
vi size;
int n;
void dfs(int x,int prev)
{
    size[x] = 1;
    bool is_centroid = true;
    for (auto v : graph[x]) if (v != prev) {
            dfs(v, x);
            size[x] += size[v];
            if (size[v] > n / 2) is_centroid = false;
    }
    if (n - size[x] > n / 2) is_centroid = false;
    if (is_centroid) centroid.push_back(x);
}
void solve()
{
    cin>>n;
    int temp_x,temp_y;
    fo(i,n-1)
    {
        int x,y;
        cin>>x>>y;
        temp_x=x;
        temp_y=y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    size.resize(n+1);
    fo(i,n+1) 
    {
        size[i]=0;
    }
    dfs(0,-1);
    if(centroid.size()==1)
    {
        cout<<temp_x<<" "<<temp_y<<endl;
        cout<<temp_x<<" "<<temp_y<<endl;
    }
    else{
        int p=centroid[0], q=centroid[1];
        if (graph[p][0]==q) {
            cout<<graph[p][1]+1<<" "<<p+1<<endl;
            cout<<q+1<<" "<<graph[p][1]+1<<endl;
            //return;
        }
        else {
            cout<<graph[p][0]+1<<" "<<p+1<<endl;
            cout<<q+1<<" "<<graph[p][0]+1<<endl;
            //return;
        }
    }
    size.clear();
    centroid.clear();
    fo(i,n)
    {
        graph[i].clear();
    }
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