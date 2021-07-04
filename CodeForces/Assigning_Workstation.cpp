#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first) {
    	return a.second > b.second;
        }
    return a.first < b.first;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
	sort(v.begin(), v.end(),compare);
	multiset<ll> multi;
	ll count=0;
	for(int i=0;i<n;i++)
	{
		auto it=multi.lower_bound(v[i].first-m);
		if(it==multi.end())
		{
			multi.insert(v[i].first + v[i].second);
		}
		else if(*it<=v[i].first)
		{
			count++;
			multi.erase(it);
			multi.insert(v[i].first + v[i].second);
		}
		else{
			multi.insert(v[i].first + v[i].second);
		}
	}
	cout<<count<<endl;
}