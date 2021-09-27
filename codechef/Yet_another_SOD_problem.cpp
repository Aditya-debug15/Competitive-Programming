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
    ll l,r;
    cin>>l>>r;
    if(r-l==2)
    {
        cout<<1<<endl;
        return;
    }
    if(l%3==0)
        cout<<(r-l+3)/3<<endl;
    else if(l%3==1)
    {
        l+=2;
        cout<<((r-l+3)/3)<<endl;
    }
    else{
        l++;
        cout<<((r-l+3)/3)<<endl;
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