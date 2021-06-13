#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    int B[n];
    map<int,int> extra;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
        extra[B[i]]++;
        sum+=ll(B[i]);
    }
    if((sum%n)!=0)
    {
        cout<<-1<<endl;
    }
    else if(extra.size()==1)
    {
        cout<<0<<endl;
    }
    else{
        int count=0;
        sum/=n;
        for(int i=0;i<n;i++)
        {
            if(B[i]>sum)
            {
                count++;
            }
        }
        cout<<count<<endl;
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