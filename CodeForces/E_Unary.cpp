#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define MOD 1000003
#define vi vector<int>
#define vpi vector<pair<int,int>>
/*
">"  →  1000,
"<"  →  1001,
"+"  →  1010,
"-"  →  1011,
"."  →  1100,
","  →  1101,
"["  →  1110,
"]"  →  1111.
*/
ll A[401];
void solve()
{
    A[0]=1;
    for(int i=1;i<401;i++)
    {
        A[i]=((A[i-1]*2)%MOD);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    string p,s="";
    cin>>p;
    fo(i,p.size())
    {
        switch(p[i])
        {
            case '>':
                s+=("1000");
                break;
            case '<':
                s+=("1001");
                break;
            case '+':
                s+=("1010");
                break;
            case '-':
                s+=("1011");
                break;
            case '.':
                s+=("1100");
                break;
            case ',':
                s+=("1101");
                break;
            case '[':
                s+=("1110");
                break;
            case ']':
                s+=("1111");
                break;
        }
    }
    reverse(s.begin(),s.end());
    ll final=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            final+=A[i];
            final%=MOD;
        }
    }
    cout<<final%MOD<<endl;
}