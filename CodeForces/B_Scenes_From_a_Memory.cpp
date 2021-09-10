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
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void solve()
{
    string s, t;
    int m[10];
    fo(i, 10)
    {
        m[i] = 0;
    }
    int k;
    cin >> k >> s;
    for (int i = 0; i < k; i++)
    {
        m[s[i] - '0']++;
        if (m[s[i] - '0'] == 1 && s[i] != '4' && s[i] != '6' && s[i] != '8' && s[i] != 9 && s[i] != 1)
        {
            t.push_back(s[i]);
        }
    }
    // ans 1
    if (m[1] >= 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    else if (m[4] >= 1)
    {
        cout << 1 << endl;
        cout << 4 << endl;
        return;
    }
    else if (m[6] >= 1)
    {
        cout << 1 << endl;
        cout << 6 << endl;
        return;
    }
    else if (m[8] >= 1)
    {
        cout << 1 << endl;
        cout << 8 << endl;
        return;
    }
    else if (m[9] >= 1)
    {
        cout << 1 << endl;
        cout << 9 << endl;
        return;
    }
    else
    {
        // ans 2
        for (int i = 1; i <= 9; i++)
        {
            if (m[i] >= 2)
            {
                cout << 2 << endl;
                cout << i << i << endl;
                return;
            }
        }
        ll n1, n2, count = 1, min_count = 6, ans = 0;
        n1 = stoi(t);
        if (!isPrime(n1) && n1 > 0)
        {
            if (min_count > (t.size() - ans))
            {
                min_count = (t.size() - ans);
                n2 = n1;
            }
        }
        for (int i = t.size() - 1; i >= 0; i--)
        {
            for (int j = t.size() - 1; j >= 0; j--)
            {
                n1 = 0;
                count = 1;
                ans = 0;
                for (int k = t.size() - 1; k >= 0; k--)
                {
                    if (k != i && k != j)
                    {
                        n1 += (t[k] - '0') * count;
                        count *= 10;
                        ans++;
                    }
                }
                if (!isPrime(n1) && n1 > 0)
                {
                    if (min_count > ans)
                    {
                        min_count = ans;
                        n2 = n1;
                    }
                }
            }
        }
        cout << min_count << endl;
        cout << n2 << endl;
    }
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