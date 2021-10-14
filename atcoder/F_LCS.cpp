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
    string A,B;
    cin>>A>>B;
    int m, n;
    m = A.length();
    n = B.length();
    int dp[m+1][n+1];

    // intialize the first row with 0
    for (int i = 0; i <= m; i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0;
        }
    }

    // array work
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int i = m, j = n;
    int index=dp[m][n];
    char Storage[index+1];
    Storage[index]='\0';
    while (i>0 && j>0)
    {
        if (A[i - 1] == B[j - 1])
        {
            Storage[index-1] = A[i - 1];
            i--;
            j--;
            index--;
        }
        else
        {
            if (dp[i][j - 1] > dp[i - 1][j])
                j--;
            else
                i--;
        }
    }
    cout<<Storage<<endl;
}
