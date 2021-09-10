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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int low=1;
    int high=n;
    int A[n+2];
    bool B[n+2]={false};
    A[n+1]=n+1;
    A[0]=n+1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(mid>=1 && mid<=n && B[mid]==false)
        {
            cout<<"? "<<mid<<endl;
		    fflush(stdout);
		    cin>>A[mid];
            B[mid]=true;
        }
        // m+1
        if(mid>=1 && mid<=n && B[mid+1]==false)
        {
            cout<<"? "<<mid+1<<endl;
		    fflush(stdout);
		    cin>>A[mid+1];
            B[mid+1]=true;
        }
        if(A[mid]<A[mid+1])
        {
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"! "<<low<<endl;
}
//
//51
//47 32 43 46 49 23 17 2 45 21 27 13 15 26 36 44 9 4 19 31 33 29 8 20 18 42 48 35 51 38 25 5 12 41 7 3 10 1 50 16 30 37 11 6 34 28 14 40 24 39 22