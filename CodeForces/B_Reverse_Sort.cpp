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
    string s, temp;
    cin >> s;
    temp = s;
    int count0 = 0, count1 = 0;
    fo(i, n)
    {
        if (s[i] == '1')
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }
    sort(temp.begin(), temp.end());
    if (temp == s)
    {
        cout << 0 << endl;
        return;
    }
    vi change;
    fo(i, n)
    {
        if (s[i] == '1' && i < n - count1)
            change.push_back(i + 1);
        if (s[i] == '0' && i >= n - count1)
            change.push_back(i + 1);
    }
    cout << 1 << endl;
    cout << change.size() << " ";
    for (int i = 0; i < change.size(); i++)
    {
        cout << change[i] << " ";
    }
    cout << endl;
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