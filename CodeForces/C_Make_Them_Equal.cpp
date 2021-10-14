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
    int n;
    char character;
    cin >> n >> character;
    string s;
    cin >> s;
    int count = 0;
    fo(i, n)
    {
        if (s[i] != character)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (int x = 2; x <= n; x++)
    {
        bool possible = true;
        for (int i = x - 1; i < n; i += x)
        {
            if (s[i] != character)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n - 1 << " " << n << endl;
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