#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cnt = 0;
    ll size=n;
    ll i = 0, low = size-1;
    ll high =size-1;
    while (i < high) {
        //find the lower bound such that arr[i] + arr[low] < a, 
        //meanwhile arr[i]+arr[low+1] >= a
        low = max(i, low);
        while (low > i && ll(arr[i] + arr[low]) >= a) --low;

        //find an upper bound such that arr[i] + arr[high] <= b 
        //meanwhile, arr[i]+arr[high+1] > b
        while (high > low && ll(arr[i] + arr[high]) > b) --high; 
        //all pairs: arr[i]+arr[low+1], arr[i]+arr[low+2],...,arr[i]+arr[high]
        //are in the rage[a, b], and we count it as follows.
        cnt += (high-low);
        ++i;
    }
    cout<<cnt<<endl;
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