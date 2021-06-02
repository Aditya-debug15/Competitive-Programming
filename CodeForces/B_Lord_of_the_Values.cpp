#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k=3*n;
    cout<<k<<endl;
    for(int i=0;i<n;i+=2)
    {
        cout<<2<<" "<<i+1<<" "<<i+2<<endl;
        cout<<1<<" "<<i+1<<" "<<i+2<<endl;
        cout<<2<<" "<<i+1<<" "<<i+2<<endl;
        cout<<1<<" "<<i+1<<" "<<i+2<<endl;
        cout<<2<<" "<<i+1<<" "<<i+2<<endl;
        cout<<1<<" "<<i+1<<" "<<i+2<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}