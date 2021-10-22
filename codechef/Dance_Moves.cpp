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
    int x,y;
    cin>>x>>y;
    if(y>=x)
    {
        int cali=y-x;
        if(cali%2==0)
        {
            cout<<cali/2<<endl;
            return;
        }
        cout<<(cali+3)/2<<endl;
        return;
    }
    cout<<x-y<<endl;
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