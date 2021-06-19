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
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(n==1 && m==1)
    {
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        return;
    }
    else if(i==n && j==m)
    {
        cout<<1<<" "<<1<<" ";
        if(n==1 && m==2)
        {
            cout<<1<<" "<<2<<endl;
            return;
        }
        else if(n==1 && m>2)
        {
            cout<<1<<" "<<m-1<<endl;
            return;
        }
        else if(m==1 && n==2)
        {
            cout<<2<<" "<<1<<endl;
            return;
        }
        else
        {
            cout<<n-1<<" "<<1<<endl;
            return;
        }
    }
    else if(i==1 && j==1)
    {
        cout<<n<<" "<<m<<" ";
        if(n==1 && m==2)
        {
            cout<<1<<" "<<1<<endl;
            return;
        }
        else if(n==1 && m>2)
        {
            cout<<1<<" "<<m-1<<endl;
            return;
        }
        if(m==1 && n==2)
        {
            cout<<1<<" "<<1<<endl;
            return;
        }
        else
        {
            cout<<n-1<<" "<<1<<endl;
            return;
        }
    }
    else{
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<" "<<endl;
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