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
    int A[26];
    for(int i=0;i<26;i++)
    {
        A[i]=0;
    }
    int pos_a=0;
    int n=s.length();
    fo(i,n)
    {
        int e=s[i]-'a';
        A[e]++;
        if(s[i]=='a')
            pos_a=i;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    int prev=(s[0]-'a');
    for(int i=1;i<pos_a;i++)
    {
        int curr=s[i]-'a';
        if(curr>=prev)
        {
            cout<<"NO"<<endl;
            return;
        }
        prev=curr;
    }
    prev=0;
    for(int i=pos_a+1;i<n;i++)
    {
        int curr=s[i]-'a';
        if(curr<=prev)
        {
            cout<<"NO"<<endl;
            return;
        }
        prev=curr;
    }
    cout<<"YES"<<endl;
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