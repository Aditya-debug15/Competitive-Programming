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
    double x, y;
    cin >> n >> x >> y;
    int count=0;
    set<double> slopes;
    fo(i, n)
    {
        double x1, y1;
        cin >> x1 >> y1;
        y1 -= y;
        x1 -= x;
        if (y1 == 0 && x1!=0)
        {
            count++;
        }
        else
        {
            slopes.insert(x1/y1);
        }
    }
    if(count>1)
    {
        count=1;
    }
    cout << slopes.size() +count<< endl;
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