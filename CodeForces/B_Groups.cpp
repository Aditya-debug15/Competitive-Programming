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
    vi A[n];
    fo(i,n)
    {
        A[i].resize(5);
        fo(j,5)
        {
            cin>>A[i][j];
        }
    }
    if(n%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    // number of combo 10
    for(int d1=0;d1<5;d1++)
    {
        for(int d2=d1+1;d2<5;d2++)
        {
            int disti1=0,disti2=0;
            int common=0;
            fo(i,n)
            {
                if(A[i][d1]!=A[i][d2])
                {
                    if(A[i][d1]==1)
                    {
                        disti1++;
                    }
                    else{
                        disti2++;
                    }
                }
                else if(A[i][d1]==1 && A[i][d2]==1)
                {
                    common++;
                }
            }
            if((disti1+disti2+common)==n && (disti1<=n/2) && (disti2<=n/2))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
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