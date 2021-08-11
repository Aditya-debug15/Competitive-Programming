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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    */
    /*
    set<int> s;
    if(!s.empty())
        cout<<*s.rbegin();
    else
        cout<<"empty";
    */
    int answer3 = 0;
    int n, m;
    cin >> n >> m;
    vector<set<int>> graph(n + 1);
    vector<bool> check(n + 1, false);
    fo(i, m)
    {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (graph[i].lower_bound(i)==graph[i].end())
        {
            answer3++;
            check[i] = true;
        }
    }
    int q;
    cin >> q;
    fo(i, q)
    {
        int op;
        cin >> op;
        if (op == 3)
            cout << answer3 << endl;
        else
        {
            int a, b;
            cin >> a >> b;
            if (op == 1)
            {
                graph[a].insert(b);
                graph[b].insert(a);
            }
            else
            {
                graph[a].erase(b);
                graph[b].erase(a);
            }
            if (check[a])
                answer3--;
            if(check[b])
                answer3--;
            check[a]=false;
            check[b]=false;
            if (graph[a].lower_bound(a) == graph[a].end())
            {
                answer3++;
                check[a] = true;
            }
            if (graph[b].lower_bound(b) == graph[b].end())
            {
                answer3++;
                check[b] = true;
            }
        }
    }
}