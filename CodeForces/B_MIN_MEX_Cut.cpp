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
    cin>>s;
    int consi=0;
    int current=0;
    fo(i,s.length())
    {
        if(s[i]=='0')
        {
            current++;
        }
        else
        {
            if(current!=0)
                consi++;
            current=0;
        }
    }
    if(current!=0)
    {
        consi++;
    }
    cout<<min(2,consi)<<endl;
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