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
string check(string s,deque<char> sec_out,int sec_out_len)
{
    string result=s;
    fo(i,sec_out_len)
    {
        char a=sec_out[i];
        string temp;
        for(auto c: s)
        {
            if(c!=a)
            {
                temp.push_back(c);
                result.push_back(c);
            }
        }
        s=temp;
    }
    return result;
}
void solve()
{
    string t,s;
    cin>>t;
    deque<char> sec_out;
    sec_out.push_back('\0');
    map<char,int> counts;
    int sec_out_len=0;
    int len_s=0;
    foi(i,t.size())
    {
        if(counts[t[i]]==0)
        {
            sec_out.push_front(t[i]);
            sec_out_len++;
        }
        counts[t[i]]++;
    }
    fo(i,sec_out_len)
    {
        int counter=(counts[sec_out[i]])/(i+1);
        len_s+=counter;
    }
    fo(j,len_s)
    {
        s.push_back(t[j]);
    }
    string extra=check(s,sec_out,sec_out_len);
    if(extra==t)
    {
        cout<<s<<" ";
        fo(i,sec_out_len)
        {
            cout<<sec_out[i];
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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