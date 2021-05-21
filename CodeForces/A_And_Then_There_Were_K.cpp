#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    ll value=1;
    while(value<=n)
    {
        value*=2;
    }
    value/=2;
    cout<<value-1<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}