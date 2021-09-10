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
    int n;
    cin>>n;
    vi one_ki_gang;
    vi other_gang;
    int number;
    cin>>number;
    for(int i=1;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        if(alpha!=number)
        {
            other_gang.push_back(i+1);
        }
        else{
            one_ki_gang.push_back(i+1);
        }
    }
    if(one_ki_gang.size()==(n-1))
    {
        cout<<"No"<<endl;
        return;
    }
    else{
        cout<<"Yes"<<endl;
        for(int i=0;i<other_gang.size();i++)
        {
            cout<<1<<" "<<other_gang[i]<<endl;
        }
        auto extra=(other_gang.end()-1);
        int asli=*extra;
        for(int i=0;i<one_ki_gang.size();i++)
        {
            cout<<asli<<" "<<one_ki_gang[i]<<endl;
        }
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