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
int KMPSearch(string pat, string txt)
{
    int m=pat.length();
    int n=txt.length();
    int res=0;
    for(int i=0;i<=(n-m);)
    {
        int j;
        for (j = 0; j < m; j++)
        {    
            if (txt[i+j] != pat[j])
            {
                i++;
                break;
            }
        }
        if(j==m)
        {
            res++;
            j=0;
            i+=m;
        }
    }
    return res;
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
    string s;
    cin>>s;
    int n=s.length();
    int final_output=n;
    fo(i,n)
    {
        string check="";
        for(int j=i;j<n;j++)
        {
            check.push_back(s[j]);
            int ans = KMPSearch(check, s);
            int extra=ans*(check.length());
            int final=n-extra;
            final+=(ans+(check.length()));
            if(final<final_output)
            {
                final_output=final;
            }
        }
    }
    cout<<final_output<<endl;
}