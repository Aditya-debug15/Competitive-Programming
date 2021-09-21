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
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int i=0,j=1;
    ll final_a=0;
    int previous=0;
    while(i<n)
    {
        if(a[i]==b[i] && a[i]=='1')
        {
            j=i;
            while(j<n && a[j]=='1' && b[j]=='1')
            {
                j++;
            }
            if(j!=n)
            {
                final_a+=2;
                previous=2;
            }
            else
            {
                if(previous==1)
                {
                    final_a++;
                    previous=2;
                }
            }
            i=j;
        }
        else if(a[i]==b[i] && a[i]=='0')
        {
            if(i!=(n-1) && a[i+1]=='1' && b[i+1]=='1')
            {
                final_a+=2;
                i++;
                previous=2;
            }
            else{
                final_a++;
                previous=1;
            }
        }
        else{
            final_a+=2;
            previous=2;
        }
        i++;
    }
    cout<<final_a<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}