#include<bits/stdc++.h>
using namespace std;

int absolute(int a,int b){
    if(a>b)
        return (a-b);
    return(b-a);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> vec_negative;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        if(alpha<=0)
            vec_negative.push_back(alpha);
        else
            vec.push_back(alpha);
    }
    sort(vec_negative.begin(),vec_negative.end());
    sort(vec.begin(),vec.end());
    if(vec_negative.size()>=2)
    {
        int min=INT_MAX;
        for(int i=0;i<vec_negative.size()-1;i++)
        {
            int extra=absolute(vec_negative[i],vec_negative[i+1]);
            if(extra<min)
                min=extra;
        }
        if(n>vec_negative.size() && min>=vec[0])
            cout<<vec_negative.size()+1<<endl;
        else{
            cout<<vec_negative.size()<<endl;
        }
    }
    else if(vec_negative.size()==0)
        cout<<1<<endl;
    else{
        if(n>vec_negative.size())
            cout<<vec_negative.size()+1<<endl;
        else if(vec.size()==0)
            cout<<vec_negative.size()<<endl;
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