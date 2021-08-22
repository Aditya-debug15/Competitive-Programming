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
    cin >> n;
    vi A(n);
    fo(i, n)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long double b = A[n - 1];
    long double a = A[0];
    long double a_len = 1, b_len = 1;
    for (int i = 1; i < n - 1; i++)
    {
        a += A[i];
        a_len++;
    }
    long double final = (b / b_len) + (a / a_len);
    cout << final << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(9);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}