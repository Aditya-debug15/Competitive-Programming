#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M ll(1e9+7)
int main()
{
    ll n;
    cin>>n;
    ll out=1;
    for(ll i=0;i<n;i++)
    {
        out=(out*2)%M;
    }
    cout<<out;
}