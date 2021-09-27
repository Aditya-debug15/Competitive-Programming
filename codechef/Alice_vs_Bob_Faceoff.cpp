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

int solve(ll n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n % 4 == 3 || n%4==1)
    {
        int p;
        p=solve(n-1);
        if(p==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(n%4==0)
    {
        return 0;
    }
    else
    {
        int p;
        p=solve(n/2);
        if(p==0)
        {
            return 1;
        }
        else{
            return 0;
        }
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
        ll n;
        cin >> n;
        int p=solve(n);
        if(p==0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
}