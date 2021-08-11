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
bool sortbysec(const pair<int,pair<int,int>> &a, const pair<int,pair<int,int>> &b)
{
    return (a.second.first < b.second.first);
}
void solve()
{
    int n,k,sum=0;
    cin>>n>>k;
    vi A(n);
    vector<pair<int,pair<int,int>>> solution(n); 
    map<int,int> counter;
    map<int,int> counter_extra;
    fo(i,n)
    {
        cin>>A[i];
        counter[A[i]]++;
        counter_extra[A[i]]++;
        solution[i]={i,{A[i],0}};
    }
    sort(solution.begin(), solution.end(), sortbysec);
    for(auto i=counter.begin();i!=counter.end();i++)
    {
        if((*i).second<k)
        {
            sum+=(*i).second;
        }
    }
    sum/=k;
    int values=0;
    int pointer=1;
    fo(i,n)
    {
        if(counter[solution[i].second.first]>=k && counter[solution[i].second.first]-counter_extra[solution[i].second.first]<k)
        {
            solution[i].second.second=(counter[solution[i].second.first]-counter_extra[solution[i].second.first]+1);
            counter_extra[solution[i].second.first]--;
        }
        else if(counter[solution[i].second.first]>=k && counter[solution[i].second.first]-counter_extra[solution[i].second.first]>=k)
        {
            solution[i].second.second=0;
        }
        else{
            if(values<sum)
            {
                solution[i].second.second=pointer;
                pointer++;
                if(pointer>k)
                {    
                    pointer=1;
                    values++;
                }
            }
            else{
                solution[i].second.second=0;
            }
        }
    }
    sort(solution.begin(),solution.end());
    fo(i,n)
    {
        cout<<solution[i].second.second<<" ";
    }
    cout<<endl;
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