#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    ll answer=0;
    cin>>n;
    int A[n+1];
    map<ll,ll> B;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int j=1;j<=n;j++)
    {
        answer+=B[A[j]]*(ll(n-j+1));
        B[A[j]]+=ll(j);
    }
    cout<<answer<<endl;
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