#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
long long int mod=10007;
#define vi vector<int>
#define vpi vector<pair<int,int>>
void solve()
{
    int n;
    cin>>n;
    vector<long long> A(n);
    ll final_a=0;
    fo(i,n)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    for(int i=0;i<n/2;i++)
    {
        ll adder=(A[i]*A[n-1])%mod;
        adder=(adder*2)%mod;    
        final_a+=adder;  
    }
    if(n%2==1)
    {
        final_a+=((A[n/2]*A[n/2]))%mod;
    }
    cout<<final_a<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}