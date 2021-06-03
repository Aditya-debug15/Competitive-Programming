#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
bool basic_check(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]!=(i+1))
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    if(basic_check(A,n))
    {
        cout<<0<<endl;
    }
    else if(A[0]==n && A[n-1]==1)
    {
        cout<<3<<endl;
    }
    else if(A[0]==1 || A[n-1]==n)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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