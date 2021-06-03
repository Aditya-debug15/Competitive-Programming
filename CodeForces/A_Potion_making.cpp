#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin>>k;
    int m=__gcd(100,k);
    cout<<100/m<<endl;
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