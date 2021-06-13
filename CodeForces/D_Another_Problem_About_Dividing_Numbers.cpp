#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int primeFactors(int n)
{
    int count=0;
    while (n % 2 == 0)
    {
        count++;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            count++;
            n = n/i;
        }
    }
 
    if (n > 2)
        count++;
    return count;
}
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    int alpha=primeFactors(a);
    alpha+=primeFactors(b);
    if(k<=alpha && k>=2)
    {
        cout<<"YES"<<endl;
    }
    else if(k==1)
    {
        if(a>b && (a%b)==0)
        {
            cout<<"YES"<<endl;
        }
        else if(b>a && (b%a)==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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