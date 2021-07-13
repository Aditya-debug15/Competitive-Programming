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
    vi A(n);
    vi B(n);
    vpi increase;
    vpi decrease;
    int sum_a=0,sum_b=0;
    int final_answer=0;
    fo(i,n)
    {
        cin>>A[i];
        sum_a+=A[i];
    }
    fo(i,n)
    {
        cin>>B[i];
        sum_b+=B[i];
        if(A[i]>B[i])
        {
            decrease.push_back({i,A[i]-B[i]});
            final_answer+=(A[i]-B[i]);
        }
        else if(B[i]>A[i])
            increase.push_back({i,(B[i]-A[i])});
    }
    if(sum_a!=sum_b)
    {
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<final_answer<<endl;
        int i=0;
        int j=0;
        int len_i=increase.size();
        int len_d=decrease.size();
        while(i<len_i)
        {
            int subtraction=increase[i].second;
            int addition=decrease[j].second;
            if(subtraction>addition)
            {
                for(int extra=0;extra<addition;extra++)
                {
                    cout<<decrease[j].first+1<<" "<<increase[i].first+1<<endl;
                    decrease[j].second--;
                    increase[i].second--;
                }
                j++;
            }
            else{
                for(int extra=0;extra<subtraction;extra++)
                {
                    cout<<decrease[j].first+1<<" "<<increase[i].first+1<<endl;
                    decrease[j].second--;
                    increase[i].second--;
                }
                i++;
            }
        }
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