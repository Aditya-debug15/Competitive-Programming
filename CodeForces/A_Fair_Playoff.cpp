#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    sort(vec.begin(),vec.end());
    int e=b,f=d;
    if(a>b)
        e=a;
    if(c>d)
        f=c;
    if((vec[2]==e && vec[3]==f) || vec[2]==f && vec[3]==e)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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