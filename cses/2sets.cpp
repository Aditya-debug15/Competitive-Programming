#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    ll n;
    cin >> n;
    if (sum(n) % 2 == 0)
    {
        cout << "YES" << endl;
        if (n % 2 == 1)
        {
            cout<< n/2 +1<<"\n";
            for (int i = 1; i <= n/2; i += 2)
            {
                cout << i << " ";
            }
            for (int i = n/2 + 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout<<"\n"<<n/2<<"\n";
            for (int i = 2; i <= n/2; i += 2)
            {
                cout << i << " ";
            }
            for (int i = n/2 + 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout <<"\n";
        }
        else{
            cout<<n/2<<"\n";
            for(int i=1;i<=n/2;i+=2)
                cout<<i<<" ";
            for(int i=n/2 +2;i<=n;i+=2)
                cout<<i<<" ";
            cout<<"\n"<<n/2<<"\n";
            for(int i=2;i<=n/2;i+=2)
                cout<<i<<" ";
            for(int i=n/2 +1;i<=n;i+=2)
                cout<<i<<" ";
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}