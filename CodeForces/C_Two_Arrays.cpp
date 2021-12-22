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
    vi A(n);
    vi B(n);
    fo(i,n)
    {
        cin>>A[i];
    }
    fo(i,n)
    {
        cin>>B[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    bool possible=true;
    fo(i,n)
    {
        if(A[i]+1==B[i] || A[i]==B[i])
        {
            ;
        }
        else{
            possible=false;
        }
    }
    if(possible)
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