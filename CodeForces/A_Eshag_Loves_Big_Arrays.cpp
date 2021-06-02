#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> fre;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        fre[alpha]++;
        v[i]=alpha;
    }
    sort(v.begin(),v.end());
    int ans=(n-fre[v[0]]);
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}