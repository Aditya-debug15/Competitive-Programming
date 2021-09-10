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
    int final_answer=INT_MAX;
    fo(i,n)
    {
        int denomin=max(i,n-i-1);
        int value=A[i]/denomin;
        final_answer=min(final_answer,value);
    }
    cout<<final_answer;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}