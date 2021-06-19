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
    int count=0;
    if(n&1 == 1)
    {   
        cout<<"Bob"<<endl;
        return;
    }
    while(n%2==0)
    {
        n/=2;
        count++;
    }
    if(count&1==1 && count>=1 && n==1)
    {
        cout<<"Bob"<<endl;
        return;
    }
    else{
        cout<<"Alice"<<endl;
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