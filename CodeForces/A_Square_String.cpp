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
    if(s.length()%2==0)
    {
        string t="",temp="";
        for(int i=0;i<s.length()/2;i++)
        {
            t.push_back(s[i]);
        }
        for(int i=s.length()/2;i<s.length();i++)
        {
            temp.push_back(s[i]);
        }
        if(t==temp)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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