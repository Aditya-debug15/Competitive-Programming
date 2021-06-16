#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    ll A[n];
    ll moves=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(i>=1 && A[i]<A[i-1])
        {
            moves+=(A[i-1]-A[i]);
            A[i]=A[i-1];
        }
    }
    cout<<moves;
}