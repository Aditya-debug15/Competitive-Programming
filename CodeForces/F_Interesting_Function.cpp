#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    ll r,l;
    cin>>l>>r;
    ll count=0;
    while(r>0)
    {
        count+=(r-l);
        r/=10;
        l/=10;
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}