#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(2*n);
    vector<int> vec2(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        vec2[i*2]=vec[i];
    }
    int j=1;
    for(int i=n;i<2*n;i++)
    {
        vec2[j]=vec[i];
        j+=2;
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
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