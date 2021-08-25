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
    vector<pair<int,int>> A(n);
    fo(i,n)
    {
        int m;
        cin>>m;
        int maxi=0;
        int mini;
        int k;
        vi temp(m);
        pii max_pair;
        for(int beta=0;beta<m;beta++)
        {
            int alpha;
            cin>>alpha;
            if(beta==0)
            {
                max_pair={alpha-beta+1,alpha-beta+1+m};
            }
            else if((alpha-beta+1)>max_pair.first)
            {
                max_pair={alpha-beta+1,alpha-beta+1+m};
            }    
        }
        A[i]=max_pair;
    }
    sort(A.begin(),A.end());
    int start=A[0].first;
    for(int i=0;i<n-1;i++)
    {
        if(A[i].second>=A[i+1].first)
        {
            int diff=A[i+1].second-A[i+1].first;
            A[i+1].first=A[i].second;
            A[i+1].second=A[i+1].first+diff;
        }
        if(A[i].second<A[i+1].first)
        {
            start+=A[i+1].first-A[i].second;
        }
    }
    cout<<start<<endl;
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