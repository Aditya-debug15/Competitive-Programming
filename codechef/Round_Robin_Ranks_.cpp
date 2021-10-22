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
    ll n,k;
    cin>>n>>k;
    ll total=n*(n-1);
    ll bottom_teams=n-k;
    ll bottom_score=bottom_teams*(bottom_teams-1);
    total-=bottom_score;
    total/=k;
    if(total%2==0)
    {
        cout<<total<<endl;
    }
    else{
        cout<<total-1<<endl;
    }
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