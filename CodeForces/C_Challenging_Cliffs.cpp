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
    vi arr(n);
    map<int,int> m;
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        arr[i]=alpha;
        m[alpha]++;
    }
    sort(arr.begin(),arr.end());
    vi final(n);
    auto it=m.begin();
    int number=0;
    int count_number=0;
    for(;it!=m.end();it++)
    {
        if((*it).second>=2)
        {
            number=(*it).first;
            count_number=(*it).second;
            break;
        }
    }
    if(number==0)
    {
        int min_diff=INT_MAX;
        int n1,n2;
        fo(i,n-1)
        {
            if((arr[i+1]-arr[i])<min_diff)
            {
                min_diff=(arr[i+1]-arr[i]);
                n2=arr[i+1];
                n1=arr[i];
            }
        }
        cout<<n1<<" ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]>n1 && arr[i]!=n2)
            {
                cout<<arr[i]<<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<n1 && arr[i]!=n2)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<n2<<endl;
    }
    else{
        cout<<number<<" ";
        count_number--;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>number)
            {
                cout<<arr[i]<<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<number)
            {
                cout<<arr[i]<<" ";
            }
        }
        fo(i,count_number)
        {
            cout<<number<<" ";
        }
        cout<<endl;
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