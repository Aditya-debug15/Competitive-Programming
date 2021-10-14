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
    ll n,m,k;
    cin>>n>>m>>k;
    k--;
    ll nc2;
    if(n==2 && m==1)
    {
        if(k>1)
        {
            cout<<"YES"<<endl;        
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    if(n%2==0)
    {
        nc2=(n/2);
        nc2*=(n-1);
    }
    else{
        nc2=((n-1)/2);
        nc2*=n;
    }
    //cout<<nc2<<endl;
    if(m>nc2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else if(m<=nc2 && m>=2*(n-1))
    {
        if(k>1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(m<2*(n-1) && m>=(n-1))
    {
        if(k>2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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