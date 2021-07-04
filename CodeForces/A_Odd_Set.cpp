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
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<(2*n);i++)
    {
        int alpha;
        cin>>alpha;
        if(alpha%2==0)
            count_even++;
        else
            count_odd++;
    }
    if(count_odd==count_even)
        cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
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