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
    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    ll m = 1;
    if (a == 1)
    {
        ll extra= n-1;
        if(extra %b ==0)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    else
    {

        while (m <= n)
        {
            ll extra = n - m;
            if (extra % b == 0)
            {
                cout << "Yes" << endl;
                return;
            }
            m = m * a;
        }
    }
    cout << "No" << endl;
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