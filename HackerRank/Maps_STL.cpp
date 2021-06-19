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
    map<string,int> m;
    int q;
    cin>>q;
    fo(i,q)
    {
        int y;
        string s;
        cin>>y>>s;
        if(y==1)
        {
            int marks;
            cin>>marks;
            m[s]+=marks;
        }
        else if(y==2)
        {
            m.erase(s);
        }
        else{
            cout<<m[s]<<endl;
        }
    }
}