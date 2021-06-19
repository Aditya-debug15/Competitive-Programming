#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    set<pair<int,pair<int,int>>> horizontal;
    set<pair<int,pair<int,int>>> vertical;
    set<int> horizontal_points;
    set<int> vertical_points;
    int w,h,n;
    cin>>w>>h>>n;
    horizontal_points.insert(0);
    horizontal_points.insert(h);
    vertical_points.insert(0);
    vertical_points.insert(w);
    horizontal.insert({h-0,{0,h}});
    vertical.insert({w-0,{0,w}});
    ll hmax=h,vmax=w;
    for(int i=0;i<n;i++)
    {
        char in;
        int x;
        cin>>in>>x;
        if(in=='H')
        {
            horizontal_points.insert(x);
            auto it_below=horizontal_points.find(x);
            auto it_above=it_below;
            it_above++;
            it_below--;
            int above=(*it_above);
            int below=(*it_below);
            horizontal.erase({(above-below),{below,above}});
            horizontal.insert({(x-below),{below,x}});
            horizontal.insert({(above-x),{x,above}});
            hmax=ll((*horizontal.rbegin()).first);
        }
        else{
            vertical_points.insert(x);
            auto it_below=vertical_points.find(x);
            auto it_above=it_below;
            it_above++;
            it_below--;
            int above=(*it_above);
            int below=(*it_below);
            vertical.erase({(above-below),{below,above}});
            vertical.insert({(x-below),{below,x}});
            vertical.insert({(above-x),{x,above}});
            vmax=ll((*vertical.rbegin()).first);
        }
        cout<<hmax*vmax<<endl;
    }
    /*
    s.insert({0,2});
    s.insert({2,4});
    s.insert({4,7});
    s.insert({7,9});
    auto it=s.lower_bound({5,5});
    it--;
    int alpha=(*it).first;
    int beta=(*it).second;
    s.erase(it);
    s.insert({alpha,5});
    s.insert({5,beta});
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    */
}