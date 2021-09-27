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
    for(int mul=1;mul<=1000;mul++)
    {
        int extra=c*mul;
        if(b>=extra && a<=extra)
        {
            cout<<extra;
            return;
        }
    }    
    cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}