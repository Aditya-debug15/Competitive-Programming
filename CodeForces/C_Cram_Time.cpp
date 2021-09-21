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
    ll n,m;
    cin>>n>>m;
    // notes 1.....k
    // upperbound on k=root 2a 2b
    // fuck always less than hona chaiye jab root possible ho
    // upper bound is not fucking tight
    ll upp=2*(n+m);
    ll k=sqrt(upp);
    if(k*(k+1)>upp)
    {
        k--;
    }
    vector<ll> A;
    vector<ll> B;
    for(;k>=1;k--)
    {
        if(n>=k)
        {
            n-=k;
            A.push_back(k);
        }
        else if(m>=k)
        {
            m-=k;
            B.push_back(k);
        }
    }
    cout<<A.size()<<endl;
    fo(i,A.size())
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<B.size()<<endl;
    fo(i,B.size())
    {
        cout<<B[i]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}