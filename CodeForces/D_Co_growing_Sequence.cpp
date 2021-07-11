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
    fo(i,n)
    {
        cin>>A[i];
    }
    vi B(n);
    B[0]=0;
    cout<<0<<" ";
    for(int i=1;i<n;i++)
    {
        int final_answer=0;
        int extra=(A[i]&A[i-1]);
        if(extra==A[i-1])
        {
            cout<<0<<" ";
        }
        else{
            vi x_prev(32);
            int prev=A[i-1];
            vi x_extra(32);
            for(int i=0;i<32;i++)
            {
                x_prev[i]=prev%2;
                prev/=2;
            }
            for(int i=0;i<32;i++)
            {
                x_extra[i]=extra%2;
                extra/=2;
            }
            int power=1;
            for(int i=0;i<32;i++)
            {
                if(x_prev[i]!=x_extra[i])
                {
                    final_answer+=(power);
                }
                power*=2;
            }
            B[i]=final_answer;
            A[i]=(A[i]^final_answer);
            cout<<final_answer<<" ";
        }
    }
    cout<<endl;
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