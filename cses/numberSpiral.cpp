#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll find_num(ll x)
{
    return x*x - x +1;
}
int main()
{
    int t;
    cin >> t;
    for (int inputs = 0; inputs < t; inputs++)
    {
        ll out=0;
        ll n, m;
        cin >> n >> m;
        if (n > m)
        {
            ll extra=n-m;
            out=find_num(n);
            if(n%2==0)
            {
                cout<<extra+out<<endl;
            }
            else{
                cout<<out-extra<<endl;
            }
        }
        else{
            ll extra=m-n;
            out=find_num(m);
            if(m%2==0)
            {
                cout<<out-extra<<endl;
            }
            else{
                cout<<extra+out<<endl;
            }
        }
    }

}