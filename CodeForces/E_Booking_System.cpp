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
typedef struct rupee rupee;
struct rupee{
    int bande;
    int profit;
    int order;
};
bool compare(const rupee &a,const rupee &b)
{
    if(b.profit!=a.profit)
        return b.profit<a.profit;
    return a.bande<b.bande;
}
void solve()
{
    int n;
    scanf("%d",&n);
    vector<rupee> paisa(n);
    fo(i,n)
    {
        int alpha,beta;
        scanf("%d %d",&paisa[i].bande,&paisa[i].profit);
        paisa[i].order=i+1;
    }
    sort(paisa.begin(),paisa.end(),compare);
    int tables;
    scanf("%d",&tables);
    vpi tab(tables);
    for(int i=0;i<tables;i++)
    {
        int alpha;
        scanf("%d",&tab[i].first);
        tab[i].second=i+1;
    }
    sort(tab.begin(),tab.end());
    int kamao=0;
    vpi answer;
    for(int i=0;i<n;i++)
    {
        auto it = lower_bound(tab.begin(),tab.end(),make_pair(paisa[i].bande,0));
        if(it!=tab.end())
        {
            kamao+=paisa[i].profit;
            answer.push_back({paisa[i].order,(*it).second});
            tab.erase(it);   
        }
    }
    cout<<answer.size()<<" "<<kamao<<endl;
    fo(i,answer.size())
    {
        cout<<answer[i].first<<" "<<answer[i].second<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}