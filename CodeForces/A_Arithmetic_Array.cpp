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
    int sum=0;
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        sum+=alpha;
    }
    if(sum>n)
    {
        cout<<(sum-n)<<endl;
    }
    else if(sum<n){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
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