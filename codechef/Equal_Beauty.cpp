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
    vector<ll> A(n);
    fo(i,n)
    {
        cin>>A[i];
    }
    if (n==2)
    {
        cout<<0<<endl;
        return;
    }
    sort(A.begin(),A.end());
    if(n==3)
    {
        cout<<min(A[2]-A[1],A[1]-A[0])<<endl;
        return;
    }
    ll final_answer=LONG_LONG_MAX;
    ll faltu=0,faltu2=0;
    fo(i,n-1)
    {
        faltu+=abs(A[i]-A[(n-1)/2]);
    }
    for(int i=1;i<n;i++)
    {
        faltu2+=abs(A[i]-A[1+(n-1)/2]);
    }
    final_answer=min(faltu,faltu2);
    int low=1;
    int high=n-2;
    while(low<high)
    {
        ll diff1,diff2;
        diff2=A[n-1]-A[low];
        diff1=A[high]-A[0];
        final_answer=min(final_answer,abs(diff1-diff2));
        if(diff1<diff2)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    cout<<final_answer<<endl;
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