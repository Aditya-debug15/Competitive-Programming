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
    int a,b,c;
    cin>>a>>b>>c;
    int i=min(a,b);
    int j=max(a,b);
    int n=(j-i)*2;
    int com=max(a,max(b,c));
    if(n>=com)
    {
        n=n/2;
        if(c>n)
        {
            cout<<c-n<<endl;
        }
        else{
            cout<<n+c<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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