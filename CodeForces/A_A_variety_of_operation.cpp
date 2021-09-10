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
    int c,d;
    cin>>c>>d;
    if(c==0 && d==0)
    {
        cout<<0<<endl;
        return;
    }
    else if(c==d)
    {
        cout<<1<<endl;
        return;
    }
    else if(abs(c-d)%2==0)
    {
        cout<<2<<endl;
        return;
    }
    cout<<-1<<endl;
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