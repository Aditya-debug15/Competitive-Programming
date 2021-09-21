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

bool comp(const pair<int,int> &a,  const pair<int,int> &b)
{
    if(a.first!=b.first)
    {
        return (a.first < b.first);
    }
    return (a.second > b.second);
}

bool comp2(const pair<int,int> &a,  const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vpi A(m);
    bool seated[m+1];
    fo(i,m)
    {
        int alpha;
        cin>>alpha;
        A[i]={alpha,i+1};
        seated[i+1]=false;
    }
    sort(A.begin(),A.end(),comp);
    fo(i,n*m)
    {
        A[i].first=i+1;
    }
    sort(A.begin(),A.end(),comp2);
    ll final_a=0;
    for(int i=0;i<m;i++)
    {
        ll current=0;
        int stop=A[i].first;
        for(int j=1;j<stop;j++)
        {
            if(seated[j])
            {
                current++;
            }
        }
        final_a+=current;
        seated[stop]=true;
    }
    cout<<final_a<<endl;
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