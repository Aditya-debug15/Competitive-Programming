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
    int n,m,k;
    cin>>n>>m>>k;
    vi A(n);
    vi B(m);
    fo(i,n)
    {
        cin>>A[i];
    }
    fo(i,m)
    {
        cin>>B[i];
    }
    // 0 < w1 ≤ w2 ≤ ... ≤ wk holds.
    if(n>m)
    {
        // agar mere pass sabse bda k nahi hai to wi=wi+1=wi+2......w=k i=1;
        // sabko equal
        cout<<"YES"<<endl;
        return;
    }
    else{
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        // m>n
        // ek bhi mere pass usse bda hai
        // 2
        // 1 3 4 5 
        // No
        // yes kab ho sakta
        // jab mere pass 6 wala ho
        // 1 3 4 5
        // 1 2 2 4 5
        // 2 2 4 5
        // 3>2 4 aur 5 ko priority 3 equal 
        for(int i=0;i<n;i++)
        {
            if(A[i]>B[m-n+i])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}