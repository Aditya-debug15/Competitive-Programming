#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int M=1e6+1;

int dp[M];
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            dp[i]=dp[i-1]+1;
    }
    int output=0;
    for(int i=0;i<M;i++)
    {
        if(output<dp[i])
        {
            output=dp[i];
        }
    }
    cout<<output+1;
}