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
    ll n, s;
    cin >> n >> s;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    else
    {
        if (n % 2 == 1)
        {
            ll rem = n;
            rem -= (n / 2);
            cout << s / rem << endl;
        }
        else
        {
            ll rem=n;
            rem-=(n/2);
            rem++;
            cout<<s/rem<<endl;
        }
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