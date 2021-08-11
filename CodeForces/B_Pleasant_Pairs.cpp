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
int binarySearch(int arr[], int low, int high, int elem,int pos)
{

    if(high >= low)
    {
        int mid = (low + high)/2; /*low + (high - low)/2;*/
        int search=(pos+mid);
        if(search%elem==0)
            if(arr[mid]==(search/elem))
                return mid;
        if(mid > arr[mid])
            return binarySearch(arr, (mid + 1), high,elem,pos);
        else
            return binarySearch(arr, low, (mid -1),elem,pos);
    }
 
    /* Return -1 if there is no Fixed Point */
    return -1;
}
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    fo(i,n)
    {
        cin>>arr[i];
    }
    ll count=0;
    fo(i,n)
    {
        int res=binarySearch(arr,0,n,arr[i],i+1);
        if(res!=-1)
        {
            count++;
        }
    }
    count/=2;
    cout<<count<<endl;
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