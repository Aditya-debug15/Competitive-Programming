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
    string s;
    int more1=0;
    int one=0;
    cin>>s;
    int A[26];
    fo(i,26)
    {
        A[i]=0;
    }
    fo(i,s.length())
    {
        A[s[i]-'a']++;
    }
    fo(i,26)
    {
        if(A[i]>1)
        {
            more1++;
        }
        else if(A[i]==1)
        {
            one++;
        }
    }
    int answer=more1+(one/2);
    cout<<answer<<endl;
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