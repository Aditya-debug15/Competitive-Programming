#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int C[100009];
int A[100009];
int B[100009];
int main()
{
    int n;
    ll sum = 0;
    map<int ,int> fre;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin>>B[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin>>C[i];
    }
    for (int i = 1; i <= n; i++)
    {
        fre[B[C[i]]]++;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=ll(fre[A[i]]);
    }
    cout << sum << endl;
}