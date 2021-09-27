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
    ll sum = 0;
    vector<ll> A(n);
    fo(i, n)
    {
        cin >> A[i];
        sum += A[i];
    }
    sort(A.begin(), A.end());
    int m;
    cin >> m;
    fo(i, m)
    {
        ll coins = 0;
        ll current_sum = sum;
        ll def, att;
        cin >> def >> att;
        vector<ll>::iterator lower;
        lower = lower_bound(A.begin(), A.end(), def);
        if (lower - A.begin() == n)
        {
            ll elem;
            // last case
            lower--;
            elem = (*lower);
            coins += (def - elem);
            current_sum -= elem;
            if (current_sum < att)
            {
                coins += (att - current_sum);
            }
            cout << coins;
        }
        else
        {
            ll choice1, choice2;
            choice1 = *lower;
            current_sum -= choice1;
            if (current_sum < att)
            {
                coins += (att - current_sum);
            }
            if (lower == A.begin())
            {
                // no choice 2
                cout << coins;
            }
            else
            {
                ll coin2=0;
                lower--;
                choice2 = *lower;
                current_sum = sum;
                current_sum-=choice2;
                coin2+=(def-choice2);
                if (current_sum < att)
                {
                    coin2 += (att - current_sum);
                }
                cout << min(coins, coin2);
            }
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}