#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        s.insert(alpha);
    }
    cout<<s.size()<<endl;
}