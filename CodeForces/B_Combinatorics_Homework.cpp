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
    int val[3];
    int m;
    cin>>val[0]>>val[1]>>val[2]>>m;
    sort(val,val+3);
    int maxi=val[0]+val[1]+val[2]-3;
    int mini;
    if(val[2]<=val[1]+val[0])
    {
        mini=0;
    }
    mini=val[2]-val[1]-val[0]-1;
    if(m<= maxi && m>= mini)
    {
        cout<<"YES"<<endl;
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