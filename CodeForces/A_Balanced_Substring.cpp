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
    string s;
    cin>>s;
    vi A(n,0);
    vi B(n,0);
    if(s[0]=='a')
    {
        A[0]=1;
        B[0]=0;
    }
    else{
        A[0]=0;
        B[0]=1;
    }
    for(int i=1;i<n;i++)
    {
        if(s[i]=='a')
        {
            A[i]=A[i-1]+1;
            B[i]=B[i-1];
        }
        else{
            A[i]=A[i-1];
            B[i]=B[i-1]+1;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<-1<<" "<<-1<<endl;
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