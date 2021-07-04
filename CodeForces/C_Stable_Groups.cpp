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

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    */
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> vec(n);
    fo(i,n)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vector<ll> dis;
    ll count_dis=0;
    for(int i=1;i<n;i++)
    {
        if((vec[i]-vec[i-1])>x)
        {
            dis.push_back((vec[i]-vec[i-1]));
            count_dis++;
        }
    }
    sort(dis.begin(),dis.end());
    ll final_count=1+count_dis;
    for(int i=0;i<count_dis;i++)
    {
        ll extra=dis[i]/x;
        if(dis[i]%x==0)
        {
            extra--;
        }
        if(k>=extra)
        {
            k-=(extra);
            final_count--;
        }
        else{
            break;
        }
    }
    cout<<final_count<<endl;
}