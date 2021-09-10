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
int mod(int n)
{
    if(n>0)
        return n;
    else 
        return -1*n;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int me[m];
    fo(i, m)
    {
        me[i] = 0;
    }
    fo(i, n)
    {
        int alpha;
        cin >> alpha;
        alpha = alpha % m;
        me[alpha]++;
    }
    int final_a = 0;
    if (me[0] > 0)
        final_a++;
    for (int i = 1; i <= m / 2; i++)
    {
        if (i != m - i)
        {
            int z = (me[i] - me[m - i]);
            if ((me[i] != 0 || me[m - i] != 0) && (z < 2) && (z > -2))
                final_a++;
            else if ((me[i] != 0 || me[m - i] != 0) && (z >= 2 || z <= -2))
                final_a += mod(z);
        }
        else if (i == m - i && me[i] != 0)
            final_a++;
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