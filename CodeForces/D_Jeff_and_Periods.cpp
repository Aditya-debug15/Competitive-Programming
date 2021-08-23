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
    vector<vector<int>> A(1e5+7);
    map<int,int> M;
    int n;
    cin>>n;
    int ans=0;
    vpi answ;
    fo(i,n)
    {
        int alpha;
        cin>>alpha;
        A[alpha].push_back(i);
        M[alpha]++;
    }
    for(auto it:M)
    {
        int number=it.first;
        int count=it.second;
        if(it.second==1)
        {
            answ.push_back({it.first,0});
            ans++;
        }
        else{
            int common=A[number][1]-A[number][0];
            bool ispossi=true;
            for(int j=2;j<count;j++)
            {
                if((A[number][j]-A[number][j-1])!=common)
                {
                    ispossi=false;
                    break;
                }
            }
            if(ispossi)
            {
                answ.push_back({number,common});
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    fo(i,ans)
    {
        cout<<answ[i].first<<" "<<answ[i].second<<endl;
    }
}