#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<pair<int,int>> s;
    int n,x;
    cin>>n>>x;
    bool check=true;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        s.push_back({alpha,i+1});
    }
    sort(s.begin(),s.end());
    int r=0,l=n-1;
    while(r<l && check)
    {
        ll sum=ll(s[r].first) + ll(s[l].first);
        //cout<<sum<<endl;
        if(sum==x)
        {
            cout<<s[r].second<<" "<<s[l].second<<endl;
            check=false;
        }
        else if(sum>x)
        {
            l--;
        }
        else{
            r++;
        }
    }
    if(check)
        cout<<"IMPOSSIBLE"<<endl;
}