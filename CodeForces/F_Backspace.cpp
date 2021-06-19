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
    /*
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    */
    vector<char> final;
    string s;
    cin>>s;
    int n=s.length();
    fo(i,n)
    {
        if(s[i]!='<')
            final.push_back(s[i]);
        else{
            final.pop_back();
        }
    }
    for(auto i=final.begin();i!=final.end();i++)
    {
        cout<<(*i);
    }
}