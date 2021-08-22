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
vi A(1005);
int intial = 0;
int i = 1;
void pre()
{
    while (intial < 1000)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            A[intial] = i;
            intial++;
        }
        i++;
    }
}
void solve()
{
    int k;
    cin>>k;
    cout<<A[k-1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}