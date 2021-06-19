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

}
int getClosest(int val1, int val2,int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}
int findClosest(int arr[], int n, int target)
{
    // Corner cases
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
 
    // Doing binary search
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {
 
            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],arr[mid], target);
 
            /* Repeat for left half */
            j = mid;
        }
 
        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],arr[mid + 1], target);
            // update i
            i = mid + 1;
        }
    }
 
    // Only single element left after search
    return arr[mid];
}
int absolute(int a,int b)
{
    if(a>b)
        return (a-b);
    else{
        return (b-a);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    */
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cell[k];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fo(i,k)
        cin>>cell[i];
    int r=0;
    fo(i,n)
    {
        int close=findClosest(cell,k,arr[i]);
        int alpha=absolute(close,arr[i]);
        if(alpha>r)
        {
            r=alpha;
        }
    }
    cout<<r<<endl;
}