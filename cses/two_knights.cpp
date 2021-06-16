#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(ll n)
{
    ll square=n*n;
    ll first=square*(square-1)/2;
    ll second=4*(n-1)*(n-2);
    return first-second;
}
int main()
{
    ll k;
    cin>>k;
    for(ll i=1;i<=k;i++)
    {
        cout<<func(i)<<endl;
    }
}