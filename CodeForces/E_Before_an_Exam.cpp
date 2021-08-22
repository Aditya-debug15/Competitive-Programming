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
    int d, sum_time;
    cin >> d >> sum_time;
    vpi times(d);
    vi max_sums(d);
    int total_max = 0, total_min = 0;
    fo(i, d)
    {
        cin >> times[i].first >> times[i].second;
        total_max += times[i].second;
        total_min += times[i].first;
    }
    if (!(sum_time >= total_min && sum_time <= total_max))
    {
        cout << "NO" << endl;
        return;
    }
    vi answers(d);
    foi(i, d)
    {
        if (i == (d - 1))
        {
            max_sums[i] = 0;
        }
        else
        {
            max_sums[i] = max_sums[i + 1] + times[i + 1].second;
        }
    }
    fo(i, d)
    {
        int need = sum_time - max_sums[i];
        if (need > times[i].first)
        {
            answers[i] = need;
        }
        else
        {
            answers[i] = times[i].first;
        }
        sum_time -= answers[i];
    }
    cout << "YES" << endl;
    fo(i, d)
    {
        cout << answers[i] << " ";
    }
    cout << endl;
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