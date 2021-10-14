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
    ll sum = 0;
    map<ll, ll> m;
    fo(i, n)
    {
        cin >> A[i];
        sum += A[i];
        m[A[i]]++;
    }
    sum*=2;
    if (sum % n != 0)
    {
        cout << 0 << endl;
        return;
    }
    ll k = sum / n;
    ll twice_count = 0;

    for (int i = 0; i < n; i++)
    {
        if(k>=A[i])
            twice_count += m[k - A[i]];
        if (k - A[i] == A[i])
            twice_count--;
    }
    cout<<twice_count/2<<endl;
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