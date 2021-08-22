#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int, int>>
void solve()
{
    int n,k;
    cin >> n>>k;
    vi sort_array(n);
    vi array(n);
    fo(i,n)
    {
        int x;
        cin>>x;
        sort_array[i]=x;
        array[i]=x;
    }
    sort(sort_array.begin(),sort_array.end());
    int count=0;
    int i=0;
    while(i<n)
    {
        int iter=lower_bound(sort_array.begin(),sort_array.end(), array[i])-sort_array.begin();
        while(i<n && iter<n && sort_array[iter]==array[i])
        {
            i++;
            iter++;
        }
        count++;
    }
    if(count<=k)
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}