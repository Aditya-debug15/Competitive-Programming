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
    string s;
    int count4=0,count7=0;
    cin>>s;
    fo(i,s.length())
    {
        if(s[i]=='4')
            count4++;
        else if(s[i]=='7')
            count7++;
    }
    if(count4==0 && count7==0)
        cout<<-1<<endl;
    else if(count4>=count7)
        cout<<4<<endl;
    else{
        cout<<7<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    while(t--)
    {
        solve();
    }
}