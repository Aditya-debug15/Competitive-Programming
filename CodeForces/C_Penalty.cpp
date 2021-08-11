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
    cin>>s;
    // part A
    int answer_a=10;
    int answer_b=10;
    int goal_A=0;
    int goal_B=0;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1' || s[i]=='?')
            {
                goal_A++;
            }
            if(goal_A>((10-i)/2)+goal_B)
            {
                answer_a=i+1;
                break;
            }
            else if(goal_B>((9-i)/2)+goal_A)
            {
                answer_a=i+1;
                break;
            }
        }
        else{
            if(s[i]=='1')
            {
                goal_B++;
            }
            if(goal_A>((10-i)/2)+goal_B)
            {
                answer_a=i+1;
                break;
            }
            else if(goal_B>((9-i)/2)+goal_A)
            {
                answer_a=i+1;
                break;
            }
        }
    }
    // part B
    answer_b=10;
    goal_A=0;
    goal_B=0;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
            {
                goal_A++;
            }
            if(goal_B>((9-i)/2)+goal_A)
            {
                answer_b=i+1;
                break;
            }
            else if(goal_A>((10-i)/2)+goal_B)
            {
                answer_b=i+1;
                break;
            }
        }
        else{
            if(s[i]=='1' || s[i]=='?')
            {
                goal_B++;
            }
            if(goal_B>((9-i)/2)+goal_A)
            {
                answer_b=i+1;
                break;
            }
            else if(goal_A>((10-i)/2)+goal_B)
            {
                answer_b=i+1;
                break;
            }
        }
    }
    int answer=min(answer_a,answer_b);
    cout<<answer<<endl;
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