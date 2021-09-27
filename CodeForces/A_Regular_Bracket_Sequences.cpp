#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int,int>>
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int remain=n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<'(';
        }
        for(int j=1;j<=i;j++)
        {
            cout<<')';
        }
        for(int j=0;j<remain;j++)
        {
            cout<<"()";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}