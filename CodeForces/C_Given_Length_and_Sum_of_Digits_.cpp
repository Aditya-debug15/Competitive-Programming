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
bool possible(int m, int s)
{
    if (s >= 0 && s <= 9 * m)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, s;
    cin >> m >> s;
    string st = "";
    int sum = s;
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            else
            {
                if (possible(m - i - 1, sum - j))
                {
                    sum -= j;
                    st.push_back(j + '0');
                    break;
                }
            }
        }
    }
    if (sum != 0 || s == 0)
        cout << -1 << " " << -1 << endl;
    else
    {
        cout << st << " ";
        sum=s;
        st="";
        for (int i = 0; i < m; i++)
        {
            for (int j = 9; j >=0; j--)
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }
                else
                {
                    if (possible(m - i - 1, sum - j))
                    {
                        sum -= j;
                        st.push_back(j + '0');
                        break;
                    }
                }
            }
        }
        cout<<st<<endl;
    }
}
