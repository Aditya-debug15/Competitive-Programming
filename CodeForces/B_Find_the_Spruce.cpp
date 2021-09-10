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
    char A[n][m];
    ll final_a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    // each i,start and end precalculate karna hai
    int bakchodi[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int start = 0; start < m; start++)
        {
            if (A[i][start] != '*')
            {
                bakchodi[i][start] = 0;
            }
            else
            {
                int end = start;
                for (; end < m; end++)
                {
                    if (A[i][end] != '*')
                    {
                        break;
                    }
                }
                bakchodi[i][start] = end-1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == '*')
            {
                final_a++;
                for (int k = i + 1, l = 1; k < n; k++, l++)
                {
                    bool poss = true;
                    if (j + l < m && (j >= l))
                    {
                        if (bakchodi[k][j - l] < (j + l))
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                    if (!poss)
                    {
                        break;
                    }
                    final_a++;
                }
            }
        }
    }
    cout << final_a << endl;
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