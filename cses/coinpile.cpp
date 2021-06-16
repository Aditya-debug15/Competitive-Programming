#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a <= 2*b && b <= 2*a)
        {
            ll c = a % 3 + b % 3;
            if (c % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO " << endl;
        }
        else
        {
            cout << "NO " << endl;
        }
    }
}