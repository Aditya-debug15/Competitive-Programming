#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        s.insert(alpha);
    }
    auto it=s.begin();
    it++;
    if(it!=s.end())
    {
        cout<<*it<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}