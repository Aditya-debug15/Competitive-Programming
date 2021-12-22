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
    ll a, s;
    string t;
    cin >> a >> s;
    while (s > 0 && s > a)
    {
        int n1, n2;
        n1 = s % 10;
        n2 = a % 10;
        s /= 10;
        a /= 10;
        if (n1 >= n2)
        {
            t.push_back(n1 - n2 + '0');
        }
        else
        {
            int m;
            m = s % 10;
            m *= 10;
            n1 += m;
            s /= 10;
            if (n1 - n2 <= 9 && n1 - n2 > 0)
            {
                t.push_back(n1 - n2 + '0');
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (s < a)
    {
        cout << -1 << endl;
        return;
    }
    reverse(t.begin(), t.end());
    cout << t << endl;
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