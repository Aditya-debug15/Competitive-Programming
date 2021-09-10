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
    int n, m;
    cin >> n >> m;
    vpi A_ke_sum, B_ke_sum;
    vi a(n), b(m);
    fo(i, n)
    {
        cin >> a[i];
    }
    vi s(2005);
    s[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            A_ke_sum.push_back({s[i] - s[j], i - j});
        }
    }
    fo(i, n)
    {
        cin >> b[i];
    }
    s[0] = b[0];
    for (int i = 1; i < m; i++)
    {
        s[i] = s[i - 1] + b[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            B_ke_sum.push_back({s[i] - s[j], i - j});
        }
    }
    int x;
    cin >> x;
    // now mere pass pre calculated data hai
    // bc binary search
    // to bc B ko sort
    sort(B_ke_sum.begin(), B_ke_sum.end());
    int final_answer=0;
    for (int i = 0; i < A_ke_sum.size(); i++)
    {
        int b_ke_index = 0;
        if (A_ke_sum[i].first * B_ke_sum[b_ke_index].first < x)
        {
            // binary ka time hai
            int low = b_ke_index;
            int high = B_ke_sum.size() - 1;
            while (low < high)
            {
                int mid = low + high / 2;
                if (A_ke_sum[i].first * B_ke_sum[mid].first <= x)
                {
                    low = mid ;
                }
                else
                {
                    high = mid - 1;
                }
            }
            b_ke_index=low;
        }
        final_answer=max(A_ke_sum[i].second*B_ke_sum[b_ke_index].second,final_answer);
    }
    cout<<final_answer<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}