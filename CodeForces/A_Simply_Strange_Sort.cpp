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
    int A[n];
    int B[n];
    fo(i,n)
    {
        cin>>A[i];
        B[i]=A[i];
    }
    sort(B,B+n);
    int count=0;
    bool is=false;
    fo(i,n)
    {
        if(A[i]!=B[i])
        {
            is=true;
            break;
        }
    }
    while(is)
    {
        if(count%2==0)
        {
            for(int i=0;i<(n-1);i+=2)
            {
                if(A[i]>A[i+1])
                {
                    int temp=A[i+1];
                    A[i+1]=A[i];
                    A[i]=temp;
                }
            }
        }
        else{
            for(int i=1;i<(n-1);i+=2)
            {
                if(A[i]>A[i+1])
                {
                    int temp=A[i+1];
                    A[i+1]=A[i];
                    A[i]=temp;
                }
            }
        }
        count++;
        is=false;
        fo(i,n)
        {
            if(A[i]!=B[i])
            {
                is=true;
                break;
            }
        }
    }
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