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
    string a,b;
    cin>>a>>b;
    while(a.length()>=b.length())
    {
        if(b.length()==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        int i=a.length()-1;
        int j=b.length()-1;
        if(a[i]==b[j])
        {
            a.pop_back();
            b.pop_back();
        }
        else{
            if(i>=1)
            {
                a.pop_back();
                a.pop_back();
            }
            else{
                a.pop_back();
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