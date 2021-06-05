#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define prime int(1e9+7)
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int k=n/2;
    cout<<k<<endl;
    for(int i=1;i<n;)
    {
        int x=min(vec[i-1],vec[i]);
        cout<<i<<" "<<i+1<<" "<<x<<" "<<prime<<endl;
        i+=2;
    }
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