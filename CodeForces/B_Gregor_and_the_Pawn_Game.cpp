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
    int n;
    cin >> n;
    string enemy, hum;
    cin >> enemy >> hum;
    int answer = 0;
    fo(i, n)
    {
        if (enemy[i] == '0' && hum[i] == '1')
        {
            answer++;
            enemy[i]='2';
        }
        else if(hum[i]=='1')
        {
            if(i>0 && enemy[i-1]=='1')
            {
                enemy[i-1]=2;
                answer++;
            }
            else if(i+1<n && enemy[i+1]=='1')
            {
                enemy[i+1]=2;
                answer++;
            }
        }
    }
    //cout<<enemy<<endl;
    cout << answer << endl;
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