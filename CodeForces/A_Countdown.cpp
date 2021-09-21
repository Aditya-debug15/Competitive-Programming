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
    int n;
    cin>>n;
    string s;
    cin>>s;
    n=s.length();
    ll sum=0;
    for(int i=0;i<(n-1);i++)
    {
        ll zarrori=s[i]-'0';
        if(zarrori!=0)
        {
            sum+=zarrori;
            sum++;
        }
    }
    if(s[n-1]!='0')
    {
        ll zarrori=s[n-1]-'0';
        sum+=zarrori;
    }
    cout<<sum<<endl;
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