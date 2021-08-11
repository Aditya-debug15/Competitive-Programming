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
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
    {
        string extra;
        extra.push_back(s[i]);
        if(extra==t)
        {
            cout<<"YES"<<endl;
            return;
        }
        string doubleextra=extra;
        // right 0 times
        for(int left=i-1;left>=0;left--)
        {
            doubleextra.push_back(s[left]);
            if(doubleextra==t)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        doubleextra=extra;
        for(int right=i+1;right<s.length();right++)
        {
            doubleextra.push_back(s[right]);
            if(doubleextra==t)
            {
                cout<<"YES"<<endl;
                return;
            }
            string tripleextra=doubleextra;
            for(int left=right-1;left>=0;left--)
            {
                tripleextra.push_back(s[left]);
                if(tripleextra==t)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
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