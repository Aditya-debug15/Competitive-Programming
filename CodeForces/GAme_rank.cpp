#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fo(i,n) for(int i=0;i<n;i++)
#define foi(i, n) for (int i = n - 1; i >= 0; i--)
long long int M = 1e9 + 7;
#define vi vector<int>
#define vpi vector<pair<int,int>>
const int N = 1e4 + 9;
char s[N];
int basic_star(int rank)
{
	if (21 <= rank && rank <= 25)
		return 2;
	if (16 <= rank && rank <= 20)
		return 3;
	if (11 <= rank && rank <= 15)
		return 4;
	if (1 <= rank && rank <= 10)
		return 5;
	return 1e9;
}
void increment(int &rank, int &star)
{
    star++;
	if (star > basic_star(rank))
    {
		star = 1;
        --rank;
    }
}
void decrement(int &rank, int &star)
{
	if (!star && rank == 20 || rank >= 21) // nothing to do here as rank is greater than 21 or  star=0 and rank 20
		return;
    star--;
	if (star < 0)
		star = basic_star(++rank) - 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>s;
	int rank = 25;
	for (int i = 0, win = 0, star = 0; s[i]; ++i)
	{
		if (s[i] == 'W')
		{
			if (++win >= 3 && 6 <= rank && rank <= 25)
				increment(rank, star);
			increment(rank, star);
		}
		else
		{
			win = 0;
			decrement(rank, star);
		}
		if (rank <= 0)
        {
		    cout<<"Legend"<<endl;
            return 0;
        }
	}
	cout<<rank<<endl;
}