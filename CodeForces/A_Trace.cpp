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
#define pi 3.1415926536
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
    long double area = 0;
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                area += (A[i] * A[i]);
            }
            else
            {
                area -= (A[i] * A[i]);
            }
        }
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                area += (A[i] * A[i]);
            }
            else
            {
                area -= (A[i] * A[i]);
            }
        }

    }
    cout << setprecision(12) << area * pi << endl;
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