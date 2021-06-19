#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vpi vector<pair<int, int>>
long long int M = 1e9 + 7;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    */
    int n, k;
    cin >> n >> k;
    vi Arr(n);
    fo(i, n)
    {
        cin >> Arr[i];
    }
    int count_final = INT_MAX;
    int position = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int m = i;
        int count = 0;
        fo(j, n)
        {
            int alpha = (j);
            alpha *= k;
            if (Arr[j] != i + alpha)
            {
                count++;
            }
        }
        if (count_final > count)
        {
            count_final = count;
            position = i;
        }
    }
    cout << count_final << endl;
    if (count_final > 0)
    {
        for (int i = 0; i < n; i++)
        {
            int alpha = position + (i* k);
            if (Arr[i] != alpha)
            {
                if (Arr[i] > alpha)
                {
                    cout << "- " << i + 1 << " " << Arr[i] - alpha << endl;
                }
                else if (Arr[i] < alpha)
                {
                    cout << "+ " << i + 1 << " " << alpha - Arr[i] << endl;
                }
            }
        }
    }
}