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
    if(n%2==0)
    {
        // even
        for(int i=0;i<(n-1);i+=2)
        {
            cout<<(i+2)<<" "<<i+1<<" ";
        }
    }
    else{
        for(int i=0;i<n-3;i+=2)
        { 
            cout<<(i+2)<<" "<<i+1<<" ";
        }
        cout<<n-1<<" "<<n<<" "<<n-2;
    }
    cout<<endl;
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