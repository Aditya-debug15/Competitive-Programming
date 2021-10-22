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
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

void solve()
{
    int n;
    cin >> n;
    vi A(n);
    int odd_sum = 0;
    int odd_count = 0;
    int even_sum = 0;
    int even_count = 0;
    fo(i, n)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
        {
            even_count++;
            even_sum += A[i];
        }
        else
        {
            odd_count++;
            odd_sum += A[i];
        }
    }
    if (odd_count % 2 == 0)
    {
        cout << n << endl;
        fo(i, n)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
    else if (isPrime(odd_sum + even_sum))
    {
        cout<<n-1<<endl;
        bool dhundha = true;
        fo(i, n)
        {
            if (A[i] % 2 == 1 && dhundha)
            {
                dhundha = false;
            }
            else
            {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << n << endl;
        fo(i, n)
        {
            cout << i+1 << " ";
        }
        cout << endl;
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