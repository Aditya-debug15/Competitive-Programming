#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    int even_size=0;
    int odd_size=0;
    int count=0;
    cin>>n;
    vector<int> even;
    vector<int> odd;
    vector<int> full;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        if(alpha%2==0)
        {
            even.push_back(alpha);
            even_size++;
        }
        else{
            odd.push_back(alpha);
            odd_size++;
        }
    }
    for(int i=0;i<even_size;i++)
    {
        full.push_back(even[i]);
    }
    for(int i=0;i<odd_size;i++)
    {
        full.push_back(odd[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=(i+1);j<n;j++)
        {
            int num=__gcd(full[i],2*full[j]);
            if(num>1)
                count++;
        }
    }
    cout<<count<<endl;
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