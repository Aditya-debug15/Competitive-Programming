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
    string s;
    int sa=0,sg=0;
    fo(i,n)
    {
        int alpha,beta;
        cin>>alpha>>beta;
        if(sa+alpha-sg<=500)
        {
            s.push_back('A');
            sa+=alpha;
        }
        else{
            s.push_back('G');
            sg+=beta;
        }
    }
    if(abs(sa-sg)>500)
    {
        cout<<-1<<endl;
    }
    else
        cout<<s<<endl;
}