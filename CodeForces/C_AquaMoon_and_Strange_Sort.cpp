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
    vi D(n);
    vi B,C;
    int j=0;
    fo(i,n)
    {
        cin>>A[i];
        if(i&1)
            B.push_back(A[i]);
        else
            C.push_back(A[i]);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    int odd=0,even=0;
    fo(i,n)
    {
        if(i&1)
        {
            if(A[i]!=B[odd])
            {
                cout<<"NO"<<endl;
                return;
            }
            odd++;
        }
        else{
            if(A[i]!=C[even])
            {
                cout<<"NO"<<endl;
                return;
            }
            even++;
        }
    }
    cout<<"YES"<<endl;
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