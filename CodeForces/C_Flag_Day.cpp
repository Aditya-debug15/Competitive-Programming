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
void solve()
{
    int n, m;
    cin >> n >> m;
    char All[n+1];
    memset(All, '.', n+1);
    fo(i, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (All[a] == '.' && All[b] == '.' && All[c] == '.')
        {
            All[a] = '1';
            All[b] = '2';
            All[c] = '3';
        }
        else
        {
            if (All[a] != '.')
            {
                int val1 = All[a] - '0';
                if (All[b] != '.')
                {
                    int val2 = All[b] - '1';
                    val2 = 6 - val2 - val1;
                    All[c] = val2 + '0';
                }
                else if (All[c] != '.')
                {
                    int val2 = All[c] - '1';
                    val2 = 6 - val2 - val1;
                    All[b] = val2 + '0';
                }
                else
                {
                    if (val1 == 1)
                    {
                        All[b] = '2';
                        All[c] = '3';
                    }
                    if (val1 == 2)
                    {
                        All[b] = '1';
                        All[c] = '3';
                    }
                    if (val1 == 3)
                    {
                        All[b] = '1';
                        All[c] = '2';
                    }
                }
            }
            else if (All[b] != '.')
            {
                int val1 = All[b] - '0';
                if (All[c] != '.')
                {
                    int val2 = All[c] - '1';
                    val2 = 6 - val2 - val1;
                    All[a] = val2 + '0';
                }
                else
                {
                    if (val1 == 1)
                    {
                        All[a] = '2';
                        All[c] = '3';
                    }
                    if (val1 == 2)
                    {
                        All[a] = '1';
                        All[c] = '3';
                    }
                    if (val1 == 3)
                    {
                        All[a] = '1';
                        All[c] = '2';
                    }
                }
            }
            else if (All[c] != '.')
            {
                int val1=All[c]-'0';
                if (val1 == 1)
                {
                    All[a] = '2';
                    All[b] = '3';
                }
                if (val1 == 2)
                {
                    All[a] = '1';
                    All[b] = '3';
                }
                if (val1 == 3)
                {
                    All[a] = '1';
                    All[b] = '2';
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<All[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}