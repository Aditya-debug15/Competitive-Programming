#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,count=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    int bonus=(100-A[n-1]);
    for(int i=0;i<n;i++)
    {
        A[i]+=bonus;
        if(A[i]>=50)
            count++;
    }
    cout<<count<<endl;
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