#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int, int>>
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> A(n);
    fo(i, n)
    {
        cin >>A[i];
    }
    sort(A.begin(), A.end());
    if(n==1)
    {
        cout<<abs(s-A[0])<<endl;
        return;
    }
    if (A[n / 2] == s)
    {
        cout << 0 << endl;
    }
    else if (A[n / 2] < s)
    {
        ll count=0;
        ll i=n/2+1;
        ll k=1;
        while(A[n/2]!=s && i<n)
        {
            if(A[i]>=s)
            {
                count+=((s-A[n/2])*k);
                A[n/2]=s;
            }
            else{
                count+=((A[i]-A[n/2])*k);
                A[n/2]=A[i];
                k++;
            }
            i++;
        }
        if(A[n/2]!=s)
        {
            count+=((s-A[n/2])*k);
        }
        cout<<count<<endl;
    }
    else
    {
        ll count=0;
        ll i=n/2-1;
        ll k=1;
        while(A[n/2]!=s)
        {
            if(A[i]<=s)
            {
                count+=((A[n/2]-s)*k);
                A[n/2]=s;
            }
            else{
                count+=((A[n/2]-A[i])*k);
                A[n/2]=A[i];
                k++;
            }
            i--;
        }
        if(A[n/2]!=s)
        {
            count+=((A[n/2]-s)*k);
        }
        cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}