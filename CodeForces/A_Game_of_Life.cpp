#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int lower[int(1e4)] = {-1};
    int upper[int(1e4)] = {-1};
    for(int i=0;i<1e4;i++)
    {
        lower[i]=-1;
        upper[i]=-1;
    }
    lower[0] = -1;
    upper[n - 1] = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (i == 0)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j] == '1')
                    {
                        upper[i] = j;
                        break;
                    }
                }
            }
            else if (i == (n - 1))
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '1')
                    {
                        lower[i] = j;
                        break;
                    }
                }
            }
            else
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j] == '1')
                    {
                        upper[i] = j;
                        break;
                    }
                }
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '1')
                    {
                        lower[i] = j;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (lower[i] == -1 && upper[i] == -1)
            {
                continue;
            }
            if (lower[i] == -1)
            {
                if ((upper[i] - i) <= m)
                    s[i] = '1';
            }
            else if (upper[i] == -1)
            {
                if ((i - lower[i]) <= m)
                    s[i] = '1';
            }
            else
            {
                if ((upper[i] - i) != (i-lower[i]))
                {
                    if ((upper[i] - i) <= m || (i - lower[i]) <= m)
                        s[i] = '1';
                }
            }
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}