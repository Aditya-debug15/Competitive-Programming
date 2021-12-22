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
    ll mu,nu;
    nu=n%3;
    mu=m%3;
    ll answer=0;
    if(nu*mu==1)
    {
        answer++;
    }
    else if(nu*mu==4)
    {
        answer+=2;
    }
    else if(nu*mu==2){
        answer++;
    }
    n-=nu;
    m-=mu;
    answer+=(((n*m)+(n*mu)+ (m*nu))/3);
    cout<<answer<<endl;
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