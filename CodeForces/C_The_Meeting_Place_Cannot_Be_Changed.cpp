#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define epsilon 1e-9
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi location(n);
    vi speed(n);
    fo(i,n)
        cin>>location[i];
    fo(i,n)
        cin>>speed[i];
    double low=0,high=1000000000,mid;
    while((high-low)>epsilon)
    {
        mid=(low+high)/2;
        double mini=1000000000000,maxi=-1000000000000;
        for(int i=0;i<n;i++)
        {
            double l=(location[i]-(speed[i]*mid));
            double r=(location[i]+(speed[i]*mid));
            maxi=max(maxi,l);
            mini=min(r,mini);
        }
        if(maxi<mini)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    cout << setprecision(16) << fixed << mid << endl;
}