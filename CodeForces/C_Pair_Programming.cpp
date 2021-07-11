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
    int k, n, m;
    cin >> k >> n >> m;
    int count_a = 0, count_b = 0;
    vi A(n);
    vi B(m);
    fo(i, n)
    {
        cin >> A[i];
    }
    fo(i, m)
    {
        cin >> B[i];
    }
    vi Final(n + m);
    int i = 0;
    int inc_a = 0, inc_b = 0;
    while (i < (n + m))
    {
        if (inc_a >= n)
        {
            if(B[inc_b]==0)
            {
                Final[i] = B[inc_b];
                inc_b++;
                k++;
            }
            else if(B[inc_b]<=k)
            {
                Final[i] = B[inc_b];
                inc_b++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        else if (inc_b >= m)
        {
            if(A[inc_a]==0)
            {
                Final[i] = A[inc_a];
                inc_a++;
                k++;
            }
            else if(A[inc_a]<=k)
            {
                Final[i] = A[inc_a];
                inc_a++;
            }
            else{
                cout<<-1<<endl;
                return;
            }   
        }
        else if (B[inc_b] == 0)
        {
            Final[i] = B[inc_b];
            inc_b++;
            k++;
        }
        else if (A[inc_a] == 0)
        {
            Final[i] = A[inc_a];
            inc_a++;
            k++;
        }
        else
        {
            if(A[inc_a] < B[inc_b])
            {
                if(A[inc_a]<=k)
                {
                    Final[i] = A[inc_a];
                    inc_a++;   
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
            else{
                if(B[inc_b]<=k)
                {
                    Final[i] = B[inc_b];
                    inc_b++;   
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        i++;
    }
    fo(i,(n+m))
        cout<<Final[i]<<" ";
    cout<<endl;
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