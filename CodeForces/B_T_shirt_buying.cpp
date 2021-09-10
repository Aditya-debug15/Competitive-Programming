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
typedef struct alpha alpha;
struct alpha{
    int p,a,b;
};
bool comp(pii a,pii b)
{
    return (a.first > b.first);
}
void solve()
{
    int n;
    cin>>n;
    vector<alpha> A(n);
    vector<vector<pair<int,int>>> values(3);
    fo(i,n)
    {
        cin>>A[i].p;
    }
    fo(i,n)
    {
        cin>>A[i].a;
    }
    fo(i,n)
    {
        cin>>A[i].b;
    }
    fo(i,n)
    {
        if(A[i].a==A[i].b)
        {
            values[A[i].a-1].push_back({A[i].p,i});
        }
        else{
            values[A[i].a-1].push_back({A[i].p,i});
            values[A[i].b-1].push_back({A[i].p,i});
        }
    }
    sort(values[0].begin(),values[0].end(),comp);
    sort(values[1].begin(),values[1].end(),comp);
    sort(values[2].begin(),values[2].end(),comp);
    int it0=values[0].size()-1;
    int it1=values[1].size()-1;
    int it2=values[2].size()-1;
    vector<bool> used(n,false);
    int m;
    cin>>m;
    fo(i,m)
    {
        int want;
        cin>>want;
        want--;
        if(want==0)
        {
            while(it0>=0 && used[values[want][it0].second]==true)
            {
                it0--;
            }
            if(it0<0)
                cout<<-1<<" ";
            else{
                used[values[want][it0].second]=true;
                cout<<values[want][it0].first<<" ";
                it0--;
            }
        }
        else if(want==1)
        {
            while(it1>=0 && used[values[want][it1].second]==true)
            {
                it1--;
            }
            if(it1<0)
                cout<<-1<<" ";
            else{
                used[values[want][it1].second]=true;
                cout<<values[want][it1].first<<" ";
                it1--;
            }
        }
        else
        {
            while(it2>=0 && used[values[want][it2].second]==true)
            {
                it2--;
            }
            if(it2<0)
                cout<<-1<<" ";
            else{
                used[values[want][it2].second]=true;
                cout<<values[want][it2].first<<" ";
                it2--;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}