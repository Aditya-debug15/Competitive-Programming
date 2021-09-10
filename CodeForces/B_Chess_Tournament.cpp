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
    string s;
    cin>>s;
    int count1=0,count2=0;
    vi A;
    fo(i,n)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        else{
            count2++;
            A.push_back(i);
        }
    }
    char matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                matrix[i][j]='X';
            }
            else{
                matrix[i][j]='=';
            }
        }
    }
    if(count2==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
    else if(count2>2)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<count2-1;i++)
        {
            matrix[A[i]][A[i+1]]='+';
            matrix[A[i+1]][A[i]]='-';
        }
        matrix[A[count2-1]][A[0]]='+';
        matrix[A[0]][A[count2-1]]='-';
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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