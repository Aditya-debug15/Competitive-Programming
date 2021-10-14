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

int n, m;
typedef struct useless useless;
struct useless
{
    string s;
    int pos;
};
bool func(useless a, useless b)
{
    fo(i, m - 1)
    {
        if (a.s[i] != b.s[i] && i % 2 == 0)
        {
            return a.s[i] < b.s[i];
        }
        else if (a.s[i] != b.s[i] && i % 2 == 1)
        {
            return a.s[i] > b.s[i];
        }
        else
        {
            continue;
        }
    }
    if (a.s[m-1] != b.s[m-1] && (m-1) % 2 == 0)
    {
        return a.s[m-1] < b.s[m-1];
    }
    return a.s[m-1] > b.s[m-1];
}
void solve()
{
    cin >> n >> m;
    vector<useless> A(n);
    fo(i, n)
    {
        cin >> A[i].s;
        A[i].pos = i + 1;
    }
    sort(A.begin(), A.end(), func);
    fo(i, n)
    {
        cout << A[i].pos << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}