#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n>3)
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }

    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }
}