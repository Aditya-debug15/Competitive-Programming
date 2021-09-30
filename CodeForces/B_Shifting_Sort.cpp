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
typedef struct extra extra;
struct extra{
    int a,b,c;
};
void solve()
{
    int n;
    cin>>n;
    vpi A(n);
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        A[i].first=alpha;
        A[i].second=i+1;
    }
    sort(A.begin(),A.end());
    vector<extra> B;
    fo(i,n)
    {
        if(A[i].second==(i+1))
        {
            continue;
        }
        extra e;
        e.a=i+1;
        e.b=n;
        e.c=(A[i].second-i-1);
        B.push_back(e);
        fo(i,n)
        {
            if(A[i].second>=e.a && A[i].second<=e.b)
            {
                if(A[i].second-e.c<e.a)
                {
                    int x=A[i].second-e.a;
                    int y=e.c-x-1;
                    A[i].second=e.b-y;
                }
                else{
                    A[i].second-=e.c;
                }
            }
        }
    }
    cout<<B.size()<<endl;
    for(auto i: B)
    {
        cout<<i.a<<" "<<i.b<<" "<<i.c<<endl;
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