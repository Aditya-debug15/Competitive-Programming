#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll calcu(ll n)
{
    if(n<=0)
        return 0;
    n*=(n-1);
    n/=2;
    return n;
}
void solve()
{
    string s;
    cin>>s;
    int length=s.size();
    ll final_answer=0;
    char prev=s[0];
    int cosecu_=0;
    ll curr_leng=1;
    int lastpos=0;
    for(int i=1;i<length;i++)
    {
        if(prev=='?')
        {
            if(s[i]=='1')
            {
                prev='1';
                curr_leng++;
            }
            else if(s[i]=='0')
            {
                prev='0';
                curr_leng++;
            }
            else{
                curr_leng++;
            }
        }
        else if(s[i]=='?')
        {
            if(prev=='0')
            {
                curr_leng++;
                prev='1';
            }
            else if(prev=='1')
            {
                curr_leng++;
                prev='0';
            }
            cosecu_++;
        }
        else if(s[i]=='1' && prev=='0')
        {
            curr_leng++;
            prev='1';
            cosecu_=0;
        }
        else if(s[i]=='0' && prev=='1')
        {
            curr_leng++;
            prev='0';
            cosecu_=0;
        }
        else{
            final_answer+=calcu(curr_leng);
            curr_leng=1;
            if(s[i-1]=='?')
            {
                prev=s[i];
                curr_leng+=cosecu_;
                final_answer-=calcu(cosecu_);
            }
            else{
                prev=s[i];
            }
            cosecu_=0;
        }
    }
    if(curr_leng>1)
    {
        final_answer+=calcu(curr_leng);
    }
    cout<<(final_answer+length)<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}