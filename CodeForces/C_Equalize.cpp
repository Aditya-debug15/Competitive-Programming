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
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<(n-1);i++)
    {
        if(a[i]!=b[i] && a[i+1]!=b[i+1] && a[i]!=a[i+1])
        {
            swap(a[i],a[i+1]);
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}