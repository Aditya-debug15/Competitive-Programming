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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> count_i;
    vector<vector<int>> count_f;
    count_i.resize(m);
    count_f.resize(m);
    for(int i=0;i<m;i++)
    {
        count_i[i].resize(26);
        count_f[i].resize(26);
        for(int j=0;j<26;j++)
        {
            count_i[i][j]=0;
            count_f[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            count_i[j][s[j]-'a']++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            count_f[j][s[j]-'a']++;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(count_i[i][j]!=count_f[i][j])
            {
                cout<<char('a'+j);
            }
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