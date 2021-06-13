#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    int ma=0;
    int map=0;
    int mip=0;
    int mi=n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>ma)
        {
            ma=A[i];
            map=i;
        }
        if(A[i]<mi)
        {
            mi=A[i];
            mip=i;
        }
    }
    int midway=n/2;
    if(mip>midway && map >midway)
    {
        cout<<n-min(mip,map)<<endl;
    }
    else if(mip<midway && map <midway)
    {
        cout<<max(mip,map)+1<<endl;
    }
    else
    {
        int m=max(mip,map);
        int j=min(mip,map);
        j=n-j;
        m+=1;
        int alpha,beta;
        if(mip<midway)
        {
            alpha=mip+1;
            beta=n-map;
        }
        else{
            alpha=map+1;
            beta=n-mip;
        }
        int gamma=alpha+beta;
        int A[3];
        A[0]=gamma;
        A[1]=j;
        A[2]=m;
        sort(A,A+3);
        cout<<A[0]<<endl;
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