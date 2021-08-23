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
bool compare(pii a,pii b)
{
    if(a.second!=b.second)
        return a.second>b.second;
    else{
        return a.first>b.first;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vpi cards(n);
    fo(i,n)
    {
        cin>>cards[i].first>>cards[i].second;
    }
    int num=1;
    int count=0;
    sort(cards.begin(),cards.end(),compare);
    int i=0;
    while(num>0 && i<n)
    {
        num--;
        num+=cards[i].second;
        count+=cards[i].first;
        i++;
    }
    cout<<count<<endl;
}