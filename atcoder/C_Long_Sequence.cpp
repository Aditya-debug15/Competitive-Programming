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
    ll n;
    cin >> n;
    vector<ll> A(n);
    ll bigi = 0;
    fo(i, n)
    {
        cin >> A[i];
        bigi += A[i];
    }
    ll x;
    cin >> x;
    ll count = ((x / bigi) * n);
    ll xs = (x/bigi)*bigi;
    if (xs > x)
    {
        cout << count << endl;
        return;
    }
    else
    {
        fo(i, n)
        {
            xs += A[i];
            count++;
            if (xs > x)
            {
                cout << count << endl;
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}