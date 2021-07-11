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
int abs_diff(int a, int b)
{
    if(a<b)
        return (b-a);
    return(a-b);
}
void solve()
{
    int xa,xf,xb,ya,yb,yf;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    if(xa==xb && xa==xf)
    {
        int ans;
        if(yb>ya)
            if(yf>ya && yf<yb)
                ans=abs_diff(yb,ya)+2;
            else
                ans=abs_diff(yb,ya);
        else if(ya>yb)
            if(yf>yb && yf<ya)
                ans=abs_diff(yb,ya)+2;
            else
                ans=abs_diff(yb,ya);
        cout<<ans<<endl;
    }
    else if(ya==yb && ya==yf)
    {
        int ans;
        if(xb>xa)
            if(xf>xa && xf<xb)
                ans=abs_diff(xb,xa)+2;
            else
                ans=abs_diff(xb,xa);
        else if(xa>xb)
            if(xf>xb && xf<xa)
                ans=abs_diff(xb,xa)+2;
            else
                ans=abs_diff(xb,xa);
        cout<<ans<<endl;
    }
    else{
        int ans=abs_diff(xb,xa);
        ans+=abs_diff(yb,ya);
        cout<<ans<<endl;
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