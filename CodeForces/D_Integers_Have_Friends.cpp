#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
const int Max = 2e5 + 7;
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define lvi vector<long long>
class SegmentTrees
{
	lvi st;

public:
	SegmentTrees(int n)
	{
		st.assign(4 * n, 1);
	}
	void build(lvi &arr, int left, int right, int pos = 1)
	{
		if (left > right)
			return;
		if (left == right)
		{
			st[pos] = arr[left];
		}
		else
		{
			int mid = (left + right) / 2;
			build(arr, left, mid, pos * 2);
			build(arr, mid + 1, right, pos * 2 + 1);
			st[pos] = __gcd(st[pos * 2], st[pos * 2 + 1]);
		}
	}
	ll range_query(int l, int r, int left, int right, int pos = 1)
	{
		if (l > r)
			return 0;
		if (l == left and r == right)
			return st[pos];
		int mid = (left + right) / 2;
		return __gcd(range_query(l, min(r, mid), left, mid, pos * 2),
					 range_query(max(l, mid + 1), r, mid + 1, right, pos * 2 + 1));
	}
};
ll lookup[Max][21];
lvi arr(Max);
void buildSparseTable(int n)
{
    for (int i = 0; i < n; i++)
        lookup[i][0] = arr[i];
	for (int j = 1; j <= 20; j++)
    	for (int i = 0; i + (1 << j) <= n; i++)
        	lookup[i][j] = __gcd(lookup[i][j-1], lookup[i + (1 << (j - 1))][j - 1]);
}
ll query(int l, int r)
{
	long long gcd = arr[l];
	for (int j = 20; j >= 0; j--) {
    	if ((1 << j) <= r - l + 1) {
        	gcd = __gcd(gcd,lookup[l][j]);
        	l += 1 << j;
    	}
	}
	return gcd;
}
void solve()
{
	int n;
	cin >> n;
	n--;
	ll last;
	cin >> last;
	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		arr[i]=(llabs(x - last));
		last = x;
	}
	//SegmentTrees sgt(n);
	// 0 based indexing chal rahi hai
	//sgt.build(arr, 0, n - 1);
	// let the length be x
	// if x is possible then check low=x+1
	// if x is not possible then high = x-1
	buildSparseTable(n);
	int low=1,high=n;
	int ans=0,final_answer=1;
	while(low<=high)
	{
		bool check=false;
		int mid=(low+high)/2;
		for(int i=0;i<=(n-mid);i++)
		{
			if(query(i,i+mid-1)>1)
			{
				ans=mid;
				low=mid+1;
				check=true;
				break;
			}
		}
		if(!check)
		{
			high=mid-1;
		}
		final_answer=max(final_answer,ans+1);
	}
	cout<<final_answer<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
