#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> prev;
    prev.push_back(1);
    cout<<1<<endl;
    for(int i=1;i<n;i++)
    {
        if(v[i]==1)
        {
            prev.push_back(1);
        }
        else if(v[i]==prev.back()+1)
        {
            prev.pop_back();
            prev.push_back(v[i]);
        }

        else{
            while(v[i]!=prev.back()+1 && prev.size()>0)
                prev.pop_back();
            if(prev.size()!=0)
                prev.pop_back();
            prev.push_back(v[i]);
        }
        for(int i=0;i<prev.size();i++)
        {
            if(i!=(prev.size()-1))
                cout<<prev[i]<<".";
            else{
                cout<<prev[i];
            }
        }
        cout<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}