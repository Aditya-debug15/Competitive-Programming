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

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,s,t;
    cin>>n>>s>>t;
    vpi A(n);
    fo(i,n)
    {
        cin>>A[i].first;
        A[i].second=0;
    }
    int count=0;
    bool possible=true;
    while(s!=t && possible)
    {
        if(A[s-1].second==0)
        {
            A[s-1].second=1;
            s=A[s-1].first;
            count++;
        }
        else{
            possible=false;
        }
    }
    if(!possible)
        cout<<-1<<endl;
    else{
        cout<<count<<endl;
    }

}