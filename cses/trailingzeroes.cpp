#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M ll(1e9+7)
int main()
{
    ll n,out=0;
    cin>>n;
    while(n>0)
    {
        out+=n/5;
        n=n/5;
    }
    cout<<out;
}