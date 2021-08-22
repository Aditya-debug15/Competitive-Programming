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
    vi A(2 * n);
    fo(i, 2 * n)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int ans = INT_MAX;
    fo(i, 2 * n)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            int temp = 0;
            vi values_of_K;
            for (int k = 0; k < 2 * n; k++)
            {
                // to decide which 2 should be selected as single elements
                // running this o((2n)^3)
                if (k != i && k != j)
                {
                    values_of_K.push_back(A[k]);
                }
            }
            for (int it = 1; it < (2 * n - 2); it+=2)
            {
                temp += values_of_K[it] - values_of_K[it - 1];
            }
            ans = min(ans, temp);
        }
    }
    cout<<ans<<endl;
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