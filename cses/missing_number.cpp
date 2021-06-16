#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<ll> A;
    ll n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        ll m;
        cin>>m;
        A.push_back(m);
    }
    ll sum=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
    {
        sum-=A[i];
    }
    cout<<sum;
}