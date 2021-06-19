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
    int q;
    cin>>q;
    set<int> s;
    fo(i,q)
    {
        int y,x;
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            auto it=s.find(x);
            if(it!=s.end())
            {
                s.erase(it);
            }
        }
        else{
            auto it=s.find(x);
            if(it!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}